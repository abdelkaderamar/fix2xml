#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::QuoteRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteRequest_0;
  set_field(msg, FIX::BookingType{2}, QuoteRequest_0);
  set_field(msg, FIX::ClOrdID{"STRING_8841519"}, QuoteRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_773864774"}, QuoteRequest_0);
  set_field(msg, FIX::EncodedTextLen{1617247180}, QuoteRequest_0);
  set_field(msg, FIX::OrderCapacity{'G'}, QuoteRequest_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_B"}, QuoteRequest_0);
  set_field(msg, FIX::PreTradeAnonymity{false}, QuoteRequest_0);
  set_field(msg, FIX::PrivateQuote{false}, QuoteRequest_0);
  set_field(msg, FIX::QuoteReqID{"STRING_1737703880"}, QuoteRequest_0);
  set_field(msg, FIX::RFQReqID{"STRING_1667467186"}, QuoteRequest_0);
  set_field(msg, FIX::RespondentType{1}, QuoteRequest_0);
  set_field(msg, FIX::Text{"STRING_455423072"}, QuoteRequest_0);
  all_values.push_back(QuoteRequest_0);

  all_compo_names.insert("QuoteRequest");

  // QuotReqGrp
  // Group QuotReqGrp.NoRelatedSym
  {
    FIX50SP2::QuoteRequest::NoRelatedSym noRelatedSym_0_0;
    // QuotReqGrp.NoRelatedSym
    multiset<string> QuotReqGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::Account{"STRING_587696591"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::AccountType{1}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::AcctIDSource{1}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Currency{"GBP"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(20, 40, 40, 20, 9, 2008)}, QuotReqGrp_NoRelatedSym_0);
    FIX::MinQty MinQty_16;
    MinQty_16.setString("17053157");
set_field(noRelatedSym_0_0, MinQty_16, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::OrdType{'B'}, QuotReqGrp_NoRelatedSym_0);
    FIX::OrderQty2 OrderQty2_18;
    OrderQty2_18.setString("13737552");
set_field(noRelatedSym_0_0, OrderQty2_18, QuotReqGrp_NoRelatedSym_0);
    FIX::PrevClosePx PrevClosePx_8;
    PrevClosePx_8.setString("2993369");
set_field(noRelatedSym_0_0, PrevClosePx_8, QuotReqGrp_NoRelatedSym_0);
    FIX::Price Price_19;
    Price_19.setString("197771");
set_field(noRelatedSym_0_0, Price_19, QuotReqGrp_NoRelatedSym_0);
    FIX::Price2 Price2_4;
    Price2_4.setString("1589007");
set_field(noRelatedSym_0_0, Price2_4, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::PriceType{4}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QtyType{0}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuotePriceType{8}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteRequestType{2}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteType{1}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlCurrency{"USD"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlDate{"LOCALMKTDATE_255747976"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlDate2{"LOCALMKTDATE_1538517375"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlType{"STRING_3"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Side{'D'}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradeOriginationDate{"LOCALMKTDATE_1993940448"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradingSessionID{"STRING_1"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradingSessionSubID{"STRING_1"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(16, 2, 47, 1, 11, 2013)}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(10, 16, 40, 13, 7, 2006)}, QuotReqGrp_NoRelatedSym_0);
    all_values.push_back(QuotReqGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_18;
    set_field(noRelatedSym_0_0, FIX::AgreementCurrency{"GBP"}, FinancingDetails_18);
    set_field(noRelatedSym_0_0, FIX::AgreementDate{"LOCALMKTDATE_1835907822"}, FinancingDetails_18);
    set_field(noRelatedSym_0_0, FIX::AgreementDesc{"STRING_763098044"}, FinancingDetails_18);
    set_field(noRelatedSym_0_0, FIX::AgreementID{"STRING_363053750"}, FinancingDetails_18);
    set_field(noRelatedSym_0_0, FIX::DeliveryType{1}, FinancingDetails_18);
    set_field(noRelatedSym_0_0, FIX::EndDate{"LOCALMKTDATE_1952337770"}, FinancingDetails_18);
    FIX::MarginRatio MarginRatio_18;
    MarginRatio_18.setString("74.950000");
set_field(noRelatedSym_0_0, MarginRatio_18, FinancingDetails_18);
    set_field(noRelatedSym_0_0, FIX::StartDate{"LOCALMKTDATE_422003196"}, FinancingDetails_18);
    set_field(noRelatedSym_0_0, FIX::TerminationType{3}, FinancingDetails_18);
    all_values.push_back(FinancingDetails_18);
    all_compo_names.insert("...NoRelatedSym.");

    // Instrument
    multiset<string> Instrument_68;
    FIX::AttachmentPoint AttachmentPoint_68;
    AttachmentPoint_68.setString("54.710000");
set_field(noRelatedSym_0_0, AttachmentPoint_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_1960520572"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::CPProgram{1}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_357297883"}, Instrument_68);
    FIX::CapPrice CapPrice_68;
    CapPrice_68.setString("18069773");
set_field(noRelatedSym_0_0, CapPrice_68, Instrument_68);
    FIX::ContractMultiplier ContractMultiplier_68;
    ContractMultiplier_68.setString("1514197");
set_field(noRelatedSym_0_0, ContractMultiplier_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{1}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1347498197"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_1054934267"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_359304309"}, Instrument_68);
    FIX::CouponRate CouponRate_68;
    CouponRate_68.setString("4.840000");
set_field(noRelatedSym_0_0, CouponRate_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_581350737"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_1838967079"}, Instrument_68);
    FIX::DetachmentPoint DetachmentPoint_68;
    DetachmentPoint_68.setString("51.950000");
set_field(noRelatedSym_0_0, DetachmentPoint_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_633385007"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{1025419954}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_1919453551"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{936636807}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{1}, Instrument_68);
    FIX::Factor Factor_68;
    Factor_68.setString("866277");
set_field(noRelatedSym_0_0, Factor_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{true}, Instrument_68);
    FIX::FloorPrice FloorPrice_68;
    FloorPrice_68.setString("4210628");
set_field(noRelatedSym_0_0, FloorPrice_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{2}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_1723908446"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'7'}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_775774103"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_1528762568"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_1704694058"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::ListMethod{0}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_15673027"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_733535881"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1010814224"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_999590656"}, Instrument_68);
    FIX::MinPriceIncrement MinPriceIncrement_68;
    MinPriceIncrement_68.setString("10908337");
set_field(noRelatedSym_0_0, MinPriceIncrement_68, Instrument_68);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_68;
    MinPriceIncrementAmount_68.setString("6703079");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{1151010396}, Instrument_68);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_68;
    NotionalPercentageOutstanding_68.setString("6.520000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'2'}, Instrument_68);
    FIX::OptPayoutAmount OptPayoutAmount_68;
    OptPayoutAmount_68.setString("584610");
set_field(noRelatedSym_0_0, OptPayoutAmount_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{2}, Instrument_68);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_68;
    OriginalNotionalPercentageOutstanding_68.setString("29.810000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_639811752"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{1267588392}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_1273196759"}, Instrument_68);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_68;
    PriceUnitOfMeasureQty_68.setString("1455246");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::Product{10}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_62349919"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_255232197"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_528510147"}, Instrument_68);
    FIX::RepurchaseRate RepurchaseRate_68;
    RepurchaseRate_68.setString("0.030000");
set_field(noRelatedSym_0_0, RepurchaseRate_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{676295009}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MR"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_452464802"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_1460411572"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_1458868652"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_1981227370"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_F"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_1996900397"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_TAXA"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SB"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'C'}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_694507980"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_42800828"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"JPY"}, Instrument_68);
    FIX::StrikeMultiplier StrikeMultiplier_68;
    StrikeMultiplier_68.setString("20606069");
set_field(noRelatedSym_0_0, StrikeMultiplier_68, Instrument_68);
    FIX::StrikePrice StrikePrice_68;
    StrikePrice_68.setString("20584788");
set_field(noRelatedSym_0_0, StrikePrice_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{1}, Instrument_68);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_68;
    StrikePriceBoundaryPrecision_68.setString("63.060000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{3}, Instrument_68);
    FIX::StrikeValue StrikeValue_68;
    StrikeValue_68.setString("4600346");
set_field(noRelatedSym_0_0, StrikeValue_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_158127187"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_H"}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_68);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_68;
    UnitOfMeasureQty_68.setString("5207889");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_68, Instrument_68);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_FUT"}, Instrument_68);
    all_values.push_back(Instrument_68);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_137;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_137);
      FIX::ComplexEventPrice ComplexEventPrice_137;
      ComplexEventPrice_137.setString("12582588");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_137, ComplexEvents_NoComplexEvents_137);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_137);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_137;
      ComplexEventPriceBoundaryPrecision_137.setString("37.950000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_137, ComplexEvents_NoComplexEvents_137);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_137);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_137);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_137;
      ComplexOptPayoutAmount_137.setString("16830375");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_137, ComplexEvents_NoComplexEvents_137);
      all_values.push_back(ComplexEvents_NoComplexEvents_137);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_269;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 47, 58, 1, 1, 2006)}, ComplexEventDates_NoComplexEventDates_269);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 32, 57, 14, 7, 2017)}, ComplexEventDates_NoComplexEventDates_269);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_269);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_555;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 28, 16)}, ComplexEventTimes_NoComplexEventTimes_555);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 13, 56)}, ComplexEventTimes_NoComplexEventTimes_555);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_555);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_270;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 5, 11, 17, 3, 2003)}, ComplexEventDates_NoComplexEventDates_270);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 41, 52, 5, 3, 2014)}, ComplexEventDates_NoComplexEventDates_270);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_270);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_556;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 4, 55)}, ComplexEventTimes_NoComplexEventTimes_556);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 6, 59)}, ComplexEventTimes_NoComplexEventTimes_556);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_556);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_557;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 19, 48)}, ComplexEventTimes_NoComplexEventTimes_557);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 1, 24)}, ComplexEventTimes_NoComplexEventTimes_557);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_557);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_558;
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 21, 17)}, ComplexEventTimes_NoComplexEventTimes_558);
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 31, 10)}, ComplexEventTimes_NoComplexEventTimes_558);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_558);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_271;
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 3, 44, 14, 4, 2010)}, ComplexEventDates_NoComplexEventDates_271);
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 20, 31, 19, 11, 2007)}, ComplexEventDates_NoComplexEventDates_271);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_271);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_559;
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 42, 47)}, ComplexEventTimes_NoComplexEventTimes_559);
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 48, 43)}, ComplexEventTimes_NoComplexEventTimes_559);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_559);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_560;
          set_field(noComplexEventTimes_0_0_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 4, 7)}, ComplexEventTimes_NoComplexEventTimes_560);
          set_field(noComplexEventTimes_0_0_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 38, 29)}, ComplexEventTimes_NoComplexEventTimes_560);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_560);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_138;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_138);
      FIX::ComplexEventPrice ComplexEventPrice_138;
      ComplexEventPrice_138.setString("12862756");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_138, ComplexEvents_NoComplexEvents_138);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_138);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_138;
      ComplexEventPriceBoundaryPrecision_138.setString("44.780000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_138, ComplexEvents_NoComplexEvents_138);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_138);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_138);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_138;
      ComplexOptPayoutAmount_138.setString("5105474");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_138, ComplexEvents_NoComplexEvents_138);
      all_values.push_back(ComplexEvents_NoComplexEvents_138);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_272;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 37, 31, 4, 7, 2006)}, ComplexEventDates_NoComplexEventDates_272);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 36, 38, 26, 9, 2000)}, ComplexEventDates_NoComplexEventDates_272);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_272);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_561;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 58, 25)}, ComplexEventTimes_NoComplexEventTimes_561);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 56, 3)}, ComplexEventTimes_NoComplexEventTimes_561);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_561);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_562;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 19, 49)}, ComplexEventTimes_NoComplexEventTimes_562);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 47, 5)}, ComplexEventTimes_NoComplexEventTimes_562);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_562);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_273;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 34, 42, 26, 9, 2012)}, ComplexEventDates_NoComplexEventDates_273);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 4, 19, 17, 1, 2013)}, ComplexEventDates_NoComplexEventDates_273);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_273);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_563;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 48, 59)}, ComplexEventTimes_NoComplexEventTimes_563);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 47, 30)}, ComplexEventTimes_NoComplexEventTimes_563);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_563);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_564;
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 49, 7)}, ComplexEventTimes_NoComplexEventTimes_564);
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 54, 22)}, ComplexEventTimes_NoComplexEventTimes_564);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_564);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_565;
          set_field(noComplexEventTimes_0_1_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 56, 36)}, ComplexEventTimes_NoComplexEventTimes_565);
          set_field(noComplexEventTimes_0_1_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 12, 39)}, ComplexEventTimes_NoComplexEventTimes_565);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_565);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_274;
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 58, 41, 0, 12, 2007)}, ComplexEventDates_NoComplexEventDates_274);
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 20, 5, 3, 11, 2011)}, ComplexEventDates_NoComplexEventDates_274);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_274);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_566;
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 6, 10)}, ComplexEventTimes_NoComplexEventTimes_566);
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 5, 59)}, ComplexEventTimes_NoComplexEventTimes_566);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_566);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_567;
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 47, 20)}, ComplexEventTimes_NoComplexEventTimes_567);
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 24, 26)}, ComplexEventTimes_NoComplexEventTimes_567);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_567);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_139;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_139);
      FIX::ComplexEventPrice ComplexEventPrice_139;
      ComplexEventPrice_139.setString("13824801");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_139, ComplexEvents_NoComplexEvents_139);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_139);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_139;
      ComplexEventPriceBoundaryPrecision_139.setString("58.610000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_139, ComplexEvents_NoComplexEvents_139);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_139);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_139);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_139;
      ComplexOptPayoutAmount_139.setString("5827910");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_139, ComplexEvents_NoComplexEvents_139);
      all_values.push_back(ComplexEvents_NoComplexEvents_139);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_275;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 7, 7, 15, 5, 2001)}, ComplexEventDates_NoComplexEventDates_275);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 31, 25, 20, 10, 2010)}, ComplexEventDates_NoComplexEventDates_275);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_275);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_568;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 18, 9)}, ComplexEventTimes_NoComplexEventTimes_568);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 33, 24)}, ComplexEventTimes_NoComplexEventTimes_568);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_568);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_569;
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 40, 53)}, ComplexEventTimes_NoComplexEventTimes_569);
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 58, 3)}, ComplexEventTimes_NoComplexEventTimes_569);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_569);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_276;
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 3, 35, 2, 8, 2006)}, ComplexEventDates_NoComplexEventDates_276);
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 23, 41, 23, 2, 2013)}, ComplexEventDates_NoComplexEventDates_276);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_276);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_570;
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 12, 36)}, ComplexEventTimes_NoComplexEventTimes_570);
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 1, 28)}, ComplexEventTimes_NoComplexEventTimes_570);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_570);
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
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_140;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1584440999"}, EvntGrp_NoEvents_140);
      FIX::EventPx EventPx_140;
      EventPx_140.setString("13749664");
set_field(noEvents_0_1_0, EventPx_140, EvntGrp_NoEvents_140);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_561017556"}, EvntGrp_NoEvents_140);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(0, 34, 40, 11, 6, 2007)}, EvntGrp_NoEvents_140);
      set_field(noEvents_0_1_0, FIX::EventType{7}, EvntGrp_NoEvents_140);
      all_values.push_back(EvntGrp_NoEvents_140);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_129;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_941301090"}, InstrumentParties_NoInstrumentParties_129);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_129);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{23689807}, InstrumentParties_NoInstrumentParties_129);
      all_values.push_back(InstrumentParties_NoInstrumentParties_129);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_716012074"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1355251729}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_265);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_142;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_1773979211"}, SecAltIDGrp_NoSecurityAltID_142);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1858642784"}, SecAltIDGrp_NoSecurityAltID_142);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_142);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_136;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_1436365710"}, SecurityXML_136);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{1512634837}, SecurityXML_136);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_1937167491"}, SecurityXML_136);
    all_values.push_back(SecurityXML_136);
    all_compo_names.insert("...NoRelatedSym..");

    // OrderQtyData
    multiset<string> OrderQtyData_21;
    FIX::CashOrderQty CashOrderQty_21;
    CashOrderQty_21.setString("9460956");
set_field(noRelatedSym_0_0, CashOrderQty_21, OrderQtyData_21);
    FIX::OrderPercent OrderPercent_21;
    OrderPercent_21.setString("72.530000");
set_field(noRelatedSym_0_0, OrderPercent_21, OrderQtyData_21);
    FIX::OrderQty OrderQty_30;
    OrderQty_30.setString("16901718");
set_field(noRelatedSym_0_0, OrderQty_30, OrderQtyData_21);
    set_field(noRelatedSym_0_0, FIX::RoundingDirection{'0'}, OrderQtyData_21);
    FIX::RoundingModulus RoundingModulus_21;
    RoundingModulus_21.setString("20231488");
set_field(noRelatedSym_0_0, RoundingModulus_21, OrderQtyData_21);
    all_values.push_back(OrderQtyData_21);
    all_compo_names.insert("...NoRelatedSym.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_113;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_1728533989"}, Parties_NoPartyIDs_113);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'C'}, Parties_NoPartyIDs_113);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{38}, Parties_NoPartyIDs_113);
      all_values.push_back(Parties_NoPartyIDs_113);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_225;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_1628923370"}, PtysSubGrp_NoPartySubIDs_225);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_225);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_225);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_226;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_2065577391"}, PtysSubGrp_NoPartySubIDs_226);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_226);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_226);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_227;
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubID{"STRING_1670243080"}, PtysSubGrp_NoPartySubIDs_227);
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_227);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_227);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_114;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_797901365"}, Parties_NoPartyIDs_114);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'G'}, Parties_NoPartyIDs_114);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{65}, Parties_NoPartyIDs_114);
      all_values.push_back(Parties_NoPartyIDs_114);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_228;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_677007069"}, PtysSubGrp_NoPartySubIDs_228);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{21}, PtysSubGrp_NoPartySubIDs_228);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_228);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_3;
      set_field(noQuoteQualifiers_0_1_0, FIX::QuoteQualifier{'1'}, QuotQualGrp_NoQuoteQualifiers_3);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_3);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_1;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_4;
      set_field(noQuoteQualifiers_0_1_1, FIX::QuoteQualifier{'9'}, QuotQualGrp_NoQuoteQualifiers_4);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_4);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_1);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_0;
      FIX::LegOrderQty LegOrderQty_8;
      LegOrderQty_8.setString("10195147");
set_field(noLegs_0_1_0, LegOrderQty_8, QuotReqLegsGrp_NoLegs_0);
      FIX::LegQty LegQty_8;
      LegQty_8.setString("6914704");
set_field(noLegs_0_1_0, LegQty_8, QuotReqLegsGrp_NoLegs_0);
      set_field(noLegs_0_1_0, FIX::LegRefID{"STRING_1288327668"}, QuotReqLegsGrp_NoLegs_0);
      set_field(noLegs_0_1_0, FIX::LegSettlDate{"LOCALMKTDATE_384665895"}, QuotReqLegsGrp_NoLegs_0);
      set_field(noLegs_0_1_0, FIX::LegSettlType{'4'}, QuotReqLegsGrp_NoLegs_0);
      set_field(noLegs_0_1_0, FIX::LegSwapType{5}, QuotReqLegsGrp_NoLegs_0);
      all_values.push_back(QuotReqLegsGrp_NoLegs_0);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_96;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_22839501"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{23842511}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_2034157042"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{2045988396}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_93582567"}, InstrumentLeg_96);
      FIX::LegContractMultiplier LegContractMultiplier_96;
      LegContractMultiplier_96.setString("16152073");
set_field(noLegs_0_1_0, LegContractMultiplier_96, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{1358610994}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1538289111"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_1757275281"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_840050716"}, InstrumentLeg_96);
      FIX::LegCouponRate LegCouponRate_96;
      LegCouponRate_96.setString("15.520000");
set_field(noLegs_0_1_0, LegCouponRate_96, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_1675369024"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_560005281"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{1287311204}, InstrumentLeg_96);
      FIX::LegFactor LegFactor_96;
      LegFactor_96.setString("16665483");
set_field(noLegs_0_1_0, LegFactor_96, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{161375068}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_879030012"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_196071723"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1933918311"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_271982874"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_1589090866"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_766745987"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_123944832"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_461121924"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_96);
      FIX::LegOptionRatio LegOptionRatio_96;
      LegOptionRatio_96.setString("14122725");
set_field(noLegs_0_1_0, LegOptionRatio_96, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_845787820"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_1939370751"}, InstrumentLeg_96);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_96;
      LegPriceUnitOfMeasureQty_96.setString("14992122");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_96, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegProduct{868627321}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{1963213262}, InstrumentLeg_96);
      FIX::LegRatioQty LegRatioQty_96;
      LegRatioQty_96.setString("13858856");
set_field(noLegs_0_1_0, LegRatioQty_96, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_767132069"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_2056795829"}, InstrumentLeg_96);
      FIX::LegRepurchaseRate LegRepurchaseRate_96;
      LegRepurchaseRate_96.setString("93.450000");
set_field(noLegs_0_1_0, LegRepurchaseRate_96, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{2125743063}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_1447601293"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_463400978"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_818310131"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_243509197"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_2138770003"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_1307719970"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegSide{'7'}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_551291636"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_96);
      FIX::LegStrikePrice LegStrikePrice_96;
      LegStrikePrice_96.setString("7126667");
set_field(noLegs_0_1_0, LegStrikePrice_96, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_1326577539"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_424796559"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_499101368"}, InstrumentLeg_96);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_1598560413"}, InstrumentLeg_96);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_96;
      LegUnitOfMeasureQty_96.setString("20138874");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_96, InstrumentLeg_96);
      all_values.push_back(InstrumentLeg_96);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_191;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_1722505245"}, LegSecAltIDGrp_NoLegSecurityAltID_191);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_327525702"}, LegSecAltIDGrp_NoLegSecurityAltID_191);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_191);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_192;
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltID{"STRING_576580155"}, LegSecAltIDGrp_NoLegSecurityAltID_192);
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltIDSource{"STRING_987294098"}, LegSecAltIDGrp_NoLegSecurityAltID_192);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_192);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_2;
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveCurrency{"CAN"}, LegBenchmarkCurveData_2);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveName{"STRING_339022666"}, LegBenchmarkCurveData_2);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurvePoint{"STRING_2041940843"}, LegBenchmarkCurveData_2);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_2;
      LegBenchmarkPrice_2.setString("1841968");
set_field(noLegs_0_1_0, LegBenchmarkPrice_2, LegBenchmarkCurveData_2);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkPriceType{1724908276}, LegBenchmarkCurveData_2);
      all_values.push_back(LegBenchmarkCurveData_2);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_19;
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationType{"STRING_93509055"}, LegStipulations_NoLegStipulations_19);
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationValue{"STRING_431033973"}, LegStipulations_NoLegStipulations_19);
        all_values.push_back(LegStipulations_NoLegStipulations_19);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_20;
        set_field(noLegStipulations_0_0_2_1, FIX::LegStipulationType{"STRING_639848679"}, LegStipulations_NoLegStipulations_20);
        set_field(noLegStipulations_0_0_2_1, FIX::LegStipulationValue{"STRING_1541110348"}, LegStipulations_NoLegStipulations_20);
        all_values.push_back(LegStipulations_NoLegStipulations_20);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_21;
        set_field(noLegStipulations_0_0_2_2, FIX::LegStipulationType{"STRING_894434952"}, LegStipulations_NoLegStipulations_21);
        set_field(noLegStipulations_0_0_2_2, FIX::LegStipulationValue{"STRING_1458158810"}, LegStipulations_NoLegStipulations_21);
        all_values.push_back(LegStipulations_NoLegStipulations_21);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_113;
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyID{"STRING_885721307"}, NestedParties_NoNestedPartyIDs_113);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_113);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyRole{346796078}, NestedParties_NoNestedPartyIDs_113);
        all_values.push_back(NestedParties_NoNestedPartyIDs_113);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_233;
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubID{"STRING_1065942660"}, NstdPtysSubGrp_NoNestedPartySubIDs_233);
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubIDType{575520913}, NstdPtysSubGrp_NoNestedPartySubIDs_233);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_233);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_234;
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubID{"STRING_2195999"}, NstdPtysSubGrp_NoNestedPartySubIDs_234);
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubIDType{245036551}, NstdPtysSubGrp_NoNestedPartySubIDs_234);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_234);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_114;
        set_field(noNestedPartyIDs_0_0_2_1, FIX::NestedPartyID{"STRING_1000317472"}, NestedParties_NoNestedPartyIDs_114);
        set_field(noNestedPartyIDs_0_0_2_1, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_114);
        set_field(noNestedPartyIDs_0_0_2_1, FIX::NestedPartyRole{1843596965}, NestedParties_NoNestedPartyIDs_114);
        all_values.push_back(NestedParties_NoNestedPartyIDs_114);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_235;
          set_field(noNestedPartySubIDs_0_0_1_3_0, FIX::NestedPartySubID{"STRING_1767144723"}, NstdPtysSubGrp_NoNestedPartySubIDs_235);
          set_field(noNestedPartySubIDs_0_0_1_3_0, FIX::NestedPartySubIDType{1418618562}, NstdPtysSubGrp_NoNestedPartySubIDs_235);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_235);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_236;
          set_field(noNestedPartySubIDs_0_0_1_3_1, FIX::NestedPartySubID{"STRING_1194246952"}, NstdPtysSubGrp_NoNestedPartySubIDs_236);
          set_field(noNestedPartySubIDs_0_0_1_3_1, FIX::NestedPartySubIDType{196241230}, NstdPtysSubGrp_NoNestedPartySubIDs_236);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_236);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_1);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_115;
        set_field(noNestedPartyIDs_0_0_2_2, FIX::NestedPartyID{"STRING_258429012"}, NestedParties_NoNestedPartyIDs_115);
        set_field(noNestedPartyIDs_0_0_2_2, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_115);
        set_field(noNestedPartyIDs_0_0_2_2, FIX::NestedPartyRole{564708489}, NestedParties_NoNestedPartyIDs_115);
        all_values.push_back(NestedParties_NoNestedPartyIDs_115);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_237;
          set_field(noNestedPartySubIDs_0_0_2_3_0, FIX::NestedPartySubID{"STRING_114534021"}, NstdPtysSubGrp_NoNestedPartySubIDs_237);
          set_field(noNestedPartySubIDs_0_0_2_3_0, FIX::NestedPartySubIDType{748905363}, NstdPtysSubGrp_NoNestedPartySubIDs_237);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_237);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_2.addGroup(noNestedPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_238;
          set_field(noNestedPartySubIDs_0_0_2_3_1, FIX::NestedPartySubID{"STRING_174876306"}, NstdPtysSubGrp_NoNestedPartySubIDs_238);
          set_field(noNestedPartySubIDs_0_0_2_3_1, FIX::NestedPartySubIDType{776123285}, NstdPtysSubGrp_NoNestedPartySubIDs_238);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_238);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_2.addGroup(noNestedPartySubIDs_0_0_2_3_1);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_0_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_1;
      FIX::LegOrderQty LegOrderQty_9;
      LegOrderQty_9.setString("8424144");
set_field(noLegs_0_1_1, LegOrderQty_9, QuotReqLegsGrp_NoLegs_1);
      FIX::LegQty LegQty_9;
      LegQty_9.setString("6059102");
set_field(noLegs_0_1_1, LegQty_9, QuotReqLegsGrp_NoLegs_1);
      set_field(noLegs_0_1_1, FIX::LegRefID{"STRING_1415971964"}, QuotReqLegsGrp_NoLegs_1);
      set_field(noLegs_0_1_1, FIX::LegSettlDate{"LOCALMKTDATE_236041118"}, QuotReqLegsGrp_NoLegs_1);
      set_field(noLegs_0_1_1, FIX::LegSettlType{'1'}, QuotReqLegsGrp_NoLegs_1);
      set_field(noLegs_0_1_1, FIX::LegSwapType{4}, QuotReqLegsGrp_NoLegs_1);
      all_values.push_back(QuotReqLegsGrp_NoLegs_1);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_97;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_2020660663"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{238582891}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_1345042259"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{219973093}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_1675595834"}, InstrumentLeg_97);
      FIX::LegContractMultiplier LegContractMultiplier_97;
      LegContractMultiplier_97.setString("2635012");
set_field(noLegs_0_1_1, LegContractMultiplier_97, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{795494006}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_1677791833"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_508537823"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1795811479"}, InstrumentLeg_97);
      FIX::LegCouponRate LegCouponRate_97;
      LegCouponRate_97.setString("55.530000");
set_field(noLegs_0_1_1, LegCouponRate_97, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_204651140"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_1623269702"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{1709296033}, InstrumentLeg_97);
      FIX::LegFactor LegFactor_97;
      LegFactor_97.setString("19949915");
set_field(noLegs_0_1_1, LegFactor_97, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{1881698715}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_1929372859"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_412216348"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_331666745"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_2043906880"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_1161121711"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_506543052"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_672546517"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_2003536129"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_97);
      FIX::LegOptionRatio LegOptionRatio_97;
      LegOptionRatio_97.setString("20885184");
set_field(noLegs_0_1_1, LegOptionRatio_97, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_92093599"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_465314916"}, InstrumentLeg_97);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_97;
      LegPriceUnitOfMeasureQty_97.setString("6676819");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_97, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegProduct{2112754262}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{703897807}, InstrumentLeg_97);
      FIX::LegRatioQty LegRatioQty_97;
      LegRatioQty_97.setString("20127242");
set_field(noLegs_0_1_1, LegRatioQty_97, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_185243707"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_232009993"}, InstrumentLeg_97);
      FIX::LegRepurchaseRate LegRepurchaseRate_97;
      LegRepurchaseRate_97.setString("18.420000");
set_field(noLegs_0_1_1, LegRepurchaseRate_97, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{980737713}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_1909801826"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_637279665"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_629065544"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_1941407379"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_841930805"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_1144114625"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegSide{'1'}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_317716860"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_97);
      FIX::LegStrikePrice LegStrikePrice_97;
      LegStrikePrice_97.setString("519319");
set_field(noLegs_0_1_1, LegStrikePrice_97, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_487816221"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_1852398214"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_383598672"}, InstrumentLeg_97);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_384239453"}, InstrumentLeg_97);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_97;
      LegUnitOfMeasureQty_97.setString("8660362");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_97, InstrumentLeg_97);
      all_values.push_back(InstrumentLeg_97);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_193;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_1056785970"}, LegSecAltIDGrp_NoLegSecurityAltID_193);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_722088758"}, LegSecAltIDGrp_NoLegSecurityAltID_193);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_193);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_3;
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurveCurrency{"EUR"}, LegBenchmarkCurveData_3);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurveName{"STRING_814182357"}, LegBenchmarkCurveData_3);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurvePoint{"STRING_320426324"}, LegBenchmarkCurveData_3);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_3;
      LegBenchmarkPrice_3.setString("16655027");
set_field(noLegs_0_1_1, LegBenchmarkPrice_3, LegBenchmarkCurveData_3);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkPriceType{779452971}, LegBenchmarkCurveData_3);
      all_values.push_back(LegBenchmarkCurveData_3);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_22;
        set_field(noLegStipulations_0_1_2_0, FIX::LegStipulationType{"STRING_1530743334"}, LegStipulations_NoLegStipulations_22);
        set_field(noLegStipulations_0_1_2_0, FIX::LegStipulationValue{"STRING_964696678"}, LegStipulations_NoLegStipulations_22);
        all_values.push_back(LegStipulations_NoLegStipulations_22);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_116;
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyID{"STRING_1659485176"}, NestedParties_NoNestedPartyIDs_116);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_116);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyRole{1018652303}, NestedParties_NoNestedPartyIDs_116);
        all_values.push_back(NestedParties_NoNestedPartyIDs_116);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_239;
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubID{"STRING_427016288"}, NstdPtysSubGrp_NoNestedPartySubIDs_239);
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubIDType{812576034}, NstdPtysSubGrp_NoNestedPartySubIDs_239);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_239);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_117;
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyID{"STRING_991211999"}, NestedParties_NoNestedPartyIDs_117);
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_117);
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyRole{257766394}, NestedParties_NoNestedPartyIDs_117);
        all_values.push_back(NestedParties_NoNestedPartyIDs_117);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_240;
          set_field(noNestedPartySubIDs_0_1_1_3_0, FIX::NestedPartySubID{"STRING_129574276"}, NstdPtysSubGrp_NoNestedPartySubIDs_240);
          set_field(noNestedPartySubIDs_0_1_1_3_0, FIX::NestedPartySubIDType{1697948260}, NstdPtysSubGrp_NoNestedPartySubIDs_240);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_240);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_241;
          set_field(noNestedPartySubIDs_0_1_1_3_1, FIX::NestedPartySubID{"STRING_1360860786"}, NstdPtysSubGrp_NoNestedPartySubIDs_241);
          set_field(noNestedPartySubIDs_0_1_1_3_1, FIX::NestedPartySubIDType{617390497}, NstdPtysSubGrp_NoNestedPartySubIDs_241);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_241);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_242;
          set_field(noNestedPartySubIDs_0_1_1_3_2, FIX::NestedPartySubID{"STRING_1402862826"}, NstdPtysSubGrp_NoNestedPartySubIDs_242);
          set_field(noNestedPartySubIDs_0_1_1_3_2, FIX::NestedPartySubIDType{1744459459}, NstdPtysSubGrp_NoNestedPartySubIDs_242);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_242);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_2);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_0_1_2;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_2;
      FIX::LegOrderQty LegOrderQty_10;
      LegOrderQty_10.setString("10016299");
set_field(noLegs_0_1_2, LegOrderQty_10, QuotReqLegsGrp_NoLegs_2);
      FIX::LegQty LegQty_10;
      LegQty_10.setString("1214154");
set_field(noLegs_0_1_2, LegQty_10, QuotReqLegsGrp_NoLegs_2);
      set_field(noLegs_0_1_2, FIX::LegRefID{"STRING_487117535"}, QuotReqLegsGrp_NoLegs_2);
      set_field(noLegs_0_1_2, FIX::LegSettlDate{"LOCALMKTDATE_2058415921"}, QuotReqLegsGrp_NoLegs_2);
      set_field(noLegs_0_1_2, FIX::LegSettlType{'8'}, QuotReqLegsGrp_NoLegs_2);
      set_field(noLegs_0_1_2, FIX::LegSwapType{1}, QuotReqLegsGrp_NoLegs_2);
      all_values.push_back(QuotReqLegsGrp_NoLegs_2);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_98;
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuer{"DATA_908753077"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuerLen{1657686570}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDesc{"DATA_662655268"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDescLen{426772192}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegCFICode{"STRING_289655893"}, InstrumentLeg_98);
      FIX::LegContractMultiplier LegContractMultiplier_98;
      LegContractMultiplier_98.setString("16869794");
set_field(noLegs_0_1_2, LegContractMultiplier_98, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegContractMultiplierUnit{1957515526}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegContractSettlMonth{"MONTHYEAR_1254352571"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegCountryOfIssue{"COUNTRY_795829876"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1469517054"}, InstrumentLeg_98);
      FIX::LegCouponRate LegCouponRate_98;
      LegCouponRate_98.setString("33.140000");
set_field(noLegs_0_1_2, LegCouponRate_98, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegCreditRating{"STRING_1814482179"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegCurrency{"USD"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegDatedDate{"LOCALMKTDATE_479574566"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegExerciseStyle{462526600}, InstrumentLeg_98);
      FIX::LegFactor LegFactor_98;
      LegFactor_98.setString("9029668");
set_field(noLegs_0_1_2, LegFactor_98, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegFlowScheduleType{737340960}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegInstrRegistry{"STRING_1771455459"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1032541144"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegIssueDate{"LOCALMKTDATE_287805572"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegIssuer{"STRING_984832598"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegLocaleOfIssue{"STRING_1649931641"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegMaturityDate{"LOCALMKTDATE_1690668398"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegMaturityMonthYear{"MONTHYEAR_581808409"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegMaturityTime{"TZTIMEONLY_504077944"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_98);
      FIX::LegOptionRatio LegOptionRatio_98;
      LegOptionRatio_98.setString("10689259");
set_field(noLegs_0_1_2, LegOptionRatio_98, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegPool{"STRING_415010218"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegPriceUnitOfMeasure{"STRING_508104418"}, InstrumentLeg_98);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_98;
      LegPriceUnitOfMeasureQty_98.setString("14111548");
set_field(noLegs_0_1_2, LegPriceUnitOfMeasureQty_98, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegProduct{1323763295}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegPutOrCall{18307340}, InstrumentLeg_98);
      FIX::LegRatioQty LegRatioQty_98;
      LegRatioQty_98.setString("20738101");
set_field(noLegs_0_1_2, LegRatioQty_98, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1750535487"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegRepoCollateralSecurityType{"STRING_307963233"}, InstrumentLeg_98);
      FIX::LegRepurchaseRate LegRepurchaseRate_98;
      LegRepurchaseRate_98.setString("59.090000");
set_field(noLegs_0_1_2, LegRepurchaseRate_98, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegRepurchaseTerm{1560567365}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegSecurityDesc{"STRING_1562315804"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegSecurityExchange{"EXCHANGE_261652137"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegSecurityID{"STRING_882600771"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegSecurityIDSource{"STRING_467135470"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegSecuritySubType{"STRING_2076134317"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegSecurityType{"STRING_353915372"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegSide{'1'}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegStateOrProvinceOfIssue{"STRING_408225235"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_98);
      FIX::LegStrikePrice LegStrikePrice_98;
      LegStrikePrice_98.setString("11455661");
set_field(noLegs_0_1_2, LegStrikePrice_98, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegSymbol{"STRING_440413783"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegSymbolSfx{"STRING_1734479437"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegTimeUnit{"STRING_1433371767"}, InstrumentLeg_98);
      set_field(noLegs_0_1_2, FIX::LegUnitOfMeasure{"STRING_1425246381"}, InstrumentLeg_98);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_98;
      LegUnitOfMeasureQty_98.setString("12369274");
set_field(noLegs_0_1_2, LegUnitOfMeasureQty_98, InstrumentLeg_98);
      all_values.push_back(InstrumentLeg_98);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_194;
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltID{"STRING_2007054790"}, LegSecAltIDGrp_NoLegSecurityAltID_194);
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltIDSource{"STRING_1741005375"}, LegSecAltIDGrp_NoLegSecurityAltID_194);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_194);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_4;
      set_field(noLegs_0_1_2, FIX::LegBenchmarkCurveCurrency{"CHF"}, LegBenchmarkCurveData_4);
      set_field(noLegs_0_1_2, FIX::LegBenchmarkCurveName{"STRING_8531945"}, LegBenchmarkCurveData_4);
      set_field(noLegs_0_1_2, FIX::LegBenchmarkCurvePoint{"STRING_1149261140"}, LegBenchmarkCurveData_4);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_4;
      LegBenchmarkPrice_4.setString("1921683");
set_field(noLegs_0_1_2, LegBenchmarkPrice_4, LegBenchmarkCurveData_4);
      set_field(noLegs_0_1_2, FIX::LegBenchmarkPriceType{1332295240}, LegBenchmarkCurveData_4);
      all_values.push_back(LegBenchmarkCurveData_4);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_23;
        set_field(noLegStipulations_0_2_2_0, FIX::LegStipulationType{"STRING_118494836"}, LegStipulations_NoLegStipulations_23);
        set_field(noLegStipulations_0_2_2_0, FIX::LegStipulationValue{"STRING_935347079"}, LegStipulations_NoLegStipulations_23);
        all_values.push_back(LegStipulations_NoLegStipulations_23);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_24;
        set_field(noLegStipulations_0_2_2_1, FIX::LegStipulationType{"STRING_1475531713"}, LegStipulations_NoLegStipulations_24);
        set_field(noLegStipulations_0_2_2_1, FIX::LegStipulationValue{"STRING_1731800745"}, LegStipulations_NoLegStipulations_24);
        all_values.push_back(LegStipulations_NoLegStipulations_24);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_118;
        set_field(noNestedPartyIDs_0_2_2_0, FIX::NestedPartyID{"STRING_890363869"}, NestedParties_NoNestedPartyIDs_118);
        set_field(noNestedPartyIDs_0_2_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_118);
        set_field(noNestedPartyIDs_0_2_2_0, FIX::NestedPartyRole{1231031567}, NestedParties_NoNestedPartyIDs_118);
        all_values.push_back(NestedParties_NoNestedPartyIDs_118);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_243;
          set_field(noNestedPartySubIDs_0_2_0_3_0, FIX::NestedPartySubID{"STRING_1922103552"}, NstdPtysSubGrp_NoNestedPartySubIDs_243);
          set_field(noNestedPartySubIDs_0_2_0_3_0, FIX::NestedPartySubIDType{1584946939}, NstdPtysSubGrp_NoNestedPartySubIDs_243);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_243);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_244;
          set_field(noNestedPartySubIDs_0_2_0_3_1, FIX::NestedPartySubID{"STRING_1156470764"}, NstdPtysSubGrp_NoNestedPartySubIDs_244);
          set_field(noNestedPartySubIDs_0_2_0_3_1, FIX::NestedPartySubIDType{182845139}, NstdPtysSubGrp_NoNestedPartySubIDs_244);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_244);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_245;
          set_field(noNestedPartySubIDs_0_2_0_3_2, FIX::NestedPartySubID{"STRING_253905263"}, NstdPtysSubGrp_NoNestedPartySubIDs_245);
          set_field(noNestedPartySubIDs_0_2_0_3_2, FIX::NestedPartySubIDType{1858409057}, NstdPtysSubGrp_NoNestedPartySubIDs_245);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_245);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_2);
        }
        noLegs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_119;
        set_field(noNestedPartyIDs_0_2_2_1, FIX::NestedPartyID{"STRING_1328411334"}, NestedParties_NoNestedPartyIDs_119);
        set_field(noNestedPartyIDs_0_2_2_1, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_119);
        set_field(noNestedPartyIDs_0_2_2_1, FIX::NestedPartyRole{1445404846}, NestedParties_NoNestedPartyIDs_119);
        all_values.push_back(NestedParties_NoNestedPartyIDs_119);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_246;
          set_field(noNestedPartySubIDs_0_2_1_3_0, FIX::NestedPartySubID{"STRING_2119565428"}, NstdPtysSubGrp_NoNestedPartySubIDs_246);
          set_field(noNestedPartySubIDs_0_2_1_3_0, FIX::NestedPartySubIDType{534848629}, NstdPtysSubGrp_NoNestedPartySubIDs_246);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_246);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_247;
          set_field(noNestedPartySubIDs_0_2_1_3_1, FIX::NestedPartySubID{"STRING_1590855970"}, NstdPtysSubGrp_NoNestedPartySubIDs_247);
          set_field(noNestedPartySubIDs_0_2_1_3_1, FIX::NestedPartySubIDType{1979136571}, NstdPtysSubGrp_NoNestedPartySubIDs_247);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_247);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_1);
        }
        noLegs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_120;
        set_field(noNestedPartyIDs_0_2_2_2, FIX::NestedPartyID{"STRING_128370356"}, NestedParties_NoNestedPartyIDs_120);
        set_field(noNestedPartyIDs_0_2_2_2, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_120);
        set_field(noNestedPartyIDs_0_2_2_2, FIX::NestedPartyRole{760150010}, NestedParties_NoNestedPartyIDs_120);
        all_values.push_back(NestedParties_NoNestedPartyIDs_120);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_248;
          set_field(noNestedPartySubIDs_0_2_2_3_0, FIX::NestedPartySubID{"STRING_1233790184"}, NstdPtysSubGrp_NoNestedPartySubIDs_248);
          set_field(noNestedPartySubIDs_0_2_2_3_0, FIX::NestedPartySubIDType{952318337}, NstdPtysSubGrp_NoNestedPartySubIDs_248);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_248);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_2.addGroup(noNestedPartySubIDs_0_2_2_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_249;
          set_field(noNestedPartySubIDs_0_2_2_3_1, FIX::NestedPartySubID{"STRING_1469197541"}, NstdPtysSubGrp_NoNestedPartySubIDs_249);
          set_field(noNestedPartySubIDs_0_2_2_3_1, FIX::NestedPartySubIDType{253875016}, NstdPtysSubGrp_NoNestedPartySubIDs_249);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_249);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_2.addGroup(noNestedPartySubIDs_0_2_2_3_1);
        }
        noLegs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_21;
      set_field(noRateSources_0_1_0, FIX::RateSource{0}, RateSource_NoRateSources_21);
      set_field(noRateSources_0_1_0, FIX::RateSourceType{1}, RateSource_NoRateSources_21);
      set_field(noRateSources_0_1_0, FIX::ReferencePage{"STRING_655130271"}, RateSource_NoRateSources_21);
      all_values.push_back(RateSource_NoRateSources_21);
      all_compo_names.insert("...NoRelatedSym...NoRateSources");

      noRelatedSym_0_0.addGroup(noRateSources_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_0_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_22;
      set_field(noRateSources_0_1_1, FIX::RateSource{0}, RateSource_NoRateSources_22);
      set_field(noRateSources_0_1_1, FIX::RateSourceType{0}, RateSource_NoRateSources_22);
      set_field(noRateSources_0_1_1, FIX::ReferencePage{"STRING_501099506"}, RateSource_NoRateSources_22);
      all_values.push_back(RateSource_NoRateSources_22);
      all_compo_names.insert("...NoRelatedSym...NoRateSources");

      noRelatedSym_0_0.addGroup(noRateSources_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_0_1_2;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_23;
      set_field(noRateSources_0_1_2, FIX::RateSource{99}, RateSource_NoRateSources_23);
      set_field(noRateSources_0_1_2, FIX::RateSourceType{1}, RateSource_NoRateSources_23);
      set_field(noRateSources_0_1_2, FIX::ReferencePage{"STRING_275719410"}, RateSource_NoRateSources_23);
      all_values.push_back(RateSource_NoRateSources_23);
      all_compo_names.insert("...NoRelatedSym...NoRateSources");

      noRelatedSym_0_0.addGroup(noRateSources_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_24;
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveCurrency{"JPY"}, SpreadOrBenchmarkCurveData_24);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveName{"STRING_LIBOR"}, SpreadOrBenchmarkCurveData_24);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurvePoint{"STRING_1527891890"}, SpreadOrBenchmarkCurveData_24);
    FIX::BenchmarkPrice BenchmarkPrice_24;
    BenchmarkPrice_24.setString("5496988");
set_field(noRelatedSym_0_0, BenchmarkPrice_24, SpreadOrBenchmarkCurveData_24);
    set_field(noRelatedSym_0_0, FIX::BenchmarkPriceType{1786975883}, SpreadOrBenchmarkCurveData_24);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityID{"STRING_74727289"}, SpreadOrBenchmarkCurveData_24);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityIDSource{"STRING_1995103662"}, SpreadOrBenchmarkCurveData_24);
    FIX::Spread Spread_24;
    Spread_24.setString("2537916");
set_field(noRelatedSym_0_0, Spread_24, SpreadOrBenchmarkCurveData_24);
    all_values.push_back(SpreadOrBenchmarkCurveData_24);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_39;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_BGNCON"}, Stipulations_NoStipulations_39);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_1844647658"}, Stipulations_NoStipulations_39);
      all_values.push_back(Stipulations_NoStipulations_39);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_40;
      set_field(noStipulations_0_1_1, FIX::StipulationType{"STRING_SUBSLEFT"}, Stipulations_NoStipulations_40);
      set_field(noStipulations_0_1_1, FIX::StipulationValue{"STRING_510838999"}, Stipulations_NoStipulations_40);
      all_values.push_back(Stipulations_NoStipulations_40);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_96;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_638612003"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{647741300}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1015483238"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{1590930340}, UnderlyingInstrument_96);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_96;
      UnderlyingAdjustedQuantity_96.setString("21169388");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_96, UnderlyingInstrument_96);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_96;
      UnderlyingAllocationPercent_96.setString("82.540000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_96, UnderlyingInstrument_96);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_96;
      UnderlyingAttachmentPoint_96.setString("98.660000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_226516165"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_851281335"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_1169390138"}, UnderlyingInstrument_96);
      FIX::UnderlyingCapValue UnderlyingCapValue_96;
      UnderlyingCapValue_96.setString("8320079");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_96, UnderlyingInstrument_96);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_96;
      UnderlyingCashAmount_96.setString("13235682");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_96);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_96;
      UnderlyingContractMultiplier_96.setString("5210476");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{1005870927}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1946209055"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1795034247"}, UnderlyingInstrument_96);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_96;
      UnderlyingCouponRate_96.setString("43.330000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_257289956"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_96);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_96;
      UnderlyingCurrentValue_96.setString("20442658");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_96, UnderlyingInstrument_96);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_96;
      UnderlyingDetachmentPoint_96.setString("97.790000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_96, UnderlyingInstrument_96);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_96;
      UnderlyingDirtyPrice_96.setString("944795");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_96, UnderlyingInstrument_96);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_96;
      UnderlyingEndPrice_96.setString("1505738");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_96, UnderlyingInstrument_96);
      FIX::UnderlyingEndValue UnderlyingEndValue_96;
      UnderlyingEndValue_96.setString("12969788");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{476948157}, UnderlyingInstrument_96);
      FIX::UnderlyingFXRate UnderlyingFXRate_96;
      UnderlyingFXRate_96.setString("19952215");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_96);
      FIX::UnderlyingFactor UnderlyingFactor_96;
      UnderlyingFactor_96.setString("9877871");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{1776914593}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_1814052845"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1635528456"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_644914184"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_1257499538"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1604983649"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1914272438"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1771759404"}, UnderlyingInstrument_96);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_96;
      UnderlyingNotionalPercentageOutstanding_96.setString("98.140000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'6'}, UnderlyingInstrument_96);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_96;
      UnderlyingOriginalNotionalPercentageOutstanding_96.setString("58.940000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_516024099"}, UnderlyingInstrument_96);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_96;
      UnderlyingPriceUnitOfMeasureQty_96.setString("19416384");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{316671891}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{1037071720}, UnderlyingInstrument_96);
      FIX::UnderlyingPx UnderlyingPx_96;
      UnderlyingPx_96.setString("8000256");
set_field(noUnderlyings_0_1_0, UnderlyingPx_96, UnderlyingInstrument_96);
      FIX::UnderlyingQty UnderlyingQty_96;
      UnderlyingQty_96.setString("1153972");
set_field(noUnderlyings_0_1_0, UnderlyingQty_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_684622319"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_497186375"}, UnderlyingInstrument_96);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_96;
      UnderlyingRepurchaseRate_96.setString("72.540000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{1860064809}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_744045876"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_269469446"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_962750941"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_838525390"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_420043327"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_112246142"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_1315473548"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_267781218"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_1287686985"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_96);
      FIX::UnderlyingStartValue UnderlyingStartValue_96;
      UnderlyingStartValue_96.setString("20446958");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_954256182"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_96);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_96;
      UnderlyingStrikePrice_96.setString("642720");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_1248805514"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_308915138"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_1836031477"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_932821681"}, UnderlyingInstrument_96);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_96;
      UnderlyingUnitOfMeasureQty_96.setString("9269852");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_96, UnderlyingInstrument_96);
      all_values.push_back(UnderlyingInstrument_96);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_199;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1448845780"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_199);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_721140027"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_199);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_199);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_200;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_798885614"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_200);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_338433852"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_200);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_200);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_201;
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_1521165718"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_201);
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_914282912"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_201);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_201);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_190;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_2018352093"}, UnderlyingStipulations_NoUnderlyingStips_190);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_1286970167"}, UnderlyingStipulations_NoUnderlyingStips_190);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_190);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_209;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_614914321"}, UndlyInstrumentParties_NoUndlyInstrumentParties_209);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_209);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{1698388274}, UndlyInstrumentParties_NoUndlyInstrumentParties_209);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_209);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1976482940"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1810634417}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_416);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_210;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_621429612"}, UndlyInstrumentParties_NoUndlyInstrumentParties_210);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_210);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{950837754}, UndlyInstrumentParties_NoUndlyInstrumentParties_210);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_210);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2141476322"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1905093936}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_417);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_421028533"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{536119021}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_418);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_97;
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1969366009"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuerLen{1669834048}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_845034159"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDescLen{1657913838}, UnderlyingInstrument_97);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_97;
      UnderlyingAdjustedQuantity_97.setString("4551720");
set_field(noUnderlyings_0_1_1, UnderlyingAdjustedQuantity_97, UnderlyingInstrument_97);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_97;
      UnderlyingAllocationPercent_97.setString("94.230000");
set_field(noUnderlyings_0_1_1, UnderlyingAllocationPercent_97, UnderlyingInstrument_97);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_97;
      UnderlyingAttachmentPoint_97.setString("75.610000");
set_field(noUnderlyings_0_1_1, UnderlyingAttachmentPoint_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCFICode{"STRING_1904017861"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPProgram{"STRING_345675803"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPRegType{"STRING_791529528"}, UnderlyingInstrument_97);
      FIX::UnderlyingCapValue UnderlyingCapValue_97;
      UnderlyingCapValue_97.setString("949680");
set_field(noUnderlyings_0_1_1, UnderlyingCapValue_97, UnderlyingInstrument_97);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_97;
      UnderlyingCashAmount_97.setString("18668415");
set_field(noUnderlyings_0_1_1, UnderlyingCashAmount_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_97);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_97;
      UnderlyingContractMultiplier_97.setString("11180242");
set_field(noUnderlyings_0_1_1, UnderlyingContractMultiplier_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingContractMultiplierUnit{1737709966}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_845298959"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1853661571"}, UnderlyingInstrument_97);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_97;
      UnderlyingCouponRate_97.setString("6.400000");
set_field(noUnderlyings_0_1_1, UnderlyingCouponRate_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCreditRating{"STRING_254254925"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_97);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_97;
      UnderlyingCurrentValue_97.setString("832542");
set_field(noUnderlyings_0_1_1, UnderlyingCurrentValue_97, UnderlyingInstrument_97);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_97;
      UnderlyingDetachmentPoint_97.setString("69.670000");
set_field(noUnderlyings_0_1_1, UnderlyingDetachmentPoint_97, UnderlyingInstrument_97);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_97;
      UnderlyingDirtyPrice_97.setString("1325263");
set_field(noUnderlyings_0_1_1, UnderlyingDirtyPrice_97, UnderlyingInstrument_97);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_97;
      UnderlyingEndPrice_97.setString("1800347");
set_field(noUnderlyings_0_1_1, UnderlyingEndPrice_97, UnderlyingInstrument_97);
      FIX::UnderlyingEndValue UnderlyingEndValue_97;
      UnderlyingEndValue_97.setString("20185547");
set_field(noUnderlyings_0_1_1, UnderlyingEndValue_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingExerciseStyle{909732984}, UnderlyingInstrument_97);
      FIX::UnderlyingFXRate UnderlyingFXRate_97;
      UnderlyingFXRate_97.setString("1740274");
set_field(noUnderlyings_0_1_1, UnderlyingFXRate_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_97);
      FIX::UnderlyingFactor UnderlyingFactor_97;
      UnderlyingFactor_97.setString("13307615");
set_field(noUnderlyings_0_1_1, UnderlyingFactor_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFlowScheduleType{710146423}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingInstrRegistry{"STRING_1598047370"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_853111918"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssuer{"STRING_1555180583"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_1108477560"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1308283999"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1179716358"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1101121474"}, UnderlyingInstrument_97);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_97;
      UnderlyingNotionalPercentageOutstanding_97.setString("82.120000");
set_field(noUnderlyings_0_1_1, UnderlyingNotionalPercentageOutstanding_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_97);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_97;
      UnderlyingOriginalNotionalPercentageOutstanding_97.setString("10.020000");
set_field(noUnderlyings_0_1_1, UnderlyingOriginalNotionalPercentageOutstanding_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1159786278"}, UnderlyingInstrument_97);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_97;
      UnderlyingPriceUnitOfMeasureQty_97.setString("12447500");
set_field(noUnderlyings_0_1_1, UnderlyingPriceUnitOfMeasureQty_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingProduct{1450979794}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPutOrCall{130326868}, UnderlyingInstrument_97);
      FIX::UnderlyingPx UnderlyingPx_97;
      UnderlyingPx_97.setString("8349763");
set_field(noUnderlyings_0_1_1, UnderlyingPx_97, UnderlyingInstrument_97);
      FIX::UnderlyingQty UnderlyingQty_97;
      UnderlyingQty_97.setString("1487951");
set_field(noUnderlyings_0_1_1, UnderlyingQty_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1983988440"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1040116993"}, UnderlyingInstrument_97);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_97;
      UnderlyingRepurchaseRate_97.setString("0.310000");
set_field(noUnderlyings_0_1_1, UnderlyingRepurchaseRate_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepurchaseTerm{1241070990}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRestructuringType{"STRING_551213697"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityDesc{"STRING_486304248"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_161304309"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityID{"STRING_683740013"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityIDSource{"STRING_666338976"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecuritySubType{"STRING_32375382"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityType{"STRING_1593472997"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSeniority{"STRING_840366378"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlMethod{"STRING_1808540391"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_97);
      FIX::UnderlyingStartValue UnderlyingStartValue_97;
      UnderlyingStartValue_97.setString("15505128");
set_field(noUnderlyings_0_1_1, UnderlyingStartValue_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1259104114"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_97);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_97;
      UnderlyingStrikePrice_97.setString("2200980");
set_field(noUnderlyings_0_1_1, UnderlyingStrikePrice_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbol{"STRING_790663136"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbolSfx{"STRING_2137926095"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingTimeUnit{"STRING_1321219500"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_1855481349"}, UnderlyingInstrument_97);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_97;
      UnderlyingUnitOfMeasureQty_97.setString("15158346");
set_field(noUnderlyings_0_1_1, UnderlyingUnitOfMeasureQty_97, UnderlyingInstrument_97);
      all_values.push_back(UnderlyingInstrument_97);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_202;
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_867783979"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_202);
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_613100995"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_202);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_202);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_203;
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_369883001"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_203);
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_998110848"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_203);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_203);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_204;
        set_field(noUnderlyingSecurityAltID_0_1_2_2, FIX::UnderlyingSecurityAltID{"STRING_1448077348"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_204);
        set_field(noUnderlyingSecurityAltID_0_1_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_518678107"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_204);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_204);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_191;
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipType{"STRING_340710693"}, UnderlyingStipulations_NoUnderlyingStips_191);
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipValue{"STRING_921728138"}, UnderlyingStipulations_NoUnderlyingStips_191);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_191);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_192;
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipType{"STRING_2075686630"}, UnderlyingStipulations_NoUnderlyingStips_192);
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipValue{"STRING_891924390"}, UnderlyingStipulations_NoUnderlyingStips_192);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_192);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_211;
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_89507291"}, UndlyInstrumentParties_NoUndlyInstrumentParties_211);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_211);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyRole{2074371363}, UndlyInstrumentParties_NoUndlyInstrumentParties_211);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_211);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1021653753"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{767254093}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_419);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1930423064"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1798404620}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_420);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_170283247"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{1042043530}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_421);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_212;
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1280783758"}, UndlyInstrumentParties_NoUndlyInstrumentParties_212);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_212);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyRole{1262141557}, UndlyInstrumentParties_NoUndlyInstrumentParties_212);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_212);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1118935432"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{435877409}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_422);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_213;
        set_field(noUndlyInstrumentParties_0_1_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_1779444595"}, UndlyInstrumentParties_NoUndlyInstrumentParties_213);
        set_field(noUndlyInstrumentParties_0_1_2_2, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_213);
        set_field(noUndlyInstrumentParties_0_1_2_2, FIX::UnderlyingInstrumentPartyRole{1502264264}, UndlyInstrumentParties_NoUndlyInstrumentParties_213);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_213);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423;
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1100387388"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423);
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1872147265}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_423);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424;
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1497855775"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424);
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{400981089}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_424);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_98;
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuer{"DATA_243341724"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuerLen{184987767}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_741691782"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDescLen{1165069862}, UnderlyingInstrument_98);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_98;
      UnderlyingAdjustedQuantity_98.setString("1131907");
set_field(noUnderlyings_0_1_2, UnderlyingAdjustedQuantity_98, UnderlyingInstrument_98);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_98;
      UnderlyingAllocationPercent_98.setString("61.730000");
set_field(noUnderlyings_0_1_2, UnderlyingAllocationPercent_98, UnderlyingInstrument_98);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_98;
      UnderlyingAttachmentPoint_98.setString("86.000000");
set_field(noUnderlyings_0_1_2, UnderlyingAttachmentPoint_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCFICode{"STRING_202698040"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPProgram{"STRING_1061796928"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPRegType{"STRING_352506315"}, UnderlyingInstrument_98);
      FIX::UnderlyingCapValue UnderlyingCapValue_98;
      UnderlyingCapValue_98.setString("3245807");
set_field(noUnderlyings_0_1_2, UnderlyingCapValue_98, UnderlyingInstrument_98);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_98;
      UnderlyingCashAmount_98.setString("20834506");
set_field(noUnderlyings_0_1_2, UnderlyingCashAmount_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_98);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_98;
      UnderlyingContractMultiplier_98.setString("1075201");
set_field(noUnderlyings_0_1_2, UnderlyingContractMultiplier_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingContractMultiplierUnit{1734371654}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1290043656"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1149563660"}, UnderlyingInstrument_98);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_98;
      UnderlyingCouponRate_98.setString("17.640000");
set_field(noUnderlyings_0_1_2, UnderlyingCouponRate_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCreditRating{"STRING_271052993"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_98);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_98;
      UnderlyingCurrentValue_98.setString("13899884");
set_field(noUnderlyings_0_1_2, UnderlyingCurrentValue_98, UnderlyingInstrument_98);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_98;
      UnderlyingDetachmentPoint_98.setString("89.780000");
set_field(noUnderlyings_0_1_2, UnderlyingDetachmentPoint_98, UnderlyingInstrument_98);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_98;
      UnderlyingDirtyPrice_98.setString("4235959");
set_field(noUnderlyings_0_1_2, UnderlyingDirtyPrice_98, UnderlyingInstrument_98);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_98;
      UnderlyingEndPrice_98.setString("18772748");
set_field(noUnderlyings_0_1_2, UnderlyingEndPrice_98, UnderlyingInstrument_98);
      FIX::UnderlyingEndValue UnderlyingEndValue_98;
      UnderlyingEndValue_98.setString("548795");
set_field(noUnderlyings_0_1_2, UnderlyingEndValue_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingExerciseStyle{923340885}, UnderlyingInstrument_98);
      FIX::UnderlyingFXRate UnderlyingFXRate_98;
      UnderlyingFXRate_98.setString("8301785");
set_field(noUnderlyings_0_1_2, UnderlyingFXRate_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_98);
      FIX::UnderlyingFactor UnderlyingFactor_98;
      UnderlyingFactor_98.setString("2737130");
set_field(noUnderlyings_0_1_2, UnderlyingFactor_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFlowScheduleType{1231159647}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingInstrRegistry{"STRING_22884935"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_458700779"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssuer{"STRING_1972851430"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_1187954797"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_571891528"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1458983955"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1613573398"}, UnderlyingInstrument_98);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_98;
      UnderlyingNotionalPercentageOutstanding_98.setString("95.680000");
set_field(noUnderlyings_0_1_2, UnderlyingNotionalPercentageOutstanding_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_98);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_98;
      UnderlyingOriginalNotionalPercentageOutstanding_98.setString("97.130000");
set_field(noUnderlyings_0_1_2, UnderlyingOriginalNotionalPercentageOutstanding_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1099170281"}, UnderlyingInstrument_98);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_98;
      UnderlyingPriceUnitOfMeasureQty_98.setString("3092642");
set_field(noUnderlyings_0_1_2, UnderlyingPriceUnitOfMeasureQty_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingProduct{938356474}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPutOrCall{1206690410}, UnderlyingInstrument_98);
      FIX::UnderlyingPx UnderlyingPx_98;
      UnderlyingPx_98.setString("20436359");
set_field(noUnderlyings_0_1_2, UnderlyingPx_98, UnderlyingInstrument_98);
      FIX::UnderlyingQty UnderlyingQty_98;
      UnderlyingQty_98.setString("809164");
set_field(noUnderlyings_0_1_2, UnderlyingQty_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_208770422"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_763824039"}, UnderlyingInstrument_98);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_98;
      UnderlyingRepurchaseRate_98.setString("94.760000");
set_field(noUnderlyings_0_1_2, UnderlyingRepurchaseRate_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepurchaseTerm{472991991}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRestructuringType{"STRING_1555459049"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityDesc{"STRING_1741957901"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1173090970"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityID{"STRING_1979055007"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityIDSource{"STRING_1471749071"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecuritySubType{"STRING_1227970564"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityType{"STRING_754912244"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSeniority{"STRING_154443981"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlMethod{"STRING_1007513776"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_98);
      FIX::UnderlyingStartValue UnderlyingStartValue_98;
      UnderlyingStartValue_98.setString("13856036");
set_field(noUnderlyings_0_1_2, UnderlyingStartValue_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1030398711"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_98);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_98;
      UnderlyingStrikePrice_98.setString("708698");
set_field(noUnderlyings_0_1_2, UnderlyingStrikePrice_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbol{"STRING_2059217563"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbolSfx{"STRING_522471718"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingTimeUnit{"STRING_1684443259"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_686323483"}, UnderlyingInstrument_98);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_98;
      UnderlyingUnitOfMeasureQty_98.setString("8957689");
set_field(noUnderlyings_0_1_2, UnderlyingUnitOfMeasureQty_98, UnderlyingInstrument_98);
      all_values.push_back(UnderlyingInstrument_98);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_205;
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_1785493764"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_205);
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1205033222"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_205);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_205);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_193;
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipType{"STRING_844700527"}, UnderlyingStipulations_NoUnderlyingStips_193);
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipValue{"STRING_1101185497"}, UnderlyingStipulations_NoUnderlyingStips_193);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_193);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_214;
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1053470949"}, UndlyInstrumentParties_NoUndlyInstrumentParties_214);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_214);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyRole{726798110}, UndlyInstrumentParties_NoUndlyInstrumentParties_214);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_214);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1272984938"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{321272363}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_425);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_552070263"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1104556297}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_426);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_1);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_2);
    }
    // YieldData
    multiset<string> YieldData_19;
    FIX::Yield Yield_19;
    Yield_19.setString("14.340000");
set_field(noRelatedSym_0_0, Yield_19, YieldData_19);
    set_field(noRelatedSym_0_0, FIX::YieldCalcDate{"LOCALMKTDATE_1780040827"}, YieldData_19);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionDate{"LOCALMKTDATE_1859468542"}, YieldData_19);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_19;
    YieldRedemptionPrice_19.setString("19474654");
set_field(noRelatedSym_0_0, YieldRedemptionPrice_19, YieldData_19);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionPriceType{640070955}, YieldData_19);
    set_field(noRelatedSym_0_0, FIX::YieldType{"STRING_LASTQUARTER"}, YieldData_19);
    all_values.push_back(YieldData_19);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_0);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::QuoteRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_7;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_1670469667"}, RootParties_NoRootPartyIDs_7);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'8'}, RootParties_NoRootPartyIDs_7);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{249073159}, RootParties_NoRootPartyIDs_7);
    all_values.push_back(RootParties_NoRootPartyIDs_7);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_12;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_2139670101"}, RootSubParties_NoRootPartySubIDs_12);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{771544877}, RootSubParties_NoRootPartySubIDs_12);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_12);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_13;
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubID{"STRING_1278299139"}, RootSubParties_NoRootPartySubIDs_13);
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubIDType{678509937}, RootSubParties_NoRootPartySubIDs_13);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_13);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // header
  multiset<string> header_70;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_1"}, header_70);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_633854815"}, header_70);
  set_header_field(msg.getHeader(), FIX::BodyLength{316520053}, header_70);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_724863405"}, header_70);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_927766966"}, header_70);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1161220580"}, header_70);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1826048903"}, header_70);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1302595600}, header_70);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_70);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1543574791}, header_70);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_2029393710"}, header_70);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1593670823"}, header_70);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_669076081"}, header_70);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(14, 39, 19, 9, 6, 2007)}, header_70);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_70);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_70);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_834287375"}, header_70);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1941355240}, header_70);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_159196313"}, header_70);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1083360535"}, header_70);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1535211120"}, header_70);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(12, 31, 4, 23, 3, 2011)}, header_70);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_2099599001"}, header_70);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_80164745"}, header_70);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_160149690"}, header_70);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1778164256"}, header_70);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1382760345}, header_70);
  all_values.push_back(header_70);
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
