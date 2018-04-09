#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteStatusReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteStatusReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::QuoteStatusReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteStatusReport_0;
  set_field(msg, FIX::Account{"STRING_1779082277"}, QuoteStatusReport_0);
  set_field(msg, FIX::AccountType{8}, QuoteStatusReport_0);
  set_field(msg, FIX::AcctIDSource{1}, QuoteStatusReport_0);
  FIX::BidForwardPoints BidForwardPoints_14;
  BidForwardPoints_14.setString("8704849");
set_field(msg, BidForwardPoints_14, QuoteStatusReport_0);
  FIX::BidForwardPoints2 BidForwardPoints2_14;
  BidForwardPoints2_14.setString("18304635");
set_field(msg, BidForwardPoints2_14, QuoteStatusReport_0);
  FIX::BidPx BidPx_14;
  BidPx_14.setString("8049766");
set_field(msg, BidPx_14, QuoteStatusReport_0);
  FIX::BidSize BidSize_14;
  BidSize_14.setString("4710017");
set_field(msg, BidSize_14, QuoteStatusReport_0);
  FIX::BidSpotRate BidSpotRate_14;
  BidSpotRate_14.setString("15028173");
set_field(msg, BidSpotRate_14, QuoteStatusReport_0);
  FIX::BidYield BidYield_14;
  BidYield_14.setString("20.740000");
set_field(msg, BidYield_14, QuoteStatusReport_0);
  set_field(msg, FIX::BookingType{0}, QuoteStatusReport_0);
  set_field(msg, FIX::CommType{'1'}, QuoteStatusReport_0);
  FIX::Commission Commission_26;
  Commission_26.setString("2479133");
set_field(msg, Commission_26, QuoteStatusReport_0);
  set_field(msg, FIX::Currency{"CHF"}, QuoteStatusReport_0);
  set_field(msg, FIX::CustOrderCapacity{3}, QuoteStatusReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1713248789"}, QuoteStatusReport_0);
  set_field(msg, FIX::EncodedTextLen{377689345}, QuoteStatusReport_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_755771514"}, QuoteStatusReport_0);
  set_field(msg, FIX::ExDestinationIDSource{'G'}, QuoteStatusReport_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(15, 13, 6, 16, 12, 2016)}, QuoteStatusReport_0);
  FIX::MidPx MidPx_14;
  MidPx_14.setString("5288763");
set_field(msg, MidPx_14, QuoteStatusReport_0);
  FIX::MidYield MidYield_14;
  MidYield_14.setString("39.790000");
set_field(msg, MidYield_14, QuoteStatusReport_0);
  FIX::MinBidSize MinBidSize_2;
  MinBidSize_2.setString("16993346");
set_field(msg, MinBidSize_2, QuoteStatusReport_0);
  FIX::MinOfferSize MinOfferSize_2;
  MinOfferSize_2.setString("18325714");
set_field(msg, MinOfferSize_2, QuoteStatusReport_0);
  FIX::MinQty MinQty_18;
  MinQty_18.setString("4476328");
set_field(msg, MinQty_18, QuoteStatusReport_0);
  FIX::MktBidPx MktBidPx_2;
  MktBidPx_2.setString("13309333");
set_field(msg, MktBidPx_2, QuoteStatusReport_0);
  FIX::MktOfferPx MktOfferPx_2;
  MktOfferPx_2.setString("7730454");
set_field(msg, MktOfferPx_2, QuoteStatusReport_0);
  FIX::OfferForwardPoints OfferForwardPoints_14;
  OfferForwardPoints_14.setString("3783482");
set_field(msg, OfferForwardPoints_14, QuoteStatusReport_0);
  FIX::OfferForwardPoints2 OfferForwardPoints2_14;
  OfferForwardPoints2_14.setString("539346");
set_field(msg, OfferForwardPoints2_14, QuoteStatusReport_0);
  FIX::OfferPx OfferPx_14;
  OfferPx_14.setString("4560253");
set_field(msg, OfferPx_14, QuoteStatusReport_0);
  FIX::OfferSize OfferSize_14;
  OfferSize_14.setString("11833249");
set_field(msg, OfferSize_14, QuoteStatusReport_0);
  FIX::OfferSpotRate OfferSpotRate_14;
  OfferSpotRate_14.setString("5249363");
set_field(msg, OfferSpotRate_14, QuoteStatusReport_0);
  FIX::OfferYield OfferYield_14;
  OfferYield_14.setString("27.540000");
set_field(msg, OfferYield_14, QuoteStatusReport_0);
  set_field(msg, FIX::OrdType{'B'}, QuoteStatusReport_0);
  set_field(msg, FIX::OrderCapacity{'G'}, QuoteStatusReport_0);
  FIX::OrderQty2 OrderQty2_23;
  OrderQty2_23.setString("11774048");
set_field(msg, OrderQty2_23, QuoteStatusReport_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_1"}, QuoteStatusReport_0);
  FIX::Price Price_24;
  Price_24.setString("12980065");
set_field(msg, Price_24, QuoteStatusReport_0);
  set_field(msg, FIX::PriceType{16}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteCancelType{6}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteID{"STRING_863771675"}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteMsgID{"STRING_867772479"}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteRejectReason{99}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteReqID{"STRING_1802639685"}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteRespID{"STRING_1131043568"}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteStatus{1}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteStatusReqID{"STRING_962650550"}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteType{2}, QuoteStatusReport_0);
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_2;
  SettlCurrBidFxRate_2.setString("2139736");
set_field(msg, SettlCurrBidFxRate_2, QuoteStatusReport_0);
  set_field(msg, FIX::SettlCurrFxRateCalc{'D'}, QuoteStatusReport_0);
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_2;
  SettlCurrOfferFxRate_2.setString("4064594");
set_field(msg, SettlCurrOfferFxRate_2, QuoteStatusReport_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_742850045"}, QuoteStatusReport_0);
  set_field(msg, FIX::SettlDate2{"LOCALMKTDATE_346791188"}, QuoteStatusReport_0);
  set_field(msg, FIX::SettlType{"STRING_3"}, QuoteStatusReport_0);
  set_field(msg, FIX::Side{'D'}, QuoteStatusReport_0);
  set_field(msg, FIX::Text{"STRING_794424024"}, QuoteStatusReport_0);
  set_field(msg, FIX::TradingSessionID{"STRING_5"}, QuoteStatusReport_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_3"}, QuoteStatusReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(9, 26, 26, 18, 10, 2000)}, QuoteStatusReport_0);
  set_field(msg, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(19, 46, 19, 21, 8, 2001)}, QuoteStatusReport_0);
  all_values.push_back(QuoteStatusReport_0);

  all_compo_names.insert("QuoteStatusReport");

  // FinancingDetails
  multiset<string> FinancingDetails_23;
  set_field(msg, FIX::AgreementCurrency{"GBP"}, FinancingDetails_23);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1726402592"}, FinancingDetails_23);
  set_field(msg, FIX::AgreementDesc{"STRING_839704561"}, FinancingDetails_23);
  set_field(msg, FIX::AgreementID{"STRING_950216261"}, FinancingDetails_23);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_23);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1292408587"}, FinancingDetails_23);
  FIX::MarginRatio MarginRatio_23;
  MarginRatio_23.setString("99.590000");
set_field(msg, MarginRatio_23, FinancingDetails_23);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_528066703"}, FinancingDetails_23);
  set_field(msg, FIX::TerminationType{1}, FinancingDetails_23);
  all_values.push_back(FinancingDetails_23);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_73;
  FIX::AttachmentPoint AttachmentPoint_73;
  AttachmentPoint_73.setString("0.040000");
set_field(msg, AttachmentPoint_73, Instrument_73);
  set_field(msg, FIX::CFICode{"STRING_874857892"}, Instrument_73);
  set_field(msg, FIX::CPProgram{99}, Instrument_73);
  set_field(msg, FIX::CPRegType{"STRING_187494225"}, Instrument_73);
  FIX::CapPrice CapPrice_73;
  CapPrice_73.setString("16692819");
set_field(msg, CapPrice_73, Instrument_73);
  FIX::ContractMultiplier ContractMultiplier_73;
  ContractMultiplier_73.setString("7989385");
set_field(msg, ContractMultiplier_73, Instrument_73);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_73);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_694570499"}, Instrument_73);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_2142117035"}, Instrument_73);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_898002573"}, Instrument_73);
  FIX::CouponRate CouponRate_73;
  CouponRate_73.setString("39.850000");
set_field(msg, CouponRate_73, Instrument_73);
  set_field(msg, FIX::CreditRating{"STRING_1862748214"}, Instrument_73);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_218886718"}, Instrument_73);
  FIX::DetachmentPoint DetachmentPoint_73;
  DetachmentPoint_73.setString("8.010000");
set_field(msg, DetachmentPoint_73, Instrument_73);
  set_field(msg, FIX::EncodedIssuer{"DATA_1772216559"}, Instrument_73);
  set_field(msg, FIX::EncodedIssuerLen{717175746}, Instrument_73);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1396937907"}, Instrument_73);
  set_field(msg, FIX::EncodedSecurityDescLen{832207791}, Instrument_73);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_73);
  FIX::Factor Factor_73;
  Factor_73.setString("12024472");
set_field(msg, Factor_73, Instrument_73);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_73);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_73);
  FIX::FloorPrice FloorPrice_73;
  FloorPrice_73.setString("5111403");
set_field(msg, FloorPrice_73, Instrument_73);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_73);
  set_field(msg, FIX::InstrRegistry{"STRING_106429813"}, Instrument_73);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_73);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_876459136"}, Instrument_73);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1398838400"}, Instrument_73);
  set_field(msg, FIX::Issuer{"STRING_478062942"}, Instrument_73);
  set_field(msg, FIX::ListMethod{1}, Instrument_73);
  set_field(msg, FIX::LocaleOfIssue{"STRING_950222753"}, Instrument_73);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_237619298"}, Instrument_73);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_131900083"}, Instrument_73);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_459917564"}, Instrument_73);
  FIX::MinPriceIncrement MinPriceIncrement_73;
  MinPriceIncrement_73.setString("4251135");
set_field(msg, MinPriceIncrement_73, Instrument_73);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_73;
  MinPriceIncrementAmount_73.setString("18011820");
set_field(msg, MinPriceIncrementAmount_73, Instrument_73);
  set_field(msg, FIX::NTPositionLimit{1258856158}, Instrument_73);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_73;
  NotionalPercentageOutstanding_73.setString("10.580000");
set_field(msg, NotionalPercentageOutstanding_73, Instrument_73);
  set_field(msg, FIX::OptAttribute{'3'}, Instrument_73);
  FIX::OptPayoutAmount OptPayoutAmount_73;
  OptPayoutAmount_73.setString("12534895");
set_field(msg, OptPayoutAmount_73, Instrument_73);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_73);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_73;
  OriginalNotionalPercentageOutstanding_73.setString("28.360000");
set_field(msg, OriginalNotionalPercentageOutstanding_73, Instrument_73);
  set_field(msg, FIX::Pool{"STRING_968754112"}, Instrument_73);
  set_field(msg, FIX::PositionLimit{782996702}, Instrument_73);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_73);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_593487023"}, Instrument_73);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_73;
  PriceUnitOfMeasureQty_73.setString("15001724");
set_field(msg, PriceUnitOfMeasureQty_73, Instrument_73);
  set_field(msg, FIX::Product{1}, Instrument_73);
  set_field(msg, FIX::ProductComplex{"STRING_1425694814"}, Instrument_73);
  set_field(msg, FIX::PutOrCall{0}, Instrument_73);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_2042195155"}, Instrument_73);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_34181864"}, Instrument_73);
  FIX::RepurchaseRate RepurchaseRate_73;
  RepurchaseRate_73.setString("19.600000");
set_field(msg, RepurchaseRate_73, Instrument_73);
  set_field(msg, FIX::RepurchaseTerm{405851877}, Instrument_73);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_73);
  set_field(msg, FIX::SecurityDesc{"STRING_431391773"}, Instrument_73);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1867208507"}, Instrument_73);
  set_field(msg, FIX::SecurityGroup{"STRING_1245530642"}, Instrument_73);
  set_field(msg, FIX::SecurityID{"STRING_1830230173"}, Instrument_73);
  set_field(msg, FIX::SecurityIDSource{"STRING_E"}, Instrument_73);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_73);
  set_field(msg, FIX::SecuritySubType{"STRING_632969278"}, Instrument_73);
  set_field(msg, FIX::SecurityType{"STRING_ABS"}, Instrument_73);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_73);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_73);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_860520623"}, Instrument_73);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_288171269"}, Instrument_73);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_73);
  FIX::StrikeMultiplier StrikeMultiplier_73;
  StrikeMultiplier_73.setString("6364401");
set_field(msg, StrikeMultiplier_73, Instrument_73);
  FIX::StrikePrice StrikePrice_73;
  StrikePrice_73.setString("14577488");
set_field(msg, StrikePrice_73, Instrument_73);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_73);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_73;
  StrikePriceBoundaryPrecision_73.setString("29.560000");
set_field(msg, StrikePriceBoundaryPrecision_73, Instrument_73);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_73);
  FIX::StrikeValue StrikeValue_73;
  StrikeValue_73.setString("18737347");
set_field(msg, StrikeValue_73, Instrument_73);
  set_field(msg, FIX::Symbol{"STRING_1330702945"}, Instrument_73);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_73);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_73);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_73);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_73);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_73;
  UnitOfMeasureQty_73.setString("1371765");
set_field(msg, UnitOfMeasureQty_73, Instrument_73);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_73);
  all_values.push_back(Instrument_73);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteStatusReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_149;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_149);
    FIX::ComplexEventPrice ComplexEventPrice_149;
    ComplexEventPrice_149.setString("3235305");
set_field(noComplexEvents_0_0, ComplexEventPrice_149, ComplexEvents_NoComplexEvents_149);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_149);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_149;
    ComplexEventPriceBoundaryPrecision_149.setString("3.140000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_149, ComplexEvents_NoComplexEvents_149);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_149);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_149);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_149;
    ComplexOptPayoutAmount_149.setString("5762768");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_149, ComplexEvents_NoComplexEvents_149);
    all_values.push_back(ComplexEvents_NoComplexEvents_149);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_298;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 19, 10, 21, 8, 2010)}, ComplexEventDates_NoComplexEventDates_298);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 0, 6, 23, 6, 2001)}, ComplexEventDates_NoComplexEventDates_298);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_298);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_610;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 20, 20)}, ComplexEventTimes_NoComplexEventTimes_610);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 42, 0)}, ComplexEventTimes_NoComplexEventTimes_610);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_610);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_611;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 44, 28)}, ComplexEventTimes_NoComplexEventTimes_611);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 28, 18)}, ComplexEventTimes_NoComplexEventTimes_611);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_611);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_299;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 37, 59, 15, 1, 2003)}, ComplexEventDates_NoComplexEventDates_299);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 31, 55, 16, 5, 2013)}, ComplexEventDates_NoComplexEventDates_299);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_299);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_612;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 32, 59)}, ComplexEventTimes_NoComplexEventTimes_612);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 41, 19)}, ComplexEventTimes_NoComplexEventTimes_612);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_612);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_613;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 56, 1)}, ComplexEventTimes_NoComplexEventTimes_613);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 29, 42)}, ComplexEventTimes_NoComplexEventTimes_613);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_613);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_614;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 12, 59)}, ComplexEventTimes_NoComplexEventTimes_614);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 38, 19)}, ComplexEventTimes_NoComplexEventTimes_614);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_614);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_150;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_150);
    FIX::ComplexEventPrice ComplexEventPrice_150;
    ComplexEventPrice_150.setString("704488");
set_field(noComplexEvents_0_1, ComplexEventPrice_150, ComplexEvents_NoComplexEvents_150);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_150);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_150;
    ComplexEventPriceBoundaryPrecision_150.setString("63.580000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_150, ComplexEvents_NoComplexEvents_150);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_150);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_150);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_150;
    ComplexOptPayoutAmount_150.setString("14953723");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_150, ComplexEvents_NoComplexEvents_150);
    all_values.push_back(ComplexEvents_NoComplexEvents_150);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_300;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 24, 21, 17, 11, 2002)}, ComplexEventDates_NoComplexEventDates_300);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 20, 30, 24, 9, 2009)}, ComplexEventDates_NoComplexEventDates_300);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_300);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_615;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 51, 31)}, ComplexEventTimes_NoComplexEventTimes_615);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 1, 4)}, ComplexEventTimes_NoComplexEventTimes_615);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_615);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteStatusReport::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_146;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_902150822"}, EvntGrp_NoEvents_146);
    FIX::EventPx EventPx_146;
    EventPx_146.setString("9508439");
set_field(noEvents_0_0, EventPx_146, EvntGrp_NoEvents_146);
    set_field(noEvents_0_0, FIX::EventText{"STRING_285532316"}, EvntGrp_NoEvents_146);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(23, 14, 29, 12, 10, 2016)}, EvntGrp_NoEvents_146);
    set_field(noEvents_0_0, FIX::EventType{2}, EvntGrp_NoEvents_146);
    all_values.push_back(EvntGrp_NoEvents_146);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_147;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_2142953806"}, EvntGrp_NoEvents_147);
    FIX::EventPx EventPx_147;
    EventPx_147.setString("616292");
set_field(noEvents_0_1, EventPx_147, EvntGrp_NoEvents_147);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1963630954"}, EvntGrp_NoEvents_147);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(16, 46, 30, 20, 7, 2016)}, EvntGrp_NoEvents_147);
    set_field(noEvents_0_1, FIX::EventType{12}, EvntGrp_NoEvents_147);
    all_values.push_back(EvntGrp_NoEvents_147);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_148;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1121059722"}, EvntGrp_NoEvents_148);
    FIX::EventPx EventPx_148;
    EventPx_148.setString("18854642");
set_field(noEvents_0_2, EventPx_148, EvntGrp_NoEvents_148);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1429567054"}, EvntGrp_NoEvents_148);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(5, 34, 6, 5, 4, 2013)}, EvntGrp_NoEvents_148);
    set_field(noEvents_0_2, FIX::EventType{17}, EvntGrp_NoEvents_148);
    all_values.push_back(EvntGrp_NoEvents_148);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteStatusReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_135;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1204203897"}, InstrumentParties_NoInstrumentParties_135);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_135);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1889071122}, InstrumentParties_NoInstrumentParties_135);
    all_values.push_back(InstrumentParties_NoInstrumentParties_135);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_2144043311"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1442731111}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_279);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1104314525"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{541750385}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_280);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteStatusReport::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_148;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1165943749"}, SecAltIDGrp_NoSecurityAltID_148);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_357897691"}, SecAltIDGrp_NoSecurityAltID_148);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_148);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_149;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_660928570"}, SecAltIDGrp_NoSecurityAltID_149);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1985494085"}, SecAltIDGrp_NoSecurityAltID_149);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_149);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_146;
  set_field(msg, FIX::SecurityXML{"XMLDATA_882609617"}, SecurityXML_146);
  set_field(msg, FIX::SecurityXMLLen{1348733380}, SecurityXML_146);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_950757729"}, SecurityXML_146);
  all_values.push_back(SecurityXML_146);
  all_compo_names.insert("..");

  // LegQuotStatGrp
  // Group LegQuotStatGrp.NoLegs
  {
    FIX50SP2::QuoteStatusReport::NoLegs noLegs_0_0;
    // LegQuotStatGrp.NoLegs
    multiset<string> LegQuotStatGrp_NoLegs_0;
    FIX::LegOrderQty LegOrderQty_19;
    LegOrderQty_19.setString("11781517");
set_field(noLegs_0_0, LegOrderQty_19, LegQuotStatGrp_NoLegs_0);
    FIX::LegQty LegQty_19;
    LegQty_19.setString("9302729");
set_field(noLegs_0_0, LegQty_19, LegQuotStatGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_1741892110"}, LegQuotStatGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlType{'9'}, LegQuotStatGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSwapType{5}, LegQuotStatGrp_NoLegs_0);
    all_values.push_back(LegQuotStatGrp_NoLegs_0);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_107;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_131140208"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{279718552}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_484524593"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1499573894}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_442440977"}, InstrumentLeg_107);
    FIX::LegContractMultiplier LegContractMultiplier_107;
    LegContractMultiplier_107.setString("3071587");
set_field(noLegs_0_0, LegContractMultiplier_107, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1622674755}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1556007353"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_415325212"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_679395005"}, InstrumentLeg_107);
    FIX::LegCouponRate LegCouponRate_107;
    LegCouponRate_107.setString("24.080000");
set_field(noLegs_0_0, LegCouponRate_107, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_156912686"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1599643798"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{698808381}, InstrumentLeg_107);
    FIX::LegFactor LegFactor_107;
    LegFactor_107.setString("10893224");
set_field(noLegs_0_0, LegFactor_107, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{890361420}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1864752130"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1447220147"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1551289990"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1702762567"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_182346117"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_752539722"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_506036648"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_803178505"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_107);
    FIX::LegOptionRatio LegOptionRatio_107;
    LegOptionRatio_107.setString("14363096");
set_field(noLegs_0_0, LegOptionRatio_107, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_397586967"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_699340080"}, InstrumentLeg_107);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_107;
    LegPriceUnitOfMeasureQty_107.setString("16486660");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_107, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegProduct{528727175}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegPutOrCall{979058632}, InstrumentLeg_107);
    FIX::LegRatioQty LegRatioQty_107;
    LegRatioQty_107.setString("21331906");
set_field(noLegs_0_0, LegRatioQty_107, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_2028301070"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1421499609"}, InstrumentLeg_107);
    FIX::LegRepurchaseRate LegRepurchaseRate_107;
    LegRepurchaseRate_107.setString("57.310000");
set_field(noLegs_0_0, LegRepurchaseRate_107, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1503492177}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_830023314"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_708190944"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_35403534"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1381035722"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_865103630"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1777381038"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_317263780"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_107);
    FIX::LegStrikePrice LegStrikePrice_107;
    LegStrikePrice_107.setString("12076252");
set_field(noLegs_0_0, LegStrikePrice_107, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_45974253"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_170183101"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_611431542"}, InstrumentLeg_107);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1748736820"}, InstrumentLeg_107);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_107;
    LegUnitOfMeasureQty_107.setString("3525292");
set_field(noLegs_0_0, LegUnitOfMeasureQty_107, InstrumentLeg_107);
    all_values.push_back(InstrumentLeg_107);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_211;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_107289821"}, LegSecAltIDGrp_NoLegSecurityAltID_211);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1155707723"}, LegSecAltIDGrp_NoLegSecurityAltID_211);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_211);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_212;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1147179054"}, LegSecAltIDGrp_NoLegSecurityAltID_212);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1543599462"}, LegSecAltIDGrp_NoLegSecurityAltID_212);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_212);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_42;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_1846519134"}, LegStipulations_NoLegStipulations_42);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_1044781855"}, LegStipulations_NoLegStipulations_42);
      all_values.push_back(LegStipulations_NoLegStipulations_42);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_140;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_678094118"}, NestedParties_NoNestedPartyIDs_140);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_140);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1962839288}, NestedParties_NoNestedPartyIDs_140);
      all_values.push_back(NestedParties_NoNestedPartyIDs_140);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_290;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1323354573"}, NstdPtysSubGrp_NoNestedPartySubIDs_290);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1318847818}, NstdPtysSubGrp_NoNestedPartySubIDs_290);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_290);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_291;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_782133393"}, NstdPtysSubGrp_NoNestedPartySubIDs_291);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{2031545517}, NstdPtysSubGrp_NoNestedPartySubIDs_291);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_291);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_292;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_1354251352"}, NstdPtysSubGrp_NoNestedPartySubIDs_292);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{15685467}, NstdPtysSubGrp_NoNestedPartySubIDs_292);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_292);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_141;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_749165500"}, NestedParties_NoNestedPartyIDs_141);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'9'}, NestedParties_NoNestedPartyIDs_141);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1944293260}, NestedParties_NoNestedPartyIDs_141);
      all_values.push_back(NestedParties_NoNestedPartyIDs_141);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_293;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1312854514"}, NstdPtysSubGrp_NoNestedPartySubIDs_293);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{667256214}, NstdPtysSubGrp_NoNestedPartySubIDs_293);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_293);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_294;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_126570833"}, NstdPtysSubGrp_NoNestedPartySubIDs_294);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{1358828768}, NstdPtysSubGrp_NoNestedPartySubIDs_294);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_294);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_295;
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubID{"STRING_837439316"}, NstdPtysSubGrp_NoNestedPartySubIDs_295);
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubIDType{738002375}, NstdPtysSubGrp_NoNestedPartySubIDs_295);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_295);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_142;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_960081940"}, NestedParties_NoNestedPartyIDs_142);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_142);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{2101973640}, NestedParties_NoNestedPartyIDs_142);
      all_values.push_back(NestedParties_NoNestedPartyIDs_142);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_296;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_198192610"}, NstdPtysSubGrp_NoNestedPartySubIDs_296);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{1101669046}, NstdPtysSubGrp_NoNestedPartySubIDs_296);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_296);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoLegs noLegs_0_1;
    // LegQuotStatGrp.NoLegs
    multiset<string> LegQuotStatGrp_NoLegs_1;
    FIX::LegOrderQty LegOrderQty_20;
    LegOrderQty_20.setString("4634875");
set_field(noLegs_0_1, LegOrderQty_20, LegQuotStatGrp_NoLegs_1);
    FIX::LegQty LegQty_20;
    LegQty_20.setString("17514873");
set_field(noLegs_0_1, LegQty_20, LegQuotStatGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlDate{"LOCALMKTDATE_800704532"}, LegQuotStatGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlType{'1'}, LegQuotStatGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSwapType{5}, LegQuotStatGrp_NoLegs_1);
    all_values.push_back(LegQuotStatGrp_NoLegs_1);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_108;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1478798650"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{391274625}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1501381160"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1430908729}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1714629199"}, InstrumentLeg_108);
    FIX::LegContractMultiplier LegContractMultiplier_108;
    LegContractMultiplier_108.setString("6727453");
set_field(noLegs_0_1, LegContractMultiplier_108, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{65558474}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1598691068"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_2026996682"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_81243941"}, InstrumentLeg_108);
    FIX::LegCouponRate LegCouponRate_108;
    LegCouponRate_108.setString("29.200000");
set_field(noLegs_0_1, LegCouponRate_108, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_863661777"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_29032644"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{545309768}, InstrumentLeg_108);
    FIX::LegFactor LegFactor_108;
    LegFactor_108.setString("13933730");
set_field(noLegs_0_1, LegFactor_108, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1387861412}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1382749084"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2131375409"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_200459704"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_425233971"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_2085865402"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1267831466"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_623426581"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1040050800"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_108);
    FIX::LegOptionRatio LegOptionRatio_108;
    LegOptionRatio_108.setString("2274302");
set_field(noLegs_0_1, LegOptionRatio_108, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1840755333"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1092104825"}, InstrumentLeg_108);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_108;
    LegPriceUnitOfMeasureQty_108.setString("19134557");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_108, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegProduct{1172070335}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1483379451}, InstrumentLeg_108);
    FIX::LegRatioQty LegRatioQty_108;
    LegRatioQty_108.setString("12673532");
set_field(noLegs_0_1, LegRatioQty_108, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_455495417"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1050525002"}, InstrumentLeg_108);
    FIX::LegRepurchaseRate LegRepurchaseRate_108;
    LegRepurchaseRate_108.setString("85.950000");
set_field(noLegs_0_1, LegRepurchaseRate_108, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{521053891}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_501732422"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1819611630"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_602297833"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_702105343"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_535789759"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_480351387"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_564822403"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_108);
    FIX::LegStrikePrice LegStrikePrice_108;
    LegStrikePrice_108.setString("19526838");
set_field(noLegs_0_1, LegStrikePrice_108, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_260926592"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1198688691"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_5659872"}, InstrumentLeg_108);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_686160563"}, InstrumentLeg_108);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_108;
    LegUnitOfMeasureQty_108.setString("11370704");
set_field(noLegs_0_1, LegUnitOfMeasureQty_108, InstrumentLeg_108);
    all_values.push_back(InstrumentLeg_108);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_213;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1309587144"}, LegSecAltIDGrp_NoLegSecurityAltID_213);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_29637598"}, LegSecAltIDGrp_NoLegSecurityAltID_213);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_213);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_214;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_857326732"}, LegSecAltIDGrp_NoLegSecurityAltID_214);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1537017378"}, LegSecAltIDGrp_NoLegSecurityAltID_214);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_214);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_215;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_1870392931"}, LegSecAltIDGrp_NoLegSecurityAltID_215);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_1949431557"}, LegSecAltIDGrp_NoLegSecurityAltID_215);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_215);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_43;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_894979618"}, LegStipulations_NoLegStipulations_43);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_1285327360"}, LegStipulations_NoLegStipulations_43);
      all_values.push_back(LegStipulations_NoLegStipulations_43);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_44;
      set_field(noLegStipulations_1_1_1, FIX::LegStipulationType{"STRING_422859101"}, LegStipulations_NoLegStipulations_44);
      set_field(noLegStipulations_1_1_1, FIX::LegStipulationValue{"STRING_1350475035"}, LegStipulations_NoLegStipulations_44);
      all_values.push_back(LegStipulations_NoLegStipulations_44);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_45;
      set_field(noLegStipulations_1_1_2, FIX::LegStipulationType{"STRING_188368714"}, LegStipulations_NoLegStipulations_45);
      set_field(noLegStipulations_1_1_2, FIX::LegStipulationValue{"STRING_215474048"}, LegStipulations_NoLegStipulations_45);
      all_values.push_back(LegStipulations_NoLegStipulations_45);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_143;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_690101137"}, NestedParties_NoNestedPartyIDs_143);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_143);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{326343112}, NestedParties_NoNestedPartyIDs_143);
      all_values.push_back(NestedParties_NoNestedPartyIDs_143);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_297;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_423391790"}, NstdPtysSubGrp_NoNestedPartySubIDs_297);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{806694499}, NstdPtysSubGrp_NoNestedPartySubIDs_297);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_297);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_298;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_1213630376"}, NstdPtysSubGrp_NoNestedPartySubIDs_298);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{988214193}, NstdPtysSubGrp_NoNestedPartySubIDs_298);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_298);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_299;
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubID{"STRING_1832355654"}, NstdPtysSubGrp_NoNestedPartySubIDs_299);
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubIDType{280943658}, NstdPtysSubGrp_NoNestedPartySubIDs_299);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_299);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_144;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_793414361"}, NestedParties_NoNestedPartyIDs_144);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_144);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{1479632349}, NestedParties_NoNestedPartyIDs_144);
      all_values.push_back(NestedParties_NoNestedPartyIDs_144);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_300;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_631959161"}, NstdPtysSubGrp_NoNestedPartySubIDs_300);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{469219147}, NstdPtysSubGrp_NoNestedPartySubIDs_300);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_300);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_301;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_2072565571"}, NstdPtysSubGrp_NoNestedPartySubIDs_301);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{1941546305}, NstdPtysSubGrp_NoNestedPartySubIDs_301);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_301);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_302;
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubID{"STRING_498856745"}, NstdPtysSubGrp_NoNestedPartySubIDs_302);
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubIDType{782408655}, NstdPtysSubGrp_NoNestedPartySubIDs_302);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_302);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_145;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_1331080035"}, NestedParties_NoNestedPartyIDs_145);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_145);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{584356564}, NestedParties_NoNestedPartyIDs_145);
      all_values.push_back(NestedParties_NoNestedPartyIDs_145);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_303;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_1116745646"}, NstdPtysSubGrp_NoNestedPartySubIDs_303);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{1869683925}, NstdPtysSubGrp_NoNestedPartySubIDs_303);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_303);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_304;
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubID{"STRING_909444972"}, NstdPtysSubGrp_NoNestedPartySubIDs_304);
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubIDType{319737034}, NstdPtysSubGrp_NoNestedPartySubIDs_304);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_304);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_26;
  FIX::CashOrderQty CashOrderQty_26;
  CashOrderQty_26.setString("20580526");
set_field(msg, CashOrderQty_26, OrderQtyData_26);
  FIX::OrderPercent OrderPercent_26;
  OrderPercent_26.setString("90.200000");
set_field(msg, OrderPercent_26, OrderQtyData_26);
  FIX::OrderQty OrderQty_35;
  OrderQty_35.setString("437823");
set_field(msg, OrderQty_35, OrderQtyData_26);
  set_field(msg, FIX::RoundingDirection{'0'}, OrderQtyData_26);
  FIX::RoundingModulus RoundingModulus_26;
  RoundingModulus_26.setString("10125210");
set_field(msg, RoundingModulus_26, OrderQtyData_26);
  all_values.push_back(OrderQtyData_26);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteStatusReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_122;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1992876608"}, Parties_NoPartyIDs_122);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_122);
    set_field(noPartyIDs_0_0, FIX::PartyRole{1}, Parties_NoPartyIDs_122);
    all_values.push_back(Parties_NoPartyIDs_122);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_243;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_276643386"}, PtysSubGrp_NoPartySubIDs_243);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_243);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_243);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_244;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1339966994"}, PtysSubGrp_NoPartySubIDs_244);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_244);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_244);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_245;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_807490529"}, PtysSubGrp_NoPartySubIDs_245);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_245);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_245);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_123;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1869131980"}, Parties_NoPartyIDs_123);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_123);
    set_field(noPartyIDs_0_1, FIX::PartyRole{49}, Parties_NoPartyIDs_123);
    all_values.push_back(Parties_NoPartyIDs_123);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_246;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1233512348"}, PtysSubGrp_NoPartySubIDs_246);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_246);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_246);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_124;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_429138910"}, Parties_NoPartyIDs_124);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_124);
    set_field(noPartyIDs_0_2, FIX::PartyRole{9}, Parties_NoPartyIDs_124);
    all_values.push_back(Parties_NoPartyIDs_124);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_247;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_903694606"}, PtysSubGrp_NoPartySubIDs_247);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_247);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_247);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::QuoteStatusReport::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_13;
    set_field(noQuoteQualifiers_0_0, FIX::QuoteQualifier{'1'}, QuotQualGrp_NoQuoteQualifiers_13);
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_13);
    all_compo_names.insert("...NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoQuoteQualifiers noQuoteQualifiers_0_1;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_14;
    set_field(noQuoteQualifiers_0_1, FIX::QuoteQualifier{'1'}, QuotQualGrp_NoQuoteQualifiers_14);
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_14);
    all_compo_names.insert("...NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_29;
  set_field(msg, FIX::BenchmarkCurveCurrency{"CAN"}, SpreadOrBenchmarkCurveData_29);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_EUREPO"}, SpreadOrBenchmarkCurveData_29);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1246934872"}, SpreadOrBenchmarkCurveData_29);
  FIX::BenchmarkPrice BenchmarkPrice_29;
  BenchmarkPrice_29.setString("18030960");
set_field(msg, BenchmarkPrice_29, SpreadOrBenchmarkCurveData_29);
  set_field(msg, FIX::BenchmarkPriceType{1564864386}, SpreadOrBenchmarkCurveData_29);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1092327832"}, SpreadOrBenchmarkCurveData_29);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1091525195"}, SpreadOrBenchmarkCurveData_29);
  FIX::Spread Spread_29;
  Spread_29.setString("5942006");
set_field(msg, Spread_29, SpreadOrBenchmarkCurveData_29);
  all_values.push_back(SpreadOrBenchmarkCurveData_29);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::QuoteStatusReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_50;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_MINQTY"}, Stipulations_NoStipulations_50);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1455892593"}, Stipulations_NoStipulations_50);
    all_values.push_back(Stipulations_NoStipulations_50);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_51;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_REDEMPTION"}, Stipulations_NoStipulations_51);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_290742681"}, Stipulations_NoStipulations_51);
    all_values.push_back(Stipulations_NoStipulations_51);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_52;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_RATING"}, Stipulations_NoStipulations_52);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_2015950211"}, Stipulations_NoStipulations_52);
    all_values.push_back(Stipulations_NoStipulations_52);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteStatusReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_15;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_1555349164"}, TargetParties_NoTargetPartyIDs_15);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_15);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{1806604917}, TargetParties_NoTargetPartyIDs_15);
    all_values.push_back(TargetParties_NoTargetPartyIDs_15);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_16;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_641377864"}, TargetParties_NoTargetPartyIDs_16);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'5'}, TargetParties_NoTargetPartyIDs_16);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{88260179}, TargetParties_NoTargetPartyIDs_16);
    all_values.push_back(TargetParties_NoTargetPartyIDs_16);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteStatusReport::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_17;
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyID{"STRING_1058486600"}, TargetParties_NoTargetPartyIDs_17);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyIDSource{'2'}, TargetParties_NoTargetPartyIDs_17);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyRole{1101755654}, TargetParties_NoTargetPartyIDs_17);
    all_values.push_back(TargetParties_NoTargetPartyIDs_17);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteStatusReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_109;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1048202929"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1837451406}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1627837137"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{51675929}, UnderlyingInstrument_109);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_109;
    UnderlyingAdjustedQuantity_109.setString("3362325");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_109, UnderlyingInstrument_109);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_109;
    UnderlyingAllocationPercent_109.setString("84.400000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_109, UnderlyingInstrument_109);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_109;
    UnderlyingAttachmentPoint_109.setString("48.910000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1583167374"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_2074024442"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_663795629"}, UnderlyingInstrument_109);
    FIX::UnderlyingCapValue UnderlyingCapValue_109;
    UnderlyingCapValue_109.setString("5280115");
set_field(noUnderlyings_0_0, UnderlyingCapValue_109, UnderlyingInstrument_109);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_109;
    UnderlyingCashAmount_109.setString("10180659");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_109);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_109;
    UnderlyingContractMultiplier_109.setString("5318790");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{238750922}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_566405237"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1875713595"}, UnderlyingInstrument_109);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_109;
    UnderlyingCouponRate_109.setString("36.030000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_682304711"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_109);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_109;
    UnderlyingCurrentValue_109.setString("901702");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_109, UnderlyingInstrument_109);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_109;
    UnderlyingDetachmentPoint_109.setString("79.170000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_109, UnderlyingInstrument_109);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_109;
    UnderlyingDirtyPrice_109.setString("2010058");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_109, UnderlyingInstrument_109);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_109;
    UnderlyingEndPrice_109.setString("7315480");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_109, UnderlyingInstrument_109);
    FIX::UnderlyingEndValue UnderlyingEndValue_109;
    UnderlyingEndValue_109.setString("11090072");
set_field(noUnderlyings_0_0, UnderlyingEndValue_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{289266065}, UnderlyingInstrument_109);
    FIX::UnderlyingFXRate UnderlyingFXRate_109;
    UnderlyingFXRate_109.setString("17900346");
set_field(noUnderlyings_0_0, UnderlyingFXRate_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_109);
    FIX::UnderlyingFactor UnderlyingFactor_109;
    UnderlyingFactor_109.setString("13910217");
set_field(noUnderlyings_0_0, UnderlyingFactor_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1604732250}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_226709859"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1080989478"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1085085739"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_278385788"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1417221980"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1356014179"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1524800679"}, UnderlyingInstrument_109);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_109;
    UnderlyingNotionalPercentageOutstanding_109.setString("57.060000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_109);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_109;
    UnderlyingOriginalNotionalPercentageOutstanding_109.setString("26.610000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1380917265"}, UnderlyingInstrument_109);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_109;
    UnderlyingPriceUnitOfMeasureQty_109.setString("1531373");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1299108953}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1912796344}, UnderlyingInstrument_109);
    FIX::UnderlyingPx UnderlyingPx_109;
    UnderlyingPx_109.setString("3918882");
set_field(noUnderlyings_0_0, UnderlyingPx_109, UnderlyingInstrument_109);
    FIX::UnderlyingQty UnderlyingQty_109;
    UnderlyingQty_109.setString("18655141");
set_field(noUnderlyings_0_0, UnderlyingQty_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1641026291"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_921381840"}, UnderlyingInstrument_109);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_109;
    UnderlyingRepurchaseRate_109.setString("52.530000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1237722802}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1463266457"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_490505480"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1844220719"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1664272343"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1222053572"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_805744334"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1953538409"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_864604616"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_2131734912"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_109);
    FIX::UnderlyingStartValue UnderlyingStartValue_109;
    UnderlyingStartValue_109.setString("3218532");
set_field(noUnderlyings_0_0, UnderlyingStartValue_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_210961123"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_109);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_109;
    UnderlyingStrikePrice_109.setString("4893469");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_109, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1547804292"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_615469490"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_2014147591"}, UnderlyingInstrument_109);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_253226350"}, UnderlyingInstrument_109);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_109;
    UnderlyingUnitOfMeasureQty_109.setString("18980244");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_109, UnderlyingInstrument_109);
    all_values.push_back(UnderlyingInstrument_109);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_225;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1634143615"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_225);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_2051161778"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_225);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_225);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_226;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1206885557"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_226);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1399456312"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_226);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_226);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_227;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_295566367"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_227);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_924916099"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_227);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_227);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_216;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1216948207"}, UnderlyingStipulations_NoUnderlyingStips_216);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1325251352"}, UnderlyingStipulations_NoUnderlyingStips_216);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_216);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_217;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_2130721757"}, UnderlyingStipulations_NoUnderlyingStips_217);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_532731017"}, UnderlyingStipulations_NoUnderlyingStips_217);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_217);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_232;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1827458828"}, UndlyInstrumentParties_NoUndlyInstrumentParties_232);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_232);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{890326757}, UndlyInstrumentParties_NoUndlyInstrumentParties_232);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_232);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2003058121"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1754931374}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_233;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_469970779"}, UndlyInstrumentParties_NoUndlyInstrumentParties_233);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_233);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{2076784593}, UndlyInstrumentParties_NoUndlyInstrumentParties_233);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_233);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1183233266"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1336239903}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_234;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1170278815"}, UndlyInstrumentParties_NoUndlyInstrumentParties_234);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_234);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1951709393}, UndlyInstrumentParties_NoUndlyInstrumentParties_234);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_234);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_836780260"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1702250209}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_24;
  FIX::Yield Yield_24;
  Yield_24.setString("93.630000");
set_field(msg, Yield_24, YieldData_24);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_323440228"}, YieldData_24);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1605928339"}, YieldData_24);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_24;
  YieldRedemptionPrice_24.setString("41212");
set_field(msg, YieldRedemptionPrice_24, YieldData_24);
  set_field(msg, FIX::YieldRedemptionPriceType{1722896540}, YieldData_24);
  set_field(msg, FIX::YieldType{"STRING_TENDER"}, YieldData_24);
  all_values.push_back(YieldData_24);
  all_compo_names.insert(".");

  // header
  multiset<string> header_73;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_73);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_468411847"}, header_73);
  set_header_field(msg.getHeader(), FIX::BodyLength{970959265}, header_73);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_106805076"}, header_73);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_451649957"}, header_73);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1503690282"}, header_73);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1922561909"}, header_73);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{131625137}, header_73);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_73);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{665405019}, header_73);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_617344652"}, header_73);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1408784468"}, header_73);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_272852745"}, header_73);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(23, 10, 55, 9, 2, 2012)}, header_73);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_73);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_73);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1827985260"}, header_73);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{770035563}, header_73);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_897385900"}, header_73);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_625220975"}, header_73);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1093475791"}, header_73);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(16, 43, 9, 0, 4, 2004)}, header_73);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1665184696"}, header_73);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1588950488"}, header_73);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_437007549"}, header_73);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1440262958"}, header_73);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1720575625}, header_73);
  all_values.push_back(header_73);
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
