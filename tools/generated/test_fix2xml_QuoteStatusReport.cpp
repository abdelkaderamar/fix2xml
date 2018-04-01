#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::QuoteStatusReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteStatusReport_0;
  set_field(msg, FIX::Account{"STRING_1931766922"}, QuoteStatusReport_0);
  set_field(msg, FIX::AccountType{2}, QuoteStatusReport_0);
  set_field(msg, FIX::AcctIDSource{4}, QuoteStatusReport_0);
  FIX::BidForwardPoints BidForwardPoints_6;
  BidForwardPoints_6.setString("15863790");
set_field(msg, BidForwardPoints_6, QuoteStatusReport_0);
  FIX::BidForwardPoints2 BidForwardPoints2_6;
  BidForwardPoints2_6.setString("16918198");
set_field(msg, BidForwardPoints2_6, QuoteStatusReport_0);
  FIX::BidPx BidPx_6;
  BidPx_6.setString("6858264");
set_field(msg, BidPx_6, QuoteStatusReport_0);
  FIX::BidSize BidSize_6;
  BidSize_6.setString("17568005");
set_field(msg, BidSize_6, QuoteStatusReport_0);
  FIX::BidSpotRate BidSpotRate_6;
  BidSpotRate_6.setString("471262");
set_field(msg, BidSpotRate_6, QuoteStatusReport_0);
  FIX::BidYield BidYield_6;
  BidYield_6.setString("67.160000");
set_field(msg, BidYield_6, QuoteStatusReport_0);
  set_field(msg, FIX::BookingType{0}, QuoteStatusReport_0);
  set_field(msg, FIX::CommType{'5'}, QuoteStatusReport_0);
  FIX::Commission Commission_20;
  Commission_20.setString("13763678");
set_field(msg, Commission_20, QuoteStatusReport_0);
  set_field(msg, FIX::Currency{"EUR"}, QuoteStatusReport_0);
  set_field(msg, FIX::CustOrderCapacity{1}, QuoteStatusReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1731058960"}, QuoteStatusReport_0);
  set_field(msg, FIX::EncodedTextLen{447196491}, QuoteStatusReport_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_176906100"}, QuoteStatusReport_0);
  set_field(msg, FIX::ExDestinationIDSource{'C'}, QuoteStatusReport_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(10, 51, 32, 19, 1, 2017)}, QuoteStatusReport_0);
  FIX::MidPx MidPx_6;
  MidPx_6.setString("14643090");
set_field(msg, MidPx_6, QuoteStatusReport_0);
  FIX::MidYield MidYield_6;
  MidYield_6.setString("9.340000");
set_field(msg, MidYield_6, QuoteStatusReport_0);
  FIX::MinBidSize MinBidSize_2;
  MinBidSize_2.setString("14987234");
set_field(msg, MinBidSize_2, QuoteStatusReport_0);
  FIX::MinOfferSize MinOfferSize_2;
  MinOfferSize_2.setString("364700");
set_field(msg, MinOfferSize_2, QuoteStatusReport_0);
  FIX::MinQty MinQty_15;
  MinQty_15.setString("9716180");
set_field(msg, MinQty_15, QuoteStatusReport_0);
  FIX::MktBidPx MktBidPx_2;
  MktBidPx_2.setString("12830066");
set_field(msg, MktBidPx_2, QuoteStatusReport_0);
  FIX::MktOfferPx MktOfferPx_2;
  MktOfferPx_2.setString("18239566");
set_field(msg, MktOfferPx_2, QuoteStatusReport_0);
  FIX::OfferForwardPoints OfferForwardPoints_6;
  OfferForwardPoints_6.setString("11024758");
set_field(msg, OfferForwardPoints_6, QuoteStatusReport_0);
  FIX::OfferForwardPoints2 OfferForwardPoints2_6;
  OfferForwardPoints2_6.setString("7219021");
set_field(msg, OfferForwardPoints2_6, QuoteStatusReport_0);
  FIX::OfferPx OfferPx_6;
  OfferPx_6.setString("13682928");
set_field(msg, OfferPx_6, QuoteStatusReport_0);
  FIX::OfferSize OfferSize_6;
  OfferSize_6.setString("17883023");
set_field(msg, OfferSize_6, QuoteStatusReport_0);
  FIX::OfferSpotRate OfferSpotRate_6;
  OfferSpotRate_6.setString("3312190");
set_field(msg, OfferSpotRate_6, QuoteStatusReport_0);
  FIX::OfferYield OfferYield_6;
  OfferYield_6.setString("91.370000");
set_field(msg, OfferYield_6, QuoteStatusReport_0);
  set_field(msg, FIX::OrdType{'A'}, QuoteStatusReport_0);
  set_field(msg, FIX::OrderCapacity{'A'}, QuoteStatusReport_0);
  FIX::OrderQty2 OrderQty2_13;
  OrderQty2_13.setString("7281757");
set_field(msg, OrderQty2_13, QuoteStatusReport_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_6"}, QuoteStatusReport_0);
  FIX::Price Price_22;
  Price_22.setString("5716903");
set_field(msg, Price_22, QuoteStatusReport_0);
  set_field(msg, FIX::PriceType{15}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteCancelType{1}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteID{"STRING_155265645"}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteMsgID{"STRING_1760595808"}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteRejectReason{3}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteReqID{"STRING_321809131"}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteRespID{"STRING_1720995636"}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteStatus{18}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteStatusReqID{"STRING_1151149282"}, QuoteStatusReport_0);
  set_field(msg, FIX::QuoteType{0}, QuoteStatusReport_0);
  FIX::SettlCurrBidFxRate SettlCurrBidFxRate_2;
  SettlCurrBidFxRate_2.setString("9909406");
set_field(msg, SettlCurrBidFxRate_2, QuoteStatusReport_0);
  set_field(msg, FIX::SettlCurrFxRateCalc{'M'}, QuoteStatusReport_0);
  FIX::SettlCurrOfferFxRate SettlCurrOfferFxRate_2;
  SettlCurrOfferFxRate_2.setString("7125433");
set_field(msg, SettlCurrOfferFxRate_2, QuoteStatusReport_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_307766071"}, QuoteStatusReport_0);
  set_field(msg, FIX::SettlDate2{"LOCALMKTDATE_2069192849"}, QuoteStatusReport_0);
  set_field(msg, FIX::SettlType{"STRING_5"}, QuoteStatusReport_0);
  set_field(msg, FIX::Side{'1'}, QuoteStatusReport_0);
  set_field(msg, FIX::Text{"STRING_893327205"}, QuoteStatusReport_0);
  set_field(msg, FIX::TradingSessionID{"STRING_3"}, QuoteStatusReport_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_6"}, QuoteStatusReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(9, 54, 28, 4, 9, 2005)}, QuoteStatusReport_0);
  set_field(msg, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(19, 37, 48, 16, 2, 2009)}, QuoteStatusReport_0);
  all_values.push_back(QuoteStatusReport_0);

  all_compo_names.insert("QuoteStatusReport");

  // FinancingDetails
  multiset<string> FinancingDetails_23;
  set_field(msg, FIX::AgreementCurrency{"EUR"}, FinancingDetails_23);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1984159504"}, FinancingDetails_23);
  set_field(msg, FIX::AgreementDesc{"STRING_1885136781"}, FinancingDetails_23);
  set_field(msg, FIX::AgreementID{"STRING_850646567"}, FinancingDetails_23);
  set_field(msg, FIX::DeliveryType{3}, FinancingDetails_23);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1735255221"}, FinancingDetails_23);
  FIX::MarginRatio MarginRatio_23;
  MarginRatio_23.setString("72.520000");
set_field(msg, MarginRatio_23, FinancingDetails_23);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_990697053"}, FinancingDetails_23);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_23);
  all_values.push_back(FinancingDetails_23);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_60;
  FIX::AttachmentPoint AttachmentPoint_60;
  AttachmentPoint_60.setString("96.760000");
set_field(msg, AttachmentPoint_60, Instrument_60);
  set_field(msg, FIX::CFICode{"STRING_912406254"}, Instrument_60);
  set_field(msg, FIX::CPProgram{99}, Instrument_60);
  set_field(msg, FIX::CPRegType{"STRING_346105804"}, Instrument_60);
  FIX::CapPrice CapPrice_60;
  CapPrice_60.setString("18057334");
set_field(msg, CapPrice_60, Instrument_60);
  FIX::ContractMultiplier ContractMultiplier_60;
  ContractMultiplier_60.setString("17108877");
set_field(msg, ContractMultiplier_60, Instrument_60);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_60);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1654052859"}, Instrument_60);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1632096027"}, Instrument_60);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1755816993"}, Instrument_60);
  FIX::CouponRate CouponRate_60;
  CouponRate_60.setString("9.190000");
set_field(msg, CouponRate_60, Instrument_60);
  set_field(msg, FIX::CreditRating{"STRING_1884523339"}, Instrument_60);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_265270869"}, Instrument_60);
  FIX::DetachmentPoint DetachmentPoint_60;
  DetachmentPoint_60.setString("43.560000");
set_field(msg, DetachmentPoint_60, Instrument_60);
  set_field(msg, FIX::EncodedIssuer{"DATA_672434086"}, Instrument_60);
  set_field(msg, FIX::EncodedIssuerLen{1650384185}, Instrument_60);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1497473745"}, Instrument_60);
  set_field(msg, FIX::EncodedSecurityDescLen{32035166}, Instrument_60);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_60);
  FIX::Factor Factor_60;
  Factor_60.setString("5144656");
set_field(msg, Factor_60, Instrument_60);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_60);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_60);
  FIX::FloorPrice FloorPrice_60;
  FloorPrice_60.setString("14392298");
set_field(msg, FloorPrice_60, Instrument_60);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_60);
  set_field(msg, FIX::InstrRegistry{"STRING_2103207447"}, Instrument_60);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_60);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_371402887"}, Instrument_60);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1690979020"}, Instrument_60);
  set_field(msg, FIX::Issuer{"STRING_1983979978"}, Instrument_60);
  set_field(msg, FIX::ListMethod{0}, Instrument_60);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1991293907"}, Instrument_60);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1985849654"}, Instrument_60);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_127022547"}, Instrument_60);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_207908234"}, Instrument_60);
  FIX::MinPriceIncrement MinPriceIncrement_60;
  MinPriceIncrement_60.setString("1844718");
set_field(msg, MinPriceIncrement_60, Instrument_60);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_60;
  MinPriceIncrementAmount_60.setString("19327560");
set_field(msg, MinPriceIncrementAmount_60, Instrument_60);
  set_field(msg, FIX::NTPositionLimit{1918795996}, Instrument_60);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_60;
  NotionalPercentageOutstanding_60.setString("67.690000");
set_field(msg, NotionalPercentageOutstanding_60, Instrument_60);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_60);
  FIX::OptPayoutAmount OptPayoutAmount_60;
  OptPayoutAmount_60.setString("14034083");
set_field(msg, OptPayoutAmount_60, Instrument_60);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_60);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_60;
  OriginalNotionalPercentageOutstanding_60.setString("24.890000");
set_field(msg, OriginalNotionalPercentageOutstanding_60, Instrument_60);
  set_field(msg, FIX::Pool{"STRING_1140448067"}, Instrument_60);
  set_field(msg, FIX::PositionLimit{424890984}, Instrument_60);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_60);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1812882153"}, Instrument_60);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_60;
  PriceUnitOfMeasureQty_60.setString("20752751");
set_field(msg, PriceUnitOfMeasureQty_60, Instrument_60);
  set_field(msg, FIX::Product{7}, Instrument_60);
  set_field(msg, FIX::ProductComplex{"STRING_1844917320"}, Instrument_60);
  set_field(msg, FIX::PutOrCall{1}, Instrument_60);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_215868940"}, Instrument_60);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1391819211"}, Instrument_60);
  FIX::RepurchaseRate RepurchaseRate_60;
  RepurchaseRate_60.setString("17.090000");
set_field(msg, RepurchaseRate_60, Instrument_60);
  set_field(msg, FIX::RepurchaseTerm{1655098747}, Instrument_60);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_60);
  set_field(msg, FIX::SecurityDesc{"STRING_155515509"}, Instrument_60);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1797491473"}, Instrument_60);
  set_field(msg, FIX::SecurityGroup{"STRING_1146799846"}, Instrument_60);
  set_field(msg, FIX::SecurityID{"STRING_1846494529"}, Instrument_60);
  set_field(msg, FIX::SecurityIDSource{"STRING_K"}, Instrument_60);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_60);
  set_field(msg, FIX::SecuritySubType{"STRING_1690304788"}, Instrument_60);
  set_field(msg, FIX::SecurityType{"STRING_XCN"}, Instrument_60);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_60);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_60);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1656825620"}, Instrument_60);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_273711045"}, Instrument_60);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_60);
  FIX::StrikeMultiplier StrikeMultiplier_60;
  StrikeMultiplier_60.setString("17130362");
set_field(msg, StrikeMultiplier_60, Instrument_60);
  FIX::StrikePrice StrikePrice_60;
  StrikePrice_60.setString("9254500");
set_field(msg, StrikePrice_60, Instrument_60);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_60);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_60;
  StrikePriceBoundaryPrecision_60.setString("51.040000");
set_field(msg, StrikePriceBoundaryPrecision_60, Instrument_60);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_60);
  FIX::StrikeValue StrikeValue_60;
  StrikeValue_60.setString("6451398");
set_field(msg, StrikeValue_60, Instrument_60);
  set_field(msg, FIX::Symbol{"STRING_351998301"}, Instrument_60);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_60);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_60);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_60);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_60);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_60;
  UnitOfMeasureQty_60.setString("5546524");
set_field(msg, UnitOfMeasureQty_60, Instrument_60);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_60);
  all_values.push_back(Instrument_60);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::QuoteStatusReport::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_124;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_124);
    FIX::ComplexEventPrice ComplexEventPrice_124;
    ComplexEventPrice_124.setString("19243692");
set_field(noComplexEvents_0_0, ComplexEventPrice_124, ComplexEvents_NoComplexEvents_124);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_124);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_124;
    ComplexEventPriceBoundaryPrecision_124.setString("96.240000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_124, ComplexEvents_NoComplexEvents_124);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_124);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_124);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_124;
    ComplexOptPayoutAmount_124.setString("6089705");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_124, ComplexEvents_NoComplexEvents_124);
    all_values.push_back(ComplexEvents_NoComplexEvents_124);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_261;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 24, 30, 13, 10, 2015)}, ComplexEventDates_NoComplexEventDates_261);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 30, 24, 12, 3, 2004)}, ComplexEventDates_NoComplexEventDates_261);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_261);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_526;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 40, 10)}, ComplexEventTimes_NoComplexEventTimes_526);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 25, 16)}, ComplexEventTimes_NoComplexEventTimes_526);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_526);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_527;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 54, 38)}, ComplexEventTimes_NoComplexEventTimes_527);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 4, 20)}, ComplexEventTimes_NoComplexEventTimes_527);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_527);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_262;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 37, 25, 24, 3, 2002)}, ComplexEventDates_NoComplexEventDates_262);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 54, 41, 13, 9, 2013)}, ComplexEventDates_NoComplexEventDates_262);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_262);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_528;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 59, 45)}, ComplexEventTimes_NoComplexEventTimes_528);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 2, 58)}, ComplexEventTimes_NoComplexEventTimes_528);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_528);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_529;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 44, 42)}, ComplexEventTimes_NoComplexEventTimes_529);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 38, 36)}, ComplexEventTimes_NoComplexEventTimes_529);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_529);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_530;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 13, 17)}, ComplexEventTimes_NoComplexEventTimes_530);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 41, 43)}, ComplexEventTimes_NoComplexEventTimes_530);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_530);
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
    multiset<string> ComplexEvents_NoComplexEvents_125;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_125);
    FIX::ComplexEventPrice ComplexEventPrice_125;
    ComplexEventPrice_125.setString("6676051");
set_field(noComplexEvents_0_1, ComplexEventPrice_125, ComplexEvents_NoComplexEvents_125);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_125);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_125;
    ComplexEventPriceBoundaryPrecision_125.setString("12.290000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_125, ComplexEvents_NoComplexEvents_125);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_125);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_125);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_125;
    ComplexOptPayoutAmount_125.setString("502961");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_125, ComplexEvents_NoComplexEvents_125);
    all_values.push_back(ComplexEvents_NoComplexEvents_125);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_263;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 49, 35, 24, 5, 2003)}, ComplexEventDates_NoComplexEventDates_263);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 18, 37, 25, 3, 2004)}, ComplexEventDates_NoComplexEventDates_263);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_263);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_531;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 30, 14)}, ComplexEventTimes_NoComplexEventTimes_531);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 56, 39)}, ComplexEventTimes_NoComplexEventTimes_531);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_531);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_532;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 48, 18)}, ComplexEventTimes_NoComplexEventTimes_532);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 45, 20)}, ComplexEventTimes_NoComplexEventTimes_532);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_532);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_533;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 10, 21)}, ComplexEventTimes_NoComplexEventTimes_533);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 47, 43)}, ComplexEventTimes_NoComplexEventTimes_533);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_533);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
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
    multiset<string> EvntGrp_NoEvents_121;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1678683905"}, EvntGrp_NoEvents_121);
    FIX::EventPx EventPx_121;
    EventPx_121.setString("13998049");
set_field(noEvents_0_0, EventPx_121, EvntGrp_NoEvents_121);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1864684184"}, EvntGrp_NoEvents_121);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(21, 53, 16, 6, 4, 2001)}, EvntGrp_NoEvents_121);
    set_field(noEvents_0_0, FIX::EventType{15}, EvntGrp_NoEvents_121);
    all_values.push_back(EvntGrp_NoEvents_121);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::QuoteStatusReport::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_113;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_785005939"}, InstrumentParties_NoInstrumentParties_113);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_113);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{497975173}, InstrumentParties_NoInstrumentParties_113);
    all_values.push_back(InstrumentParties_NoInstrumentParties_113);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1390822753"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{2053533151}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_231);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1796634951"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1056606845}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_232);
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
    multiset<string> SecAltIDGrp_NoSecurityAltID_122;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1383132724"}, SecAltIDGrp_NoSecurityAltID_122);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_2004859311"}, SecAltIDGrp_NoSecurityAltID_122);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_122);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_120;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1430107453"}, SecurityXML_120);
  set_field(msg, FIX::SecurityXMLLen{1207840146}, SecurityXML_120);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1098241145"}, SecurityXML_120);
  all_values.push_back(SecurityXML_120);
  all_compo_names.insert("..");

  // LegQuotStatGrp
  // Group LegQuotStatGrp.NoLegs
  {
    FIX50SP2::QuoteStatusReport::NoLegs noLegs_0_0;
    // LegQuotStatGrp.NoLegs
    multiset<string> LegQuotStatGrp_NoLegs_0;
    FIX::LegOrderQty LegOrderQty_14;
    LegOrderQty_14.setString("8857210");
set_field(noLegs_0_0, LegOrderQty_14, LegQuotStatGrp_NoLegs_0);
    FIX::LegQty LegQty_14;
    LegQty_14.setString("14484172");
set_field(noLegs_0_0, LegQty_14, LegQuotStatGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_1897178796"}, LegQuotStatGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlType{'1'}, LegQuotStatGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSwapType{2}, LegQuotStatGrp_NoLegs_0);
    all_values.push_back(LegQuotStatGrp_NoLegs_0);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_84;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1149500081"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1337978612}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1466350320"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1934975942}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_39103577"}, InstrumentLeg_84);
    FIX::LegContractMultiplier LegContractMultiplier_84;
    LegContractMultiplier_84.setString("7526632");
set_field(noLegs_0_0, LegContractMultiplier_84, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{49168065}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_188498733"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_492227851"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2006470599"}, InstrumentLeg_84);
    FIX::LegCouponRate LegCouponRate_84;
    LegCouponRate_84.setString("71.570000");
set_field(noLegs_0_0, LegCouponRate_84, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1277233790"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1627802553"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{85691881}, InstrumentLeg_84);
    FIX::LegFactor LegFactor_84;
    LegFactor_84.setString("5697418");
set_field(noLegs_0_0, LegFactor_84, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1276953857}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1142298726"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2081645483"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_512602933"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_999674390"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1364269288"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1720443079"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_2097915535"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1235678301"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'4'}, InstrumentLeg_84);
    FIX::LegOptionRatio LegOptionRatio_84;
    LegOptionRatio_84.setString("13988491");
set_field(noLegs_0_0, LegOptionRatio_84, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_985373450"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_2079458578"}, InstrumentLeg_84);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_84;
    LegPriceUnitOfMeasureQty_84.setString("2309830");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_84, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegProduct{2134873531}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1269953542}, InstrumentLeg_84);
    FIX::LegRatioQty LegRatioQty_84;
    LegRatioQty_84.setString("16973333");
set_field(noLegs_0_0, LegRatioQty_84, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1922365826"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1309057120"}, InstrumentLeg_84);
    FIX::LegRepurchaseRate LegRepurchaseRate_84;
    LegRepurchaseRate_84.setString("29.400000");
set_field(noLegs_0_0, LegRepurchaseRate_84, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1971533891}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1497555853"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_794740792"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1830520842"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1663273010"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_2071974582"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_525389970"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1552293488"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_84);
    FIX::LegStrikePrice LegStrikePrice_84;
    LegStrikePrice_84.setString("6817636");
set_field(noLegs_0_0, LegStrikePrice_84, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1753380577"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_683385363"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1194366630"}, InstrumentLeg_84);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_605571319"}, InstrumentLeg_84);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_84;
    LegUnitOfMeasureQty_84.setString("20476546");
set_field(noLegs_0_0, LegUnitOfMeasureQty_84, InstrumentLeg_84);
    all_values.push_back(InstrumentLeg_84);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_174;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_556003206"}, LegSecAltIDGrp_NoLegSecurityAltID_174);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1135849305"}, LegSecAltIDGrp_NoLegSecurityAltID_174);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_174);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_175;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1226006564"}, LegSecAltIDGrp_NoLegSecurityAltID_175);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1954852365"}, LegSecAltIDGrp_NoLegSecurityAltID_175);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_175);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_176;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_2121222755"}, LegSecAltIDGrp_NoLegSecurityAltID_176);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_1157981494"}, LegSecAltIDGrp_NoLegSecurityAltID_176);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_176);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_29;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_2108612639"}, LegStipulations_NoLegStipulations_29);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_280451389"}, LegStipulations_NoLegStipulations_29);
      all_values.push_back(LegStipulations_NoLegStipulations_29);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_123;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1883494817"}, NestedParties_NoNestedPartyIDs_123);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_123);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{2038198058}, NestedParties_NoNestedPartyIDs_123);
      all_values.push_back(NestedParties_NoNestedPartyIDs_123);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_249;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_939580714"}, NstdPtysSubGrp_NoNestedPartySubIDs_249);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{685455202}, NstdPtysSubGrp_NoNestedPartySubIDs_249);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_249);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_250;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_1390582254"}, NstdPtysSubGrp_NoNestedPartySubIDs_250);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{455370076}, NstdPtysSubGrp_NoNestedPartySubIDs_250);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_250);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_251;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_609946136"}, NstdPtysSubGrp_NoNestedPartySubIDs_251);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{1915972224}, NstdPtysSubGrp_NoNestedPartySubIDs_251);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_251);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_124;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_634851770"}, NestedParties_NoNestedPartyIDs_124);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_124);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{379570427}, NestedParties_NoNestedPartyIDs_124);
      all_values.push_back(NestedParties_NoNestedPartyIDs_124);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_252;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_696519673"}, NstdPtysSubGrp_NoNestedPartySubIDs_252);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{2132951004}, NstdPtysSubGrp_NoNestedPartySubIDs_252);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_252);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_253;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_2067460661"}, NstdPtysSubGrp_NoNestedPartySubIDs_253);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{1890886303}, NstdPtysSubGrp_NoNestedPartySubIDs_253);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_253);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_254;
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubID{"STRING_591038676"}, NstdPtysSubGrp_NoNestedPartySubIDs_254);
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubIDType{1967631665}, NstdPtysSubGrp_NoNestedPartySubIDs_254);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_254);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_125;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_510728716"}, NestedParties_NoNestedPartyIDs_125);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_125);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{955997323}, NestedParties_NoNestedPartyIDs_125);
      all_values.push_back(NestedParties_NoNestedPartyIDs_125);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_255;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_954410600"}, NstdPtysSubGrp_NoNestedPartySubIDs_255);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{929736430}, NstdPtysSubGrp_NoNestedPartySubIDs_255);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_255);
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
    FIX::LegOrderQty LegOrderQty_15;
    LegOrderQty_15.setString("7472331");
set_field(noLegs_0_1, LegOrderQty_15, LegQuotStatGrp_NoLegs_1);
    FIX::LegQty LegQty_15;
    LegQty_15.setString("9927623");
set_field(noLegs_0_1, LegQty_15, LegQuotStatGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlDate{"LOCALMKTDATE_890865421"}, LegQuotStatGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSettlType{'1'}, LegQuotStatGrp_NoLegs_1);
    set_field(noLegs_0_1, FIX::LegSwapType{5}, LegQuotStatGrp_NoLegs_1);
    all_values.push_back(LegQuotStatGrp_NoLegs_1);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_85;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_626876590"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{469709377}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_471678237"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{186938002}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1409290091"}, InstrumentLeg_85);
    FIX::LegContractMultiplier LegContractMultiplier_85;
    LegContractMultiplier_85.setString("11571334");
set_field(noLegs_0_1, LegContractMultiplier_85, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1577520256}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1864660167"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1767079575"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1346008832"}, InstrumentLeg_85);
    FIX::LegCouponRate LegCouponRate_85;
    LegCouponRate_85.setString("82.890000");
set_field(noLegs_0_1, LegCouponRate_85, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1781835552"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegCurrency{"CAN"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_330871577"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1711046616}, InstrumentLeg_85);
    FIX::LegFactor LegFactor_85;
    LegFactor_85.setString("16560806");
set_field(noLegs_0_1, LegFactor_85, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{74274233}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_154601644"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1476228618"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_585002949"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1301643526"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_284742293"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_174254582"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_108570478"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1214478724"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'9'}, InstrumentLeg_85);
    FIX::LegOptionRatio LegOptionRatio_85;
    LegOptionRatio_85.setString("11013328");
set_field(noLegs_0_1, LegOptionRatio_85, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_2105344145"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1949172225"}, InstrumentLeg_85);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_85;
    LegPriceUnitOfMeasureQty_85.setString("16822966");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_85, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegProduct{584737088}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegPutOrCall{271397954}, InstrumentLeg_85);
    FIX::LegRatioQty LegRatioQty_85;
    LegRatioQty_85.setString("64912");
set_field(noLegs_0_1, LegRatioQty_85, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_771675090"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1680688045"}, InstrumentLeg_85);
    FIX::LegRepurchaseRate LegRepurchaseRate_85;
    LegRepurchaseRate_85.setString("46.910000");
set_field(noLegs_0_1, LegRepurchaseRate_85, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{201711699}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1397864564"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_783220618"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1547720531"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1749892854"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_417572522"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1125816143"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_748444100"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_85);
    FIX::LegStrikePrice LegStrikePrice_85;
    LegStrikePrice_85.setString("8227183");
set_field(noLegs_0_1, LegStrikePrice_85, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_843980755"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_175854717"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1407721282"}, InstrumentLeg_85);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_2145624281"}, InstrumentLeg_85);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_85;
    LegUnitOfMeasureQty_85.setString("4605970");
set_field(noLegs_0_1, LegUnitOfMeasureQty_85, InstrumentLeg_85);
    all_values.push_back(InstrumentLeg_85);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_177;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_106711112"}, LegSecAltIDGrp_NoLegSecurityAltID_177);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1675075734"}, LegSecAltIDGrp_NoLegSecurityAltID_177);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_177);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_30;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_1208043948"}, LegStipulations_NoLegStipulations_30);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_1632936232"}, LegStipulations_NoLegStipulations_30);
      all_values.push_back(LegStipulations_NoLegStipulations_30);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_126;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_742856963"}, NestedParties_NoNestedPartyIDs_126);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_126);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{429066456}, NestedParties_NoNestedPartyIDs_126);
      all_values.push_back(NestedParties_NoNestedPartyIDs_126);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_256;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_841864762"}, NstdPtysSubGrp_NoNestedPartySubIDs_256);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{2109754501}, NstdPtysSubGrp_NoNestedPartySubIDs_256);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_256);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_257;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_1912972906"}, NstdPtysSubGrp_NoNestedPartySubIDs_257);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{1043576461}, NstdPtysSubGrp_NoNestedPartySubIDs_257);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_257);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_127;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_1360135418"}, NestedParties_NoNestedPartyIDs_127);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_127);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{443813345}, NestedParties_NoNestedPartyIDs_127);
      all_values.push_back(NestedParties_NoNestedPartyIDs_127);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_258;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_966282399"}, NstdPtysSubGrp_NoNestedPartySubIDs_258);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{1569629488}, NstdPtysSubGrp_NoNestedPartySubIDs_258);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_258);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_21;
  FIX::CashOrderQty CashOrderQty_21;
  CashOrderQty_21.setString("1535737");
set_field(msg, CashOrderQty_21, OrderQtyData_21);
  FIX::OrderPercent OrderPercent_21;
  OrderPercent_21.setString("64.990000");
set_field(msg, OrderPercent_21, OrderQtyData_21);
  FIX::OrderQty OrderQty_29;
  OrderQty_29.setString("1115249");
set_field(msg, OrderQty_29, OrderQtyData_21);
  set_field(msg, FIX::RoundingDirection{'0'}, OrderQtyData_21);
  FIX::RoundingModulus RoundingModulus_21;
  RoundingModulus_21.setString("3899611");
set_field(msg, RoundingModulus_21, OrderQtyData_21);
  all_values.push_back(OrderQtyData_21);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteStatusReport::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_111;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1176538233"}, Parties_NoPartyIDs_111);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_111);
    set_field(noPartyIDs_0_0, FIX::PartyRole{53}, Parties_NoPartyIDs_111);
    all_values.push_back(Parties_NoPartyIDs_111);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_227;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1232174683"}, PtysSubGrp_NoPartySubIDs_227);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_227);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_227);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_228;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1164727330"}, PtysSubGrp_NoPartySubIDs_228);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_228);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_228);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::QuoteStatusReport::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_229;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_120917751"}, PtysSubGrp_NoPartySubIDs_229);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_229);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_229);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // QuotQualGrp
  // Group QuotQualGrp.NoQuoteQualifiers
  {
    FIX50SP2::QuoteStatusReport::NoQuoteQualifiers noQuoteQualifiers_0_0;
    // QuotQualGrp.NoQuoteQualifiers
    multiset<string> QuotQualGrp_NoQuoteQualifiers_12;
    set_field(noQuoteQualifiers_0_0, FIX::QuoteQualifier{'8'}, QuotQualGrp_NoQuoteQualifiers_12);
    all_values.push_back(QuotQualGrp_NoQuoteQualifiers_12);
    all_compo_names.insert("...NoQuoteQualifiers");

    msg.addGroup(noQuoteQualifiers_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_25;
  set_field(msg, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_25);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_SONIA"}, SpreadOrBenchmarkCurveData_25);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1562234348"}, SpreadOrBenchmarkCurveData_25);
  FIX::BenchmarkPrice BenchmarkPrice_25;
  BenchmarkPrice_25.setString("21371604");
set_field(msg, BenchmarkPrice_25, SpreadOrBenchmarkCurveData_25);
  set_field(msg, FIX::BenchmarkPriceType{1378612187}, SpreadOrBenchmarkCurveData_25);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_458327162"}, SpreadOrBenchmarkCurveData_25);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1349812191"}, SpreadOrBenchmarkCurveData_25);
  FIX::Spread Spread_25;
  Spread_25.setString("19273220");
set_field(msg, Spread_25, SpreadOrBenchmarkCurveData_25);
  all_values.push_back(SpreadOrBenchmarkCurveData_25);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::QuoteStatusReport::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_38;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_WAM"}, Stipulations_NoStipulations_38);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_746120815"}, Stipulations_NoStipulations_38);
    all_values.push_back(Stipulations_NoStipulations_38);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_39;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_PPT"}, Stipulations_NoStipulations_39);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_318446936"}, Stipulations_NoStipulations_39);
    all_values.push_back(Stipulations_NoStipulations_39);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteStatusReport::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_16;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_435811298"}, TargetParties_NoTargetPartyIDs_16);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_16);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{703324850}, TargetParties_NoTargetPartyIDs_16);
    all_values.push_back(TargetParties_NoTargetPartyIDs_16);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteStatusReport::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_17;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_1391317004"}, TargetParties_NoTargetPartyIDs_17);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'3'}, TargetParties_NoTargetPartyIDs_17);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{353523668}, TargetParties_NoTargetPartyIDs_17);
    all_values.push_back(TargetParties_NoTargetPartyIDs_17);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::QuoteStatusReport::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_106;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1985320281"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1585698351}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1257837147"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1002563963}, UnderlyingInstrument_106);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_106;
    UnderlyingAdjustedQuantity_106.setString("10263693");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_106, UnderlyingInstrument_106);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_106;
    UnderlyingAllocationPercent_106.setString("48.980000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_106, UnderlyingInstrument_106);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_106;
    UnderlyingAttachmentPoint_106.setString("38.770000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_624708775"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_95045965"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_225629815"}, UnderlyingInstrument_106);
    FIX::UnderlyingCapValue UnderlyingCapValue_106;
    UnderlyingCapValue_106.setString("6521146");
set_field(noUnderlyings_0_0, UnderlyingCapValue_106, UnderlyingInstrument_106);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_106;
    UnderlyingCashAmount_106.setString("17081688");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_106);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_106;
    UnderlyingContractMultiplier_106.setString("6417914");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{939297434}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_98707677"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1991603658"}, UnderlyingInstrument_106);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_106;
    UnderlyingCouponRate_106.setString("58.500000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1000848184"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_106);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_106;
    UnderlyingCurrentValue_106.setString("13251345");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_106, UnderlyingInstrument_106);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_106;
    UnderlyingDetachmentPoint_106.setString("1.140000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_106, UnderlyingInstrument_106);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_106;
    UnderlyingDirtyPrice_106.setString("17786203");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_106, UnderlyingInstrument_106);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_106;
    UnderlyingEndPrice_106.setString("17609458");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_106, UnderlyingInstrument_106);
    FIX::UnderlyingEndValue UnderlyingEndValue_106;
    UnderlyingEndValue_106.setString("16465705");
set_field(noUnderlyings_0_0, UnderlyingEndValue_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{334461533}, UnderlyingInstrument_106);
    FIX::UnderlyingFXRate UnderlyingFXRate_106;
    UnderlyingFXRate_106.setString("10047791");
set_field(noUnderlyings_0_0, UnderlyingFXRate_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_106);
    FIX::UnderlyingFactor UnderlyingFactor_106;
    UnderlyingFactor_106.setString("6879852");
set_field(noUnderlyings_0_0, UnderlyingFactor_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1202258881}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1832592237"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_126199905"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_312612380"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_687672552"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1152569217"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1691367278"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_192932781"}, UnderlyingInstrument_106);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_106;
    UnderlyingNotionalPercentageOutstanding_106.setString("79.920000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_106);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_106;
    UnderlyingOriginalNotionalPercentageOutstanding_106.setString("25.960000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_281909038"}, UnderlyingInstrument_106);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_106;
    UnderlyingPriceUnitOfMeasureQty_106.setString("13470984");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{58943111}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{923700506}, UnderlyingInstrument_106);
    FIX::UnderlyingPx UnderlyingPx_106;
    UnderlyingPx_106.setString("1389122");
set_field(noUnderlyings_0_0, UnderlyingPx_106, UnderlyingInstrument_106);
    FIX::UnderlyingQty UnderlyingQty_106;
    UnderlyingQty_106.setString("1576507");
set_field(noUnderlyings_0_0, UnderlyingQty_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_767820516"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_858048126"}, UnderlyingInstrument_106);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_106;
    UnderlyingRepurchaseRate_106.setString("89.730000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{776813694}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_175821143"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_336149857"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1104253808"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1954441474"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_2097095686"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_603340726"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_141419359"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_954391224"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_450612682"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_106);
    FIX::UnderlyingStartValue UnderlyingStartValue_106;
    UnderlyingStartValue_106.setString("91664");
set_field(noUnderlyings_0_0, UnderlyingStartValue_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_135721271"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_106);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_106;
    UnderlyingStrikePrice_106.setString("8233938");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_106, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_2108173682"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_2013146115"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1016326604"}, UnderlyingInstrument_106);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1737968026"}, UnderlyingInstrument_106);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_106;
    UnderlyingUnitOfMeasureQty_106.setString("16520757");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_106, UnderlyingInstrument_106);
    all_values.push_back(UnderlyingInstrument_106);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_225;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_2019877065"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_225);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_851690553"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_225);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_225);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_216;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_796093923"}, UnderlyingStipulations_NoUnderlyingStips_216);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_990602829"}, UnderlyingStipulations_NoUnderlyingStips_216);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_216);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_219;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1563914439"}, UndlyInstrumentParties_NoUndlyInstrumentParties_219);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_219);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{662498426}, UndlyInstrumentParties_NoUndlyInstrumentParties_219);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_219);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2024472098"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{998648283}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_435);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteStatusReport::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1297498293"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1831429924}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_436);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_20;
  FIX::Yield Yield_20;
  Yield_20.setString("3.220000");
set_field(msg, Yield_20, YieldData_20);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1900839020"}, YieldData_20);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1972849283"}, YieldData_20);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_20;
  YieldRedemptionPrice_20.setString("19026515");
set_field(msg, YieldRedemptionPrice_20, YieldData_20);
  set_field(msg, FIX::YieldRedemptionPriceType{203968054}, YieldData_20);
  set_field(msg, FIX::YieldType{"STRING_TRUE"}, YieldData_20);
  all_values.push_back(YieldData_20);
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
