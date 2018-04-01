#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::QuoteRequestReject msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteRequestReject_0;
  set_field(msg, FIX::EncodedText{"DATA_1671711695"}, QuoteRequestReject_0);
  set_field(msg, FIX::EncodedTextLen{1224074052}, QuoteRequestReject_0);
  set_field(msg, FIX::PreTradeAnonymity{true}, QuoteRequestReject_0);
  set_field(msg, FIX::PrivateQuote{false}, QuoteRequestReject_0);
  set_field(msg, FIX::QuoteReqID{"STRING_351986570"}, QuoteRequestReject_0);
  set_field(msg, FIX::QuoteRequestRejectReason{7}, QuoteRequestReject_0);
  set_field(msg, FIX::RFQReqID{"STRING_109509124"}, QuoteRequestReject_0);
  set_field(msg, FIX::RespondentType{2}, QuoteRequestReject_0);
  set_field(msg, FIX::Text{"STRING_647978437"}, QuoteRequestReject_0);
  all_values.push_back(QuoteRequestReject_0);

  all_compo_names.insert("QuoteRequestReject");

  // QuotReqRjctGrp
  // Group QuotReqRjctGrp.NoRelatedSym
  {
    FIX50SP2::QuoteRequestReject::NoRelatedSym noRelatedSym_0_0;
    // QuotReqRjctGrp.NoRelatedSym
    multiset<string> QuotReqRjctGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::Account{"STRING_952519225"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::AccountType{2}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::AcctIDSource{99}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Currency{"USD"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(5, 37, 46, 5, 4, 2009)}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::OrdType{'C'}, QuotReqRjctGrp_NoRelatedSym_0);
    FIX::OrderQty2 OrderQty2_10;
    OrderQty2_10.setString("20021774");
set_field(noRelatedSym_0_0, OrderQty2_10, QuotReqRjctGrp_NoRelatedSym_0);
    FIX::PrevClosePx PrevClosePx_8;
    PrevClosePx_8.setString("5990660");
set_field(noRelatedSym_0_0, PrevClosePx_8, QuotReqRjctGrp_NoRelatedSym_0);
    FIX::Price Price_19;
    Price_19.setString("1698538");
set_field(noRelatedSym_0_0, Price_19, QuotReqRjctGrp_NoRelatedSym_0);
    FIX::Price2 Price2_4;
    Price2_4.setString("158454");
set_field(noRelatedSym_0_0, Price2_4, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::PriceType{2}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QtyType{2}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuotePriceType{1}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteRequestType{2}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteType{0}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlDate{"LOCALMKTDATE_919911654"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlDate2{"LOCALMKTDATE_1605255987"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlType{"STRING_4"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Side{'2'}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradeOriginationDate{"LOCALMKTDATE_1154057713"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradingSessionID{"STRING_3"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradingSessionSubID{"STRING_1"}, QuotReqRjctGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(0, 3, 7, 7, 7, 2005)}, QuotReqRjctGrp_NoRelatedSym_0);
    all_values.push_back(QuotReqRjctGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_20;
    set_field(noRelatedSym_0_0, FIX::AgreementCurrency{"CAN"}, FinancingDetails_20);
    set_field(noRelatedSym_0_0, FIX::AgreementDate{"LOCALMKTDATE_71744152"}, FinancingDetails_20);
    set_field(noRelatedSym_0_0, FIX::AgreementDesc{"STRING_1894949572"}, FinancingDetails_20);
    set_field(noRelatedSym_0_0, FIX::AgreementID{"STRING_1876546341"}, FinancingDetails_20);
    set_field(noRelatedSym_0_0, FIX::DeliveryType{3}, FinancingDetails_20);
    set_field(noRelatedSym_0_0, FIX::EndDate{"LOCALMKTDATE_481708541"}, FinancingDetails_20);
    FIX::MarginRatio MarginRatio_20;
    MarginRatio_20.setString("31.040000");
set_field(noRelatedSym_0_0, MarginRatio_20, FinancingDetails_20);
    set_field(noRelatedSym_0_0, FIX::StartDate{"LOCALMKTDATE_1335321820"}, FinancingDetails_20);
    set_field(noRelatedSym_0_0, FIX::TerminationType{3}, FinancingDetails_20);
    all_values.push_back(FinancingDetails_20);
    all_compo_names.insert("...NoRelatedSym.");

    // Instrument
    multiset<string> Instrument_57;
    FIX::AttachmentPoint AttachmentPoint_57;
    AttachmentPoint_57.setString("69.590000");
set_field(noRelatedSym_0_0, AttachmentPoint_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_1351167262"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::CPProgram{99}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_1554653213"}, Instrument_57);
    FIX::CapPrice CapPrice_57;
    CapPrice_57.setString("10470048");
set_field(noRelatedSym_0_0, CapPrice_57, Instrument_57);
    FIX::ContractMultiplier ContractMultiplier_57;
    ContractMultiplier_57.setString("2018504");
set_field(noRelatedSym_0_0, ContractMultiplier_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{2}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1966916518"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_1807106429"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1218860145"}, Instrument_57);
    FIX::CouponRate CouponRate_57;
    CouponRate_57.setString("10.950000");
set_field(noRelatedSym_0_0, CouponRate_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_813680494"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_399491901"}, Instrument_57);
    FIX::DetachmentPoint DetachmentPoint_57;
    DetachmentPoint_57.setString("52.130000");
set_field(noRelatedSym_0_0, DetachmentPoint_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_468232996"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{188260405}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_1866234908"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{11623335}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{1}, Instrument_57);
    FIX::Factor Factor_57;
    Factor_57.setString("19887827");
set_field(noRelatedSym_0_0, Factor_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{false}, Instrument_57);
    FIX::FloorPrice FloorPrice_57;
    FloorPrice_57.setString("21154756");
set_field(noRelatedSym_0_0, FloorPrice_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{1}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_1693721071"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_984416094"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_27945965"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_12997819"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_1108720539"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_498794779"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1523421529"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_121660440"}, Instrument_57);
    FIX::MinPriceIncrement MinPriceIncrement_57;
    MinPriceIncrement_57.setString("20534479");
set_field(noRelatedSym_0_0, MinPriceIncrement_57, Instrument_57);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_57;
    MinPriceIncrementAmount_57.setString("4229427");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{323510882}, Instrument_57);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_57;
    NotionalPercentageOutstanding_57.setString("18.570000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'2'}, Instrument_57);
    FIX::OptPayoutAmount OptPayoutAmount_57;
    OptPayoutAmount_57.setString("21306173");
set_field(noRelatedSym_0_0, OptPayoutAmount_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{2}, Instrument_57);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_57;
    OriginalNotionalPercentageOutstanding_57.setString("67.110000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_796814157"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{1524570256}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_1265047153"}, Instrument_57);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_57;
    PriceUnitOfMeasureQty_57.setString("17128306");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::Product{6}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_1276670489"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{0}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_822538643"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_708714419"}, Instrument_57);
    FIX::RepurchaseRate RepurchaseRate_57;
    RepurchaseRate_57.setString("92.730000");
set_field(noRelatedSym_0_0, RepurchaseRate_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{790530665}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MM"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_957646697"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_487585380"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_1196918597"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_985592662"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_J"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_2094313201"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_VRDN"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SR"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'P'}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_905342323"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_1168053490"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"JPY"}, Instrument_57);
    FIX::StrikeMultiplier StrikeMultiplier_57;
    StrikeMultiplier_57.setString("14104291");
set_field(noRelatedSym_0_0, StrikeMultiplier_57, Instrument_57);
    FIX::StrikePrice StrikePrice_57;
    StrikePrice_57.setString("3751345");
set_field(noRelatedSym_0_0, StrikePrice_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{3}, Instrument_57);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_57;
    StrikePriceBoundaryPrecision_57.setString("21.680000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{4}, Instrument_57);
    FIX::StrikeValue StrikeValue_57;
    StrikeValue_57.setString("13137254");
set_field(noRelatedSym_0_0, StrikeValue_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_1859140445"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Min"}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_lbs"}, Instrument_57);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_57;
    UnitOfMeasureQty_57.setString("3442266");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_57, Instrument_57);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_57);
    all_values.push_back(Instrument_57);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_116;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_116);
      FIX::ComplexEventPrice ComplexEventPrice_116;
      ComplexEventPrice_116.setString("1584819");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_116, ComplexEvents_NoComplexEvents_116);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_116);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_116;
      ComplexEventPriceBoundaryPrecision_116.setString("89.590000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_116, ComplexEvents_NoComplexEvents_116);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_116);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_116);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_116;
      ComplexOptPayoutAmount_116.setString("15513916");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_116, ComplexEvents_NoComplexEvents_116);
      all_values.push_back(ComplexEvents_NoComplexEvents_116);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_247;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 34, 21, 7, 10, 2011)}, ComplexEventDates_NoComplexEventDates_247);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 9, 52, 13, 2, 2001)}, ComplexEventDates_NoComplexEventDates_247);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_247);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_491;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 59, 0)}, ComplexEventTimes_NoComplexEventTimes_491);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 30, 50)}, ComplexEventTimes_NoComplexEventTimes_491);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_491);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_492;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 53, 37)}, ComplexEventTimes_NoComplexEventTimes_492);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 30, 36)}, ComplexEventTimes_NoComplexEventTimes_492);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_492);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_493;
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 2, 16)}, ComplexEventTimes_NoComplexEventTimes_493);
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 39, 29)}, ComplexEventTimes_NoComplexEventTimes_493);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_493);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_248;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 21, 39, 14, 5, 2007)}, ComplexEventDates_NoComplexEventDates_248);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 0, 9, 12, 5, 2009)}, ComplexEventDates_NoComplexEventDates_248);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_248);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_494;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 24, 47)}, ComplexEventTimes_NoComplexEventTimes_494);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 9, 52)}, ComplexEventTimes_NoComplexEventTimes_494);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_494);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_495;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 47, 40)}, ComplexEventTimes_NoComplexEventTimes_495);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 12, 49)}, ComplexEventTimes_NoComplexEventTimes_495);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_495);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_496;
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 10, 12)}, ComplexEventTimes_NoComplexEventTimes_496);
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 13, 23)}, ComplexEventTimes_NoComplexEventTimes_496);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_496);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_117;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_117);
      FIX::ComplexEventPrice ComplexEventPrice_117;
      ComplexEventPrice_117.setString("10720341");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_117, ComplexEvents_NoComplexEvents_117);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_117);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_117;
      ComplexEventPriceBoundaryPrecision_117.setString("56.180000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_117, ComplexEvents_NoComplexEvents_117);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_117);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_117);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_117;
      ComplexOptPayoutAmount_117.setString("13419225");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_117, ComplexEvents_NoComplexEvents_117);
      all_values.push_back(ComplexEvents_NoComplexEvents_117);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_249;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 24, 3, 19, 11, 2000)}, ComplexEventDates_NoComplexEventDates_249);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 27, 12, 16, 11, 2012)}, ComplexEventDates_NoComplexEventDates_249);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_249);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_497;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 56, 55)}, ComplexEventTimes_NoComplexEventTimes_497);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 1, 22)}, ComplexEventTimes_NoComplexEventTimes_497);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_497);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_498;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 46, 35)}, ComplexEventTimes_NoComplexEventTimes_498);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 4, 10)}, ComplexEventTimes_NoComplexEventTimes_498);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_498);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_499;
          set_field(noComplexEventTimes_0_1_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 27, 23)}, ComplexEventTimes_NoComplexEventTimes_499);
          set_field(noComplexEventTimes_0_1_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 3, 51)}, ComplexEventTimes_NoComplexEventTimes_499);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_499);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_118;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_118);
      FIX::ComplexEventPrice ComplexEventPrice_118;
      ComplexEventPrice_118.setString("19857216");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_118, ComplexEvents_NoComplexEvents_118);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_118);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_118;
      ComplexEventPriceBoundaryPrecision_118.setString("96.560000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_118, ComplexEvents_NoComplexEvents_118);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_118);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_118);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_118;
      ComplexOptPayoutAmount_118.setString("14546124");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_118, ComplexEvents_NoComplexEvents_118);
      all_values.push_back(ComplexEvents_NoComplexEvents_118);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_250;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 3, 27, 12, 5, 2013)}, ComplexEventDates_NoComplexEventDates_250);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 35, 0, 24, 5, 2016)}, ComplexEventDates_NoComplexEventDates_250);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_250);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_500;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 58, 51)}, ComplexEventTimes_NoComplexEventTimes_500);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 55, 4)}, ComplexEventTimes_NoComplexEventTimes_500);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_500);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_501;
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 0, 40)}, ComplexEventTimes_NoComplexEventTimes_501);
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 22, 49)}, ComplexEventTimes_NoComplexEventTimes_501);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_501);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_117;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_508845180"}, EvntGrp_NoEvents_117);
      FIX::EventPx EventPx_117;
      EventPx_117.setString("20937185");
set_field(noEvents_0_1_0, EventPx_117, EvntGrp_NoEvents_117);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_802981566"}, EvntGrp_NoEvents_117);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(12, 55, 29, 15, 11, 2017)}, EvntGrp_NoEvents_117);
      set_field(noEvents_0_1_0, FIX::EventType{13}, EvntGrp_NoEvents_117);
      all_values.push_back(EvntGrp_NoEvents_117);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_109;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1886692353"}, InstrumentParties_NoInstrumentParties_109);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_109);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1127458618}, InstrumentParties_NoInstrumentParties_109);
      all_values.push_back(InstrumentParties_NoInstrumentParties_109);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_1218605381"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{5001222}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_222);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_1628366371"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{770657312}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_223);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224;
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubID{"STRING_1864361257"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224);
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubIDType{1608114748}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_224);
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
      multiset<string> SecAltIDGrp_NoSecurityAltID_117;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_1414475686"}, SecAltIDGrp_NoSecurityAltID_117);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1899562588"}, SecAltIDGrp_NoSecurityAltID_117);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_117);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_114;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_1025771327"}, SecurityXML_114);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{341609060}, SecurityXML_114);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_2028372767"}, SecurityXML_114);
    all_values.push_back(SecurityXML_114);
    all_compo_names.insert("...NoRelatedSym..");

    // OrderQtyData
    multiset<string> OrderQtyData_18;
    FIX::CashOrderQty CashOrderQty_18;
    CashOrderQty_18.setString("18604087");
set_field(noRelatedSym_0_0, CashOrderQty_18, OrderQtyData_18);
    FIX::OrderPercent OrderPercent_18;
    OrderPercent_18.setString("15.700000");
set_field(noRelatedSym_0_0, OrderPercent_18, OrderQtyData_18);
    FIX::OrderQty OrderQty_26;
    OrderQty_26.setString("819514");
set_field(noRelatedSym_0_0, OrderQty_26, OrderQtyData_18);
    set_field(noRelatedSym_0_0, FIX::RoundingDirection{'1'}, OrderQtyData_18);
    FIX::RoundingModulus RoundingModulus_18;
    RoundingModulus_18.setString("12435564");
set_field(noRelatedSym_0_0, RoundingModulus_18, OrderQtyData_18);
    all_values.push_back(OrderQtyData_18);
    all_compo_names.insert("...NoRelatedSym.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_104;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_1934659446"}, Parties_NoPartyIDs_104);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_104);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{39}, Parties_NoPartyIDs_104);
      all_values.push_back(Parties_NoPartyIDs_104);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_212;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_462203778"}, PtysSubGrp_NoPartySubIDs_212);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_212);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_212);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_105;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_644204637"}, Parties_NoPartyIDs_105);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'C'}, Parties_NoPartyIDs_105);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{48}, Parties_NoPartyIDs_105);
      all_values.push_back(Parties_NoPartyIDs_105);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_213;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_1836854533"}, PtysSubGrp_NoPartySubIDs_213);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_213);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_213);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_214;
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubID{"STRING_30579161"}, PtysSubGrp_NoPartySubIDs_214);
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_214);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_214);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_5;
      set_field(noQuoteQualifiers_0_1_0, FIX::QuoteQualifier{'1'}, QuotQualGrp_NoQuoteQualifiers_5);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_5);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_0);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_0_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_2;
      FIX::LegOrderQty LegOrderQty_9;
      LegOrderQty_9.setString("6283054");
set_field(noLegs_0_1_0, LegOrderQty_9, QuotReqLegsGrp_NoLegs_2);
      FIX::LegQty LegQty_9;
      LegQty_9.setString("11195766");
set_field(noLegs_0_1_0, LegQty_9, QuotReqLegsGrp_NoLegs_2);
      set_field(noLegs_0_1_0, FIX::LegRefID{"STRING_1176896246"}, QuotReqLegsGrp_NoLegs_2);
      set_field(noLegs_0_1_0, FIX::LegSettlDate{"LOCALMKTDATE_2042781166"}, QuotReqLegsGrp_NoLegs_2);
      set_field(noLegs_0_1_0, FIX::LegSettlType{'8'}, QuotReqLegsGrp_NoLegs_2);
      set_field(noLegs_0_1_0, FIX::LegSwapType{2}, QuotReqLegsGrp_NoLegs_2);
      all_values.push_back(QuotReqLegsGrp_NoLegs_2);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_79;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_236906578"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{752544692}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_1915592715"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{1534228148}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_834496131"}, InstrumentLeg_79);
      FIX::LegContractMultiplier LegContractMultiplier_79;
      LegContractMultiplier_79.setString("21373630");
set_field(noLegs_0_1_0, LegContractMultiplier_79, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{630300955}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1719429136"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_1924538834"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1131258750"}, InstrumentLeg_79);
      FIX::LegCouponRate LegCouponRate_79;
      LegCouponRate_79.setString("92.410000");
set_field(noLegs_0_1_0, LegCouponRate_79, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_1977001662"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_473722651"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{497979191}, InstrumentLeg_79);
      FIX::LegFactor LegFactor_79;
      LegFactor_79.setString("3198852");
set_field(noLegs_0_1_0, LegFactor_79, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{857135993}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_187350076"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1226311947"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_887715154"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_1095326343"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_2137739818"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_399177039"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_626476273"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_618561649"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_79);
      FIX::LegOptionRatio LegOptionRatio_79;
      LegOptionRatio_79.setString("18033725");
set_field(noLegs_0_1_0, LegOptionRatio_79, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_513859167"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_242925596"}, InstrumentLeg_79);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_79;
      LegPriceUnitOfMeasureQty_79.setString("18585564");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_79, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegProduct{750765746}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{995470288}, InstrumentLeg_79);
      FIX::LegRatioQty LegRatioQty_79;
      LegRatioQty_79.setString("16266655");
set_field(noLegs_0_1_0, LegRatioQty_79, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_137510246"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_1829966419"}, InstrumentLeg_79);
      FIX::LegRepurchaseRate LegRepurchaseRate_79;
      LegRepurchaseRate_79.setString("49.000000");
set_field(noLegs_0_1_0, LegRepurchaseRate_79, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{767811201}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_1401911907"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_1393600087"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_1899069951"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_1621661149"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_1223118101"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_1345048832"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegSide{'1'}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_1696840752"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_79);
      FIX::LegStrikePrice LegStrikePrice_79;
      LegStrikePrice_79.setString("4064930");
set_field(noLegs_0_1_0, LegStrikePrice_79, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_2030378099"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_1561292016"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_1294208252"}, InstrumentLeg_79);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_978220794"}, InstrumentLeg_79);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_79;
      LegUnitOfMeasureQty_79.setString("15515481");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_79, InstrumentLeg_79);
      all_values.push_back(InstrumentLeg_79);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_162;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_1604697068"}, LegSecAltIDGrp_NoLegSecurityAltID_162);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_22626188"}, LegSecAltIDGrp_NoLegSecurityAltID_162);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_162);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_163;
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltID{"STRING_1064655314"}, LegSecAltIDGrp_NoLegSecurityAltID_163);
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltIDSource{"STRING_1260585939"}, LegSecAltIDGrp_NoLegSecurityAltID_163);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_163);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_164;
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltID{"STRING_536485355"}, LegSecAltIDGrp_NoLegSecurityAltID_164);
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltIDSource{"STRING_1307580910"}, LegSecAltIDGrp_NoLegSecurityAltID_164);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_164);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_4;
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveCurrency{"EUR"}, LegBenchmarkCurveData_4);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveName{"STRING_155567550"}, LegBenchmarkCurveData_4);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurvePoint{"STRING_450840600"}, LegBenchmarkCurveData_4);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_4;
      LegBenchmarkPrice_4.setString("14247613");
set_field(noLegs_0_1_0, LegBenchmarkPrice_4, LegBenchmarkCurveData_4);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkPriceType{1985533969}, LegBenchmarkCurveData_4);
      all_values.push_back(LegBenchmarkCurveData_4);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_21;
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationType{"STRING_45088901"}, LegStipulations_NoLegStipulations_21);
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationValue{"STRING_1239962229"}, LegStipulations_NoLegStipulations_21);
        all_values.push_back(LegStipulations_NoLegStipulations_21);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_22;
        set_field(noLegStipulations_0_0_2_1, FIX::LegStipulationType{"STRING_1313501940"}, LegStipulations_NoLegStipulations_22);
        set_field(noLegStipulations_0_0_2_1, FIX::LegStipulationValue{"STRING_1944158853"}, LegStipulations_NoLegStipulations_22);
        all_values.push_back(LegStipulations_NoLegStipulations_22);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_110;
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyID{"STRING_389136393"}, NestedParties_NoNestedPartyIDs_110);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_110);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyRole{729234500}, NestedParties_NoNestedPartyIDs_110);
        all_values.push_back(NestedParties_NoNestedPartyIDs_110);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_229;
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubID{"STRING_837268412"}, NstdPtysSubGrp_NoNestedPartySubIDs_229);
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubIDType{1064214569}, NstdPtysSubGrp_NoNestedPartySubIDs_229);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_229);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_111;
        set_field(noNestedPartyIDs_0_0_2_1, FIX::NestedPartyID{"STRING_344986594"}, NestedParties_NoNestedPartyIDs_111);
        set_field(noNestedPartyIDs_0_0_2_1, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_111);
        set_field(noNestedPartyIDs_0_0_2_1, FIX::NestedPartyRole{478022937}, NestedParties_NoNestedPartyIDs_111);
        all_values.push_back(NestedParties_NoNestedPartyIDs_111);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_230;
          set_field(noNestedPartySubIDs_0_0_1_3_0, FIX::NestedPartySubID{"STRING_1698383658"}, NstdPtysSubGrp_NoNestedPartySubIDs_230);
          set_field(noNestedPartySubIDs_0_0_1_3_0, FIX::NestedPartySubIDType{2029571124}, NstdPtysSubGrp_NoNestedPartySubIDs_230);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_230);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_112;
        set_field(noNestedPartyIDs_0_0_2_2, FIX::NestedPartyID{"STRING_1185096489"}, NestedParties_NoNestedPartyIDs_112);
        set_field(noNestedPartyIDs_0_0_2_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_112);
        set_field(noNestedPartyIDs_0_0_2_2, FIX::NestedPartyRole{2052197312}, NestedParties_NoNestedPartyIDs_112);
        all_values.push_back(NestedParties_NoNestedPartyIDs_112);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_231;
          set_field(noNestedPartySubIDs_0_0_2_3_0, FIX::NestedPartySubID{"STRING_268699369"}, NstdPtysSubGrp_NoNestedPartySubIDs_231);
          set_field(noNestedPartySubIDs_0_0_2_3_0, FIX::NestedPartySubIDType{441199019}, NstdPtysSubGrp_NoNestedPartySubIDs_231);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_231);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_2.addGroup(noNestedPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_232;
          set_field(noNestedPartySubIDs_0_0_2_3_1, FIX::NestedPartySubID{"STRING_1409849066"}, NstdPtysSubGrp_NoNestedPartySubIDs_232);
          set_field(noNestedPartySubIDs_0_0_2_3_1, FIX::NestedPartySubIDType{1240358106}, NstdPtysSubGrp_NoNestedPartySubIDs_232);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_232);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_2.addGroup(noNestedPartySubIDs_0_0_2_3_1);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_22;
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveCurrency{"CHF"}, SpreadOrBenchmarkCurveData_22);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveName{"STRING_MuniAAA"}, SpreadOrBenchmarkCurveData_22);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurvePoint{"STRING_1005727821"}, SpreadOrBenchmarkCurveData_22);
    FIX::BenchmarkPrice BenchmarkPrice_22;
    BenchmarkPrice_22.setString("14034669");
set_field(noRelatedSym_0_0, BenchmarkPrice_22, SpreadOrBenchmarkCurveData_22);
    set_field(noRelatedSym_0_0, FIX::BenchmarkPriceType{1611100559}, SpreadOrBenchmarkCurveData_22);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityID{"STRING_1050816722"}, SpreadOrBenchmarkCurveData_22);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityIDSource{"STRING_495945519"}, SpreadOrBenchmarkCurveData_22);
    FIX::Spread Spread_22;
    Spread_22.setString("7771188");
set_field(noRelatedSym_0_0, Spread_22, SpreadOrBenchmarkCurveData_22);
    all_values.push_back(SpreadOrBenchmarkCurveData_22);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_34;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_YIELD"}, Stipulations_NoStipulations_34);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_1166255244"}, Stipulations_NoStipulations_34);
      all_values.push_back(Stipulations_NoStipulations_34);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_100;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1939319749"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{1104748741}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_679000728"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{856050670}, UnderlyingInstrument_100);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_100;
      UnderlyingAdjustedQuantity_100.setString("14497353");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_100, UnderlyingInstrument_100);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_100;
      UnderlyingAllocationPercent_100.setString("35.920000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_100, UnderlyingInstrument_100);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_100;
      UnderlyingAttachmentPoint_100.setString("36.080000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_941446534"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_950063602"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_1216161084"}, UnderlyingInstrument_100);
      FIX::UnderlyingCapValue UnderlyingCapValue_100;
      UnderlyingCapValue_100.setString("21265430");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_100, UnderlyingInstrument_100);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_100;
      UnderlyingCashAmount_100.setString("21056606");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_100);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_100;
      UnderlyingContractMultiplier_100.setString("813275");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{226876401}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1562073767"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1491176598"}, UnderlyingInstrument_100);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_100;
      UnderlyingCouponRate_100.setString("45.070000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_1143040240"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_100);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_100;
      UnderlyingCurrentValue_100.setString("12844");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_100, UnderlyingInstrument_100);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_100;
      UnderlyingDetachmentPoint_100.setString("28.580000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_100, UnderlyingInstrument_100);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_100;
      UnderlyingDirtyPrice_100.setString("4745664");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_100, UnderlyingInstrument_100);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_100;
      UnderlyingEndPrice_100.setString("10521011");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_100, UnderlyingInstrument_100);
      FIX::UnderlyingEndValue UnderlyingEndValue_100;
      UnderlyingEndValue_100.setString("6610383");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{1251685329}, UnderlyingInstrument_100);
      FIX::UnderlyingFXRate UnderlyingFXRate_100;
      UnderlyingFXRate_100.setString("18995930");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_100);
      FIX::UnderlyingFactor UnderlyingFactor_100;
      UnderlyingFactor_100.setString("2704569");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{1741325380}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_1662959728"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1375205667"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_272842460"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_371526751"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_677457355"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1672006052"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1705600359"}, UnderlyingInstrument_100);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_100;
      UnderlyingNotionalPercentageOutstanding_100.setString("38.890000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_100);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_100;
      UnderlyingOriginalNotionalPercentageOutstanding_100.setString("77.950000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1597963265"}, UnderlyingInstrument_100);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_100;
      UnderlyingPriceUnitOfMeasureQty_100.setString("4327630");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{1895152543}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{1679290797}, UnderlyingInstrument_100);
      FIX::UnderlyingPx UnderlyingPx_100;
      UnderlyingPx_100.setString("6596394");
set_field(noUnderlyings_0_1_0, UnderlyingPx_100, UnderlyingInstrument_100);
      FIX::UnderlyingQty UnderlyingQty_100;
      UnderlyingQty_100.setString("13097426");
set_field(noUnderlyings_0_1_0, UnderlyingQty_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1022983748"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2126873947"}, UnderlyingInstrument_100);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_100;
      UnderlyingRepurchaseRate_100.setString("92.550000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{1932093315}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_990339865"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_306583668"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_2097186173"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_1464906343"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_1358684804"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_610740903"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_569108024"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_1110794220"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_334380882"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_100);
      FIX::UnderlyingStartValue UnderlyingStartValue_100;
      UnderlyingStartValue_100.setString("7046359");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1997340610"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_100);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_100;
      UnderlyingStrikePrice_100.setString("2213837");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_100, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_744744323"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_502000817"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_1926984072"}, UnderlyingInstrument_100);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_216164565"}, UnderlyingInstrument_100);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_100;
      UnderlyingUnitOfMeasureQty_100.setString("9765868");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_100, UnderlyingInstrument_100);
      all_values.push_back(UnderlyingInstrument_100);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_213;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1814127830"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_213);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1409349862"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_213);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_213);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_214;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_301447114"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_214);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1345934980"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_214);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_214);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_215;
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_2068989302"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_215);
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1611189777"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_215);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_215);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_205;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_2048379601"}, UnderlyingStipulations_NoUnderlyingStips_205);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_1916489032"}, UnderlyingStipulations_NoUnderlyingStips_205);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_205);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_206;
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipType{"STRING_6044747"}, UnderlyingStipulations_NoUnderlyingStips_206);
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipValue{"STRING_891235819"}, UnderlyingStipulations_NoUnderlyingStips_206);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_206);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_207;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_2103230921"}, UndlyInstrumentParties_NoUndlyInstrumentParties_207);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_207);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{1434273857}, UndlyInstrumentParties_NoUndlyInstrumentParties_207);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_207);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_777766538"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{397584429}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_208;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_900869058"}, UndlyInstrumentParties_NoUndlyInstrumentParties_208);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_208);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{1102220381}, UndlyInstrumentParties_NoUndlyInstrumentParties_208);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_208);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1684618456"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{2079698793}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_972109734"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{281879131}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_434215962"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{751610158}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_209;
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_498043696"}, UndlyInstrumentParties_NoUndlyInstrumentParties_209);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_209);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyRole{1305388378}, UndlyInstrumentParties_NoUndlyInstrumentParties_209);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_209);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_672669000"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1606835492}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1510622859"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{594174654}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1070541621"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_2, FIX::UnderlyingInstrumentPartySubIDType{1732057939}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    // YieldData
    multiset<string> YieldData_17;
    FIX::Yield Yield_17;
    Yield_17.setString("6.070000");
set_field(noRelatedSym_0_0, Yield_17, YieldData_17);
    set_field(noRelatedSym_0_0, FIX::YieldCalcDate{"LOCALMKTDATE_839547005"}, YieldData_17);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionDate{"LOCALMKTDATE_1738102686"}, YieldData_17);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_17;
    YieldRedemptionPrice_17.setString("13863064");
set_field(noRelatedSym_0_0, YieldRedemptionPrice_17, YieldData_17);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionPriceType{915136058}, YieldData_17);
    set_field(noRelatedSym_0_0, FIX::YieldType{"STRING_LASTMONTH"}, YieldData_17);
    all_values.push_back(YieldData_17);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::QuoteRequestReject::NoRelatedSym noRelatedSym_0_1;
    // QuotReqRjctGrp.NoRelatedSym
    multiset<string> QuotReqRjctGrp_NoRelatedSym_1;
    set_field(noRelatedSym_0_1, FIX::Account{"STRING_1594964940"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::AccountType{6}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::AcctIDSource{2}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::Currency{"GBP"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::ExpireTime{FIX::UTCTIMESTAMP(6, 37, 46, 14, 3, 2002)}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::OrdType{'A'}, QuotReqRjctGrp_NoRelatedSym_1);
    FIX::OrderQty2 OrderQty2_11;
    OrderQty2_11.setString("20681621");
set_field(noRelatedSym_0_1, OrderQty2_11, QuotReqRjctGrp_NoRelatedSym_1);
    FIX::PrevClosePx PrevClosePx_9;
    PrevClosePx_9.setString("13406858");
set_field(noRelatedSym_0_1, PrevClosePx_9, QuotReqRjctGrp_NoRelatedSym_1);
    FIX::Price Price_20;
    Price_20.setString("121533");
set_field(noRelatedSym_0_1, Price_20, QuotReqRjctGrp_NoRelatedSym_1);
    FIX::Price2 Price2_5;
    Price2_5.setString("13314813");
set_field(noRelatedSym_0_1, Price2_5, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::PriceType{9}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QtyType{2}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QuotePriceType{4}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QuoteRequestType{2}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QuoteType{0}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::SettlDate{"LOCALMKTDATE_450841329"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::SettlDate2{"LOCALMKTDATE_1028484006"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::SettlType{"STRING_7"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::Side{'1'}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::TradeOriginationDate{"LOCALMKTDATE_1868031012"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::TradingSessionID{"STRING_6"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::TradingSessionSubID{"STRING_5"}, QuotReqRjctGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::TransactTime{FIX::UTCTIMESTAMP(13, 55, 29, 4, 3, 2007)}, QuotReqRjctGrp_NoRelatedSym_1);
    all_values.push_back(QuotReqRjctGrp_NoRelatedSym_1);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_21;
    set_field(noRelatedSym_0_1, FIX::AgreementCurrency{"USD"}, FinancingDetails_21);
    set_field(noRelatedSym_0_1, FIX::AgreementDate{"LOCALMKTDATE_991367814"}, FinancingDetails_21);
    set_field(noRelatedSym_0_1, FIX::AgreementDesc{"STRING_1152567636"}, FinancingDetails_21);
    set_field(noRelatedSym_0_1, FIX::AgreementID{"STRING_932273634"}, FinancingDetails_21);
    set_field(noRelatedSym_0_1, FIX::DeliveryType{0}, FinancingDetails_21);
    set_field(noRelatedSym_0_1, FIX::EndDate{"LOCALMKTDATE_1741643288"}, FinancingDetails_21);
    FIX::MarginRatio MarginRatio_21;
    MarginRatio_21.setString("32.430000");
set_field(noRelatedSym_0_1, MarginRatio_21, FinancingDetails_21);
    set_field(noRelatedSym_0_1, FIX::StartDate{"LOCALMKTDATE_398508925"}, FinancingDetails_21);
    set_field(noRelatedSym_0_1, FIX::TerminationType{3}, FinancingDetails_21);
    all_values.push_back(FinancingDetails_21);
    all_compo_names.insert("...NoRelatedSym.");

    // Instrument
    multiset<string> Instrument_58;
    FIX::AttachmentPoint AttachmentPoint_58;
    AttachmentPoint_58.setString("65.490000");
set_field(noRelatedSym_0_1, AttachmentPoint_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_1729990248"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::CPProgram{1}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_635377734"}, Instrument_58);
    FIX::CapPrice CapPrice_58;
    CapPrice_58.setString("15866569");
set_field(noRelatedSym_0_1, CapPrice_58, Instrument_58);
    FIX::ContractMultiplier ContractMultiplier_58;
    ContractMultiplier_58.setString("13913783");
set_field(noRelatedSym_0_1, ContractMultiplier_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{0}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_2037498252"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_272378734"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1447396465"}, Instrument_58);
    FIX::CouponRate CouponRate_58;
    CouponRate_58.setString("65.410000");
set_field(noRelatedSym_0_1, CouponRate_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_2140409746"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_162570191"}, Instrument_58);
    FIX::DetachmentPoint DetachmentPoint_58;
    DetachmentPoint_58.setString("12.560000");
set_field(noRelatedSym_0_1, DetachmentPoint_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_628609520"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{571593876}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_652877263"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{1466219209}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{2}, Instrument_58);
    FIX::Factor Factor_58;
    Factor_58.setString("5103411");
set_field(noRelatedSym_0_1, Factor_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{true}, Instrument_58);
    FIX::FloorPrice FloorPrice_58;
    FloorPrice_58.setString("629006");
set_field(noRelatedSym_0_1, FloorPrice_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{0}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_1634157754"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'9'}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_77570501"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_1228317394"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_1441557487"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::ListMethod{0}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_15679197"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_1900094036"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_58586027"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_1449115188"}, Instrument_58);
    FIX::MinPriceIncrement MinPriceIncrement_58;
    MinPriceIncrement_58.setString("3879881");
set_field(noRelatedSym_0_1, MinPriceIncrement_58, Instrument_58);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_58;
    MinPriceIncrementAmount_58.setString("16452429");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{693009916}, Instrument_58);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_58;
    NotionalPercentageOutstanding_58.setString("62.530000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'1'}, Instrument_58);
    FIX::OptPayoutAmount OptPayoutAmount_58;
    OptPayoutAmount_58.setString("9653886");
set_field(noRelatedSym_0_1, OptPayoutAmount_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{1}, Instrument_58);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_58;
    OriginalNotionalPercentageOutstanding_58.setString("4.480000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_958314749"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{25829262}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_1586924269"}, Instrument_58);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_58;
    PriceUnitOfMeasureQty_58.setString("5974231");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::Product{1}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_905659831"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{0}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_260096421"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_1661515777"}, Instrument_58);
    FIX::RepurchaseRate RepurchaseRate_58;
    RepurchaseRate_58.setString("16.570000");
set_field(noRelatedSym_0_1, RepurchaseRate_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{322997030}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_MM"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_1659159411"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_1318171274"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_1338826391"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_739993158"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_8"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_2"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_755672355"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_TBA"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SR"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'P'}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_752843624"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_1371251147"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"JPY"}, Instrument_58);
    FIX::StrikeMultiplier StrikeMultiplier_58;
    StrikeMultiplier_58.setString("7590250");
set_field(noRelatedSym_0_1, StrikeMultiplier_58, Instrument_58);
    FIX::StrikePrice StrikePrice_58;
    StrikePrice_58.setString("17157024");
set_field(noRelatedSym_0_1, StrikePrice_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{5}, Instrument_58);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_58;
    StrikePriceBoundaryPrecision_58.setString("55.020000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{3}, Instrument_58);
    FIX::StrikeValue StrikeValue_58;
    StrikeValue_58.setString("12052782");
set_field(noRelatedSym_0_1, StrikeValue_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_79603558"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_Min"}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_58);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_58;
    UnitOfMeasureQty_58.setString("13461128");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_58, Instrument_58);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_CDS"}, Instrument_58);
    all_values.push_back(Instrument_58);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_119;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_119);
      FIX::ComplexEventPrice ComplexEventPrice_119;
      ComplexEventPrice_119.setString("4124523");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_119, ComplexEvents_NoComplexEvents_119);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_119);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_119;
      ComplexEventPriceBoundaryPrecision_119.setString("3.080000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_119, ComplexEvents_NoComplexEvents_119);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_119);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_119);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_119;
      ComplexOptPayoutAmount_119.setString("16227834");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_119, ComplexEvents_NoComplexEvents_119);
      all_values.push_back(ComplexEvents_NoComplexEvents_119);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_251;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 49, 43, 24, 11, 2012)}, ComplexEventDates_NoComplexEventDates_251);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 56, 12, 17, 7, 2011)}, ComplexEventDates_NoComplexEventDates_251);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_251);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_502;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 17, 34)}, ComplexEventTimes_NoComplexEventTimes_502);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 12, 10)}, ComplexEventTimes_NoComplexEventTimes_502);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_502);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_503;
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 45, 49)}, ComplexEventTimes_NoComplexEventTimes_503);
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 47, 4)}, ComplexEventTimes_NoComplexEventTimes_503);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_503);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_504;
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 54, 45)}, ComplexEventTimes_NoComplexEventTimes_504);
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 7, 19)}, ComplexEventTimes_NoComplexEventTimes_504);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_504);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_120;
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_120);
      FIX::ComplexEventPrice ComplexEventPrice_120;
      ComplexEventPrice_120.setString("9541685");
set_field(noComplexEvents_1_1_1, ComplexEventPrice_120, ComplexEvents_NoComplexEvents_120);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_120);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_120;
      ComplexEventPriceBoundaryPrecision_120.setString("55.490000");
set_field(noComplexEvents_1_1_1, ComplexEventPriceBoundaryPrecision_120, ComplexEvents_NoComplexEvents_120);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_120);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_120);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_120;
      ComplexOptPayoutAmount_120.setString("18270294");
set_field(noComplexEvents_1_1_1, ComplexOptPayoutAmount_120, ComplexEvents_NoComplexEvents_120);
      all_values.push_back(ComplexEvents_NoComplexEvents_120);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_252;
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 57, 43, 14, 10, 2012)}, ComplexEventDates_NoComplexEventDates_252);
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 31, 12, 19, 10, 2005)}, ComplexEventDates_NoComplexEventDates_252);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_252);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_505;
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 42, 24)}, ComplexEventTimes_NoComplexEventTimes_505);
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 23, 10)}, ComplexEventTimes_NoComplexEventTimes_505);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_505);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_506;
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 34, 59)}, ComplexEventTimes_NoComplexEventTimes_506);
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 16, 5)}, ComplexEventTimes_NoComplexEventTimes_506);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_506);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_507;
          set_field(noComplexEventTimes_1_1_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 2, 45)}, ComplexEventTimes_NoComplexEventTimes_507);
          set_field(noComplexEventTimes_1_1_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 31, 52)}, ComplexEventTimes_NoComplexEventTimes_507);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_507);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_253;
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 4, 38, 8, 9, 2002)}, ComplexEventDates_NoComplexEventDates_253);
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 8, 35, 15, 3, 2010)}, ComplexEventDates_NoComplexEventDates_253);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_253);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_508;
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 15, 31)}, ComplexEventTimes_NoComplexEventTimes_508);
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 47, 57)}, ComplexEventTimes_NoComplexEventTimes_508);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_508);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_509;
          set_field(noComplexEventTimes_1_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 59, 27)}, ComplexEventTimes_NoComplexEventTimes_509);
          set_field(noComplexEventTimes_1_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 59, 41)}, ComplexEventTimes_NoComplexEventTimes_509);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_509);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_510;
          set_field(noComplexEventTimes_1_1_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 46, 19)}, ComplexEventTimes_NoComplexEventTimes_510);
          set_field(noComplexEventTimes_1_1_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 45, 36)}, ComplexEventTimes_NoComplexEventTimes_510);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_510);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_118;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_1054874985"}, EvntGrp_NoEvents_118);
      FIX::EventPx EventPx_118;
      EventPx_118.setString("20280107");
set_field(noEvents_1_1_0, EventPx_118, EvntGrp_NoEvents_118);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_348341032"}, EvntGrp_NoEvents_118);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(2, 34, 11, 0, 6, 2004)}, EvntGrp_NoEvents_118);
      set_field(noEvents_1_1_0, FIX::EventType{5}, EvntGrp_NoEvents_118);
      all_values.push_back(EvntGrp_NoEvents_118);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_110;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_123699313"}, InstrumentParties_NoInstrumentParties_110);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_110);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{875816403}, InstrumentParties_NoInstrumentParties_110);
      all_values.push_back(InstrumentParties_NoInstrumentParties_110);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_705082004"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{176584643}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_225);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_118;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_655828298"}, SecAltIDGrp_NoSecurityAltID_118);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_52521434"}, SecAltIDGrp_NoSecurityAltID_118);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_118);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_119;
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltID{"STRING_886668133"}, SecAltIDGrp_NoSecurityAltID_119);
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltIDSource{"STRING_1594356559"}, SecAltIDGrp_NoSecurityAltID_119);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_119);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_116;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_1649221627"}, SecurityXML_116);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{204785391}, SecurityXML_116);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_1312560090"}, SecurityXML_116);
    all_values.push_back(SecurityXML_116);
    all_compo_names.insert("...NoRelatedSym..");

    // OrderQtyData
    multiset<string> OrderQtyData_19;
    FIX::CashOrderQty CashOrderQty_19;
    CashOrderQty_19.setString("2166652");
set_field(noRelatedSym_0_1, CashOrderQty_19, OrderQtyData_19);
    FIX::OrderPercent OrderPercent_19;
    OrderPercent_19.setString("32.530000");
set_field(noRelatedSym_0_1, OrderPercent_19, OrderQtyData_19);
    FIX::OrderQty OrderQty_27;
    OrderQty_27.setString("11364241");
set_field(noRelatedSym_0_1, OrderQty_27, OrderQtyData_19);
    set_field(noRelatedSym_0_1, FIX::RoundingDirection{'1'}, OrderQtyData_19);
    FIX::RoundingModulus RoundingModulus_19;
    RoundingModulus_19.setString("4696062");
set_field(noRelatedSym_0_1, RoundingModulus_19, OrderQtyData_19);
    all_values.push_back(OrderQtyData_19);
    all_compo_names.insert("...NoRelatedSym.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_106;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_527817065"}, Parties_NoPartyIDs_106);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_106);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{61}, Parties_NoPartyIDs_106);
      all_values.push_back(Parties_NoPartyIDs_106);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_215;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_2122168333"}, PtysSubGrp_NoPartySubIDs_215);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_215);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_215);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_216;
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubID{"STRING_1488290111"}, PtysSubGrp_NoPartySubIDs_216);
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_216);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_216);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_217;
        set_field(noPartySubIDs_1_0_2_2, FIX::PartySubID{"STRING_1802753708"}, PtysSubGrp_NoPartySubIDs_217);
        set_field(noPartySubIDs_1_0_2_2, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_217);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_217);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_107;
      set_field(noPartyIDs_1_1_1, FIX::PartyID{"STRING_1296186008"}, Parties_NoPartyIDs_107);
      set_field(noPartyIDs_1_1_1, FIX::PartyIDSource{'F'}, Parties_NoPartyIDs_107);
      set_field(noPartyIDs_1_1_1, FIX::PartyRole{38}, Parties_NoPartyIDs_107);
      all_values.push_back(Parties_NoPartyIDs_107);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_218;
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubID{"STRING_2109161103"}, PtysSubGrp_NoPartySubIDs_218);
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_218);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_218);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_108;
      set_field(noPartyIDs_1_1_2, FIX::PartyID{"STRING_201103406"}, Parties_NoPartyIDs_108);
      set_field(noPartyIDs_1_1_2, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_108);
      set_field(noPartyIDs_1_1_2, FIX::PartyRole{3}, Parties_NoPartyIDs_108);
      all_values.push_back(Parties_NoPartyIDs_108);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_219;
        set_field(noPartySubIDs_1_2_2_0, FIX::PartySubID{"STRING_1095152020"}, PtysSubGrp_NoPartySubIDs_219);
        set_field(noPartySubIDs_1_2_2_0, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_219);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_219);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_220;
        set_field(noPartySubIDs_1_2_2_1, FIX::PartySubID{"STRING_1902846468"}, PtysSubGrp_NoPartySubIDs_220);
        set_field(noPartySubIDs_1_2_2_1, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_220);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_220);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_1_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_6;
      set_field(noQuoteQualifiers_1_1_0, FIX::QuoteQualifier{'2'}, QuotQualGrp_NoQuoteQualifiers_6);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_6);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_1.addGroup(noQuoteQualifiers_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_1_1_1;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_7;
      set_field(noQuoteQualifiers_1_1_1, FIX::QuoteQualifier{'1'}, QuotQualGrp_NoQuoteQualifiers_7);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_7);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_1.addGroup(noQuoteQualifiers_1_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_1_1_2;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_8;
      set_field(noQuoteQualifiers_1_1_2, FIX::QuoteQualifier{'9'}, QuotQualGrp_NoQuoteQualifiers_8);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_8);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_1.addGroup(noQuoteQualifiers_1_1_2);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs noLegs_1_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_3;
      FIX::LegOrderQty LegOrderQty_10;
      LegOrderQty_10.setString("15227632");
set_field(noLegs_1_1_0, LegOrderQty_10, QuotReqLegsGrp_NoLegs_3);
      FIX::LegQty LegQty_10;
      LegQty_10.setString("9853714");
set_field(noLegs_1_1_0, LegQty_10, QuotReqLegsGrp_NoLegs_3);
      set_field(noLegs_1_1_0, FIX::LegRefID{"STRING_1147135091"}, QuotReqLegsGrp_NoLegs_3);
      set_field(noLegs_1_1_0, FIX::LegSettlDate{"LOCALMKTDATE_193226893"}, QuotReqLegsGrp_NoLegs_3);
      set_field(noLegs_1_1_0, FIX::LegSettlType{'1'}, QuotReqLegsGrp_NoLegs_3);
      set_field(noLegs_1_1_0, FIX::LegSwapType{4}, QuotReqLegsGrp_NoLegs_3);
      all_values.push_back(QuotReqLegsGrp_NoLegs_3);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_80;
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuer{"DATA_167911578"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuerLen{470073630}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDesc{"DATA_820073893"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDescLen{750904385}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegCFICode{"STRING_125343691"}, InstrumentLeg_80);
      FIX::LegContractMultiplier LegContractMultiplier_80;
      LegContractMultiplier_80.setString("19533494");
set_field(noLegs_1_1_0, LegContractMultiplier_80, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegContractMultiplierUnit{2047090393}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_2051796712"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegCountryOfIssue{"COUNTRY_1785621552"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2071609156"}, InstrumentLeg_80);
      FIX::LegCouponRate LegCouponRate_80;
      LegCouponRate_80.setString("41.680000");
set_field(noLegs_1_1_0, LegCouponRate_80, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegCreditRating{"STRING_175492060"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1368674515"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegExerciseStyle{378853755}, InstrumentLeg_80);
      FIX::LegFactor LegFactor_80;
      LegFactor_80.setString("11696264");
set_field(noLegs_1_1_0, LegFactor_80, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegFlowScheduleType{2008729881}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegInstrRegistry{"STRING_134216575"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_322080190"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1813861689"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegIssuer{"STRING_106244640"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegLocaleOfIssue{"STRING_1375237206"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_607933977"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_725562667"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegMaturityTime{"TZTIMEONLY_750516820"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_80);
      FIX::LegOptionRatio LegOptionRatio_80;
      LegOptionRatio_80.setString("18726977");
set_field(noLegs_1_1_0, LegOptionRatio_80, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegPool{"STRING_943743714"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegPriceUnitOfMeasure{"STRING_703727074"}, InstrumentLeg_80);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_80;
      LegPriceUnitOfMeasureQty_80.setString("12044815");
set_field(noLegs_1_1_0, LegPriceUnitOfMeasureQty_80, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegProduct{1111655292}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegPutOrCall{1173800704}, InstrumentLeg_80);
      FIX::LegRatioQty LegRatioQty_80;
      LegRatioQty_80.setString("20245554");
set_field(noLegs_1_1_0, LegRatioQty_80, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1862559677"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegRepoCollateralSecurityType{"STRING_1299144395"}, InstrumentLeg_80);
      FIX::LegRepurchaseRate LegRepurchaseRate_80;
      LegRepurchaseRate_80.setString("11.870000");
set_field(noLegs_1_1_0, LegRepurchaseRate_80, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegRepurchaseTerm{1762166422}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegSecurityDesc{"STRING_1203457460"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegSecurityExchange{"EXCHANGE_1468559091"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegSecurityID{"STRING_1686291931"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegSecurityIDSource{"STRING_1069447980"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegSecuritySubType{"STRING_1644051152"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegSecurityType{"STRING_1811520846"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegSide{'1'}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_865242019"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_80);
      FIX::LegStrikePrice LegStrikePrice_80;
      LegStrikePrice_80.setString("7264882");
set_field(noLegs_1_1_0, LegStrikePrice_80, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegSymbol{"STRING_177107529"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegSymbolSfx{"STRING_488145356"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegTimeUnit{"STRING_392866293"}, InstrumentLeg_80);
      set_field(noLegs_1_1_0, FIX::LegUnitOfMeasure{"STRING_283352169"}, InstrumentLeg_80);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_80;
      LegUnitOfMeasureQty_80.setString("18633825");
set_field(noLegs_1_1_0, LegUnitOfMeasureQty_80, InstrumentLeg_80);
      all_values.push_back(InstrumentLeg_80);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_165;
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltID{"STRING_1008914836"}, LegSecAltIDGrp_NoLegSecurityAltID_165);
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltIDSource{"STRING_466415734"}, LegSecAltIDGrp_NoLegSecurityAltID_165);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_165);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_166;
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltID{"STRING_446622001"}, LegSecAltIDGrp_NoLegSecurityAltID_166);
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltIDSource{"STRING_734128947"}, LegSecAltIDGrp_NoLegSecurityAltID_166);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_166);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_5;
      set_field(noLegs_1_1_0, FIX::LegBenchmarkCurveCurrency{"CAN"}, LegBenchmarkCurveData_5);
      set_field(noLegs_1_1_0, FIX::LegBenchmarkCurveName{"STRING_1938610488"}, LegBenchmarkCurveData_5);
      set_field(noLegs_1_1_0, FIX::LegBenchmarkCurvePoint{"STRING_374331093"}, LegBenchmarkCurveData_5);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_5;
      LegBenchmarkPrice_5.setString("1766661");
set_field(noLegs_1_1_0, LegBenchmarkPrice_5, LegBenchmarkCurveData_5);
      set_field(noLegs_1_1_0, FIX::LegBenchmarkPriceType{1815682274}, LegBenchmarkCurveData_5);
      all_values.push_back(LegBenchmarkCurveData_5);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_23;
        set_field(noLegStipulations_1_0_2_0, FIX::LegStipulationType{"STRING_1475810527"}, LegStipulations_NoLegStipulations_23);
        set_field(noLegStipulations_1_0_2_0, FIX::LegStipulationValue{"STRING_1498619813"}, LegStipulations_NoLegStipulations_23);
        all_values.push_back(LegStipulations_NoLegStipulations_23);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_113;
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyID{"STRING_531784339"}, NestedParties_NoNestedPartyIDs_113);
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_113);
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyRole{1390381828}, NestedParties_NoNestedPartyIDs_113);
        all_values.push_back(NestedParties_NoNestedPartyIDs_113);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_233;
          set_field(noNestedPartySubIDs_1_0_0_3_0, FIX::NestedPartySubID{"STRING_316262761"}, NstdPtysSubGrp_NoNestedPartySubIDs_233);
          set_field(noNestedPartySubIDs_1_0_0_3_0, FIX::NestedPartySubIDType{1054419026}, NstdPtysSubGrp_NoNestedPartySubIDs_233);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_233);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_234;
          set_field(noNestedPartySubIDs_1_0_0_3_1, FIX::NestedPartySubID{"STRING_597671058"}, NstdPtysSubGrp_NoNestedPartySubIDs_234);
          set_field(noNestedPartySubIDs_1_0_0_3_1, FIX::NestedPartySubIDType{1181504780}, NstdPtysSubGrp_NoNestedPartySubIDs_234);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_234);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_114;
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyID{"STRING_1097309979"}, NestedParties_NoNestedPartyIDs_114);
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_114);
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyRole{1907993032}, NestedParties_NoNestedPartyIDs_114);
        all_values.push_back(NestedParties_NoNestedPartyIDs_114);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_235;
          set_field(noNestedPartySubIDs_1_0_1_3_0, FIX::NestedPartySubID{"STRING_1251881580"}, NstdPtysSubGrp_NoNestedPartySubIDs_235);
          set_field(noNestedPartySubIDs_1_0_1_3_0, FIX::NestedPartySubIDType{153375677}, NstdPtysSubGrp_NoNestedPartySubIDs_235);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_235);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_115;
        set_field(noNestedPartyIDs_1_0_2_2, FIX::NestedPartyID{"STRING_1557769678"}, NestedParties_NoNestedPartyIDs_115);
        set_field(noNestedPartyIDs_1_0_2_2, FIX::NestedPartyIDSource{'9'}, NestedParties_NoNestedPartyIDs_115);
        set_field(noNestedPartyIDs_1_0_2_2, FIX::NestedPartyRole{1154175948}, NestedParties_NoNestedPartyIDs_115);
        all_values.push_back(NestedParties_NoNestedPartyIDs_115);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_236;
          set_field(noNestedPartySubIDs_1_0_2_3_0, FIX::NestedPartySubID{"STRING_1434196228"}, NstdPtysSubGrp_NoNestedPartySubIDs_236);
          set_field(noNestedPartySubIDs_1_0_2_3_0, FIX::NestedPartySubIDType{1600797949}, NstdPtysSubGrp_NoNestedPartySubIDs_236);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_236);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_0);
        }
        noLegs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_23;
    set_field(noRelatedSym_0_1, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_23);
    set_field(noRelatedSym_0_1, FIX::BenchmarkCurveName{"STRING_LIBID"}, SpreadOrBenchmarkCurveData_23);
    set_field(noRelatedSym_0_1, FIX::BenchmarkCurvePoint{"STRING_944456653"}, SpreadOrBenchmarkCurveData_23);
    FIX::BenchmarkPrice BenchmarkPrice_23;
    BenchmarkPrice_23.setString("10712031");
set_field(noRelatedSym_0_1, BenchmarkPrice_23, SpreadOrBenchmarkCurveData_23);
    set_field(noRelatedSym_0_1, FIX::BenchmarkPriceType{780329508}, SpreadOrBenchmarkCurveData_23);
    set_field(noRelatedSym_0_1, FIX::BenchmarkSecurityID{"STRING_612655280"}, SpreadOrBenchmarkCurveData_23);
    set_field(noRelatedSym_0_1, FIX::BenchmarkSecurityIDSource{"STRING_1160610244"}, SpreadOrBenchmarkCurveData_23);
    FIX::Spread Spread_23;
    Spread_23.setString("1086563");
set_field(noRelatedSym_0_1, Spread_23, SpreadOrBenchmarkCurveData_23);
    all_values.push_back(SpreadOrBenchmarkCurveData_23);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_35;
      set_field(noStipulations_1_1_0, FIX::StipulationType{"STRING_INTERNALQTY"}, Stipulations_NoStipulations_35);
      set_field(noStipulations_1_1_0, FIX::StipulationValue{"STRING_640440726"}, Stipulations_NoStipulations_35);
      all_values.push_back(Stipulations_NoStipulations_35);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_1.addGroup(noStipulations_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoStipulations noStipulations_1_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_36;
      set_field(noStipulations_1_1_1, FIX::StipulationType{"STRING_LEAVEQTY"}, Stipulations_NoStipulations_36);
      set_field(noStipulations_1_1_1, FIX::StipulationValue{"STRING_107598321"}, Stipulations_NoStipulations_36);
      all_values.push_back(Stipulations_NoStipulations_36);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_1.addGroup(noStipulations_1_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_101;
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1099749463"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuerLen{1162017347}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_691860455"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDescLen{133770595}, UnderlyingInstrument_101);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_101;
      UnderlyingAdjustedQuantity_101.setString("1118436");
set_field(noUnderlyings_1_1_0, UnderlyingAdjustedQuantity_101, UnderlyingInstrument_101);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_101;
      UnderlyingAllocationPercent_101.setString("66.790000");
set_field(noUnderlyings_1_1_0, UnderlyingAllocationPercent_101, UnderlyingInstrument_101);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_101;
      UnderlyingAttachmentPoint_101.setString("36.270000");
set_field(noUnderlyings_1_1_0, UnderlyingAttachmentPoint_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCFICode{"STRING_1386261187"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPProgram{"STRING_559994611"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPRegType{"STRING_47655657"}, UnderlyingInstrument_101);
      FIX::UnderlyingCapValue UnderlyingCapValue_101;
      UnderlyingCapValue_101.setString("7965472");
set_field(noUnderlyings_1_1_0, UnderlyingCapValue_101, UnderlyingInstrument_101);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_101;
      UnderlyingCashAmount_101.setString("15277751");
set_field(noUnderlyings_1_1_0, UnderlyingCashAmount_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_101);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_101;
      UnderlyingContractMultiplier_101.setString("12157480");
set_field(noUnderlyings_1_1_0, UnderlyingContractMultiplier_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingContractMultiplierUnit{814487685}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_655145907"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_221594249"}, UnderlyingInstrument_101);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_101;
      UnderlyingCouponRate_101.setString("97.140000");
set_field(noUnderlyings_1_1_0, UnderlyingCouponRate_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCreditRating{"STRING_1258809283"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_101);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_101;
      UnderlyingCurrentValue_101.setString("20391387");
set_field(noUnderlyings_1_1_0, UnderlyingCurrentValue_101, UnderlyingInstrument_101);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_101;
      UnderlyingDetachmentPoint_101.setString("61.830000");
set_field(noUnderlyings_1_1_0, UnderlyingDetachmentPoint_101, UnderlyingInstrument_101);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_101;
      UnderlyingDirtyPrice_101.setString("15956894");
set_field(noUnderlyings_1_1_0, UnderlyingDirtyPrice_101, UnderlyingInstrument_101);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_101;
      UnderlyingEndPrice_101.setString("3115");
set_field(noUnderlyings_1_1_0, UnderlyingEndPrice_101, UnderlyingInstrument_101);
      FIX::UnderlyingEndValue UnderlyingEndValue_101;
      UnderlyingEndValue_101.setString("17424976");
set_field(noUnderlyings_1_1_0, UnderlyingEndValue_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingExerciseStyle{312905926}, UnderlyingInstrument_101);
      FIX::UnderlyingFXRate UnderlyingFXRate_101;
      UnderlyingFXRate_101.setString("6407522");
set_field(noUnderlyings_1_1_0, UnderlyingFXRate_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_101);
      FIX::UnderlyingFactor UnderlyingFactor_101;
      UnderlyingFactor_101.setString("4205042");
set_field(noUnderlyings_1_1_0, UnderlyingFactor_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFlowScheduleType{734941653}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingInstrRegistry{"STRING_1478250146"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1582521595"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssuer{"STRING_1426802108"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_1612020742"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1694365274"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_734915139"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1506300721"}, UnderlyingInstrument_101);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_101;
      UnderlyingNotionalPercentageOutstanding_101.setString("28.140000");
set_field(noUnderlyings_1_1_0, UnderlyingNotionalPercentageOutstanding_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_101);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_101;
      UnderlyingOriginalNotionalPercentageOutstanding_101.setString("63.780000");
set_field(noUnderlyings_1_1_0, UnderlyingOriginalNotionalPercentageOutstanding_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1729690031"}, UnderlyingInstrument_101);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_101;
      UnderlyingPriceUnitOfMeasureQty_101.setString("6752012");
set_field(noUnderlyings_1_1_0, UnderlyingPriceUnitOfMeasureQty_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingProduct{608304336}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPutOrCall{797954467}, UnderlyingInstrument_101);
      FIX::UnderlyingPx UnderlyingPx_101;
      UnderlyingPx_101.setString("14896888");
set_field(noUnderlyings_1_1_0, UnderlyingPx_101, UnderlyingInstrument_101);
      FIX::UnderlyingQty UnderlyingQty_101;
      UnderlyingQty_101.setString("12634502");
set_field(noUnderlyings_1_1_0, UnderlyingQty_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1019548717"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_853564959"}, UnderlyingInstrument_101);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_101;
      UnderlyingRepurchaseRate_101.setString("58.780000");
set_field(noUnderlyings_1_1_0, UnderlyingRepurchaseRate_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepurchaseTerm{38115972}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRestructuringType{"STRING_1288644148"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityDesc{"STRING_266431022"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1816822155"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityID{"STRING_736849933"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityIDSource{"STRING_266742552"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecuritySubType{"STRING_1411836135"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityType{"STRING_1049755859"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSeniority{"STRING_907494809"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlMethod{"STRING_1790336818"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_101);
      FIX::UnderlyingStartValue UnderlyingStartValue_101;
      UnderlyingStartValue_101.setString("16424364");
set_field(noUnderlyings_1_1_0, UnderlyingStartValue_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1121103317"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_101);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_101;
      UnderlyingStrikePrice_101.setString("5856404");
set_field(noUnderlyings_1_1_0, UnderlyingStrikePrice_101, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbol{"STRING_452179681"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbolSfx{"STRING_1656670062"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingTimeUnit{"STRING_2091941132"}, UnderlyingInstrument_101);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1385322495"}, UnderlyingInstrument_101);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_101;
      UnderlyingUnitOfMeasureQty_101.setString("8040961");
set_field(noUnderlyings_1_1_0, UnderlyingUnitOfMeasureQty_101, UnderlyingInstrument_101);
      all_values.push_back(UnderlyingInstrument_101);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_216;
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_967528879"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_216);
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1479297372"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_216);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_216);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_217;
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_2106718199"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_217);
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1765483346"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_217);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_217);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_218;
        set_field(noUnderlyingSecurityAltID_1_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_821502617"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_218);
        set_field(noUnderlyingSecurityAltID_1_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1222684794"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_218);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_218);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_207;
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipType{"STRING_1675067577"}, UnderlyingStipulations_NoUnderlyingStips_207);
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipValue{"STRING_1597460672"}, UnderlyingStipulations_NoUnderlyingStips_207);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_207);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_208;
        set_field(noUnderlyingStips_1_0_2_1, FIX::UnderlyingStipType{"STRING_675664387"}, UnderlyingStipulations_NoUnderlyingStips_208);
        set_field(noUnderlyingStips_1_0_2_1, FIX::UnderlyingStipValue{"STRING_816228077"}, UnderlyingStipulations_NoUnderlyingStips_208);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_208);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_210;
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_345002894"}, UndlyInstrumentParties_NoUndlyInstrumentParties_210);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_210);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyRole{2130634247}, UndlyInstrumentParties_NoUndlyInstrumentParties_210);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_210);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_455350221"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{890645408}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_211;
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1399692200"}, UndlyInstrumentParties_NoUndlyInstrumentParties_211);
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_211);
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyRole{385598222}, UndlyInstrumentParties_NoUndlyInstrumentParties_211);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_211);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421;
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_683424736"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421);
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1307353145}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422;
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_958952280"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422);
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{1135604417}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423;
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_816539560"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423);
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{903409765}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423);
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
      multiset<string> UnderlyingInstrument_102;
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuer{"DATA_373443265"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuerLen{1620635725}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_254339980"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDescLen{1340972144}, UnderlyingInstrument_102);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_102;
      UnderlyingAdjustedQuantity_102.setString("9524494");
set_field(noUnderlyings_1_1_1, UnderlyingAdjustedQuantity_102, UnderlyingInstrument_102);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_102;
      UnderlyingAllocationPercent_102.setString("45.310000");
set_field(noUnderlyings_1_1_1, UnderlyingAllocationPercent_102, UnderlyingInstrument_102);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_102;
      UnderlyingAttachmentPoint_102.setString("18.420000");
set_field(noUnderlyings_1_1_1, UnderlyingAttachmentPoint_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCFICode{"STRING_1773952067"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPProgram{"STRING_1436259325"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPRegType{"STRING_1596520258"}, UnderlyingInstrument_102);
      FIX::UnderlyingCapValue UnderlyingCapValue_102;
      UnderlyingCapValue_102.setString("13015359");
set_field(noUnderlyings_1_1_1, UnderlyingCapValue_102, UnderlyingInstrument_102);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_102;
      UnderlyingCashAmount_102.setString("8862363");
set_field(noUnderlyings_1_1_1, UnderlyingCashAmount_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_102);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_102;
      UnderlyingContractMultiplier_102.setString("21177640");
set_field(noUnderlyings_1_1_1, UnderlyingContractMultiplier_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingContractMultiplierUnit{602644396}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_469703892"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1523358435"}, UnderlyingInstrument_102);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_102;
      UnderlyingCouponRate_102.setString("49.950000");
set_field(noUnderlyings_1_1_1, UnderlyingCouponRate_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCreditRating{"STRING_79059274"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_102);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_102;
      UnderlyingCurrentValue_102.setString("14787514");
set_field(noUnderlyings_1_1_1, UnderlyingCurrentValue_102, UnderlyingInstrument_102);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_102;
      UnderlyingDetachmentPoint_102.setString("53.370000");
set_field(noUnderlyings_1_1_1, UnderlyingDetachmentPoint_102, UnderlyingInstrument_102);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_102;
      UnderlyingDirtyPrice_102.setString("18620386");
set_field(noUnderlyings_1_1_1, UnderlyingDirtyPrice_102, UnderlyingInstrument_102);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_102;
      UnderlyingEndPrice_102.setString("18520633");
set_field(noUnderlyings_1_1_1, UnderlyingEndPrice_102, UnderlyingInstrument_102);
      FIX::UnderlyingEndValue UnderlyingEndValue_102;
      UnderlyingEndValue_102.setString("2927764");
set_field(noUnderlyings_1_1_1, UnderlyingEndValue_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingExerciseStyle{1021908123}, UnderlyingInstrument_102);
      FIX::UnderlyingFXRate UnderlyingFXRate_102;
      UnderlyingFXRate_102.setString("6635319");
set_field(noUnderlyings_1_1_1, UnderlyingFXRate_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_102);
      FIX::UnderlyingFactor UnderlyingFactor_102;
      UnderlyingFactor_102.setString("18384476");
set_field(noUnderlyings_1_1_1, UnderlyingFactor_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFlowScheduleType{1566941741}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingInstrRegistry{"STRING_1801824108"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1311599760"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssuer{"STRING_1821281721"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_995312604"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_116565561"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2034856252"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1954284446"}, UnderlyingInstrument_102);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_102;
      UnderlyingNotionalPercentageOutstanding_102.setString("76.280000");
set_field(noUnderlyings_1_1_1, UnderlyingNotionalPercentageOutstanding_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_102);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_102;
      UnderlyingOriginalNotionalPercentageOutstanding_102.setString("10.560000");
set_field(noUnderlyings_1_1_1, UnderlyingOriginalNotionalPercentageOutstanding_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1044569976"}, UnderlyingInstrument_102);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_102;
      UnderlyingPriceUnitOfMeasureQty_102.setString("623846");
set_field(noUnderlyings_1_1_1, UnderlyingPriceUnitOfMeasureQty_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingProduct{1528022054}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPutOrCall{1014850401}, UnderlyingInstrument_102);
      FIX::UnderlyingPx UnderlyingPx_102;
      UnderlyingPx_102.setString("6650290");
set_field(noUnderlyings_1_1_1, UnderlyingPx_102, UnderlyingInstrument_102);
      FIX::UnderlyingQty UnderlyingQty_102;
      UnderlyingQty_102.setString("19977259");
set_field(noUnderlyings_1_1_1, UnderlyingQty_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_390725188"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1250824022"}, UnderlyingInstrument_102);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_102;
      UnderlyingRepurchaseRate_102.setString("52.200000");
set_field(noUnderlyings_1_1_1, UnderlyingRepurchaseRate_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepurchaseTerm{221950197}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRestructuringType{"STRING_579780777"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityDesc{"STRING_1408053046"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1978785534"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityID{"STRING_294335754"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityIDSource{"STRING_1112632742"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecuritySubType{"STRING_124078312"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityType{"STRING_1316243877"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSeniority{"STRING_1776164719"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlMethod{"STRING_1552459155"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_102);
      FIX::UnderlyingStartValue UnderlyingStartValue_102;
      UnderlyingStartValue_102.setString("11956228");
set_field(noUnderlyings_1_1_1, UnderlyingStartValue_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1206799615"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_102);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_102;
      UnderlyingStrikePrice_102.setString("546285");
set_field(noUnderlyings_1_1_1, UnderlyingStrikePrice_102, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbol{"STRING_287889586"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbolSfx{"STRING_756793490"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingTimeUnit{"STRING_2008913017"}, UnderlyingInstrument_102);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_30923566"}, UnderlyingInstrument_102);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_102;
      UnderlyingUnitOfMeasureQty_102.setString("20804254");
set_field(noUnderlyings_1_1_1, UnderlyingUnitOfMeasureQty_102, UnderlyingInstrument_102);
      all_values.push_back(UnderlyingInstrument_102);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_219;
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_1075493543"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_219);
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_2142810051"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_219);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_219);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_220;
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_645288832"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_220);
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_2090343944"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_220);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_220);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_209;
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipType{"STRING_495531130"}, UnderlyingStipulations_NoUnderlyingStips_209);
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipValue{"STRING_333585485"}, UnderlyingStipulations_NoUnderlyingStips_209);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_209);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_210;
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipType{"STRING_1911179452"}, UnderlyingStipulations_NoUnderlyingStips_210);
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipValue{"STRING_424832702"}, UnderlyingStipulations_NoUnderlyingStips_210);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_210);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_211;
        set_field(noUnderlyingStips_1_1_2_2, FIX::UnderlyingStipType{"STRING_555535682"}, UnderlyingStipulations_NoUnderlyingStips_211);
        set_field(noUnderlyingStips_1_1_2_2, FIX::UnderlyingStipValue{"STRING_343476581"}, UnderlyingStipulations_NoUnderlyingStips_211);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_211);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_212;
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_386837568"}, UndlyInstrumentParties_NoUndlyInstrumentParties_212);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_212);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyRole{798034843}, UndlyInstrumentParties_NoUndlyInstrumentParties_212);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_212);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1954056213"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{426715914}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2063375035"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{813780477}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_103;
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuer{"DATA_1622338726"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuerLen{1122691002}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_985104502"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDescLen{344275964}, UnderlyingInstrument_103);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_103;
      UnderlyingAdjustedQuantity_103.setString("11773195");
set_field(noUnderlyings_1_1_2, UnderlyingAdjustedQuantity_103, UnderlyingInstrument_103);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_103;
      UnderlyingAllocationPercent_103.setString("40.880000");
set_field(noUnderlyings_1_1_2, UnderlyingAllocationPercent_103, UnderlyingInstrument_103);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_103;
      UnderlyingAttachmentPoint_103.setString("94.550000");
set_field(noUnderlyings_1_1_2, UnderlyingAttachmentPoint_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCFICode{"STRING_1038748943"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPProgram{"STRING_1303917654"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPRegType{"STRING_1034011227"}, UnderlyingInstrument_103);
      FIX::UnderlyingCapValue UnderlyingCapValue_103;
      UnderlyingCapValue_103.setString("1560157");
set_field(noUnderlyings_1_1_2, UnderlyingCapValue_103, UnderlyingInstrument_103);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_103;
      UnderlyingCashAmount_103.setString("2319275");
set_field(noUnderlyings_1_1_2, UnderlyingCashAmount_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_103);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_103;
      UnderlyingContractMultiplier_103.setString("8013045");
set_field(noUnderlyings_1_1_2, UnderlyingContractMultiplier_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingContractMultiplierUnit{174787846}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1689693060"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1296835683"}, UnderlyingInstrument_103);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_103;
      UnderlyingCouponRate_103.setString("33.310000");
set_field(noUnderlyings_1_1_2, UnderlyingCouponRate_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCreditRating{"STRING_1453388864"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_103);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_103;
      UnderlyingCurrentValue_103.setString("17968654");
set_field(noUnderlyings_1_1_2, UnderlyingCurrentValue_103, UnderlyingInstrument_103);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_103;
      UnderlyingDetachmentPoint_103.setString("4.850000");
set_field(noUnderlyings_1_1_2, UnderlyingDetachmentPoint_103, UnderlyingInstrument_103);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_103;
      UnderlyingDirtyPrice_103.setString("14507465");
set_field(noUnderlyings_1_1_2, UnderlyingDirtyPrice_103, UnderlyingInstrument_103);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_103;
      UnderlyingEndPrice_103.setString("2871941");
set_field(noUnderlyings_1_1_2, UnderlyingEndPrice_103, UnderlyingInstrument_103);
      FIX::UnderlyingEndValue UnderlyingEndValue_103;
      UnderlyingEndValue_103.setString("576216");
set_field(noUnderlyings_1_1_2, UnderlyingEndValue_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingExerciseStyle{1961662462}, UnderlyingInstrument_103);
      FIX::UnderlyingFXRate UnderlyingFXRate_103;
      UnderlyingFXRate_103.setString("937666");
set_field(noUnderlyings_1_1_2, UnderlyingFXRate_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_103);
      FIX::UnderlyingFactor UnderlyingFactor_103;
      UnderlyingFactor_103.setString("18775538");
set_field(noUnderlyings_1_1_2, UnderlyingFactor_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFlowScheduleType{907547175}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingInstrRegistry{"STRING_2106676321"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_852761204"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssuer{"STRING_1892651677"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_303468637"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_2030080777"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1018162117"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1404538092"}, UnderlyingInstrument_103);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_103;
      UnderlyingNotionalPercentageOutstanding_103.setString("60.720000");
set_field(noUnderlyings_1_1_2, UnderlyingNotionalPercentageOutstanding_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_103);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_103;
      UnderlyingOriginalNotionalPercentageOutstanding_103.setString("56.710000");
set_field(noUnderlyings_1_1_2, UnderlyingOriginalNotionalPercentageOutstanding_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1077361793"}, UnderlyingInstrument_103);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_103;
      UnderlyingPriceUnitOfMeasureQty_103.setString("4065236");
set_field(noUnderlyings_1_1_2, UnderlyingPriceUnitOfMeasureQty_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingProduct{1320403301}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPutOrCall{1878666346}, UnderlyingInstrument_103);
      FIX::UnderlyingPx UnderlyingPx_103;
      UnderlyingPx_103.setString("5813115");
set_field(noUnderlyings_1_1_2, UnderlyingPx_103, UnderlyingInstrument_103);
      FIX::UnderlyingQty UnderlyingQty_103;
      UnderlyingQty_103.setString("8626127");
set_field(noUnderlyings_1_1_2, UnderlyingQty_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1028018381"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1089684850"}, UnderlyingInstrument_103);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_103;
      UnderlyingRepurchaseRate_103.setString("79.290000");
set_field(noUnderlyings_1_1_2, UnderlyingRepurchaseRate_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepurchaseTerm{602203118}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRestructuringType{"STRING_6110215"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityDesc{"STRING_1965383374"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_2009273604"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityID{"STRING_1456856796"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityIDSource{"STRING_105093859"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecuritySubType{"STRING_2066895284"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityType{"STRING_1271035610"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSeniority{"STRING_198860556"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlMethod{"STRING_403749231"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_103);
      FIX::UnderlyingStartValue UnderlyingStartValue_103;
      UnderlyingStartValue_103.setString("11064077");
set_field(noUnderlyings_1_1_2, UnderlyingStartValue_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_362941904"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_103);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_103;
      UnderlyingStrikePrice_103.setString("6664105");
set_field(noUnderlyings_1_1_2, UnderlyingStrikePrice_103, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbol{"STRING_1736464145"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbolSfx{"STRING_1869737877"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingTimeUnit{"STRING_2070948634"}, UnderlyingInstrument_103);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_510326570"}, UnderlyingInstrument_103);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_103;
      UnderlyingUnitOfMeasureQty_103.setString("20443340");
set_field(noUnderlyings_1_1_2, UnderlyingUnitOfMeasureQty_103, UnderlyingInstrument_103);
      all_values.push_back(UnderlyingInstrument_103);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_221;
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_1587688363"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_221);
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_303374026"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_221);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_221);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_212;
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipType{"STRING_1318871062"}, UnderlyingStipulations_NoUnderlyingStips_212);
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipValue{"STRING_884685545"}, UnderlyingStipulations_NoUnderlyingStips_212);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_212);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_213;
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_199405795"}, UndlyInstrumentParties_NoUndlyInstrumentParties_213);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_213);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyRole{418580954}, UndlyInstrumentParties_NoUndlyInstrumentParties_213);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_213);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1980480610"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{236480680}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_663398870"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1289853758}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_427);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_1);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_214;
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_341574539"}, UndlyInstrumentParties_NoUndlyInstrumentParties_214);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_214);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyRole{413405721}, UndlyInstrumentParties_NoUndlyInstrumentParties_214);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_214);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequestReject::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428;
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_986559737"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428);
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1414511533}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_428);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_0);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_2);
    }
    // YieldData
    multiset<string> YieldData_18;
    FIX::Yield Yield_18;
    Yield_18.setString("28.270000");
set_field(noRelatedSym_0_1, Yield_18, YieldData_18);
    set_field(noRelatedSym_0_1, FIX::YieldCalcDate{"LOCALMKTDATE_1349501641"}, YieldData_18);
    set_field(noRelatedSym_0_1, FIX::YieldRedemptionDate{"LOCALMKTDATE_1120894901"}, YieldData_18);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_18;
    YieldRedemptionPrice_18.setString("3509349");
set_field(noRelatedSym_0_1, YieldRedemptionPrice_18, YieldData_18);
    set_field(noRelatedSym_0_1, FIX::YieldRedemptionPriceType{2015912183}, YieldData_18);
    set_field(noRelatedSym_0_1, FIX::YieldType{"STRING_CHANGE"}, YieldData_18);
    all_values.push_back(YieldData_18);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_1);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::QuoteRequestReject::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_8;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_1939377169"}, RootParties_NoRootPartyIDs_8);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_8);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{2117523170}, RootParties_NoRootPartyIDs_8);
    all_values.push_back(RootParties_NoRootPartyIDs_8);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_14;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_660406684"}, RootSubParties_NoRootPartySubIDs_14);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{273413548}, RootSubParties_NoRootPartySubIDs_14);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_14);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_15;
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubID{"STRING_1541358137"}, RootSubParties_NoRootPartySubIDs_15);
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubIDType{1979277746}, RootSubParties_NoRootPartySubIDs_15);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_15);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_16;
      set_field(noRootPartySubIDs_0_1_2, FIX::RootPartySubID{"STRING_1158099093"}, RootSubParties_NoRootPartySubIDs_16);
      set_field(noRootPartySubIDs_0_1_2, FIX::RootPartySubIDType{1791421162}, RootSubParties_NoRootPartySubIDs_16);
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
    set_field(noRootPartyIDs_0_1, FIX::RootPartyID{"STRING_31199893"}, RootParties_NoRootPartyIDs_9);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyIDSource{'9'}, RootParties_NoRootPartyIDs_9);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyRole{62518468}, RootParties_NoRootPartyIDs_9);
    all_values.push_back(RootParties_NoRootPartyIDs_9);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_17;
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubID{"STRING_817982802"}, RootSubParties_NoRootPartySubIDs_17);
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubIDType{298999148}, RootSubParties_NoRootPartySubIDs_17);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_17);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_18;
      set_field(noRootPartySubIDs_1_1_1, FIX::RootPartySubID{"STRING_1496207677"}, RootSubParties_NoRootPartySubIDs_18);
      set_field(noRootPartySubIDs_1_1_1, FIX::RootPartySubIDType{2107836561}, RootSubParties_NoRootPartySubIDs_18);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_18);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_19;
      set_field(noRootPartySubIDs_1_1_2, FIX::RootPartySubID{"STRING_640573688"}, RootSubParties_NoRootPartySubIDs_19);
      set_field(noRootPartySubIDs_1_1_2, FIX::RootPartySubIDType{2079018184}, RootSubParties_NoRootPartySubIDs_19);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_19);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteRequestReject::NoRootPartyIDs noRootPartyIDs_0_2;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_10;
    set_field(noRootPartyIDs_0_2, FIX::RootPartyID{"STRING_373758634"}, RootParties_NoRootPartyIDs_10);
    set_field(noRootPartyIDs_0_2, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_10);
    set_field(noRootPartyIDs_0_2, FIX::RootPartyRole{918094273}, RootParties_NoRootPartyIDs_10);
    all_values.push_back(RootParties_NoRootPartyIDs_10);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_20;
      set_field(noRootPartySubIDs_2_1_0, FIX::RootPartySubID{"STRING_680367963"}, RootSubParties_NoRootPartySubIDs_20);
      set_field(noRootPartySubIDs_2_1_0, FIX::RootPartySubIDType{120112267}, RootSubParties_NoRootPartySubIDs_20);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_20);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_21;
      set_field(noRootPartySubIDs_2_1_1, FIX::RootPartySubID{"STRING_761681420"}, RootSubParties_NoRootPartySubIDs_21);
      set_field(noRootPartySubIDs_2_1_1, FIX::RootPartySubIDType{1031302903}, RootSubParties_NoRootPartySubIDs_21);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_21);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::QuoteRequestReject::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_22;
      set_field(noRootPartySubIDs_2_1_2, FIX::RootPartySubID{"STRING_2136024450"}, RootSubParties_NoRootPartySubIDs_22);
      set_field(noRootPartySubIDs_2_1_2, FIX::RootPartySubIDType{1471556818}, RootSubParties_NoRootPartySubIDs_22);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_22);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_2);
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
