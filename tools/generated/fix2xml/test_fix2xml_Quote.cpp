#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Quote.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Quote, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::Quote msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Quote_0;
  set_field(msg, FIX::Account{"STRING_35938836"}, Quote_0);
  set_field(msg, FIX::AccountType{6}, Quote_0);
  set_field(msg, FIX::AcctIDSource{99}, Quote_0);
  FIX::BidForwardPoints BidForwardPoints_12;
  BidForwardPoints_12.setString("14511736");
set_field(msg, BidForwardPoints_12, Quote_0);
  FIX::BidForwardPoints2 BidForwardPoints2_12;
  BidForwardPoints2_12.setString("20679105");
set_field(msg, BidForwardPoints2_12, Quote_0);
  FIX::BidPx BidPx_12;
  BidPx_12.setString("11857658");
set_field(msg, BidPx_12, Quote_0);
  FIX::BidSize BidSize_12;
  BidSize_12.setString("11440940");
set_field(msg, BidSize_12, Quote_0);
  FIX::BidSpotRate BidSpotRate_12;
  BidSpotRate_12.setString("14615302");
set_field(msg, BidSpotRate_12, Quote_0);
  FIX::BidSwapPoints BidSwapPoints_0;
  BidSwapPoints_0.setString("1440345");
set_field(msg, BidSwapPoints_0, Quote_0);
  FIX::BidYield BidYield_12;
  BidYield_12.setString("93.050000");
set_field(msg, BidYield_12, Quote_0);
  set_field(msg, FIX::BookingType{0}, Quote_0);
  set_field(msg, FIX::CommType{'6'}, Quote_0);
  FIX::Commission Commission_24;
  Commission_24.setString("12932233");
set_field(msg, Commission_24, Quote_0);
  set_field(msg, FIX::Currency{"USD"}, Quote_0);
  set_field(msg, FIX::CustOrderCapacity{4}, Quote_0);
  set_field(msg, FIX::EncodedText{"DATA_765090435"}, Quote_0);
  set_field(msg, FIX::EncodedTextLen{1711990359}, Quote_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_1511339453"}, Quote_0);
  set_field(msg, FIX::ExDestinationIDSource{'B'}, Quote_0);
  FIX::MidPx MidPx_12;
  MidPx_12.setString("868538");
set_field(msg, MidPx_12, Quote_0);
  FIX::MidYield MidYield_12;
  MidYield_12.setString("96.150000");
set_field(msg, MidYield_12, Quote_0);
  FIX::MinBidSize MinBidSize_0;
  MinBidSize_0.setString("6149259");
set_field(msg, MinBidSize_0, Quote_0);
  FIX::MinOfferSize MinOfferSize_0;
  MinOfferSize_0.setString("4877035");
set_field(msg, MinOfferSize_0, Quote_0);
  FIX::MinQty MinQty_15;
  MinQty_15.setString("20807427");
set_field(msg, MinQty_15, Quote_0);
  FIX::MktBidPx MktBidPx_0;
  MktBidPx_0.setString("470279");
set_field(msg, MktBidPx_0, Quote_0);
  FIX::MktOfferPx MktOfferPx_0;
  MktOfferPx_0.setString("12201325");
set_field(msg, MktOfferPx_0, Quote_0);
  FIX::OfferForwardPoints OfferForwardPoints_12;
  OfferForwardPoints_12.setString("1787129");
set_field(msg, OfferForwardPoints_12, Quote_0);
  FIX::OfferForwardPoints2 OfferForwardPoints2_12;
  OfferForwardPoints2_12.setString("13803525");
set_field(msg, OfferForwardPoints2_12, Quote_0);
  FIX::OfferPx OfferPx_12;
  OfferPx_12.setString("15780930");
set_field(msg, OfferPx_12, Quote_0);
  FIX::OfferSize OfferSize_12;
  OfferSize_12.setString("20532108");
set_field(msg, OfferSize_12, Quote_0);
  FIX::OfferSpotRate OfferSpotRate_12;
  OfferSpotRate_12.setString("14162913");
set_field(msg, OfferSpotRate_12, Quote_0);
  FIX::OfferSwapPoints OfferSwapPoints_0;
  OfferSwapPoints_0.setString("1893812");
set_field(msg, OfferSwapPoints_0, Quote_0);
  FIX::OfferYield OfferYield_12;
  OfferYield_12.setString("15.820000");
set_field(msg, OfferYield_12, Quote_0);
  set_field(msg, FIX::OrdType{'6'}, Quote_0);
  set_field(msg, FIX::OrderCapacity{'I'}, Quote_0);
  FIX::OrderQty2 OrderQty2_17;
  OrderQty2_17.setString("16592174");
set_field(msg, OrderQty2_17, Quote_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_1"}, Quote_0);
  set_field(msg, FIX::PriceType{1}, Quote_0);
  set_field(msg, FIX::PrivateQuote{false}, Quote_0);
  set_field(msg, FIX::QuoteID{"STRING_698171127"}, Quote_0);
  set_field(msg, FIX::QuoteMsgID{"STRING_712259399"}, Quote_0);
  set_field(msg, FIX::QuoteReqID{"STRING_276971640"}, Quote_0);
  set_field(msg, FIX::QuoteRespID{"STRING_1991394462"}, Quote_0);
  set_field(msg, FIX::QuoteResponseLevel{3}, Quote_0);
  set_field(msg, FIX::QuoteType{3}, Quote_0);
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_0;
  SettlCurrBidFxRate_0.setString("14205649");
set_field(msg, SettlCurrBidFxRate_0, Quote_0);
  set_field(msg, FIX::SettlCurrFxRateCalc{'D'}, Quote_0);
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_0;
  SettlCurrOfferFxRate_0.setString("4075564");
set_field(msg, SettlCurrOfferFxRate_0, Quote_0);
  set_field(msg, FIX::SettlCurrency{"JPY"}, Quote_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_494410288"}, Quote_0);
  set_field(msg, FIX::SettlDate2{"LOCALMKTDATE_1369490322"}, Quote_0);
  set_field(msg, FIX::SettlType{"STRING_6"}, Quote_0);
  set_field(msg, FIX::Side{'B'}, Quote_0);
  set_field(msg, FIX::Text{"STRING_1302749413"}, Quote_0);
  set_field(msg, FIX::TradingSessionID{"STRING_6"}, Quote_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_1"}, Quote_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(2, 31, 25, 12, 9, 2013)}, Quote_0);
  set_field(msg, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(22, 42, 43, 11, 3, 2004)}, Quote_0);
  all_values.push_back(Quote_0);

  all_compo_names.insert("Quote");

  // FinancingDetails
  multiset<string> FinancingDetails_16;
  set_field(msg, FIX::AgreementCurrency{"GBP"}, FinancingDetails_16);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1666126724"}, FinancingDetails_16);
  set_field(msg, FIX::AgreementDesc{"STRING_2016330761"}, FinancingDetails_16);
  set_field(msg, FIX::AgreementID{"STRING_681013"}, FinancingDetails_16);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_16);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_582108928"}, FinancingDetails_16);
  FIX::MarginRatio MarginRatio_16;
  MarginRatio_16.setString("74.830000");
set_field(msg, MarginRatio_16, FinancingDetails_16);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1723628684"}, FinancingDetails_16);
  set_field(msg, FIX::TerminationType{2}, FinancingDetails_16);
  all_values.push_back(FinancingDetails_16);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_66;
  FIX::AttachmentPoint AttachmentPoint_66;
  AttachmentPoint_66.setString("77.710000");
set_field(msg, AttachmentPoint_66, Instrument_66);
  set_field(msg, FIX::CFICode{"STRING_945635358"}, Instrument_66);
  set_field(msg, FIX::CPProgram{2}, Instrument_66);
  set_field(msg, FIX::CPRegType{"STRING_1884761573"}, Instrument_66);
  FIX::CapPrice CapPrice_66;
  CapPrice_66.setString("1009011");
set_field(msg, CapPrice_66, Instrument_66);
  FIX::ContractMultiplier ContractMultiplier_66;
  ContractMultiplier_66.setString("21355447");
set_field(msg, ContractMultiplier_66, Instrument_66);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_66);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1582363476"}, Instrument_66);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1406725027"}, Instrument_66);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1424896304"}, Instrument_66);
  FIX::CouponRate CouponRate_66;
  CouponRate_66.setString("94.140000");
set_field(msg, CouponRate_66, Instrument_66);
  set_field(msg, FIX::CreditRating{"STRING_2094196607"}, Instrument_66);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1099649624"}, Instrument_66);
  FIX::DetachmentPoint DetachmentPoint_66;
  DetachmentPoint_66.setString("69.330000");
set_field(msg, DetachmentPoint_66, Instrument_66);
  set_field(msg, FIX::EncodedIssuer{"DATA_1354165921"}, Instrument_66);
  set_field(msg, FIX::EncodedIssuerLen{884211166}, Instrument_66);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1907601876"}, Instrument_66);
  set_field(msg, FIX::EncodedSecurityDescLen{330727056}, Instrument_66);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_66);
  FIX::Factor Factor_66;
  Factor_66.setString("7882614");
set_field(msg, Factor_66, Instrument_66);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_66);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_66);
  FIX::FloorPrice FloorPrice_66;
  FloorPrice_66.setString("20933763");
set_field(msg, FloorPrice_66, Instrument_66);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_66);
  set_field(msg, FIX::InstrRegistry{"STRING_2029633997"}, Instrument_66);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_66);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_463310373"}, Instrument_66);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_464259277"}, Instrument_66);
  set_field(msg, FIX::Issuer{"STRING_354811241"}, Instrument_66);
  set_field(msg, FIX::ListMethod{0}, Instrument_66);
  set_field(msg, FIX::LocaleOfIssue{"STRING_422725658"}, Instrument_66);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1257459013"}, Instrument_66);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_985090768"}, Instrument_66);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_372475430"}, Instrument_66);
  FIX::MinPriceIncrement MinPriceIncrement_66;
  MinPriceIncrement_66.setString("9947369");
set_field(msg, MinPriceIncrement_66, Instrument_66);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_66;
  MinPriceIncrementAmount_66.setString("10859918");
set_field(msg, MinPriceIncrementAmount_66, Instrument_66);
  set_field(msg, FIX::NTPositionLimit{360536574}, Instrument_66);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_66;
  NotionalPercentageOutstanding_66.setString("75.510000");
set_field(msg, NotionalPercentageOutstanding_66, Instrument_66);
  set_field(msg, FIX::OptAttribute{'5'}, Instrument_66);
  FIX::OptPayoutAmount OptPayoutAmount_66;
  OptPayoutAmount_66.setString("17672616");
set_field(msg, OptPayoutAmount_66, Instrument_66);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_66);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_66;
  OriginalNotionalPercentageOutstanding_66.setString("11.350000");
set_field(msg, OriginalNotionalPercentageOutstanding_66, Instrument_66);
  set_field(msg, FIX::Pool{"STRING_1713974561"}, Instrument_66);
  set_field(msg, FIX::PositionLimit{1163839831}, Instrument_66);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_66);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_920656834"}, Instrument_66);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_66;
  PriceUnitOfMeasureQty_66.setString("20480509");
set_field(msg, PriceUnitOfMeasureQty_66, Instrument_66);
  set_field(msg, FIX::Product{11}, Instrument_66);
  set_field(msg, FIX::ProductComplex{"STRING_1251383890"}, Instrument_66);
  set_field(msg, FIX::PutOrCall{1}, Instrument_66);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_279064138"}, Instrument_66);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1256843209"}, Instrument_66);
  FIX::RepurchaseRate RepurchaseRate_66;
  RepurchaseRate_66.setString("80.860000");
set_field(msg, RepurchaseRate_66, Instrument_66);
  set_field(msg, FIX::RepurchaseTerm{224956883}, Instrument_66);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_66);
  set_field(msg, FIX::SecurityDesc{"STRING_2036132083"}, Instrument_66);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_171530641"}, Instrument_66);
  set_field(msg, FIX::SecurityGroup{"STRING_1244255978"}, Instrument_66);
  set_field(msg, FIX::SecurityID{"STRING_352907713"}, Instrument_66);
  set_field(msg, FIX::SecurityIDSource{"STRING_1"}, Instrument_66);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_66);
  set_field(msg, FIX::SecuritySubType{"STRING_775633371"}, Instrument_66);
  set_field(msg, FIX::SecurityType{"STRING_MPO"}, Instrument_66);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_66);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_66);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_631054186"}, Instrument_66);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1207310401"}, Instrument_66);
  set_field(msg, FIX::StrikeCurrency{"CHF"}, Instrument_66);
  FIX::StrikeMultiplier StrikeMultiplier_66;
  StrikeMultiplier_66.setString("17281821");
set_field(msg, StrikeMultiplier_66, Instrument_66);
  FIX::StrikePrice StrikePrice_66;
  StrikePrice_66.setString("11284233");
set_field(msg, StrikePrice_66, Instrument_66);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_66);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_66;
  StrikePriceBoundaryPrecision_66.setString("96.090000");
set_field(msg, StrikePriceBoundaryPrecision_66, Instrument_66);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_66);
  FIX::StrikeValue StrikeValue_66;
  StrikeValue_66.setString("4983781");
set_field(msg, StrikeValue_66, Instrument_66);
  set_field(msg, FIX::Symbol{"STRING_654324030"}, Instrument_66);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_66);
  set_field(msg, FIX::TimeUnit{"STRING_Yr"}, Instrument_66);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_66);
  set_field(msg, FIX::UnitOfMeasure{"STRING_oz_tr"}, Instrument_66);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_66;
  UnitOfMeasureQty_66.setString("3921403");
set_field(msg, UnitOfMeasureQty_66, Instrument_66);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_66);
  all_values.push_back(Instrument_66);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Quote::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_132;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_132);
    FIX::ComplexEventPrice ComplexEventPrice_132;
    ComplexEventPrice_132.setString("6491477");
set_field(noComplexEvents_0_0, ComplexEventPrice_132, ComplexEvents_NoComplexEvents_132);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_132);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_132;
    ComplexEventPriceBoundaryPrecision_132.setString("68.490000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_132, ComplexEvents_NoComplexEvents_132);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_132);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_132);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_132;
    ComplexOptPayoutAmount_132.setString("6401945");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_132, ComplexEvents_NoComplexEvents_132);
    all_values.push_back(ComplexEvents_NoComplexEvents_132);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_258;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 51, 53, 15, 2, 2017)}, ComplexEventDates_NoComplexEventDates_258);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 9, 45, 18, 8, 2005)}, ComplexEventDates_NoComplexEventDates_258);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_258);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_532;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 25, 59)}, ComplexEventTimes_NoComplexEventTimes_532);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 56, 15)}, ComplexEventTimes_NoComplexEventTimes_532);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_532);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::Quote::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_133;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_133);
    FIX::ComplexEventPrice ComplexEventPrice_133;
    ComplexEventPrice_133.setString("4010491");
set_field(noComplexEvents_0_1, ComplexEventPrice_133, ComplexEvents_NoComplexEvents_133);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_133);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_133;
    ComplexEventPriceBoundaryPrecision_133.setString("35.880000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_133, ComplexEvents_NoComplexEvents_133);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_133);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_133);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_133;
    ComplexOptPayoutAmount_133.setString("6873781");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_133, ComplexEvents_NoComplexEvents_133);
    all_values.push_back(ComplexEvents_NoComplexEvents_133);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_259;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 16, 7, 0, 10, 2012)}, ComplexEventDates_NoComplexEventDates_259);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 55, 25, 25, 7, 2004)}, ComplexEventDates_NoComplexEventDates_259);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_259);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_533;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 39, 11)}, ComplexEventTimes_NoComplexEventTimes_533);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 59, 15)}, ComplexEventTimes_NoComplexEventTimes_533);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_533);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_534;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 48, 12)}, ComplexEventTimes_NoComplexEventTimes_534);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 43, 54)}, ComplexEventTimes_NoComplexEventTimes_534);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_534);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_535;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 10, 29)}, ComplexEventTimes_NoComplexEventTimes_535);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 15, 24)}, ComplexEventTimes_NoComplexEventTimes_535);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_535);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_260;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 41, 55, 17, 11, 2015)}, ComplexEventDates_NoComplexEventDates_260);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 41, 44, 26, 10, 2005)}, ComplexEventDates_NoComplexEventDates_260);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_260);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_536;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 1, 53)}, ComplexEventTimes_NoComplexEventTimes_536);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 28, 7)}, ComplexEventTimes_NoComplexEventTimes_536);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_536);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_537;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 10, 2)}, ComplexEventTimes_NoComplexEventTimes_537);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 17, 41)}, ComplexEventTimes_NoComplexEventTimes_537);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_537);
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
    FIX50SP2::Quote::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_137;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1669732820"}, EvntGrp_NoEvents_137);
    FIX::EventPx EventPx_137;
    EventPx_137.setString("20571380");
set_field(noEvents_0_0, EventPx_137, EvntGrp_NoEvents_137);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1256261675"}, EvntGrp_NoEvents_137);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(0, 45, 7, 11, 7, 2007)}, EvntGrp_NoEvents_137);
    set_field(noEvents_0_0, FIX::EventType{18}, EvntGrp_NoEvents_137);
    all_values.push_back(EvntGrp_NoEvents_137);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::Quote::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_138;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1433468583"}, EvntGrp_NoEvents_138);
    FIX::EventPx EventPx_138;
    EventPx_138.setString("4902565");
set_field(noEvents_0_1, EventPx_138, EvntGrp_NoEvents_138);
    set_field(noEvents_0_1, FIX::EventText{"STRING_541110122"}, EvntGrp_NoEvents_138);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(2, 3, 37, 27, 2, 2003)}, EvntGrp_NoEvents_138);
    set_field(noEvents_0_1, FIX::EventType{7}, EvntGrp_NoEvents_138);
    all_values.push_back(EvntGrp_NoEvents_138);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Quote::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_125;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1718777565"}, InstrumentParties_NoInstrumentParties_125);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_125);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{700465187}, InstrumentParties_NoInstrumentParties_125);
    all_values.push_back(InstrumentParties_NoInstrumentParties_125);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1619730718"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1722181025}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_2029244143"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{517043550}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1244430197"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1938898497}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_138;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1754488251"}, SecAltIDGrp_NoSecurityAltID_138);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1114417850"}, SecAltIDGrp_NoSecurityAltID_138);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_138);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_139;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1639248282"}, SecAltIDGrp_NoSecurityAltID_139);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_627247370"}, SecAltIDGrp_NoSecurityAltID_139);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_139);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_140;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1134139241"}, SecAltIDGrp_NoSecurityAltID_140);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1777174200"}, SecAltIDGrp_NoSecurityAltID_140);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_140);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_132;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1007761293"}, SecurityXML_132);
  set_field(msg, FIX::SecurityXMLLen{1069943550}, SecurityXML_132);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1063159136"}, SecurityXML_132);
  all_values.push_back(SecurityXML_132);
  all_compo_names.insert("..");

  // LegQuotGrp
  // Group LegQuotGrp.NoLegs
  {
    FIX50SP2::Quote::NoLegs noLegs_0_0;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_0;
    FIX::LegBidForwardPoints LegBidForwardPoints_0;
    LegBidForwardPoints_0.setString("16110536");
set_field(noLegs_0_0, LegBidForwardPoints_0, LegQuotGrp_NoLegs_0);
    FIX::LegBidPx LegBidPx_0;
    LegBidPx_0.setString("2806596");
set_field(noLegs_0_0, LegBidPx_0, LegQuotGrp_NoLegs_0);
    FIX::LegOfferForwardPoints LegOfferForwardPoints_0;
    LegOfferForwardPoints_0.setString("11010541");
set_field(noLegs_0_0, LegOfferForwardPoints_0, LegQuotGrp_NoLegs_0);
    FIX::LegOfferPx LegOfferPx_0;
    LegOfferPx_0.setString("13788437");
set_field(noLegs_0_0, LegOfferPx_0, LegQuotGrp_NoLegs_0);
    FIX::LegOrderQty LegOrderQty_6;
    LegOrderQty_6.setString("2603158");
set_field(noLegs_0_0, LegOrderQty_6, LegQuotGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegPriceType{41634585}, LegQuotGrp_NoLegs_0);
    FIX::LegQty LegQty_6;
    LegQty_6.setString("9283550");
set_field(noLegs_0_0, LegQty_6, LegQuotGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_372662339"}, LegQuotGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_1113271311"}, LegQuotGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlType{'1'}, LegQuotGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSwapType{2}, LegQuotGrp_NoLegs_0);
    all_values.push_back(LegQuotGrp_NoLegs_0);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_91;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_2071627080"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{144054597}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_820113819"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1543874150}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1866235622"}, InstrumentLeg_91);
    FIX::LegContractMultiplier LegContractMultiplier_91;
    LegContractMultiplier_91.setString("7018743");
set_field(noLegs_0_0, LegContractMultiplier_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{2060917700}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_963182171"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_493289163"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1686739277"}, InstrumentLeg_91);
    FIX::LegCouponRate LegCouponRate_91;
    LegCouponRate_91.setString("67.750000");
set_field(noLegs_0_0, LegCouponRate_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1607707013"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_594362606"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{808194464}, InstrumentLeg_91);
    FIX::LegFactor LegFactor_91;
    LegFactor_91.setString("577117");
set_field(noLegs_0_0, LegFactor_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1664306156}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1871353600"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1555729683"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1127876180"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_4529585"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_509300201"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_359236239"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_264845407"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_550934786"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_91);
    FIX::LegOptionRatio LegOptionRatio_91;
    LegOptionRatio_91.setString("6375077");
set_field(noLegs_0_0, LegOptionRatio_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1664206097"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_731180721"}, InstrumentLeg_91);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_91;
    LegPriceUnitOfMeasureQty_91.setString("5814640");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegProduct{1588349529}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegPutOrCall{875235318}, InstrumentLeg_91);
    FIX::LegRatioQty LegRatioQty_91;
    LegRatioQty_91.setString("14015778");
set_field(noLegs_0_0, LegRatioQty_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_984740031"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_593987292"}, InstrumentLeg_91);
    FIX::LegRepurchaseRate LegRepurchaseRate_91;
    LegRepurchaseRate_91.setString("21.360000");
set_field(noLegs_0_0, LegRepurchaseRate_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{898174083}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1557169463"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_449257652"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_437429713"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_2127356238"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_2056964665"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1615933625"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_503843624"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_91);
    FIX::LegStrikePrice LegStrikePrice_91;
    LegStrikePrice_91.setString("206661");
set_field(noLegs_0_0, LegStrikePrice_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_514394"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_643264562"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1148542313"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_5043979"}, InstrumentLeg_91);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_91;
    LegUnitOfMeasureQty_91.setString("11525647");
set_field(noLegs_0_0, LegUnitOfMeasureQty_91, InstrumentLeg_91);
    all_values.push_back(InstrumentLeg_91);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_184;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_269889386"}, LegSecAltIDGrp_NoLegSecurityAltID_184);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1703499549"}, LegSecAltIDGrp_NoLegSecurityAltID_184);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_184);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_185;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_647886216"}, LegSecAltIDGrp_NoLegSecurityAltID_185);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_907397132"}, LegSecAltIDGrp_NoLegSecurityAltID_185);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_185);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_186;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1220221998"}, LegSecAltIDGrp_NoLegSecurityAltID_186);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_1379066937"}, LegSecAltIDGrp_NoLegSecurityAltID_186);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_186);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_0;
    set_field(noLegs_0_0, FIX::LegBenchmarkCurveCurrency{"GBP"}, LegBenchmarkCurveData_0);
    set_field(noLegs_0_0, FIX::LegBenchmarkCurveName{"STRING_106818607"}, LegBenchmarkCurveData_0);
    set_field(noLegs_0_0, FIX::LegBenchmarkCurvePoint{"STRING_742955310"}, LegBenchmarkCurveData_0);
    FIX::LegBenchmarkPrice LegBenchmarkPrice_0;
    LegBenchmarkPrice_0.setString("16458279");
set_field(noLegs_0_0, LegBenchmarkPrice_0, LegBenchmarkCurveData_0);
    set_field(noLegs_0_0, FIX::LegBenchmarkPriceType{700805899}, LegBenchmarkCurveData_0);
    all_values.push_back(LegBenchmarkCurveData_0);
    all_compo_names.insert("...NoLegs.");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_15;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_396518347"}, LegStipulations_NoLegStipulations_15);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_110491714"}, LegStipulations_NoLegStipulations_15);
      all_values.push_back(LegStipulations_NoLegStipulations_15);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_16;
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationType{"STRING_1148181451"}, LegStipulations_NoLegStipulations_16);
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationValue{"STRING_833948060"}, LegStipulations_NoLegStipulations_16);
      all_values.push_back(LegStipulations_NoLegStipulations_16);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_17;
      set_field(noLegStipulations_0_1_2, FIX::LegStipulationType{"STRING_90364305"}, LegStipulations_NoLegStipulations_17);
      set_field(noLegStipulations_0_1_2, FIX::LegStipulationValue{"STRING_1057662468"}, LegStipulations_NoLegStipulations_17);
      all_values.push_back(LegStipulations_NoLegStipulations_17);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_109;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1267671041"}, NestedParties_NoNestedPartyIDs_109);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_109);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{579042478}, NestedParties_NoNestedPartyIDs_109);
      all_values.push_back(NestedParties_NoNestedPartyIDs_109);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_224;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1582172225"}, NstdPtysSubGrp_NoNestedPartySubIDs_224);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{579556872}, NstdPtysSubGrp_NoNestedPartySubIDs_224);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_224);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_225;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_998470482"}, NstdPtysSubGrp_NoNestedPartySubIDs_225);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{583230890}, NstdPtysSubGrp_NoNestedPartySubIDs_225);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_225);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_110;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_584600851"}, NestedParties_NoNestedPartyIDs_110);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_110);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{2091009442}, NestedParties_NoNestedPartyIDs_110);
      all_values.push_back(NestedParties_NoNestedPartyIDs_110);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_226;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1707051146"}, NstdPtysSubGrp_NoNestedPartySubIDs_226);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{591412010}, NstdPtysSubGrp_NoNestedPartySubIDs_226);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_226);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_111;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_1761887370"}, NestedParties_NoNestedPartyIDs_111);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_111);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{1970478947}, NestedParties_NoNestedPartyIDs_111);
      all_values.push_back(NestedParties_NoNestedPartyIDs_111);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_227;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_1440877376"}, NstdPtysSubGrp_NoNestedPartySubIDs_227);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{2077297554}, NstdPtysSubGrp_NoNestedPartySubIDs_227);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_227);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_228;
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubID{"STRING_1846220168"}, NstdPtysSubGrp_NoNestedPartySubIDs_228);
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubIDType{939221640}, NstdPtysSubGrp_NoNestedPartySubIDs_228);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_228);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_229;
        set_field(noNestedPartySubIDs_0_2_2_2, FIX::NestedPartySubID{"STRING_630619805"}, NstdPtysSubGrp_NoNestedPartySubIDs_229);
        set_field(noNestedPartySubIDs_0_2_2_2, FIX::NestedPartySubIDType{397660319}, NstdPtysSubGrp_NoNestedPartySubIDs_229);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_229);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Quote::NoLegs noLegs_0_1;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_1;
    FIX::LegBidForwardPoints LegBidForwardPoints_1;
    LegBidForwardPoints_1.setString("13357399");
set_field(noLegs_0_1, LegBidForwardPoints_1, LegQuotGrp_NoLegs_1);
    FIX::LegBidPx LegBidPx_1;
    LegBidPx_1.setString("7411115");
set_field(noLegs_0_1, LegBidPx_1, LegQuotGrp_NoLegs_1);
    FIX::LegOfferForwardPoints LegOfferForwardPoints_1;
    LegOfferForwardPoints_1.setString("15458417");
set_field(noLegs_0_1, LegOfferForwardPoints_1, LegQuotGrp_NoLegs_1);
    FIX::LegOfferPx LegOfferPx_1;
    LegOfferPx_1.setString("222043");
set_field(noLegs_0_1, LegOfferPx_1, LegQuotGrp_NoLegs_1);
    FIX::LegOrderQty LegOrderQty_7;
    LegOrderQty_7.setString("8314758");
set_field(noLegs_0_1, LegOrderQty_7, LegQuotGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegPriceType{456020591}, LegQuotGrp_NoLegs_1);
    FIX::LegQty LegQty_7;
    LegQty_7.setString("3246024");
set_field(noLegs_0_1, LegQty_7, LegQuotGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegRefID{"STRING_2099146866"}, LegQuotGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlDate{"LOCALMKTDATE_2017526683"}, LegQuotGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlType{'9'}, LegQuotGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSwapType{4}, LegQuotGrp_NoLegs_1);
    all_values.push_back(LegQuotGrp_NoLegs_1);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_92;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1452215260"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1483201787}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1305339620"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{2035446150}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_2067802638"}, InstrumentLeg_92);
    FIX::LegContractMultiplier LegContractMultiplier_92;
    LegContractMultiplier_92.setString("13088912");
set_field(noLegs_0_1, LegContractMultiplier_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1978971945}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_774809228"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_868458715"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_422900307"}, InstrumentLeg_92);
    FIX::LegCouponRate LegCouponRate_92;
    LegCouponRate_92.setString("29.500000");
set_field(noLegs_0_1, LegCouponRate_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1648248211"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegCurrency{"GBP"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_941641940"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{175709513}, InstrumentLeg_92);
    FIX::LegFactor LegFactor_92;
    LegFactor_92.setString("11912143");
set_field(noLegs_0_1, LegFactor_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1880863580}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_806329319"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1588874648"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1069119919"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1547440839"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_987232770"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1091324318"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_231433016"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1443253361"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_92);
    FIX::LegOptionRatio LegOptionRatio_92;
    LegOptionRatio_92.setString("1830962");
set_field(noLegs_0_1, LegOptionRatio_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1313296397"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_172088020"}, InstrumentLeg_92);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_92;
    LegPriceUnitOfMeasureQty_92.setString("4899653");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegProduct{618028009}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1655289807}, InstrumentLeg_92);
    FIX::LegRatioQty LegRatioQty_92;
    LegRatioQty_92.setString("17953049");
set_field(noLegs_0_1, LegRatioQty_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_505990512"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1575608798"}, InstrumentLeg_92);
    FIX::LegRepurchaseRate LegRepurchaseRate_92;
    LegRepurchaseRate_92.setString("25.610000");
set_field(noLegs_0_1, LegRepurchaseRate_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{337478809}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_202934378"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1825171276"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_760379116"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_592147328"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1325935839"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1006274723"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSide{'2'}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_120094131"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_92);
    FIX::LegStrikePrice LegStrikePrice_92;
    LegStrikePrice_92.setString("20009577");
set_field(noLegs_0_1, LegStrikePrice_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1988313556"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_569746816"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_922593982"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1388270747"}, InstrumentLeg_92);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_92;
    LegUnitOfMeasureQty_92.setString("15569795");
set_field(noLegs_0_1, LegUnitOfMeasureQty_92, InstrumentLeg_92);
    all_values.push_back(InstrumentLeg_92);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_187;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1619703763"}, LegSecAltIDGrp_NoLegSecurityAltID_187);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_852749300"}, LegSecAltIDGrp_NoLegSecurityAltID_187);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_187);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_1;
    set_field(noLegs_0_1, FIX::LegBenchmarkCurveCurrency{"EUR"}, LegBenchmarkCurveData_1);
    set_field(noLegs_0_1, FIX::LegBenchmarkCurveName{"STRING_18562049"}, LegBenchmarkCurveData_1);
    set_field(noLegs_0_1, FIX::LegBenchmarkCurvePoint{"STRING_1454449427"}, LegBenchmarkCurveData_1);
    FIX::LegBenchmarkPrice LegBenchmarkPrice_1;
    LegBenchmarkPrice_1.setString("1452817");
set_field(noLegs_0_1, LegBenchmarkPrice_1, LegBenchmarkCurveData_1);
    set_field(noLegs_0_1, FIX::LegBenchmarkPriceType{636590059}, LegBenchmarkCurveData_1);
    all_values.push_back(LegBenchmarkCurveData_1);
    all_compo_names.insert("...NoLegs.");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_18;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_1940586713"}, LegStipulations_NoLegStipulations_18);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_1142580571"}, LegStipulations_NoLegStipulations_18);
      all_values.push_back(LegStipulations_NoLegStipulations_18);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_112;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_749815626"}, NestedParties_NoNestedPartyIDs_112);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_112);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{593315114}, NestedParties_NoNestedPartyIDs_112);
      all_values.push_back(NestedParties_NoNestedPartyIDs_112);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_230;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_92954848"}, NstdPtysSubGrp_NoNestedPartySubIDs_230);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1185462442}, NstdPtysSubGrp_NoNestedPartySubIDs_230);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_230);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_231;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_1753439093"}, NstdPtysSubGrp_NoNestedPartySubIDs_231);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{1099229572}, NstdPtysSubGrp_NoNestedPartySubIDs_231);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_231);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_232;
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubID{"STRING_1122603930"}, NstdPtysSubGrp_NoNestedPartySubIDs_232);
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubIDType{1873533225}, NstdPtysSubGrp_NoNestedPartySubIDs_232);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_232);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_20;
  FIX::CashOrderQty CashOrderQty_20;
  CashOrderQty_20.setString("1337301");
set_field(msg, CashOrderQty_20, OrderQtyData_20);
  FIX::OrderPercent OrderPercent_20;
  OrderPercent_20.setString("60.990000");
set_field(msg, OrderPercent_20, OrderQtyData_20);
  FIX::OrderQty OrderQty_29;
  OrderQty_29.setString("17270072");
set_field(msg, OrderQty_29, OrderQtyData_20);
  set_field(msg, FIX::RoundingDirection{'2'}, OrderQtyData_20);
  FIX::RoundingModulus RoundingModulus_20;
  RoundingModulus_20.setString("6732229");
set_field(msg, RoundingModulus_20, OrderQtyData_20);
  all_values.push_back(OrderQtyData_20);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::Quote::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_111;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1362830816"}, Parties_NoPartyIDs_111);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'G'}, Parties_NoPartyIDs_111);
    set_field(noPartyIDs_0_0, FIX::PartyRole{8}, Parties_NoPartyIDs_111);
    all_values.push_back(Parties_NoPartyIDs_111);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_222;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_935468155"}, PtysSubGrp_NoPartySubIDs_222);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_222);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_222);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_223;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_490367280"}, PtysSubGrp_NoPartySubIDs_223);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_223);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_223);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::Quote::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_0;
    set_field(noQuoteQualifiers_0_0, FIX::QuoteQualifier{'6'}, QuotQualGrp_NoQuoteQualifiers_0);
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_0);
    all_compo_names.insert("...NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  {
    FIX50SP2::Quote::NoQuoteQualifiers noQuoteQualifiers_0_1;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_1;
    set_field(noQuoteQualifiers_0_1, FIX::QuoteQualifier{'1'}, QuotQualGrp_NoQuoteQualifiers_1);
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_1);
    all_compo_names.insert("...NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_1);
  }
  {
    FIX50SP2::Quote::NoQuoteQualifiers noQuoteQualifiers_0_2;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_2;
    set_field(noQuoteQualifiers_0_2, FIX::QuoteQualifier{'1'}, QuotQualGrp_NoQuoteQualifiers_2);
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_2);
    all_compo_names.insert("...NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_2);
  }
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::Quote::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_19;
    set_field(noRateSources_0_0, FIX::RateSource{2}, RateSource_NoRateSources_19);
    set_field(noRateSources_0_0, FIX::RateSourceType{0}, RateSource_NoRateSources_19);
    set_field(noRateSources_0_0, FIX::ReferencePage{"STRING_1178567692"}, RateSource_NoRateSources_19);
    all_values.push_back(RateSource_NoRateSources_19);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_0);
  }
  {
    FIX50SP2::Quote::NoRateSources noRateSources_0_1;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_20;
    set_field(noRateSources_0_1, FIX::RateSource{2}, RateSource_NoRateSources_20);
    set_field(noRateSources_0_1, FIX::RateSourceType{0}, RateSource_NoRateSources_20);
    set_field(noRateSources_0_1, FIX::ReferencePage{"STRING_1606070946"}, RateSource_NoRateSources_20);
    all_values.push_back(RateSource_NoRateSources_20);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_23;
  set_field(msg, FIX::BenchmarkCurveCurrency{"CAN"}, SpreadOrBenchmarkCurveData_23);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_FutureSWAP"}, SpreadOrBenchmarkCurveData_23);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1110477339"}, SpreadOrBenchmarkCurveData_23);
  FIX::BenchmarkPrice BenchmarkPrice_23;
  BenchmarkPrice_23.setString("9169299");
set_field(msg, BenchmarkPrice_23, SpreadOrBenchmarkCurveData_23);
  set_field(msg, FIX::BenchmarkPriceType{938075968}, SpreadOrBenchmarkCurveData_23);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1244207500"}, SpreadOrBenchmarkCurveData_23);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1020406074"}, SpreadOrBenchmarkCurveData_23);
  FIX::Spread Spread_23;
  Spread_23.setString("5175996");
set_field(msg, Spread_23, SpreadOrBenchmarkCurveData_23);
  all_values.push_back(SpreadOrBenchmarkCurveData_23);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::Quote::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_37;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_PROD"}, Stipulations_NoStipulations_37);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1019717232"}, Stipulations_NoStipulations_37);
    all_values.push_back(Stipulations_NoStipulations_37);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::Quote::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_38;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_MATURITY"}, Stipulations_NoStipulations_38);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1776347844"}, Stipulations_NoStipulations_38);
    all_values.push_back(Stipulations_NoStipulations_38);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Quote::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_91;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1269165668"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{564332351}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_891699541"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1759532948}, UnderlyingInstrument_91);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_91;
    UnderlyingAdjustedQuantity_91.setString("15183625");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_91, UnderlyingInstrument_91);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_91;
    UnderlyingAllocationPercent_91.setString("90.020000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_91, UnderlyingInstrument_91);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_91;
    UnderlyingAttachmentPoint_91.setString("83.010000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_961499171"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1622230402"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_676450367"}, UnderlyingInstrument_91);
    FIX::UnderlyingCapValue UnderlyingCapValue_91;
    UnderlyingCapValue_91.setString("15472163");
set_field(noUnderlyings_0_0, UnderlyingCapValue_91, UnderlyingInstrument_91);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_91;
    UnderlyingCashAmount_91.setString("17852625");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_91);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_91;
    UnderlyingContractMultiplier_91.setString("14655092");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{394126140}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1313605357"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1476757043"}, UnderlyingInstrument_91);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_91;
    UnderlyingCouponRate_91.setString("21.850000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_378148100"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_91);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_91;
    UnderlyingCurrentValue_91.setString("13162240");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_91, UnderlyingInstrument_91);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_91;
    UnderlyingDetachmentPoint_91.setString("82.340000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_91, UnderlyingInstrument_91);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_91;
    UnderlyingDirtyPrice_91.setString("21257882");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_91, UnderlyingInstrument_91);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_91;
    UnderlyingEndPrice_91.setString("18338236");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_91, UnderlyingInstrument_91);
    FIX::UnderlyingEndValue UnderlyingEndValue_91;
    UnderlyingEndValue_91.setString("7552421");
set_field(noUnderlyings_0_0, UnderlyingEndValue_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1671933577}, UnderlyingInstrument_91);
    FIX::UnderlyingFXRate UnderlyingFXRate_91;
    UnderlyingFXRate_91.setString("7060572");
set_field(noUnderlyings_0_0, UnderlyingFXRate_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_91);
    FIX::UnderlyingFactor UnderlyingFactor_91;
    UnderlyingFactor_91.setString("13007977");
set_field(noUnderlyings_0_0, UnderlyingFactor_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{2094326769}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_311038912"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1865130125"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_838542663"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_2070571860"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1236009033"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_540638017"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_170786513"}, UnderlyingInstrument_91);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_91;
    UnderlyingNotionalPercentageOutstanding_91.setString("45.570000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_91);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_91;
    UnderlyingOriginalNotionalPercentageOutstanding_91.setString("68.800000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1597240915"}, UnderlyingInstrument_91);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_91;
    UnderlyingPriceUnitOfMeasureQty_91.setString("18006473");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{554771291}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{915266543}, UnderlyingInstrument_91);
    FIX::UnderlyingPx UnderlyingPx_91;
    UnderlyingPx_91.setString("472898");
set_field(noUnderlyings_0_0, UnderlyingPx_91, UnderlyingInstrument_91);
    FIX::UnderlyingQty UnderlyingQty_91;
    UnderlyingQty_91.setString("18683766");
set_field(noUnderlyings_0_0, UnderlyingQty_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_244539939"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_235741987"}, UnderlyingInstrument_91);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_91;
    UnderlyingRepurchaseRate_91.setString("11.010000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{684290673}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1341124148"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1415265170"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_220765260"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1319428736"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1101605200"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_976007415"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_843878665"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1807662462"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_17880660"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_91);
    FIX::UnderlyingStartValue UnderlyingStartValue_91;
    UnderlyingStartValue_91.setString("17545055");
set_field(noUnderlyings_0_0, UnderlyingStartValue_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_328919572"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_91);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_91;
    UnderlyingStrikePrice_91.setString("2520077");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_91, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_950848302"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_986202616"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_422794298"}, UnderlyingInstrument_91);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1000872859"}, UnderlyingInstrument_91);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_91;
    UnderlyingUnitOfMeasureQty_91.setString("10015873");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_91, UnderlyingInstrument_91);
    all_values.push_back(UnderlyingInstrument_91);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_189;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_450630126"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_189);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_654751049"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_189);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_189);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_190;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1824802470"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_190);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1365896670"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_190);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_190);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_182;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1545695471"}, UnderlyingStipulations_NoUnderlyingStips_182);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1610436609"}, UnderlyingStipulations_NoUnderlyingStips_182);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_182);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_201;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1644736572"}, UndlyInstrumentParties_NoUndlyInstrumentParties_201);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_201);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{131423339}, UndlyInstrumentParties_NoUndlyInstrumentParties_201);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_201);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_368008894"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1450852075}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_405);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_202;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_2014123294"}, UndlyInstrumentParties_NoUndlyInstrumentParties_202);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_202);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{147247092}, UndlyInstrumentParties_NoUndlyInstrumentParties_202);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_202);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1361896970"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{144439884}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_406);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1281324043"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1690816542}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_407);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_2006762801"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1726888642}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_408);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Quote::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_92;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1942824327"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{810127455}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_565607610"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{218134978}, UnderlyingInstrument_92);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_92;
    UnderlyingAdjustedQuantity_92.setString("18110003");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_92, UnderlyingInstrument_92);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_92;
    UnderlyingAllocationPercent_92.setString("49.970000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_92, UnderlyingInstrument_92);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_92;
    UnderlyingAttachmentPoint_92.setString("61.570000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_114146793"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_74462398"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1165484979"}, UnderlyingInstrument_92);
    FIX::UnderlyingCapValue UnderlyingCapValue_92;
    UnderlyingCapValue_92.setString("14800434");
set_field(noUnderlyings_0_1, UnderlyingCapValue_92, UnderlyingInstrument_92);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_92;
    UnderlyingCashAmount_92.setString("7765032");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_92);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_92;
    UnderlyingContractMultiplier_92.setString("9429964");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1714286088}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_60949726"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1090240059"}, UnderlyingInstrument_92);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_92;
    UnderlyingCouponRate_92.setString("94.270000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_973467820"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_92);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_92;
    UnderlyingCurrentValue_92.setString("8401074");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_92, UnderlyingInstrument_92);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_92;
    UnderlyingDetachmentPoint_92.setString("16.150000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_92, UnderlyingInstrument_92);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_92;
    UnderlyingDirtyPrice_92.setString("12963249");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_92, UnderlyingInstrument_92);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_92;
    UnderlyingEndPrice_92.setString("3669259");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_92, UnderlyingInstrument_92);
    FIX::UnderlyingEndValue UnderlyingEndValue_92;
    UnderlyingEndValue_92.setString("20166785");
set_field(noUnderlyings_0_1, UnderlyingEndValue_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1440764830}, UnderlyingInstrument_92);
    FIX::UnderlyingFXRate UnderlyingFXRate_92;
    UnderlyingFXRate_92.setString("16482499");
set_field(noUnderlyings_0_1, UnderlyingFXRate_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_92);
    FIX::UnderlyingFactor UnderlyingFactor_92;
    UnderlyingFactor_92.setString("13000439");
set_field(noUnderlyings_0_1, UnderlyingFactor_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1227654964}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1355352159"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2110171439"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1793262574"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1573487137"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1773688106"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1212973923"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_914169646"}, UnderlyingInstrument_92);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_92;
    UnderlyingNotionalPercentageOutstanding_92.setString("48.990000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_92);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_92;
    UnderlyingOriginalNotionalPercentageOutstanding_92.setString("46.260000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1220394715"}, UnderlyingInstrument_92);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_92;
    UnderlyingPriceUnitOfMeasureQty_92.setString("20639395");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{495867780}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{15907491}, UnderlyingInstrument_92);
    FIX::UnderlyingPx UnderlyingPx_92;
    UnderlyingPx_92.setString("16307420");
set_field(noUnderlyings_0_1, UnderlyingPx_92, UnderlyingInstrument_92);
    FIX::UnderlyingQty UnderlyingQty_92;
    UnderlyingQty_92.setString("5568175");
set_field(noUnderlyings_0_1, UnderlyingQty_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1106147550"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1328967790"}, UnderlyingInstrument_92);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_92;
    UnderlyingRepurchaseRate_92.setString("53.270000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{416912856}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_330561996"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_222909146"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1071694471"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1626886943"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_589835072"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_940889409"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_920168125"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_90601394"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_353417241"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_92);
    FIX::UnderlyingStartValue UnderlyingStartValue_92;
    UnderlyingStartValue_92.setString("13182563");
set_field(noUnderlyings_0_1, UnderlyingStartValue_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1708769400"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_92);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_92;
    UnderlyingStrikePrice_92.setString("11347728");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1809104358"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_29525560"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_2048942536"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1549455609"}, UnderlyingInstrument_92);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_92;
    UnderlyingUnitOfMeasureQty_92.setString("13169618");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_92, UnderlyingInstrument_92);
    all_values.push_back(UnderlyingInstrument_92);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_191;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_622366676"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_191);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1233417805"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_191);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_191);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_192;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_329497647"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_192);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_638274168"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_192);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_192);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_183;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_886315154"}, UnderlyingStipulations_NoUnderlyingStips_183);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1744421718"}, UnderlyingStipulations_NoUnderlyingStips_183);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_183);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_184;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_2045643959"}, UnderlyingStipulations_NoUnderlyingStips_184);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_269116833"}, UnderlyingStipulations_NoUnderlyingStips_184);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_184);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_203;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_228722308"}, UndlyInstrumentParties_NoUndlyInstrumentParties_203);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_203);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1085545398}, UndlyInstrumentParties_NoUndlyInstrumentParties_203);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_203);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1081861052"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2026434807}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_409);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_204;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_628293728"}, UndlyInstrumentParties_NoUndlyInstrumentParties_204);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_204);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{232368400}, UndlyInstrumentParties_NoUndlyInstrumentParties_204);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_204);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_343235157"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1941137800}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_410);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_18;
  FIX::Yield Yield_18;
  Yield_18.setString("84.410000");
set_field(msg, Yield_18, YieldData_18);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1307270441"}, YieldData_18);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_928427042"}, YieldData_18);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_18;
  YieldRedemptionPrice_18.setString("3980591");
set_field(msg, YieldRedemptionPrice_18, YieldData_18);
  set_field(msg, FIX::YieldRedemptionPriceType{1336796001}, YieldData_18);
  set_field(msg, FIX::YieldType{"STRING_PUT"}, YieldData_18);
  all_values.push_back(YieldData_18);
  all_compo_names.insert(".");

  // header
  multiset<string> header_68;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_1"}, header_68);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_506274235"}, header_68);
  set_header_field(msg.getHeader(), FIX::BodyLength{663515797}, header_68);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_422397789"}, header_68);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1739692041"}, header_68);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_993013444"}, header_68);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1060671957"}, header_68);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{308884562}, header_68);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_68);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{657610028}, header_68);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_207044873"}, header_68);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_961784"}, header_68);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_671460954"}, header_68);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(19, 12, 4, 15, 8, 2013)}, header_68);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_68);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_68);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1473208702"}, header_68);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{943062771}, header_68);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1661980064"}, header_68);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_62163496"}, header_68);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_102849564"}, header_68);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(15, 46, 49, 4, 6, 2009)}, header_68);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_682651550"}, header_68);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1538128194"}, header_68);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_781854983"}, header_68);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1743323507"}, header_68);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1847012756}, header_68);
  all_values.push_back(header_68);
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
