#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteResponse, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteResponse msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteResponse_0;
  set_field(msg, FIX::Account{"STRING_1104492073"}, QuoteResponse_0);
  set_field(msg, FIX::AccountType{1}, QuoteResponse_0);
  set_field(msg, FIX::AcctIDSource{2}, QuoteResponse_0);
  FIX::BidForwardPoints BidForwardPoints_5;
  BidForwardPoints_5.setString("10745315");
set_field(msg, BidForwardPoints_5, QuoteResponse_0);
  FIX::BidForwardPoints2 BidForwardPoints2_5;
  BidForwardPoints2_5.setString("19343421");
set_field(msg, BidForwardPoints2_5, QuoteResponse_0);
  FIX::BidPx BidPx_5;
  BidPx_5.setString("12046818");
set_field(msg, BidPx_5, QuoteResponse_0);
  FIX::BidSize BidSize_5;
  BidSize_5.setString("13479451");
set_field(msg, BidSize_5, QuoteResponse_0);
  FIX::BidSpotRate BidSpotRate_5;
  BidSpotRate_5.setString("13282166");
set_field(msg, BidSpotRate_5, QuoteResponse_0);
  FIX::BidYield BidYield_5;
  BidYield_5.setString("59.210000");
set_field(msg, BidYield_5, QuoteResponse_0);
  set_field(msg, FIX::ClOrdID{"STRING_358560589"}, QuoteResponse_0);
  set_field(msg, FIX::CommType{'2'}, QuoteResponse_0);
  FIX::Commission Commission_19;
  Commission_19.setString("10676758");
set_field(msg, Commission_19, QuoteResponse_0);
  set_field(msg, FIX::Currency{"CAN"}, QuoteResponse_0);
  set_field(msg, FIX::CustOrderCapacity{3}, QuoteResponse_0);
  set_field(msg, FIX::EncodedText{"DATA_14045584"}, QuoteResponse_0);
  set_field(msg, FIX::EncodedTextLen{1333671769}, QuoteResponse_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_1249208651"}, QuoteResponse_0);
  set_field(msg, FIX::ExDestinationIDSource{'B'}, QuoteResponse_0);
  set_field(msg, FIX::IOIID{"STRING_1974245457"}, QuoteResponse_0);
  FIX::MidPx MidPx_5;
  MidPx_5.setString("11807431");
set_field(msg, MidPx_5, QuoteResponse_0);
  FIX::MidYield MidYield_5;
  MidYield_5.setString("71.310000");
set_field(msg, MidYield_5, QuoteResponse_0);
  FIX::MinBidSize MinBidSize_1;
  MinBidSize_1.setString("10077705");
set_field(msg, MinBidSize_1, QuoteResponse_0);
  FIX::MinOfferSize MinOfferSize_1;
  MinOfferSize_1.setString("20988374");
set_field(msg, MinOfferSize_1, QuoteResponse_0);
  FIX::MinQty MinQty_14;
  MinQty_14.setString("21364272");
set_field(msg, MinQty_14, QuoteResponse_0);
  FIX::MktBidPx MktBidPx_1;
  MktBidPx_1.setString("16881385");
set_field(msg, MktBidPx_1, QuoteResponse_0);
  FIX::MktOfferPx MktOfferPx_1;
  MktOfferPx_1.setString("714660");
set_field(msg, MktOfferPx_1, QuoteResponse_0);
  FIX::OfferForwardPoints OfferForwardPoints_5;
  OfferForwardPoints_5.setString("7506250");
set_field(msg, OfferForwardPoints_5, QuoteResponse_0);
  FIX::OfferForwardPoints2 OfferForwardPoints2_5;
  OfferForwardPoints2_5.setString("5719578");
set_field(msg, OfferForwardPoints2_5, QuoteResponse_0);
  FIX::OfferPx OfferPx_5;
  OfferPx_5.setString("600068");
set_field(msg, OfferPx_5, QuoteResponse_0);
  FIX::OfferSize OfferSize_5;
  OfferSize_5.setString("746982");
set_field(msg, OfferSize_5, QuoteResponse_0);
  FIX::OfferSpotRate OfferSpotRate_5;
  OfferSpotRate_5.setString("16764498");
set_field(msg, OfferSpotRate_5, QuoteResponse_0);
  FIX::OfferYield OfferYield_5;
  OfferYield_5.setString("48.530000");
set_field(msg, OfferYield_5, QuoteResponse_0);
  set_field(msg, FIX::OrdType{'D'}, QuoteResponse_0);
  set_field(msg, FIX::OrderCapacity{'G'}, QuoteResponse_0);
  FIX::OrderQty2 OrderQty2_12;
  OrderQty2_12.setString("17747833");
set_field(msg, OrderQty2_12, QuoteResponse_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_9"}, QuoteResponse_0);
  set_field(msg, FIX::PreTradeAnonymity{false}, QuoteResponse_0);
  FIX::Price Price_21;
  Price_21.setString("9555163");
set_field(msg, Price_21, QuoteResponse_0);
  set_field(msg, FIX::PriceType{9}, QuoteResponse_0);
  set_field(msg, FIX::QuoteID{"STRING_162519918"}, QuoteResponse_0);
  set_field(msg, FIX::QuoteMsgID{"STRING_1927670498"}, QuoteResponse_0);
  set_field(msg, FIX::QuoteRespID{"STRING_1780323290"}, QuoteResponse_0);
  set_field(msg, FIX::QuoteRespType{5}, QuoteResponse_0);
  set_field(msg, FIX::QuoteType{3}, QuoteResponse_0);
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_1;
  SettlCurrBidFxRate_1.setString("15333242");
set_field(msg, SettlCurrBidFxRate_1, QuoteResponse_0);
  set_field(msg, FIX::SettlCurrFxRateCalc{'D'}, QuoteResponse_0);
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_1;
  SettlCurrOfferFxRate_1.setString("10475");
set_field(msg, SettlCurrOfferFxRate_1, QuoteResponse_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_635049268"}, QuoteResponse_0);
  set_field(msg, FIX::SettlDate2{"LOCALMKTDATE_1494510430"}, QuoteResponse_0);
  set_field(msg, FIX::SettlType{"STRING_2"}, QuoteResponse_0);
  set_field(msg, FIX::Side{'8'}, QuoteResponse_0);
  set_field(msg, FIX::Text{"STRING_1842667562"}, QuoteResponse_0);
  set_field(msg, FIX::TradingSessionID{"STRING_5"}, QuoteResponse_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_7"}, QuoteResponse_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(9, 8, 15, 17, 3, 2008)}, QuoteResponse_0);
  set_field(msg, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(11, 56, 28, 14, 12, 2015)}, QuoteResponse_0);
  all_values.push_back(QuoteResponse_0);

  all_compo_names.insert("QuoteResponse");

  // FinancingDetails
  multiset<string> FinancingDetails_22;
  set_field(msg, FIX::AgreementCurrency{"EUR"}, FinancingDetails_22);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1047136035"}, FinancingDetails_22);
  set_field(msg, FIX::AgreementDesc{"STRING_2102063338"}, FinancingDetails_22);
  set_field(msg, FIX::AgreementID{"STRING_1150082929"}, FinancingDetails_22);
  set_field(msg, FIX::DeliveryType{0}, FinancingDetails_22);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_769439161"}, FinancingDetails_22);
  FIX::MarginRatio MarginRatio_22;
  MarginRatio_22.setString("35.460000");
set_field(msg, MarginRatio_22, FinancingDetails_22);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1925830669"}, FinancingDetails_22);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_22);
  all_values.push_back(FinancingDetails_22);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_59;
  FIX::AttachmentPoint AttachmentPoint_59;
  AttachmentPoint_59.setString("28.140000");
set_field(msg, AttachmentPoint_59, Instrument_59);
  set_field(msg, FIX::CFICode{"STRING_1272857451"}, Instrument_59);
  set_field(msg, FIX::CPProgram{2}, Instrument_59);
  set_field(msg, FIX::CPRegType{"STRING_839281621"}, Instrument_59);
  FIX::CapPrice CapPrice_59;
  CapPrice_59.setString("9680413");
set_field(msg, CapPrice_59, Instrument_59);
  FIX::ContractMultiplier ContractMultiplier_59;
  ContractMultiplier_59.setString("14338761");
set_field(msg, ContractMultiplier_59, Instrument_59);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_59);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_652168930"}, Instrument_59);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1810111058"}, Instrument_59);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_150072942"}, Instrument_59);
  FIX::CouponRate CouponRate_59;
  CouponRate_59.setString("15.650000");
set_field(msg, CouponRate_59, Instrument_59);
  set_field(msg, FIX::CreditRating{"STRING_610820127"}, Instrument_59);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_2048692173"}, Instrument_59);
  FIX::DetachmentPoint DetachmentPoint_59;
  DetachmentPoint_59.setString("24.410000");
set_field(msg, DetachmentPoint_59, Instrument_59);
  set_field(msg, FIX::EncodedIssuer{"DATA_1087979082"}, Instrument_59);
  set_field(msg, FIX::EncodedIssuerLen{1640268960}, Instrument_59);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_577313049"}, Instrument_59);
  set_field(msg, FIX::EncodedSecurityDescLen{21152222}, Instrument_59);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_59);
  FIX::Factor Factor_59;
  Factor_59.setString("13819088");
set_field(msg, Factor_59, Instrument_59);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_59);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_59);
  FIX::FloorPrice FloorPrice_59;
  FloorPrice_59.setString("7516684");
set_field(msg, FloorPrice_59, Instrument_59);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_59);
  set_field(msg, FIX::InstrRegistry{"STRING_988117984"}, Instrument_59);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_59);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_211139463"}, Instrument_59);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1757557145"}, Instrument_59);
  set_field(msg, FIX::Issuer{"STRING_290191326"}, Instrument_59);
  set_field(msg, FIX::ListMethod{0}, Instrument_59);
  set_field(msg, FIX::LocaleOfIssue{"STRING_380560252"}, Instrument_59);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1461164140"}, Instrument_59);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1262343935"}, Instrument_59);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_978856409"}, Instrument_59);
  FIX::MinPriceIncrement MinPriceIncrement_59;
  MinPriceIncrement_59.setString("1529621");
set_field(msg, MinPriceIncrement_59, Instrument_59);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_59;
  MinPriceIncrementAmount_59.setString("829016");
set_field(msg, MinPriceIncrementAmount_59, Instrument_59);
  set_field(msg, FIX::NTPositionLimit{265248914}, Instrument_59);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_59;
  NotionalPercentageOutstanding_59.setString("63.560000");
set_field(msg, NotionalPercentageOutstanding_59, Instrument_59);
  set_field(msg, FIX::OptAttribute{'7'}, Instrument_59);
  FIX::OptPayoutAmount OptPayoutAmount_59;
  OptPayoutAmount_59.setString("20753599");
set_field(msg, OptPayoutAmount_59, Instrument_59);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_59);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_59;
  OriginalNotionalPercentageOutstanding_59.setString("21.480000");
set_field(msg, OriginalNotionalPercentageOutstanding_59, Instrument_59);
  set_field(msg, FIX::Pool{"STRING_538696451"}, Instrument_59);
  set_field(msg, FIX::PositionLimit{663187823}, Instrument_59);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_59);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1626675534"}, Instrument_59);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_59;
  PriceUnitOfMeasureQty_59.setString("1559731");
set_field(msg, PriceUnitOfMeasureQty_59, Instrument_59);
  set_field(msg, FIX::Product{7}, Instrument_59);
  set_field(msg, FIX::ProductComplex{"STRING_1647827756"}, Instrument_59);
  set_field(msg, FIX::PutOrCall{0}, Instrument_59);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1082619202"}, Instrument_59);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_406112448"}, Instrument_59);
  FIX::RepurchaseRate RepurchaseRate_59;
  RepurchaseRate_59.setString("68.840000");
set_field(msg, RepurchaseRate_59, Instrument_59);
  set_field(msg, FIX::RepurchaseTerm{1834287701}, Instrument_59);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_59);
  set_field(msg, FIX::SecurityDesc{"STRING_889291220"}, Instrument_59);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1588555481"}, Instrument_59);
  set_field(msg, FIX::SecurityGroup{"STRING_422672638"}, Instrument_59);
  set_field(msg, FIX::SecurityID{"STRING_499364718"}, Instrument_59);
  set_field(msg, FIX::SecurityIDSource{"STRING_5"}, Instrument_59);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_59);
  set_field(msg, FIX::SecuritySubType{"STRING_879924970"}, Instrument_59);
  set_field(msg, FIX::SecurityType{"STRING_EUFRN"}, Instrument_59);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_59);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_59);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1345389414"}, Instrument_59);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1757404710"}, Instrument_59);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_59);
  FIX::StrikeMultiplier StrikeMultiplier_59;
  StrikeMultiplier_59.setString("3449916");
set_field(msg, StrikeMultiplier_59, Instrument_59);
  FIX::StrikePrice StrikePrice_59;
  StrikePrice_59.setString("20519066");
set_field(msg, StrikePrice_59, Instrument_59);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_59);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_59;
  StrikePriceBoundaryPrecision_59.setString("1.450000");
set_field(msg, StrikePriceBoundaryPrecision_59, Instrument_59);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_59);
  FIX::StrikeValue StrikeValue_59;
  StrikeValue_59.setString("12349792");
set_field(msg, StrikeValue_59, Instrument_59);
  set_field(msg, FIX::Symbol{"STRING_1290381086"}, Instrument_59);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_59);
  set_field(msg, FIX::TimeUnit{"STRING_Yr"}, Instrument_59);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_59);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_59);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_59;
  UnitOfMeasureQty_59.setString("2585873");
set_field(msg, UnitOfMeasureQty_59, Instrument_59);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_59);
  all_values.push_back(Instrument_59);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_121;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_121);
    FIX::ComplexEventPrice ComplexEventPrice_121;
    ComplexEventPrice_121.setString("17605146");
set_field(noComplexEvents_0_0, ComplexEventPrice_121, ComplexEvents_NoComplexEvents_121);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_121);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_121;
    ComplexEventPriceBoundaryPrecision_121.setString("17.800000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_121, ComplexEvents_NoComplexEvents_121);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_121);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_121);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_121;
    ComplexOptPayoutAmount_121.setString("15484164");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_121, ComplexEvents_NoComplexEvents_121);
    all_values.push_back(ComplexEvents_NoComplexEvents_121);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_254;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 57, 47, 19, 9, 2004)}, ComplexEventDates_NoComplexEventDates_254);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 55, 33, 15, 10, 2011)}, ComplexEventDates_NoComplexEventDates_254);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_254);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_511;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 36, 8)}, ComplexEventTimes_NoComplexEventTimes_511);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 50, 58)}, ComplexEventTimes_NoComplexEventTimes_511);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_511);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_512;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 56, 39)}, ComplexEventTimes_NoComplexEventTimes_512);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 9, 32)}, ComplexEventTimes_NoComplexEventTimes_512);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_512);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_255;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 21, 9, 20, 6, 2001)}, ComplexEventDates_NoComplexEventDates_255);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 15, 21, 3, 1, 2014)}, ComplexEventDates_NoComplexEventDates_255);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_255);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_513;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 4, 23)}, ComplexEventTimes_NoComplexEventTimes_513);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 6, 35)}, ComplexEventTimes_NoComplexEventTimes_513);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_513);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_122;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_122);
    FIX::ComplexEventPrice ComplexEventPrice_122;
    ComplexEventPrice_122.setString("3853677");
set_field(noComplexEvents_0_1, ComplexEventPrice_122, ComplexEvents_NoComplexEvents_122);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_122);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_122;
    ComplexEventPriceBoundaryPrecision_122.setString("99.930000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_122, ComplexEvents_NoComplexEvents_122);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_122);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_122);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_122;
    ComplexOptPayoutAmount_122.setString("17167731");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_122, ComplexEvents_NoComplexEvents_122);
    all_values.push_back(ComplexEvents_NoComplexEvents_122);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_256;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 8, 31, 15, 7, 2008)}, ComplexEventDates_NoComplexEventDates_256);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 57, 12, 1, 2, 2001)}, ComplexEventDates_NoComplexEventDates_256);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_256);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_514;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 37, 48)}, ComplexEventTimes_NoComplexEventTimes_514);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 54, 34)}, ComplexEventTimes_NoComplexEventTimes_514);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_514);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_515;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 58, 48)}, ComplexEventTimes_NoComplexEventTimes_515);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 3, 0)}, ComplexEventTimes_NoComplexEventTimes_515);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_515);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_516;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 1, 58)}, ComplexEventTimes_NoComplexEventTimes_516);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 48, 45)}, ComplexEventTimes_NoComplexEventTimes_516);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_516);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_257;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 50, 54, 3, 10, 2009)}, ComplexEventDates_NoComplexEventDates_257);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 4, 25, 5, 6, 2017)}, ComplexEventDates_NoComplexEventDates_257);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_257);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_517;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 6, 20)}, ComplexEventTimes_NoComplexEventTimes_517);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 15, 24)}, ComplexEventTimes_NoComplexEventTimes_517);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_517);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_518;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 17, 36)}, ComplexEventTimes_NoComplexEventTimes_518);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 17, 1)}, ComplexEventTimes_NoComplexEventTimes_518);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_518);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_258;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 51, 51, 10, 5, 2001)}, ComplexEventDates_NoComplexEventDates_258);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 23, 44, 12, 9, 2001)}, ComplexEventDates_NoComplexEventDates_258);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_258);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_519;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 26, 5)}, ComplexEventTimes_NoComplexEventTimes_519);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 20, 53)}, ComplexEventTimes_NoComplexEventTimes_519);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_519);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_520;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 10, 45)}, ComplexEventTimes_NoComplexEventTimes_520);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 54, 36)}, ComplexEventTimes_NoComplexEventTimes_520);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_520);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_123;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_123);
    FIX::ComplexEventPrice ComplexEventPrice_123;
    ComplexEventPrice_123.setString("11460508");
set_field(noComplexEvents_0_2, ComplexEventPrice_123, ComplexEvents_NoComplexEvents_123);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_123);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_123;
    ComplexEventPriceBoundaryPrecision_123.setString("50.380000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_123, ComplexEvents_NoComplexEvents_123);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_123);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_123);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_123;
    ComplexOptPayoutAmount_123.setString("13655709");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_123, ComplexEvents_NoComplexEvents_123);
    all_values.push_back(ComplexEvents_NoComplexEvents_123);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_259;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 34, 7, 5, 11, 2016)}, ComplexEventDates_NoComplexEventDates_259);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 54, 43, 4, 1, 2013)}, ComplexEventDates_NoComplexEventDates_259);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_259);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_521;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 51, 10)}, ComplexEventTimes_NoComplexEventTimes_521);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 4, 40)}, ComplexEventTimes_NoComplexEventTimes_521);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_521);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_522;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 0, 7)}, ComplexEventTimes_NoComplexEventTimes_522);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 24, 23)}, ComplexEventTimes_NoComplexEventTimes_522);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_522);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_523;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 49, 10)}, ComplexEventTimes_NoComplexEventTimes_523);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 38, 13)}, ComplexEventTimes_NoComplexEventTimes_523);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_523);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_260;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 56, 27, 9, 4, 2009)}, ComplexEventDates_NoComplexEventDates_260);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 52, 32, 26, 7, 2012)}, ComplexEventDates_NoComplexEventDates_260);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_260);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_524;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 50, 1)}, ComplexEventTimes_NoComplexEventTimes_524);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 18, 1)}, ComplexEventTimes_NoComplexEventTimes_524);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_524);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_525;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 42, 20)}, ComplexEventTimes_NoComplexEventTimes_525);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 58, 55)}, ComplexEventTimes_NoComplexEventTimes_525);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_525);
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
    FIX50SP2::QuoteResponse::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_119;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1518664103"}, EvntGrp_NoEvents_119);
    FIX::EventPx EventPx_119;
    EventPx_119.setString("15753025");
set_field(noEvents_0_0, EventPx_119, EvntGrp_NoEvents_119);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1608146572"}, EvntGrp_NoEvents_119);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(15, 53, 27, 8, 11, 2012)}, EvntGrp_NoEvents_119);
    set_field(noEvents_0_0, FIX::EventType{11}, EvntGrp_NoEvents_119);
    all_values.push_back(EvntGrp_NoEvents_119);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_120;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_275933072"}, EvntGrp_NoEvents_120);
    FIX::EventPx EventPx_120;
    EventPx_120.setString("16210232");
set_field(noEvents_0_1, EventPx_120, EvntGrp_NoEvents_120);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1934597201"}, EvntGrp_NoEvents_120);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(6, 23, 28, 4, 11, 2004)}, EvntGrp_NoEvents_120);
    set_field(noEvents_0_1, FIX::EventType{14}, EvntGrp_NoEvents_120);
    all_values.push_back(EvntGrp_NoEvents_120);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteResponse::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_111;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_471991185"}, InstrumentParties_NoInstrumentParties_111);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_111);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{222620923}, InstrumentParties_NoInstrumentParties_111);
    all_values.push_back(InstrumentParties_NoInstrumentParties_111);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1802328949"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{2012000862}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_226);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1405234995"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{639040866}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_227);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_112;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1383181317"}, InstrumentParties_NoInstrumentParties_112);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_112);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{99703791}, InstrumentParties_NoInstrumentParties_112);
    all_values.push_back(InstrumentParties_NoInstrumentParties_112);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_185176090"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{228970064}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_228);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1549145670"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{896804862}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_229);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230;
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubID{"STRING_998922690"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230);
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubIDType{1404789802}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_230);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteResponse::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_120;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1274855762"}, SecAltIDGrp_NoSecurityAltID_120);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_878329422"}, SecAltIDGrp_NoSecurityAltID_120);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_120);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_121;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_632590738"}, SecAltIDGrp_NoSecurityAltID_121);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1455790229"}, SecAltIDGrp_NoSecurityAltID_121);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_121);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_118;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1493217564"}, SecurityXML_118);
  set_field(msg, FIX::SecurityXMLLen{1406845581}, SecurityXML_118);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_134458429"}, SecurityXML_118);
  all_values.push_back(SecurityXML_118);
  all_compo_names.insert("..");

  // LegQuotGrp
  // Group LegQuotGrp.NoLegs
  {
    FIX50SP2::QuoteResponse::NoLegs noLegs_0_0;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_2;
    FIX::LegBidForwardPoints LegBidForwardPoints_2;
    LegBidForwardPoints_2.setString("18083023");
set_field(noLegs_0_0, LegBidForwardPoints_2, LegQuotGrp_NoLegs_2);
    FIX::LegBidPx LegBidPx_2;
    LegBidPx_2.setString("15641309");
set_field(noLegs_0_0, LegBidPx_2, LegQuotGrp_NoLegs_2);
    FIX::LegOfferForwardPoints LegOfferForwardPoints_2;
    LegOfferForwardPoints_2.setString("21106639");
set_field(noLegs_0_0, LegOfferForwardPoints_2, LegQuotGrp_NoLegs_2);
    FIX::LegOfferPx LegOfferPx_2;
    LegOfferPx_2.setString("10379992");
set_field(noLegs_0_0, LegOfferPx_2, LegQuotGrp_NoLegs_2);
    FIX::LegOrderQty LegOrderQty_11;
    LegOrderQty_11.setString("20361221");
set_field(noLegs_0_0, LegOrderQty_11, LegQuotGrp_NoLegs_2);
    set_field(noLegs_0_0, FIX::LegPriceType{500433405}, LegQuotGrp_NoLegs_2);
    FIX::LegQty LegQty_11;
    LegQty_11.setString("12606202");
set_field(noLegs_0_0, LegQty_11, LegQuotGrp_NoLegs_2);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_1584147460"}, LegQuotGrp_NoLegs_2);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_155278706"}, LegQuotGrp_NoLegs_2);
    set_field(noLegs_0_0, FIX::LegSettlType{'1'}, LegQuotGrp_NoLegs_2);
    set_field(noLegs_0_0, FIX::LegSwapType{1}, LegQuotGrp_NoLegs_2);
    all_values.push_back(LegQuotGrp_NoLegs_2);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_81;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_794319573"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{360835094}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1674952659"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{894023364}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1294829896"}, InstrumentLeg_81);
    FIX::LegContractMultiplier LegContractMultiplier_81;
    LegContractMultiplier_81.setString("18601287");
set_field(noLegs_0_0, LegContractMultiplier_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1122993428}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_696491918"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_609449963"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2121916119"}, InstrumentLeg_81);
    FIX::LegCouponRate LegCouponRate_81;
    LegCouponRate_81.setString("17.200000");
set_field(noLegs_0_0, LegCouponRate_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1454927148"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_2087517886"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{557594814}, InstrumentLeg_81);
    FIX::LegFactor LegFactor_81;
    LegFactor_81.setString("1778614");
set_field(noLegs_0_0, LegFactor_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1346879820}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_692053243"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2107572156"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1007698535"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_108700510"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_2070752485"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_2045697822"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_2144822611"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_423702242"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_81);
    FIX::LegOptionRatio LegOptionRatio_81;
    LegOptionRatio_81.setString("15814864");
set_field(noLegs_0_0, LegOptionRatio_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_578980949"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_136488161"}, InstrumentLeg_81);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_81;
    LegPriceUnitOfMeasureQty_81.setString("2759015");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegProduct{1373300522}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegPutOrCall{497323255}, InstrumentLeg_81);
    FIX::LegRatioQty LegRatioQty_81;
    LegRatioQty_81.setString("19508542");
set_field(noLegs_0_0, LegRatioQty_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_119840238"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1792153152"}, InstrumentLeg_81);
    FIX::LegRepurchaseRate LegRepurchaseRate_81;
    LegRepurchaseRate_81.setString("93.430000");
set_field(noLegs_0_0, LegRepurchaseRate_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1242833666}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_341161422"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_125465659"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1217266137"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_294959495"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1580392807"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_319070723"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1520427046"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_81);
    FIX::LegStrikePrice LegStrikePrice_81;
    LegStrikePrice_81.setString("7198232");
set_field(noLegs_0_0, LegStrikePrice_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1568718781"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1265036909"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1727521753"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1677419291"}, InstrumentLeg_81);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_81;
    LegUnitOfMeasureQty_81.setString("11883057");
set_field(noLegs_0_0, LegUnitOfMeasureQty_81, InstrumentLeg_81);
    all_values.push_back(InstrumentLeg_81);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_167;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1674758254"}, LegSecAltIDGrp_NoLegSecurityAltID_167);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1612007989"}, LegSecAltIDGrp_NoLegSecurityAltID_167);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_167);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_6;
    set_field(noLegs_0_0, FIX::LegBenchmarkCurveCurrency{"USD"}, LegBenchmarkCurveData_6);
    set_field(noLegs_0_0, FIX::LegBenchmarkCurveName{"STRING_43505290"}, LegBenchmarkCurveData_6);
    set_field(noLegs_0_0, FIX::LegBenchmarkCurvePoint{"STRING_773574826"}, LegBenchmarkCurveData_6);
    FIX::LegBenchmarkPrice LegBenchmarkPrice_6;
    LegBenchmarkPrice_6.setString("13846626");
set_field(noLegs_0_0, LegBenchmarkPrice_6, LegBenchmarkCurveData_6);
    set_field(noLegs_0_0, FIX::LegBenchmarkPriceType{1416805812}, LegBenchmarkCurveData_6);
    all_values.push_back(LegBenchmarkCurveData_6);
    all_compo_names.insert("...NoLegs.");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_24;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_1188033208"}, LegStipulations_NoLegStipulations_24);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_1536646050"}, LegStipulations_NoLegStipulations_24);
      all_values.push_back(LegStipulations_NoLegStipulations_24);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_116;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_704048903"}, NestedParties_NoNestedPartyIDs_116);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_116);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1256729008}, NestedParties_NoNestedPartyIDs_116);
      all_values.push_back(NestedParties_NoNestedPartyIDs_116);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_237;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1849262206"}, NstdPtysSubGrp_NoNestedPartySubIDs_237);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1551688503}, NstdPtysSubGrp_NoNestedPartySubIDs_237);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_237);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_117;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_262423722"}, NestedParties_NoNestedPartyIDs_117);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_117);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{531291845}, NestedParties_NoNestedPartyIDs_117);
      all_values.push_back(NestedParties_NoNestedPartyIDs_117);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_238;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_897514819"}, NstdPtysSubGrp_NoNestedPartySubIDs_238);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1836240247}, NstdPtysSubGrp_NoNestedPartySubIDs_238);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_238);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_239;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_355190338"}, NstdPtysSubGrp_NoNestedPartySubIDs_239);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{318749952}, NstdPtysSubGrp_NoNestedPartySubIDs_239);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_239);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoLegs noLegs_0_1;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_3;
    FIX::LegBidForwardPoints LegBidForwardPoints_3;
    LegBidForwardPoints_3.setString("9537935");
set_field(noLegs_0_1, LegBidForwardPoints_3, LegQuotGrp_NoLegs_3);
    FIX::LegBidPx LegBidPx_3;
    LegBidPx_3.setString("20827120");
set_field(noLegs_0_1, LegBidPx_3, LegQuotGrp_NoLegs_3);
    FIX::LegOfferForwardPoints LegOfferForwardPoints_3;
    LegOfferForwardPoints_3.setString("19961692");
set_field(noLegs_0_1, LegOfferForwardPoints_3, LegQuotGrp_NoLegs_3);
    FIX::LegOfferPx LegOfferPx_3;
    LegOfferPx_3.setString("21420992");
set_field(noLegs_0_1, LegOfferPx_3, LegQuotGrp_NoLegs_3);
    FIX::LegOrderQty LegOrderQty_12;
    LegOrderQty_12.setString("15609643");
set_field(noLegs_0_1, LegOrderQty_12, LegQuotGrp_NoLegs_3);
    set_field(noLegs_0_1, FIX::LegPriceType{1523443850}, LegQuotGrp_NoLegs_3);
    FIX::LegQty LegQty_12;
    LegQty_12.setString("16066235");
set_field(noLegs_0_1, LegQty_12, LegQuotGrp_NoLegs_3);
    set_field(noLegs_0_1, FIX::LegRefID{"STRING_50567388"}, LegQuotGrp_NoLegs_3);
    set_field(noLegs_0_1, FIX::LegSettlDate{"LOCALMKTDATE_484721232"}, LegQuotGrp_NoLegs_3);
    set_field(noLegs_0_1, FIX::LegSettlType{'1'}, LegQuotGrp_NoLegs_3);
    set_field(noLegs_0_1, FIX::LegSwapType{5}, LegQuotGrp_NoLegs_3);
    all_values.push_back(LegQuotGrp_NoLegs_3);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_82;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1869383845"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{919451052}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_2095040297"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{909933405}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_308613454"}, InstrumentLeg_82);
    FIX::LegContractMultiplier LegContractMultiplier_82;
    LegContractMultiplier_82.setString("8631242");
set_field(noLegs_0_1, LegContractMultiplier_82, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1613982309}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_940609523"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_2119853243"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_296013223"}, InstrumentLeg_82);
    FIX::LegCouponRate LegCouponRate_82;
    LegCouponRate_82.setString("80.820000");
set_field(noLegs_0_1, LegCouponRate_82, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1524058099"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegCurrency{"CHF"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_2055349944"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{193804065}, InstrumentLeg_82);
    FIX::LegFactor LegFactor_82;
    LegFactor_82.setString("15607521");
set_field(noLegs_0_1, LegFactor_82, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1744106543}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_548994403"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1879502134"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_550416404"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_484222847"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1728187730"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_545032011"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_2045187218"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1104147932"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'4'}, InstrumentLeg_82);
    FIX::LegOptionRatio LegOptionRatio_82;
    LegOptionRatio_82.setString("20957546");
set_field(noLegs_0_1, LegOptionRatio_82, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1588869164"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1654300848"}, InstrumentLeg_82);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_82;
    LegPriceUnitOfMeasureQty_82.setString("7724131");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_82, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegProduct{1310769361}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegPutOrCall{426268252}, InstrumentLeg_82);
    FIX::LegRatioQty LegRatioQty_82;
    LegRatioQty_82.setString("7199698");
set_field(noLegs_0_1, LegRatioQty_82, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_73219119"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_734881706"}, InstrumentLeg_82);
    FIX::LegRepurchaseRate LegRepurchaseRate_82;
    LegRepurchaseRate_82.setString("40.580000");
set_field(noLegs_0_1, LegRepurchaseRate_82, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1687201428}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1675491230"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1555463653"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1983214651"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_170395664"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_932038104"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_394167949"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegSide{'8'}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_839904401"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_82);
    FIX::LegStrikePrice LegStrikePrice_82;
    LegStrikePrice_82.setString("4365272");
set_field(noLegs_0_1, LegStrikePrice_82, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1136966418"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_2126403696"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_986943700"}, InstrumentLeg_82);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1621189265"}, InstrumentLeg_82);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_82;
    LegUnitOfMeasureQty_82.setString("17071077");
set_field(noLegs_0_1, LegUnitOfMeasureQty_82, InstrumentLeg_82);
    all_values.push_back(InstrumentLeg_82);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_168;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1518892835"}, LegSecAltIDGrp_NoLegSecurityAltID_168);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_663772062"}, LegSecAltIDGrp_NoLegSecurityAltID_168);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_168);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_169;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_1536147672"}, LegSecAltIDGrp_NoLegSecurityAltID_169);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1467163794"}, LegSecAltIDGrp_NoLegSecurityAltID_169);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_169);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_170;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_105157578"}, LegSecAltIDGrp_NoLegSecurityAltID_170);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_1042964872"}, LegSecAltIDGrp_NoLegSecurityAltID_170);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_170);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_7;
    set_field(noLegs_0_1, FIX::LegBenchmarkCurveCurrency{"GBP"}, LegBenchmarkCurveData_7);
    set_field(noLegs_0_1, FIX::LegBenchmarkCurveName{"STRING_1469233124"}, LegBenchmarkCurveData_7);
    set_field(noLegs_0_1, FIX::LegBenchmarkCurvePoint{"STRING_812063143"}, LegBenchmarkCurveData_7);
    FIX::LegBenchmarkPrice LegBenchmarkPrice_7;
    LegBenchmarkPrice_7.setString("14891460");
set_field(noLegs_0_1, LegBenchmarkPrice_7, LegBenchmarkCurveData_7);
    set_field(noLegs_0_1, FIX::LegBenchmarkPriceType{56631183}, LegBenchmarkCurveData_7);
    all_values.push_back(LegBenchmarkCurveData_7);
    all_compo_names.insert("...NoLegs.");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_25;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_1028863839"}, LegStipulations_NoLegStipulations_25);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_1732122413"}, LegStipulations_NoLegStipulations_25);
      all_values.push_back(LegStipulations_NoLegStipulations_25);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_118;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_864594842"}, NestedParties_NoNestedPartyIDs_118);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_118);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{587691663}, NestedParties_NoNestedPartyIDs_118);
      all_values.push_back(NestedParties_NoNestedPartyIDs_118);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_240;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_588667456"}, NstdPtysSubGrp_NoNestedPartySubIDs_240);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1427596064}, NstdPtysSubGrp_NoNestedPartySubIDs_240);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_240);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_119;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_1846734806"}, NestedParties_NoNestedPartyIDs_119);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_119);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{1864123361}, NestedParties_NoNestedPartyIDs_119);
      all_values.push_back(NestedParties_NoNestedPartyIDs_119);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_241;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_814489067"}, NstdPtysSubGrp_NoNestedPartySubIDs_241);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{703583413}, NstdPtysSubGrp_NoNestedPartySubIDs_241);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_241);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_120;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_309923193"}, NestedParties_NoNestedPartyIDs_120);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_120);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{88075477}, NestedParties_NoNestedPartyIDs_120);
      all_values.push_back(NestedParties_NoNestedPartyIDs_120);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_242;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_1037885260"}, NstdPtysSubGrp_NoNestedPartySubIDs_242);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{1624223150}, NstdPtysSubGrp_NoNestedPartySubIDs_242);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_242);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_243;
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubID{"STRING_1148496175"}, NstdPtysSubGrp_NoNestedPartySubIDs_243);
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubIDType{1143042838}, NstdPtysSubGrp_NoNestedPartySubIDs_243);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_243);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_244;
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubID{"STRING_519704374"}, NstdPtysSubGrp_NoNestedPartySubIDs_244);
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubIDType{1240589495}, NstdPtysSubGrp_NoNestedPartySubIDs_244);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_244);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoLegs noLegs_0_2;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_4;
    FIX::LegBidForwardPoints LegBidForwardPoints_4;
    LegBidForwardPoints_4.setString("4114861");
set_field(noLegs_0_2, LegBidForwardPoints_4, LegQuotGrp_NoLegs_4);
    FIX::LegBidPx LegBidPx_4;
    LegBidPx_4.setString("19889374");
set_field(noLegs_0_2, LegBidPx_4, LegQuotGrp_NoLegs_4);
    FIX::LegOfferForwardPoints LegOfferForwardPoints_4;
    LegOfferForwardPoints_4.setString("20526526");
set_field(noLegs_0_2, LegOfferForwardPoints_4, LegQuotGrp_NoLegs_4);
    FIX::LegOfferPx LegOfferPx_4;
    LegOfferPx_4.setString("19006321");
set_field(noLegs_0_2, LegOfferPx_4, LegQuotGrp_NoLegs_4);
    FIX::LegOrderQty LegOrderQty_13;
    LegOrderQty_13.setString("20455686");
set_field(noLegs_0_2, LegOrderQty_13, LegQuotGrp_NoLegs_4);
    set_field(noLegs_0_2, FIX::LegPriceType{152842544}, LegQuotGrp_NoLegs_4);
    FIX::LegQty LegQty_13;
    LegQty_13.setString("7820123");
set_field(noLegs_0_2, LegQty_13, LegQuotGrp_NoLegs_4);
    set_field(noLegs_0_2, FIX::LegRefID{"STRING_1630207447"}, LegQuotGrp_NoLegs_4);
    set_field(noLegs_0_2, FIX::LegSettlDate{"LOCALMKTDATE_1955979751"}, LegQuotGrp_NoLegs_4);
    set_field(noLegs_0_2, FIX::LegSettlType{'1'}, LegQuotGrp_NoLegs_4);
    set_field(noLegs_0_2, FIX::LegSwapType{1}, LegQuotGrp_NoLegs_4);
    all_values.push_back(LegQuotGrp_NoLegs_4);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_83;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_396187767"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{757886366}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1973909332"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{1823783831}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_457137524"}, InstrumentLeg_83);
    FIX::LegContractMultiplier LegContractMultiplier_83;
    LegContractMultiplier_83.setString("6619947");
set_field(noLegs_0_2, LegContractMultiplier_83, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{1540423544}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_1293355100"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_1476483770"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_96523310"}, InstrumentLeg_83);
    FIX::LegCouponRate LegCouponRate_83;
    LegCouponRate_83.setString("82.930000");
set_field(noLegs_0_2, LegCouponRate_83, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_1850596967"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegCurrency{"USD"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_740998579"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{1808821937}, InstrumentLeg_83);
    FIX::LegFactor LegFactor_83;
    LegFactor_83.setString("2856232");
set_field(noLegs_0_2, LegFactor_83, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{1884041418}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_181042664"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1526212696"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_148043900"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_22496515"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1431381687"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_2048676090"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_2068065197"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_1584224232"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'6'}, InstrumentLeg_83);
    FIX::LegOptionRatio LegOptionRatio_83;
    LegOptionRatio_83.setString("15507889");
set_field(noLegs_0_2, LegOptionRatio_83, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_1392720335"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_182328397"}, InstrumentLeg_83);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_83;
    LegPriceUnitOfMeasureQty_83.setString("7885472");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_83, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegProduct{1788908102}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegPutOrCall{940214764}, InstrumentLeg_83);
    FIX::LegRatioQty LegRatioQty_83;
    LegRatioQty_83.setString("6149729");
set_field(noLegs_0_2, LegRatioQty_83, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1465208286"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_1397352288"}, InstrumentLeg_83);
    FIX::LegRepurchaseRate LegRepurchaseRate_83;
    LegRepurchaseRate_83.setString("76.110000");
set_field(noLegs_0_2, LegRepurchaseRate_83, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{858148182}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_543223741"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_605967733"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_954671492"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_2146502034"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_309081053"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_1139270280"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegSide{'1'}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1050079632"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_83);
    FIX::LegStrikePrice LegStrikePrice_83;
    LegStrikePrice_83.setString("7866374");
set_field(noLegs_0_2, LegStrikePrice_83, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_981651233"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_947981310"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_934681303"}, InstrumentLeg_83);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1004147748"}, InstrumentLeg_83);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_83;
    LegUnitOfMeasureQty_83.setString("2318793");
set_field(noLegs_0_2, LegUnitOfMeasureQty_83, InstrumentLeg_83);
    all_values.push_back(InstrumentLeg_83);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_171;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_924729297"}, LegSecAltIDGrp_NoLegSecurityAltID_171);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_1816103581"}, LegSecAltIDGrp_NoLegSecurityAltID_171);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_171);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_172;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_1519078567"}, LegSecAltIDGrp_NoLegSecurityAltID_172);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_328034645"}, LegSecAltIDGrp_NoLegSecurityAltID_172);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_172);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_173;
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltID{"STRING_1061340269"}, LegSecAltIDGrp_NoLegSecurityAltID_173);
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltIDSource{"STRING_1701406965"}, LegSecAltIDGrp_NoLegSecurityAltID_173);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_173);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_8;
    set_field(noLegs_0_2, FIX::LegBenchmarkCurveCurrency{"CAN"}, LegBenchmarkCurveData_8);
    set_field(noLegs_0_2, FIX::LegBenchmarkCurveName{"STRING_494138081"}, LegBenchmarkCurveData_8);
    set_field(noLegs_0_2, FIX::LegBenchmarkCurvePoint{"STRING_1731554778"}, LegBenchmarkCurveData_8);
    FIX::LegBenchmarkPrice LegBenchmarkPrice_8;
    LegBenchmarkPrice_8.setString("204893");
set_field(noLegs_0_2, LegBenchmarkPrice_8, LegBenchmarkCurveData_8);
    set_field(noLegs_0_2, FIX::LegBenchmarkPriceType{1891490369}, LegBenchmarkCurveData_8);
    all_values.push_back(LegBenchmarkCurveData_8);
    all_compo_names.insert("...NoLegs.");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_26;
      set_field(noLegStipulations_2_1_0, FIX::LegStipulationType{"STRING_878637544"}, LegStipulations_NoLegStipulations_26);
      set_field(noLegStipulations_2_1_0, FIX::LegStipulationValue{"STRING_287230462"}, LegStipulations_NoLegStipulations_26);
      all_values.push_back(LegStipulations_NoLegStipulations_26);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_2_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_27;
      set_field(noLegStipulations_2_1_1, FIX::LegStipulationType{"STRING_1467006475"}, LegStipulations_NoLegStipulations_27);
      set_field(noLegStipulations_2_1_1, FIX::LegStipulationValue{"STRING_1833309036"}, LegStipulations_NoLegStipulations_27);
      all_values.push_back(LegStipulations_NoLegStipulations_27);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_2_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_28;
      set_field(noLegStipulations_2_1_2, FIX::LegStipulationType{"STRING_286248849"}, LegStipulations_NoLegStipulations_28);
      set_field(noLegStipulations_2_1_2, FIX::LegStipulationValue{"STRING_1776087528"}, LegStipulations_NoLegStipulations_28);
      all_values.push_back(LegStipulations_NoLegStipulations_28);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_121;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_1569877909"}, NestedParties_NoNestedPartyIDs_121);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_121);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{1625704238}, NestedParties_NoNestedPartyIDs_121);
      all_values.push_back(NestedParties_NoNestedPartyIDs_121);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_245;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_1465320915"}, NstdPtysSubGrp_NoNestedPartySubIDs_245);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{459871823}, NstdPtysSubGrp_NoNestedPartySubIDs_245);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_245);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_122;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_1939627833"}, NestedParties_NoNestedPartyIDs_122);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_122);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{1464019572}, NestedParties_NoNestedPartyIDs_122);
      all_values.push_back(NestedParties_NoNestedPartyIDs_122);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_246;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_1088392315"}, NstdPtysSubGrp_NoNestedPartySubIDs_246);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{241265221}, NstdPtysSubGrp_NoNestedPartySubIDs_246);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_246);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_247;
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubID{"STRING_1840127116"}, NstdPtysSubGrp_NoNestedPartySubIDs_247);
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubIDType{459987234}, NstdPtysSubGrp_NoNestedPartySubIDs_247);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_247);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_248;
        set_field(noNestedPartySubIDs_2_1_2_2, FIX::NestedPartySubID{"STRING_569299867"}, NstdPtysSubGrp_NoNestedPartySubIDs_248);
        set_field(noNestedPartySubIDs_2_1_2_2, FIX::NestedPartySubIDType{753983737}, NstdPtysSubGrp_NoNestedPartySubIDs_248);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_248);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_2);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_20;
  FIX::CashOrderQty CashOrderQty_20;
  CashOrderQty_20.setString("139105");
set_field(msg, CashOrderQty_20, OrderQtyData_20);
  FIX::OrderPercent OrderPercent_20;
  OrderPercent_20.setString("17.360000");
set_field(msg, OrderPercent_20, OrderQtyData_20);
  FIX::OrderQty OrderQty_28;
  OrderQty_28.setString("14567484");
set_field(msg, OrderQty_28, OrderQtyData_20);
  set_field(msg, FIX::RoundingDirection{'0'}, OrderQtyData_20);
  FIX::RoundingModulus RoundingModulus_20;
  RoundingModulus_20.setString("12699528");
set_field(msg, RoundingModulus_20, OrderQtyData_20);
  all_values.push_back(OrderQtyData_20);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_109;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_252055354"}, Parties_NoPartyIDs_109);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'C'}, Parties_NoPartyIDs_109);
    set_field(noPartyIDs_0_0, FIX::PartyRole{68}, Parties_NoPartyIDs_109);
    all_values.push_back(Parties_NoPartyIDs_109);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_221;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1450514435"}, PtysSubGrp_NoPartySubIDs_221);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{28}, PtysSubGrp_NoPartySubIDs_221);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_221);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_222;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_825534665"}, PtysSubGrp_NoPartySubIDs_222);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_222);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_222);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_223;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_719312775"}, PtysSubGrp_NoPartySubIDs_223);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_223);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_223);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_110;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1757801827"}, Parties_NoPartyIDs_110);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'F'}, Parties_NoPartyIDs_110);
    set_field(noPartyIDs_0_1, FIX::PartyRole{52}, Parties_NoPartyIDs_110);
    all_values.push_back(Parties_NoPartyIDs_110);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_224;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_657405188"}, PtysSubGrp_NoPartySubIDs_224);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_224);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_224);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_225;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1328157664"}, PtysSubGrp_NoPartySubIDs_225);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_225);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_225);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_226;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_1055743169"}, PtysSubGrp_NoPartySubIDs_226);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_226);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_226);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::QuoteResponse::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_9;
    set_field(noQuoteQualifiers_0_0, FIX::QuoteQualifier{'7'}, QuotQualGrp_NoQuoteQualifiers_9);
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_9);
    all_compo_names.insert("...NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoQuoteQualifiers noQuoteQualifiers_0_1;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_10;
    set_field(noQuoteQualifiers_0_1, FIX::QuoteQualifier{'7'}, QuotQualGrp_NoQuoteQualifiers_10);
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_10);
    all_compo_names.insert("...NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoQuoteQualifiers noQuoteQualifiers_0_2;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_11;
    set_field(noQuoteQualifiers_0_2, FIX::QuoteQualifier{'7'}, QuotQualGrp_NoQuoteQualifiers_11);
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_11);
    all_compo_names.insert("...NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_24;
  set_field(msg, FIX::BenchmarkCurveCurrency{"CAN"}, SpreadOrBenchmarkCurveData_24);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_SONIA"}, SpreadOrBenchmarkCurveData_24);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_811635187"}, SpreadOrBenchmarkCurveData_24);
  FIX::BenchmarkPrice BenchmarkPrice_24;
  BenchmarkPrice_24.setString("12510127");
set_field(msg, BenchmarkPrice_24, SpreadOrBenchmarkCurveData_24);
  set_field(msg, FIX::BenchmarkPriceType{1592857156}, SpreadOrBenchmarkCurveData_24);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_141389361"}, SpreadOrBenchmarkCurveData_24);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1503068104"}, SpreadOrBenchmarkCurveData_24);
  FIX::Spread Spread_24;
  Spread_24.setString("15763651");
set_field(msg, Spread_24, SpreadOrBenchmarkCurveData_24);
  all_values.push_back(SpreadOrBenchmarkCurveData_24);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::QuoteResponse::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_37;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_AMT"}, Stipulations_NoStipulations_37);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_879395903"}, Stipulations_NoStipulations_37);
    all_values.push_back(Stipulations_NoStipulations_37);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_104;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_720404938"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1958514218}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_963310960"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{968333865}, UnderlyingInstrument_104);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_104;
    UnderlyingAdjustedQuantity_104.setString("15688323");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_104, UnderlyingInstrument_104);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_104;
    UnderlyingAllocationPercent_104.setString("43.250000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_104, UnderlyingInstrument_104);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_104;
    UnderlyingAttachmentPoint_104.setString("56.670000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_496987844"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1818249514"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1092145302"}, UnderlyingInstrument_104);
    FIX::UnderlyingCapValue UnderlyingCapValue_104;
    UnderlyingCapValue_104.setString("18251455");
set_field(noUnderlyings_0_0, UnderlyingCapValue_104, UnderlyingInstrument_104);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_104;
    UnderlyingCashAmount_104.setString("17921906");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_104);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_104;
    UnderlyingContractMultiplier_104.setString("20942118");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{2007396960}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_748791461"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_675781758"}, UnderlyingInstrument_104);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_104;
    UnderlyingCouponRate_104.setString("95.130000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_103678187"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_104);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_104;
    UnderlyingCurrentValue_104.setString("9153133");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_104, UnderlyingInstrument_104);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_104;
    UnderlyingDetachmentPoint_104.setString("49.770000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_104, UnderlyingInstrument_104);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_104;
    UnderlyingDirtyPrice_104.setString("4126973");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_104, UnderlyingInstrument_104);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_104;
    UnderlyingEndPrice_104.setString("10567027");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_104, UnderlyingInstrument_104);
    FIX::UnderlyingEndValue UnderlyingEndValue_104;
    UnderlyingEndValue_104.setString("20253430");
set_field(noUnderlyings_0_0, UnderlyingEndValue_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1989062427}, UnderlyingInstrument_104);
    FIX::UnderlyingFXRate UnderlyingFXRate_104;
    UnderlyingFXRate_104.setString("14064838");
set_field(noUnderlyings_0_0, UnderlyingFXRate_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_104);
    FIX::UnderlyingFactor UnderlyingFactor_104;
    UnderlyingFactor_104.setString("7209746");
set_field(noUnderlyings_0_0, UnderlyingFactor_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1650482000}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_493134644"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_532005252"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_466309312"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1461468509"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_2100837649"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1627153638"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1521894176"}, UnderlyingInstrument_104);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_104;
    UnderlyingNotionalPercentageOutstanding_104.setString("18.450000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_104);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_104;
    UnderlyingOriginalNotionalPercentageOutstanding_104.setString("58.300000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_128003706"}, UnderlyingInstrument_104);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_104;
    UnderlyingPriceUnitOfMeasureQty_104.setString("9426264");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{466960653}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{74731898}, UnderlyingInstrument_104);
    FIX::UnderlyingPx UnderlyingPx_104;
    UnderlyingPx_104.setString("8025397");
set_field(noUnderlyings_0_0, UnderlyingPx_104, UnderlyingInstrument_104);
    FIX::UnderlyingQty UnderlyingQty_104;
    UnderlyingQty_104.setString("12157521");
set_field(noUnderlyings_0_0, UnderlyingQty_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_750513656"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1446959308"}, UnderlyingInstrument_104);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_104;
    UnderlyingRepurchaseRate_104.setString("3.020000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{21775883}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_266799463"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_87260028"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_544050861"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_679496774"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1143962764"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_421910294"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_521075553"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_402962930"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_194640000"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_104);
    FIX::UnderlyingStartValue UnderlyingStartValue_104;
    UnderlyingStartValue_104.setString("20534449");
set_field(noUnderlyings_0_0, UnderlyingStartValue_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_687774644"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_104);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_104;
    UnderlyingStrikePrice_104.setString("17595");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_104, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1727409489"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1999424233"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1523653681"}, UnderlyingInstrument_104);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_30267686"}, UnderlyingInstrument_104);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_104;
    UnderlyingUnitOfMeasureQty_104.setString("11498600");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_104, UnderlyingInstrument_104);
    all_values.push_back(UnderlyingInstrument_104);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_222;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_158271392"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_222);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_2092486571"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_222);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_222);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_223;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_309686517"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_223);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_233003290"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_223);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_223);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_213;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1525438631"}, UnderlyingStipulations_NoUnderlyingStips_213);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_983516946"}, UnderlyingStipulations_NoUnderlyingStips_213);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_213);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_215;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_697385285"}, UndlyInstrumentParties_NoUndlyInstrumentParties_215);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_215);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{313817842}, UndlyInstrumentParties_NoUndlyInstrumentParties_215);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_215);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1549343691"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{993314617}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_429);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_105;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1928608078"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1971253985}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1514390170"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{184087360}, UnderlyingInstrument_105);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_105;
    UnderlyingAdjustedQuantity_105.setString("184103");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_105, UnderlyingInstrument_105);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_105;
    UnderlyingAllocationPercent_105.setString("67.580000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_105, UnderlyingInstrument_105);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_105;
    UnderlyingAttachmentPoint_105.setString("86.430000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_706184982"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_235528597"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_462319238"}, UnderlyingInstrument_105);
    FIX::UnderlyingCapValue UnderlyingCapValue_105;
    UnderlyingCapValue_105.setString("7079444");
set_field(noUnderlyings_0_1, UnderlyingCapValue_105, UnderlyingInstrument_105);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_105;
    UnderlyingCashAmount_105.setString("19629380");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_105);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_105;
    UnderlyingContractMultiplier_105.setString("841145");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1993205773}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1464119912"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2074324033"}, UnderlyingInstrument_105);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_105;
    UnderlyingCouponRate_105.setString("35.170000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1409122835"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_105);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_105;
    UnderlyingCurrentValue_105.setString("91819");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_105, UnderlyingInstrument_105);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_105;
    UnderlyingDetachmentPoint_105.setString("55.330000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_105, UnderlyingInstrument_105);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_105;
    UnderlyingDirtyPrice_105.setString("12205137");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_105, UnderlyingInstrument_105);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_105;
    UnderlyingEndPrice_105.setString("562002");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_105, UnderlyingInstrument_105);
    FIX::UnderlyingEndValue UnderlyingEndValue_105;
    UnderlyingEndValue_105.setString("3118671");
set_field(noUnderlyings_0_1, UnderlyingEndValue_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{78322936}, UnderlyingInstrument_105);
    FIX::UnderlyingFXRate UnderlyingFXRate_105;
    UnderlyingFXRate_105.setString("3700181");
set_field(noUnderlyings_0_1, UnderlyingFXRate_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_105);
    FIX::UnderlyingFactor UnderlyingFactor_105;
    UnderlyingFactor_105.setString("16276666");
set_field(noUnderlyings_0_1, UnderlyingFactor_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1363332744}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_877636915"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1451436965"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_730239267"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1061724275"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1469847303"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1339196025"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1151772918"}, UnderlyingInstrument_105);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_105;
    UnderlyingNotionalPercentageOutstanding_105.setString("86.370000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_105);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_105;
    UnderlyingOriginalNotionalPercentageOutstanding_105.setString("21.560000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_736493125"}, UnderlyingInstrument_105);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_105;
    UnderlyingPriceUnitOfMeasureQty_105.setString("13901790");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1928351979}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{820607647}, UnderlyingInstrument_105);
    FIX::UnderlyingPx UnderlyingPx_105;
    UnderlyingPx_105.setString("12359011");
set_field(noUnderlyings_0_1, UnderlyingPx_105, UnderlyingInstrument_105);
    FIX::UnderlyingQty UnderlyingQty_105;
    UnderlyingQty_105.setString("12449882");
set_field(noUnderlyings_0_1, UnderlyingQty_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_747448032"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1239894703"}, UnderlyingInstrument_105);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_105;
    UnderlyingRepurchaseRate_105.setString("74.310000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{983974934}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1476891511"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_515809337"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_598456819"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_549921618"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_572009622"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_910323990"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_628244554"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_942027749"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_2006836475"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_105);
    FIX::UnderlyingStartValue UnderlyingStartValue_105;
    UnderlyingStartValue_105.setString("1578768");
set_field(noUnderlyings_0_1, UnderlyingStartValue_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_736989742"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_105);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_105;
    UnderlyingStrikePrice_105.setString("17987140");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_105, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_882228154"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_79828490"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_803003288"}, UnderlyingInstrument_105);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_910776791"}, UnderlyingInstrument_105);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_105;
    UnderlyingUnitOfMeasureQty_105.setString("16545531");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_105, UnderlyingInstrument_105);
    all_values.push_back(UnderlyingInstrument_105);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_224;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1647269917"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_224);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_897248525"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_224);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_224);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_214;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_320393916"}, UnderlyingStipulations_NoUnderlyingStips_214);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_2133149711"}, UnderlyingStipulations_NoUnderlyingStips_214);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_214);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_215;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1295468372"}, UnderlyingStipulations_NoUnderlyingStips_215);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1067841948"}, UnderlyingStipulations_NoUnderlyingStips_215);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_215);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_216;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1802095803"}, UndlyInstrumentParties_NoUndlyInstrumentParties_216);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_216);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{554968630}, UndlyInstrumentParties_NoUndlyInstrumentParties_216);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_216);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_502790053"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1104890248}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_430);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_217;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_742431114"}, UndlyInstrumentParties_NoUndlyInstrumentParties_217);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_217);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1733134803}, UndlyInstrumentParties_NoUndlyInstrumentParties_217);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_217);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1272466871"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1841562337}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_431);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1842335709"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{2009456614}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_432);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1253943188"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{582968174}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_433);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_218;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1660686984"}, UndlyInstrumentParties_NoUndlyInstrumentParties_218);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_218);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{662796664}, UndlyInstrumentParties_NoUndlyInstrumentParties_218);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_218);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_899464485"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{169866129}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_434);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_19;
  FIX::Yield Yield_19;
  Yield_19.setString("84.210000");
set_field(msg, Yield_19, YieldData_19);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_399250754"}, YieldData_19);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1067114654"}, YieldData_19);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_19;
  YieldRedemptionPrice_19.setString("6362985");
set_field(msg, YieldRedemptionPrice_19, YieldData_19);
  set_field(msg, FIX::YieldRedemptionPriceType{719644670}, YieldData_19);
  set_field(msg, FIX::YieldType{"STRING_SEMIANNUAL"}, YieldData_19);
  all_values.push_back(YieldData_19);
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
