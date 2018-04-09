#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteRequestReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteRequestReject, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::QuoteRequestReject msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteRequestReject_0;
  set_field(msg, FIX::EncodedText{"DATA_227357572"}, QuoteRequestReject_0);
  set_field(msg, FIX::EncodedTextLen{1174255399}, QuoteRequestReject_0);
  set_field(msg, FIX::PreTradeAnonymity{true}, QuoteRequestReject_0);
  set_field(msg, FIX::PrivateQuote{false}, QuoteRequestReject_0);
  set_field(msg, FIX::QuoteReqID{"STRING_1843331481"}, QuoteRequestReject_0);
  set_field(msg, FIX::QuoteRequestRejectReason{6}, QuoteRequestReject_0);
  set_field(msg, FIX::RFQReqID{"STRING_1819285833"}, QuoteRequestReject_0);
  set_field(msg, FIX::RespondentType{1}, QuoteRequestReject_0);
  set_field(msg, FIX::Text{"STRING_1316573045"}, QuoteRequestReject_0);
  all_values.push_back(QuoteRequestReject_0);

  all_compo_names.insert("QuoteRequestReject");

  // QuotReqRjctGrp
  // Group QuotReqRjctGrp.NoRelatedSym
  {
    FIX50SP2::QuoteRequestReject::NoRelatedSym noRelatedSym_0_0;
    // QuotReqRjctGrp.NoRelatedSym
    multiset<string> QuotReqRjctGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::Account{"STRING_807613837"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::AccountType{1}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::AcctIDSource{99}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Currency{"CHF"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(22, 26, 47, 1, 8, 2006)}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::OrdType{'M'}, QuotReqRjctGrp_NoRelatedSym_0);
    FIX::OrderQty2 OrderQty2_19;
    OrderQty2_19.setString("18175966");
set_field(noRelatedSym_0_0, OrderQty2_19, QuotReqRjctGrp_NoRelatedSym_0);
    FIX::PrevClosePx PrevClosePx_9;
    PrevClosePx_9.setString("7210094");
set_field(noRelatedSym_0_0, PrevClosePx_9, QuotReqRjctGrp_NoRelatedSym_0);
    FIX::Price Price_20;
    Price_20.setString("10257585");
set_field(noRelatedSym_0_0, Price_20, QuotReqRjctGrp_NoRelatedSym_0);
    FIX::Price2 Price2_5;
    Price2_5.setString("17697119");
set_field(noRelatedSym_0_0, Price2_5, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::PriceType{1}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QtyType{0}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuotePriceType{8}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteRequestType{2}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteType{0}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlDate{"LOCALMKTDATE_427164359"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlDate2{"LOCALMKTDATE_1301121327"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlType{"STRING_C"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Side{'1'}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradeOriginationDate{"LOCALMKTDATE_621490513"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradingSessionID{"STRING_1"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradingSessionSubID{"STRING_7"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(7, 33, 14, 14, 2, 2009)}, QuotReqRjctGrp_NoRelatedSym_0);
    all_values.push_back(QuotReqRjctGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_19;
    set_field(noRelatedSym_0_0, FIX::AgreementCurrency{"CHF"}, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::AgreementDate{"LOCALMKTDATE_1143372972"}, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::AgreementDesc{"STRING_2052174581"}, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::AgreementID{"STRING_1233987176"}, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::DeliveryType{3}, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::EndDate{"LOCALMKTDATE_1473302632"}, FinancingDetails_19);
    FIX::MarginRatio MarginRatio_19;
    MarginRatio_19.setString("29.250000");
set_field(noRelatedSym_0_0, MarginRatio_19, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::StartDate{"LOCALMKTDATE_1256347021"}, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::TerminationType{2}, FinancingDetails_19);
    all_values.push_back(FinancingDetails_19);
    all_compo_names.insert("...NoRelatedSym.");

    // Instrument
    multiset<string> Instrument_69;
    FIX::AttachmentPoint AttachmentPoint_69;
    AttachmentPoint_69.setString("14.320000");
set_field(noRelatedSym_0_0, AttachmentPoint_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_878575373"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::CPProgram{1}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_1177515980"}, Instrument_69);
    FIX::CapPrice CapPrice_69;
    CapPrice_69.setString("1314843");
set_field(noRelatedSym_0_0, CapPrice_69, Instrument_69);
    FIX::ContractMultiplier ContractMultiplier_69;
    ContractMultiplier_69.setString("8844536");
set_field(noRelatedSym_0_0, ContractMultiplier_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{2}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_558648691"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_38091282"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1530108616"}, Instrument_69);
    FIX::CouponRate CouponRate_69;
    CouponRate_69.setString("8.830000");
set_field(noRelatedSym_0_0, CouponRate_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_659581795"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_141237669"}, Instrument_69);
    FIX::DetachmentPoint DetachmentPoint_69;
    DetachmentPoint_69.setString("96.390000");
set_field(noRelatedSym_0_0, DetachmentPoint_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_450161705"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{202467172}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_379292232"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{1206016639}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{1}, Instrument_69);
    FIX::Factor Factor_69;
    Factor_69.setString("15182724");
set_field(noRelatedSym_0_0, Factor_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{true}, Instrument_69);
    FIX::FloorPrice FloorPrice_69;
    FloorPrice_69.setString("15553229");
set_field(noRelatedSym_0_0, FloorPrice_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{3}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_891479478"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'6'}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_48590023"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_217298462"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_1755159375"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_264126923"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1746767159"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_36028770"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_1112129606"}, Instrument_69);
    FIX::MinPriceIncrement MinPriceIncrement_69;
    MinPriceIncrement_69.setString("7767994");
set_field(noRelatedSym_0_0, MinPriceIncrement_69, Instrument_69);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_69;
    MinPriceIncrementAmount_69.setString("1675131");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{1996583208}, Instrument_69);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_69;
    NotionalPercentageOutstanding_69.setString("75.930000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'7'}, Instrument_69);
    FIX::OptPayoutAmount OptPayoutAmount_69;
    OptPayoutAmount_69.setString("20346744");
set_field(noRelatedSym_0_0, OptPayoutAmount_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{2}, Instrument_69);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_69;
    OriginalNotionalPercentageOutstanding_69.setString("26.770000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_546772637"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{743960230}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_996934342"}, Instrument_69);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_69;
    PriceUnitOfMeasureQty_69.setString("9464274");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::Product{2}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_55467333"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_1284573339"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_1669417658"}, Instrument_69);
    FIX::RepurchaseRate RepurchaseRate_69;
    RepurchaseRate_69.setString("49.970000");
set_field(noRelatedSym_0_0, RepurchaseRate_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{692412613}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MM"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_514410827"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_1334239063"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_180363682"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_731709289"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_F"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_995836212"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_CTB"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SR"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'C'}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_1317997794"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_1688842599"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"CHF"}, Instrument_69);
    FIX::StrikeMultiplier StrikeMultiplier_69;
    StrikeMultiplier_69.setString("2675207");
set_field(noRelatedSym_0_0, StrikeMultiplier_69, Instrument_69);
    FIX::StrikePrice StrikePrice_69;
    StrikePrice_69.setString("18442562");
set_field(noRelatedSym_0_0, StrikePrice_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{1}, Instrument_69);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_69;
    StrikePriceBoundaryPrecision_69.setString("34.230000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{4}, Instrument_69);
    FIX::StrikeValue StrikeValue_69;
    StrikeValue_69.setString("17372945");
set_field(noRelatedSym_0_0, StrikeValue_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_1062352092"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_S"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_69);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_69;
    UnitOfMeasureQty_69.setString("13198647");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_CDS"}, Instrument_69);
    all_values.push_back(Instrument_69);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_140;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_140);
      FIX::ComplexEventPrice ComplexEventPrice_140;
      ComplexEventPrice_140.setString("6581552");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_140, ComplexEvents_NoComplexEvents_140);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_140);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_140;
      ComplexEventPriceBoundaryPrecision_140.setString("69.150000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_140, ComplexEvents_NoComplexEvents_140);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_140);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_140);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_140;
      ComplexOptPayoutAmount_140.setString("414325");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_140, ComplexEvents_NoComplexEvents_140);
      all_values.push_back(ComplexEvents_NoComplexEvents_140);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_277;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 5, 53, 4, 4, 2001)}, ComplexEventDates_NoComplexEventDates_277);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 30, 4, 3, 10, 2007)}, ComplexEventDates_NoComplexEventDates_277);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_277);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_571;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 39, 3)}, ComplexEventTimes_NoComplexEventTimes_571);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 48, 5)}, ComplexEventTimes_NoComplexEventTimes_571);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_571);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_278;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 52, 5, 15, 11, 2000)}, ComplexEventDates_NoComplexEventDates_278);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 24, 40, 8, 9, 2013)}, ComplexEventDates_NoComplexEventDates_278);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_278);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_572;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 51, 11)}, ComplexEventTimes_NoComplexEventTimes_572);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 7, 51)}, ComplexEventTimes_NoComplexEventTimes_572);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_572);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_573;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 22, 21)}, ComplexEventTimes_NoComplexEventTimes_573);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 1, 53)}, ComplexEventTimes_NoComplexEventTimes_573);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_573);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_574;
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 37, 32)}, ComplexEventTimes_NoComplexEventTimes_574);
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 14, 33)}, ComplexEventTimes_NoComplexEventTimes_574);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_574);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_279;
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 5, 2, 10, 5, 2011)}, ComplexEventDates_NoComplexEventDates_279);
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 14, 33, 3, 8, 2014)}, ComplexEventDates_NoComplexEventDates_279);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_279);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_575;
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 17, 15)}, ComplexEventTimes_NoComplexEventTimes_575);
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 9, 13)}, ComplexEventTimes_NoComplexEventTimes_575);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_575);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_576;
          set_field(noComplexEventTimes_0_0_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 42, 40)}, ComplexEventTimes_NoComplexEventTimes_576);
          set_field(noComplexEventTimes_0_0_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 46, 12)}, ComplexEventTimes_NoComplexEventTimes_576);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_576);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_577;
          set_field(noComplexEventTimes_0_0_2_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 9, 14)}, ComplexEventTimes_NoComplexEventTimes_577);
          set_field(noComplexEventTimes_0_0_2_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 37, 45)}, ComplexEventTimes_NoComplexEventTimes_577);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_577);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_141;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_141);
      FIX::ComplexEventPrice ComplexEventPrice_141;
      ComplexEventPrice_141.setString("14412158");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_141, ComplexEvents_NoComplexEvents_141);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_141);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_141;
      ComplexEventPriceBoundaryPrecision_141.setString("61.830000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_141, ComplexEvents_NoComplexEvents_141);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_141);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_141);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_141;
      ComplexOptPayoutAmount_141.setString("19434128");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_141, ComplexEvents_NoComplexEvents_141);
      all_values.push_back(ComplexEvents_NoComplexEvents_141);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_280;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 28, 34, 24, 2, 2003)}, ComplexEventDates_NoComplexEventDates_280);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 21, 12, 5, 12, 2005)}, ComplexEventDates_NoComplexEventDates_280);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_280);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_578;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 10, 9)}, ComplexEventTimes_NoComplexEventTimes_578);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 46, 16)}, ComplexEventTimes_NoComplexEventTimes_578);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_578);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_142;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_142);
      FIX::ComplexEventPrice ComplexEventPrice_142;
      ComplexEventPrice_142.setString("9785446");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_142, ComplexEvents_NoComplexEvents_142);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_142);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_142;
      ComplexEventPriceBoundaryPrecision_142.setString("16.190000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_142, ComplexEvents_NoComplexEvents_142);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_142);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_142);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_142;
      ComplexOptPayoutAmount_142.setString("1486308");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_142, ComplexEvents_NoComplexEvents_142);
      all_values.push_back(ComplexEvents_NoComplexEvents_142);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_281;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 30, 48, 16, 9, 2001)}, ComplexEventDates_NoComplexEventDates_281);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 41, 33, 19, 5, 2006)}, ComplexEventDates_NoComplexEventDates_281);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_281);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_579;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 34, 5)}, ComplexEventTimes_NoComplexEventTimes_579);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 44, 20)}, ComplexEventTimes_NoComplexEventTimes_579);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_579);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_282;
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 47, 48, 7, 12, 2003)}, ComplexEventDates_NoComplexEventDates_282);
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 5, 35, 6, 10, 2013)}, ComplexEventDates_NoComplexEventDates_282);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_282);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_580;
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 35, 32)}, ComplexEventTimes_NoComplexEventTimes_580);
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 56, 40)}, ComplexEventTimes_NoComplexEventTimes_580);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_580);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_141;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1234584629"}, EvntGrp_NoEvents_141);
      FIX::EventPx EventPx_141;
      EventPx_141.setString("12576454");
set_field(noEvents_0_1_0, EventPx_141, EvntGrp_NoEvents_141);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1649845245"}, EvntGrp_NoEvents_141);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(12, 29, 53, 17, 12, 2010)}, EvntGrp_NoEvents_141);
      set_field(noEvents_0_1_0, FIX::EventType{14}, EvntGrp_NoEvents_141);
      all_values.push_back(EvntGrp_NoEvents_141);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_130;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_637053560"}, InstrumentParties_NoInstrumentParties_130);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_130);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{106452455}, InstrumentParties_NoInstrumentParties_130);
      all_values.push_back(InstrumentParties_NoInstrumentParties_130);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_1792132987"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{226005670}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_266);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_1862433116"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{527681444}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_267);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268;
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubID{"STRING_1851916614"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268);
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubIDType{1911043970}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_268);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_143;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_578308667"}, SecAltIDGrp_NoSecurityAltID_143);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1706394437"}, SecAltIDGrp_NoSecurityAltID_143);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_143);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_138;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_602278215"}, SecurityXML_138);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{694338724}, SecurityXML_138);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_1283924393"}, SecurityXML_138);
    all_values.push_back(SecurityXML_138);
    all_compo_names.insert("...NoRelatedSym..");

    // OrderQtyData
    multiset<string> OrderQtyData_22;
    FIX::CashOrderQty CashOrderQty_22;
    CashOrderQty_22.setString("16144332");
set_field(noRelatedSym_0_0, CashOrderQty_22, OrderQtyData_22);
    FIX::OrderPercent OrderPercent_22;
    OrderPercent_22.setString("70.040000");
set_field(noRelatedSym_0_0, OrderPercent_22, OrderQtyData_22);
    FIX::OrderQty OrderQty_31;
    OrderQty_31.setString("401687");
set_field(noRelatedSym_0_0, OrderQty_31, OrderQtyData_22);
    set_field(noRelatedSym_0_0, FIX::RoundingDirection{'2'}, OrderQtyData_22);
    FIX::RoundingModulus RoundingModulus_22;
    RoundingModulus_22.setString("11297088");
set_field(noRelatedSym_0_0, RoundingModulus_22, OrderQtyData_22);
    all_values.push_back(OrderQtyData_22);
    all_compo_names.insert("...NoRelatedSym.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_115;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_1672127945"}, Parties_NoPartyIDs_115);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_115);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{32}, Parties_NoPartyIDs_115);
      all_values.push_back(Parties_NoPartyIDs_115);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_229;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_94782252"}, PtysSubGrp_NoPartySubIDs_229);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{28}, PtysSubGrp_NoPartySubIDs_229);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_229);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_5;
      set_field(noQuoteQualifiers_0_1_0, FIX::QuoteQualifier{'8'}, QuotQualGrp_NoQuoteQualifiers_5);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_5);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_1;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_6;
      set_field(noQuoteQualifiers_0_1_1, FIX::QuoteQualifier{'3'}, QuotQualGrp_NoQuoteQualifiers_6);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_6);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_2;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_7;
      set_field(noQuoteQualifiers_0_1_2, FIX::QuoteQualifier{'1'}, QuotQualGrp_NoQuoteQualifiers_7);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_7);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_2);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_0_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_3;
      FIX::LegOrderQty LegOrderQty_11;
      LegOrderQty_11.setString("5016949");
set_field(noLegs_0_1_0, LegOrderQty_11, QuotReqLegsGrp_NoLegs_3);
      FIX::LegQty LegQty_11;
      LegQty_11.setString("13413545");
set_field(noLegs_0_1_0, LegQty_11, QuotReqLegsGrp_NoLegs_3);
      set_field(noLegs_0_1_0, FIX::LegRefID{"STRING_869968766"}, QuotReqLegsGrp_NoLegs_3);
      set_field(noLegs_0_1_0, FIX::LegSettlDate{"LOCALMKTDATE_727700593"}, QuotReqLegsGrp_NoLegs_3);
      set_field(noLegs_0_1_0, FIX::LegSettlType{'1'}, QuotReqLegsGrp_NoLegs_3);
      set_field(noLegs_0_1_0, FIX::LegSwapType{4}, QuotReqLegsGrp_NoLegs_3);
      all_values.push_back(QuotReqLegsGrp_NoLegs_3);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_99;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_432133559"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{819864328}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_1367313653"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{1010442226}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_378775118"}, InstrumentLeg_99);
      FIX::LegContractMultiplier LegContractMultiplier_99;
      LegContractMultiplier_99.setString("19695918");
set_field(noLegs_0_1_0, LegContractMultiplier_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{1704780950}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1662699511"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_1436541492"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1576844307"}, InstrumentLeg_99);
      FIX::LegCouponRate LegCouponRate_99;
      LegCouponRate_99.setString("82.750000");
set_field(noLegs_0_1_0, LegCouponRate_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_2138075744"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1662720042"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{1588344949}, InstrumentLeg_99);
      FIX::LegFactor LegFactor_99;
      LegFactor_99.setString("5737366");
set_field(noLegs_0_1_0, LegFactor_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{117196465}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_1683127201"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_949872977"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_548873448"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_362058078"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_1345115444"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_1617603992"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1587377505"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1846810367"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'8'}, InstrumentLeg_99);
      FIX::LegOptionRatio LegOptionRatio_99;
      LegOptionRatio_99.setString("3098626");
set_field(noLegs_0_1_0, LegOptionRatio_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_427027312"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_1867778887"}, InstrumentLeg_99);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_99;
      LegPriceUnitOfMeasureQty_99.setString("17075128");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegProduct{859160871}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{540159568}, InstrumentLeg_99);
      FIX::LegRatioQty LegRatioQty_99;
      LegRatioQty_99.setString("9273428");
set_field(noLegs_0_1_0, LegRatioQty_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1869603097"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_918934686"}, InstrumentLeg_99);
      FIX::LegRepurchaseRate LegRepurchaseRate_99;
      LegRepurchaseRate_99.setString("10.590000");
set_field(noLegs_0_1_0, LegRepurchaseRate_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{1426900400}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_434150549"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_38508903"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_856261059"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_2137018824"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_29101000"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_1415330561"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSide{'1'}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_1691821042"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_99);
      FIX::LegStrikePrice LegStrikePrice_99;
      LegStrikePrice_99.setString("18090175");
set_field(noLegs_0_1_0, LegStrikePrice_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_391835415"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_611059782"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_210407307"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_753893493"}, InstrumentLeg_99);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_99;
      LegUnitOfMeasureQty_99.setString("19561752");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_99, InstrumentLeg_99);
      all_values.push_back(InstrumentLeg_99);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_195;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_193787350"}, LegSecAltIDGrp_NoLegSecurityAltID_195);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_1655501945"}, LegSecAltIDGrp_NoLegSecurityAltID_195);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_195);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_196;
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltID{"STRING_492002533"}, LegSecAltIDGrp_NoLegSecurityAltID_196);
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltIDSource{"STRING_503649973"}, LegSecAltIDGrp_NoLegSecurityAltID_196);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_196);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_197;
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltID{"STRING_2082529257"}, LegSecAltIDGrp_NoLegSecurityAltID_197);
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltIDSource{"STRING_212297772"}, LegSecAltIDGrp_NoLegSecurityAltID_197);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_197);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_5;
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveCurrency{"JPY"}, LegBenchmarkCurveData_5);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveName{"STRING_752457340"}, LegBenchmarkCurveData_5);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurvePoint{"STRING_991021997"}, LegBenchmarkCurveData_5);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_5;
      LegBenchmarkPrice_5.setString("5163259");
set_field(noLegs_0_1_0, LegBenchmarkPrice_5, LegBenchmarkCurveData_5);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkPriceType{1671392026}, LegBenchmarkCurveData_5);
      all_values.push_back(LegBenchmarkCurveData_5);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_25;
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationType{"STRING_1943226330"}, LegStipulations_NoLegStipulations_25);
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationValue{"STRING_2105542575"}, LegStipulations_NoLegStipulations_25);
        all_values.push_back(LegStipulations_NoLegStipulations_25);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_26;
        set_field(noLegStipulations_0_0_2_1, FIX::LegStipulationType{"STRING_1778981960"}, LegStipulations_NoLegStipulations_26);
        set_field(noLegStipulations_0_0_2_1, FIX::LegStipulationValue{"STRING_652003741"}, LegStipulations_NoLegStipulations_26);
        all_values.push_back(LegStipulations_NoLegStipulations_26);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_27;
        set_field(noLegStipulations_0_0_2_2, FIX::LegStipulationType{"STRING_2095077752"}, LegStipulations_NoLegStipulations_27);
        set_field(noLegStipulations_0_0_2_2, FIX::LegStipulationValue{"STRING_1808082960"}, LegStipulations_NoLegStipulations_27);
        all_values.push_back(LegStipulations_NoLegStipulations_27);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_121;
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyID{"STRING_1182527917"}, NestedParties_NoNestedPartyIDs_121);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_121);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyRole{776042516}, NestedParties_NoNestedPartyIDs_121);
        all_values.push_back(NestedParties_NoNestedPartyIDs_121);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_250;
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubID{"STRING_1013954213"}, NstdPtysSubGrp_NoNestedPartySubIDs_250);
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubIDType{1167877931}, NstdPtysSubGrp_NoNestedPartySubIDs_250);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_250);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_251;
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubID{"STRING_1454774504"}, NstdPtysSubGrp_NoNestedPartySubIDs_251);
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubIDType{1224361521}, NstdPtysSubGrp_NoNestedPartySubIDs_251);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_251);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_252;
          set_field(noNestedPartySubIDs_0_0_0_3_2, FIX::NestedPartySubID{"STRING_1921771424"}, NstdPtysSubGrp_NoNestedPartySubIDs_252);
          set_field(noNestedPartySubIDs_0_0_0_3_2, FIX::NestedPartySubIDType{1263466083}, NstdPtysSubGrp_NoNestedPartySubIDs_252);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_252);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_2);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_25;
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveCurrency{"USD"}, SpreadOrBenchmarkCurveData_25);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveName{"STRING_EONIA"}, SpreadOrBenchmarkCurveData_25);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurvePoint{"STRING_1396891705"}, SpreadOrBenchmarkCurveData_25);
    FIX::BenchmarkPrice BenchmarkPrice_25;
    BenchmarkPrice_25.setString("4717250");
set_field(noRelatedSym_0_0, BenchmarkPrice_25, SpreadOrBenchmarkCurveData_25);
    set_field(noRelatedSym_0_0, FIX::BenchmarkPriceType{706529990}, SpreadOrBenchmarkCurveData_25);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityID{"STRING_1609189478"}, SpreadOrBenchmarkCurveData_25);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityIDSource{"STRING_535404257"}, SpreadOrBenchmarkCurveData_25);
    FIX::Spread Spread_25;
    Spread_25.setString("15007364");
set_field(noRelatedSym_0_0, Spread_25, SpreadOrBenchmarkCurveData_25);
    all_values.push_back(SpreadOrBenchmarkCurveData_25);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_41;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_LOTVAR"}, Stipulations_NoStipulations_41);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_2017062400"}, Stipulations_NoStipulations_41);
      all_values.push_back(Stipulations_NoStipulations_41);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_42;
      set_field(noStipulations_0_1_1, FIX::StipulationType{"STRING_PPC"}, Stipulations_NoStipulations_42);
      set_field(noStipulations_0_1_1, FIX::StipulationValue{"STRING_1119415664"}, Stipulations_NoStipulations_42);
      all_values.push_back(Stipulations_NoStipulations_42);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_99;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1843614124"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{750913976}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_317325175"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{1791208228}, UnderlyingInstrument_99);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_99;
      UnderlyingAdjustedQuantity_99.setString("4115132");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_99, UnderlyingInstrument_99);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_99;
      UnderlyingAllocationPercent_99.setString("58.290000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_99, UnderlyingInstrument_99);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_99;
      UnderlyingAttachmentPoint_99.setString("24.980000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_1763933643"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_1013218345"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_1669967220"}, UnderlyingInstrument_99);
      FIX::UnderlyingCapValue UnderlyingCapValue_99;
      UnderlyingCapValue_99.setString("6304042");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_99, UnderlyingInstrument_99);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_99;
      UnderlyingCashAmount_99.setString("336126");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_99);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_99;
      UnderlyingContractMultiplier_99.setString("18547657");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{1955384052}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_93240512"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_612171254"}, UnderlyingInstrument_99);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_99;
      UnderlyingCouponRate_99.setString("91.780000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_864724892"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_99);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_99;
      UnderlyingCurrentValue_99.setString("15712548");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_99, UnderlyingInstrument_99);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_99;
      UnderlyingDetachmentPoint_99.setString("87.900000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_99, UnderlyingInstrument_99);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_99;
      UnderlyingDirtyPrice_99.setString("7831048");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_99, UnderlyingInstrument_99);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_99;
      UnderlyingEndPrice_99.setString("9245077");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_99, UnderlyingInstrument_99);
      FIX::UnderlyingEndValue UnderlyingEndValue_99;
      UnderlyingEndValue_99.setString("16849319");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{162047494}, UnderlyingInstrument_99);
      FIX::UnderlyingFXRate UnderlyingFXRate_99;
      UnderlyingFXRate_99.setString("7940864");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_99);
      FIX::UnderlyingFactor UnderlyingFactor_99;
      UnderlyingFactor_99.setString("12814631");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{459407892}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_1119133986"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2032377134"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_776733067"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_762858566"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_296406775"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1013908897"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1589111064"}, UnderlyingInstrument_99);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_99;
      UnderlyingNotionalPercentageOutstanding_99.setString("4.190000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_99);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_99;
      UnderlyingOriginalNotionalPercentageOutstanding_99.setString("46.370000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_543260980"}, UnderlyingInstrument_99);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_99;
      UnderlyingPriceUnitOfMeasureQty_99.setString("20607398");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{2088852714}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{250543062}, UnderlyingInstrument_99);
      FIX::UnderlyingPx UnderlyingPx_99;
      UnderlyingPx_99.setString("18686402");
set_field(noUnderlyings_0_1_0, UnderlyingPx_99, UnderlyingInstrument_99);
      FIX::UnderlyingQty UnderlyingQty_99;
      UnderlyingQty_99.setString("346095");
set_field(noUnderlyings_0_1_0, UnderlyingQty_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_862714316"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1644615806"}, UnderlyingInstrument_99);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_99;
      UnderlyingRepurchaseRate_99.setString("44.700000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{724293628}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_1892316435"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_323105705"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_47578770"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_527937674"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_1247613410"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_1732510731"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_689985168"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_2041699867"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_1008030592"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_99);
      FIX::UnderlyingStartValue UnderlyingStartValue_99;
      UnderlyingStartValue_99.setString("3536241");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2127164578"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_99);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_99;
      UnderlyingStrikePrice_99.setString("7425394");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_5264940"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_2144266076"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_184166913"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_2065605359"}, UnderlyingInstrument_99);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_99;
      UnderlyingUnitOfMeasureQty_99.setString("20239096");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_99, UnderlyingInstrument_99);
      all_values.push_back(UnderlyingInstrument_99);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_206;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_461382691"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_206);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1937165893"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_206);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_206);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_207;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_1237130616"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_207);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_711925753"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_207);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_207);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_208;
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_1658322521"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_208);
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1271740194"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_208);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_208);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_194;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_1155454679"}, UnderlyingStipulations_NoUnderlyingStips_194);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_23591017"}, UnderlyingStipulations_NoUnderlyingStips_194);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_194);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_195;
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipType{"STRING_151450050"}, UnderlyingStipulations_NoUnderlyingStips_195);
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipValue{"STRING_900287466"}, UnderlyingStipulations_NoUnderlyingStips_195);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_195);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_215;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_199028821"}, UndlyInstrumentParties_NoUndlyInstrumentParties_215);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_215);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{1594310132}, UndlyInstrumentParties_NoUndlyInstrumentParties_215);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_215);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2118210309"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1488526351}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_792086496"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1942174988}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_100;
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1842150463"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuerLen{771767427}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1651033153"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDescLen{825023994}, UnderlyingInstrument_100);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_100;
      UnderlyingAdjustedQuantity_100.setString("15143069");
set_field(noUnderlyings_0_1_1, UnderlyingAdjustedQuantity_100, UnderlyingInstrument_100);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_100;
      UnderlyingAllocationPercent_100.setString("80.930000");
set_field(noUnderlyings_0_1_1, UnderlyingAllocationPercent_100, UnderlyingInstrument_100);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_100;
      UnderlyingAttachmentPoint_100.setString("64.220000");
set_field(noUnderlyings_0_1_1, UnderlyingAttachmentPoint_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCFICode{"STRING_1698473837"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPProgram{"STRING_1574419805"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPRegType{"STRING_698232444"}, UnderlyingInstrument_100);
      FIX::UnderlyingCapValue UnderlyingCapValue_100;
      UnderlyingCapValue_100.setString("8467517");
set_field(noUnderlyings_0_1_1, UnderlyingCapValue_100, UnderlyingInstrument_100);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_100;
      UnderlyingCashAmount_100.setString("20358024");
set_field(noUnderlyings_0_1_1, UnderlyingCashAmount_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_100);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_100;
      UnderlyingContractMultiplier_100.setString("20838823");
set_field(noUnderlyings_0_1_1, UnderlyingContractMultiplier_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingContractMultiplierUnit{600244602}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_2146237211"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1208138903"}, UnderlyingInstrument_100);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_100;
      UnderlyingCouponRate_100.setString("10.240000");
set_field(noUnderlyings_0_1_1, UnderlyingCouponRate_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCreditRating{"STRING_1154208242"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_100);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_100;
      UnderlyingCurrentValue_100.setString("20544957");
set_field(noUnderlyings_0_1_1, UnderlyingCurrentValue_100, UnderlyingInstrument_100);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_100;
      UnderlyingDetachmentPoint_100.setString("66.420000");
set_field(noUnderlyings_0_1_1, UnderlyingDetachmentPoint_100, UnderlyingInstrument_100);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_100;
      UnderlyingDirtyPrice_100.setString("3778798");
set_field(noUnderlyings_0_1_1, UnderlyingDirtyPrice_100, UnderlyingInstrument_100);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_100;
      UnderlyingEndPrice_100.setString("13352372");
set_field(noUnderlyings_0_1_1, UnderlyingEndPrice_100, UnderlyingInstrument_100);
      FIX::UnderlyingEndValue UnderlyingEndValue_100;
      UnderlyingEndValue_100.setString("10252531");
set_field(noUnderlyings_0_1_1, UnderlyingEndValue_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingExerciseStyle{161935799}, UnderlyingInstrument_100);
      FIX::UnderlyingFXRate UnderlyingFXRate_100;
      UnderlyingFXRate_100.setString("13059638");
set_field(noUnderlyings_0_1_1, UnderlyingFXRate_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_100);
      FIX::UnderlyingFactor UnderlyingFactor_100;
      UnderlyingFactor_100.setString("9540222");
set_field(noUnderlyings_0_1_1, UnderlyingFactor_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFlowScheduleType{1100655203}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingInstrRegistry{"STRING_60962644"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1725789723"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssuer{"STRING_604204708"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_885986638"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1092612999"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_113019153"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1707793060"}, UnderlyingInstrument_100);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_100;
      UnderlyingNotionalPercentageOutstanding_100.setString("31.880000");
set_field(noUnderlyings_0_1_1, UnderlyingNotionalPercentageOutstanding_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_100);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_100;
      UnderlyingOriginalNotionalPercentageOutstanding_100.setString("18.570000");
set_field(noUnderlyings_0_1_1, UnderlyingOriginalNotionalPercentageOutstanding_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1490354928"}, UnderlyingInstrument_100);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_100;
      UnderlyingPriceUnitOfMeasureQty_100.setString("15757578");
set_field(noUnderlyings_0_1_1, UnderlyingPriceUnitOfMeasureQty_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingProduct{746456547}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPutOrCall{1426753637}, UnderlyingInstrument_100);
      FIX::UnderlyingPx UnderlyingPx_100;
      UnderlyingPx_100.setString("285187");
set_field(noUnderlyings_0_1_1, UnderlyingPx_100, UnderlyingInstrument_100);
      FIX::UnderlyingQty UnderlyingQty_100;
      UnderlyingQty_100.setString("7452101");
set_field(noUnderlyings_0_1_1, UnderlyingQty_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_487408892"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_55919785"}, UnderlyingInstrument_100);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_100;
      UnderlyingRepurchaseRate_100.setString("83.520000");
set_field(noUnderlyings_0_1_1, UnderlyingRepurchaseRate_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepurchaseTerm{1719138812}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRestructuringType{"STRING_234770859"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityDesc{"STRING_1806430412"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1150081806"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityID{"STRING_612650755"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityIDSource{"STRING_994183966"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecuritySubType{"STRING_27851284"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityType{"STRING_774586554"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSeniority{"STRING_152664181"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlMethod{"STRING_394147113"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_100);
      FIX::UnderlyingStartValue UnderlyingStartValue_100;
      UnderlyingStartValue_100.setString("12533193");
set_field(noUnderlyings_0_1_1, UnderlyingStartValue_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_455109758"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_100);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_100;
      UnderlyingStrikePrice_100.setString("13410963");
set_field(noUnderlyings_0_1_1, UnderlyingStrikePrice_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbol{"STRING_252044276"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbolSfx{"STRING_1970543245"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingTimeUnit{"STRING_901405809"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_895647465"}, UnderlyingInstrument_100);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_100;
      UnderlyingUnitOfMeasureQty_100.setString("15104985");
set_field(noUnderlyings_0_1_1, UnderlyingUnitOfMeasureQty_100, UnderlyingInstrument_100);
      all_values.push_back(UnderlyingInstrument_100);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_209;
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_238518745"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_209);
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_938772715"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_209);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_209);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_196;
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipType{"STRING_1665272382"}, UnderlyingStipulations_NoUnderlyingStips_196);
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipValue{"STRING_967291476"}, UnderlyingStipulations_NoUnderlyingStips_196);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_196);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_216;
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_5197626"}, UndlyInstrumentParties_NoUndlyInstrumentParties_216);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_216);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyRole{256065379}, UndlyInstrumentParties_NoUndlyInstrumentParties_216);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_216);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1257982120"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{2062495791}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_726934596"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1870632875}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_909196109"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{754785880}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_217;
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_497735782"}, UndlyInstrumentParties_NoUndlyInstrumentParties_217);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_217);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyRole{1148932994}, UndlyInstrumentParties_NoUndlyInstrumentParties_217);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_217);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_167696026"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1604042752}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1385775910"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{2025220118}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_797655500"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{1637820186}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_101;
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuer{"DATA_1848279716"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuerLen{1699061309}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_385984003"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDescLen{1211294624}, UnderlyingInstrument_101);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_101;
      UnderlyingAdjustedQuantity_101.setString("7115253");
set_field(noUnderlyings_0_1_2, UnderlyingAdjustedQuantity_101, UnderlyingInstrument_101);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_101;
      UnderlyingAllocationPercent_101.setString("27.490000");
set_field(noUnderlyings_0_1_2, UnderlyingAllocationPercent_101, UnderlyingInstrument_101);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_101;
      UnderlyingAttachmentPoint_101.setString("36.910000");
set_field(noUnderlyings_0_1_2, UnderlyingAttachmentPoint_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCFICode{"STRING_470445892"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPProgram{"STRING_142291483"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPRegType{"STRING_969875167"}, UnderlyingInstrument_101);
      FIX::UnderlyingCapValue UnderlyingCapValue_101;
      UnderlyingCapValue_101.setString("9745765");
set_field(noUnderlyings_0_1_2, UnderlyingCapValue_101, UnderlyingInstrument_101);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_101;
      UnderlyingCashAmount_101.setString("1474891");
set_field(noUnderlyings_0_1_2, UnderlyingCashAmount_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_101);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_101;
      UnderlyingContractMultiplier_101.setString("12306419");
set_field(noUnderlyings_0_1_2, UnderlyingContractMultiplier_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingContractMultiplierUnit{1871825548}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1103584900"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1145654090"}, UnderlyingInstrument_101);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_101;
      UnderlyingCouponRate_101.setString("64.970000");
set_field(noUnderlyings_0_1_2, UnderlyingCouponRate_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCreditRating{"STRING_826734128"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_101);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_101;
      UnderlyingCurrentValue_101.setString("13244699");
set_field(noUnderlyings_0_1_2, UnderlyingCurrentValue_101, UnderlyingInstrument_101);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_101;
      UnderlyingDetachmentPoint_101.setString("68.420000");
set_field(noUnderlyings_0_1_2, UnderlyingDetachmentPoint_101, UnderlyingInstrument_101);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_101;
      UnderlyingDirtyPrice_101.setString("2075117");
set_field(noUnderlyings_0_1_2, UnderlyingDirtyPrice_101, UnderlyingInstrument_101);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_101;
      UnderlyingEndPrice_101.setString("14033308");
set_field(noUnderlyings_0_1_2, UnderlyingEndPrice_101, UnderlyingInstrument_101);
      FIX::UnderlyingEndValue UnderlyingEndValue_101;
      UnderlyingEndValue_101.setString("11369228");
set_field(noUnderlyings_0_1_2, UnderlyingEndValue_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingExerciseStyle{1811554475}, UnderlyingInstrument_101);
      FIX::UnderlyingFXRate UnderlyingFXRate_101;
      UnderlyingFXRate_101.setString("6416231");
set_field(noUnderlyings_0_1_2, UnderlyingFXRate_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_101);
      FIX::UnderlyingFactor UnderlyingFactor_101;
      UnderlyingFactor_101.setString("4617263");
set_field(noUnderlyings_0_1_2, UnderlyingFactor_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFlowScheduleType{131959695}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingInstrRegistry{"STRING_715455407"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_13303989"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssuer{"STRING_517943698"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_1926750031"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_724829317"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1142446447"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1929333722"}, UnderlyingInstrument_101);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_101;
      UnderlyingNotionalPercentageOutstanding_101.setString("52.090000");
set_field(noUnderlyings_0_1_2, UnderlyingNotionalPercentageOutstanding_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_101);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_101;
      UnderlyingOriginalNotionalPercentageOutstanding_101.setString("52.410000");
set_field(noUnderlyings_0_1_2, UnderlyingOriginalNotionalPercentageOutstanding_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_22368129"}, UnderlyingInstrument_101);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_101;
      UnderlyingPriceUnitOfMeasureQty_101.setString("14322270");
set_field(noUnderlyings_0_1_2, UnderlyingPriceUnitOfMeasureQty_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingProduct{597328021}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPutOrCall{1253010075}, UnderlyingInstrument_101);
      FIX::UnderlyingPx UnderlyingPx_101;
      UnderlyingPx_101.setString("11565689");
set_field(noUnderlyings_0_1_2, UnderlyingPx_101, UnderlyingInstrument_101);
      FIX::UnderlyingQty UnderlyingQty_101;
      UnderlyingQty_101.setString("17009129");
set_field(noUnderlyings_0_1_2, UnderlyingQty_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_251180517"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1607845438"}, UnderlyingInstrument_101);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_101;
      UnderlyingRepurchaseRate_101.setString("34.010000");
set_field(noUnderlyings_0_1_2, UnderlyingRepurchaseRate_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepurchaseTerm{158547069}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRestructuringType{"STRING_666424168"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityDesc{"STRING_1704633311"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1127773911"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityID{"STRING_873935891"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityIDSource{"STRING_960480558"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecuritySubType{"STRING_117213131"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityType{"STRING_538006719"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSeniority{"STRING_1602103714"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlMethod{"STRING_1131872470"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_101);
      FIX::UnderlyingStartValue UnderlyingStartValue_101;
      UnderlyingStartValue_101.setString("17340634");
set_field(noUnderlyings_0_1_2, UnderlyingStartValue_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1847327877"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_101);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_101;
      UnderlyingStrikePrice_101.setString("16265942");
set_field(noUnderlyings_0_1_2, UnderlyingStrikePrice_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbol{"STRING_1737866353"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbolSfx{"STRING_1246969907"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingTimeUnit{"STRING_1408444334"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_785657915"}, UnderlyingInstrument_101);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_101;
      UnderlyingUnitOfMeasureQty_101.setString("3842241");
set_field(noUnderlyings_0_1_2, UnderlyingUnitOfMeasureQty_101, UnderlyingInstrument_101);
      all_values.push_back(UnderlyingInstrument_101);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_210;
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_808026044"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_210);
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1816451231"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_210);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_210);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_211;
        set_field(noUnderlyingSecurityAltID_0_2_2_1, FIX::UnderlyingSecurityAltID{"STRING_610013948"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_211);
        set_field(noUnderlyingSecurityAltID_0_2_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_2061036119"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_211);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_211);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_197;
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipType{"STRING_163443222"}, UnderlyingStipulations_NoUnderlyingStips_197);
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipValue{"STRING_164732989"}, UnderlyingStipulations_NoUnderlyingStips_197);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_197);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_198;
        set_field(noUnderlyingStips_0_2_2_1, FIX::UnderlyingStipType{"STRING_285898315"}, UnderlyingStipulations_NoUnderlyingStips_198);
        set_field(noUnderlyingStips_0_2_2_1, FIX::UnderlyingStipValue{"STRING_543606623"}, UnderlyingStipulations_NoUnderlyingStips_198);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_198);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_199;
        set_field(noUnderlyingStips_0_2_2_2, FIX::UnderlyingStipType{"STRING_323280058"}, UnderlyingStipulations_NoUnderlyingStips_199);
        set_field(noUnderlyingStips_0_2_2_2, FIX::UnderlyingStipValue{"STRING_952322483"}, UnderlyingStipulations_NoUnderlyingStips_199);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_199);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_218;
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1451053969"}, UndlyInstrumentParties_NoUndlyInstrumentParties_218);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_218);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyRole{1061236845}, UndlyInstrumentParties_NoUndlyInstrumentParties_218);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_218);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_216781446"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{515856911}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_2);
    }
    // YieldData
    multiset<string> YieldData_20;
    FIX::Yield Yield_20;
    Yield_20.setString("59.230000");
set_field(noRelatedSym_0_0, Yield_20, YieldData_20);
    set_field(noRelatedSym_0_0, FIX::YieldCalcDate{"LOCALMKTDATE_1216514493"}, YieldData_20);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionDate{"LOCALMKTDATE_102436673"}, YieldData_20);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_20;
    YieldRedemptionPrice_20.setString("2525001");
set_field(noRelatedSym_0_0, YieldRedemptionPrice_20, YieldData_20);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionPriceType{82067881}, YieldData_20);
    set_field(noRelatedSym_0_0, FIX::YieldType{"STRING_PUT"}, YieldData_20);
    all_values.push_back(YieldData_20);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::QuoteRequestReject::NoRelatedSym noRelatedSym_0_1;
    // QuotReqRjctGrp.NoRelatedSym
    multiset<string> QuotReqRjctGrp_NoRelatedSym_1;
    set_field(noRelatedSym_0_1, FIX::Account{"STRING_1879094413"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::AccountType{1}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::AcctIDSource{3}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::Currency{"USD"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::ExpireTime{FIX::UTCTIMESTAMP(3, 26, 54, 23, 6, 2015)}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::OrdType{'6'}, QuotReqRjctGrp_NoRelatedSym_1);
    FIX::OrderQty2 OrderQty2_20;
    OrderQty2_20.setString("13444200");
set_field(noRelatedSym_0_1, OrderQty2_20, QuotReqRjctGrp_NoRelatedSym_1);
    FIX::PrevClosePx PrevClosePx_10;
    PrevClosePx_10.setString("4710730");
set_field(noRelatedSym_0_1, PrevClosePx_10, QuotReqRjctGrp_NoRelatedSym_1);
    FIX::Price Price_21;
    Price_21.setString("3223211");
set_field(noRelatedSym_0_1, Price_21, QuotReqRjctGrp_NoRelatedSym_1);
    FIX::Price2 Price2_6;
    Price2_6.setString("16677000");
set_field(noRelatedSym_0_1, Price2_6, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::PriceType{5}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QtyType{0}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QuotePriceType{6}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QuoteRequestType{2}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QuoteType{1}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::SettlDate{"LOCALMKTDATE_392053838"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::SettlDate2{"LOCALMKTDATE_1318951663"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::SettlType{"STRING_8"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::Side{'2'}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::TradeOriginationDate{"LOCALMKTDATE_387982508"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::TradingSessionID{"STRING_2"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::TradingSessionSubID{"STRING_5"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::TransactTime{FIX::UTCTIMESTAMP(14, 38, 17, 15, 11, 2005)}, QuotReqRjctGrp_NoRelatedSym_1);
    all_values.push_back(QuotReqRjctGrp_NoRelatedSym_1);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_20;
    set_field(noRelatedSym_0_1, FIX::AgreementCurrency{"CAN"}, FinancingDetails_20);
    set_field(noRelatedSym_0_1, FIX::AgreementDate{"LOCALMKTDATE_1866744025"}, FinancingDetails_20);
    set_field(noRelatedSym_0_1, FIX::AgreementDesc{"STRING_666323164"}, FinancingDetails_20);
    set_field(noRelatedSym_0_1, FIX::AgreementID{"STRING_689404484"}, FinancingDetails_20);
    set_field(noRelatedSym_0_1, FIX::DeliveryType{2}, FinancingDetails_20);
    set_field(noRelatedSym_0_1, FIX::EndDate{"LOCALMKTDATE_851497856"}, FinancingDetails_20);
    FIX::MarginRatio MarginRatio_20;
    MarginRatio_20.setString("90.340000");
set_field(noRelatedSym_0_1, MarginRatio_20, FinancingDetails_20);
    set_field(noRelatedSym_0_1, FIX::StartDate{"LOCALMKTDATE_95883753"}, FinancingDetails_20);
    set_field(noRelatedSym_0_1, FIX::TerminationType{4}, FinancingDetails_20);
    all_values.push_back(FinancingDetails_20);
    all_compo_names.insert("...NoRelatedSym.");

    // Instrument
    multiset<string> Instrument_70;
    FIX::AttachmentPoint AttachmentPoint_70;
    AttachmentPoint_70.setString("2.070000");
set_field(noRelatedSym_0_1, AttachmentPoint_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_1763583817"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::CPProgram{1}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_1213517667"}, Instrument_70);
    FIX::CapPrice CapPrice_70;
    CapPrice_70.setString("5873705");
set_field(noRelatedSym_0_1, CapPrice_70, Instrument_70);
    FIX::ContractMultiplier ContractMultiplier_70;
    ContractMultiplier_70.setString("17006529");
set_field(noRelatedSym_0_1, ContractMultiplier_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{1}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_979424393"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_872120938"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_403035892"}, Instrument_70);
    FIX::CouponRate CouponRate_70;
    CouponRate_70.setString("41.540000");
set_field(noRelatedSym_0_1, CouponRate_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_1260103447"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_358160134"}, Instrument_70);
    FIX::DetachmentPoint DetachmentPoint_70;
    DetachmentPoint_70.setString("4.190000");
set_field(noRelatedSym_0_1, DetachmentPoint_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_1730153837"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{520244508}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_1902681098"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{1872654814}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{2}, Instrument_70);
    FIX::Factor Factor_70;
    Factor_70.setString("18240732");
set_field(noRelatedSym_0_1, Factor_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{false}, Instrument_70);
    FIX::FloorPrice FloorPrice_70;
    FloorPrice_70.setString("7507227");
set_field(noRelatedSym_0_1, FloorPrice_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{2}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_1961783438"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_943988416"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_665797646"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_1908246255"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::ListMethod{1}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_1988368509"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_551202814"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_655972339"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_439367566"}, Instrument_70);
    FIX::MinPriceIncrement MinPriceIncrement_70;
    MinPriceIncrement_70.setString("17647204");
set_field(noRelatedSym_0_1, MinPriceIncrement_70, Instrument_70);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_70;
    MinPriceIncrementAmount_70.setString("12433428");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{2140020489}, Instrument_70);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_70;
    NotionalPercentageOutstanding_70.setString("51.570000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'7'}, Instrument_70);
    FIX::OptPayoutAmount OptPayoutAmount_70;
    OptPayoutAmount_70.setString("8646577");
set_field(noRelatedSym_0_1, OptPayoutAmount_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{3}, Instrument_70);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_70;
    OriginalNotionalPercentageOutstanding_70.setString("77.930000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_2124761227"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{928781184}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_1707431416"}, Instrument_70);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_70;
    PriceUnitOfMeasureQty_70.setString("14490256");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::Product{6}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_1432602582"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{0}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_257581594"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_1758383227"}, Instrument_70);
    FIX::RepurchaseRate RepurchaseRate_70;
    RepurchaseRate_70.setString("75.930000");
set_field(noRelatedSym_0_1, RepurchaseRate_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{1008304331}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_MR"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_400077383"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_300947905"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_599929017"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_1065875029"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_7"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_2"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_906759890"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_MPO"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SR"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'P'}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_230150160"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_1391632772"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"JPY"}, Instrument_70);
    FIX::StrikeMultiplier StrikeMultiplier_70;
    StrikeMultiplier_70.setString("14669164");
set_field(noRelatedSym_0_1, StrikeMultiplier_70, Instrument_70);
    FIX::StrikePrice StrikePrice_70;
    StrikePrice_70.setString("558384");
set_field(noRelatedSym_0_1, StrikePrice_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{4}, Instrument_70);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_70;
    StrikePriceBoundaryPrecision_70.setString("5.560000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{2}, Instrument_70);
    FIX::StrikeValue StrikeValue_70;
    StrikeValue_70.setString("18971375");
set_field(noRelatedSym_0_1, StrikeValue_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_2144645120"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_WI"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_S"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_70);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_70;
    UnitOfMeasureQty_70.setString("4889969");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_FUT"}, Instrument_70);
    all_values.push_back(Instrument_70);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_143;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_143);
      FIX::ComplexEventPrice ComplexEventPrice_143;
      ComplexEventPrice_143.setString("18440394");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_143, ComplexEvents_NoComplexEvents_143);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_143);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_143;
      ComplexEventPriceBoundaryPrecision_143.setString("18.930000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_143, ComplexEvents_NoComplexEvents_143);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_143);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_143);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_143;
      ComplexOptPayoutAmount_143.setString("3932432");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_143, ComplexEvents_NoComplexEvents_143);
      all_values.push_back(ComplexEvents_NoComplexEvents_143);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_283;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 9, 34, 14, 11, 2006)}, ComplexEventDates_NoComplexEventDates_283);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 49, 3, 20, 6, 2015)}, ComplexEventDates_NoComplexEventDates_283);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_283);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_581;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 8, 56)}, ComplexEventTimes_NoComplexEventTimes_581);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 58, 40)}, ComplexEventTimes_NoComplexEventTimes_581);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_581);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_284;
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 40, 0, 9, 6, 2003)}, ComplexEventDates_NoComplexEventDates_284);
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 53, 37, 7, 12, 2011)}, ComplexEventDates_NoComplexEventDates_284);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_284);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_582;
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 26, 8)}, ComplexEventTimes_NoComplexEventTimes_582);
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 33, 27)}, ComplexEventTimes_NoComplexEventTimes_582);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_582);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_583;
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 35, 1)}, ComplexEventTimes_NoComplexEventTimes_583);
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 51, 38)}, ComplexEventTimes_NoComplexEventTimes_583);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_583);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_285;
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 10, 12, 3, 4, 2015)}, ComplexEventDates_NoComplexEventDates_285);
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 24, 23, 27, 5, 2008)}, ComplexEventDates_NoComplexEventDates_285);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_285);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_584;
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 10, 16)}, ComplexEventTimes_NoComplexEventTimes_584);
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 41, 51)}, ComplexEventTimes_NoComplexEventTimes_584);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_584);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_585;
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 19, 42)}, ComplexEventTimes_NoComplexEventTimes_585);
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 25, 44)}, ComplexEventTimes_NoComplexEventTimes_585);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_585);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_142;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_1655689031"}, EvntGrp_NoEvents_142);
      FIX::EventPx EventPx_142;
      EventPx_142.setString("9183739");
set_field(noEvents_1_1_0, EventPx_142, EvntGrp_NoEvents_142);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_844030015"}, EvntGrp_NoEvents_142);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(5, 34, 1, 1, 4, 2010)}, EvntGrp_NoEvents_142);
      set_field(noEvents_1_1_0, FIX::EventType{9}, EvntGrp_NoEvents_142);
      all_values.push_back(EvntGrp_NoEvents_142);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_131;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_1607413519"}, InstrumentParties_NoInstrumentParties_131);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_131);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{574653783}, InstrumentParties_NoInstrumentParties_131);
      all_values.push_back(InstrumentParties_NoInstrumentParties_131);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_588418922"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{1913079440}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_269);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_132;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_1365109225"}, InstrumentParties_NoInstrumentParties_132);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_132);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{175582193}, InstrumentParties_NoInstrumentParties_132);
      all_values.push_back(InstrumentParties_NoInstrumentParties_132);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_2091309809"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{1176458830}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271;
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubID{"STRING_776701947"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271);
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubIDType{1649213043}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272;
        set_field(noInstrumentPartySubIDs_1_1_2_2, FIX::InstrumentPartySubID{"STRING_1018254257"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272);
        set_field(noInstrumentPartySubIDs_1_1_2_2, FIX::InstrumentPartySubIDType{1723072499}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_144;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_735046613"}, SecAltIDGrp_NoSecurityAltID_144);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_1638093342"}, SecAltIDGrp_NoSecurityAltID_144);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_144);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_140;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_2076415772"}, SecurityXML_140);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{1653420580}, SecurityXML_140);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_334639709"}, SecurityXML_140);
    all_values.push_back(SecurityXML_140);
    all_compo_names.insert("...NoRelatedSym..");

    // OrderQtyData
    multiset<string> OrderQtyData_23;
    FIX::CashOrderQty CashOrderQty_23;
    CashOrderQty_23.setString("16944140");
set_field(noRelatedSym_0_1, CashOrderQty_23, OrderQtyData_23);
    FIX::OrderPercent OrderPercent_23;
    OrderPercent_23.setString("90.970000");
set_field(noRelatedSym_0_1, OrderPercent_23, OrderQtyData_23);
    FIX::OrderQty OrderQty_32;
    OrderQty_32.setString("1663137");
set_field(noRelatedSym_0_1, OrderQty_32, OrderQtyData_23);
    set_field(noRelatedSym_0_1, FIX::RoundingDirection{'1'}, OrderQtyData_23);
    FIX::RoundingModulus RoundingModulus_23;
    RoundingModulus_23.setString("13233618");
set_field(noRelatedSym_0_1, RoundingModulus_23, OrderQtyData_23);
    all_values.push_back(OrderQtyData_23);
    all_compo_names.insert("...NoRelatedSym.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_116;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_1808662376"}, Parties_NoPartyIDs_116);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_116);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{18}, Parties_NoPartyIDs_116);
      all_values.push_back(Parties_NoPartyIDs_116);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_230;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_908039152"}, PtysSubGrp_NoPartySubIDs_230);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_230);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_230);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_231;
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubID{"STRING_1541043968"}, PtysSubGrp_NoPartySubIDs_231);
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_231);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_231);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_117;
      set_field(noPartyIDs_1_1_1, FIX::PartyID{"STRING_1508493537"}, Parties_NoPartyIDs_117);
      set_field(noPartyIDs_1_1_1, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_117);
      set_field(noPartyIDs_1_1_1, FIX::PartyRole{24}, Parties_NoPartyIDs_117);
      all_values.push_back(Parties_NoPartyIDs_117);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_232;
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubID{"STRING_1219627893"}, PtysSubGrp_NoPartySubIDs_232);
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_232);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_232);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_233;
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubID{"STRING_713050913"}, PtysSubGrp_NoPartySubIDs_233);
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_233);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_233);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_234;
        set_field(noPartySubIDs_1_1_2_2, FIX::PartySubID{"STRING_862505210"}, PtysSubGrp_NoPartySubIDs_234);
        set_field(noPartySubIDs_1_1_2_2, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_234);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_234);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_1_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_8;
      set_field(noQuoteQualifiers_1_1_0, FIX::QuoteQualifier{'1'}, QuotQualGrp_NoQuoteQualifiers_8);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_8);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_1.addGroup(noQuoteQualifiers_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_1_1_1;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_9;
      set_field(noQuoteQualifiers_1_1_1, FIX::QuoteQualifier{'3'}, QuotQualGrp_NoQuoteQualifiers_9);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_9);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_1.addGroup(noQuoteQualifiers_1_1_1);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_1_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_4;
      FIX::LegOrderQty LegOrderQty_12;
      LegOrderQty_12.setString("12121640");
set_field(noLegs_1_1_0, LegOrderQty_12, QuotReqLegsGrp_NoLegs_4);
      FIX::LegQty LegQty_12;
      LegQty_12.setString("19722887");
set_field(noLegs_1_1_0, LegQty_12, QuotReqLegsGrp_NoLegs_4);
      set_field(noLegs_1_1_0, FIX::LegRefID{"STRING_1397168095"}, QuotReqLegsGrp_NoLegs_4);
      set_field(noLegs_1_1_0, FIX::LegSettlDate{"LOCALMKTDATE_759094515"}, QuotReqLegsGrp_NoLegs_4);
      set_field(noLegs_1_1_0, FIX::LegSettlType{'1'}, QuotReqLegsGrp_NoLegs_4);
      set_field(noLegs_1_1_0, FIX::LegSwapType{4}, QuotReqLegsGrp_NoLegs_4);
      all_values.push_back(QuotReqLegsGrp_NoLegs_4);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_100;
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuer{"DATA_1613615275"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuerLen{698112368}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDesc{"DATA_2055235357"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDescLen{1274794003}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegCFICode{"STRING_71180219"}, InstrumentLeg_100);
      FIX::LegContractMultiplier LegContractMultiplier_100;
      LegContractMultiplier_100.setString("10759956");
set_field(noLegs_1_1_0, LegContractMultiplier_100, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegContractMultiplierUnit{395902603}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_979219371"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegCountryOfIssue{"COUNTRY_671409767"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1936946571"}, InstrumentLeg_100);
      FIX::LegCouponRate LegCouponRate_100;
      LegCouponRate_100.setString("37.980000");
set_field(noLegs_1_1_0, LegCouponRate_100, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegCreditRating{"STRING_32419656"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegCurrency{"USD"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1716495387"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegExerciseStyle{1767760361}, InstrumentLeg_100);
      FIX::LegFactor LegFactor_100;
      LegFactor_100.setString("9584356");
set_field(noLegs_1_1_0, LegFactor_100, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegFlowScheduleType{282062652}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegInstrRegistry{"STRING_1616606554"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1820940829"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegIssueDate{"LOCALMKTDATE_2013367822"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegIssuer{"STRING_1041041598"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegLocaleOfIssue{"STRING_956689133"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_184752309"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_2103569984"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegMaturityTime{"TZTIMEONLY_21369561"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegOptAttribute{'9'}, InstrumentLeg_100);
      FIX::LegOptionRatio LegOptionRatio_100;
      LegOptionRatio_100.setString("13532544");
set_field(noLegs_1_1_0, LegOptionRatio_100, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegPool{"STRING_780464076"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegPriceUnitOfMeasure{"STRING_1531791542"}, InstrumentLeg_100);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_100;
      LegPriceUnitOfMeasureQty_100.setString("7692526");
set_field(noLegs_1_1_0, LegPriceUnitOfMeasureQty_100, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegProduct{246595703}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegPutOrCall{82420262}, InstrumentLeg_100);
      FIX::LegRatioQty LegRatioQty_100;
      LegRatioQty_100.setString("6770043");
set_field(noLegs_1_1_0, LegRatioQty_100, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1521389706"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegRepoCollateralSecurityType{"STRING_153600481"}, InstrumentLeg_100);
      FIX::LegRepurchaseRate LegRepurchaseRate_100;
      LegRepurchaseRate_100.setString("0.130000");
set_field(noLegs_1_1_0, LegRepurchaseRate_100, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegRepurchaseTerm{1917292309}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegSecurityDesc{"STRING_1132819853"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegSecurityExchange{"EXCHANGE_276926133"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegSecurityID{"STRING_1706755232"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegSecurityIDSource{"STRING_1461013651"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegSecuritySubType{"STRING_309345789"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegSecurityType{"STRING_107404052"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegSide{'1'}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_2025841176"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_100);
      FIX::LegStrikePrice LegStrikePrice_100;
      LegStrikePrice_100.setString("1604201");
set_field(noLegs_1_1_0, LegStrikePrice_100, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegSymbol{"STRING_1344287320"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegSymbolSfx{"STRING_1690566255"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegTimeUnit{"STRING_26304354"}, InstrumentLeg_100);
      set_field(noLegs_1_1_0, FIX::LegUnitOfMeasure{"STRING_237845271"}, InstrumentLeg_100);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_100;
      LegUnitOfMeasureQty_100.setString("4997717");
set_field(noLegs_1_1_0, LegUnitOfMeasureQty_100, InstrumentLeg_100);
      all_values.push_back(InstrumentLeg_100);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_198;
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltID{"STRING_193931607"}, LegSecAltIDGrp_NoLegSecurityAltID_198);
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltIDSource{"STRING_521141301"}, LegSecAltIDGrp_NoLegSecurityAltID_198);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_198);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_199;
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltID{"STRING_220614041"}, LegSecAltIDGrp_NoLegSecurityAltID_199);
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltIDSource{"STRING_1547186039"}, LegSecAltIDGrp_NoLegSecurityAltID_199);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_199);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_6;
      set_field(noLegs_1_1_0, FIX::LegBenchmarkCurveCurrency{"EUR"}, LegBenchmarkCurveData_6);
      set_field(noLegs_1_1_0, FIX::LegBenchmarkCurveName{"STRING_168955025"}, LegBenchmarkCurveData_6);
      set_field(noLegs_1_1_0, FIX::LegBenchmarkCurvePoint{"STRING_1548201080"}, LegBenchmarkCurveData_6);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_6;
      LegBenchmarkPrice_6.setString("18348258");
set_field(noLegs_1_1_0, LegBenchmarkPrice_6, LegBenchmarkCurveData_6);
      set_field(noLegs_1_1_0, FIX::LegBenchmarkPriceType{845959368}, LegBenchmarkCurveData_6);
      all_values.push_back(LegBenchmarkCurveData_6);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_28;
        set_field(noLegStipulations_1_0_2_0, FIX::LegStipulationType{"STRING_1988426326"}, LegStipulations_NoLegStipulations_28);
        set_field(noLegStipulations_1_0_2_0, FIX::LegStipulationValue{"STRING_451475733"}, LegStipulations_NoLegStipulations_28);
        all_values.push_back(LegStipulations_NoLegStipulations_28);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_29;
        set_field(noLegStipulations_1_0_2_1, FIX::LegStipulationType{"STRING_691915800"}, LegStipulations_NoLegStipulations_29);
        set_field(noLegStipulations_1_0_2_1, FIX::LegStipulationValue{"STRING_973762531"}, LegStipulations_NoLegStipulations_29);
        all_values.push_back(LegStipulations_NoLegStipulations_29);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_122;
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyID{"STRING_251187385"}, NestedParties_NoNestedPartyIDs_122);
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_122);
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyRole{1037747656}, NestedParties_NoNestedPartyIDs_122);
        all_values.push_back(NestedParties_NoNestedPartyIDs_122);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_253;
          set_field(noNestedPartySubIDs_1_0_0_3_0, FIX::NestedPartySubID{"STRING_1345965989"}, NstdPtysSubGrp_NoNestedPartySubIDs_253);
          set_field(noNestedPartySubIDs_1_0_0_3_0, FIX::NestedPartySubIDType{916105184}, NstdPtysSubGrp_NoNestedPartySubIDs_253);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_253);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_1_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_5;
      FIX::LegOrderQty LegOrderQty_13;
      LegOrderQty_13.setString("862722");
set_field(noLegs_1_1_1, LegOrderQty_13, QuotReqLegsGrp_NoLegs_5);
      FIX::LegQty LegQty_13;
      LegQty_13.setString("12155914");
set_field(noLegs_1_1_1, LegQty_13, QuotReqLegsGrp_NoLegs_5);
      set_field(noLegs_1_1_1, FIX::LegRefID{"STRING_1076525365"}, QuotReqLegsGrp_NoLegs_5);
      set_field(noLegs_1_1_1, FIX::LegSettlDate{"LOCALMKTDATE_1430559524"}, QuotReqLegsGrp_NoLegs_5);
      set_field(noLegs_1_1_1, FIX::LegSettlType{'7'}, QuotReqLegsGrp_NoLegs_5);
      set_field(noLegs_1_1_1, FIX::LegSwapType{5}, QuotReqLegsGrp_NoLegs_5);
      all_values.push_back(QuotReqLegsGrp_NoLegs_5);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_101;
      set_field(noLegs_1_1_1, FIX::EncodedLegIssuer{"DATA_1668404795"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::EncodedLegIssuerLen{1258445763}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::EncodedLegSecurityDesc{"DATA_1313886383"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::EncodedLegSecurityDescLen{1862336402}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegCFICode{"STRING_1779587065"}, InstrumentLeg_101);
      FIX::LegContractMultiplier LegContractMultiplier_101;
      LegContractMultiplier_101.setString("15345004");
set_field(noLegs_1_1_1, LegContractMultiplier_101, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegContractMultiplierUnit{1262038793}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_933708794"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegCountryOfIssue{"COUNTRY_1139422359"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1430993818"}, InstrumentLeg_101);
      FIX::LegCouponRate LegCouponRate_101;
      LegCouponRate_101.setString("62.270000");
set_field(noLegs_1_1_1, LegCouponRate_101, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegCreditRating{"STRING_826764556"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegDatedDate{"LOCALMKTDATE_667707235"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegExerciseStyle{580945272}, InstrumentLeg_101);
      FIX::LegFactor LegFactor_101;
      LegFactor_101.setString("19484491");
set_field(noLegs_1_1_1, LegFactor_101, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegFlowScheduleType{1641469766}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegInstrRegistry{"STRING_1309347138"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_52152903"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegIssueDate{"LOCALMKTDATE_1928762301"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegIssuer{"STRING_199611146"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegLocaleOfIssue{"STRING_410744341"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_1127244642"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1115716331"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegMaturityTime{"TZTIMEONLY_497016544"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_101);
      FIX::LegOptionRatio LegOptionRatio_101;
      LegOptionRatio_101.setString("447580");
set_field(noLegs_1_1_1, LegOptionRatio_101, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegPool{"STRING_1927576068"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegPriceUnitOfMeasure{"STRING_954026433"}, InstrumentLeg_101);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_101;
      LegPriceUnitOfMeasureQty_101.setString("11475877");
set_field(noLegs_1_1_1, LegPriceUnitOfMeasureQty_101, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegProduct{1448497215}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegPutOrCall{64988548}, InstrumentLeg_101);
      FIX::LegRatioQty LegRatioQty_101;
      LegRatioQty_101.setString("3139905");
set_field(noLegs_1_1_1, LegRatioQty_101, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1163349970"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegRepoCollateralSecurityType{"STRING_1844575613"}, InstrumentLeg_101);
      FIX::LegRepurchaseRate LegRepurchaseRate_101;
      LegRepurchaseRate_101.setString("9.270000");
set_field(noLegs_1_1_1, LegRepurchaseRate_101, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegRepurchaseTerm{277905115}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegSecurityDesc{"STRING_630800760"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegSecurityExchange{"EXCHANGE_840429639"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegSecurityID{"STRING_1708898934"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegSecurityIDSource{"STRING_965226987"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegSecuritySubType{"STRING_1667194195"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegSecurityType{"STRING_1838368472"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegSide{'7'}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_187417782"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_101);
      FIX::LegStrikePrice LegStrikePrice_101;
      LegStrikePrice_101.setString("18288875");
set_field(noLegs_1_1_1, LegStrikePrice_101, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegSymbol{"STRING_1581177235"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegSymbolSfx{"STRING_2074878775"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegTimeUnit{"STRING_1610166202"}, InstrumentLeg_101);
      set_field(noLegs_1_1_1, FIX::LegUnitOfMeasure{"STRING_1780788381"}, InstrumentLeg_101);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_101;
      LegUnitOfMeasureQty_101.setString("3381394");
set_field(noLegs_1_1_1, LegUnitOfMeasureQty_101, InstrumentLeg_101);
      all_values.push_back(InstrumentLeg_101);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_200;
        set_field(noLegSecurityAltID_1_1_2_0, FIX::LegSecurityAltID{"STRING_749021064"}, LegSecAltIDGrp_NoLegSecurityAltID_200);
        set_field(noLegSecurityAltID_1_1_2_0, FIX::LegSecurityAltIDSource{"STRING_835156012"}, LegSecAltIDGrp_NoLegSecurityAltID_200);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_200);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_201;
        set_field(noLegSecurityAltID_1_1_2_1, FIX::LegSecurityAltID{"STRING_785279606"}, LegSecAltIDGrp_NoLegSecurityAltID_201);
        set_field(noLegSecurityAltID_1_1_2_1, FIX::LegSecurityAltIDSource{"STRING_793779112"}, LegSecAltIDGrp_NoLegSecurityAltID_201);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_201);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_202;
        set_field(noLegSecurityAltID_1_1_2_2, FIX::LegSecurityAltID{"STRING_615248433"}, LegSecAltIDGrp_NoLegSecurityAltID_202);
        set_field(noLegSecurityAltID_1_1_2_2, FIX::LegSecurityAltIDSource{"STRING_1739306039"}, LegSecAltIDGrp_NoLegSecurityAltID_202);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_202);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_7;
      set_field(noLegs_1_1_1, FIX::LegBenchmarkCurveCurrency{"USD"}, LegBenchmarkCurveData_7);
      set_field(noLegs_1_1_1, FIX::LegBenchmarkCurveName{"STRING_1804294588"}, LegBenchmarkCurveData_7);
      set_field(noLegs_1_1_1, FIX::LegBenchmarkCurvePoint{"STRING_107873735"}, LegBenchmarkCurveData_7);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_7;
      LegBenchmarkPrice_7.setString("10796119");
set_field(noLegs_1_1_1, LegBenchmarkPrice_7, LegBenchmarkCurveData_7);
      set_field(noLegs_1_1_1, FIX::LegBenchmarkPriceType{1501386553}, LegBenchmarkCurveData_7);
      all_values.push_back(LegBenchmarkCurveData_7);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_30;
        set_field(noLegStipulations_1_1_2_0, FIX::LegStipulationType{"STRING_1357517086"}, LegStipulations_NoLegStipulations_30);
        set_field(noLegStipulations_1_1_2_0, FIX::LegStipulationValue{"STRING_2132187313"}, LegStipulations_NoLegStipulations_30);
        all_values.push_back(LegStipulations_NoLegStipulations_30);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_123;
        set_field(noNestedPartyIDs_1_1_2_0, FIX::NestedPartyID{"STRING_918932372"}, NestedParties_NoNestedPartyIDs_123);
        set_field(noNestedPartyIDs_1_1_2_0, FIX::NestedPartyIDSource{'9'}, NestedParties_NoNestedPartyIDs_123);
        set_field(noNestedPartyIDs_1_1_2_0, FIX::NestedPartyRole{169021201}, NestedParties_NoNestedPartyIDs_123);
        all_values.push_back(NestedParties_NoNestedPartyIDs_123);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_254;
          set_field(noNestedPartySubIDs_1_1_0_3_0, FIX::NestedPartySubID{"STRING_1024207357"}, NstdPtysSubGrp_NoNestedPartySubIDs_254);
          set_field(noNestedPartySubIDs_1_1_0_3_0, FIX::NestedPartySubIDType{356438983}, NstdPtysSubGrp_NoNestedPartySubIDs_254);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_254);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_255;
          set_field(noNestedPartySubIDs_1_1_0_3_1, FIX::NestedPartySubID{"STRING_881647293"}, NstdPtysSubGrp_NoNestedPartySubIDs_255);
          set_field(noNestedPartySubIDs_1_1_0_3_1, FIX::NestedPartySubIDType{899449581}, NstdPtysSubGrp_NoNestedPartySubIDs_255);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_255);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_256;
          set_field(noNestedPartySubIDs_1_1_0_3_2, FIX::NestedPartySubID{"STRING_37842884"}, NstdPtysSubGrp_NoNestedPartySubIDs_256);
          set_field(noNestedPartySubIDs_1_1_0_3_2, FIX::NestedPartySubIDType{315340880}, NstdPtysSubGrp_NoNestedPartySubIDs_256);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_256);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_2);
        }
        noLegs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_124;
        set_field(noNestedPartyIDs_1_1_2_1, FIX::NestedPartyID{"STRING_826844708"}, NestedParties_NoNestedPartyIDs_124);
        set_field(noNestedPartyIDs_1_1_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_124);
        set_field(noNestedPartyIDs_1_1_2_1, FIX::NestedPartyRole{2096129261}, NestedParties_NoNestedPartyIDs_124);
        all_values.push_back(NestedParties_NoNestedPartyIDs_124);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_257;
          set_field(noNestedPartySubIDs_1_1_1_3_0, FIX::NestedPartySubID{"STRING_90452635"}, NstdPtysSubGrp_NoNestedPartySubIDs_257);
          set_field(noNestedPartySubIDs_1_1_1_3_0, FIX::NestedPartySubIDType{697666678}, NstdPtysSubGrp_NoNestedPartySubIDs_257);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_257);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_258;
          set_field(noNestedPartySubIDs_1_1_1_3_1, FIX::NestedPartySubID{"STRING_2000140188"}, NstdPtysSubGrp_NoNestedPartySubIDs_258);
          set_field(noNestedPartySubIDs_1_1_1_3_1, FIX::NestedPartySubIDType{875732241}, NstdPtysSubGrp_NoNestedPartySubIDs_258);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_258);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_259;
          set_field(noNestedPartySubIDs_1_1_1_3_2, FIX::NestedPartySubID{"STRING_1491445790"}, NstdPtysSubGrp_NoNestedPartySubIDs_259);
          set_field(noNestedPartySubIDs_1_1_1_3_2, FIX::NestedPartySubIDType{467904973}, NstdPtysSubGrp_NoNestedPartySubIDs_259);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_259);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_2);
        }
        noLegs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_1_1_2;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_6;
      FIX::LegOrderQty LegOrderQty_14;
      LegOrderQty_14.setString("4675546");
set_field(noLegs_1_1_2, LegOrderQty_14, QuotReqLegsGrp_NoLegs_6);
      FIX::LegQty LegQty_14;
      LegQty_14.setString("12853290");
set_field(noLegs_1_1_2, LegQty_14, QuotReqLegsGrp_NoLegs_6);
      set_field(noLegs_1_1_2, FIX::LegRefID{"STRING_384166974"}, QuotReqLegsGrp_NoLegs_6);
      set_field(noLegs_1_1_2, FIX::LegSettlDate{"LOCALMKTDATE_124365573"}, QuotReqLegsGrp_NoLegs_6);
      set_field(noLegs_1_1_2, FIX::LegSettlType{'1'}, QuotReqLegsGrp_NoLegs_6);
      set_field(noLegs_1_1_2, FIX::LegSwapType{1}, QuotReqLegsGrp_NoLegs_6);
      all_values.push_back(QuotReqLegsGrp_NoLegs_6);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_102;
      set_field(noLegs_1_1_2, FIX::EncodedLegIssuer{"DATA_1625752126"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::EncodedLegIssuerLen{1202083772}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::EncodedLegSecurityDesc{"DATA_673812382"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::EncodedLegSecurityDescLen{1610455792}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegCFICode{"STRING_1851394425"}, InstrumentLeg_102);
      FIX::LegContractMultiplier LegContractMultiplier_102;
      LegContractMultiplier_102.setString("15927447");
set_field(noLegs_1_1_2, LegContractMultiplier_102, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegContractMultiplierUnit{412902796}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegContractSettlMonth{"MONTHYEAR_2020415626"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegCountryOfIssue{"COUNTRY_55078303"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1437110154"}, InstrumentLeg_102);
      FIX::LegCouponRate LegCouponRate_102;
      LegCouponRate_102.setString("9.620000");
set_field(noLegs_1_1_2, LegCouponRate_102, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegCreditRating{"STRING_936725596"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegCurrency{"USD"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegDatedDate{"LOCALMKTDATE_1252066476"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegExerciseStyle{1015920795}, InstrumentLeg_102);
      FIX::LegFactor LegFactor_102;
      LegFactor_102.setString("19152229");
set_field(noLegs_1_1_2, LegFactor_102, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegFlowScheduleType{1200712089}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegInstrRegistry{"STRING_33421323"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2005675568"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegIssueDate{"LOCALMKTDATE_1898378767"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegIssuer{"STRING_2033561511"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegLocaleOfIssue{"STRING_733924161"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegMaturityDate{"LOCALMKTDATE_1242340910"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegMaturityMonthYear{"MONTHYEAR_353982837"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegMaturityTime{"TZTIMEONLY_1201478794"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegOptAttribute{'3'}, InstrumentLeg_102);
      FIX::LegOptionRatio LegOptionRatio_102;
      LegOptionRatio_102.setString("7381498");
set_field(noLegs_1_1_2, LegOptionRatio_102, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegPool{"STRING_1325844367"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegPriceUnitOfMeasure{"STRING_1773389042"}, InstrumentLeg_102);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_102;
      LegPriceUnitOfMeasureQty_102.setString("544451");
set_field(noLegs_1_1_2, LegPriceUnitOfMeasureQty_102, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegProduct{804112846}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegPutOrCall{827989166}, InstrumentLeg_102);
      FIX::LegRatioQty LegRatioQty_102;
      LegRatioQty_102.setString("7282574");
set_field(noLegs_1_1_2, LegRatioQty_102, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegRedemptionDate{"LOCALMKTDATE_267084990"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegRepoCollateralSecurityType{"STRING_531899943"}, InstrumentLeg_102);
      FIX::LegRepurchaseRate LegRepurchaseRate_102;
      LegRepurchaseRate_102.setString("85.960000");
set_field(noLegs_1_1_2, LegRepurchaseRate_102, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegRepurchaseTerm{679987786}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegSecurityDesc{"STRING_404831922"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegSecurityExchange{"EXCHANGE_228596899"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegSecurityID{"STRING_2117097940"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegSecurityIDSource{"STRING_634202884"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegSecuritySubType{"STRING_1165322495"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegSecurityType{"STRING_158690379"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegSide{'9'}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegStateOrProvinceOfIssue{"STRING_269905323"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_102);
      FIX::LegStrikePrice LegStrikePrice_102;
      LegStrikePrice_102.setString("14706174");
set_field(noLegs_1_1_2, LegStrikePrice_102, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegSymbol{"STRING_1208032497"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegSymbolSfx{"STRING_527347935"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegTimeUnit{"STRING_1221512532"}, InstrumentLeg_102);
      set_field(noLegs_1_1_2, FIX::LegUnitOfMeasure{"STRING_1094110361"}, InstrumentLeg_102);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_102;
      LegUnitOfMeasureQty_102.setString("12612720");
set_field(noLegs_1_1_2, LegUnitOfMeasureQty_102, InstrumentLeg_102);
      all_values.push_back(InstrumentLeg_102);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_203;
        set_field(noLegSecurityAltID_1_2_2_0, FIX::LegSecurityAltID{"STRING_1448093198"}, LegSecAltIDGrp_NoLegSecurityAltID_203);
        set_field(noLegSecurityAltID_1_2_2_0, FIX::LegSecurityAltIDSource{"STRING_315267243"}, LegSecAltIDGrp_NoLegSecurityAltID_203);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_203);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_8;
      set_field(noLegs_1_1_2, FIX::LegBenchmarkCurveCurrency{"CHF"}, LegBenchmarkCurveData_8);
      set_field(noLegs_1_1_2, FIX::LegBenchmarkCurveName{"STRING_1641111611"}, LegBenchmarkCurveData_8);
      set_field(noLegs_1_1_2, FIX::LegBenchmarkCurvePoint{"STRING_322461473"}, LegBenchmarkCurveData_8);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_8;
      LegBenchmarkPrice_8.setString("932044");
set_field(noLegs_1_1_2, LegBenchmarkPrice_8, LegBenchmarkCurveData_8);
      set_field(noLegs_1_1_2, FIX::LegBenchmarkPriceType{297740809}, LegBenchmarkCurveData_8);
      all_values.push_back(LegBenchmarkCurveData_8);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_31;
        set_field(noLegStipulations_1_2_2_0, FIX::LegStipulationType{"STRING_821461958"}, LegStipulations_NoLegStipulations_31);
        set_field(noLegStipulations_1_2_2_0, FIX::LegStipulationValue{"STRING_564825799"}, LegStipulations_NoLegStipulations_31);
        all_values.push_back(LegStipulations_NoLegStipulations_31);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_32;
        set_field(noLegStipulations_1_2_2_1, FIX::LegStipulationType{"STRING_1682350582"}, LegStipulations_NoLegStipulations_32);
        set_field(noLegStipulations_1_2_2_1, FIX::LegStipulationValue{"STRING_994980555"}, LegStipulations_NoLegStipulations_32);
        all_values.push_back(LegStipulations_NoLegStipulations_32);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_125;
        set_field(noNestedPartyIDs_1_2_2_0, FIX::NestedPartyID{"STRING_2087182504"}, NestedParties_NoNestedPartyIDs_125);
        set_field(noNestedPartyIDs_1_2_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_125);
        set_field(noNestedPartyIDs_1_2_2_0, FIX::NestedPartyRole{1214427878}, NestedParties_NoNestedPartyIDs_125);
        all_values.push_back(NestedParties_NoNestedPartyIDs_125);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_260;
          set_field(noNestedPartySubIDs_1_2_0_3_0, FIX::NestedPartySubID{"STRING_241416302"}, NstdPtysSubGrp_NoNestedPartySubIDs_260);
          set_field(noNestedPartySubIDs_1_2_0_3_0, FIX::NestedPartySubIDType{1373118257}, NstdPtysSubGrp_NoNestedPartySubIDs_260);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_260);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_0);
        }
        noLegs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_126;
        set_field(noNestedPartyIDs_1_2_2_1, FIX::NestedPartyID{"STRING_1475318471"}, NestedParties_NoNestedPartyIDs_126);
        set_field(noNestedPartyIDs_1_2_2_1, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_126);
        set_field(noNestedPartyIDs_1_2_2_1, FIX::NestedPartyRole{400245784}, NestedParties_NoNestedPartyIDs_126);
        all_values.push_back(NestedParties_NoNestedPartyIDs_126);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_261;
          set_field(noNestedPartySubIDs_1_2_1_3_0, FIX::NestedPartySubID{"STRING_1981939038"}, NstdPtysSubGrp_NoNestedPartySubIDs_261);
          set_field(noNestedPartySubIDs_1_2_1_3_0, FIX::NestedPartySubIDType{1608278281}, NstdPtysSubGrp_NoNestedPartySubIDs_261);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_261);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_1.addGroup(noNestedPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_262;
          set_field(noNestedPartySubIDs_1_2_1_3_1, FIX::NestedPartySubID{"STRING_524338774"}, NstdPtysSubGrp_NoNestedPartySubIDs_262);
          set_field(noNestedPartySubIDs_1_2_1_3_1, FIX::NestedPartySubIDType{1055967923}, NstdPtysSubGrp_NoNestedPartySubIDs_262);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_262);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_1.addGroup(noNestedPartySubIDs_1_2_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_263;
          set_field(noNestedPartySubIDs_1_2_1_3_2, FIX::NestedPartySubID{"STRING_554904994"}, NstdPtysSubGrp_NoNestedPartySubIDs_263);
          set_field(noNestedPartySubIDs_1_2_1_3_2, FIX::NestedPartySubIDType{1785610871}, NstdPtysSubGrp_NoNestedPartySubIDs_263);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_263);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_1.addGroup(noNestedPartySubIDs_1_2_1_3_2);
        }
        noLegs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_127;
        set_field(noNestedPartyIDs_1_2_2_2, FIX::NestedPartyID{"STRING_1372337717"}, NestedParties_NoNestedPartyIDs_127);
        set_field(noNestedPartyIDs_1_2_2_2, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_127);
        set_field(noNestedPartyIDs_1_2_2_2, FIX::NestedPartyRole{2100878114}, NestedParties_NoNestedPartyIDs_127);
        all_values.push_back(NestedParties_NoNestedPartyIDs_127);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_264;
          set_field(noNestedPartySubIDs_1_2_2_3_0, FIX::NestedPartySubID{"STRING_2041757553"}, NstdPtysSubGrp_NoNestedPartySubIDs_264);
          set_field(noNestedPartySubIDs_1_2_2_3_0, FIX::NestedPartySubIDType{1594506077}, NstdPtysSubGrp_NoNestedPartySubIDs_264);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_264);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_2.addGroup(noNestedPartySubIDs_1_2_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_265;
          set_field(noNestedPartySubIDs_1_2_2_3_1, FIX::NestedPartySubID{"STRING_243871621"}, NstdPtysSubGrp_NoNestedPartySubIDs_265);
          set_field(noNestedPartySubIDs_1_2_2_3_1, FIX::NestedPartySubIDType{2134962022}, NstdPtysSubGrp_NoNestedPartySubIDs_265);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_265);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_2.addGroup(noNestedPartySubIDs_1_2_2_3_1);
        }
        noLegs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_26;
    set_field(noRelatedSym_0_1, FIX::BenchmarkCurveCurrency{"GBP"}, SpreadOrBenchmarkCurveData_26);
    set_field(noRelatedSym_0_1, FIX::BenchmarkCurveName{"STRING_LIBID"}, SpreadOrBenchmarkCurveData_26);
    set_field(noRelatedSym_0_1, FIX::BenchmarkCurvePoint{"STRING_309589037"}, SpreadOrBenchmarkCurveData_26);
    FIX::BenchmarkPrice BenchmarkPrice_26;
    BenchmarkPrice_26.setString("9291891");
set_field(noRelatedSym_0_1, BenchmarkPrice_26, SpreadOrBenchmarkCurveData_26);
    set_field(noRelatedSym_0_1, FIX::BenchmarkPriceType{1803920887}, SpreadOrBenchmarkCurveData_26);
    set_field(noRelatedSym_0_1, FIX::BenchmarkSecurityID{"STRING_1554402623"}, SpreadOrBenchmarkCurveData_26);
    set_field(noRelatedSym_0_1, FIX::BenchmarkSecurityIDSource{"STRING_868888051"}, SpreadOrBenchmarkCurveData_26);
    FIX::Spread Spread_26;
    Spread_26.setString("8800146");
set_field(noRelatedSym_0_1, Spread_26, SpreadOrBenchmarkCurveData_26);
    all_values.push_back(SpreadOrBenchmarkCurveData_26);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_43;
      set_field(noStipulations_1_1_0, FIX::StipulationType{"STRING_PURPOSE"}, Stipulations_NoStipulations_43);
      set_field(noStipulations_1_1_0, FIX::StipulationValue{"STRING_1121430996"}, Stipulations_NoStipulations_43);
      all_values.push_back(Stipulations_NoStipulations_43);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_1.addGroup(noStipulations_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_1_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_44;
      set_field(noStipulations_1_1_1, FIX::StipulationType{"STRING_ABS"}, Stipulations_NoStipulations_44);
      set_field(noStipulations_1_1_1, FIX::StipulationValue{"STRING_770624615"}, Stipulations_NoStipulations_44);
      all_values.push_back(Stipulations_NoStipulations_44);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_1.addGroup(noStipulations_1_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_1_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_45;
      set_field(noStipulations_1_1_2, FIX::StipulationType{"STRING_INTERNALQTY"}, Stipulations_NoStipulations_45);
      set_field(noStipulations_1_1_2, FIX::StipulationValue{"STRING_247227246"}, Stipulations_NoStipulations_45);
      all_values.push_back(Stipulations_NoStipulations_45);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_1.addGroup(noStipulations_1_1_2);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_102;
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1467208012"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuerLen{1855505528}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1291954227"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDescLen{375692287}, UnderlyingInstrument_102);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_102;
      UnderlyingAdjustedQuantity_102.setString("2629268");
set_field(noUnderlyings_1_1_0, UnderlyingAdjustedQuantity_102, UnderlyingInstrument_102);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_102;
      UnderlyingAllocationPercent_102.setString("14.500000");
set_field(noUnderlyings_1_1_0, UnderlyingAllocationPercent_102, UnderlyingInstrument_102);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_102;
      UnderlyingAttachmentPoint_102.setString("0.040000");
set_field(noUnderlyings_1_1_0, UnderlyingAttachmentPoint_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCFICode{"STRING_118441419"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPProgram{"STRING_883475917"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPRegType{"STRING_1669440153"}, UnderlyingInstrument_102);
      FIX::UnderlyingCapValue UnderlyingCapValue_102;
      UnderlyingCapValue_102.setString("127153");
set_field(noUnderlyings_1_1_0, UnderlyingCapValue_102, UnderlyingInstrument_102);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_102;
      UnderlyingCashAmount_102.setString("3304983");
set_field(noUnderlyings_1_1_0, UnderlyingCashAmount_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_102);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_102;
      UnderlyingContractMultiplier_102.setString("1936");
set_field(noUnderlyings_1_1_0, UnderlyingContractMultiplier_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingContractMultiplierUnit{75261585}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1160150387"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_809134031"}, UnderlyingInstrument_102);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_102;
      UnderlyingCouponRate_102.setString("6.220000");
set_field(noUnderlyings_1_1_0, UnderlyingCouponRate_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCreditRating{"STRING_2089339582"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_102);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_102;
      UnderlyingCurrentValue_102.setString("8107439");
set_field(noUnderlyings_1_1_0, UnderlyingCurrentValue_102, UnderlyingInstrument_102);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_102;
      UnderlyingDetachmentPoint_102.setString("59.640000");
set_field(noUnderlyings_1_1_0, UnderlyingDetachmentPoint_102, UnderlyingInstrument_102);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_102;
      UnderlyingDirtyPrice_102.setString("4131164");
set_field(noUnderlyings_1_1_0, UnderlyingDirtyPrice_102, UnderlyingInstrument_102);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_102;
      UnderlyingEndPrice_102.setString("1060501");
set_field(noUnderlyings_1_1_0, UnderlyingEndPrice_102, UnderlyingInstrument_102);
      FIX::UnderlyingEndValue UnderlyingEndValue_102;
      UnderlyingEndValue_102.setString("3195333");
set_field(noUnderlyings_1_1_0, UnderlyingEndValue_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingExerciseStyle{260097913}, UnderlyingInstrument_102);
      FIX::UnderlyingFXRate UnderlyingFXRate_102;
      UnderlyingFXRate_102.setString("8766747");
set_field(noUnderlyings_1_1_0, UnderlyingFXRate_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_102);
      FIX::UnderlyingFactor UnderlyingFactor_102;
      UnderlyingFactor_102.setString("5073251");
set_field(noUnderlyings_1_1_0, UnderlyingFactor_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFlowScheduleType{1644290198}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingInstrRegistry{"STRING_1272010298"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_215347039"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssuer{"STRING_788760777"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_1647702585"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_478273914"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1718842228"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1248248941"}, UnderlyingInstrument_102);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_102;
      UnderlyingNotionalPercentageOutstanding_102.setString("53.330000");
set_field(noUnderlyings_1_1_0, UnderlyingNotionalPercentageOutstanding_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_102);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_102;
      UnderlyingOriginalNotionalPercentageOutstanding_102.setString("54.460000");
set_field(noUnderlyings_1_1_0, UnderlyingOriginalNotionalPercentageOutstanding_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_609430657"}, UnderlyingInstrument_102);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_102;
      UnderlyingPriceUnitOfMeasureQty_102.setString("7853328");
set_field(noUnderlyings_1_1_0, UnderlyingPriceUnitOfMeasureQty_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingProduct{536033573}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPutOrCall{609624356}, UnderlyingInstrument_102);
      FIX::UnderlyingPx UnderlyingPx_102;
      UnderlyingPx_102.setString("8605944");
set_field(noUnderlyings_1_1_0, UnderlyingPx_102, UnderlyingInstrument_102);
      FIX::UnderlyingQty UnderlyingQty_102;
      UnderlyingQty_102.setString("16961839");
set_field(noUnderlyings_1_1_0, UnderlyingQty_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1418758387"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1245445051"}, UnderlyingInstrument_102);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_102;
      UnderlyingRepurchaseRate_102.setString("98.940000");
set_field(noUnderlyings_1_1_0, UnderlyingRepurchaseRate_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepurchaseTerm{1884329657}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRestructuringType{"STRING_1037214648"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityDesc{"STRING_301300231"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1082431974"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityID{"STRING_1450331099"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityIDSource{"STRING_407350361"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecuritySubType{"STRING_1401965286"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityType{"STRING_1710429012"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSeniority{"STRING_1284025105"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlMethod{"STRING_1206767572"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_102);
      FIX::UnderlyingStartValue UnderlyingStartValue_102;
      UnderlyingStartValue_102.setString("7808316");
set_field(noUnderlyings_1_1_0, UnderlyingStartValue_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_331294222"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_102);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_102;
      UnderlyingStrikePrice_102.setString("19789968");
set_field(noUnderlyings_1_1_0, UnderlyingStrikePrice_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbol{"STRING_763891477"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbolSfx{"STRING_1140951013"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingTimeUnit{"STRING_1079762101"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1360606810"}, UnderlyingInstrument_102);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_102;
      UnderlyingUnitOfMeasureQty_102.setString("15957855");
set_field(noUnderlyings_1_1_0, UnderlyingUnitOfMeasureQty_102, UnderlyingInstrument_102);
      all_values.push_back(UnderlyingInstrument_102);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_212;
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1970037467"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_212);
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_233634705"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_212);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_212);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_200;
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipType{"STRING_432178175"}, UnderlyingStipulations_NoUnderlyingStips_200);
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipValue{"STRING_1094229134"}, UnderlyingStipulations_NoUnderlyingStips_200);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_200);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_219;
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1850936562"}, UndlyInstrumentParties_NoUndlyInstrumentParties_219);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_219);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyRole{1425257678}, UndlyInstrumentParties_NoUndlyInstrumentParties_219);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_219);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1229405185"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1726557910}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_522730898"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{532252636}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_437);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_220;
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_2133908271"}, UndlyInstrumentParties_NoUndlyInstrumentParties_220);
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_220);
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyRole{95198000}, UndlyInstrumentParties_NoUndlyInstrumentParties_220);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_220);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438;
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_983980109"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438);
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{165468524}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_438);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439;
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2051281384"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439);
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{1315274331}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_439);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440;
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_451086087"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440);
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{1473390169}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_440);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_103;
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1146787491"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuerLen{1214977564}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_466857534"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDescLen{79065944}, UnderlyingInstrument_103);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_103;
      UnderlyingAdjustedQuantity_103.setString("4281007");
set_field(noUnderlyings_1_1_1, UnderlyingAdjustedQuantity_103, UnderlyingInstrument_103);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_103;
      UnderlyingAllocationPercent_103.setString("30.440000");
set_field(noUnderlyings_1_1_1, UnderlyingAllocationPercent_103, UnderlyingInstrument_103);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_103;
      UnderlyingAttachmentPoint_103.setString("34.910000");
set_field(noUnderlyings_1_1_1, UnderlyingAttachmentPoint_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCFICode{"STRING_250654545"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPProgram{"STRING_148794101"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPRegType{"STRING_20067316"}, UnderlyingInstrument_103);
      FIX::UnderlyingCapValue UnderlyingCapValue_103;
      UnderlyingCapValue_103.setString("6828327");
set_field(noUnderlyings_1_1_1, UnderlyingCapValue_103, UnderlyingInstrument_103);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_103;
      UnderlyingCashAmount_103.setString("12430232");
set_field(noUnderlyings_1_1_1, UnderlyingCashAmount_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_103);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_103;
      UnderlyingContractMultiplier_103.setString("3862856");
set_field(noUnderlyings_1_1_1, UnderlyingContractMultiplier_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingContractMultiplierUnit{1435213772}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1232542779"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1974068207"}, UnderlyingInstrument_103);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_103;
      UnderlyingCouponRate_103.setString("53.100000");
set_field(noUnderlyings_1_1_1, UnderlyingCouponRate_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCreditRating{"STRING_811617041"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_103);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_103;
      UnderlyingCurrentValue_103.setString("7980416");
set_field(noUnderlyings_1_1_1, UnderlyingCurrentValue_103, UnderlyingInstrument_103);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_103;
      UnderlyingDetachmentPoint_103.setString("79.940000");
set_field(noUnderlyings_1_1_1, UnderlyingDetachmentPoint_103, UnderlyingInstrument_103);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_103;
      UnderlyingDirtyPrice_103.setString("11445859");
set_field(noUnderlyings_1_1_1, UnderlyingDirtyPrice_103, UnderlyingInstrument_103);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_103;
      UnderlyingEndPrice_103.setString("20684913");
set_field(noUnderlyings_1_1_1, UnderlyingEndPrice_103, UnderlyingInstrument_103);
      FIX::UnderlyingEndValue UnderlyingEndValue_103;
      UnderlyingEndValue_103.setString("11105081");
set_field(noUnderlyings_1_1_1, UnderlyingEndValue_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingExerciseStyle{1310054471}, UnderlyingInstrument_103);
      FIX::UnderlyingFXRate UnderlyingFXRate_103;
      UnderlyingFXRate_103.setString("19722891");
set_field(noUnderlyings_1_1_1, UnderlyingFXRate_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_103);
      FIX::UnderlyingFactor UnderlyingFactor_103;
      UnderlyingFactor_103.setString("17611405");
set_field(noUnderlyings_1_1_1, UnderlyingFactor_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFlowScheduleType{1298195649}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingInstrRegistry{"STRING_1425086277"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_828634474"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssuer{"STRING_1765053183"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_1504152221"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1256735200"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1680212579"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1285702065"}, UnderlyingInstrument_103);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_103;
      UnderlyingNotionalPercentageOutstanding_103.setString("97.450000");
set_field(noUnderlyings_1_1_1, UnderlyingNotionalPercentageOutstanding_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_103);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_103;
      UnderlyingOriginalNotionalPercentageOutstanding_103.setString("93.810000");
set_field(noUnderlyings_1_1_1, UnderlyingOriginalNotionalPercentageOutstanding_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_42738818"}, UnderlyingInstrument_103);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_103;
      UnderlyingPriceUnitOfMeasureQty_103.setString("9245462");
set_field(noUnderlyings_1_1_1, UnderlyingPriceUnitOfMeasureQty_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingProduct{1113054481}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPutOrCall{429024454}, UnderlyingInstrument_103);
      FIX::UnderlyingPx UnderlyingPx_103;
      UnderlyingPx_103.setString("2122763");
set_field(noUnderlyings_1_1_1, UnderlyingPx_103, UnderlyingInstrument_103);
      FIX::UnderlyingQty UnderlyingQty_103;
      UnderlyingQty_103.setString("1981136");
set_field(noUnderlyings_1_1_1, UnderlyingQty_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_255609013"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_729411703"}, UnderlyingInstrument_103);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_103;
      UnderlyingRepurchaseRate_103.setString("6.530000");
set_field(noUnderlyings_1_1_1, UnderlyingRepurchaseRate_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepurchaseTerm{604924471}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRestructuringType{"STRING_1778799649"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityDesc{"STRING_1807772317"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_731452465"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityID{"STRING_775901948"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityIDSource{"STRING_1728780062"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecuritySubType{"STRING_1841960568"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityType{"STRING_2085956419"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSeniority{"STRING_1553585542"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlMethod{"STRING_2120259354"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_103);
      FIX::UnderlyingStartValue UnderlyingStartValue_103;
      UnderlyingStartValue_103.setString("7042975");
set_field(noUnderlyings_1_1_1, UnderlyingStartValue_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1397861984"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_103);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_103;
      UnderlyingStrikePrice_103.setString("7545305");
set_field(noUnderlyings_1_1_1, UnderlyingStrikePrice_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbol{"STRING_1637499355"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbolSfx{"STRING_2002079659"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingTimeUnit{"STRING_2040232622"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_997405453"}, UnderlyingInstrument_103);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_103;
      UnderlyingUnitOfMeasureQty_103.setString("16836026");
set_field(noUnderlyings_1_1_1, UnderlyingUnitOfMeasureQty_103, UnderlyingInstrument_103);
      all_values.push_back(UnderlyingInstrument_103);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_213;
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_1040144271"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_213);
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_460665312"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_213);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_213);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_214;
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_164089189"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_214);
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1469168725"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_214);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_214);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_201;
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipType{"STRING_362202801"}, UnderlyingStipulations_NoUnderlyingStips_201);
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipValue{"STRING_1724777739"}, UnderlyingStipulations_NoUnderlyingStips_201);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_201);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_202;
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipType{"STRING_1402353408"}, UnderlyingStipulations_NoUnderlyingStips_202);
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipValue{"STRING_1371933455"}, UnderlyingStipulations_NoUnderlyingStips_202);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_202);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_203;
        set_field(noUnderlyingStips_1_1_2_2, FIX::UnderlyingStipType{"STRING_182218562"}, UnderlyingStipulations_NoUnderlyingStips_203);
        set_field(noUnderlyingStips_1_1_2_2, FIX::UnderlyingStipValue{"STRING_1033669410"}, UnderlyingStipulations_NoUnderlyingStips_203);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_203);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_221;
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_913671027"}, UndlyInstrumentParties_NoUndlyInstrumentParties_221);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_221);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyRole{613518538}, UndlyInstrumentParties_NoUndlyInstrumentParties_221);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_221);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1748044130"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{19620433}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_441);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_580923653"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1300173811}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_442);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_222;
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_723917977"}, UndlyInstrumentParties_NoUndlyInstrumentParties_222);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_222);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyRole{1680937967}, UndlyInstrumentParties_NoUndlyInstrumentParties_222);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_222);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_585832547"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1170953674}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_443);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_900381067"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{478581521}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_444);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_20875479"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{436500111}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_445);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_104;
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuer{"DATA_1677099877"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuerLen{1061019751}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_897165424"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDescLen{1841189066}, UnderlyingInstrument_104);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_104;
      UnderlyingAdjustedQuantity_104.setString("3827048");
set_field(noUnderlyings_1_1_2, UnderlyingAdjustedQuantity_104, UnderlyingInstrument_104);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_104;
      UnderlyingAllocationPercent_104.setString("71.290000");
set_field(noUnderlyings_1_1_2, UnderlyingAllocationPercent_104, UnderlyingInstrument_104);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_104;
      UnderlyingAttachmentPoint_104.setString("82.190000");
set_field(noUnderlyings_1_1_2, UnderlyingAttachmentPoint_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCFICode{"STRING_2107482567"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPProgram{"STRING_824976890"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPRegType{"STRING_1427841674"}, UnderlyingInstrument_104);
      FIX::UnderlyingCapValue UnderlyingCapValue_104;
      UnderlyingCapValue_104.setString("1422174");
set_field(noUnderlyings_1_1_2, UnderlyingCapValue_104, UnderlyingInstrument_104);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_104;
      UnderlyingCashAmount_104.setString("18586463");
set_field(noUnderlyings_1_1_2, UnderlyingCashAmount_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_104);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_104;
      UnderlyingContractMultiplier_104.setString("10558885");
set_field(noUnderlyings_1_1_2, UnderlyingContractMultiplier_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingContractMultiplierUnit{1520734010}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_926098689"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1664036455"}, UnderlyingInstrument_104);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_104;
      UnderlyingCouponRate_104.setString("44.920000");
set_field(noUnderlyings_1_1_2, UnderlyingCouponRate_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCreditRating{"STRING_945719122"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_104);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_104;
      UnderlyingCurrentValue_104.setString("16696370");
set_field(noUnderlyings_1_1_2, UnderlyingCurrentValue_104, UnderlyingInstrument_104);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_104;
      UnderlyingDetachmentPoint_104.setString("20.980000");
set_field(noUnderlyings_1_1_2, UnderlyingDetachmentPoint_104, UnderlyingInstrument_104);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_104;
      UnderlyingDirtyPrice_104.setString("19549226");
set_field(noUnderlyings_1_1_2, UnderlyingDirtyPrice_104, UnderlyingInstrument_104);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_104;
      UnderlyingEndPrice_104.setString("5679385");
set_field(noUnderlyings_1_1_2, UnderlyingEndPrice_104, UnderlyingInstrument_104);
      FIX::UnderlyingEndValue UnderlyingEndValue_104;
      UnderlyingEndValue_104.setString("5146109");
set_field(noUnderlyings_1_1_2, UnderlyingEndValue_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingExerciseStyle{978392649}, UnderlyingInstrument_104);
      FIX::UnderlyingFXRate UnderlyingFXRate_104;
      UnderlyingFXRate_104.setString("14683195");
set_field(noUnderlyings_1_1_2, UnderlyingFXRate_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_104);
      FIX::UnderlyingFactor UnderlyingFactor_104;
      UnderlyingFactor_104.setString("9992681");
set_field(noUnderlyings_1_1_2, UnderlyingFactor_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFlowScheduleType{1904819687}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingInstrRegistry{"STRING_522808748"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2060287880"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssuer{"STRING_654501463"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_216514166"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_295509060"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_77124944"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_272422385"}, UnderlyingInstrument_104);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_104;
      UnderlyingNotionalPercentageOutstanding_104.setString("79.800000");
set_field(noUnderlyings_1_1_2, UnderlyingNotionalPercentageOutstanding_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_104);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_104;
      UnderlyingOriginalNotionalPercentageOutstanding_104.setString("40.600000");
set_field(noUnderlyings_1_1_2, UnderlyingOriginalNotionalPercentageOutstanding_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_397725461"}, UnderlyingInstrument_104);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_104;
      UnderlyingPriceUnitOfMeasureQty_104.setString("6132644");
set_field(noUnderlyings_1_1_2, UnderlyingPriceUnitOfMeasureQty_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingProduct{2012844211}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPutOrCall{1453613970}, UnderlyingInstrument_104);
      FIX::UnderlyingPx UnderlyingPx_104;
      UnderlyingPx_104.setString("21339984");
set_field(noUnderlyings_1_1_2, UnderlyingPx_104, UnderlyingInstrument_104);
      FIX::UnderlyingQty UnderlyingQty_104;
      UnderlyingQty_104.setString("7914592");
set_field(noUnderlyings_1_1_2, UnderlyingQty_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_970166777"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1107809341"}, UnderlyingInstrument_104);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_104;
      UnderlyingRepurchaseRate_104.setString("83.750000");
set_field(noUnderlyings_1_1_2, UnderlyingRepurchaseRate_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepurchaseTerm{1067643238}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRestructuringType{"STRING_1381793997"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityDesc{"STRING_1259331826"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_996421689"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityID{"STRING_1189232972"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityIDSource{"STRING_1827270334"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecuritySubType{"STRING_1511032686"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityType{"STRING_20141974"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSeniority{"STRING_1148106262"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlMethod{"STRING_356741557"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_104);
      FIX::UnderlyingStartValue UnderlyingStartValue_104;
      UnderlyingStartValue_104.setString("9054423");
set_field(noUnderlyings_1_1_2, UnderlyingStartValue_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_879550305"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_104);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_104;
      UnderlyingStrikePrice_104.setString("10960644");
set_field(noUnderlyings_1_1_2, UnderlyingStrikePrice_104, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbol{"STRING_1227723395"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbolSfx{"STRING_1637068708"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingTimeUnit{"STRING_1368486857"}, UnderlyingInstrument_104);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_1483231375"}, UnderlyingInstrument_104);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_104;
      UnderlyingUnitOfMeasureQty_104.setString("3916868");
set_field(noUnderlyings_1_1_2, UnderlyingUnitOfMeasureQty_104, UnderlyingInstrument_104);
      all_values.push_back(UnderlyingInstrument_104);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_215;
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_1880956837"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_215);
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1004951381"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_215);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_215);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_216;
        set_field(noUnderlyingSecurityAltID_1_2_2_1, FIX::UnderlyingSecurityAltID{"STRING_786627832"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_216);
        set_field(noUnderlyingSecurityAltID_1_2_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1187087159"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_216);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_216);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_217;
        set_field(noUnderlyingSecurityAltID_1_2_2_2, FIX::UnderlyingSecurityAltID{"STRING_991466230"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_217);
        set_field(noUnderlyingSecurityAltID_1_2_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1578087084"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_217);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_217);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_204;
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipType{"STRING_2099275572"}, UnderlyingStipulations_NoUnderlyingStips_204);
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipValue{"STRING_1167781811"}, UnderlyingStipulations_NoUnderlyingStips_204);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_204);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_205;
        set_field(noUnderlyingStips_1_2_2_1, FIX::UnderlyingStipType{"STRING_1077413527"}, UnderlyingStipulations_NoUnderlyingStips_205);
        set_field(noUnderlyingStips_1_2_2_1, FIX::UnderlyingStipValue{"STRING_1333585921"}, UnderlyingStipulations_NoUnderlyingStips_205);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_205);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_206;
        set_field(noUnderlyingStips_1_2_2_2, FIX::UnderlyingStipType{"STRING_279629990"}, UnderlyingStipulations_NoUnderlyingStips_206);
        set_field(noUnderlyingStips_1_2_2_2, FIX::UnderlyingStipValue{"STRING_2073835216"}, UnderlyingStipulations_NoUnderlyingStips_206);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_206);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_223;
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_2106900324"}, UndlyInstrumentParties_NoUndlyInstrumentParties_223);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_223);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyRole{395477220}, UndlyInstrumentParties_NoUndlyInstrumentParties_223);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_223);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1794125812"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1414887323}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2012965239"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{526192469}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_199618010"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{1425425355}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_2);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_224;
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1622256941"}, UndlyInstrumentParties_NoUndlyInstrumentParties_224);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_224);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyRole{915010416}, UndlyInstrumentParties_NoUndlyInstrumentParties_224);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_224);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449;
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_763089133"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449);
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1306697311}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450;
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1764527419"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450);
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{496562322}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451;
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_164165044"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451);
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{403671603}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_2);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_225;
        set_field(noUndlyInstrumentParties_1_2_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_1683649481"}, UndlyInstrumentParties_NoUndlyInstrumentParties_225);
        set_field(noUndlyInstrumentParties_1_2_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_225);
        set_field(noUndlyInstrumentParties_1_2_2_2, FIX::UnderlyingInstrumentPartyRole{1981758687}, UndlyInstrumentParties_NoUndlyInstrumentParties_225);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_225);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452;
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1107423199"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452);
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1002056851}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453;
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_623349648"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453);
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{293525472}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_3_1);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_2);
    }
    // YieldData
    multiset<string> YieldData_21;
    FIX::Yield Yield_21;
    Yield_21.setString("68.410000");
set_field(noRelatedSym_0_1, Yield_21, YieldData_21);
    set_field(noRelatedSym_0_1, FIX::YieldCalcDate{"LOCALMKTDATE_549701216"}, YieldData_21);
    set_field(noRelatedSym_0_1, FIX::YieldRedemptionDate{"LOCALMKTDATE_668860718"}, YieldData_21);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_21;
    YieldRedemptionPrice_21.setString("12411035");
set_field(noRelatedSym_0_1, YieldRedemptionPrice_21, YieldData_21);
    set_field(noRelatedSym_0_1, FIX::YieldRedemptionPriceType{1987085471}, YieldData_21);
    set_field(noRelatedSym_0_1, FIX::YieldType{"STRING_AFTERTAX"}, YieldData_21);
    all_values.push_back(YieldData_21);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::QuoteRequestReject::NoRelatedSym noRelatedSym_0_2;
    // QuotReqRjctGrp.NoRelatedSym
    multiset<string> QuotReqRjctGrp_NoRelatedSym_2;
    set_field(noRelatedSym_0_2, FIX::Account{"STRING_201142808"}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::AccountType{2}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::AcctIDSource{99}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::Currency{"JPY"}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::ExpireTime{FIX::UTCTIMESTAMP(19, 57, 9, 3, 4, 2008)}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::OrdType{'J'}, QuotReqRjctGrp_NoRelatedSym_2);
    FIX::OrderQty2 OrderQty2_21;
    OrderQty2_21.setString("20949973");
set_field(noRelatedSym_0_2, OrderQty2_21, QuotReqRjctGrp_NoRelatedSym_2);
    FIX::PrevClosePx PrevClosePx_11;
    PrevClosePx_11.setString("10708688");
set_field(noRelatedSym_0_2, PrevClosePx_11, QuotReqRjctGrp_NoRelatedSym_2);
    FIX::Price Price_22;
    Price_22.setString("17304388");
set_field(noRelatedSym_0_2, Price_22, QuotReqRjctGrp_NoRelatedSym_2);
    FIX::Price2 Price2_7;
    Price2_7.setString("3511852");
set_field(noRelatedSym_0_2, Price2_7, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::PriceType{6}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::QtyType{2}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::QuotePriceType{4}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::QuoteRequestType{1}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::QuoteType{0}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::SettlDate{"LOCALMKTDATE_1187517164"}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::SettlDate2{"LOCALMKTDATE_776320439"}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::SettlType{"STRING_1"}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::Side{'6'}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::TradeOriginationDate{"LOCALMKTDATE_1326021655"}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::TradingSessionID{"STRING_2"}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::TradingSessionSubID{"STRING_4"}, QuotReqRjctGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::TransactTime{FIX::UTCTIMESTAMP(10, 42, 45, 23, 11, 2008)}, QuotReqRjctGrp_NoRelatedSym_2);
    all_values.push_back(QuotReqRjctGrp_NoRelatedSym_2);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_21;
    set_field(noRelatedSym_0_2, FIX::AgreementCurrency{"CHF"}, FinancingDetails_21);
    set_field(noRelatedSym_0_2, FIX::AgreementDate{"LOCALMKTDATE_151513671"}, FinancingDetails_21);
    set_field(noRelatedSym_0_2, FIX::AgreementDesc{"STRING_252085156"}, FinancingDetails_21);
    set_field(noRelatedSym_0_2, FIX::AgreementID{"STRING_1434733712"}, FinancingDetails_21);
    set_field(noRelatedSym_0_2, FIX::DeliveryType{3}, FinancingDetails_21);
    set_field(noRelatedSym_0_2, FIX::EndDate{"LOCALMKTDATE_826391670"}, FinancingDetails_21);
    FIX::MarginRatio MarginRatio_21;
    MarginRatio_21.setString("38.980000");
set_field(noRelatedSym_0_2, MarginRatio_21, FinancingDetails_21);
    set_field(noRelatedSym_0_2, FIX::StartDate{"LOCALMKTDATE_429497241"}, FinancingDetails_21);
    set_field(noRelatedSym_0_2, FIX::TerminationType{3}, FinancingDetails_21);
    all_values.push_back(FinancingDetails_21);
    all_compo_names.insert("...NoRelatedSym.");

    // Instrument
    multiset<string> Instrument_71;
    FIX::AttachmentPoint AttachmentPoint_71;
    AttachmentPoint_71.setString("91.280000");
set_field(noRelatedSym_0_2, AttachmentPoint_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::CFICode{"STRING_780682515"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::CPProgram{99}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::CPRegType{"STRING_1175065634"}, Instrument_71);
    FIX::CapPrice CapPrice_71;
    CapPrice_71.setString("9661428");
set_field(noRelatedSym_0_2, CapPrice_71, Instrument_71);
    FIX::ContractMultiplier ContractMultiplier_71;
    ContractMultiplier_71.setString("5097823");
set_field(noRelatedSym_0_2, ContractMultiplier_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::ContractMultiplierUnit{0}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::ContractSettlMonth{"MONTHYEAR_6176344"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::CountryOfIssue{"COUNTRY_1286102756"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::CouponPaymentDate{"LOCALMKTDATE_865643219"}, Instrument_71);
    FIX::CouponRate CouponRate_71;
    CouponRate_71.setString("67.010000");
set_field(noRelatedSym_0_2, CouponRate_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::CreditRating{"STRING_464640764"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::DatedDate{"LOCALMKTDATE_1526555467"}, Instrument_71);
    FIX::DetachmentPoint DetachmentPoint_71;
    DetachmentPoint_71.setString("5.750000");
set_field(noRelatedSym_0_2, DetachmentPoint_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::EncodedIssuer{"DATA_1630264242"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::EncodedIssuerLen{1104322005}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::EncodedSecurityDesc{"DATA_1507203610"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::EncodedSecurityDescLen{134648060}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::ExerciseStyle{1}, Instrument_71);
    FIX::Factor Factor_71;
    Factor_71.setString("11903110");
set_field(noRelatedSym_0_2, Factor_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::FlexProductEligibilityIndicator{true}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::FlexibleIndicator{false}, Instrument_71);
    FIX::FloorPrice FloorPrice_71;
    FloorPrice_71.setString("2179845");
set_field(noRelatedSym_0_2, FloorPrice_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::FlowScheduleType{3}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::InstrRegistry{"STRING_1706783087"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::InstrmtAssignmentMethod{'1'}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::InterestAccrualDate{"LOCALMKTDATE_1432449224"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::IssueDate{"LOCALMKTDATE_385691109"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::Issuer{"STRING_358758547"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::ListMethod{0}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::LocaleOfIssue{"STRING_135467967"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::MaturityDate{"LOCALMKTDATE_795237675"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::MaturityMonthYear{"MONTHYEAR_495145333"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::MaturityTime{"TZTIMEONLY_492279494"}, Instrument_71);
    FIX::MinPriceIncrement MinPriceIncrement_71;
    MinPriceIncrement_71.setString("19703033");
set_field(noRelatedSym_0_2, MinPriceIncrement_71, Instrument_71);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_71;
    MinPriceIncrementAmount_71.setString("14612881");
set_field(noRelatedSym_0_2, MinPriceIncrementAmount_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::NTPositionLimit{1002061812}, Instrument_71);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_71;
    NotionalPercentageOutstanding_71.setString("13.520000");
set_field(noRelatedSym_0_2, NotionalPercentageOutstanding_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::OptAttribute{'1'}, Instrument_71);
    FIX::OptPayoutAmount OptPayoutAmount_71;
    OptPayoutAmount_71.setString("1406809");
set_field(noRelatedSym_0_2, OptPayoutAmount_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::OptPayoutType{1}, Instrument_71);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_71;
    OriginalNotionalPercentageOutstanding_71.setString("12.060000");
set_field(noRelatedSym_0_2, OriginalNotionalPercentageOutstanding_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::Pool{"STRING_605321684"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::PositionLimit{941126390}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::PriceUnitOfMeasure{"STRING_88102279"}, Instrument_71);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_71;
    PriceUnitOfMeasureQty_71.setString("20454483");
set_field(noRelatedSym_0_2, PriceUnitOfMeasureQty_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::Product{13}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::ProductComplex{"STRING_222750339"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::PutOrCall{0}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::RedemptionDate{"LOCALMKTDATE_2088629139"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::RepoCollateralSecurityType{"STRING_1021702321"}, Instrument_71);
    FIX::RepurchaseRate RepurchaseRate_71;
    RepurchaseRate_71.setString("91.870000");
set_field(noRelatedSym_0_2, RepurchaseRate_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::RepurchaseTerm{159130076}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::RestructuringType{"STRING_MM"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::SecurityDesc{"STRING_1925792275"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::SecurityExchange{"EXCHANGE_1811848373"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::SecurityGroup{"STRING_1257133551"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::SecurityID{"STRING_163999736"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::SecurityIDSource{"STRING_J"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::SecurityStatus{"STRING_2"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::SecuritySubType{"STRING_299467704"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::SecurityType{"STRING_BRADY"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::Seniority{"STRING_SB"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::SettlMethod{'C'}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::SettleOnOpenFlag{"STRING_641180609"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::StateOrProvinceOfIssue{"STRING_780546215"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::StrikeCurrency{"CHF"}, Instrument_71);
    FIX::StrikeMultiplier StrikeMultiplier_71;
    StrikeMultiplier_71.setString("1005270");
set_field(noRelatedSym_0_2, StrikeMultiplier_71, Instrument_71);
    FIX::StrikePrice StrikePrice_71;
    StrikePrice_71.setString("19344899");
set_field(noRelatedSym_0_2, StrikePrice_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::StrikePriceBoundaryMethod{1}, Instrument_71);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_71;
    StrikePriceBoundaryPrecision_71.setString("82.780000");
set_field(noRelatedSym_0_2, StrikePriceBoundaryPrecision_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::StrikePriceDeterminationMethod{4}, Instrument_71);
    FIX::StrikeValue StrikeValue_71;
    StrikeValue_71.setString("16932892");
set_field(noRelatedSym_0_2, StrikeValue_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::Symbol{"STRING_1287002763"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::SymbolSfx{"STRING_CD"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::TimeUnit{"STRING_S"}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_71);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_71;
    UnitOfMeasureQty_71.setString("3555652");
set_field(noRelatedSym_0_2, UnitOfMeasureQty_71, Instrument_71);
    set_field(noRelatedSym_0_2, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_71);
    all_values.push_back(Instrument_71);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_144;
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_144);
      FIX::ComplexEventPrice ComplexEventPrice_144;
      ComplexEventPrice_144.setString("1381127");
set_field(noComplexEvents_2_1_0, ComplexEventPrice_144, ComplexEvents_NoComplexEvents_144);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_144);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_144;
      ComplexEventPriceBoundaryPrecision_144.setString("30.930000");
set_field(noComplexEvents_2_1_0, ComplexEventPriceBoundaryPrecision_144, ComplexEvents_NoComplexEvents_144);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_144);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_144);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_144;
      ComplexOptPayoutAmount_144.setString("5168828");
set_field(noComplexEvents_2_1_0, ComplexOptPayoutAmount_144, ComplexEvents_NoComplexEvents_144);
      all_values.push_back(ComplexEvents_NoComplexEvents_144);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_286;
        set_field(noComplexEventDates_2_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 25, 59, 24, 7, 2016)}, ComplexEventDates_NoComplexEventDates_286);
        set_field(noComplexEventDates_2_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 46, 18, 17, 1, 2015)}, ComplexEventDates_NoComplexEventDates_286);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_286);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_586;
          set_field(noComplexEventTimes_2_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 15, 42)}, ComplexEventTimes_NoComplexEventTimes_586);
          set_field(noComplexEventTimes_2_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 25, 8)}, ComplexEventTimes_NoComplexEventTimes_586);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_586);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_287;
        set_field(noComplexEventDates_2_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 41, 14, 20, 2, 2010)}, ComplexEventDates_NoComplexEventDates_287);
        set_field(noComplexEventDates_2_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 10, 10, 5, 8, 2015)}, ComplexEventDates_NoComplexEventDates_287);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_287);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_587;
          set_field(noComplexEventTimes_2_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 57, 40)}, ComplexEventTimes_NoComplexEventTimes_587);
          set_field(noComplexEventTimes_2_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 25, 10)}, ComplexEventTimes_NoComplexEventTimes_587);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_587);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_588;
          set_field(noComplexEventTimes_2_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 26, 31)}, ComplexEventTimes_NoComplexEventTimes_588);
          set_field(noComplexEventTimes_2_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 56, 47)}, ComplexEventTimes_NoComplexEventTimes_588);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_588);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_589;
          set_field(noComplexEventTimes_2_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 20, 8)}, ComplexEventTimes_NoComplexEventTimes_589);
          set_field(noComplexEventTimes_2_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 4, 6)}, ComplexEventTimes_NoComplexEventTimes_589);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_589);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_145;
      set_field(noComplexEvents_2_1_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_145);
      FIX::ComplexEventPrice ComplexEventPrice_145;
      ComplexEventPrice_145.setString("3089920");
set_field(noComplexEvents_2_1_1, ComplexEventPrice_145, ComplexEvents_NoComplexEvents_145);
      set_field(noComplexEvents_2_1_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_145);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_145;
      ComplexEventPriceBoundaryPrecision_145.setString("67.800000");
set_field(noComplexEvents_2_1_1, ComplexEventPriceBoundaryPrecision_145, ComplexEvents_NoComplexEvents_145);
      set_field(noComplexEvents_2_1_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_145);
      set_field(noComplexEvents_2_1_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_145);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_145;
      ComplexOptPayoutAmount_145.setString("18293468");
set_field(noComplexEvents_2_1_1, ComplexOptPayoutAmount_145, ComplexEvents_NoComplexEvents_145);
      all_values.push_back(ComplexEvents_NoComplexEvents_145);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_288;
        set_field(noComplexEventDates_2_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 4, 20, 25, 6, 2001)}, ComplexEventDates_NoComplexEventDates_288);
        set_field(noComplexEventDates_2_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 49, 16, 2, 6, 2010)}, ComplexEventDates_NoComplexEventDates_288);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_288);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_590;
          set_field(noComplexEventTimes_2_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 33, 23)}, ComplexEventTimes_NoComplexEventTimes_590);
          set_field(noComplexEventTimes_2_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 19, 15)}, ComplexEventTimes_NoComplexEventTimes_590);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_590);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_1_2_0.addGroup(noComplexEventTimes_2_1_0_3_0);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_289;
        set_field(noComplexEventDates_2_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 23, 1, 4, 6, 2016)}, ComplexEventDates_NoComplexEventDates_289);
        set_field(noComplexEventDates_2_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 24, 48, 16, 2, 2000)}, ComplexEventDates_NoComplexEventDates_289);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_289);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_591;
          set_field(noComplexEventTimes_2_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 56, 7)}, ComplexEventTimes_NoComplexEventTimes_591);
          set_field(noComplexEventTimes_2_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 11, 16)}, ComplexEventTimes_NoComplexEventTimes_591);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_591);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_592;
          set_field(noComplexEventTimes_2_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 49, 47)}, ComplexEventTimes_NoComplexEventTimes_592);
          set_field(noComplexEventTimes_2_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 59, 24)}, ComplexEventTimes_NoComplexEventTimes_592);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_592);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_1_2_1.addGroup(noComplexEventTimes_2_1_1_3_1);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_290;
        set_field(noComplexEventDates_2_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 39, 53, 22, 1, 2013)}, ComplexEventDates_NoComplexEventDates_290);
        set_field(noComplexEventDates_2_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 1, 11, 8, 7, 2015)}, ComplexEventDates_NoComplexEventDates_290);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_290);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_593;
          set_field(noComplexEventTimes_2_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 11, 11)}, ComplexEventTimes_NoComplexEventTimes_593);
          set_field(noComplexEventTimes_2_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 15, 53)}, ComplexEventTimes_NoComplexEventTimes_593);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_593);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_1_2_2.addGroup(noComplexEventTimes_2_1_2_3_0);
        }
        noComplexEvents_2_1_1.addGroup(noComplexEventDates_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_146;
      set_field(noComplexEvents_2_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_146);
      FIX::ComplexEventPrice ComplexEventPrice_146;
      ComplexEventPrice_146.setString("13587460");
set_field(noComplexEvents_2_1_2, ComplexEventPrice_146, ComplexEvents_NoComplexEvents_146);
      set_field(noComplexEvents_2_1_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_146);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_146;
      ComplexEventPriceBoundaryPrecision_146.setString("88.200000");
set_field(noComplexEvents_2_1_2, ComplexEventPriceBoundaryPrecision_146, ComplexEvents_NoComplexEvents_146);
      set_field(noComplexEvents_2_1_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_146);
      set_field(noComplexEvents_2_1_2, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_146);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_146;
      ComplexOptPayoutAmount_146.setString("5881602");
set_field(noComplexEvents_2_1_2, ComplexOptPayoutAmount_146, ComplexEvents_NoComplexEvents_146);
      all_values.push_back(ComplexEvents_NoComplexEvents_146);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_291;
        set_field(noComplexEventDates_2_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 19, 50, 7, 9, 2001)}, ComplexEventDates_NoComplexEventDates_291);
        set_field(noComplexEventDates_2_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 12, 8, 20, 7, 2017)}, ComplexEventDates_NoComplexEventDates_291);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_291);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_594;
          set_field(noComplexEventTimes_2_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 18, 26)}, ComplexEventTimes_NoComplexEventTimes_594);
          set_field(noComplexEventTimes_2_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 33, 33)}, ComplexEventTimes_NoComplexEventTimes_594);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_594);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_2_2_0.addGroup(noComplexEventTimes_2_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_595;
          set_field(noComplexEventTimes_2_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 15, 12)}, ComplexEventTimes_NoComplexEventTimes_595);
          set_field(noComplexEventTimes_2_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 51, 44)}, ComplexEventTimes_NoComplexEventTimes_595);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_595);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_2_2_0.addGroup(noComplexEventTimes_2_2_0_3_1);
        }
        noComplexEvents_2_1_2.addGroup(noComplexEventDates_2_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_292;
        set_field(noComplexEventDates_2_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 3, 51, 15, 4, 2010)}, ComplexEventDates_NoComplexEventDates_292);
        set_field(noComplexEventDates_2_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 22, 5, 11, 5, 2017)}, ComplexEventDates_NoComplexEventDates_292);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_292);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_596;
          set_field(noComplexEventTimes_2_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 0, 21)}, ComplexEventTimes_NoComplexEventTimes_596);
          set_field(noComplexEventTimes_2_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 54, 36)}, ComplexEventTimes_NoComplexEventTimes_596);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_596);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_2_2_1.addGroup(noComplexEventTimes_2_2_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_597;
          set_field(noComplexEventTimes_2_2_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 52, 6)}, ComplexEventTimes_NoComplexEventTimes_597);
          set_field(noComplexEventTimes_2_2_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 50, 14)}, ComplexEventTimes_NoComplexEventTimes_597);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_597);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_2_2_1.addGroup(noComplexEventTimes_2_2_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_598;
          set_field(noComplexEventTimes_2_2_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 9, 57)}, ComplexEventTimes_NoComplexEventTimes_598);
          set_field(noComplexEventTimes_2_2_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 0, 43)}, ComplexEventTimes_NoComplexEventTimes_598);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_598);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_2_2_1.addGroup(noComplexEventTimes_2_2_1_3_2);
        }
        noComplexEvents_2_1_2.addGroup(noComplexEventDates_2_2_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_143;
      set_field(noEvents_2_1_0, FIX::EventDate{"LOCALMKTDATE_1532969182"}, EvntGrp_NoEvents_143);
      FIX::EventPx EventPx_143;
      EventPx_143.setString("7732312");
set_field(noEvents_2_1_0, EventPx_143, EvntGrp_NoEvents_143);
      set_field(noEvents_2_1_0, FIX::EventText{"STRING_458831752"}, EvntGrp_NoEvents_143);
      set_field(noEvents_2_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(15, 42, 50, 6, 12, 2003)}, EvntGrp_NoEvents_143);
      set_field(noEvents_2_1_0, FIX::EventType{10}, EvntGrp_NoEvents_143);
      all_values.push_back(EvntGrp_NoEvents_143);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_144;
      set_field(noEvents_2_1_1, FIX::EventDate{"LOCALMKTDATE_1433731986"}, EvntGrp_NoEvents_144);
      FIX::EventPx EventPx_144;
      EventPx_144.setString("7275708");
set_field(noEvents_2_1_1, EventPx_144, EvntGrp_NoEvents_144);
      set_field(noEvents_2_1_1, FIX::EventText{"STRING_455964805"}, EvntGrp_NoEvents_144);
      set_field(noEvents_2_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(3, 9, 7, 9, 7, 2015)}, EvntGrp_NoEvents_144);
      set_field(noEvents_2_1_1, FIX::EventType{99}, EvntGrp_NoEvents_144);
      all_values.push_back(EvntGrp_NoEvents_144);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_133;
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyID{"STRING_1709566947"}, InstrumentParties_NoInstrumentParties_133);
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_133);
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyRole{1761659701}, InstrumentParties_NoInstrumentParties_133);
      all_values.push_back(InstrumentParties_NoInstrumentParties_133);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273;
        set_field(noInstrumentPartySubIDs_2_0_2_0, FIX::InstrumentPartySubID{"STRING_1437709577"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273);
        set_field(noInstrumentPartySubIDs_2_0_2_0, FIX::InstrumentPartySubIDType{324539033}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274;
        set_field(noInstrumentPartySubIDs_2_0_2_1, FIX::InstrumentPartySubID{"STRING_2082517368"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274);
        set_field(noInstrumentPartySubIDs_2_0_2_1, FIX::InstrumentPartySubIDType{1372226786}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275;
        set_field(noInstrumentPartySubIDs_2_0_2_2, FIX::InstrumentPartySubID{"STRING_1857508216"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275);
        set_field(noInstrumentPartySubIDs_2_0_2_2, FIX::InstrumentPartySubIDType{708264929}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_145;
      set_field(noSecurityAltID_2_1_0, FIX::SecurityAltID{"STRING_185100663"}, SecAltIDGrp_NoSecurityAltID_145);
      set_field(noSecurityAltID_2_1_0, FIX::SecurityAltIDSource{"STRING_1477072544"}, SecAltIDGrp_NoSecurityAltID_145);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_145);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_142;
    set_field(noRelatedSym_0_2, FIX::SecurityXML{"XMLDATA_1698118012"}, SecurityXML_142);
    set_field(noRelatedSym_0_2, FIX::SecurityXMLLen{1210419833}, SecurityXML_142);
    set_field(noRelatedSym_0_2, FIX::SecurityXMLSchema{"STRING_577445302"}, SecurityXML_142);
    all_values.push_back(SecurityXML_142);
    all_compo_names.insert("...NoRelatedSym..");

    // OrderQtyData
    multiset<string> OrderQtyData_24;
    FIX::CashOrderQty CashOrderQty_24;
    CashOrderQty_24.setString("7289981");
set_field(noRelatedSym_0_2, CashOrderQty_24, OrderQtyData_24);
    FIX::OrderPercent OrderPercent_24;
    OrderPercent_24.setString("20.960000");
set_field(noRelatedSym_0_2, OrderPercent_24, OrderQtyData_24);
    FIX::OrderQty OrderQty_33;
    OrderQty_33.setString("8598340");
set_field(noRelatedSym_0_2, OrderQty_33, OrderQtyData_24);
    set_field(noRelatedSym_0_2, FIX::RoundingDirection{'2'}, OrderQtyData_24);
    FIX::RoundingModulus RoundingModulus_24;
    RoundingModulus_24.setString("5372292");
set_field(noRelatedSym_0_2, RoundingModulus_24, OrderQtyData_24);
    all_values.push_back(OrderQtyData_24);
    all_compo_names.insert("...NoRelatedSym.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_118;
      set_field(noPartyIDs_2_1_0, FIX::PartyID{"STRING_488186238"}, Parties_NoPartyIDs_118);
      set_field(noPartyIDs_2_1_0, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_118);
      set_field(noPartyIDs_2_1_0, FIX::PartyRole{60}, Parties_NoPartyIDs_118);
      all_values.push_back(Parties_NoPartyIDs_118);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_235;
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubID{"STRING_1195343857"}, PtysSubGrp_NoPartySubIDs_235);
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_235);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_235);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_236;
        set_field(noPartySubIDs_2_0_2_1, FIX::PartySubID{"STRING_297890054"}, PtysSubGrp_NoPartySubIDs_236);
        set_field(noPartySubIDs_2_0_2_1, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_236);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_236);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noPartyIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_2_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_119;
      set_field(noPartyIDs_2_1_1, FIX::PartyID{"STRING_1844261396"}, Parties_NoPartyIDs_119);
      set_field(noPartyIDs_2_1_1, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_119);
      set_field(noPartyIDs_2_1_1, FIX::PartyRole{70}, Parties_NoPartyIDs_119);
      all_values.push_back(Parties_NoPartyIDs_119);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_237;
        set_field(noPartySubIDs_2_1_2_0, FIX::PartySubID{"STRING_1446428499"}, PtysSubGrp_NoPartySubIDs_237);
        set_field(noPartySubIDs_2_1_2_0, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_237);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_237);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_238;
        set_field(noPartySubIDs_2_1_2_1, FIX::PartySubID{"STRING_1782976483"}, PtysSubGrp_NoPartySubIDs_238);
        set_field(noPartySubIDs_2_1_2_1, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_238);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_238);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_239;
        set_field(noPartySubIDs_2_1_2_2, FIX::PartySubID{"STRING_734371736"}, PtysSubGrp_NoPartySubIDs_239);
        set_field(noPartySubIDs_2_1_2_2, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_239);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_239);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_1.addGroup(noPartySubIDs_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noPartyIDs_2_1_1);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_2_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_10;
      set_field(noQuoteQualifiers_2_1_0, FIX::QuoteQualifier{'4'}, QuotQualGrp_NoQuoteQualifiers_10);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_10);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_2.addGroup(noQuoteQualifiers_2_1_0);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_2_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_7;
      FIX::LegOrderQty LegOrderQty_15;
      LegOrderQty_15.setString("14193160");
set_field(noLegs_2_1_0, LegOrderQty_15, QuotReqLegsGrp_NoLegs_7);
      FIX::LegQty LegQty_15;
      LegQty_15.setString("21160646");
set_field(noLegs_2_1_0, LegQty_15, QuotReqLegsGrp_NoLegs_7);
      set_field(noLegs_2_1_0, FIX::LegRefID{"STRING_741037899"}, QuotReqLegsGrp_NoLegs_7);
      set_field(noLegs_2_1_0, FIX::LegSettlDate{"LOCALMKTDATE_1996761347"}, QuotReqLegsGrp_NoLegs_7);
      set_field(noLegs_2_1_0, FIX::LegSettlType{'6'}, QuotReqLegsGrp_NoLegs_7);
      set_field(noLegs_2_1_0, FIX::LegSwapType{5}, QuotReqLegsGrp_NoLegs_7);
      all_values.push_back(QuotReqLegsGrp_NoLegs_7);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_103;
      set_field(noLegs_2_1_0, FIX::EncodedLegIssuer{"DATA_709111731"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::EncodedLegIssuerLen{712825647}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::EncodedLegSecurityDesc{"DATA_1087925644"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::EncodedLegSecurityDescLen{2024910568}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegCFICode{"STRING_1201011885"}, InstrumentLeg_103);
      FIX::LegContractMultiplier LegContractMultiplier_103;
      LegContractMultiplier_103.setString("18042822");
set_field(noLegs_2_1_0, LegContractMultiplier_103, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegContractMultiplierUnit{1543395366}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_417114002"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegCountryOfIssue{"COUNTRY_852142465"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1548197091"}, InstrumentLeg_103);
      FIX::LegCouponRate LegCouponRate_103;
      LegCouponRate_103.setString("40.560000");
set_field(noLegs_2_1_0, LegCouponRate_103, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegCreditRating{"STRING_1882289753"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1954208774"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegExerciseStyle{555928641}, InstrumentLeg_103);
      FIX::LegFactor LegFactor_103;
      LegFactor_103.setString("20214059");
set_field(noLegs_2_1_0, LegFactor_103, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegFlowScheduleType{1316353724}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegInstrRegistry{"STRING_191421477"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1255384480"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegIssueDate{"LOCALMKTDATE_2050725460"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegIssuer{"STRING_1684422528"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegLocaleOfIssue{"STRING_1197627981"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_321188438"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1215040595"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegMaturityTime{"TZTIMEONLY_469460378"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_103);
      FIX::LegOptionRatio LegOptionRatio_103;
      LegOptionRatio_103.setString("19560784");
set_field(noLegs_2_1_0, LegOptionRatio_103, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegPool{"STRING_318738077"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegPriceUnitOfMeasure{"STRING_987348578"}, InstrumentLeg_103);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_103;
      LegPriceUnitOfMeasureQty_103.setString("3592911");
set_field(noLegs_2_1_0, LegPriceUnitOfMeasureQty_103, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegProduct{1027849808}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegPutOrCall{1700174226}, InstrumentLeg_103);
      FIX::LegRatioQty LegRatioQty_103;
      LegRatioQty_103.setString("14472168");
set_field(noLegs_2_1_0, LegRatioQty_103, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_905276728"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegRepoCollateralSecurityType{"STRING_753702463"}, InstrumentLeg_103);
      FIX::LegRepurchaseRate LegRepurchaseRate_103;
      LegRepurchaseRate_103.setString("54.470000");
set_field(noLegs_2_1_0, LegRepurchaseRate_103, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegRepurchaseTerm{301188447}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegSecurityDesc{"STRING_1170816466"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegSecurityExchange{"EXCHANGE_1956157912"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegSecurityID{"STRING_1849385538"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegSecurityIDSource{"STRING_1885820522"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegSecuritySubType{"STRING_1690964018"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegSecurityType{"STRING_946876729"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegSide{'3'}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_1497689144"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_103);
      FIX::LegStrikePrice LegStrikePrice_103;
      LegStrikePrice_103.setString("6665592");
set_field(noLegs_2_1_0, LegStrikePrice_103, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegSymbol{"STRING_1694226848"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegSymbolSfx{"STRING_1442621026"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegTimeUnit{"STRING_569801032"}, InstrumentLeg_103);
      set_field(noLegs_2_1_0, FIX::LegUnitOfMeasure{"STRING_1231165728"}, InstrumentLeg_103);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_103;
      LegUnitOfMeasureQty_103.setString("4927653");
set_field(noLegs_2_1_0, LegUnitOfMeasureQty_103, InstrumentLeg_103);
      all_values.push_back(InstrumentLeg_103);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_204;
        set_field(noLegSecurityAltID_2_0_2_0, FIX::LegSecurityAltID{"STRING_298722675"}, LegSecAltIDGrp_NoLegSecurityAltID_204);
        set_field(noLegSecurityAltID_2_0_2_0, FIX::LegSecurityAltIDSource{"STRING_962225737"}, LegSecAltIDGrp_NoLegSecurityAltID_204);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_204);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_9;
      set_field(noLegs_2_1_0, FIX::LegBenchmarkCurveCurrency{"JPY"}, LegBenchmarkCurveData_9);
      set_field(noLegs_2_1_0, FIX::LegBenchmarkCurveName{"STRING_1280963814"}, LegBenchmarkCurveData_9);
      set_field(noLegs_2_1_0, FIX::LegBenchmarkCurvePoint{"STRING_20623829"}, LegBenchmarkCurveData_9);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_9;
      LegBenchmarkPrice_9.setString("4666087");
set_field(noLegs_2_1_0, LegBenchmarkPrice_9, LegBenchmarkCurveData_9);
      set_field(noLegs_2_1_0, FIX::LegBenchmarkPriceType{161329975}, LegBenchmarkCurveData_9);
      all_values.push_back(LegBenchmarkCurveData_9);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_33;
        set_field(noLegStipulations_2_0_2_0, FIX::LegStipulationType{"STRING_1913825554"}, LegStipulations_NoLegStipulations_33);
        set_field(noLegStipulations_2_0_2_0, FIX::LegStipulationValue{"STRING_1066606703"}, LegStipulations_NoLegStipulations_33);
        all_values.push_back(LegStipulations_NoLegStipulations_33);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_2_1_0.addGroup(noLegStipulations_2_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_34;
        set_field(noLegStipulations_2_0_2_1, FIX::LegStipulationType{"STRING_327016870"}, LegStipulations_NoLegStipulations_34);
        set_field(noLegStipulations_2_0_2_1, FIX::LegStipulationValue{"STRING_870357353"}, LegStipulations_NoLegStipulations_34);
        all_values.push_back(LegStipulations_NoLegStipulations_34);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_2_1_0.addGroup(noLegStipulations_2_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_35;
        set_field(noLegStipulations_2_0_2_2, FIX::LegStipulationType{"STRING_1367795150"}, LegStipulations_NoLegStipulations_35);
        set_field(noLegStipulations_2_0_2_2, FIX::LegStipulationValue{"STRING_1497833336"}, LegStipulations_NoLegStipulations_35);
        all_values.push_back(LegStipulations_NoLegStipulations_35);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_2_1_0.addGroup(noLegStipulations_2_0_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_128;
        set_field(noNestedPartyIDs_2_0_2_0, FIX::NestedPartyID{"STRING_1069697040"}, NestedParties_NoNestedPartyIDs_128);
        set_field(noNestedPartyIDs_2_0_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_128);
        set_field(noNestedPartyIDs_2_0_2_0, FIX::NestedPartyRole{222511988}, NestedParties_NoNestedPartyIDs_128);
        all_values.push_back(NestedParties_NoNestedPartyIDs_128);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_266;
          set_field(noNestedPartySubIDs_2_0_0_3_0, FIX::NestedPartySubID{"STRING_1549484495"}, NstdPtysSubGrp_NoNestedPartySubIDs_266);
          set_field(noNestedPartySubIDs_2_0_0_3_0, FIX::NestedPartySubIDType{1720201132}, NstdPtysSubGrp_NoNestedPartySubIDs_266);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_266);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_267;
          set_field(noNestedPartySubIDs_2_0_0_3_1, FIX::NestedPartySubID{"STRING_1371895493"}, NstdPtysSubGrp_NoNestedPartySubIDs_267);
          set_field(noNestedPartySubIDs_2_0_0_3_1, FIX::NestedPartySubIDType{1736721041}, NstdPtysSubGrp_NoNestedPartySubIDs_267);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_267);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_268;
          set_field(noNestedPartySubIDs_2_0_0_3_2, FIX::NestedPartySubID{"STRING_239276704"}, NstdPtysSubGrp_NoNestedPartySubIDs_268);
          set_field(noNestedPartySubIDs_2_0_0_3_2, FIX::NestedPartySubIDType{918638693}, NstdPtysSubGrp_NoNestedPartySubIDs_268);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_268);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_2);
        }
        noLegs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_129;
        set_field(noNestedPartyIDs_2_0_2_1, FIX::NestedPartyID{"STRING_1031858419"}, NestedParties_NoNestedPartyIDs_129);
        set_field(noNestedPartyIDs_2_0_2_1, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_129);
        set_field(noNestedPartyIDs_2_0_2_1, FIX::NestedPartyRole{2320773}, NestedParties_NoNestedPartyIDs_129);
        all_values.push_back(NestedParties_NoNestedPartyIDs_129);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_269;
          set_field(noNestedPartySubIDs_2_0_1_3_0, FIX::NestedPartySubID{"STRING_1700067206"}, NstdPtysSubGrp_NoNestedPartySubIDs_269);
          set_field(noNestedPartySubIDs_2_0_1_3_0, FIX::NestedPartySubIDType{301043449}, NstdPtysSubGrp_NoNestedPartySubIDs_269);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_269);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_0);
        }
        noLegs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_130;
        set_field(noNestedPartyIDs_2_0_2_2, FIX::NestedPartyID{"STRING_339365867"}, NestedParties_NoNestedPartyIDs_130);
        set_field(noNestedPartyIDs_2_0_2_2, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_130);
        set_field(noNestedPartyIDs_2_0_2_2, FIX::NestedPartyRole{408360971}, NestedParties_NoNestedPartyIDs_130);
        all_values.push_back(NestedParties_NoNestedPartyIDs_130);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_270;
          set_field(noNestedPartySubIDs_2_0_2_3_0, FIX::NestedPartySubID{"STRING_753966285"}, NstdPtysSubGrp_NoNestedPartySubIDs_270);
          set_field(noNestedPartySubIDs_2_0_2_3_0, FIX::NestedPartySubIDType{874969687}, NstdPtysSubGrp_NoNestedPartySubIDs_270);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_270);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_2.addGroup(noNestedPartySubIDs_2_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_271;
          set_field(noNestedPartySubIDs_2_0_2_3_1, FIX::NestedPartySubID{"STRING_1781659656"}, NstdPtysSubGrp_NoNestedPartySubIDs_271);
          set_field(noNestedPartySubIDs_2_0_2_3_1, FIX::NestedPartySubIDType{327280692}, NstdPtysSubGrp_NoNestedPartySubIDs_271);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_271);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_2.addGroup(noNestedPartySubIDs_2_0_2_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_272;
          set_field(noNestedPartySubIDs_2_0_2_3_2, FIX::NestedPartySubID{"STRING_641311593"}, NstdPtysSubGrp_NoNestedPartySubIDs_272);
          set_field(noNestedPartySubIDs_2_0_2_3_2, FIX::NestedPartySubIDType{700782712}, NstdPtysSubGrp_NoNestedPartySubIDs_272);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_272);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_2.addGroup(noNestedPartySubIDs_2_0_2_3_2);
        }
        noLegs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_27;
    set_field(noRelatedSym_0_2, FIX::BenchmarkCurveCurrency{"CHF"}, SpreadOrBenchmarkCurveData_27);
    set_field(noRelatedSym_0_2, FIX::BenchmarkCurveName{"STRING_MuniAAA"}, SpreadOrBenchmarkCurveData_27);
    set_field(noRelatedSym_0_2, FIX::BenchmarkCurvePoint{"STRING_4647251"}, SpreadOrBenchmarkCurveData_27);
    FIX::BenchmarkPrice BenchmarkPrice_27;
    BenchmarkPrice_27.setString("432169");
set_field(noRelatedSym_0_2, BenchmarkPrice_27, SpreadOrBenchmarkCurveData_27);
    set_field(noRelatedSym_0_2, FIX::BenchmarkPriceType{990791255}, SpreadOrBenchmarkCurveData_27);
    set_field(noRelatedSym_0_2, FIX::BenchmarkSecurityID{"STRING_1240817462"}, SpreadOrBenchmarkCurveData_27);
    set_field(noRelatedSym_0_2, FIX::BenchmarkSecurityIDSource{"STRING_265728905"}, SpreadOrBenchmarkCurveData_27);
    FIX::Spread Spread_27;
    Spread_27.setString("8598813");
set_field(noRelatedSym_0_2, Spread_27, SpreadOrBenchmarkCurveData_27);
    all_values.push_back(SpreadOrBenchmarkCurveData_27);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_2_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_46;
      set_field(noStipulations_2_1_0, FIX::StipulationType{"STRING_SECTOR"}, Stipulations_NoStipulations_46);
      set_field(noStipulations_2_1_0, FIX::StipulationValue{"STRING_84293222"}, Stipulations_NoStipulations_46);
      all_values.push_back(Stipulations_NoStipulations_46);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_2.addGroup(noStipulations_2_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_2_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_105;
      set_field(noUnderlyings_2_1_0, FIX::EncodedUnderlyingIssuer{"DATA_77723093"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::EncodedUnderlyingIssuerLen{1002931915}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1263914122"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::EncodedUnderlyingSecurityDescLen{886800829}, UnderlyingInstrument_105);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_105;
      UnderlyingAdjustedQuantity_105.setString("10052526");
set_field(noUnderlyings_2_1_0, UnderlyingAdjustedQuantity_105, UnderlyingInstrument_105);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_105;
      UnderlyingAllocationPercent_105.setString("42.520000");
set_field(noUnderlyings_2_1_0, UnderlyingAllocationPercent_105, UnderlyingInstrument_105);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_105;
      UnderlyingAttachmentPoint_105.setString("43.870000");
set_field(noUnderlyings_2_1_0, UnderlyingAttachmentPoint_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCFICode{"STRING_1306296137"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCPProgram{"STRING_980420119"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCPRegType{"STRING_1172726843"}, UnderlyingInstrument_105);
      FIX::UnderlyingCapValue UnderlyingCapValue_105;
      UnderlyingCapValue_105.setString("17146571");
set_field(noUnderlyings_2_1_0, UnderlyingCapValue_105, UnderlyingInstrument_105);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_105;
      UnderlyingCashAmount_105.setString("4532661");
set_field(noUnderlyings_2_1_0, UnderlyingCashAmount_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_105);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_105;
      UnderlyingContractMultiplier_105.setString("4421431");
set_field(noUnderlyings_2_1_0, UnderlyingContractMultiplier_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingContractMultiplierUnit{87442161}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_106490173"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1083454741"}, UnderlyingInstrument_105);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_105;
      UnderlyingCouponRate_105.setString("48.730000");
set_field(noUnderlyings_2_1_0, UnderlyingCouponRate_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCreditRating{"STRING_760787736"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_105);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_105;
      UnderlyingCurrentValue_105.setString("7654349");
set_field(noUnderlyings_2_1_0, UnderlyingCurrentValue_105, UnderlyingInstrument_105);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_105;
      UnderlyingDetachmentPoint_105.setString("69.570000");
set_field(noUnderlyings_2_1_0, UnderlyingDetachmentPoint_105, UnderlyingInstrument_105);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_105;
      UnderlyingDirtyPrice_105.setString("17001103");
set_field(noUnderlyings_2_1_0, UnderlyingDirtyPrice_105, UnderlyingInstrument_105);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_105;
      UnderlyingEndPrice_105.setString("20062524");
set_field(noUnderlyings_2_1_0, UnderlyingEndPrice_105, UnderlyingInstrument_105);
      FIX::UnderlyingEndValue UnderlyingEndValue_105;
      UnderlyingEndValue_105.setString("7565858");
set_field(noUnderlyings_2_1_0, UnderlyingEndValue_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingExerciseStyle{412508071}, UnderlyingInstrument_105);
      FIX::UnderlyingFXRate UnderlyingFXRate_105;
      UnderlyingFXRate_105.setString("5015871");
set_field(noUnderlyings_2_1_0, UnderlyingFXRate_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_105);
      FIX::UnderlyingFactor UnderlyingFactor_105;
      UnderlyingFactor_105.setString("4968012");
set_field(noUnderlyings_2_1_0, UnderlyingFactor_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingFlowScheduleType{733642815}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingInstrRegistry{"STRING_672755344"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1499733208"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingIssuer{"STRING_1997556937"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_1559556173"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_357502249"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_491127541"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1998940560"}, UnderlyingInstrument_105);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_105;
      UnderlyingNotionalPercentageOutstanding_105.setString("83.860000");
set_field(noUnderlyings_2_1_0, UnderlyingNotionalPercentageOutstanding_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_105);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_105;
      UnderlyingOriginalNotionalPercentageOutstanding_105.setString("37.550000");
set_field(noUnderlyings_2_1_0, UnderlyingOriginalNotionalPercentageOutstanding_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1230971847"}, UnderlyingInstrument_105);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_105;
      UnderlyingPriceUnitOfMeasureQty_105.setString("19248138");
set_field(noUnderlyings_2_1_0, UnderlyingPriceUnitOfMeasureQty_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingProduct{803393236}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingPutOrCall{1673114994}, UnderlyingInstrument_105);
      FIX::UnderlyingPx UnderlyingPx_105;
      UnderlyingPx_105.setString("20122559");
set_field(noUnderlyings_2_1_0, UnderlyingPx_105, UnderlyingInstrument_105);
      FIX::UnderlyingQty UnderlyingQty_105;
      UnderlyingQty_105.setString("9098834");
set_field(noUnderlyings_2_1_0, UnderlyingQty_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_609086087"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_652997199"}, UnderlyingInstrument_105);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_105;
      UnderlyingRepurchaseRate_105.setString("11.460000");
set_field(noUnderlyings_2_1_0, UnderlyingRepurchaseRate_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingRepurchaseTerm{1056726127}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingRestructuringType{"STRING_1362316286"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSecurityDesc{"STRING_288622486"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1547583084"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSecurityID{"STRING_914942981"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSecurityIDSource{"STRING_147391289"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSecuritySubType{"STRING_156685298"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSecurityType{"STRING_1327451052"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSeniority{"STRING_648978401"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSettlMethod{"STRING_751717549"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_105);
      FIX::UnderlyingStartValue UnderlyingStartValue_105;
      UnderlyingStartValue_105.setString("13826212");
set_field(noUnderlyings_2_1_0, UnderlyingStartValue_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1424472893"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_105);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_105;
      UnderlyingStrikePrice_105.setString("8365454");
set_field(noUnderlyings_2_1_0, UnderlyingStrikePrice_105, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSymbol{"STRING_1534004155"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSymbolSfx{"STRING_1723822048"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingTimeUnit{"STRING_688002330"}, UnderlyingInstrument_105);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1050318894"}, UnderlyingInstrument_105);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_105;
      UnderlyingUnitOfMeasureQty_105.setString("10478860");
set_field(noUnderlyings_2_1_0, UnderlyingUnitOfMeasureQty_105, UnderlyingInstrument_105);
      all_values.push_back(UnderlyingInstrument_105);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_218;
        set_field(noUnderlyingSecurityAltID_2_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_133807093"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_218);
        set_field(noUnderlyingSecurityAltID_2_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_825216225"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_218);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_218);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_219;
        set_field(noUnderlyingSecurityAltID_2_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_368095674"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_219);
        set_field(noUnderlyingSecurityAltID_2_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1806922087"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_219);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_219);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_207;
        set_field(noUnderlyingStips_2_0_2_0, FIX::UnderlyingStipType{"STRING_1277979084"}, UnderlyingStipulations_NoUnderlyingStips_207);
        set_field(noUnderlyingStips_2_0_2_0, FIX::UnderlyingStipValue{"STRING_268524527"}, UnderlyingStipulations_NoUnderlyingStips_207);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_207);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_208;
        set_field(noUnderlyingStips_2_0_2_1, FIX::UnderlyingStipType{"STRING_1342985750"}, UnderlyingStipulations_NoUnderlyingStips_208);
        set_field(noUnderlyingStips_2_0_2_1, FIX::UnderlyingStipValue{"STRING_801166583"}, UnderlyingStipulations_NoUnderlyingStips_208);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_208);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_209;
        set_field(noUnderlyingStips_2_0_2_2, FIX::UnderlyingStipType{"STRING_1325250654"}, UnderlyingStipulations_NoUnderlyingStips_209);
        set_field(noUnderlyingStips_2_0_2_2, FIX::UnderlyingStipValue{"STRING_557818389"}, UnderlyingStipulations_NoUnderlyingStips_209);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_209);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_226;
        set_field(noUndlyInstrumentParties_2_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_725350091"}, UndlyInstrumentParties_NoUndlyInstrumentParties_226);
        set_field(noUndlyInstrumentParties_2_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_226);
        set_field(noUndlyInstrumentParties_2_0_2_0, FIX::UnderlyingInstrumentPartyRole{1237180358}, UndlyInstrumentParties_NoUndlyInstrumentParties_226);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_226);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454;
          set_field(noUndlyInstrumentPartySubIDs_2_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_652728774"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454);
          set_field(noUndlyInstrumentPartySubIDs_2_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1886158760}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455;
          set_field(noUndlyInstrumentPartySubIDs_2_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1633752939"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455);
          set_field(noUndlyInstrumentPartySubIDs_2_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{329497472}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_1);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noUnderlyings_2_1_0);
    }
    // YieldData
    multiset<string> YieldData_22;
    FIX::Yield Yield_22;
    Yield_22.setString("63.290000");
set_field(noRelatedSym_0_2, Yield_22, YieldData_22);
    set_field(noRelatedSym_0_2, FIX::YieldCalcDate{"LOCALMKTDATE_910742184"}, YieldData_22);
    set_field(noRelatedSym_0_2, FIX::YieldRedemptionDate{"LOCALMKTDATE_1505999379"}, YieldData_22);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_22;
    YieldRedemptionPrice_22.setString("2065071");
set_field(noRelatedSym_0_2, YieldRedemptionPrice_22, YieldData_22);
    set_field(noRelatedSym_0_2, FIX::YieldRedemptionPriceType{1747287603}, YieldData_22);
    set_field(noRelatedSym_0_2, FIX::YieldType{"STRING_TENDER"}, YieldData_22);
    all_values.push_back(YieldData_22);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_2);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::QuoteRequestReject::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_8;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_287806285"}, RootParties_NoRootPartyIDs_8);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_8);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{830731648}, RootParties_NoRootPartyIDs_8);
    all_values.push_back(RootParties_NoRootPartyIDs_8);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_14;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_2076645873"}, RootSubParties_NoRootPartySubIDs_14);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{1655947873}, RootSubParties_NoRootPartySubIDs_14);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_14);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_15;
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubID{"STRING_220604398"}, RootSubParties_NoRootPartySubIDs_15);
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubIDType{1736084313}, RootSubParties_NoRootPartySubIDs_15);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_15);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_16;
      set_field(noRootPartySubIDs_0_1_2, FIX::RootPartySubID{"STRING_198452777"}, RootSubParties_NoRootPartySubIDs_16);
      set_field(noRootPartySubIDs_0_1_2, FIX::RootPartySubIDType{1498583482}, RootSubParties_NoRootPartySubIDs_16);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_16);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteRequestReject::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_9;
    set_field(noRootPartyIDs_0_1, FIX::RootPartyID{"STRING_2004608840"}, RootParties_NoRootPartyIDs_9);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_9);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyRole{152266417}, RootParties_NoRootPartyIDs_9);
    all_values.push_back(RootParties_NoRootPartyIDs_9);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_17;
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubID{"STRING_2099256916"}, RootSubParties_NoRootPartySubIDs_17);
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubIDType{1242055487}, RootSubParties_NoRootPartySubIDs_17);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_17);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  // header
  multiset<string> header_71;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_71);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1424534638"}, header_71);
  set_header_field(msg.getHeader(), FIX::BodyLength{331752197}, header_71);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_642277679"}, header_71);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_2077263413"}, header_71);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_70427309"}, header_71);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_128546970"}, header_71);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{259277237}, header_71);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_71);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1039289154}, header_71);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1765276616"}, header_71);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1398230826"}, header_71);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_639093109"}, header_71);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(5, 15, 27, 25, 7, 2017)}, header_71);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_71);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_71);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1970914526"}, header_71);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1718725064}, header_71);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_351112351"}, header_71);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1828039718"}, header_71);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1112679943"}, header_71);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(12, 52, 55, 18, 7, 2007)}, header_71);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1265451885"}, header_71);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_271283967"}, header_71);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_130114"}, header_71);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1393998855"}, header_71);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{530561205}, header_71);
  all_values.push_back(header_71);
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
