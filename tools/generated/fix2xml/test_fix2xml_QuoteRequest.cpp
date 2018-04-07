#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::QuoteRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteRequest_0;
  set_field(msg, FIX::BookingType{2}, QuoteRequest_0);
  set_field(msg, FIX::ClOrdID{"STRING_849281393"}, QuoteRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1487645490"}, QuoteRequest_0);
  set_field(msg, FIX::EncodedTextLen{952629713}, QuoteRequest_0);
  set_field(msg, FIX::OrderCapacity{'W'}, QuoteRequest_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_C"}, QuoteRequest_0);
  set_field(msg, FIX::PreTradeAnonymity{true}, QuoteRequest_0);
  set_field(msg, FIX::PrivateQuote{true}, QuoteRequest_0);
  set_field(msg, FIX::QuoteReqID{"STRING_351909270"}, QuoteRequest_0);
  set_field(msg, FIX::RFQReqID{"STRING_502411059"}, QuoteRequest_0);
  set_field(msg, FIX::RespondentType{2}, QuoteRequest_0);
  set_field(msg, FIX::Text{"STRING_222400965"}, QuoteRequest_0);
  all_values.push_back(QuoteRequest_0);

  all_compo_names.insert("QuoteRequest");

  // QuotReqGrp
  // Group QuotReqGrp.NoRelatedSym
  {
    FIX50SP2::QuoteRequest::NoRelatedSym noRelatedSym_0_0;
    // QuotReqGrp.NoRelatedSym
    multiset<string> QuotReqGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::Account{"STRING_192756077"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::AccountType{8}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::AcctIDSource{2}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Currency{"GBP"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(9, 39, 11, 0, 4, 2004)}, QuotReqGrp_NoRelatedSym_0);
    FIX::MinQty MinQty_13;
    MinQty_13.setString("14917294");
set_field(noRelatedSym_0_0, MinQty_13, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::OrdType{'2'}, QuotReqGrp_NoRelatedSym_0);
    FIX::OrderQty2 OrderQty2_9;
    OrderQty2_9.setString("1889124");
set_field(noRelatedSym_0_0, OrderQty2_9, QuotReqGrp_NoRelatedSym_0);
    FIX::PrevClosePx PrevClosePx_7;
    PrevClosePx_7.setString("427539");
set_field(noRelatedSym_0_0, PrevClosePx_7, QuotReqGrp_NoRelatedSym_0);
    FIX::Price Price_18;
    Price_18.setString("19658089");
set_field(noRelatedSym_0_0, Price_18, QuotReqGrp_NoRelatedSym_0);
    FIX::Price2 Price2_3;
    Price2_3.setString("2872525");
set_field(noRelatedSym_0_0, Price2_3, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::PriceType{13}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QtyType{2}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuotePriceType{8}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteRequestType{2}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteType{1}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlCurrency{"CHF"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlDate{"LOCALMKTDATE_525669694"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlDate2{"LOCALMKTDATE_1621733541"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlType{"STRING_7"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Side{'C'}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradeOriginationDate{"LOCALMKTDATE_1844134506"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradingSessionID{"STRING_6"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradingSessionSubID{"STRING_7"}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(22, 52, 18, 18, 6, 2010)}, QuotReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(18, 41, 0, 16, 7, 2002)}, QuotReqGrp_NoRelatedSym_0);
    all_values.push_back(QuotReqGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_19;
    set_field(noRelatedSym_0_0, FIX::AgreementCurrency{"JPY"}, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::AgreementDate{"LOCALMKTDATE_1564299193"}, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::AgreementDesc{"STRING_179716604"}, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::AgreementID{"STRING_1233663498"}, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::DeliveryType{3}, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::EndDate{"LOCALMKTDATE_1943616715"}, FinancingDetails_19);
    FIX::MarginRatio MarginRatio_19;
    MarginRatio_19.setString("21.160000");
set_field(noRelatedSym_0_0, MarginRatio_19, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::StartDate{"LOCALMKTDATE_314054165"}, FinancingDetails_19);
    set_field(noRelatedSym_0_0, FIX::TerminationType{3}, FinancingDetails_19);
    all_values.push_back(FinancingDetails_19);
    all_compo_names.insert("...NoRelatedSym.");

    // Instrument
    multiset<string> Instrument_56;
    FIX::AttachmentPoint AttachmentPoint_56;
    AttachmentPoint_56.setString("81.620000");
set_field(noRelatedSym_0_0, AttachmentPoint_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_1935787706"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::CPProgram{2}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_35928333"}, Instrument_56);
    FIX::CapPrice CapPrice_56;
    CapPrice_56.setString("16324385");
set_field(noRelatedSym_0_0, CapPrice_56, Instrument_56);
    FIX::ContractMultiplier ContractMultiplier_56;
    ContractMultiplier_56.setString("12765156");
set_field(noRelatedSym_0_0, ContractMultiplier_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{1}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1311000586"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_329108772"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1469301554"}, Instrument_56);
    FIX::CouponRate CouponRate_56;
    CouponRate_56.setString("98.970000");
set_field(noRelatedSym_0_0, CouponRate_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_1186974191"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_9477216"}, Instrument_56);
    FIX::DetachmentPoint DetachmentPoint_56;
    DetachmentPoint_56.setString("19.670000");
set_field(noRelatedSym_0_0, DetachmentPoint_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_1728102612"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{2138407266}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_1036589968"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{668753224}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{2}, Instrument_56);
    FIX::Factor Factor_56;
    Factor_56.setString("17843214");
set_field(noRelatedSym_0_0, Factor_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{false}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{true}, Instrument_56);
    FIX::FloorPrice FloorPrice_56;
    FloorPrice_56.setString("2028946");
set_field(noRelatedSym_0_0, FloorPrice_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{1}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_1012262316"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_406845351"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_808395383"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_1051536575"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_74276478"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1192184737"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_509203575"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_1459800307"}, Instrument_56);
    FIX::MinPriceIncrement MinPriceIncrement_56;
    MinPriceIncrement_56.setString("12281130");
set_field(noRelatedSym_0_0, MinPriceIncrement_56, Instrument_56);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_56;
    MinPriceIncrementAmount_56.setString("21416421");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{588832306}, Instrument_56);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_56;
    NotionalPercentageOutstanding_56.setString("76.530000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'1'}, Instrument_56);
    FIX::OptPayoutAmount OptPayoutAmount_56;
    OptPayoutAmount_56.setString("9179410");
set_field(noRelatedSym_0_0, OptPayoutAmount_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{1}, Instrument_56);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_56;
    OriginalNotionalPercentageOutstanding_56.setString("89.750000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_2104915269"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{683372775}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_1685534234"}, Instrument_56);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_56;
    PriceUnitOfMeasureQty_56.setString("6742963");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::Product{1}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_206803810"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_725565074"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_5120073"}, Instrument_56);
    FIX::RepurchaseRate RepurchaseRate_56;
    RepurchaseRate_56.setString("79.640000");
set_field(noRelatedSym_0_0, RepurchaseRate_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{928459683}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MM"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_1835720280"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_217534142"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_1774580881"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_496632016"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_F"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_570908494"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_FRN"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SD"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'P'}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_1541884878"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_851358818"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"EUR"}, Instrument_56);
    FIX::StrikeMultiplier StrikeMultiplier_56;
    StrikeMultiplier_56.setString("90342");
set_field(noRelatedSym_0_0, StrikeMultiplier_56, Instrument_56);
    FIX::StrikePrice StrikePrice_56;
    StrikePrice_56.setString("13899985");
set_field(noRelatedSym_0_0, StrikePrice_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{4}, Instrument_56);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_56;
    StrikePriceBoundaryPrecision_56.setString("32.240000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{4}, Instrument_56);
    FIX::StrikeValue StrikeValue_56;
    StrikeValue_56.setString("21037472");
set_field(noRelatedSym_0_0, StrikeValue_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_1903430518"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Yr"}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_56);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_56;
    UnitOfMeasureQty_56.setString("6214722");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_56, Instrument_56);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_56);
    all_values.push_back(Instrument_56);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_115;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_115);
      FIX::ComplexEventPrice ComplexEventPrice_115;
      ComplexEventPrice_115.setString("3512152");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_115, ComplexEvents_NoComplexEvents_115);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_115);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_115;
      ComplexEventPriceBoundaryPrecision_115.setString("68.120000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_115, ComplexEvents_NoComplexEvents_115);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_115);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_115);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_115;
      ComplexOptPayoutAmount_115.setString("16297988");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_115, ComplexEvents_NoComplexEvents_115);
      all_values.push_back(ComplexEvents_NoComplexEvents_115);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_246;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 2, 1, 23, 10, 2015)}, ComplexEventDates_NoComplexEventDates_246);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 28, 25, 27, 1, 2012)}, ComplexEventDates_NoComplexEventDates_246);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_246);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_488;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 26, 20)}, ComplexEventTimes_NoComplexEventTimes_488);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 47, 39)}, ComplexEventTimes_NoComplexEventTimes_488);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_488);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_489;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 43, 45)}, ComplexEventTimes_NoComplexEventTimes_489);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 25, 22)}, ComplexEventTimes_NoComplexEventTimes_489);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_489);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_490;
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 24, 45)}, ComplexEventTimes_NoComplexEventTimes_490);
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 16, 33)}, ComplexEventTimes_NoComplexEventTimes_490);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_490);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_116;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1200451776"}, EvntGrp_NoEvents_116);
      FIX::EventPx EventPx_116;
      EventPx_116.setString("5883034");
set_field(noEvents_0_1_0, EventPx_116, EvntGrp_NoEvents_116);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1313316413"}, EvntGrp_NoEvents_116);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(3, 35, 59, 13, 2, 2007)}, EvntGrp_NoEvents_116);
      set_field(noEvents_0_1_0, FIX::EventType{4}, EvntGrp_NoEvents_116);
      all_values.push_back(EvntGrp_NoEvents_116);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_107;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1994559126"}, InstrumentParties_NoInstrumentParties_107);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_107);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1241958236}, InstrumentParties_NoInstrumentParties_107);
      all_values.push_back(InstrumentParties_NoInstrumentParties_107);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_2026900625"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{151262853}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_298348107"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{2067964853}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218;
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubID{"STRING_690366298"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218);
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubIDType{498695569}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_108;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_254295929"}, InstrumentParties_NoInstrumentParties_108);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_108);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{703151294}, InstrumentParties_NoInstrumentParties_108);
      all_values.push_back(InstrumentParties_NoInstrumentParties_108);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_1811469363"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{306116511}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_219);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220;
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubID{"STRING_928169362"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220);
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubIDType{601267949}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_220);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221;
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubID{"STRING_54070105"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221);
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubIDType{2128621139}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_221);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_115;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_1367386519"}, SecAltIDGrp_NoSecurityAltID_115);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_748259083"}, SecAltIDGrp_NoSecurityAltID_115);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_115);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_116;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_628842458"}, SecAltIDGrp_NoSecurityAltID_116);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_2054845674"}, SecAltIDGrp_NoSecurityAltID_116);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_116);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_112;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_837997362"}, SecurityXML_112);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{1952045639}, SecurityXML_112);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_599523888"}, SecurityXML_112);
    all_values.push_back(SecurityXML_112);
    all_compo_names.insert("...NoRelatedSym..");

    // OrderQtyData
    multiset<string> OrderQtyData_17;
    FIX::CashOrderQty CashOrderQty_17;
    CashOrderQty_17.setString("10950264");
set_field(noRelatedSym_0_0, CashOrderQty_17, OrderQtyData_17);
    FIX::OrderPercent OrderPercent_17;
    OrderPercent_17.setString("81.620000");
set_field(noRelatedSym_0_0, OrderPercent_17, OrderQtyData_17);
    FIX::OrderQty OrderQty_25;
    OrderQty_25.setString("19178606");
set_field(noRelatedSym_0_0, OrderQty_25, OrderQtyData_17);
    set_field(noRelatedSym_0_0, FIX::RoundingDirection{'0'}, OrderQtyData_17);
    FIX::RoundingModulus RoundingModulus_17;
    RoundingModulus_17.setString("17396046");
set_field(noRelatedSym_0_0, RoundingModulus_17, OrderQtyData_17);
    all_values.push_back(OrderQtyData_17);
    all_compo_names.insert("...NoRelatedSym.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_102;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_730439040"}, Parties_NoPartyIDs_102);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_102);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{42}, Parties_NoPartyIDs_102);
      all_values.push_back(Parties_NoPartyIDs_102);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_207;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_1539502840"}, PtysSubGrp_NoPartySubIDs_207);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_207);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_207);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_208;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_1527482717"}, PtysSubGrp_NoPartySubIDs_208);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_208);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_208);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_103;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_989174179"}, Parties_NoPartyIDs_103);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_103);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{65}, Parties_NoPartyIDs_103);
      all_values.push_back(Parties_NoPartyIDs_103);
      all_compo_names.insert("...NoRelatedSym...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_209;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_389266875"}, PtysSubGrp_NoPartySubIDs_209);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_209);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_209);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_210;
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubID{"STRING_1254427843"}, PtysSubGrp_NoPartySubIDs_210);
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_210);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_210);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_211;
        set_field(noPartySubIDs_0_1_2_2, FIX::PartySubID{"STRING_146199800"}, PtysSubGrp_NoPartySubIDs_211);
        set_field(noPartySubIDs_0_1_2_2, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_211);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_211);
        all_compo_names.insert("...NoRelatedSym...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // QuotQualGrp
    // Group QuotQualGrp.NoQuoteQualifiers
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_0;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_2;
      set_field(noQuoteQualifiers_0_1_0, FIX::QuoteQualifier{'8'}, QuotQualGrp_NoQuoteQualifiers_2);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_2);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_1;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_3;
      set_field(noQuoteQualifiers_0_1_1, FIX::QuoteQualifier{'9'}, QuotQualGrp_NoQuoteQualifiers_3);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_3);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_1);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoQuoteQualifiers noQuoteQualifiers_0_1_2;
      // QuotQualGrp.NoQuoteQualifiers
      multiset<string> QuotQualGrp_NoQuoteQualifiers_4;
      set_field(noQuoteQualifiers_0_1_2, FIX::QuoteQualifier{'1'}, QuotQualGrp_NoQuoteQualifiers_4);
      all_values.push_back(QuotQualGrp_NoQuoteQualifiers_4);
      all_compo_names.insert("...NoRelatedSym...NoQuoteQualifiers");

      noRelatedSym_0_0.addGroup(noQuoteQualifiers_0_1_2);
    }
    // QuotReqLegsGrp
    // Group QuotReqLegsGrp.NoLegs
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_0;
      FIX::LegOrderQty LegOrderQty_7;
      LegOrderQty_7.setString("7299200");
set_field(noLegs_0_1_0, LegOrderQty_7, QuotReqLegsGrp_NoLegs_0);
      FIX::LegQty LegQty_7;
      LegQty_7.setString("1701257");
set_field(noLegs_0_1_0, LegQty_7, QuotReqLegsGrp_NoLegs_0);
      set_field(noLegs_0_1_0, FIX::LegRefID{"STRING_679999060"}, QuotReqLegsGrp_NoLegs_0);
      set_field(noLegs_0_1_0, FIX::LegSettlDate{"LOCALMKTDATE_538934519"}, QuotReqLegsGrp_NoLegs_0);
      set_field(noLegs_0_1_0, FIX::LegSettlType{'2'}, QuotReqLegsGrp_NoLegs_0);
      set_field(noLegs_0_1_0, FIX::LegSwapType{1}, QuotReqLegsGrp_NoLegs_0);
      all_values.push_back(QuotReqLegsGrp_NoLegs_0);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_77;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_131055528"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{952838048}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_205056392"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{1750077163}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_2116436160"}, InstrumentLeg_77);
      FIX::LegContractMultiplier LegContractMultiplier_77;
      LegContractMultiplier_77.setString("12338435");
set_field(noLegs_0_1_0, LegContractMultiplier_77, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{1142096355}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1822916922"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_613842610"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_788411476"}, InstrumentLeg_77);
      FIX::LegCouponRate LegCouponRate_77;
      LegCouponRate_77.setString("74.530000");
set_field(noLegs_0_1_0, LegCouponRate_77, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_696992973"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1086259848"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{190366732}, InstrumentLeg_77);
      FIX::LegFactor LegFactor_77;
      LegFactor_77.setString("4247115");
set_field(noLegs_0_1_0, LegFactor_77, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{1529596829}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_336566533"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_721227098"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1192836680"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_1231025417"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_1646585111"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_763438558"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_815998015"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_229021468"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'9'}, InstrumentLeg_77);
      FIX::LegOptionRatio LegOptionRatio_77;
      LegOptionRatio_77.setString("14959970");
set_field(noLegs_0_1_0, LegOptionRatio_77, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_767955988"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_874067113"}, InstrumentLeg_77);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_77;
      LegPriceUnitOfMeasureQty_77.setString("9706144");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_77, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegProduct{899011516}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{1826905161}, InstrumentLeg_77);
      FIX::LegRatioQty LegRatioQty_77;
      LegRatioQty_77.setString("11756708");
set_field(noLegs_0_1_0, LegRatioQty_77, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_501605031"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_1795857673"}, InstrumentLeg_77);
      FIX::LegRepurchaseRate LegRepurchaseRate_77;
      LegRepurchaseRate_77.setString("7.120000");
set_field(noLegs_0_1_0, LegRepurchaseRate_77, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{1643701386}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_1471290947"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_875873322"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_284629214"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_2135898400"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_1572866296"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_309933637"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegSide{'1'}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_511642496"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_77);
      FIX::LegStrikePrice LegStrikePrice_77;
      LegStrikePrice_77.setString("20412393");
set_field(noLegs_0_1_0, LegStrikePrice_77, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_836866903"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_304637093"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_1086592358"}, InstrumentLeg_77);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_2067892320"}, InstrumentLeg_77);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_77;
      LegUnitOfMeasureQty_77.setString("19512222");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_77, InstrumentLeg_77);
      all_values.push_back(InstrumentLeg_77);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_160;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_736406687"}, LegSecAltIDGrp_NoLegSecurityAltID_160);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_32760025"}, LegSecAltIDGrp_NoLegSecurityAltID_160);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_160);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_2;
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveCurrency{"CHF"}, LegBenchmarkCurveData_2);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveName{"STRING_800716013"}, LegBenchmarkCurveData_2);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurvePoint{"STRING_1510178706"}, LegBenchmarkCurveData_2);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_2;
      LegBenchmarkPrice_2.setString("10555345");
set_field(noLegs_0_1_0, LegBenchmarkPrice_2, LegBenchmarkCurveData_2);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkPriceType{1699727529}, LegBenchmarkCurveData_2);
      all_values.push_back(LegBenchmarkCurveData_2);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_16;
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationType{"STRING_83721714"}, LegStipulations_NoLegStipulations_16);
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationValue{"STRING_53848913"}, LegStipulations_NoLegStipulations_16);
        all_values.push_back(LegStipulations_NoLegStipulations_16);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_17;
        set_field(noLegStipulations_0_0_2_1, FIX::LegStipulationType{"STRING_837974245"}, LegStipulations_NoLegStipulations_17);
        set_field(noLegStipulations_0_0_2_1, FIX::LegStipulationValue{"STRING_345752427"}, LegStipulations_NoLegStipulations_17);
        all_values.push_back(LegStipulations_NoLegStipulations_17);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_18;
        set_field(noLegStipulations_0_0_2_2, FIX::LegStipulationType{"STRING_1697550299"}, LegStipulations_NoLegStipulations_18);
        set_field(noLegStipulations_0_0_2_2, FIX::LegStipulationValue{"STRING_161781545"}, LegStipulations_NoLegStipulations_18);
        all_values.push_back(LegStipulations_NoLegStipulations_18);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_2);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_107;
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyID{"STRING_1982179514"}, NestedParties_NoNestedPartyIDs_107);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_107);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyRole{647008397}, NestedParties_NoNestedPartyIDs_107);
        all_values.push_back(NestedParties_NoNestedPartyIDs_107);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_221;
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubID{"STRING_1456378397"}, NstdPtysSubGrp_NoNestedPartySubIDs_221);
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubIDType{1158650894}, NstdPtysSubGrp_NoNestedPartySubIDs_221);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_221);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_222;
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubID{"STRING_644929873"}, NstdPtysSubGrp_NoNestedPartySubIDs_222);
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubIDType{1039788392}, NstdPtysSubGrp_NoNestedPartySubIDs_222);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_222);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        noLegs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs noLegs_0_1_1;
      // QuotReqLegsGrp.NoLegs
      multiset<string> QuotReqLegsGrp_NoLegs_1;
      FIX::LegOrderQty LegOrderQty_8;
      LegOrderQty_8.setString("10524065");
set_field(noLegs_0_1_1, LegOrderQty_8, QuotReqLegsGrp_NoLegs_1);
      FIX::LegQty LegQty_8;
      LegQty_8.setString("14817967");
set_field(noLegs_0_1_1, LegQty_8, QuotReqLegsGrp_NoLegs_1);
      set_field(noLegs_0_1_1, FIX::LegRefID{"STRING_1344425485"}, QuotReqLegsGrp_NoLegs_1);
      set_field(noLegs_0_1_1, FIX::LegSettlDate{"LOCALMKTDATE_2138998929"}, QuotReqLegsGrp_NoLegs_1);
      set_field(noLegs_0_1_1, FIX::LegSettlType{'1'}, QuotReqLegsGrp_NoLegs_1);
      set_field(noLegs_0_1_1, FIX::LegSwapType{4}, QuotReqLegsGrp_NoLegs_1);
      all_values.push_back(QuotReqLegsGrp_NoLegs_1);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_78;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_1841546198"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{2138612136}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_1180924067"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{330174143}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_76048603"}, InstrumentLeg_78);
      FIX::LegContractMultiplier LegContractMultiplier_78;
      LegContractMultiplier_78.setString("19816400");
set_field(noLegs_0_1_1, LegContractMultiplier_78, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{1840352849}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_1131583145"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_1533883961"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_882469421"}, InstrumentLeg_78);
      FIX::LegCouponRate LegCouponRate_78;
      LegCouponRate_78.setString("48.600000");
set_field(noLegs_0_1_1, LegCouponRate_78, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_1587732874"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"CHF"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_1137799526"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{1882225212}, InstrumentLeg_78);
      FIX::LegFactor LegFactor_78;
      LegFactor_78.setString("6351993");
set_field(noLegs_0_1_1, LegFactor_78, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{972495392}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_2032421509"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1282207786"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_1117124895"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_1341316259"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_293375032"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_1762054769"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_233621003"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_1345781603"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_78);
      FIX::LegOptionRatio LegOptionRatio_78;
      LegOptionRatio_78.setString("15780464");
set_field(noLegs_0_1_1, LegOptionRatio_78, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_1337296885"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_351089698"}, InstrumentLeg_78);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_78;
      LegPriceUnitOfMeasureQty_78.setString("5787268");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_78, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegProduct{1031359435}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{342218186}, InstrumentLeg_78);
      FIX::LegRatioQty LegRatioQty_78;
      LegRatioQty_78.setString("17596509");
set_field(noLegs_0_1_1, LegRatioQty_78, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1361533578"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_418266789"}, InstrumentLeg_78);
      FIX::LegRepurchaseRate LegRepurchaseRate_78;
      LegRepurchaseRate_78.setString("73.820000");
set_field(noLegs_0_1_1, LegRepurchaseRate_78, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{1054402779}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_1549849934"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_980207695"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_1936872201"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_617671146"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_420456922"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_1509832220"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegSide{'3'}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_1558256448"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_78);
      FIX::LegStrikePrice LegStrikePrice_78;
      LegStrikePrice_78.setString("3832681");
set_field(noLegs_0_1_1, LegStrikePrice_78, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_1129511645"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_1948651960"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_1500393087"}, InstrumentLeg_78);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_323344256"}, InstrumentLeg_78);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_78;
      LegUnitOfMeasureQty_78.setString("945433");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_78, InstrumentLeg_78);
      all_values.push_back(InstrumentLeg_78);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_161;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_556965260"}, LegSecAltIDGrp_NoLegSecurityAltID_161);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_1440324947"}, LegSecAltIDGrp_NoLegSecurityAltID_161);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_161);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_3;
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurveCurrency{"CHF"}, LegBenchmarkCurveData_3);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurveName{"STRING_630138184"}, LegBenchmarkCurveData_3);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurvePoint{"STRING_414938156"}, LegBenchmarkCurveData_3);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_3;
      LegBenchmarkPrice_3.setString("5662549");
set_field(noLegs_0_1_1, LegBenchmarkPrice_3, LegBenchmarkCurveData_3);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkPriceType{1661497619}, LegBenchmarkCurveData_3);
      all_values.push_back(LegBenchmarkCurveData_3);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_19;
        set_field(noLegStipulations_0_1_2_0, FIX::LegStipulationType{"STRING_178422286"}, LegStipulations_NoLegStipulations_19);
        set_field(noLegStipulations_0_1_2_0, FIX::LegStipulationValue{"STRING_875547549"}, LegStipulations_NoLegStipulations_19);
        all_values.push_back(LegStipulations_NoLegStipulations_19);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_20;
        set_field(noLegStipulations_0_1_2_1, FIX::LegStipulationType{"STRING_1175423131"}, LegStipulations_NoLegStipulations_20);
        set_field(noLegStipulations_0_1_2_1, FIX::LegStipulationValue{"STRING_1772229668"}, LegStipulations_NoLegStipulations_20);
        all_values.push_back(LegStipulations_NoLegStipulations_20);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_1);
      }
      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_108;
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyID{"STRING_577789417"}, NestedParties_NoNestedPartyIDs_108);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_108);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyRole{1719338882}, NestedParties_NoNestedPartyIDs_108);
        all_values.push_back(NestedParties_NoNestedPartyIDs_108);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_223;
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubID{"STRING_1025410637"}, NstdPtysSubGrp_NoNestedPartySubIDs_223);
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubIDType{1081687454}, NstdPtysSubGrp_NoNestedPartySubIDs_223);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_223);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_224;
          set_field(noNestedPartySubIDs_0_1_0_3_1, FIX::NestedPartySubID{"STRING_1226705349"}, NstdPtysSubGrp_NoNestedPartySubIDs_224);
          set_field(noNestedPartySubIDs_0_1_0_3_1, FIX::NestedPartySubIDType{436183437}, NstdPtysSubGrp_NoNestedPartySubIDs_224);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_224);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_225;
          set_field(noNestedPartySubIDs_0_1_0_3_2, FIX::NestedPartySubID{"STRING_178777590"}, NstdPtysSubGrp_NoNestedPartySubIDs_225);
          set_field(noNestedPartySubIDs_0_1_0_3_2, FIX::NestedPartySubIDType{1893149523}, NstdPtysSubGrp_NoNestedPartySubIDs_225);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_225);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_2);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_109;
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyID{"STRING_819451629"}, NestedParties_NoNestedPartyIDs_109);
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_109);
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyRole{1694317835}, NestedParties_NoNestedPartyIDs_109);
        all_values.push_back(NestedParties_NoNestedPartyIDs_109);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_226;
          set_field(noNestedPartySubIDs_0_1_1_3_0, FIX::NestedPartySubID{"STRING_1631633492"}, NstdPtysSubGrp_NoNestedPartySubIDs_226);
          set_field(noNestedPartySubIDs_0_1_1_3_0, FIX::NestedPartySubIDType{1788861179}, NstdPtysSubGrp_NoNestedPartySubIDs_226);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_226);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_227;
          set_field(noNestedPartySubIDs_0_1_1_3_1, FIX::NestedPartySubID{"STRING_1287325277"}, NstdPtysSubGrp_NoNestedPartySubIDs_227);
          set_field(noNestedPartySubIDs_0_1_1_3_1, FIX::NestedPartySubIDType{41115104}, NstdPtysSubGrp_NoNestedPartySubIDs_227);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_227);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_228;
          set_field(noNestedPartySubIDs_0_1_1_3_2, FIX::NestedPartySubID{"STRING_1081702479"}, NstdPtysSubGrp_NoNestedPartySubIDs_228);
          set_field(noNestedPartySubIDs_0_1_1_3_2, FIX::NestedPartySubIDType{1351173735}, NstdPtysSubGrp_NoNestedPartySubIDs_228);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_228);
          all_compo_names.insert("...NoRelatedSym...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_2);
        }
        noLegs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_16;
      set_field(noRateSources_0_1_0, FIX::RateSource{99}, RateSource_NoRateSources_16);
      set_field(noRateSources_0_1_0, FIX::RateSourceType{1}, RateSource_NoRateSources_16);
      set_field(noRateSources_0_1_0, FIX::ReferencePage{"STRING_594898189"}, RateSource_NoRateSources_16);
      all_values.push_back(RateSource_NoRateSources_16);
      all_compo_names.insert("...NoRelatedSym...NoRateSources");

      noRelatedSym_0_0.addGroup(noRateSources_0_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_21;
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_21);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveName{"STRING_Treasury"}, SpreadOrBenchmarkCurveData_21);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurvePoint{"STRING_2101402184"}, SpreadOrBenchmarkCurveData_21);
    FIX::BenchmarkPrice BenchmarkPrice_21;
    BenchmarkPrice_21.setString("15512077");
set_field(noRelatedSym_0_0, BenchmarkPrice_21, SpreadOrBenchmarkCurveData_21);
    set_field(noRelatedSym_0_0, FIX::BenchmarkPriceType{398066495}, SpreadOrBenchmarkCurveData_21);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityID{"STRING_1883868865"}, SpreadOrBenchmarkCurveData_21);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityIDSource{"STRING_2128997134"}, SpreadOrBenchmarkCurveData_21);
    FIX::Spread Spread_21;
    Spread_21.setString("10030202");
set_field(noRelatedSym_0_0, Spread_21, SpreadOrBenchmarkCurveData_21);
    all_values.push_back(SpreadOrBenchmarkCurveData_21);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_32;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_AVFICO"}, Stipulations_NoStipulations_32);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_2028430848"}, Stipulations_NoStipulations_32);
      all_values.push_back(Stipulations_NoStipulations_32);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_33;
      set_field(noStipulations_0_1_1, FIX::StipulationType{"STRING_PRIMARY"}, Stipulations_NoStipulations_33);
      set_field(noStipulations_0_1_1, FIX::StipulationValue{"STRING_256195751"}, Stipulations_NoStipulations_33);
      all_values.push_back(Stipulations_NoStipulations_33);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_98;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_568705495"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{1861627}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1136582267"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{1876994731}, UnderlyingInstrument_98);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_98;
      UnderlyingAdjustedQuantity_98.setString("16961794");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_98, UnderlyingInstrument_98);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_98;
      UnderlyingAllocationPercent_98.setString("33.360000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_98, UnderlyingInstrument_98);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_98;
      UnderlyingAttachmentPoint_98.setString("45.750000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_1337556994"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_448784965"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_1402259679"}, UnderlyingInstrument_98);
      FIX::UnderlyingCapValue UnderlyingCapValue_98;
      UnderlyingCapValue_98.setString("2717758");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_98, UnderlyingInstrument_98);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_98;
      UnderlyingCashAmount_98.setString("17999587");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_98);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_98;
      UnderlyingContractMultiplier_98.setString("19836164");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{1418586944}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_2025801073"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1061987475"}, UnderlyingInstrument_98);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_98;
      UnderlyingCouponRate_98.setString("15.300000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_651637900"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_98);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_98;
      UnderlyingCurrentValue_98.setString("10497043");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_98, UnderlyingInstrument_98);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_98;
      UnderlyingDetachmentPoint_98.setString("12.290000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_98, UnderlyingInstrument_98);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_98;
      UnderlyingDirtyPrice_98.setString("11796090");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_98, UnderlyingInstrument_98);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_98;
      UnderlyingEndPrice_98.setString("20527246");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_98, UnderlyingInstrument_98);
      FIX::UnderlyingEndValue UnderlyingEndValue_98;
      UnderlyingEndValue_98.setString("605316");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{209099486}, UnderlyingInstrument_98);
      FIX::UnderlyingFXRate UnderlyingFXRate_98;
      UnderlyingFXRate_98.setString("19336718");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_98);
      FIX::UnderlyingFactor UnderlyingFactor_98;
      UnderlyingFactor_98.setString("4652952");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{103318795}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_1019165082"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_467156865"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_1239901062"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_748676165"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_15852679"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_401360750"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2109820740"}, UnderlyingInstrument_98);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_98;
      UnderlyingNotionalPercentageOutstanding_98.setString("96.730000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_98);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_98;
      UnderlyingOriginalNotionalPercentageOutstanding_98.setString("67.710000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1625185498"}, UnderlyingInstrument_98);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_98;
      UnderlyingPriceUnitOfMeasureQty_98.setString("5026207");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{648016007}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{1461318339}, UnderlyingInstrument_98);
      FIX::UnderlyingPx UnderlyingPx_98;
      UnderlyingPx_98.setString("19212077");
set_field(noUnderlyings_0_1_0, UnderlyingPx_98, UnderlyingInstrument_98);
      FIX::UnderlyingQty UnderlyingQty_98;
      UnderlyingQty_98.setString("5263334");
set_field(noUnderlyings_0_1_0, UnderlyingQty_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_375822166"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1568095595"}, UnderlyingInstrument_98);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_98;
      UnderlyingRepurchaseRate_98.setString("13.320000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{1391728178}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_618707545"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_80192079"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_2144019408"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_1798316630"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_2132916684"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_57067441"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_2007416116"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_1919104842"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_507527027"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_98);
      FIX::UnderlyingStartValue UnderlyingStartValue_98;
      UnderlyingStartValue_98.setString("20224236");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1526692109"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_98);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_98;
      UnderlyingStrikePrice_98.setString("1278846");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_98, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_808237251"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_1516201801"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_90221718"}, UnderlyingInstrument_98);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_14163276"}, UnderlyingInstrument_98);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_98;
      UnderlyingUnitOfMeasureQty_98.setString("2188638");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_98, UnderlyingInstrument_98);
      all_values.push_back(UnderlyingInstrument_98);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_208;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1639348775"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_208);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_721484637"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_208);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_208);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_209;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_2102834496"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_209);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_953183466"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_209);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_209);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_200;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_481684280"}, UnderlyingStipulations_NoUnderlyingStips_200);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_1329005632"}, UnderlyingStipulations_NoUnderlyingStips_200);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_200);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_201;
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipType{"STRING_2063304297"}, UnderlyingStipulations_NoUnderlyingStips_201);
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipValue{"STRING_1659655612"}, UnderlyingStipulations_NoUnderlyingStips_201);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_201);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_202;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_534528194"}, UndlyInstrumentParties_NoUndlyInstrumentParties_202);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_202);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{569785923}, UndlyInstrumentParties_NoUndlyInstrumentParties_202);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_202);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1725280728"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{626853364}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_403);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_45293645"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1496901922}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_404);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1134380391"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{370521351}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_203;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1371841911"}, UndlyInstrumentParties_NoUndlyInstrumentParties_203);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_203);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{1162905923}, UndlyInstrumentParties_NoUndlyInstrumentParties_203);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_203);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_641473479"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1971143174}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_204;
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_1855401115"}, UndlyInstrumentParties_NoUndlyInstrumentParties_204);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_204);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyRole{1985306450}, UndlyInstrumentParties_NoUndlyInstrumentParties_204);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_204);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_39030039"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1477171577}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_99;
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuer{"DATA_648265972"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuerLen{2141864536}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_282871395"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDescLen{1143474674}, UnderlyingInstrument_99);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_99;
      UnderlyingAdjustedQuantity_99.setString("4760651");
set_field(noUnderlyings_0_1_1, UnderlyingAdjustedQuantity_99, UnderlyingInstrument_99);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_99;
      UnderlyingAllocationPercent_99.setString("70.280000");
set_field(noUnderlyings_0_1_1, UnderlyingAllocationPercent_99, UnderlyingInstrument_99);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_99;
      UnderlyingAttachmentPoint_99.setString("53.230000");
set_field(noUnderlyings_0_1_1, UnderlyingAttachmentPoint_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCFICode{"STRING_2135720781"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPProgram{"STRING_37643543"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPRegType{"STRING_1593823518"}, UnderlyingInstrument_99);
      FIX::UnderlyingCapValue UnderlyingCapValue_99;
      UnderlyingCapValue_99.setString("17280848");
set_field(noUnderlyings_0_1_1, UnderlyingCapValue_99, UnderlyingInstrument_99);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_99;
      UnderlyingCashAmount_99.setString("6074294");
set_field(noUnderlyings_0_1_1, UnderlyingCashAmount_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_99);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_99;
      UnderlyingContractMultiplier_99.setString("13058819");
set_field(noUnderlyings_0_1_1, UnderlyingContractMultiplier_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingContractMultiplierUnit{1234282830}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1824478339"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_655300178"}, UnderlyingInstrument_99);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_99;
      UnderlyingCouponRate_99.setString("95.730000");
set_field(noUnderlyings_0_1_1, UnderlyingCouponRate_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCreditRating{"STRING_47516043"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_99);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_99;
      UnderlyingCurrentValue_99.setString("12104219");
set_field(noUnderlyings_0_1_1, UnderlyingCurrentValue_99, UnderlyingInstrument_99);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_99;
      UnderlyingDetachmentPoint_99.setString("77.550000");
set_field(noUnderlyings_0_1_1, UnderlyingDetachmentPoint_99, UnderlyingInstrument_99);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_99;
      UnderlyingDirtyPrice_99.setString("13762419");
set_field(noUnderlyings_0_1_1, UnderlyingDirtyPrice_99, UnderlyingInstrument_99);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_99;
      UnderlyingEndPrice_99.setString("10340814");
set_field(noUnderlyings_0_1_1, UnderlyingEndPrice_99, UnderlyingInstrument_99);
      FIX::UnderlyingEndValue UnderlyingEndValue_99;
      UnderlyingEndValue_99.setString("20742588");
set_field(noUnderlyings_0_1_1, UnderlyingEndValue_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingExerciseStyle{2107937104}, UnderlyingInstrument_99);
      FIX::UnderlyingFXRate UnderlyingFXRate_99;
      UnderlyingFXRate_99.setString("8719042");
set_field(noUnderlyings_0_1_1, UnderlyingFXRate_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_99);
      FIX::UnderlyingFactor UnderlyingFactor_99;
      UnderlyingFactor_99.setString("21469671");
set_field(noUnderlyings_0_1_1, UnderlyingFactor_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFlowScheduleType{201592224}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingInstrRegistry{"STRING_501822530"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2141348031"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssuer{"STRING_484463619"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_1645297205"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_469929552"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2096340647"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_557108880"}, UnderlyingInstrument_99);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_99;
      UnderlyingNotionalPercentageOutstanding_99.setString("66.850000");
set_field(noUnderlyings_0_1_1, UnderlyingNotionalPercentageOutstanding_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_99);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_99;
      UnderlyingOriginalNotionalPercentageOutstanding_99.setString("87.500000");
set_field(noUnderlyings_0_1_1, UnderlyingOriginalNotionalPercentageOutstanding_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_38767861"}, UnderlyingInstrument_99);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_99;
      UnderlyingPriceUnitOfMeasureQty_99.setString("5939300");
set_field(noUnderlyings_0_1_1, UnderlyingPriceUnitOfMeasureQty_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingProduct{1782633445}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPutOrCall{1344649766}, UnderlyingInstrument_99);
      FIX::UnderlyingPx UnderlyingPx_99;
      UnderlyingPx_99.setString("18282128");
set_field(noUnderlyings_0_1_1, UnderlyingPx_99, UnderlyingInstrument_99);
      FIX::UnderlyingQty UnderlyingQty_99;
      UnderlyingQty_99.setString("14596281");
set_field(noUnderlyings_0_1_1, UnderlyingQty_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1999949944"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2049392412"}, UnderlyingInstrument_99);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_99;
      UnderlyingRepurchaseRate_99.setString("41.790000");
set_field(noUnderlyings_0_1_1, UnderlyingRepurchaseRate_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepurchaseTerm{1879608386}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRestructuringType{"STRING_636677190"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityDesc{"STRING_570082497"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_2098466141"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityID{"STRING_2012919096"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityIDSource{"STRING_1604163989"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecuritySubType{"STRING_2025241364"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityType{"STRING_1973372552"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSeniority{"STRING_328584636"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlMethod{"STRING_1878797922"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_99);
      FIX::UnderlyingStartValue UnderlyingStartValue_99;
      UnderlyingStartValue_99.setString("5301768");
set_field(noUnderlyings_0_1_1, UnderlyingStartValue_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_233136804"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_99);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_99;
      UnderlyingStrikePrice_99.setString("18784340");
set_field(noUnderlyings_0_1_1, UnderlyingStrikePrice_99, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbol{"STRING_289166335"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbolSfx{"STRING_963497479"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingTimeUnit{"STRING_288059242"}, UnderlyingInstrument_99);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_747333020"}, UnderlyingInstrument_99);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_99;
      UnderlyingUnitOfMeasureQty_99.setString("9499980");
set_field(noUnderlyings_0_1_1, UnderlyingUnitOfMeasureQty_99, UnderlyingInstrument_99);
      all_values.push_back(UnderlyingInstrument_99);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_210;
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_786100882"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_210);
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1543928030"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_210);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_210);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_211;
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_2074141437"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_211);
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_2130750648"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_211);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_211);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_212;
        set_field(noUnderlyingSecurityAltID_0_1_2_2, FIX::UnderlyingSecurityAltID{"STRING_1224657220"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_212);
        set_field(noUnderlyingSecurityAltID_0_1_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1386285926"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_212);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_212);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_202;
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipType{"STRING_1126565984"}, UnderlyingStipulations_NoUnderlyingStips_202);
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipValue{"STRING_745946457"}, UnderlyingStipulations_NoUnderlyingStips_202);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_202);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_203;
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipType{"STRING_1715341682"}, UnderlyingStipulations_NoUnderlyingStips_203);
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipValue{"STRING_1763243175"}, UnderlyingStipulations_NoUnderlyingStips_203);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_203);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_204;
        set_field(noUnderlyingStips_0_1_2_2, FIX::UnderlyingStipType{"STRING_1316028955"}, UnderlyingStipulations_NoUnderlyingStips_204);
        set_field(noUnderlyingStips_0_1_2_2, FIX::UnderlyingStipValue{"STRING_1666324176"}, UnderlyingStipulations_NoUnderlyingStips_204);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_204);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_205;
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_772709296"}, UndlyInstrumentParties_NoUndlyInstrumentParties_205);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_205);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyRole{1454567528}, UndlyInstrumentParties_NoUndlyInstrumentParties_205);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_205);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1275396166"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1279939928}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1631470792"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1508532970}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_206;
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1099176711"}, UndlyInstrumentParties_NoUndlyInstrumentParties_206);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_206);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyRole{1239483332}, UndlyInstrumentParties_NoUndlyInstrumentParties_206);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_206);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1462125103"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1527542574}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2135676067"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{264639476}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::QuoteRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1819050566"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{774293301}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    // YieldData
    multiset<string> YieldData_16;
    FIX::Yield Yield_16;
    Yield_16.setString("75.060000");
set_field(noRelatedSym_0_0, Yield_16, YieldData_16);
    set_field(noRelatedSym_0_0, FIX::YieldCalcDate{"LOCALMKTDATE_1745708356"}, YieldData_16);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionDate{"LOCALMKTDATE_757560301"}, YieldData_16);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_16;
    YieldRedemptionPrice_16.setString("8857410");
set_field(noRelatedSym_0_0, YieldRedemptionPrice_16, YieldData_16);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionPriceType{984510634}, YieldData_16);
    set_field(noRelatedSym_0_0, FIX::YieldType{"STRING_PROCEEDS"}, YieldData_16);
    all_values.push_back(YieldData_16);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_0);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::QuoteRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_7;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_1730457091"}, RootParties_NoRootPartyIDs_7);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_7);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{1628066590}, RootParties_NoRootPartyIDs_7);
    all_values.push_back(RootParties_NoRootPartyIDs_7);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::QuoteRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_13;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_1827475808"}, RootSubParties_NoRootPartySubIDs_13);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{1109261566}, RootSubParties_NoRootPartySubIDs_13);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_13);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
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
