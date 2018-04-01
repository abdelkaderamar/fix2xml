#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::Quote msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Quote_0;
  set_field(msg, FIX::Account{"STRING_1170391881"}, Quote_0);
  set_field(msg, FIX::AccountType{3}, Quote_0);
  set_field(msg, FIX::AcctIDSource{2}, Quote_0);
  FIX::BidForwardPoints BidForwardPoints_4;
  BidForwardPoints_4.setString("11735469");
set_field(msg, BidForwardPoints_4, Quote_0);
  FIX::BidForwardPoints2 BidForwardPoints2_4;
  BidForwardPoints2_4.setString("9430134");
set_field(msg, BidForwardPoints2_4, Quote_0);
  FIX::BidPx BidPx_4;
  BidPx_4.setString("6711100");
set_field(msg, BidPx_4, Quote_0);
  FIX::BidSize BidSize_4;
  BidSize_4.setString("417607");
set_field(msg, BidSize_4, Quote_0);
  FIX::BidSpotRate BidSpotRate_4;
  BidSpotRate_4.setString("5597567");
set_field(msg, BidSpotRate_4, Quote_0);
  FIX::BidSwapPoints BidSwapPoints_0;
  BidSwapPoints_0.setString("21362563");
set_field(msg, BidSwapPoints_0, Quote_0);
  FIX::BidYield BidYield_4;
  BidYield_4.setString("96.410000");
set_field(msg, BidYield_4, Quote_0);
  set_field(msg, FIX::BookingType{0}, Quote_0);
  set_field(msg, FIX::CommType{'3'}, Quote_0);
  FIX::Commission Commission_18;
  Commission_18.setString("12075835");
set_field(msg, Commission_18, Quote_0);
  set_field(msg, FIX::Currency{"CAN"}, Quote_0);
  set_field(msg, FIX::CustOrderCapacity{2}, Quote_0);
  set_field(msg, FIX::EncodedText{"DATA_193118215"}, Quote_0);
  set_field(msg, FIX::EncodedTextLen{843968637}, Quote_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_1884085104"}, Quote_0);
  set_field(msg, FIX::ExDestinationIDSource{'B'}, Quote_0);
  FIX::MidPx MidPx_4;
  MidPx_4.setString("18855849");
set_field(msg, MidPx_4, Quote_0);
  FIX::MidYield MidYield_4;
  MidYield_4.setString("80.950000");
set_field(msg, MidYield_4, Quote_0);
  FIX::MinBidSize MinBidSize_0;
  MinBidSize_0.setString("2442941");
set_field(msg, MinBidSize_0, Quote_0);
  FIX::MinOfferSize MinOfferSize_0;
  MinOfferSize_0.setString("21188681");
set_field(msg, MinOfferSize_0, Quote_0);
  FIX::MinQty MinQty_12;
  MinQty_12.setString("17980215");
set_field(msg, MinQty_12, Quote_0);
  FIX::MktBidPx MktBidPx_0;
  MktBidPx_0.setString("14659231");
set_field(msg, MktBidPx_0, Quote_0);
  FIX::MktOfferPx MktOfferPx_0;
  MktOfferPx_0.setString("1796115");
set_field(msg, MktOfferPx_0, Quote_0);
  FIX::OfferForwardPoints OfferForwardPoints_4;
  OfferForwardPoints_4.setString("19252433");
set_field(msg, OfferForwardPoints_4, Quote_0);
  FIX::OfferForwardPoints2 OfferForwardPoints2_4;
  OfferForwardPoints2_4.setString("3138496");
set_field(msg, OfferForwardPoints2_4, Quote_0);
  FIX::OfferPx OfferPx_4;
  OfferPx_4.setString("15301580");
set_field(msg, OfferPx_4, Quote_0);
  FIX::OfferSize OfferSize_4;
  OfferSize_4.setString("11239660");
set_field(msg, OfferSize_4, Quote_0);
  FIX::OfferSpotRate OfferSpotRate_4;
  OfferSpotRate_4.setString("14842415");
set_field(msg, OfferSpotRate_4, Quote_0);
  FIX::OfferSwapPoints OfferSwapPoints_0;
  OfferSwapPoints_0.setString("1940325");
set_field(msg, OfferSwapPoints_0, Quote_0);
  FIX::OfferYield OfferYield_4;
  OfferYield_4.setString("40.810000");
set_field(msg, OfferYield_4, Quote_0);
  set_field(msg, FIX::OrdType{'M'}, Quote_0);
  set_field(msg, FIX::OrderCapacity{'G'}, Quote_0);
  FIX::OrderQty2 OrderQty2_8;
  OrderQty2_8.setString("12362141");
set_field(msg, OrderQty2_8, Quote_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_1"}, Quote_0);
  set_field(msg, FIX::PriceType{7}, Quote_0);
  set_field(msg, FIX::PrivateQuote{true}, Quote_0);
  set_field(msg, FIX::QuoteID{"STRING_567435221"}, Quote_0);
  set_field(msg, FIX::QuoteMsgID{"STRING_548698162"}, Quote_0);
  set_field(msg, FIX::QuoteReqID{"STRING_1810754700"}, Quote_0);
  set_field(msg, FIX::QuoteRespID{"STRING_1775018758"}, Quote_0);
  set_field(msg, FIX::QuoteResponseLevel{3}, Quote_0);
  set_field(msg, FIX::QuoteType{2}, Quote_0);
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_0;
  SettlCurrBidFxRate_0.setString("3164669");
set_field(msg, SettlCurrBidFxRate_0, Quote_0);
  set_field(msg, FIX::SettlCurrFxRateCalc{'M'}, Quote_0);
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_0;
  SettlCurrOfferFxRate_0.setString("7745414");
set_field(msg, SettlCurrOfferFxRate_0, Quote_0);
  set_field(msg, FIX::SettlCurrency{"EUR"}, Quote_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_512642727"}, Quote_0);
  set_field(msg, FIX::SettlDate2{"LOCALMKTDATE_1000016539"}, Quote_0);
  set_field(msg, FIX::SettlType{"STRING_2"}, Quote_0);
  set_field(msg, FIX::Side{'E'}, Quote_0);
  set_field(msg, FIX::Text{"STRING_650554399"}, Quote_0);
  set_field(msg, FIX::TradingSessionID{"STRING_6"}, Quote_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_6"}, Quote_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(15, 51, 43, 8, 8, 2004)}, Quote_0);
  set_field(msg, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(3, 2, 45, 17, 5, 2002)}, Quote_0);
  all_values.push_back(Quote_0);

  all_compo_names.insert("Quote");

  // FinancingDetails
  multiset<string> FinancingDetails_16;
  set_field(msg, FIX::AgreementCurrency{"CAN"}, FinancingDetails_16);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_306445576"}, FinancingDetails_16);
  set_field(msg, FIX::AgreementDesc{"STRING_36956938"}, FinancingDetails_16);
  set_field(msg, FIX::AgreementID{"STRING_2024945463"}, FinancingDetails_16);
  set_field(msg, FIX::DeliveryType{0}, FinancingDetails_16);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_939106740"}, FinancingDetails_16);
  FIX::MarginRatio MarginRatio_16;
  MarginRatio_16.setString("32.380000");
set_field(msg, MarginRatio_16, FinancingDetails_16);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_675981009"}, FinancingDetails_16);
  set_field(msg, FIX::TerminationType{4}, FinancingDetails_16);
  all_values.push_back(FinancingDetails_16);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_53;
  FIX::AttachmentPoint AttachmentPoint_53;
  AttachmentPoint_53.setString("59.650000");
set_field(msg, AttachmentPoint_53, Instrument_53);
  set_field(msg, FIX::CFICode{"STRING_1675997548"}, Instrument_53);
  set_field(msg, FIX::CPProgram{2}, Instrument_53);
  set_field(msg, FIX::CPRegType{"STRING_1648673227"}, Instrument_53);
  FIX::CapPrice CapPrice_53;
  CapPrice_53.setString("1790683");
set_field(msg, CapPrice_53, Instrument_53);
  FIX::ContractMultiplier ContractMultiplier_53;
  ContractMultiplier_53.setString("2534253");
set_field(msg, ContractMultiplier_53, Instrument_53);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_53);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_607382418"}, Instrument_53);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_2113255903"}, Instrument_53);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_211141638"}, Instrument_53);
  FIX::CouponRate CouponRate_53;
  CouponRate_53.setString("89.730000");
set_field(msg, CouponRate_53, Instrument_53);
  set_field(msg, FIX::CreditRating{"STRING_1162360747"}, Instrument_53);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_451487377"}, Instrument_53);
  FIX::DetachmentPoint DetachmentPoint_53;
  DetachmentPoint_53.setString("32.580000");
set_field(msg, DetachmentPoint_53, Instrument_53);
  set_field(msg, FIX::EncodedIssuer{"DATA_721770412"}, Instrument_53);
  set_field(msg, FIX::EncodedIssuerLen{1828879132}, Instrument_53);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1188194392"}, Instrument_53);
  set_field(msg, FIX::EncodedSecurityDescLen{833245657}, Instrument_53);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_53);
  FIX::Factor Factor_53;
  Factor_53.setString("14718123");
set_field(msg, Factor_53, Instrument_53);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_53);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_53);
  FIX::FloorPrice FloorPrice_53;
  FloorPrice_53.setString("14187013");
set_field(msg, FloorPrice_53, Instrument_53);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_53);
  set_field(msg, FIX::InstrRegistry{"STRING_2120472258"}, Instrument_53);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_53);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_294030616"}, Instrument_53);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_912095350"}, Instrument_53);
  set_field(msg, FIX::Issuer{"STRING_1948166451"}, Instrument_53);
  set_field(msg, FIX::ListMethod{1}, Instrument_53);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1686965710"}, Instrument_53);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_965328769"}, Instrument_53);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_498525526"}, Instrument_53);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_394410147"}, Instrument_53);
  FIX::MinPriceIncrement MinPriceIncrement_53;
  MinPriceIncrement_53.setString("4665183");
set_field(msg, MinPriceIncrement_53, Instrument_53);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_53;
  MinPriceIncrementAmount_53.setString("6775938");
set_field(msg, MinPriceIncrementAmount_53, Instrument_53);
  set_field(msg, FIX::NTPositionLimit{647835476}, Instrument_53);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_53;
  NotionalPercentageOutstanding_53.setString("67.750000");
set_field(msg, NotionalPercentageOutstanding_53, Instrument_53);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_53);
  FIX::OptPayoutAmount OptPayoutAmount_53;
  OptPayoutAmount_53.setString("6136077");
set_field(msg, OptPayoutAmount_53, Instrument_53);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_53);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_53;
  OriginalNotionalPercentageOutstanding_53.setString("52.180000");
set_field(msg, OriginalNotionalPercentageOutstanding_53, Instrument_53);
  set_field(msg, FIX::Pool{"STRING_1775968479"}, Instrument_53);
  set_field(msg, FIX::PositionLimit{1293975790}, Instrument_53);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_53);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_350255243"}, Instrument_53);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_53;
  PriceUnitOfMeasureQty_53.setString("9753712");
set_field(msg, PriceUnitOfMeasureQty_53, Instrument_53);
  set_field(msg, FIX::Product{12}, Instrument_53);
  set_field(msg, FIX::ProductComplex{"STRING_1183500901"}, Instrument_53);
  set_field(msg, FIX::PutOrCall{0}, Instrument_53);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1791757941"}, Instrument_53);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_548173376"}, Instrument_53);
  FIX::RepurchaseRate RepurchaseRate_53;
  RepurchaseRate_53.setString("92.690000");
set_field(msg, RepurchaseRate_53, Instrument_53);
  set_field(msg, FIX::RepurchaseTerm{1062975691}, Instrument_53);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_53);
  set_field(msg, FIX::SecurityDesc{"STRING_1492497879"}, Instrument_53);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_211655256"}, Instrument_53);
  set_field(msg, FIX::SecurityGroup{"STRING_513322045"}, Instrument_53);
  set_field(msg, FIX::SecurityID{"STRING_257109582"}, Instrument_53);
  set_field(msg, FIX::SecurityIDSource{"STRING_L"}, Instrument_53);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_53);
  set_field(msg, FIX::SecuritySubType{"STRING_1944075292"}, Instrument_53);
  set_field(msg, FIX::SecurityType{"STRING_FRN"}, Instrument_53);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_53);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_53);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1444185177"}, Instrument_53);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_511969374"}, Instrument_53);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_53);
  FIX::StrikeMultiplier StrikeMultiplier_53;
  StrikeMultiplier_53.setString("17969456");
set_field(msg, StrikeMultiplier_53, Instrument_53);
  FIX::StrikePrice StrikePrice_53;
  StrikePrice_53.setString("14524449");
set_field(msg, StrikePrice_53, Instrument_53);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_53);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_53;
  StrikePriceBoundaryPrecision_53.setString("71.890000");
set_field(msg, StrikePriceBoundaryPrecision_53, Instrument_53);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_53);
  FIX::StrikeValue StrikeValue_53;
  StrikeValue_53.setString("20645125");
set_field(msg, StrikeValue_53, Instrument_53);
  set_field(msg, FIX::Symbol{"STRING_78368369"}, Instrument_53);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_53);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_53);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_53);
  set_field(msg, FIX::UnitOfMeasure{"STRING_lbs"}, Instrument_53);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_53;
  UnitOfMeasureQty_53.setString("3283940");
set_field(msg, UnitOfMeasureQty_53, Instrument_53);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_53);
  all_values.push_back(Instrument_53);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Quote::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_106;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_106);
    FIX::ComplexEventPrice ComplexEventPrice_106;
    ComplexEventPrice_106.setString("11055639");
set_field(noComplexEvents_0_0, ComplexEventPrice_106, ComplexEvents_NoComplexEvents_106);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_106);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_106;
    ComplexEventPriceBoundaryPrecision_106.setString("75.830000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_106, ComplexEvents_NoComplexEvents_106);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_106);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_106);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_106;
    ComplexOptPayoutAmount_106.setString("14500271");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_106, ComplexEvents_NoComplexEvents_106);
    all_values.push_back(ComplexEvents_NoComplexEvents_106);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_228;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 24, 7, 25, 10, 2008)}, ComplexEventDates_NoComplexEventDates_228);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 33, 59, 18, 7, 2007)}, ComplexEventDates_NoComplexEventDates_228);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_228);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_456;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 8, 44)}, ComplexEventTimes_NoComplexEventTimes_456);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 39, 16)}, ComplexEventTimes_NoComplexEventTimes_456);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_456);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_229;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 40, 30, 13, 1, 2014)}, ComplexEventDates_NoComplexEventDates_229);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 57, 40, 15, 7, 2007)}, ComplexEventDates_NoComplexEventDates_229);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_229);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_457;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 34, 30)}, ComplexEventTimes_NoComplexEventTimes_457);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 32, 45)}, ComplexEventTimes_NoComplexEventTimes_457);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_457);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_230;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 45, 55, 8, 1, 2011)}, ComplexEventDates_NoComplexEventDates_230);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 33, 41, 10, 11, 2009)}, ComplexEventDates_NoComplexEventDates_230);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_230);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_458;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 39, 30)}, ComplexEventTimes_NoComplexEventTimes_458);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 23, 25)}, ComplexEventTimes_NoComplexEventTimes_458);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_458);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_459;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 59, 51)}, ComplexEventTimes_NoComplexEventTimes_459);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 15, 30)}, ComplexEventTimes_NoComplexEventTimes_459);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_459);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_460;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 16, 5)}, ComplexEventTimes_NoComplexEventTimes_460);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 40, 44)}, ComplexEventTimes_NoComplexEventTimes_460);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_460);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::Quote::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_107;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_107);
    FIX::ComplexEventPrice ComplexEventPrice_107;
    ComplexEventPrice_107.setString("10287306");
set_field(noComplexEvents_0_1, ComplexEventPrice_107, ComplexEvents_NoComplexEvents_107);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_107);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_107;
    ComplexEventPriceBoundaryPrecision_107.setString("87.820000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_107, ComplexEvents_NoComplexEvents_107);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_107);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_107);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_107;
    ComplexOptPayoutAmount_107.setString("6103304");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_107, ComplexEvents_NoComplexEvents_107);
    all_values.push_back(ComplexEvents_NoComplexEvents_107);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_231;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 59, 43, 5, 11, 2008)}, ComplexEventDates_NoComplexEventDates_231);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 59, 18, 16, 11, 2015)}, ComplexEventDates_NoComplexEventDates_231);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_231);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_461;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 19, 14)}, ComplexEventTimes_NoComplexEventTimes_461);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 46, 59)}, ComplexEventTimes_NoComplexEventTimes_461);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_461);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_462;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 16, 5)}, ComplexEventTimes_NoComplexEventTimes_462);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 49, 9)}, ComplexEventTimes_NoComplexEventTimes_462);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_462);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_463;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 8, 45)}, ComplexEventTimes_NoComplexEventTimes_463);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 46, 45)}, ComplexEventTimes_NoComplexEventTimes_463);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_463);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_232;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 3, 59, 12, 5, 2002)}, ComplexEventDates_NoComplexEventDates_232);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 13, 50, 23, 5, 2017)}, ComplexEventDates_NoComplexEventDates_232);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_232);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_464;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 22, 17)}, ComplexEventTimes_NoComplexEventTimes_464);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 59, 9)}, ComplexEventTimes_NoComplexEventTimes_464);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_464);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_233;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 10, 36, 2, 10, 2016)}, ComplexEventDates_NoComplexEventDates_233);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 0, 2, 22, 5, 2007)}, ComplexEventDates_NoComplexEventDates_233);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_233);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_465;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 49, 47)}, ComplexEventTimes_NoComplexEventTimes_465);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 8, 37)}, ComplexEventTimes_NoComplexEventTimes_465);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_465);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::Quote::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_108;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_108);
    FIX::ComplexEventPrice ComplexEventPrice_108;
    ComplexEventPrice_108.setString("11399073");
set_field(noComplexEvents_0_2, ComplexEventPrice_108, ComplexEvents_NoComplexEvents_108);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_108);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_108;
    ComplexEventPriceBoundaryPrecision_108.setString("8.190000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_108, ComplexEvents_NoComplexEvents_108);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_108);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_108);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_108;
    ComplexOptPayoutAmount_108.setString("18709858");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_108, ComplexEvents_NoComplexEvents_108);
    all_values.push_back(ComplexEvents_NoComplexEvents_108);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_234;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 49, 16, 25, 3, 2013)}, ComplexEventDates_NoComplexEventDates_234);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 31, 15, 8, 4, 2014)}, ComplexEventDates_NoComplexEventDates_234);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_234);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_466;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 42, 26)}, ComplexEventTimes_NoComplexEventTimes_466);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 34, 10)}, ComplexEventTimes_NoComplexEventTimes_466);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_466);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_235;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 2, 53, 9, 4, 2010)}, ComplexEventDates_NoComplexEventDates_235);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 10, 9, 7, 8, 2017)}, ComplexEventDates_NoComplexEventDates_235);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_235);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_467;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 41, 59)}, ComplexEventTimes_NoComplexEventTimes_467);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 37, 29)}, ComplexEventTimes_NoComplexEventTimes_467);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_467);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_236;
      set_field(noComplexEventDates_2_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 3, 38, 7, 12, 2017)}, ComplexEventDates_NoComplexEventDates_236);
      set_field(noComplexEventDates_2_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 8, 15, 14, 2, 2000)}, ComplexEventDates_NoComplexEventDates_236);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_236);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_468;
        set_field(noComplexEventTimes_2_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 1, 10)}, ComplexEventTimes_NoComplexEventTimes_468);
        set_field(noComplexEventTimes_2_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 33, 27)}, ComplexEventTimes_NoComplexEventTimes_468);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_468);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_469;
        set_field(noComplexEventTimes_2_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 0, 7)}, ComplexEventTimes_NoComplexEventTimes_469);
        set_field(noComplexEventTimes_2_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 44, 43)}, ComplexEventTimes_NoComplexEventTimes_469);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_469);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      {
        FIX50SP2::Quote::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_470;
        set_field(noComplexEventTimes_2_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 46, 7)}, ComplexEventTimes_NoComplexEventTimes_470);
        set_field(noComplexEventTimes_2_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 4, 31)}, ComplexEventTimes_NoComplexEventTimes_470);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_470);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::Quote::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_110;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_722022493"}, EvntGrp_NoEvents_110);
    FIX::EventPx EventPx_110;
    EventPx_110.setString("20867149");
set_field(noEvents_0_0, EventPx_110, EvntGrp_NoEvents_110);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1505360049"}, EvntGrp_NoEvents_110);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(8, 51, 4, 5, 5, 2008)}, EvntGrp_NoEvents_110);
    set_field(noEvents_0_0, FIX::EventType{2}, EvntGrp_NoEvents_110);
    all_values.push_back(EvntGrp_NoEvents_110);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::Quote::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_111;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1524475757"}, EvntGrp_NoEvents_111);
    FIX::EventPx EventPx_111;
    EventPx_111.setString("14709167");
set_field(noEvents_0_1, EventPx_111, EvntGrp_NoEvents_111);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1525496800"}, EvntGrp_NoEvents_111);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(18, 33, 25, 20, 11, 2009)}, EvntGrp_NoEvents_111);
    set_field(noEvents_0_1, FIX::EventType{9}, EvntGrp_NoEvents_111);
    all_values.push_back(EvntGrp_NoEvents_111);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Quote::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_100;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1683764964"}, InstrumentParties_NoInstrumentParties_100);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_100);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{486594386}, InstrumentParties_NoInstrumentParties_100);
    all_values.push_back(InstrumentParties_NoInstrumentParties_100);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Quote::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_407560088"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{643271251}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_110;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_288149002"}, SecAltIDGrp_NoSecurityAltID_110);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1365293744"}, SecAltIDGrp_NoSecurityAltID_110);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_110);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_111;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_847361083"}, SecAltIDGrp_NoSecurityAltID_111);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1793509051"}, SecAltIDGrp_NoSecurityAltID_111);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_111);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::Quote::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_112;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1299649358"}, SecAltIDGrp_NoSecurityAltID_112);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_276980899"}, SecAltIDGrp_NoSecurityAltID_112);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_112);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_106;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1917221183"}, SecurityXML_106);
  set_field(msg, FIX::SecurityXMLLen{830031034}, SecurityXML_106);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_106596744"}, SecurityXML_106);
  all_values.push_back(SecurityXML_106);
  all_compo_names.insert("..");

  // LegQuotGrp
  // Group LegQuotGrp.NoLegs
  {
    FIX50SP2::Quote::NoLegs noLegs_0_0;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_0;
    FIX::LegBidForwardPoints LegBidForwardPoints_0;
    LegBidForwardPoints_0.setString("7753898");
set_field(noLegs_0_0, LegBidForwardPoints_0, LegQuotGrp_NoLegs_0);
    FIX::LegBidPx LegBidPx_0;
    LegBidPx_0.setString("20606482");
set_field(noLegs_0_0, LegBidPx_0, LegQuotGrp_NoLegs_0);
    FIX::LegOfferForwardPoints LegOfferForwardPoints_0;
    LegOfferForwardPoints_0.setString("6217804");
set_field(noLegs_0_0, LegOfferForwardPoints_0, LegQuotGrp_NoLegs_0);
    FIX::LegOfferPx LegOfferPx_0;
    LegOfferPx_0.setString("988229");
set_field(noLegs_0_0, LegOfferPx_0, LegQuotGrp_NoLegs_0);
    FIX::LegOrderQty LegOrderQty_5;
    LegOrderQty_5.setString("14386614");
set_field(noLegs_0_0, LegOrderQty_5, LegQuotGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegPriceType{47216194}, LegQuotGrp_NoLegs_0);
    FIX::LegQty LegQty_5;
    LegQty_5.setString("13878216");
set_field(noLegs_0_0, LegQty_5, LegQuotGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_1697705271"}, LegQuotGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_107738819"}, LegQuotGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlType{'8'}, LegQuotGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSwapType{2}, LegQuotGrp_NoLegs_0);
    all_values.push_back(LegQuotGrp_NoLegs_0);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_71;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1408934888"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{819929883}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1736609048"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{945216205}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1406626198"}, InstrumentLeg_71);
    FIX::LegContractMultiplier LegContractMultiplier_71;
    LegContractMultiplier_71.setString("757197");
set_field(noLegs_0_0, LegContractMultiplier_71, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{739771859}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1814186286"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_718991038"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1647901625"}, InstrumentLeg_71);
    FIX::LegCouponRate LegCouponRate_71;
    LegCouponRate_71.setString("52.880000");
set_field(noLegs_0_0, LegCouponRate_71, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_2084284782"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1236450492"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{624759960}, InstrumentLeg_71);
    FIX::LegFactor LegFactor_71;
    LegFactor_71.setString("15180982");
set_field(noLegs_0_0, LegFactor_71, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{2066481527}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_731356704"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_615402906"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_694387760"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_644521322"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1237183343"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_793210713"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_2083182741"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1284399537"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'3'}, InstrumentLeg_71);
    FIX::LegOptionRatio LegOptionRatio_71;
    LegOptionRatio_71.setString("16334043");
set_field(noLegs_0_0, LegOptionRatio_71, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1392138356"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_849766131"}, InstrumentLeg_71);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_71;
    LegPriceUnitOfMeasureQty_71.setString("2413820");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_71, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegProduct{653589596}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1669696015}, InstrumentLeg_71);
    FIX::LegRatioQty LegRatioQty_71;
    LegRatioQty_71.setString("19779910");
set_field(noLegs_0_0, LegRatioQty_71, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1598805801"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_928838565"}, InstrumentLeg_71);
    FIX::LegRepurchaseRate LegRepurchaseRate_71;
    LegRepurchaseRate_71.setString("8.530000");
set_field(noLegs_0_0, LegRepurchaseRate_71, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{191094013}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_595541203"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_625218243"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1838995638"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_550392843"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_562019377"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_39291050"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1798469870"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_71);
    FIX::LegStrikePrice LegStrikePrice_71;
    LegStrikePrice_71.setString("17174677");
set_field(noLegs_0_0, LegStrikePrice_71, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1395407715"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_137287373"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_264371861"}, InstrumentLeg_71);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_2039929037"}, InstrumentLeg_71);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_71;
    LegUnitOfMeasureQty_71.setString("13744707");
set_field(noLegs_0_0, LegUnitOfMeasureQty_71, InstrumentLeg_71);
    all_values.push_back(InstrumentLeg_71);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_144;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1975628130"}, LegSecAltIDGrp_NoLegSecurityAltID_144);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_511386605"}, LegSecAltIDGrp_NoLegSecurityAltID_144);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_144);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_145;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1091131330"}, LegSecAltIDGrp_NoLegSecurityAltID_145);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1461548847"}, LegSecAltIDGrp_NoLegSecurityAltID_145);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_145);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_146;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1903524961"}, LegSecAltIDGrp_NoLegSecurityAltID_146);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_1940897461"}, LegSecAltIDGrp_NoLegSecurityAltID_146);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_146);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_0;
    set_field(noLegs_0_0, FIX::LegBenchmarkCurveCurrency{"EUR"}, LegBenchmarkCurveData_0);
    set_field(noLegs_0_0, FIX::LegBenchmarkCurveName{"STRING_1463109828"}, LegBenchmarkCurveData_0);
    set_field(noLegs_0_0, FIX::LegBenchmarkCurvePoint{"STRING_1533438283"}, LegBenchmarkCurveData_0);
    FIX::LegBenchmarkPrice LegBenchmarkPrice_0;
    LegBenchmarkPrice_0.setString("20084367");
set_field(noLegs_0_0, LegBenchmarkPrice_0, LegBenchmarkCurveData_0);
    set_field(noLegs_0_0, FIX::LegBenchmarkPriceType{244464745}, LegBenchmarkCurveData_0);
    all_values.push_back(LegBenchmarkCurveData_0);
    all_compo_names.insert("...NoLegs.");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_12;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_52047076"}, LegStipulations_NoLegStipulations_12);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_840005948"}, LegStipulations_NoLegStipulations_12);
      all_values.push_back(LegStipulations_NoLegStipulations_12);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_13;
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationType{"STRING_2064883732"}, LegStipulations_NoLegStipulations_13);
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationValue{"STRING_1891042714"}, LegStipulations_NoLegStipulations_13);
      all_values.push_back(LegStipulations_NoLegStipulations_13);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_103;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_479419462"}, NestedParties_NoNestedPartyIDs_103);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_103);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1541668679}, NestedParties_NoNestedPartyIDs_103);
      all_values.push_back(NestedParties_NoNestedPartyIDs_103);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_212;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_446901127"}, NstdPtysSubGrp_NoNestedPartySubIDs_212);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1063553146}, NstdPtysSubGrp_NoNestedPartySubIDs_212);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_212);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_213;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_1847873433"}, NstdPtysSubGrp_NoNestedPartySubIDs_213);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1842308842}, NstdPtysSubGrp_NoNestedPartySubIDs_213);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_213);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Quote::NoLegs noLegs_0_1;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_1;
    FIX::LegBidForwardPoints LegBidForwardPoints_1;
    LegBidForwardPoints_1.setString("12008405");
set_field(noLegs_0_1, LegBidForwardPoints_1, LegQuotGrp_NoLegs_1);
    FIX::LegBidPx LegBidPx_1;
    LegBidPx_1.setString("21122452");
set_field(noLegs_0_1, LegBidPx_1, LegQuotGrp_NoLegs_1);
    FIX::LegOfferForwardPoints LegOfferForwardPoints_1;
    LegOfferForwardPoints_1.setString("17347542");
set_field(noLegs_0_1, LegOfferForwardPoints_1, LegQuotGrp_NoLegs_1);
    FIX::LegOfferPx LegOfferPx_1;
    LegOfferPx_1.setString("4278275");
set_field(noLegs_0_1, LegOfferPx_1, LegQuotGrp_NoLegs_1);
    FIX::LegOrderQty LegOrderQty_6;
    LegOrderQty_6.setString("10223442");
set_field(noLegs_0_1, LegOrderQty_6, LegQuotGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegPriceType{1562898714}, LegQuotGrp_NoLegs_1);
    FIX::LegQty LegQty_6;
    LegQty_6.setString("9392141");
set_field(noLegs_0_1, LegQty_6, LegQuotGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegRefID{"STRING_2113475550"}, LegQuotGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlDate{"LOCALMKTDATE_876963913"}, LegQuotGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlType{'6'}, LegQuotGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSwapType{5}, LegQuotGrp_NoLegs_1);
    all_values.push_back(LegQuotGrp_NoLegs_1);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_72;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_432411130"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1104886414}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1222515544"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1965849413}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_965839477"}, InstrumentLeg_72);
    FIX::LegContractMultiplier LegContractMultiplier_72;
    LegContractMultiplier_72.setString("14669802");
set_field(noLegs_0_1, LegContractMultiplier_72, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1258031254}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1017886553"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_159502590"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1175431339"}, InstrumentLeg_72);
    FIX::LegCouponRate LegCouponRate_72;
    LegCouponRate_72.setString("56.190000");
set_field(noLegs_0_1, LegCouponRate_72, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1549901382"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegCurrency{"USD"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_944086413"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1785256485}, InstrumentLeg_72);
    FIX::LegFactor LegFactor_72;
    LegFactor_72.setString("9911968");
set_field(noLegs_0_1, LegFactor_72, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{2007639559}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1485646270"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_686022057"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1060996430"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1450407916"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_273292640"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1488824017"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_325268488"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1836191354"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'2'}, InstrumentLeg_72);
    FIX::LegOptionRatio LegOptionRatio_72;
    LegOptionRatio_72.setString("2912603");
set_field(noLegs_0_1, LegOptionRatio_72, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_565671619"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_975810066"}, InstrumentLeg_72);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_72;
    LegPriceUnitOfMeasureQty_72.setString("506661");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_72, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegProduct{998082749}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegPutOrCall{2080696481}, InstrumentLeg_72);
    FIX::LegRatioQty LegRatioQty_72;
    LegRatioQty_72.setString("12731816");
set_field(noLegs_0_1, LegRatioQty_72, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_816448515"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_899052310"}, InstrumentLeg_72);
    FIX::LegRepurchaseRate LegRepurchaseRate_72;
    LegRepurchaseRate_72.setString("82.910000");
set_field(noLegs_0_1, LegRepurchaseRate_72, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{2074479769}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1916938864"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_752180881"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1102427460"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_530900835"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_154598615"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_609794613"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1098685028"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_72);
    FIX::LegStrikePrice LegStrikePrice_72;
    LegStrikePrice_72.setString("9588409");
set_field(noLegs_0_1, LegStrikePrice_72, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1733213720"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_604931843"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_2019837370"}, InstrumentLeg_72);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1036137988"}, InstrumentLeg_72);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_72;
    LegUnitOfMeasureQty_72.setString("8782244");
set_field(noLegs_0_1, LegUnitOfMeasureQty_72, InstrumentLeg_72);
    all_values.push_back(InstrumentLeg_72);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_147;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1361406476"}, LegSecAltIDGrp_NoLegSecurityAltID_147);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_566932190"}, LegSecAltIDGrp_NoLegSecurityAltID_147);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_147);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_148;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_1641732301"}, LegSecAltIDGrp_NoLegSecurityAltID_148);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1652666866"}, LegSecAltIDGrp_NoLegSecurityAltID_148);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_148);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_1;
    set_field(noLegs_0_1, FIX::LegBenchmarkCurveCurrency{"USD"}, LegBenchmarkCurveData_1);
    set_field(noLegs_0_1, FIX::LegBenchmarkCurveName{"STRING_1703332972"}, LegBenchmarkCurveData_1);
    set_field(noLegs_0_1, FIX::LegBenchmarkCurvePoint{"STRING_2130686559"}, LegBenchmarkCurveData_1);
    FIX::LegBenchmarkPrice LegBenchmarkPrice_1;
    LegBenchmarkPrice_1.setString("4032715");
set_field(noLegs_0_1, LegBenchmarkPrice_1, LegBenchmarkCurveData_1);
    set_field(noLegs_0_1, FIX::LegBenchmarkPriceType{829030973}, LegBenchmarkCurveData_1);
    all_values.push_back(LegBenchmarkCurveData_1);
    all_compo_names.insert("...NoLegs.");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_14;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_1302323863"}, LegStipulations_NoLegStipulations_14);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_1421709264"}, LegStipulations_NoLegStipulations_14);
      all_values.push_back(LegStipulations_NoLegStipulations_14);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_15;
      set_field(noLegStipulations_1_1_1, FIX::LegStipulationType{"STRING_726647548"}, LegStipulations_NoLegStipulations_15);
      set_field(noLegStipulations_1_1_1, FIX::LegStipulationValue{"STRING_1071779079"}, LegStipulations_NoLegStipulations_15);
      all_values.push_back(LegStipulations_NoLegStipulations_15);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_104;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1829075008"}, NestedParties_NoNestedPartyIDs_104);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_104);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{181005112}, NestedParties_NoNestedPartyIDs_104);
      all_values.push_back(NestedParties_NoNestedPartyIDs_104);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_214;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_530392838"}, NstdPtysSubGrp_NoNestedPartySubIDs_214);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1279690141}, NstdPtysSubGrp_NoNestedPartySubIDs_214);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_214);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_105;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_538953424"}, NestedParties_NoNestedPartyIDs_105);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_105);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{91047433}, NestedParties_NoNestedPartyIDs_105);
      all_values.push_back(NestedParties_NoNestedPartyIDs_105);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_215;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_1054234468"}, NstdPtysSubGrp_NoNestedPartySubIDs_215);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{2110884803}, NstdPtysSubGrp_NoNestedPartySubIDs_215);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_215);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_216;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_1160821485"}, NstdPtysSubGrp_NoNestedPartySubIDs_216);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{1932458952}, NstdPtysSubGrp_NoNestedPartySubIDs_216);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_216);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_217;
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubID{"STRING_1324578895"}, NstdPtysSubGrp_NoNestedPartySubIDs_217);
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubIDType{374744314}, NstdPtysSubGrp_NoNestedPartySubIDs_217);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_217);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::Quote::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_106;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_351907495"}, NestedParties_NoNestedPartyIDs_106);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_106);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{2027411180}, NestedParties_NoNestedPartyIDs_106);
      all_values.push_back(NestedParties_NoNestedPartyIDs_106);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_218;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_1288886269"}, NstdPtysSubGrp_NoNestedPartySubIDs_218);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{1583260504}, NstdPtysSubGrp_NoNestedPartySubIDs_218);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_218);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_219;
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubID{"STRING_1467714216"}, NstdPtysSubGrp_NoNestedPartySubIDs_219);
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubIDType{1692157822}, NstdPtysSubGrp_NoNestedPartySubIDs_219);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_219);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::Quote::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_220;
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubID{"STRING_264807830"}, NstdPtysSubGrp_NoNestedPartySubIDs_220);
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubIDType{119881995}, NstdPtysSubGrp_NoNestedPartySubIDs_220);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_220);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_16;
  FIX::CashOrderQty CashOrderQty_16;
  CashOrderQty_16.setString("8469980");
set_field(msg, CashOrderQty_16, OrderQtyData_16);
  FIX::OrderPercent OrderPercent_16;
  OrderPercent_16.setString("70.940000");
set_field(msg, OrderPercent_16, OrderQtyData_16);
  FIX::OrderQty OrderQty_24;
  OrderQty_24.setString("8465295");
set_field(msg, OrderQty_24, OrderQtyData_16);
  set_field(msg, FIX::RoundingDirection{'1'}, OrderQtyData_16);
  FIX::RoundingModulus RoundingModulus_16;
  RoundingModulus_16.setString("17129235");
set_field(msg, RoundingModulus_16, OrderQtyData_16);
  all_values.push_back(OrderQtyData_16);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::Quote::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_99;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1373973384"}, Parties_NoPartyIDs_99);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_99);
    set_field(noPartyIDs_0_0, FIX::PartyRole{22}, Parties_NoPartyIDs_99);
    all_values.push_back(Parties_NoPartyIDs_99);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_200;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1026135197"}, PtysSubGrp_NoPartySubIDs_200);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_200);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_200);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_201;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_206185199"}, PtysSubGrp_NoPartySubIDs_201);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_201);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_201);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::Quote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_202;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1483143799"}, PtysSubGrp_NoPartySubIDs_202);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_202);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_202);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::Quote::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_0;
    set_field(noQuoteQualifiers_0_0, FIX::QuoteQualifier{'4'}, QuotQualGrp_NoQuoteQualifiers_0);
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
  // RateSource
  // Group RateSource.NoRateSources
  {
    FIX50SP2::Quote::NoRateSources noRateSources_0_0;
    // RateSource.NoRateSources
    multiset<string> RateSource_NoRateSources_15;
    set_field(noRateSources_0_0, FIX::RateSource{2}, RateSource_NoRateSources_15);
    set_field(noRateSources_0_0, FIX::RateSourceType{1}, RateSource_NoRateSources_15);
    set_field(noRateSources_0_0, FIX::ReferencePage{"STRING_1076506582"}, RateSource_NoRateSources_15);
    all_values.push_back(RateSource_NoRateSources_15);
    all_compo_names.insert("...NoRateSources");

    msg.addGroup(noRateSources_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_20;
  set_field(msg, FIX::BenchmarkCurveCurrency{"USD"}, SpreadOrBenchmarkCurveData_20);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_FutureSWAP"}, SpreadOrBenchmarkCurveData_20);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_186930339"}, SpreadOrBenchmarkCurveData_20);
  FIX::BenchmarkPrice BenchmarkPrice_20;
  BenchmarkPrice_20.setString("545606");
set_field(msg, BenchmarkPrice_20, SpreadOrBenchmarkCurveData_20);
  set_field(msg, FIX::BenchmarkPriceType{1910067025}, SpreadOrBenchmarkCurveData_20);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_451738169"}, SpreadOrBenchmarkCurveData_20);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_174442688"}, SpreadOrBenchmarkCurveData_20);
  FIX::Spread Spread_20;
  Spread_20.setString("6095814");
set_field(msg, Spread_20, SpreadOrBenchmarkCurveData_20);
  all_values.push_back(SpreadOrBenchmarkCurveData_20);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::Quote::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_29;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_CPP"}, Stipulations_NoStipulations_29);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_380874884"}, Stipulations_NoStipulations_29);
    all_values.push_back(Stipulations_NoStipulations_29);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::Quote::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_30;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_HAIRCUT"}, Stipulations_NoStipulations_30);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1549093134"}, Stipulations_NoStipulations_30);
    all_values.push_back(Stipulations_NoStipulations_30);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::Quote::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_31;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_PRICE"}, Stipulations_NoStipulations_31);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_1450140264"}, Stipulations_NoStipulations_31);
    all_values.push_back(Stipulations_NoStipulations_31);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Quote::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_92;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1511730842"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{328791814}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1579576666"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1717916042}, UnderlyingInstrument_92);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_92;
    UnderlyingAdjustedQuantity_92.setString("14459744");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_92, UnderlyingInstrument_92);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_92;
    UnderlyingAllocationPercent_92.setString("68.170000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_92, UnderlyingInstrument_92);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_92;
    UnderlyingAttachmentPoint_92.setString("20.620000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_379074582"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1411718453"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1876247034"}, UnderlyingInstrument_92);
    FIX::UnderlyingCapValue UnderlyingCapValue_92;
    UnderlyingCapValue_92.setString("6367536");
set_field(noUnderlyings_0_0, UnderlyingCapValue_92, UnderlyingInstrument_92);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_92;
    UnderlyingCashAmount_92.setString("1354607");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_92);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_92;
    UnderlyingContractMultiplier_92.setString("17132601");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{886614239}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1860395978"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1931169402"}, UnderlyingInstrument_92);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_92;
    UnderlyingCouponRate_92.setString("45.780000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1914956671"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_92);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_92;
    UnderlyingCurrentValue_92.setString("20893993");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_92, UnderlyingInstrument_92);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_92;
    UnderlyingDetachmentPoint_92.setString("5.460000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_92, UnderlyingInstrument_92);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_92;
    UnderlyingDirtyPrice_92.setString("15160543");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_92, UnderlyingInstrument_92);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_92;
    UnderlyingEndPrice_92.setString("9628879");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_92, UnderlyingInstrument_92);
    FIX::UnderlyingEndValue UnderlyingEndValue_92;
    UnderlyingEndValue_92.setString("5367254");
set_field(noUnderlyings_0_0, UnderlyingEndValue_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1072265924}, UnderlyingInstrument_92);
    FIX::UnderlyingFXRate UnderlyingFXRate_92;
    UnderlyingFXRate_92.setString("3644974");
set_field(noUnderlyings_0_0, UnderlyingFXRate_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_92);
    FIX::UnderlyingFactor UnderlyingFactor_92;
    UnderlyingFactor_92.setString("3749225");
set_field(noUnderlyings_0_0, UnderlyingFactor_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{585613793}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1655820893"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_703714354"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_17706811"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1226253287"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_2205151"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_932943628"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2057105349"}, UnderlyingInstrument_92);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_92;
    UnderlyingNotionalPercentageOutstanding_92.setString("97.330000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_92);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_92;
    UnderlyingOriginalNotionalPercentageOutstanding_92.setString("87.350000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1018033349"}, UnderlyingInstrument_92);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_92;
    UnderlyingPriceUnitOfMeasureQty_92.setString("3326391");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{764450941}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{583809900}, UnderlyingInstrument_92);
    FIX::UnderlyingPx UnderlyingPx_92;
    UnderlyingPx_92.setString("12192534");
set_field(noUnderlyings_0_0, UnderlyingPx_92, UnderlyingInstrument_92);
    FIX::UnderlyingQty UnderlyingQty_92;
    UnderlyingQty_92.setString("4773632");
set_field(noUnderlyings_0_0, UnderlyingQty_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_367495654"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_145314359"}, UnderlyingInstrument_92);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_92;
    UnderlyingRepurchaseRate_92.setString("62.950000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{2061248433}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1670597107"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_186752007"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_69615332"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1039167823"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1149639949"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_606340762"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_2111433747"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1514137378"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_750430813"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_92);
    FIX::UnderlyingStartValue UnderlyingStartValue_92;
    UnderlyingStartValue_92.setString("20997511");
set_field(noUnderlyings_0_0, UnderlyingStartValue_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_258768058"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_92);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_92;
    UnderlyingStrikePrice_92.setString("14850213");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_92, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1044792145"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_902917962"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1394643046"}, UnderlyingInstrument_92);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1426071878"}, UnderlyingInstrument_92);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_92;
    UnderlyingUnitOfMeasureQty_92.setString("11000963");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_92, UnderlyingInstrument_92);
    all_values.push_back(UnderlyingInstrument_92);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_195;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_296621580"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_195);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1432735585"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_195);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_195);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_184;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_880431480"}, UnderlyingStipulations_NoUnderlyingStips_184);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_504505366"}, UnderlyingStipulations_NoUnderlyingStips_184);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_184);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_185;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_127358699"}, UnderlyingStipulations_NoUnderlyingStips_185);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1247927134"}, UnderlyingStipulations_NoUnderlyingStips_185);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_185);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_186;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_649819725"}, UnderlyingStipulations_NoUnderlyingStips_186);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_372194994"}, UnderlyingStipulations_NoUnderlyingStips_186);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_186);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_190;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_172933184"}, UndlyInstrumentParties_NoUndlyInstrumentParties_190);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_190);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1231307251}, UndlyInstrumentParties_NoUndlyInstrumentParties_190);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_190);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1708586951"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1837648014}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_378);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_191;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1176051106"}, UndlyInstrumentParties_NoUndlyInstrumentParties_191);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_191);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{440595179}, UndlyInstrumentParties_NoUndlyInstrumentParties_191);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_191);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1027508205"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{699363237}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_379);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_410027091"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{997482539}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_380);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_36900934"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1454819236}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_381);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_192;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1900400502"}, UndlyInstrumentParties_NoUndlyInstrumentParties_192);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_192);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{733407467}, UndlyInstrumentParties_NoUndlyInstrumentParties_192);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_192);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_317088465"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1030029047}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_382);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Quote::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_93;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_138265187"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{2114567540}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1910460527"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{642770553}, UnderlyingInstrument_93);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_93;
    UnderlyingAdjustedQuantity_93.setString("944425");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_93, UnderlyingInstrument_93);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_93;
    UnderlyingAllocationPercent_93.setString("40.130000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_93, UnderlyingInstrument_93);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_93;
    UnderlyingAttachmentPoint_93.setString("2.780000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_466637586"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_25112284"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1465523462"}, UnderlyingInstrument_93);
    FIX::UnderlyingCapValue UnderlyingCapValue_93;
    UnderlyingCapValue_93.setString("10255845");
set_field(noUnderlyings_0_1, UnderlyingCapValue_93, UnderlyingInstrument_93);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_93;
    UnderlyingCashAmount_93.setString("12564195");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_93);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_93;
    UnderlyingContractMultiplier_93.setString("5866878");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{946583902}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1706191927"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1661928572"}, UnderlyingInstrument_93);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_93;
    UnderlyingCouponRate_93.setString("90.810000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1073632025"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_93);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_93;
    UnderlyingCurrentValue_93.setString("14836591");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_93, UnderlyingInstrument_93);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_93;
    UnderlyingDetachmentPoint_93.setString("56.680000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_93, UnderlyingInstrument_93);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_93;
    UnderlyingDirtyPrice_93.setString("21234432");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_93, UnderlyingInstrument_93);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_93;
    UnderlyingEndPrice_93.setString("7909947");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_93, UnderlyingInstrument_93);
    FIX::UnderlyingEndValue UnderlyingEndValue_93;
    UnderlyingEndValue_93.setString("12923525");
set_field(noUnderlyings_0_1, UnderlyingEndValue_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1407503584}, UnderlyingInstrument_93);
    FIX::UnderlyingFXRate UnderlyingFXRate_93;
    UnderlyingFXRate_93.setString("15244021");
set_field(noUnderlyings_0_1, UnderlyingFXRate_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_93);
    FIX::UnderlyingFactor UnderlyingFactor_93;
    UnderlyingFactor_93.setString("17245920");
set_field(noUnderlyings_0_1, UnderlyingFactor_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{406947571}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_136147312"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1691675942"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_169924450"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_778917865"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1786118533"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1180828463"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2071508144"}, UnderlyingInstrument_93);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_93;
    UnderlyingNotionalPercentageOutstanding_93.setString("24.710000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_93);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_93;
    UnderlyingOriginalNotionalPercentageOutstanding_93.setString("79.580000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1130857059"}, UnderlyingInstrument_93);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_93;
    UnderlyingPriceUnitOfMeasureQty_93.setString("3148766");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1919688780}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1717544949}, UnderlyingInstrument_93);
    FIX::UnderlyingPx UnderlyingPx_93;
    UnderlyingPx_93.setString("12614605");
set_field(noUnderlyings_0_1, UnderlyingPx_93, UnderlyingInstrument_93);
    FIX::UnderlyingQty UnderlyingQty_93;
    UnderlyingQty_93.setString("14783970");
set_field(noUnderlyings_0_1, UnderlyingQty_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1231989873"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_501155970"}, UnderlyingInstrument_93);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_93;
    UnderlyingRepurchaseRate_93.setString("54.360000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1773943002}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_440214640"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1888204553"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1165895023"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_416174244"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_531715610"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_310763897"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1823677828"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_2056117782"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_308646022"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_93);
    FIX::UnderlyingStartValue UnderlyingStartValue_93;
    UnderlyingStartValue_93.setString("3155817");
set_field(noUnderlyings_0_1, UnderlyingStartValue_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_444793334"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_93);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_93;
    UnderlyingStrikePrice_93.setString("12237111");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_93, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_583613409"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1666334618"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1147735695"}, UnderlyingInstrument_93);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_688885881"}, UnderlyingInstrument_93);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_93;
    UnderlyingUnitOfMeasureQty_93.setString("7247917");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_93, UnderlyingInstrument_93);
    all_values.push_back(UnderlyingInstrument_93);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_196;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1819742940"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_196);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1039668353"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_196);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_196);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_197;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_162005138"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_197);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1389804241"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_197);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_197);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_187;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1640402197"}, UnderlyingStipulations_NoUnderlyingStips_187);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_474310467"}, UnderlyingStipulations_NoUnderlyingStips_187);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_187);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_188;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_654801213"}, UnderlyingStipulations_NoUnderlyingStips_188);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_2044947634"}, UnderlyingStipulations_NoUnderlyingStips_188);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_188);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_189;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_100769821"}, UnderlyingStipulations_NoUnderlyingStips_189);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_1095015853"}, UnderlyingStipulations_NoUnderlyingStips_189);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_189);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_193;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1266664844"}, UndlyInstrumentParties_NoUndlyInstrumentParties_193);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_193);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{169900501}, UndlyInstrumentParties_NoUndlyInstrumentParties_193);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_193);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1187384278"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{78534635}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_383);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1886074764"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{440686860}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_384);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_394116340"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{183384450}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_385);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_194;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1385665384"}, UndlyInstrumentParties_NoUndlyInstrumentParties_194);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_194);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1407095649}, UndlyInstrumentParties_NoUndlyInstrumentParties_194);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_194);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_398473465"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{407347697}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_386);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_510681027"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1123265182}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_387);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_797147703"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{182940319}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_388);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::Quote::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_94;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_15449887"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{959152841}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1572744560"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{169095130}, UnderlyingInstrument_94);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_94;
    UnderlyingAdjustedQuantity_94.setString("4520713");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_94, UnderlyingInstrument_94);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_94;
    UnderlyingAllocationPercent_94.setString("50.270000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_94, UnderlyingInstrument_94);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_94;
    UnderlyingAttachmentPoint_94.setString("63.430000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_349535376"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_341201"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1918912196"}, UnderlyingInstrument_94);
    FIX::UnderlyingCapValue UnderlyingCapValue_94;
    UnderlyingCapValue_94.setString("21352039");
set_field(noUnderlyings_0_2, UnderlyingCapValue_94, UnderlyingInstrument_94);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_94;
    UnderlyingCashAmount_94.setString("12670060");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_94);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_94;
    UnderlyingContractMultiplier_94.setString("1576207");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{696951139}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_322519277"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_236155403"}, UnderlyingInstrument_94);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_94;
    UnderlyingCouponRate_94.setString("22.550000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_763206137"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_94);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_94;
    UnderlyingCurrentValue_94.setString("13878");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_94, UnderlyingInstrument_94);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_94;
    UnderlyingDetachmentPoint_94.setString("42.380000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_94, UnderlyingInstrument_94);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_94;
    UnderlyingDirtyPrice_94.setString("20260223");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_94, UnderlyingInstrument_94);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_94;
    UnderlyingEndPrice_94.setString("19706666");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_94, UnderlyingInstrument_94);
    FIX::UnderlyingEndValue UnderlyingEndValue_94;
    UnderlyingEndValue_94.setString("19083677");
set_field(noUnderlyings_0_2, UnderlyingEndValue_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{285886404}, UnderlyingInstrument_94);
    FIX::UnderlyingFXRate UnderlyingFXRate_94;
    UnderlyingFXRate_94.setString("3338640");
set_field(noUnderlyings_0_2, UnderlyingFXRate_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_94);
    FIX::UnderlyingFactor UnderlyingFactor_94;
    UnderlyingFactor_94.setString("10830341");
set_field(noUnderlyings_0_2, UnderlyingFactor_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{516804366}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_899599125"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2042186948"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_2089548926"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_1068694255"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_346774690"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1989120306"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1892590598"}, UnderlyingInstrument_94);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_94;
    UnderlyingNotionalPercentageOutstanding_94.setString("0.670000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_94);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_94;
    UnderlyingOriginalNotionalPercentageOutstanding_94.setString("91.470000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_684030334"}, UnderlyingInstrument_94);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_94;
    UnderlyingPriceUnitOfMeasureQty_94.setString("11089839");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{799154145}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{841651103}, UnderlyingInstrument_94);
    FIX::UnderlyingPx UnderlyingPx_94;
    UnderlyingPx_94.setString("18059350");
set_field(noUnderlyings_0_2, UnderlyingPx_94, UnderlyingInstrument_94);
    FIX::UnderlyingQty UnderlyingQty_94;
    UnderlyingQty_94.setString("11216734");
set_field(noUnderlyings_0_2, UnderlyingQty_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1077806506"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_93993651"}, UnderlyingInstrument_94);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_94;
    UnderlyingRepurchaseRate_94.setString("95.600000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{1708078250}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_712920357"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_1886267434"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1070488840"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_591459064"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1709450454"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_831372896"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_877345468"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_2043314501"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_1715522134"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_94);
    FIX::UnderlyingStartValue UnderlyingStartValue_94;
    UnderlyingStartValue_94.setString("4126352");
set_field(noUnderlyings_0_2, UnderlyingStartValue_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_467637611"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_94);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_94;
    UnderlyingStrikePrice_94.setString("15363318");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_94, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_54373917"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_196337155"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_1281438817"}, UnderlyingInstrument_94);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_750683984"}, UnderlyingInstrument_94);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_94;
    UnderlyingUnitOfMeasureQty_94.setString("383150");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_94, UnderlyingInstrument_94);
    all_values.push_back(UnderlyingInstrument_94);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_198;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1434714319"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_198);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1147298919"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_198);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_198);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_199;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_1597128462"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_199);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_128881774"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_199);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_199);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_200;
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltID{"STRING_805750315"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_200);
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_571318236"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_200);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_200);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_190;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_899743966"}, UnderlyingStipulations_NoUnderlyingStips_190);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_308714148"}, UnderlyingStipulations_NoUnderlyingStips_190);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_190);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_191;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_767282882"}, UnderlyingStipulations_NoUnderlyingStips_191);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_1612664323"}, UnderlyingStipulations_NoUnderlyingStips_191);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_191);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::Quote::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_192;
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipType{"STRING_47497934"}, UnderlyingStipulations_NoUnderlyingStips_192);
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipValue{"STRING_1837771723"}, UnderlyingStipulations_NoUnderlyingStips_192);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_192);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_195;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1756948388"}, UndlyInstrumentParties_NoUndlyInstrumentParties_195);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_195);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{933985207}, UndlyInstrumentParties_NoUndlyInstrumentParties_195);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_195);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_89699457"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{746881134}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_389);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2065414460"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{557337068}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_390);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::Quote::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_454480361"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{272631310}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_391);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_15;
  FIX::Yield Yield_15;
  Yield_15.setString("89.350000");
set_field(msg, Yield_15, YieldData_15);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_508854279"}, YieldData_15);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_468968465"}, YieldData_15);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_15;
  YieldRedemptionPrice_15.setString("12276241");
set_field(msg, YieldRedemptionPrice_15, YieldData_15);
  set_field(msg, FIX::YieldRedemptionPriceType{1259538263}, YieldData_15);
  set_field(msg, FIX::YieldType{"STRING_INFLATION"}, YieldData_15);
  all_values.push_back(YieldData_15);
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
