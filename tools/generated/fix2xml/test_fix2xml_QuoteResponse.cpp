#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::QuoteResponse msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteResponse_0;
  set_field(msg, FIX::Account{"STRING_1191853753"}, QuoteResponse_0);
  set_field(msg, FIX::AccountType{4}, QuoteResponse_0);
  set_field(msg, FIX::AcctIDSource{4}, QuoteResponse_0);
  FIX::BidForwardPoints BidForwardPoints_13;
  BidForwardPoints_13.setString("4426009");
set_field(msg, BidForwardPoints_13, QuoteResponse_0);
  FIX::BidForwardPoints2 BidForwardPoints2_13;
  BidForwardPoints2_13.setString("9248974");
set_field(msg, BidForwardPoints2_13, QuoteResponse_0);
  FIX::BidPx BidPx_13;
  BidPx_13.setString("6586670");
set_field(msg, BidPx_13, QuoteResponse_0);
  FIX::BidSize BidSize_13;
  BidSize_13.setString("16236773");
set_field(msg, BidSize_13, QuoteResponse_0);
  FIX::BidSpotRate BidSpotRate_13;
  BidSpotRate_13.setString("18517968");
set_field(msg, BidSpotRate_13, QuoteResponse_0);
  FIX::BidYield BidYield_13;
  BidYield_13.setString("50.160000");
set_field(msg, BidYield_13, QuoteResponse_0);
  set_field(msg, FIX::ClOrdID{"STRING_1488001758"}, QuoteResponse_0);
  set_field(msg, FIX::CommType{'5'}, QuoteResponse_0);
  FIX::Commission Commission_25;
  Commission_25.setString("11991652");
set_field(msg, Commission_25, QuoteResponse_0);
  set_field(msg, FIX::Currency{"CHF"}, QuoteResponse_0);
  set_field(msg, FIX::CustOrderCapacity{4}, QuoteResponse_0);
  set_field(msg, FIX::EncodedText{"DATA_432031813"}, QuoteResponse_0);
  set_field(msg, FIX::EncodedTextLen{1834846204}, QuoteResponse_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_703152177"}, QuoteResponse_0);
  set_field(msg, FIX::ExDestinationIDSource{'C'}, QuoteResponse_0);
  set_field(msg, FIX::IOIID{"STRING_190741324"}, QuoteResponse_0);
  FIX::MidPx MidPx_13;
  MidPx_13.setString("15660840");
set_field(msg, MidPx_13, QuoteResponse_0);
  FIX::MidYield MidYield_13;
  MidYield_13.setString("13.200000");
set_field(msg, MidYield_13, QuoteResponse_0);
  FIX::MinBidSize MinBidSize_1;
  MinBidSize_1.setString("19361755");
set_field(msg, MinBidSize_1, QuoteResponse_0);
  FIX::MinOfferSize MinOfferSize_1;
  MinOfferSize_1.setString("417746");
set_field(msg, MinOfferSize_1, QuoteResponse_0);
  FIX::MinQty MinQty_17;
  MinQty_17.setString("8031855");
set_field(msg, MinQty_17, QuoteResponse_0);
  FIX::MktBidPx MktBidPx_1;
  MktBidPx_1.setString("18658783");
set_field(msg, MktBidPx_1, QuoteResponse_0);
  FIX::MktOfferPx MktOfferPx_1;
  MktOfferPx_1.setString("13072265");
set_field(msg, MktOfferPx_1, QuoteResponse_0);
  FIX::OfferForwardPoints OfferForwardPoints_13;
  OfferForwardPoints_13.setString("10744694");
set_field(msg, OfferForwardPoints_13, QuoteResponse_0);
  FIX::OfferForwardPoints2 OfferForwardPoints2_13;
  OfferForwardPoints2_13.setString("18660084");
set_field(msg, OfferForwardPoints2_13, QuoteResponse_0);
  FIX::OfferPx OfferPx_13;
  OfferPx_13.setString("5537417");
set_field(msg, OfferPx_13, QuoteResponse_0);
  FIX::OfferSize OfferSize_13;
  OfferSize_13.setString("16050306");
set_field(msg, OfferSize_13, QuoteResponse_0);
  FIX::OfferSpotRate OfferSpotRate_13;
  OfferSpotRate_13.setString("9103786");
set_field(msg, OfferSpotRate_13, QuoteResponse_0);
  FIX::OfferYield OfferYield_13;
  OfferYield_13.setString("61.050000");
set_field(msg, OfferYield_13, QuoteResponse_0);
  set_field(msg, FIX::OrdType{'M'}, QuoteResponse_0);
  set_field(msg, FIX::OrderCapacity{'G'}, QuoteResponse_0);
  FIX::OrderQty2 OrderQty2_22;
  OrderQty2_22.setString("17644435");
set_field(msg, OrderQty2_22, QuoteResponse_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_5"}, QuoteResponse_0);
  set_field(msg, FIX::PreTradeAnonymity{true}, QuoteResponse_0);
  FIX::Price Price_23;
  Price_23.setString("14687567");
set_field(msg, Price_23, QuoteResponse_0);
  set_field(msg, FIX::PriceType{13}, QuoteResponse_0);
  set_field(msg, FIX::QuoteID{"STRING_169691342"}, QuoteResponse_0);
  set_field(msg, FIX::QuoteMsgID{"STRING_1952478130"}, QuoteResponse_0);
  set_field(msg, FIX::QuoteRespID{"STRING_280584846"}, QuoteResponse_0);
  set_field(msg, FIX::QuoteRespType{4}, QuoteResponse_0);
  set_field(msg, FIX::QuoteType{3}, QuoteResponse_0);
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_1;
  SettlCurrBidFxRate_1.setString("13031809");
set_field(msg, SettlCurrBidFxRate_1, QuoteResponse_0);
  set_field(msg, FIX::SettlCurrFxRateCalc{'M'}, QuoteResponse_0);
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_1;
  SettlCurrOfferFxRate_1.setString("9760908");
set_field(msg, SettlCurrOfferFxRate_1, QuoteResponse_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_2006333130"}, QuoteResponse_0);
  set_field(msg, FIX::SettlDate2{"LOCALMKTDATE_859741660"}, QuoteResponse_0);
  set_field(msg, FIX::SettlType{"STRING_0"}, QuoteResponse_0);
  set_field(msg, FIX::Side{'9'}, QuoteResponse_0);
  set_field(msg, FIX::Text{"STRING_1321422981"}, QuoteResponse_0);
  set_field(msg, FIX::TradingSessionID{"STRING_5"}, QuoteResponse_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_6"}, QuoteResponse_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(13, 56, 26, 20, 12, 2000)}, QuoteResponse_0);
  set_field(msg, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(4, 55, 28, 24, 9, 2002)}, QuoteResponse_0);
  all_values.push_back(QuoteResponse_0);

  all_compo_names.insert("QuoteResponse");

  // FinancingDetails
  multiset<string> FinancingDetails_22;
  set_field(msg, FIX::AgreementCurrency{"GBP"}, FinancingDetails_22);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1507182802"}, FinancingDetails_22);
  set_field(msg, FIX::AgreementDesc{"STRING_762966521"}, FinancingDetails_22);
  set_field(msg, FIX::AgreementID{"STRING_1889098976"}, FinancingDetails_22);
  set_field(msg, FIX::DeliveryType{1}, FinancingDetails_22);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_2051694856"}, FinancingDetails_22);
  FIX::MarginRatio MarginRatio_22;
  MarginRatio_22.setString("62.820000");
set_field(msg, MarginRatio_22, FinancingDetails_22);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1852694445"}, FinancingDetails_22);
  set_field(msg, FIX::TerminationType{1}, FinancingDetails_22);
  all_values.push_back(FinancingDetails_22);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_72;
  FIX::AttachmentPoint AttachmentPoint_72;
  AttachmentPoint_72.setString("57.640000");
set_field(msg, AttachmentPoint_72, Instrument_72);
  set_field(msg, FIX::CFICode{"STRING_564952458"}, Instrument_72);
  set_field(msg, FIX::CPProgram{2}, Instrument_72);
  set_field(msg, FIX::CPRegType{"STRING_181095692"}, Instrument_72);
  FIX::CapPrice CapPrice_72;
  CapPrice_72.setString("18863754");
set_field(msg, CapPrice_72, Instrument_72);
  FIX::ContractMultiplier ContractMultiplier_72;
  ContractMultiplier_72.setString("8551748");
set_field(msg, ContractMultiplier_72, Instrument_72);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_72);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1863500295"}, Instrument_72);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1529093701"}, Instrument_72);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_126771388"}, Instrument_72);
  FIX::CouponRate CouponRate_72;
  CouponRate_72.setString("9.930000");
set_field(msg, CouponRate_72, Instrument_72);
  set_field(msg, FIX::CreditRating{"STRING_1921537437"}, Instrument_72);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1306964247"}, Instrument_72);
  FIX::DetachmentPoint DetachmentPoint_72;
  DetachmentPoint_72.setString("23.870000");
set_field(msg, DetachmentPoint_72, Instrument_72);
  set_field(msg, FIX::EncodedIssuer{"DATA_1076876130"}, Instrument_72);
  set_field(msg, FIX::EncodedIssuerLen{1179219564}, Instrument_72);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1391795002"}, Instrument_72);
  set_field(msg, FIX::EncodedSecurityDescLen{1585194359}, Instrument_72);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_72);
  FIX::Factor Factor_72;
  Factor_72.setString("17714058");
set_field(msg, Factor_72, Instrument_72);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_72);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_72);
  FIX::FloorPrice FloorPrice_72;
  FloorPrice_72.setString("12324363");
set_field(msg, FloorPrice_72, Instrument_72);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_72);
  set_field(msg, FIX::InstrRegistry{"STRING_241889720"}, Instrument_72);
  set_field(msg, FIX::InstrmtAssignmentMethod{'9'}, Instrument_72);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_525082219"}, Instrument_72);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_146100928"}, Instrument_72);
  set_field(msg, FIX::Issuer{"STRING_2018847959"}, Instrument_72);
  set_field(msg, FIX::ListMethod{1}, Instrument_72);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1026403028"}, Instrument_72);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_775010076"}, Instrument_72);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_795245475"}, Instrument_72);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_926053696"}, Instrument_72);
  FIX::MinPriceIncrement MinPriceIncrement_72;
  MinPriceIncrement_72.setString("9561057");
set_field(msg, MinPriceIncrement_72, Instrument_72);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_72;
  MinPriceIncrementAmount_72.setString("5341372");
set_field(msg, MinPriceIncrementAmount_72, Instrument_72);
  set_field(msg, FIX::NTPositionLimit{1781228512}, Instrument_72);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_72;
  NotionalPercentageOutstanding_72.setString("60.400000");
set_field(msg, NotionalPercentageOutstanding_72, Instrument_72);
  set_field(msg, FIX::OptAttribute{'2'}, Instrument_72);
  FIX::OptPayoutAmount OptPayoutAmount_72;
  OptPayoutAmount_72.setString("11628385");
set_field(msg, OptPayoutAmount_72, Instrument_72);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_72);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_72;
  OriginalNotionalPercentageOutstanding_72.setString("49.060000");
set_field(msg, OriginalNotionalPercentageOutstanding_72, Instrument_72);
  set_field(msg, FIX::Pool{"STRING_936892355"}, Instrument_72);
  set_field(msg, FIX::PositionLimit{1890161676}, Instrument_72);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_72);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_2013768485"}, Instrument_72);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_72;
  PriceUnitOfMeasureQty_72.setString("9218975");
set_field(msg, PriceUnitOfMeasureQty_72, Instrument_72);
  set_field(msg, FIX::Product{7}, Instrument_72);
  set_field(msg, FIX::ProductComplex{"STRING_1451479196"}, Instrument_72);
  set_field(msg, FIX::PutOrCall{0}, Instrument_72);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1162750867"}, Instrument_72);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_79197720"}, Instrument_72);
  FIX::RepurchaseRate RepurchaseRate_72;
  RepurchaseRate_72.setString("55.990000");
set_field(msg, RepurchaseRate_72, Instrument_72);
  set_field(msg, FIX::RepurchaseTerm{247703568}, Instrument_72);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_72);
  set_field(msg, FIX::SecurityDesc{"STRING_1311145319"}, Instrument_72);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1221755246"}, Instrument_72);
  set_field(msg, FIX::SecurityGroup{"STRING_739181265"}, Instrument_72);
  set_field(msg, FIX::SecurityID{"STRING_1457246248"}, Instrument_72);
  set_field(msg, FIX::SecurityIDSource{"STRING_E"}, Instrument_72);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_72);
  set_field(msg, FIX::SecuritySubType{"STRING_336165628"}, Instrument_72);
  set_field(msg, FIX::SecurityType{"STRING_CORP"}, Instrument_72);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_72);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_72);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_676751754"}, Instrument_72);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_151373375"}, Instrument_72);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_72);
  FIX::StrikeMultiplier StrikeMultiplier_72;
  StrikeMultiplier_72.setString("4015272");
set_field(msg, StrikeMultiplier_72, Instrument_72);
  FIX::StrikePrice StrikePrice_72;
  StrikePrice_72.setString("20588027");
set_field(msg, StrikePrice_72, Instrument_72);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_72);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_72;
  StrikePriceBoundaryPrecision_72.setString("21.950000");
set_field(msg, StrikePriceBoundaryPrecision_72, Instrument_72);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_72);
  FIX::StrikeValue StrikeValue_72;
  StrikeValue_72.setString("14590532");
set_field(msg, StrikeValue_72, Instrument_72);
  set_field(msg, FIX::Symbol{"STRING_1566325841"}, Instrument_72);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_72);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_72);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_72);
  set_field(msg, FIX::UnitOfMeasure{"STRING_USD"}, Instrument_72);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_72;
  UnitOfMeasureQty_72.setString("18237995");
set_field(msg, UnitOfMeasureQty_72, Instrument_72);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_72);
  all_values.push_back(Instrument_72);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_147;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_147);
    FIX::ComplexEventPrice ComplexEventPrice_147;
    ComplexEventPrice_147.setString("2206416");
set_field(noComplexEvents_0_0, ComplexEventPrice_147, ComplexEvents_NoComplexEvents_147);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_147);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_147;
    ComplexEventPriceBoundaryPrecision_147.setString("68.660000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_147, ComplexEvents_NoComplexEvents_147);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_147);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_147);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_147;
    ComplexOptPayoutAmount_147.setString("13664794");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_147, ComplexEvents_NoComplexEvents_147);
    all_values.push_back(ComplexEvents_NoComplexEvents_147);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_293;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 50, 11, 12, 9, 2005)}, ComplexEventDates_NoComplexEventDates_293);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 7, 28, 6, 3, 2014)}, ComplexEventDates_NoComplexEventDates_293);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_293);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_599;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 52, 17)}, ComplexEventTimes_NoComplexEventTimes_599);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 58, 38)}, ComplexEventTimes_NoComplexEventTimes_599);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_599);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_294;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 32, 25, 23, 4, 2009)}, ComplexEventDates_NoComplexEventDates_294);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 10, 10, 5, 3, 2005)}, ComplexEventDates_NoComplexEventDates_294);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_294);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_600;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 15, 44)}, ComplexEventTimes_NoComplexEventTimes_600);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 39, 41)}, ComplexEventTimes_NoComplexEventTimes_600);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_600);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_601;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 33, 54)}, ComplexEventTimes_NoComplexEventTimes_601);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 44, 1)}, ComplexEventTimes_NoComplexEventTimes_601);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_601);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_602;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 25, 28)}, ComplexEventTimes_NoComplexEventTimes_602);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 31, 31)}, ComplexEventTimes_NoComplexEventTimes_602);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_602);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_295;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 33, 7, 16, 9, 2013)}, ComplexEventDates_NoComplexEventDates_295);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 22, 29, 26, 1, 2008)}, ComplexEventDates_NoComplexEventDates_295);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_295);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_603;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 8, 56)}, ComplexEventTimes_NoComplexEventTimes_603);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 33, 45)}, ComplexEventTimes_NoComplexEventTimes_603);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_603);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_604;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 2, 44)}, ComplexEventTimes_NoComplexEventTimes_604);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 7, 11)}, ComplexEventTimes_NoComplexEventTimes_604);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_604);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_605;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 36, 15)}, ComplexEventTimes_NoComplexEventTimes_605);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 14, 10)}, ComplexEventTimes_NoComplexEventTimes_605);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_605);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_148;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_148);
    FIX::ComplexEventPrice ComplexEventPrice_148;
    ComplexEventPrice_148.setString("2002556");
set_field(noComplexEvents_0_1, ComplexEventPrice_148, ComplexEvents_NoComplexEvents_148);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_148);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_148;
    ComplexEventPriceBoundaryPrecision_148.setString("61.140000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_148, ComplexEvents_NoComplexEvents_148);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_148);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_148);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_148;
    ComplexOptPayoutAmount_148.setString("9634916");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_148, ComplexEvents_NoComplexEvents_148);
    all_values.push_back(ComplexEvents_NoComplexEvents_148);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_296;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 44, 44, 23, 6, 2003)}, ComplexEventDates_NoComplexEventDates_296);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 23, 35, 6, 11, 2000)}, ComplexEventDates_NoComplexEventDates_296);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_296);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_606;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 57, 2)}, ComplexEventTimes_NoComplexEventTimes_606);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 16, 52)}, ComplexEventTimes_NoComplexEventTimes_606);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_606);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_607;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 24, 32)}, ComplexEventTimes_NoComplexEventTimes_607);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 1, 26)}, ComplexEventTimes_NoComplexEventTimes_607);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_607);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_608;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 2, 48)}, ComplexEventTimes_NoComplexEventTimes_608);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 2, 49)}, ComplexEventTimes_NoComplexEventTimes_608);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_608);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_297;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 24, 15, 15, 12, 2000)}, ComplexEventDates_NoComplexEventDates_297);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 34, 52, 5, 9, 2008)}, ComplexEventDates_NoComplexEventDates_297);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_297);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_609;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 57, 22)}, ComplexEventTimes_NoComplexEventTimes_609);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 16, 35)}, ComplexEventTimes_NoComplexEventTimes_609);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_609);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::QuoteResponse::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_145;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_812001759"}, EvntGrp_NoEvents_145);
    FIX::EventPx EventPx_145;
    EventPx_145.setString("8389006");
set_field(noEvents_0_0, EventPx_145, EvntGrp_NoEvents_145);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1370433937"}, EvntGrp_NoEvents_145);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(5, 39, 27, 23, 10, 2002)}, EvntGrp_NoEvents_145);
    set_field(noEvents_0_0, FIX::EventType{19}, EvntGrp_NoEvents_145);
    all_values.push_back(EvntGrp_NoEvents_145);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteResponse::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_134;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1861073983"}, InstrumentParties_NoInstrumentParties_134);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_134);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{166002170}, InstrumentParties_NoInstrumentParties_134);
    all_values.push_back(InstrumentParties_NoInstrumentParties_134);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1665327889"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{619722882}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1425311679"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1093548961}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_499756543"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1781955912}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::QuoteResponse::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_146;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_6358761"}, SecAltIDGrp_NoSecurityAltID_146);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_985515722"}, SecAltIDGrp_NoSecurityAltID_146);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_146);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_147;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1428211034"}, SecAltIDGrp_NoSecurityAltID_147);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_117592710"}, SecAltIDGrp_NoSecurityAltID_147);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_147);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_144;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1210329715"}, SecurityXML_144);
  set_field(msg, FIX::SecurityXMLLen{2045416170}, SecurityXML_144);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_57151857"}, SecurityXML_144);
  all_values.push_back(SecurityXML_144);
  all_compo_names.insert("..");

  // LegQuotGrp
  // Group LegQuotGrp.NoLegs
  {
    FIX50SP2::QuoteResponse::NoLegs noLegs_0_0;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_2;
    FIX::LegBidForwardPoints LegBidForwardPoints_2;
    LegBidForwardPoints_2.setString("7099342");
set_field(noLegs_0_0, LegBidForwardPoints_2, LegQuotGrp_NoLegs_2);
    FIX::LegBidPx LegBidPx_2;
    LegBidPx_2.setString("8960525");
set_field(noLegs_0_0, LegBidPx_2, LegQuotGrp_NoLegs_2);
    FIX::LegOfferForwardPoints LegOfferForwardPoints_2;
    LegOfferForwardPoints_2.setString("19301073");
set_field(noLegs_0_0, LegOfferForwardPoints_2, LegQuotGrp_NoLegs_2);
    FIX::LegOfferPx LegOfferPx_2;
    LegOfferPx_2.setString("12985000");
set_field(noLegs_0_0, LegOfferPx_2, LegQuotGrp_NoLegs_2);
    FIX::LegOrderQty LegOrderQty_16;
    LegOrderQty_16.setString("2287486");
set_field(noLegs_0_0, LegOrderQty_16, LegQuotGrp_NoLegs_2);
    set_field(noLegs_0_0, FIX::LegPriceType{1557058553}, LegQuotGrp_NoLegs_2);
    FIX::LegQty LegQty_16;
    LegQty_16.setString("19582142");
set_field(noLegs_0_0, LegQty_16, LegQuotGrp_NoLegs_2);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_1766631092"}, LegQuotGrp_NoLegs_2);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_503096562"}, LegQuotGrp_NoLegs_2);
    set_field(noLegs_0_0, FIX::LegSettlType{'3'}, LegQuotGrp_NoLegs_2);
    set_field(noLegs_0_0, FIX::LegSwapType{4}, LegQuotGrp_NoLegs_2);
    all_values.push_back(LegQuotGrp_NoLegs_2);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_104;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1485168222"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1899352826}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1722427697"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1651170393}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_648467828"}, InstrumentLeg_104);
    FIX::LegContractMultiplier LegContractMultiplier_104;
    LegContractMultiplier_104.setString("12402719");
set_field(noLegs_0_0, LegContractMultiplier_104, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{123409627}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_2073779507"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_186337252"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_623166170"}, InstrumentLeg_104);
    FIX::LegCouponRate LegCouponRate_104;
    LegCouponRate_104.setString("17.720000");
set_field(noLegs_0_0, LegCouponRate_104, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_902595224"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_183322610"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{747117641}, InstrumentLeg_104);
    FIX::LegFactor LegFactor_104;
    LegFactor_104.setString("17566135");
set_field(noLegs_0_0, LegFactor_104, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{81255133}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_804269499"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_168803297"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_791189415"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1700322006"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_2098910618"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_2089689475"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1929070687"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1508485523"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_104);
    FIX::LegOptionRatio LegOptionRatio_104;
    LegOptionRatio_104.setString("15482181");
set_field(noLegs_0_0, LegOptionRatio_104, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_2011582085"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1938698918"}, InstrumentLeg_104);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_104;
    LegPriceUnitOfMeasureQty_104.setString("20373359");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_104, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegProduct{1349266660}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1690568096}, InstrumentLeg_104);
    FIX::LegRatioQty LegRatioQty_104;
    LegRatioQty_104.setString("16122799");
set_field(noLegs_0_0, LegRatioQty_104, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_852953405"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_191552277"}, InstrumentLeg_104);
    FIX::LegRepurchaseRate LegRepurchaseRate_104;
    LegRepurchaseRate_104.setString("82.540000");
set_field(noLegs_0_0, LegRepurchaseRate_104, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{976363032}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_117848136"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_891405506"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1599529203"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1826099908"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1794000730"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_81570486"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegSide{'2'}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1977323340"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_104);
    FIX::LegStrikePrice LegStrikePrice_104;
    LegStrikePrice_104.setString("20585784");
set_field(noLegs_0_0, LegStrikePrice_104, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1632957627"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_2833316"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_702284240"}, InstrumentLeg_104);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1185795985"}, InstrumentLeg_104);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_104;
    LegUnitOfMeasureQty_104.setString("21017439");
set_field(noLegs_0_0, LegUnitOfMeasureQty_104, InstrumentLeg_104);
    all_values.push_back(InstrumentLeg_104);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_205;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_967383025"}, LegSecAltIDGrp_NoLegSecurityAltID_205);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1462745810"}, LegSecAltIDGrp_NoLegSecurityAltID_205);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_205);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_206;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_397426494"}, LegSecAltIDGrp_NoLegSecurityAltID_206);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_368117508"}, LegSecAltIDGrp_NoLegSecurityAltID_206);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_206);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_10;
    set_field(noLegs_0_0, FIX::LegBenchmarkCurveCurrency{"USD"}, LegBenchmarkCurveData_10);
    set_field(noLegs_0_0, FIX::LegBenchmarkCurveName{"STRING_257969774"}, LegBenchmarkCurveData_10);
    set_field(noLegs_0_0, FIX::LegBenchmarkCurvePoint{"STRING_528627260"}, LegBenchmarkCurveData_10);
    FIX::LegBenchmarkPrice LegBenchmarkPrice_10;
    LegBenchmarkPrice_10.setString("18792098");
set_field(noLegs_0_0, LegBenchmarkPrice_10, LegBenchmarkCurveData_10);
    set_field(noLegs_0_0, FIX::LegBenchmarkPriceType{1870249738}, LegBenchmarkCurveData_10);
    all_values.push_back(LegBenchmarkCurveData_10);
    all_compo_names.insert("...NoLegs.");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_36;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_2070762137"}, LegStipulations_NoLegStipulations_36);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_427834344"}, LegStipulations_NoLegStipulations_36);
      all_values.push_back(LegStipulations_NoLegStipulations_36);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_37;
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationType{"STRING_210460049"}, LegStipulations_NoLegStipulations_37);
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationValue{"STRING_41126626"}, LegStipulations_NoLegStipulations_37);
      all_values.push_back(LegStipulations_NoLegStipulations_37);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_131;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1809989252"}, NestedParties_NoNestedPartyIDs_131);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_131);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{965756932}, NestedParties_NoNestedPartyIDs_131);
      all_values.push_back(NestedParties_NoNestedPartyIDs_131);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_273;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_2092126641"}, NstdPtysSubGrp_NoNestedPartySubIDs_273);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{795596624}, NstdPtysSubGrp_NoNestedPartySubIDs_273);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_273);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_132;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_572764219"}, NestedParties_NoNestedPartyIDs_132);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_132);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{706691450}, NestedParties_NoNestedPartyIDs_132);
      all_values.push_back(NestedParties_NoNestedPartyIDs_132);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_274;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1928989977"}, NstdPtysSubGrp_NoNestedPartySubIDs_274);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1408975690}, NstdPtysSubGrp_NoNestedPartySubIDs_274);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_274);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_275;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_1244034183"}, NstdPtysSubGrp_NoNestedPartySubIDs_275);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{1883250264}, NstdPtysSubGrp_NoNestedPartySubIDs_275);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_275);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_276;
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubID{"STRING_2053465758"}, NstdPtysSubGrp_NoNestedPartySubIDs_276);
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubIDType{63933560}, NstdPtysSubGrp_NoNestedPartySubIDs_276);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_276);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_133;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_1198512426"}, NestedParties_NoNestedPartyIDs_133);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_133);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{432051069}, NestedParties_NoNestedPartyIDs_133);
      all_values.push_back(NestedParties_NoNestedPartyIDs_133);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_277;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_492050368"}, NstdPtysSubGrp_NoNestedPartySubIDs_277);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{690020843}, NstdPtysSubGrp_NoNestedPartySubIDs_277);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_277);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_278;
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubID{"STRING_906500286"}, NstdPtysSubGrp_NoNestedPartySubIDs_278);
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubIDType{223776580}, NstdPtysSubGrp_NoNestedPartySubIDs_278);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_278);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoLegs noLegs_0_1;
    // LegQuotGrp.NoLegs
    multiset<string> LegQuotGrp_NoLegs_3;
    FIX::LegBidForwardPoints LegBidForwardPoints_3;
    LegBidForwardPoints_3.setString("4127869");
set_field(noLegs_0_1, LegBidForwardPoints_3, LegQuotGrp_NoLegs_3);
    FIX::LegBidPx LegBidPx_3;
    LegBidPx_3.setString("1405973");
set_field(noLegs_0_1, LegBidPx_3, LegQuotGrp_NoLegs_3);
    FIX::LegOfferForwardPoints LegOfferForwardPoints_3;
    LegOfferForwardPoints_3.setString("1470550");
set_field(noLegs_0_1, LegOfferForwardPoints_3, LegQuotGrp_NoLegs_3);
    FIX::LegOfferPx LegOfferPx_3;
    LegOfferPx_3.setString("8406212");
set_field(noLegs_0_1, LegOfferPx_3, LegQuotGrp_NoLegs_3);
    FIX::LegOrderQty LegOrderQty_17;
    LegOrderQty_17.setString("3510573");
set_field(noLegs_0_1, LegOrderQty_17, LegQuotGrp_NoLegs_3);
    set_field(noLegs_0_1, FIX::LegPriceType{188181696}, LegQuotGrp_NoLegs_3);
    FIX::LegQty LegQty_17;
    LegQty_17.setString("123774");
set_field(noLegs_0_1, LegQty_17, LegQuotGrp_NoLegs_3);
    set_field(noLegs_0_1, FIX::LegRefID{"STRING_13562957"}, LegQuotGrp_NoLegs_3);
    set_field(noLegs_0_1, FIX::LegSettlDate{"LOCALMKTDATE_2055408230"}, LegQuotGrp_NoLegs_3);
    set_field(noLegs_0_1, FIX::LegSettlType{'9'}, LegQuotGrp_NoLegs_3);
    set_field(noLegs_0_1, FIX::LegSwapType{1}, LegQuotGrp_NoLegs_3);
    all_values.push_back(LegQuotGrp_NoLegs_3);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_105;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_2000051223"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1773731036}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_330403267"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1778724236}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_332938838"}, InstrumentLeg_105);
    FIX::LegContractMultiplier LegContractMultiplier_105;
    LegContractMultiplier_105.setString("3886414");
set_field(noLegs_0_1, LegContractMultiplier_105, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1560230565}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1741914528"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1632675649"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1295997181"}, InstrumentLeg_105);
    FIX::LegCouponRate LegCouponRate_105;
    LegCouponRate_105.setString("66.380000");
set_field(noLegs_0_1, LegCouponRate_105, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1696609209"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegCurrency{"GBP"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_2128660278"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{724898986}, InstrumentLeg_105);
    FIX::LegFactor LegFactor_105;
    LegFactor_105.setString("2958719");
set_field(noLegs_0_1, LegFactor_105, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{671197474}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1631399272"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_519648543"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1083984407"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1771996576"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_666703613"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1924605685"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_2123053929"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_854885309"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_105);
    FIX::LegOptionRatio LegOptionRatio_105;
    LegOptionRatio_105.setString("21366168");
set_field(noLegs_0_1, LegOptionRatio_105, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_762809891"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_767633928"}, InstrumentLeg_105);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_105;
    LegPriceUnitOfMeasureQty_105.setString("18942559");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_105, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegProduct{615377467}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegPutOrCall{393881316}, InstrumentLeg_105);
    FIX::LegRatioQty LegRatioQty_105;
    LegRatioQty_105.setString("771755");
set_field(noLegs_0_1, LegRatioQty_105, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_246618055"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_726820154"}, InstrumentLeg_105);
    FIX::LegRepurchaseRate LegRepurchaseRate_105;
    LegRepurchaseRate_105.setString("70.200000");
set_field(noLegs_0_1, LegRepurchaseRate_105, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1806848620}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_321251034"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_2098492669"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_955362153"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1969147673"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1647618230"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1302388112"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1628794861"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_105);
    FIX::LegStrikePrice LegStrikePrice_105;
    LegStrikePrice_105.setString("1525086");
set_field(noLegs_0_1, LegStrikePrice_105, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1511202723"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_441006125"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1236493094"}, InstrumentLeg_105);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1135715651"}, InstrumentLeg_105);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_105;
    LegUnitOfMeasureQty_105.setString("11077097");
set_field(noLegs_0_1, LegUnitOfMeasureQty_105, InstrumentLeg_105);
    all_values.push_back(InstrumentLeg_105);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_207;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1111285932"}, LegSecAltIDGrp_NoLegSecurityAltID_207);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1962595047"}, LegSecAltIDGrp_NoLegSecurityAltID_207);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_207);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_208;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_803114648"}, LegSecAltIDGrp_NoLegSecurityAltID_208);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1100419170"}, LegSecAltIDGrp_NoLegSecurityAltID_208);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_208);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_11;
    set_field(noLegs_0_1, FIX::LegBenchmarkCurveCurrency{"GBP"}, LegBenchmarkCurveData_11);
    set_field(noLegs_0_1, FIX::LegBenchmarkCurveName{"STRING_847191457"}, LegBenchmarkCurveData_11);
    set_field(noLegs_0_1, FIX::LegBenchmarkCurvePoint{"STRING_1193298757"}, LegBenchmarkCurveData_11);
    FIX::LegBenchmarkPrice LegBenchmarkPrice_11;
    LegBenchmarkPrice_11.setString("19646298");
set_field(noLegs_0_1, LegBenchmarkPrice_11, LegBenchmarkCurveData_11);
    set_field(noLegs_0_1, FIX::LegBenchmarkPriceType{924367012}, LegBenchmarkCurveData_11);
    all_values.push_back(LegBenchmarkCurveData_11);
    all_compo_names.insert("...NoLegs.");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_38;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_543966398"}, LegStipulations_NoLegStipulations_38);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_1390184032"}, LegStipulations_NoLegStipulations_38);
      all_values.push_back(LegStipulations_NoLegStipulations_38);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_39;
      set_field(noLegStipulations_1_1_1, FIX::LegStipulationType{"STRING_1099281784"}, LegStipulations_NoLegStipulations_39);
      set_field(noLegStipulations_1_1_1, FIX::LegStipulationValue{"STRING_865217432"}, LegStipulations_NoLegStipulations_39);
      all_values.push_back(LegStipulations_NoLegStipulations_39);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_40;
      set_field(noLegStipulations_1_1_2, FIX::LegStipulationType{"STRING_1341193053"}, LegStipulations_NoLegStipulations_40);
      set_field(noLegStipulations_1_1_2, FIX::LegStipulationValue{"STRING_2054643937"}, LegStipulations_NoLegStipulations_40);
      all_values.push_back(LegStipulations_NoLegStipulations_40);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_134;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_841327635"}, NestedParties_NoNestedPartyIDs_134);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_134);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{312367077}, NestedParties_NoNestedPartyIDs_134);
      all_values.push_back(NestedParties_NoNestedPartyIDs_134);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_279;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_1089351852"}, NstdPtysSubGrp_NoNestedPartySubIDs_279);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{233724659}, NstdPtysSubGrp_NoNestedPartySubIDs_279);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_279);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_280;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_475147535"}, NstdPtysSubGrp_NoNestedPartySubIDs_280);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{453070927}, NstdPtysSubGrp_NoNestedPartySubIDs_280);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_280);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_281;
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubID{"STRING_674730784"}, NstdPtysSubGrp_NoNestedPartySubIDs_281);
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubIDType{1711640630}, NstdPtysSubGrp_NoNestedPartySubIDs_281);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_281);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_135;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_1588786578"}, NestedParties_NoNestedPartyIDs_135);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_135);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{577772113}, NestedParties_NoNestedPartyIDs_135);
      all_values.push_back(NestedParties_NoNestedPartyIDs_135);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_282;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_1597551921"}, NstdPtysSubGrp_NoNestedPartySubIDs_282);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{1380886761}, NstdPtysSubGrp_NoNestedPartySubIDs_282);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_282);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_283;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_1653008033"}, NstdPtysSubGrp_NoNestedPartySubIDs_283);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{27989563}, NstdPtysSubGrp_NoNestedPartySubIDs_283);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_283);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_136;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_804151689"}, NestedParties_NoNestedPartyIDs_136);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_136);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{1221288321}, NestedParties_NoNestedPartyIDs_136);
      all_values.push_back(NestedParties_NoNestedPartyIDs_136);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_284;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_1277082854"}, NstdPtysSubGrp_NoNestedPartySubIDs_284);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{513721485}, NstdPtysSubGrp_NoNestedPartySubIDs_284);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_284);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
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
    LegBidForwardPoints_4.setString("11652643");
set_field(noLegs_0_2, LegBidForwardPoints_4, LegQuotGrp_NoLegs_4);
    FIX::LegBidPx LegBidPx_4;
    LegBidPx_4.setString("5197832");
set_field(noLegs_0_2, LegBidPx_4, LegQuotGrp_NoLegs_4);
    FIX::LegOfferForwardPoints LegOfferForwardPoints_4;
    LegOfferForwardPoints_4.setString("16130032");
set_field(noLegs_0_2, LegOfferForwardPoints_4, LegQuotGrp_NoLegs_4);
    FIX::LegOfferPx LegOfferPx_4;
    LegOfferPx_4.setString("20304817");
set_field(noLegs_0_2, LegOfferPx_4, LegQuotGrp_NoLegs_4);
    FIX::LegOrderQty LegOrderQty_18;
    LegOrderQty_18.setString("18609762");
set_field(noLegs_0_2, LegOrderQty_18, LegQuotGrp_NoLegs_4);
    set_field(noLegs_0_2, FIX::LegPriceType{1520163559}, LegQuotGrp_NoLegs_4);
    FIX::LegQty LegQty_18;
    LegQty_18.setString("5698795");
set_field(noLegs_0_2, LegQty_18, LegQuotGrp_NoLegs_4);
    set_field(noLegs_0_2, FIX::LegRefID{"STRING_554820279"}, LegQuotGrp_NoLegs_4);
    set_field(noLegs_0_2, FIX::LegSettlDate{"LOCALMKTDATE_582228313"}, LegQuotGrp_NoLegs_4);
    set_field(noLegs_0_2, FIX::LegSettlType{'8'}, LegQuotGrp_NoLegs_4);
    set_field(noLegs_0_2, FIX::LegSwapType{5}, LegQuotGrp_NoLegs_4);
    all_values.push_back(LegQuotGrp_NoLegs_4);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_106;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_1671580166"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{1115971309}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1352606663"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{2124651093}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_1790702093"}, InstrumentLeg_106);
    FIX::LegContractMultiplier LegContractMultiplier_106;
    LegContractMultiplier_106.setString("9167636");
set_field(noLegs_0_2, LegContractMultiplier_106, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{1565954024}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_1425658967"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_1494535758"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2118542886"}, InstrumentLeg_106);
    FIX::LegCouponRate LegCouponRate_106;
    LegCouponRate_106.setString("72.400000");
set_field(noLegs_0_2, LegCouponRate_106, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_727938872"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegCurrency{"GBP"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_1532090561"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{1976783114}, InstrumentLeg_106);
    FIX::LegFactor LegFactor_106;
    LegFactor_106.setString("21250051");
set_field(noLegs_0_2, LegFactor_106, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{5904847}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_1106382320"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_491242962"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_1171169178"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_1626165559"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_2104246232"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_1054167294"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1339658202"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_1476926144"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_106);
    FIX::LegOptionRatio LegOptionRatio_106;
    LegOptionRatio_106.setString("18944784");
set_field(noLegs_0_2, LegOptionRatio_106, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_2059154457"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_358809870"}, InstrumentLeg_106);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_106;
    LegPriceUnitOfMeasureQty_106.setString("6244539");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_106, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegProduct{1583250975}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegPutOrCall{1474781180}, InstrumentLeg_106);
    FIX::LegRatioQty LegRatioQty_106;
    LegRatioQty_106.setString("19770606");
set_field(noLegs_0_2, LegRatioQty_106, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1560418421"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_1117999625"}, InstrumentLeg_106);
    FIX::LegRepurchaseRate LegRepurchaseRate_106;
    LegRepurchaseRate_106.setString("6.210000");
set_field(noLegs_0_2, LegRepurchaseRate_106, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{978888797}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_396174945"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_93392731"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_949948035"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_1271902185"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_821331603"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_426531659"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegSide{'2'}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_205938517"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_106);
    FIX::LegStrikePrice LegStrikePrice_106;
    LegStrikePrice_106.setString("2118433");
set_field(noLegs_0_2, LegStrikePrice_106, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_1362213445"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_496899781"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_1383012542"}, InstrumentLeg_106);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_840895356"}, InstrumentLeg_106);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_106;
    LegUnitOfMeasureQty_106.setString("4536623");
set_field(noLegs_0_2, LegUnitOfMeasureQty_106, InstrumentLeg_106);
    all_values.push_back(InstrumentLeg_106);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_209;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_33069911"}, LegSecAltIDGrp_NoLegSecurityAltID_209);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_1930588509"}, LegSecAltIDGrp_NoLegSecurityAltID_209);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_209);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_210;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_1913743057"}, LegSecAltIDGrp_NoLegSecurityAltID_210);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_1927548392"}, LegSecAltIDGrp_NoLegSecurityAltID_210);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_210);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    // LegBenchmarkCurveData
    multiset<string> LegBenchmarkCurveData_12;
    set_field(noLegs_0_2, FIX::LegBenchmarkCurveCurrency{"CAN"}, LegBenchmarkCurveData_12);
    set_field(noLegs_0_2, FIX::LegBenchmarkCurveName{"STRING_404518705"}, LegBenchmarkCurveData_12);
    set_field(noLegs_0_2, FIX::LegBenchmarkCurvePoint{"STRING_1278026646"}, LegBenchmarkCurveData_12);
    FIX::LegBenchmarkPrice LegBenchmarkPrice_12;
    LegBenchmarkPrice_12.setString("15998504");
set_field(noLegs_0_2, LegBenchmarkPrice_12, LegBenchmarkCurveData_12);
    set_field(noLegs_0_2, FIX::LegBenchmarkPriceType{234095681}, LegBenchmarkCurveData_12);
    all_values.push_back(LegBenchmarkCurveData_12);
    all_compo_names.insert("...NoLegs.");

    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteResponse::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_41;
      set_field(noLegStipulations_2_1_0, FIX::LegStipulationType{"STRING_570366437"}, LegStipulations_NoLegStipulations_41);
      set_field(noLegStipulations_2_1_0, FIX::LegStipulationValue{"STRING_980436302"}, LegStipulations_NoLegStipulations_41);
      all_values.push_back(LegStipulations_NoLegStipulations_41);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_137;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_966541382"}, NestedParties_NoNestedPartyIDs_137);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_137);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{472314604}, NestedParties_NoNestedPartyIDs_137);
      all_values.push_back(NestedParties_NoNestedPartyIDs_137);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_285;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_1895160637"}, NstdPtysSubGrp_NoNestedPartySubIDs_285);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{898846263}, NstdPtysSubGrp_NoNestedPartySubIDs_285);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_285);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_138;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_119095261"}, NestedParties_NoNestedPartyIDs_138);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_138);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{1154677388}, NestedParties_NoNestedPartyIDs_138);
      all_values.push_back(NestedParties_NoNestedPartyIDs_138);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_286;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_165458870"}, NstdPtysSubGrp_NoNestedPartySubIDs_286);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{369407185}, NstdPtysSubGrp_NoNestedPartySubIDs_286);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_286);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_287;
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubID{"STRING_621651860"}, NstdPtysSubGrp_NoNestedPartySubIDs_287);
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubIDType{1548471413}, NstdPtysSubGrp_NoNestedPartySubIDs_287);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_287);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_139;
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyID{"STRING_1210302542"}, NestedParties_NoNestedPartyIDs_139);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_139);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyRole{1838167602}, NestedParties_NoNestedPartyIDs_139);
      all_values.push_back(NestedParties_NoNestedPartyIDs_139);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_288;
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubID{"STRING_858419087"}, NstdPtysSubGrp_NoNestedPartySubIDs_288);
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubIDType{1604427011}, NstdPtysSubGrp_NoNestedPartySubIDs_288);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_288);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_289;
        set_field(noNestedPartySubIDs_2_2_2_1, FIX::NestedPartySubID{"STRING_1023437197"}, NstdPtysSubGrp_NoNestedPartySubIDs_289);
        set_field(noNestedPartySubIDs_2_2_2_1, FIX::NestedPartySubIDType{553194758}, NstdPtysSubGrp_NoNestedPartySubIDs_289);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_289);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_1);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_25;
  FIX::CashOrderQty CashOrderQty_25;
  CashOrderQty_25.setString("17294962");
set_field(msg, CashOrderQty_25, OrderQtyData_25);
  FIX::OrderPercent OrderPercent_25;
  OrderPercent_25.setString("59.030000");
set_field(msg, OrderPercent_25, OrderQtyData_25);
  FIX::OrderQty OrderQty_34;
  OrderQty_34.setString("18312214");
set_field(msg, OrderQty_34, OrderQtyData_25);
  set_field(msg, FIX::RoundingDirection{'1'}, OrderQtyData_25);
  FIX::RoundingModulus RoundingModulus_25;
  RoundingModulus_25.setString("16620515");
set_field(msg, RoundingModulus_25, OrderQtyData_25);
  all_values.push_back(OrderQtyData_25);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_120;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1752229539"}, Parties_NoPartyIDs_120);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_120);
    set_field(noPartyIDs_0_0, FIX::PartyRole{63}, Parties_NoPartyIDs_120);
    all_values.push_back(Parties_NoPartyIDs_120);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_240;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1568833273"}, PtysSubGrp_NoPartySubIDs_240);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_240);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_240);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_121;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_662247192"}, Parties_NoPartyIDs_121);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_121);
    set_field(noPartyIDs_0_1, FIX::PartyRole{74}, Parties_NoPartyIDs_121);
    all_values.push_back(Parties_NoPartyIDs_121);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_241;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1270125769"}, PtysSubGrp_NoPartySubIDs_241);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_241);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_241);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_242;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_906094533"}, PtysSubGrp_NoPartySubIDs_242);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{28}, PtysSubGrp_NoPartySubIDs_242);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_242);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::QuoteResponse::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_11;
    set_field(noQuoteQualifiers_0_0, FIX::QuoteQualifier{'1'}, QuotQualGrp_NoQuoteQualifiers_11);
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_11);
    all_compo_names.insert("...NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoQuoteQualifiers noQuoteQualifiers_0_1;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_12;
    set_field(noQuoteQualifiers_0_1, FIX::QuoteQualifier{'8'}, QuotQualGrp_NoQuoteQualifiers_12);
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_12);
    all_compo_names.insert("...NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_28;
  set_field(msg, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_28);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_SWAP"}, SpreadOrBenchmarkCurveData_28);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_951018884"}, SpreadOrBenchmarkCurveData_28);
  FIX::BenchmarkPrice BenchmarkPrice_28;
  BenchmarkPrice_28.setString("13139960");
set_field(msg, BenchmarkPrice_28, SpreadOrBenchmarkCurveData_28);
  set_field(msg, FIX::BenchmarkPriceType{2131683369}, SpreadOrBenchmarkCurveData_28);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1974456082"}, SpreadOrBenchmarkCurveData_28);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1867190817"}, SpreadOrBenchmarkCurveData_28);
  FIX::Spread Spread_28;
  Spread_28.setString("17136960");
set_field(msg, Spread_28, SpreadOrBenchmarkCurveData_28);
  all_values.push_back(SpreadOrBenchmarkCurveData_28);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::QuoteResponse::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_47;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_LOT"}, Stipulations_NoStipulations_47);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_748075466"}, Stipulations_NoStipulations_47);
    all_values.push_back(Stipulations_NoStipulations_47);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::QuoteResponse::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_48;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_PXSOURCE"}, Stipulations_NoStipulations_48);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1925627751"}, Stipulations_NoStipulations_48);
    all_values.push_back(Stipulations_NoStipulations_48);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_49;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_PPC"}, Stipulations_NoStipulations_49);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_1264500512"}, Stipulations_NoStipulations_49);
    all_values.push_back(Stipulations_NoStipulations_49);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_106;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_924108630"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{685850137}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_44590197"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1586355822}, UnderlyingInstrument_106);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_106;
    UnderlyingAdjustedQuantity_106.setString("20023604");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_106, UnderlyingInstrument_106);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_106;
    UnderlyingAllocationPercent_106.setString("68.090000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_106, UnderlyingInstrument_106);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_106;
    UnderlyingAttachmentPoint_106.setString("46.280000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1125002521"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1588237161"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1126309161"}, UnderlyingInstrument_106);
    FIX::UnderlyingCapValue UnderlyingCapValue_106;
    UnderlyingCapValue_106.setString("4131035");
set_field(noUnderlyings_0_0, UnderlyingCapValue_106, UnderlyingInstrument_106);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_106;
    UnderlyingCashAmount_106.setString("855810");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_106);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_106;
    UnderlyingContractMultiplier_106.setString("12496759");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1940711130}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_962148878"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1776932275"}, UnderlyingInstrument_106);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_106;
    UnderlyingCouponRate_106.setString("63.660000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_128661289"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_106);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_106;
    UnderlyingCurrentValue_106.setString("19958521");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_106, UnderlyingInstrument_106);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_106;
    UnderlyingDetachmentPoint_106.setString("43.610000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_106, UnderlyingInstrument_106);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_106;
    UnderlyingDirtyPrice_106.setString("18261471");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_106, UnderlyingInstrument_106);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_106;
    UnderlyingEndPrice_106.setString("13992970");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_106, UnderlyingInstrument_106);
    FIX::UnderlyingEndValue UnderlyingEndValue_106;
    UnderlyingEndValue_106.setString("20754198");
set_field(noUnderlyings_0_0, UnderlyingEndValue_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{448159763}, UnderlyingInstrument_106);
    FIX::UnderlyingFXRate UnderlyingFXRate_106;
    UnderlyingFXRate_106.setString("11774411");
set_field(noUnderlyings_0_0, UnderlyingFXRate_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_106);
    FIX::UnderlyingFactor UnderlyingFactor_106;
    UnderlyingFactor_106.setString("17126602");
set_field(noUnderlyings_0_0, UnderlyingFactor_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{852650984}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1204866166"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_251026765"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_897241181"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_643738340"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_105903517"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_62574342"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_863952968"}, UnderlyingInstrument_106);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_106;
    UnderlyingNotionalPercentageOutstanding_106.setString("60.380000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_106);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_106;
    UnderlyingOriginalNotionalPercentageOutstanding_106.setString("21.290000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1644009550"}, UnderlyingInstrument_106);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_106;
    UnderlyingPriceUnitOfMeasureQty_106.setString("17363925");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{349350388}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{746201819}, UnderlyingInstrument_106);
    FIX::UnderlyingPx UnderlyingPx_106;
    UnderlyingPx_106.setString("15296200");
set_field(noUnderlyings_0_0, UnderlyingPx_106, UnderlyingInstrument_106);
    FIX::UnderlyingQty UnderlyingQty_106;
    UnderlyingQty_106.setString("13114992");
set_field(noUnderlyings_0_0, UnderlyingQty_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_375650447"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_126382754"}, UnderlyingInstrument_106);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_106;
    UnderlyingRepurchaseRate_106.setString("5.550000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{2136782444}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_697601554"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1288529013"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1316643157"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_376265044"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_540342398"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1244579336"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_824424807"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1717783534"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1525336872"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_106);
    FIX::UnderlyingStartValue UnderlyingStartValue_106;
    UnderlyingStartValue_106.setString("4229508");
set_field(noUnderlyings_0_0, UnderlyingStartValue_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_582719390"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_106);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_106;
    UnderlyingStrikePrice_106.setString("12264577");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_746531716"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1382766393"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_2090410699"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1977437754"}, UnderlyingInstrument_106);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_106;
    UnderlyingUnitOfMeasureQty_106.setString("8860942");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_106, UnderlyingInstrument_106);
    all_values.push_back(UnderlyingInstrument_106);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_220;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1473963657"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_220);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_475003154"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_220);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_220);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_221;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_135055920"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_221);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_72681828"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_221);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_221);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_210;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1446555186"}, UnderlyingStipulations_NoUnderlyingStips_210);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_448332275"}, UnderlyingStipulations_NoUnderlyingStips_210);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_210);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_211;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_2131005943"}, UnderlyingStipulations_NoUnderlyingStips_211);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_739232093"}, UnderlyingStipulations_NoUnderlyingStips_211);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_211);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_212;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_437631071"}, UnderlyingStipulations_NoUnderlyingStips_212);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_681123850"}, UnderlyingStipulations_NoUnderlyingStips_212);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_212);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_227;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1754274228"}, UndlyInstrumentParties_NoUndlyInstrumentParties_227);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_227);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{420619857}, UndlyInstrumentParties_NoUndlyInstrumentParties_227);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_227);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1881813701"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2138403392}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456);
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
    multiset<string> UnderlyingInstrument_107;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_229223140"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{123931487}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_413870614"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{811942530}, UnderlyingInstrument_107);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_107;
    UnderlyingAdjustedQuantity_107.setString("7645596");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_107, UnderlyingInstrument_107);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_107;
    UnderlyingAllocationPercent_107.setString("26.660000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_107, UnderlyingInstrument_107);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_107;
    UnderlyingAttachmentPoint_107.setString("2.610000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1511091403"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_969345411"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1981327312"}, UnderlyingInstrument_107);
    FIX::UnderlyingCapValue UnderlyingCapValue_107;
    UnderlyingCapValue_107.setString("13410455");
set_field(noUnderlyings_0_1, UnderlyingCapValue_107, UnderlyingInstrument_107);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_107;
    UnderlyingCashAmount_107.setString("18554396");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_107);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_107;
    UnderlyingContractMultiplier_107.setString("6675255");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{182959166}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1902088765"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_740207347"}, UnderlyingInstrument_107);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_107;
    UnderlyingCouponRate_107.setString("87.070000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1201160303"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_107);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_107;
    UnderlyingCurrentValue_107.setString("19403923");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_107, UnderlyingInstrument_107);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_107;
    UnderlyingDetachmentPoint_107.setString("6.940000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_107, UnderlyingInstrument_107);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_107;
    UnderlyingDirtyPrice_107.setString("7047448");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_107, UnderlyingInstrument_107);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_107;
    UnderlyingEndPrice_107.setString("18206698");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_107, UnderlyingInstrument_107);
    FIX::UnderlyingEndValue UnderlyingEndValue_107;
    UnderlyingEndValue_107.setString("12329612");
set_field(noUnderlyings_0_1, UnderlyingEndValue_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1762133747}, UnderlyingInstrument_107);
    FIX::UnderlyingFXRate UnderlyingFXRate_107;
    UnderlyingFXRate_107.setString("938060");
set_field(noUnderlyings_0_1, UnderlyingFXRate_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_107);
    FIX::UnderlyingFactor UnderlyingFactor_107;
    UnderlyingFactor_107.setString("14964638");
set_field(noUnderlyings_0_1, UnderlyingFactor_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{84725809}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_166070684"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1620395287"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_498596424"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_978013214"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_237471326"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_85175442"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_868929827"}, UnderlyingInstrument_107);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_107;
    UnderlyingNotionalPercentageOutstanding_107.setString("27.300000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_107);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_107;
    UnderlyingOriginalNotionalPercentageOutstanding_107.setString("34.910000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_942124592"}, UnderlyingInstrument_107);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_107;
    UnderlyingPriceUnitOfMeasureQty_107.setString("7624768");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{322322688}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1609650111}, UnderlyingInstrument_107);
    FIX::UnderlyingPx UnderlyingPx_107;
    UnderlyingPx_107.setString("9454360");
set_field(noUnderlyings_0_1, UnderlyingPx_107, UnderlyingInstrument_107);
    FIX::UnderlyingQty UnderlyingQty_107;
    UnderlyingQty_107.setString("769278");
set_field(noUnderlyings_0_1, UnderlyingQty_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_202373810"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_985534739"}, UnderlyingInstrument_107);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_107;
    UnderlyingRepurchaseRate_107.setString("81.080000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1390913433}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1009155742"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1070996857"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_869600480"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1713900595"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_744183065"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_2102561755"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1328550694"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_837989131"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_2039409298"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_107);
    FIX::UnderlyingStartValue UnderlyingStartValue_107;
    UnderlyingStartValue_107.setString("9227149");
set_field(noUnderlyings_0_1, UnderlyingStartValue_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_57996334"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_107);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_107;
    UnderlyingStrikePrice_107.setString("10360095");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_107, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_387913812"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1506486806"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1904939376"}, UnderlyingInstrument_107);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_2136476542"}, UnderlyingInstrument_107);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_107;
    UnderlyingUnitOfMeasureQty_107.setString("4135240");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_107, UnderlyingInstrument_107);
    all_values.push_back(UnderlyingInstrument_107);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_222;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_931117486"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_222);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1176000877"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_222);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_222);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_213;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_393283949"}, UnderlyingStipulations_NoUnderlyingStips_213);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_2121436909"}, UnderlyingStipulations_NoUnderlyingStips_213);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_213);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_228;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_595657759"}, UndlyInstrumentParties_NoUndlyInstrumentParties_228);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_228);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{2137567821}, UndlyInstrumentParties_NoUndlyInstrumentParties_228);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_228);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1968643742"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1061081031}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_708688025"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1535060689}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1805264096"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{663766132}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_459);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_229;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_716127735"}, UndlyInstrumentParties_NoUndlyInstrumentParties_229);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_229);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{555691782}, UndlyInstrumentParties_NoUndlyInstrumentParties_229);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_229);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1418484520"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{613688117}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_460);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1544101066"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{692312236}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_461);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_230;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1649697666"}, UndlyInstrumentParties_NoUndlyInstrumentParties_230);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_230);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{51315395}, UndlyInstrumentParties_NoUndlyInstrumentParties_230);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_230);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1921007772"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{464839407}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1867382614"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{704641610}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::QuoteResponse::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_108;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1640840284"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{502450874}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1097925559"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{1614793545}, UnderlyingInstrument_108);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_108;
    UnderlyingAdjustedQuantity_108.setString("13619305");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_108, UnderlyingInstrument_108);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_108;
    UnderlyingAllocationPercent_108.setString("33.190000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_108, UnderlyingInstrument_108);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_108;
    UnderlyingAttachmentPoint_108.setString("78.970000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1352014761"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_1532670864"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_247957991"}, UnderlyingInstrument_108);
    FIX::UnderlyingCapValue UnderlyingCapValue_108;
    UnderlyingCapValue_108.setString("2656121");
set_field(noUnderlyings_0_2, UnderlyingCapValue_108, UnderlyingInstrument_108);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_108;
    UnderlyingCashAmount_108.setString("938752");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_108);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_108;
    UnderlyingContractMultiplier_108.setString("20708762");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{757641373}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_351662767"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_419162172"}, UnderlyingInstrument_108);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_108;
    UnderlyingCouponRate_108.setString("31.550000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1745321348"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_108);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_108;
    UnderlyingCurrentValue_108.setString("11419387");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_108, UnderlyingInstrument_108);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_108;
    UnderlyingDetachmentPoint_108.setString("52.800000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_108, UnderlyingInstrument_108);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_108;
    UnderlyingDirtyPrice_108.setString("14292352");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_108, UnderlyingInstrument_108);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_108;
    UnderlyingEndPrice_108.setString("9264699");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_108, UnderlyingInstrument_108);
    FIX::UnderlyingEndValue UnderlyingEndValue_108;
    UnderlyingEndValue_108.setString("4337906");
set_field(noUnderlyings_0_2, UnderlyingEndValue_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{688905037}, UnderlyingInstrument_108);
    FIX::UnderlyingFXRate UnderlyingFXRate_108;
    UnderlyingFXRate_108.setString("6999941");
set_field(noUnderlyings_0_2, UnderlyingFXRate_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_108);
    FIX::UnderlyingFactor UnderlyingFactor_108;
    UnderlyingFactor_108.setString("4088040");
set_field(noUnderlyings_0_2, UnderlyingFactor_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{1404635732}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_391986719"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_911254878"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_355077644"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_2006780264"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_125701817"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2048660963"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_286094514"}, UnderlyingInstrument_108);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_108;
    UnderlyingNotionalPercentageOutstanding_108.setString("65.780000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_108);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_108;
    UnderlyingOriginalNotionalPercentageOutstanding_108.setString("25.050000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1743328722"}, UnderlyingInstrument_108);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_108;
    UnderlyingPriceUnitOfMeasureQty_108.setString("15277234");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{169587538}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{1666721315}, UnderlyingInstrument_108);
    FIX::UnderlyingPx UnderlyingPx_108;
    UnderlyingPx_108.setString("1378811");
set_field(noUnderlyings_0_2, UnderlyingPx_108, UnderlyingInstrument_108);
    FIX::UnderlyingQty UnderlyingQty_108;
    UnderlyingQty_108.setString("5212503");
set_field(noUnderlyings_0_2, UnderlyingQty_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2085883487"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1451214300"}, UnderlyingInstrument_108);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_108;
    UnderlyingRepurchaseRate_108.setString("80.060000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{1776046531}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_1230751925"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_1261026773"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_11038163"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_512503567"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_40013122"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_444828839"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1201408604"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_740007244"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_1343458921"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_108);
    FIX::UnderlyingStartValue UnderlyingStartValue_108;
    UnderlyingStartValue_108.setString("21446429");
set_field(noUnderlyings_0_2, UnderlyingStartValue_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1735445640"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_108);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_108;
    UnderlyingStrikePrice_108.setString("15947422");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_108, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_499685655"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_253414288"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_1880836771"}, UnderlyingInstrument_108);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1977402234"}, UnderlyingInstrument_108);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_108;
    UnderlyingUnitOfMeasureQty_108.setString("16872624");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_108, UnderlyingInstrument_108);
    all_values.push_back(UnderlyingInstrument_108);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_223;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1573247308"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_223);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1067502239"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_223);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_223);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_224;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_436993166"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_224);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1092484975"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_224);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_224);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_214;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_958243472"}, UnderlyingStipulations_NoUnderlyingStips_214);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_1030884814"}, UnderlyingStipulations_NoUnderlyingStips_214);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_214);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_215;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_509114036"}, UnderlyingStipulations_NoUnderlyingStips_215);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_1077331478"}, UnderlyingStipulations_NoUnderlyingStips_215);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_215);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_231;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1739865961"}, UndlyInstrumentParties_NoUndlyInstrumentParties_231);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_231);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{670485861}, UndlyInstrumentParties_NoUndlyInstrumentParties_231);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_231);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_230887725"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1115314700}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::QuoteResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1306294485"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{970894970}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_23;
  FIX::Yield Yield_23;
  Yield_23.setString("99.730000");
set_field(msg, Yield_23, YieldData_23);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_769023445"}, YieldData_23);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_968054299"}, YieldData_23);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_23;
  YieldRedemptionPrice_23.setString("20467356");
set_field(msg, YieldRedemptionPrice_23, YieldData_23);
  set_field(msg, FIX::YieldRedemptionPriceType{1143007283}, YieldData_23);
  set_field(msg, FIX::YieldType{"STRING_COMPOUND"}, YieldData_23);
  all_values.push_back(YieldData_23);
  all_compo_names.insert(".");

  // header
  multiset<string> header_72;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_3"}, header_72);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1642692939"}, header_72);
  set_header_field(msg.getHeader(), FIX::BodyLength{1573705560}, header_72);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1227347346"}, header_72);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1472611525"}, header_72);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1113484379"}, header_72);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1494752974"}, header_72);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{898375185}, header_72);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_72);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1931746141}, header_72);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1990860161"}, header_72);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1238886354"}, header_72);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_742505965"}, header_72);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(14, 3, 5, 24, 3, 2006)}, header_72);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_72);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_72);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1172025938"}, header_72);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{604079422}, header_72);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1065011093"}, header_72);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1483315911"}, header_72);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1373102868"}, header_72);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(21, 3, 36, 4, 7, 2016)}, header_72);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1956425798"}, header_72);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1336447319"}, header_72);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1745579307"}, header_72);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1303695125"}, header_72);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{87338857}, header_72);
  all_values.push_back(header_72);
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
