#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NewOrderMultileg.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderMultileg, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::NewOrderMultileg msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderMultileg_0;
  set_field(msg, FIX::Account{"STRING_277935546"}, NewOrderMultileg_0);
  set_field(msg, FIX::AccountType{6}, NewOrderMultileg_0);
  set_field(msg, FIX::AcctIDSource{4}, NewOrderMultileg_0);
  set_field(msg, FIX::AllocID{"STRING_630723149"}, NewOrderMultileg_0);
  set_field(msg, FIX::BookingType{2}, NewOrderMultileg_0);
  set_field(msg, FIX::BookingUnit{'1'}, NewOrderMultileg_0);
  set_field(msg, FIX::CancellationRights{'M'}, NewOrderMultileg_0);
  set_field(msg, FIX::CashMargin{'1'}, NewOrderMultileg_0);
  set_field(msg, FIX::ClOrdID{"STRING_1107720921"}, NewOrderMultileg_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_1905345512"}, NewOrderMultileg_0);
  set_field(msg, FIX::ClearingFeeIndicator{"STRING_C"}, NewOrderMultileg_0);
  set_field(msg, FIX::ComplianceID{"STRING_811261831"}, NewOrderMultileg_0);
  set_field(msg, FIX::CoveredOrUncovered{1}, NewOrderMultileg_0);
  set_field(msg, FIX::Currency{"EUR"}, NewOrderMultileg_0);
  set_field(msg, FIX::CustOrderCapacity{2}, NewOrderMultileg_0);
  set_field(msg, FIX::DayBookingInst{'0'}, NewOrderMultileg_0);
  set_field(msg, FIX::Designation{"STRING_1146783397"}, NewOrderMultileg_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(4, 8, 56, 3, 8, 2010)}, NewOrderMultileg_0);
  set_field(msg, FIX::EncodedText{"DATA_342961552"}, NewOrderMultileg_0);
  set_field(msg, FIX::EncodedTextLen{1640583399}, NewOrderMultileg_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_11231998"}, NewOrderMultileg_0);
  set_field(msg, FIX::ExDestinationIDSource{'C'}, NewOrderMultileg_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_D"}, NewOrderMultileg_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_7292880"}, NewOrderMultileg_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(19, 21, 43, 21, 5, 2002)}, NewOrderMultileg_0);
  set_field(msg, FIX::ForexReq{false}, NewOrderMultileg_0);
  set_field(msg, FIX::GTBookingInst{0}, NewOrderMultileg_0);
  set_field(msg, FIX::HandlInst{'3'}, NewOrderMultileg_0);
  set_field(msg, FIX::IOIID{"STRING_581022100"}, NewOrderMultileg_0);
  set_field(msg, FIX::LocateReqd{false}, NewOrderMultileg_0);
  FIX::MatchIncrement MatchIncrement_6;
  MatchIncrement_6.setString("12615170");
set_field(msg, MatchIncrement_6, NewOrderMultileg_0);
  FIX::MaxFloor MaxFloor_6;
  MaxFloor_6.setString("1876709");
set_field(msg, MaxFloor_6, NewOrderMultileg_0);
  set_field(msg, FIX::MaxPriceLevels{465280741}, NewOrderMultileg_0);
  FIX::MaxShow MaxShow_6;
  MaxShow_6.setString("21449581");
set_field(msg, MaxShow_6, NewOrderMultileg_0);
  FIX::MinQty MinQty_12;
  MinQty_12.setString("1618110");
set_field(msg, MinQty_12, NewOrderMultileg_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'2'}, NewOrderMultileg_0);
  set_field(msg, FIX::MultiLegRptTypeReq{2}, NewOrderMultileg_0);
  set_field(msg, FIX::MultilegModel{1}, NewOrderMultileg_0);
  set_field(msg, FIX::MultilegPriceMethod{4}, NewOrderMultileg_0);
  set_field(msg, FIX::OrdType{'9'}, NewOrderMultileg_0);
  set_field(msg, FIX::OrderCapacity{'G'}, NewOrderMultileg_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_7"}, NewOrderMultileg_0);
  FIX::ParticipationRate ParticipationRate_6;
  ParticipationRate_6.setString("68.600000");
set_field(msg, ParticipationRate_6, NewOrderMultileg_0);
  set_field(msg, FIX::PositionEffect{'D'}, NewOrderMultileg_0);
  set_field(msg, FIX::PreTradeAnonymity{true}, NewOrderMultileg_0);
  set_field(msg, FIX::PreallocMethod{'0'}, NewOrderMultileg_0);
  FIX::PrevClosePx PrevClosePx_6;
  PrevClosePx_6.setString("20968483");
set_field(msg, PrevClosePx_6, NewOrderMultileg_0);
  FIX::Price Price_16;
  Price_16.setString("4794000");
set_field(msg, Price_16, NewOrderMultileg_0);
  set_field(msg, FIX::PriceProtectionScope{'2'}, NewOrderMultileg_0);
  set_field(msg, FIX::PriceType{1}, NewOrderMultileg_0);
  set_field(msg, FIX::ProcessCode{'2'}, NewOrderMultileg_0);
  set_field(msg, FIX::QtyType{2}, NewOrderMultileg_0);
  set_field(msg, FIX::QuoteID{"STRING_1635122144"}, NewOrderMultileg_0);
  set_field(msg, FIX::RefOrderID{"STRING_1403636286"}, NewOrderMultileg_0);
  set_field(msg, FIX::RefOrderIDSource{'4'}, NewOrderMultileg_0);
  set_field(msg, FIX::RegistID{"STRING_111470546"}, NewOrderMultileg_0);
  FIX::RiskFreeRate RiskFreeRate_2;
  RiskFreeRate_2.setString("13131095");
set_field(msg, RiskFreeRate_2, NewOrderMultileg_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_14886002"}, NewOrderMultileg_0);
  set_field(msg, FIX::SettlCurrency{"CHF"}, NewOrderMultileg_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1089614139"}, NewOrderMultileg_0);
  set_field(msg, FIX::SettlType{"STRING_2"}, NewOrderMultileg_0);
  set_field(msg, FIX::Side{'A'}, NewOrderMultileg_0);
  set_field(msg, FIX::SolicitedFlag{true}, NewOrderMultileg_0);
  FIX::StopPx StopPx_6;
  StopPx_6.setString("17521559");
set_field(msg, StopPx_6, NewOrderMultileg_0);
  FIX::SwapPoints SwapPoints_1;
  SwapPoints_1.setString("961299");
set_field(msg, SwapPoints_1, NewOrderMultileg_0);
  set_field(msg, FIX::TargetStrategy{2}, NewOrderMultileg_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_98227712"}, NewOrderMultileg_0);
  set_field(msg, FIX::Text{"STRING_668228048"}, NewOrderMultileg_0);
  set_field(msg, FIX::TimeInForce{'8'}, NewOrderMultileg_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_404288465"}, NewOrderMultileg_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_1098791445"}, NewOrderMultileg_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(5, 15, 53, 16, 6, 2006)}, NewOrderMultileg_0);
  all_values.push_back(NewOrderMultileg_0);

  all_compo_names.insert("NewOrderMultileg");

  // CommissionData
  multiset<string> CommissionData_21;
  set_field(msg, FIX::CommCurrency{"CHF"}, CommissionData_21);
  set_field(msg, FIX::CommType{'4'}, CommissionData_21);
  FIX::Commission Commission_21;
  Commission_21.setString("11622629");
set_field(msg, Commission_21, CommissionData_21);
  set_field(msg, FIX::FundRenewWaiv{'Y'}, CommissionData_21);
  all_values.push_back(CommissionData_21);
  all_compo_names.insert(".");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_6;
  set_field(msg, FIX::DiscretionInst{'1'}, DiscretionInstructions_6);
  set_field(msg, FIX::DiscretionLimitType{0}, DiscretionInstructions_6);
  set_field(msg, FIX::DiscretionMoveType{1}, DiscretionInstructions_6);
  set_field(msg, FIX::DiscretionOffsetType{0}, DiscretionInstructions_6);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_6;
  DiscretionOffsetValue_6.setString("9285686");
set_field(msg, DiscretionOffsetValue_6, DiscretionInstructions_6);
  set_field(msg, FIX::DiscretionRoundDirection{1}, DiscretionInstructions_6);
  set_field(msg, FIX::DiscretionScope{4}, DiscretionInstructions_6);
  all_values.push_back(DiscretionInstructions_6);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_6;
  FIX::DisplayHighQty DisplayHighQty_6;
  DisplayHighQty_6.setString("20181827");
set_field(msg, DisplayHighQty_6, DisplayInstruction_6);
  FIX::DisplayLowQty DisplayLowQty_6;
  DisplayLowQty_6.setString("9242924");
set_field(msg, DisplayLowQty_6, DisplayInstruction_6);
  set_field(msg, FIX::DisplayMethod{'2'}, DisplayInstruction_6);
  FIX::DisplayMinIncr DisplayMinIncr_6;
  DisplayMinIncr_6.setString("14255940");
set_field(msg, DisplayMinIncr_6, DisplayInstruction_6);
  FIX::DisplayQty DisplayQty_6;
  DisplayQty_6.setString("5289648");
set_field(msg, DisplayQty_6, DisplayInstruction_6);
  set_field(msg, FIX::DisplayWhen{'1'}, DisplayInstruction_6);
  FIX::RefreshQty RefreshQty_6;
  RefreshQty_6.setString("2975857");
set_field(msg, RefreshQty_6, DisplayInstruction_6);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_6;
  SecondaryDisplayQty_6.setString("6271925");
set_field(msg, SecondaryDisplayQty_6, DisplayInstruction_6);
  all_values.push_back(DisplayInstruction_6);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_51;
  FIX::AttachmentPoint AttachmentPoint_51;
  AttachmentPoint_51.setString("41.440000");
set_field(msg, AttachmentPoint_51, Instrument_51);
  set_field(msg, FIX::CFICode{"STRING_1269151559"}, Instrument_51);
  set_field(msg, FIX::CPProgram{1}, Instrument_51);
  set_field(msg, FIX::CPRegType{"STRING_1230785590"}, Instrument_51);
  FIX::CapPrice CapPrice_51;
  CapPrice_51.setString("9799044");
set_field(msg, CapPrice_51, Instrument_51);
  FIX::ContractMultiplier ContractMultiplier_51;
  ContractMultiplier_51.setString("7641226");
set_field(msg, ContractMultiplier_51, Instrument_51);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_51);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1070427654"}, Instrument_51);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1983833213"}, Instrument_51);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_629815802"}, Instrument_51);
  FIX::CouponRate CouponRate_51;
  CouponRate_51.setString("9.320000");
set_field(msg, CouponRate_51, Instrument_51);
  set_field(msg, FIX::CreditRating{"STRING_402938192"}, Instrument_51);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1854636947"}, Instrument_51);
  FIX::DetachmentPoint DetachmentPoint_51;
  DetachmentPoint_51.setString("80.550000");
set_field(msg, DetachmentPoint_51, Instrument_51);
  set_field(msg, FIX::EncodedIssuer{"DATA_1565201130"}, Instrument_51);
  set_field(msg, FIX::EncodedIssuerLen{419612941}, Instrument_51);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1278801464"}, Instrument_51);
  set_field(msg, FIX::EncodedSecurityDescLen{331400116}, Instrument_51);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_51);
  FIX::Factor Factor_51;
  Factor_51.setString("9654707");
set_field(msg, Factor_51, Instrument_51);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_51);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_51);
  FIX::FloorPrice FloorPrice_51;
  FloorPrice_51.setString("3987879");
set_field(msg, FloorPrice_51, Instrument_51);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_51);
  set_field(msg, FIX::InstrRegistry{"STRING_1337446602"}, Instrument_51);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_51);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_408778239"}, Instrument_51);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1866411425"}, Instrument_51);
  set_field(msg, FIX::Issuer{"STRING_1377673893"}, Instrument_51);
  set_field(msg, FIX::ListMethod{0}, Instrument_51);
  set_field(msg, FIX::LocaleOfIssue{"STRING_346120312"}, Instrument_51);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1509668037"}, Instrument_51);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1975515529"}, Instrument_51);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1377601312"}, Instrument_51);
  FIX::MinPriceIncrement MinPriceIncrement_51;
  MinPriceIncrement_51.setString("5929699");
set_field(msg, MinPriceIncrement_51, Instrument_51);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_51;
  MinPriceIncrementAmount_51.setString("8079362");
set_field(msg, MinPriceIncrementAmount_51, Instrument_51);
  set_field(msg, FIX::NTPositionLimit{2141723989}, Instrument_51);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_51;
  NotionalPercentageOutstanding_51.setString("83.160000");
set_field(msg, NotionalPercentageOutstanding_51, Instrument_51);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_51);
  FIX::OptPayoutAmount OptPayoutAmount_51;
  OptPayoutAmount_51.setString("19780735");
set_field(msg, OptPayoutAmount_51, Instrument_51);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_51);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_51;
  OriginalNotionalPercentageOutstanding_51.setString("12.200000");
set_field(msg, OriginalNotionalPercentageOutstanding_51, Instrument_51);
  set_field(msg, FIX::Pool{"STRING_233528099"}, Instrument_51);
  set_field(msg, FIX::PositionLimit{1885557418}, Instrument_51);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_51);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1798729229"}, Instrument_51);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_51;
  PriceUnitOfMeasureQty_51.setString("1576867");
set_field(msg, PriceUnitOfMeasureQty_51, Instrument_51);
  set_field(msg, FIX::Product{6}, Instrument_51);
  set_field(msg, FIX::ProductComplex{"STRING_2130129345"}, Instrument_51);
  set_field(msg, FIX::PutOrCall{1}, Instrument_51);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_78294184"}, Instrument_51);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1242614449"}, Instrument_51);
  FIX::RepurchaseRate RepurchaseRate_51;
  RepurchaseRate_51.setString("39.680000");
set_field(msg, RepurchaseRate_51, Instrument_51);
  set_field(msg, FIX::RepurchaseTerm{477082168}, Instrument_51);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_51);
  set_field(msg, FIX::SecurityDesc{"STRING_1004346922"}, Instrument_51);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_243506317"}, Instrument_51);
  set_field(msg, FIX::SecurityGroup{"STRING_634576920"}, Instrument_51);
  set_field(msg, FIX::SecurityID{"STRING_723274699"}, Instrument_51);
  set_field(msg, FIX::SecurityIDSource{"STRING_D"}, Instrument_51);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_51);
  set_field(msg, FIX::SecuritySubType{"STRING_1069395011"}, Instrument_51);
  set_field(msg, FIX::SecurityType{"STRING_PROV"}, Instrument_51);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_51);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_51);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1576334579"}, Instrument_51);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1976909052"}, Instrument_51);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_51);
  FIX::StrikeMultiplier StrikeMultiplier_51;
  StrikeMultiplier_51.setString("17077893");
set_field(msg, StrikeMultiplier_51, Instrument_51);
  FIX::StrikePrice StrikePrice_51;
  StrikePrice_51.setString("1243429");
set_field(msg, StrikePrice_51, Instrument_51);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_51);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_51;
  StrikePriceBoundaryPrecision_51.setString("69.120000");
set_field(msg, StrikePriceBoundaryPrecision_51, Instrument_51);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_51);
  FIX::StrikeValue StrikeValue_51;
  StrikeValue_51.setString("7464334");
set_field(msg, StrikeValue_51, Instrument_51);
  set_field(msg, FIX::Symbol{"STRING_913042539"}, Instrument_51);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_51);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_51);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_51);
  set_field(msg, FIX::UnitOfMeasure{"STRING_t"}, Instrument_51);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_51;
  UnitOfMeasureQty_51.setString("1578663");
set_field(msg, UnitOfMeasureQty_51, Instrument_51);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_51);
  all_values.push_back(Instrument_51);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderMultileg::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_100;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_100);
    FIX::ComplexEventPrice ComplexEventPrice_100;
    ComplexEventPrice_100.setString("5812423");
set_field(noComplexEvents_0_0, ComplexEventPrice_100, ComplexEvents_NoComplexEvents_100);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_100);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_100;
    ComplexEventPriceBoundaryPrecision_100.setString("36.330000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_100, ComplexEvents_NoComplexEvents_100);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_100);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_100);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_100;
    ComplexOptPayoutAmount_100.setString("15523883");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_100, ComplexEvents_NoComplexEvents_100);
    all_values.push_back(ComplexEvents_NoComplexEvents_100);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_198;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 56, 15, 4, 1, 2014)}, ComplexEventDates_NoComplexEventDates_198);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 0, 33, 2, 5, 2000)}, ComplexEventDates_NoComplexEventDates_198);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_198);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_399;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 6, 27)}, ComplexEventTimes_NoComplexEventTimes_399);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 15, 43)}, ComplexEventTimes_NoComplexEventTimes_399);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_399);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_199;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 53, 22, 13, 9, 2007)}, ComplexEventDates_NoComplexEventDates_199);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 3, 2, 0, 8, 2014)}, ComplexEventDates_NoComplexEventDates_199);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_199);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_400;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 8, 49)}, ComplexEventTimes_NoComplexEventTimes_400);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 17, 52)}, ComplexEventTimes_NoComplexEventTimes_400);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_400);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_401;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 58, 6)}, ComplexEventTimes_NoComplexEventTimes_401);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 13, 45)}, ComplexEventTimes_NoComplexEventTimes_401);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_401);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_200;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 31, 46, 6, 8, 2011)}, ComplexEventDates_NoComplexEventDates_200);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 49, 3, 15, 9, 2005)}, ComplexEventDates_NoComplexEventDates_200);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_200);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_402;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 3, 42)}, ComplexEventTimes_NoComplexEventTimes_402);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 52, 1)}, ComplexEventTimes_NoComplexEventTimes_402);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_402);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_403;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 51, 53)}, ComplexEventTimes_NoComplexEventTimes_403);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 7, 49)}, ComplexEventTimes_NoComplexEventTimes_403);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_403);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_101;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_101);
    FIX::ComplexEventPrice ComplexEventPrice_101;
    ComplexEventPrice_101.setString("821090");
set_field(noComplexEvents_0_1, ComplexEventPrice_101, ComplexEvents_NoComplexEvents_101);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_101);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_101;
    ComplexEventPriceBoundaryPrecision_101.setString("68.300000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_101, ComplexEvents_NoComplexEvents_101);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_101);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_101);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_101;
    ComplexOptPayoutAmount_101.setString("1489245");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_101, ComplexEvents_NoComplexEvents_101);
    all_values.push_back(ComplexEvents_NoComplexEvents_101);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_201;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 26, 10, 9, 12, 2012)}, ComplexEventDates_NoComplexEventDates_201);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 1, 17, 24, 10, 2001)}, ComplexEventDates_NoComplexEventDates_201);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_201);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_404;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 29, 41)}, ComplexEventTimes_NoComplexEventTimes_404);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 40, 48)}, ComplexEventTimes_NoComplexEventTimes_404);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_404);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_405;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 0, 11)}, ComplexEventTimes_NoComplexEventTimes_405);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 19, 2)}, ComplexEventTimes_NoComplexEventTimes_405);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_405);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_202;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 28, 5, 1, 4, 2011)}, ComplexEventDates_NoComplexEventDates_202);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 5, 49, 15, 3, 2014)}, ComplexEventDates_NoComplexEventDates_202);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_202);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_406;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 42, 35)}, ComplexEventTimes_NoComplexEventTimes_406);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 8, 23)}, ComplexEventTimes_NoComplexEventTimes_406);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_406);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_102;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_102);
    FIX::ComplexEventPrice ComplexEventPrice_102;
    ComplexEventPrice_102.setString("1606027");
set_field(noComplexEvents_0_2, ComplexEventPrice_102, ComplexEvents_NoComplexEvents_102);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_102);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_102;
    ComplexEventPriceBoundaryPrecision_102.setString("2.860000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_102, ComplexEvents_NoComplexEvents_102);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_102);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_102);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_102;
    ComplexOptPayoutAmount_102.setString("7655117");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_102, ComplexEvents_NoComplexEvents_102);
    all_values.push_back(ComplexEvents_NoComplexEvents_102);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_203;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 17, 32, 14, 10, 2005)}, ComplexEventDates_NoComplexEventDates_203);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 40, 15, 27, 11, 2015)}, ComplexEventDates_NoComplexEventDates_203);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_203);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_407;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 42, 16)}, ComplexEventTimes_NoComplexEventTimes_407);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 16, 32)}, ComplexEventTimes_NoComplexEventTimes_407);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_407);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::NewOrderMultileg::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_111;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_730751372"}, EvntGrp_NoEvents_111);
    FIX::EventPx EventPx_111;
    EventPx_111.setString("8422155");
set_field(noEvents_0_0, EventPx_111, EvntGrp_NoEvents_111);
    set_field(noEvents_0_0, FIX::EventText{"STRING_2033019914"}, EvntGrp_NoEvents_111);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(7, 31, 17, 21, 9, 2005)}, EvntGrp_NoEvents_111);
    set_field(noEvents_0_0, FIX::EventType{18}, EvntGrp_NoEvents_111);
    all_values.push_back(EvntGrp_NoEvents_111);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_112;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1907491086"}, EvntGrp_NoEvents_112);
    FIX::EventPx EventPx_112;
    EventPx_112.setString("6466399");
set_field(noEvents_0_1, EventPx_112, EvntGrp_NoEvents_112);
    set_field(noEvents_0_1, FIX::EventText{"STRING_850977525"}, EvntGrp_NoEvents_112);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(4, 25, 32, 3, 5, 2004)}, EvntGrp_NoEvents_112);
    set_field(noEvents_0_1, FIX::EventType{9}, EvntGrp_NoEvents_112);
    all_values.push_back(EvntGrp_NoEvents_112);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_113;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_506597504"}, EvntGrp_NoEvents_113);
    FIX::EventPx EventPx_113;
    EventPx_113.setString("9012640");
set_field(noEvents_0_2, EventPx_113, EvntGrp_NoEvents_113);
    set_field(noEvents_0_2, FIX::EventText{"STRING_53372982"}, EvntGrp_NoEvents_113);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(17, 47, 8, 5, 8, 2011)}, EvntGrp_NoEvents_113);
    set_field(noEvents_0_2, FIX::EventType{9}, EvntGrp_NoEvents_113);
    all_values.push_back(EvntGrp_NoEvents_113);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_98;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1076231221"}, InstrumentParties_NoInstrumentParties_98);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_98);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{352659384}, InstrumentParties_NoInstrumentParties_98);
    all_values.push_back(InstrumentParties_NoInstrumentParties_98);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_124572477"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{181196376}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_201);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_99;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1115272305"}, InstrumentParties_NoInstrumentParties_99);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_99);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{2088687463}, InstrumentParties_NoInstrumentParties_99);
    all_values.push_back(InstrumentParties_NoInstrumentParties_99);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_933122811"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{725535840}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_202);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderMultileg::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_104;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_581249229"}, SecAltIDGrp_NoSecurityAltID_104);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1444103912"}, SecAltIDGrp_NoSecurityAltID_104);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_104);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_105;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_47430269"}, SecAltIDGrp_NoSecurityAltID_105);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_749836393"}, SecAltIDGrp_NoSecurityAltID_105);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_105);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_106;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1628124054"}, SecAltIDGrp_NoSecurityAltID_106);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_930470497"}, SecAltIDGrp_NoSecurityAltID_106);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_106);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_102;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1256433897"}, SecurityXML_102);
  set_field(msg, FIX::SecurityXMLLen{381904422}, SecurityXML_102);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_983843479"}, SecurityXML_102);
  all_values.push_back(SecurityXML_102);
  all_compo_names.insert("..");

  // LegOrdGrp
  // Group LegOrdGrp.NoLegs
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_0;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_1;
    set_field(noLegs_0_0, FIX::LegAllocID{"STRING_1622766047"}, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegCoveredOrUncovered{1607492647}, LegOrdGrp_NoLegs_1);
    FIX::LegCurrencyRatio LegCurrencyRatio_3;
    LegCurrencyRatio_3.setString("1938472");
set_field(noLegs_0_0, LegCurrencyRatio_3, LegOrdGrp_NoLegs_1);
    FIX::LegDividendYield LegDividendYield_3;
    LegDividendYield_3.setString("43.080000");
set_field(noLegs_0_0, LegDividendYield_3, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegExecInst{"MULTIPLECHARVALUE_1423567794"}, LegOrdGrp_NoLegs_1);
    FIX::LegOrderQty LegOrderQty_3;
    LegOrderQty_3.setString("17521213");
set_field(noLegs_0_0, LegOrderQty_3, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegPositionEffect{'1'}, LegOrdGrp_NoLegs_1);
    FIX::LegQty LegQty_3;
    LegQty_3.setString("11251792");
set_field(noLegs_0_0, LegQty_3, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_680868924"}, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegSettlCurrency{"USD"}, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_555972455"}, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegSettlType{'1'}, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegSwapType{2}, LegOrdGrp_NoLegs_1);
    FIX::LegVolatility LegVolatility_3;
    LegVolatility_3.setString("16712447");
set_field(noLegs_0_0, LegVolatility_3, LegOrdGrp_NoLegs_1);
    all_values.push_back(LegOrdGrp_NoLegs_1);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_83;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1557978272"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1600238784}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1285673362"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{343617435}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_178290976"}, InstrumentLeg_83);
    FIX::LegContractMultiplier LegContractMultiplier_83;
    LegContractMultiplier_83.setString("6577634");
set_field(noLegs_0_0, LegContractMultiplier_83, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{924866664}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1622394888"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_705193692"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1674703057"}, InstrumentLeg_83);
    FIX::LegCouponRate LegCouponRate_83;
    LegCouponRate_83.setString("52.950000");
set_field(noLegs_0_0, LegCouponRate_83, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1635664189"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_472024021"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{149977749}, InstrumentLeg_83);
    FIX::LegFactor LegFactor_83;
    LegFactor_83.setString("9602221");
set_field(noLegs_0_0, LegFactor_83, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{2079516668}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_343824959"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1437066425"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1355600814"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_2095946311"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1610204594"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_333296374"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_629331587"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_813981455"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_83);
    FIX::LegOptionRatio LegOptionRatio_83;
    LegOptionRatio_83.setString("11853040");
set_field(noLegs_0_0, LegOptionRatio_83, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_142330792"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1322686288"}, InstrumentLeg_83);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_83;
    LegPriceUnitOfMeasureQty_83.setString("7090651");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_83, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegProduct{1700309064}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegPutOrCall{775441424}, InstrumentLeg_83);
    FIX::LegRatioQty LegRatioQty_83;
    LegRatioQty_83.setString("19947385");
set_field(noLegs_0_0, LegRatioQty_83, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_2043926500"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_953732400"}, InstrumentLeg_83);
    FIX::LegRepurchaseRate LegRepurchaseRate_83;
    LegRepurchaseRate_83.setString("82.920000");
set_field(noLegs_0_0, LegRepurchaseRate_83, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{821309516}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_428643640"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1210211985"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_348528926"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1531678935"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_698392526"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1132182233"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegSide{'8'}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1170416547"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_83);
    FIX::LegStrikePrice LegStrikePrice_83;
    LegStrikePrice_83.setString("11024495");
set_field(noLegs_0_0, LegStrikePrice_83, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1625984941"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1118939899"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_310566734"}, InstrumentLeg_83);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1574447604"}, InstrumentLeg_83);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_83;
    LegUnitOfMeasureQty_83.setString("5816608");
set_field(noLegs_0_0, LegUnitOfMeasureQty_83, InstrumentLeg_83);
    all_values.push_back(InstrumentLeg_83);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_169;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_56295544"}, LegSecAltIDGrp_NoLegSecurityAltID_169);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1395642301"}, LegSecAltIDGrp_NoLegSecurityAltID_169);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_169);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_7;
      set_field(noLegAllocs_0_1_0, FIX::LegAllocAccount{"STRING_1241599586"}, LegPreAllocGrp_NoLegAllocs_7);
      set_field(noLegAllocs_0_1_0, FIX::LegAllocAcctIDSource{"STRING_1537973093"}, LegPreAllocGrp_NoLegAllocs_7);
      FIX::LegAllocQty LegAllocQty_7;
      LegAllocQty_7.setString("16302007");
set_field(noLegAllocs_0_1_0, LegAllocQty_7, LegPreAllocGrp_NoLegAllocs_7);
      set_field(noLegAllocs_0_1_0, FIX::LegAllocSettlCurrency{"JPY"}, LegPreAllocGrp_NoLegAllocs_7);
      set_field(noLegAllocs_0_1_0, FIX::LegIndividualAllocID{"STRING_258158491"}, LegPreAllocGrp_NoLegAllocs_7);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_7);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_31;
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyID{"STRING_987241362"}, NestedParties2_NoNested2PartyIDs_31);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_31);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyRole{155454255}, NestedParties2_NoNested2PartyIDs_31);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_31);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_59;
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubID{"STRING_1640534532"}, NstdPtys2SubGrp_NoNested2PartySubIDs_59);
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubIDType{1365666240}, NstdPtys2SubGrp_NoNested2PartySubIDs_59);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_59);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_60;
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubID{"STRING_9596156"}, NstdPtys2SubGrp_NoNested2PartySubIDs_60);
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubIDType{1024729819}, NstdPtys2SubGrp_NoNested2PartySubIDs_60);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_60);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_61;
          set_field(noNested2PartySubIDs_0_0_0_3_2, FIX::Nested2PartySubID{"STRING_2064058766"}, NstdPtys2SubGrp_NoNested2PartySubIDs_61);
          set_field(noNested2PartySubIDs_0_0_0_3_2, FIX::Nested2PartySubIDType{1141778389}, NstdPtys2SubGrp_NoNested2PartySubIDs_61);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_61);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_32;
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyID{"STRING_1893864824"}, NestedParties2_NoNested2PartyIDs_32);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_32);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyRole{276454723}, NestedParties2_NoNested2PartyIDs_32);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_32);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_62;
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubID{"STRING_41957585"}, NstdPtys2SubGrp_NoNested2PartySubIDs_62);
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubIDType{1902439665}, NstdPtys2SubGrp_NoNested2PartySubIDs_62);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_62);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_63;
          set_field(noNested2PartySubIDs_0_0_1_3_1, FIX::Nested2PartySubID{"STRING_547194550"}, NstdPtys2SubGrp_NoNested2PartySubIDs_63);
          set_field(noNested2PartySubIDs_0_0_1_3_1, FIX::Nested2PartySubIDType{352524319}, NstdPtys2SubGrp_NoNested2PartySubIDs_63);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_63);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_1);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_33;
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyID{"STRING_1329403621"}, NestedParties2_NoNested2PartyIDs_33);
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_33);
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyRole{996387428}, NestedParties2_NoNested2PartyIDs_33);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_33);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_64;
          set_field(noNested2PartySubIDs_0_0_2_3_0, FIX::Nested2PartySubID{"STRING_377014049"}, NstdPtys2SubGrp_NoNested2PartySubIDs_64);
          set_field(noNested2PartySubIDs_0_0_2_3_0, FIX::Nested2PartySubIDType{1303901855}, NstdPtys2SubGrp_NoNested2PartySubIDs_64);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_64);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_65;
          set_field(noNested2PartySubIDs_0_0_2_3_1, FIX::Nested2PartySubID{"STRING_479815104"}, NstdPtys2SubGrp_NoNested2PartySubIDs_65);
          set_field(noNested2PartySubIDs_0_0_2_3_1, FIX::Nested2PartySubIDType{1914987142}, NstdPtys2SubGrp_NoNested2PartySubIDs_65);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_65);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_66;
          set_field(noNested2PartySubIDs_0_0_2_3_2, FIX::Nested2PartySubID{"STRING_786618923"}, NstdPtys2SubGrp_NoNested2PartySubIDs_66);
          set_field(noNested2PartySubIDs_0_0_2_3_2, FIX::Nested2PartySubIDType{282996197}, NstdPtys2SubGrp_NoNested2PartySubIDs_66);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_66);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_11;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_1044777414"}, LegStipulations_NoLegStipulations_11);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_2080915808"}, LegStipulations_NoLegStipulations_11);
      all_values.push_back(LegStipulations_NoLegStipulations_11);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_90;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_109184658"}, NestedParties_NoNestedPartyIDs_90);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_90);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1506610597}, NestedParties_NoNestedPartyIDs_90);
      all_values.push_back(NestedParties_NoNestedPartyIDs_90);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_190;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1454552655"}, NstdPtysSubGrp_NoNestedPartySubIDs_190);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1516206753}, NstdPtysSubGrp_NoNestedPartySubIDs_190);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_190);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_1;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_2;
    set_field(noLegs_0_1, FIX::LegAllocID{"STRING_626965361"}, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegCoveredOrUncovered{1371127773}, LegOrdGrp_NoLegs_2);
    FIX::LegCurrencyRatio LegCurrencyRatio_4;
    LegCurrencyRatio_4.setString("5105014");
set_field(noLegs_0_1, LegCurrencyRatio_4, LegOrdGrp_NoLegs_2);
    FIX::LegDividendYield LegDividendYield_4;
    LegDividendYield_4.setString("65.380000");
set_field(noLegs_0_1, LegDividendYield_4, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegExecInst{"MULTIPLECHARVALUE_310635791"}, LegOrdGrp_NoLegs_2);
    FIX::LegOrderQty LegOrderQty_4;
    LegOrderQty_4.setString("7869562");
set_field(noLegs_0_1, LegOrderQty_4, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegPositionEffect{'1'}, LegOrdGrp_NoLegs_2);
    FIX::LegQty LegQty_4;
    LegQty_4.setString("3525933");
set_field(noLegs_0_1, LegQty_4, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegRefID{"STRING_541912235"}, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegSettlCurrency{"USD"}, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegSettlDate{"LOCALMKTDATE_1871315857"}, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegSettlType{'1'}, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegSwapType{1}, LegOrdGrp_NoLegs_2);
    FIX::LegVolatility LegVolatility_4;
    LegVolatility_4.setString("11095313");
set_field(noLegs_0_1, LegVolatility_4, LegOrdGrp_NoLegs_2);
    all_values.push_back(LegOrdGrp_NoLegs_2);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_84;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1854665183"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{857923332}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1589346478"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1622168678}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1644542255"}, InstrumentLeg_84);
    FIX::LegContractMultiplier LegContractMultiplier_84;
    LegContractMultiplier_84.setString("18723426");
set_field(noLegs_0_1, LegContractMultiplier_84, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{332987034}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_541836021"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1805774836"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_31046753"}, InstrumentLeg_84);
    FIX::LegCouponRate LegCouponRate_84;
    LegCouponRate_84.setString("6.790000");
set_field(noLegs_0_1, LegCouponRate_84, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1894661251"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1201730258"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{906380455}, InstrumentLeg_84);
    FIX::LegFactor LegFactor_84;
    LegFactor_84.setString("8802215");
set_field(noLegs_0_1, LegFactor_84, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{425374383}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1416881950"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1253568121"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_736010175"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_56354521"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1055169309"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1088603552"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_598266756"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1403965048"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_84);
    FIX::LegOptionRatio LegOptionRatio_84;
    LegOptionRatio_84.setString("3220989");
set_field(noLegs_0_1, LegOptionRatio_84, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_734132534"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1347742725"}, InstrumentLeg_84);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_84;
    LegPriceUnitOfMeasureQty_84.setString("14316303");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_84, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegProduct{441314070}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegPutOrCall{58182409}, InstrumentLeg_84);
    FIX::LegRatioQty LegRatioQty_84;
    LegRatioQty_84.setString("8734931");
set_field(noLegs_0_1, LegRatioQty_84, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_2063482748"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1702724664"}, InstrumentLeg_84);
    FIX::LegRepurchaseRate LegRepurchaseRate_84;
    LegRepurchaseRate_84.setString("21.980000");
set_field(noLegs_0_1, LegRepurchaseRate_84, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{248986134}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_97077037"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_256643386"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_280032887"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_748097717"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_3820989"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1817690237"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1205551247"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_84);
    FIX::LegStrikePrice LegStrikePrice_84;
    LegStrikePrice_84.setString("16309256");
set_field(noLegs_0_1, LegStrikePrice_84, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1993468995"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_987659994"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_219452158"}, InstrumentLeg_84);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_2049823516"}, InstrumentLeg_84);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_84;
    LegUnitOfMeasureQty_84.setString("20428293");
set_field(noLegs_0_1, LegUnitOfMeasureQty_84, InstrumentLeg_84);
    all_values.push_back(InstrumentLeg_84);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_170;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_500606625"}, LegSecAltIDGrp_NoLegSecurityAltID_170);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1299310704"}, LegSecAltIDGrp_NoLegSecurityAltID_170);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_170);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_1_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_8;
      set_field(noLegAllocs_1_1_0, FIX::LegAllocAccount{"STRING_822705590"}, LegPreAllocGrp_NoLegAllocs_8);
      set_field(noLegAllocs_1_1_0, FIX::LegAllocAcctIDSource{"STRING_2033443238"}, LegPreAllocGrp_NoLegAllocs_8);
      FIX::LegAllocQty LegAllocQty_8;
      LegAllocQty_8.setString("1545523");
set_field(noLegAllocs_1_1_0, LegAllocQty_8, LegPreAllocGrp_NoLegAllocs_8);
      set_field(noLegAllocs_1_1_0, FIX::LegAllocSettlCurrency{"USD"}, LegPreAllocGrp_NoLegAllocs_8);
      set_field(noLegAllocs_1_1_0, FIX::LegIndividualAllocID{"STRING_212734796"}, LegPreAllocGrp_NoLegAllocs_8);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_8);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_34;
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyID{"STRING_243272760"}, NestedParties2_NoNested2PartyIDs_34);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_34);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyRole{1578697651}, NestedParties2_NoNested2PartyIDs_34);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_34);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_67;
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubID{"STRING_2012536498"}, NstdPtys2SubGrp_NoNested2PartySubIDs_67);
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubIDType{1835341038}, NstdPtys2SubGrp_NoNested2PartySubIDs_67);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_67);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_68;
          set_field(noNested2PartySubIDs_1_0_0_3_1, FIX::Nested2PartySubID{"STRING_772291782"}, NstdPtys2SubGrp_NoNested2PartySubIDs_68);
          set_field(noNested2PartySubIDs_1_0_0_3_1, FIX::Nested2PartySubIDType{613150567}, NstdPtys2SubGrp_NoNested2PartySubIDs_68);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_68);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_1);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_35;
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyID{"STRING_1839162027"}, NestedParties2_NoNested2PartyIDs_35);
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyIDSource{'4'}, NestedParties2_NoNested2PartyIDs_35);
        set_field(noNested2PartyIDs_1_0_2_1, FIX::Nested2PartyRole{1614504505}, NestedParties2_NoNested2PartyIDs_35);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_35);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_69;
          set_field(noNested2PartySubIDs_1_0_1_3_0, FIX::Nested2PartySubID{"STRING_1019085417"}, NstdPtys2SubGrp_NoNested2PartySubIDs_69);
          set_field(noNested2PartySubIDs_1_0_1_3_0, FIX::Nested2PartySubIDType{1348596379}, NstdPtys2SubGrp_NoNested2PartySubIDs_69);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_69);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_70;
          set_field(noNested2PartySubIDs_1_0_1_3_1, FIX::Nested2PartySubID{"STRING_380671610"}, NstdPtys2SubGrp_NoNested2PartySubIDs_70);
          set_field(noNested2PartySubIDs_1_0_1_3_1, FIX::Nested2PartySubIDType{865070764}, NstdPtys2SubGrp_NoNested2PartySubIDs_70);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_70);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_1.addGroup(noNested2PartySubIDs_1_0_1_3_1);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_36;
        set_field(noNested2PartyIDs_1_0_2_2, FIX::Nested2PartyID{"STRING_188772725"}, NestedParties2_NoNested2PartyIDs_36);
        set_field(noNested2PartyIDs_1_0_2_2, FIX::Nested2PartyIDSource{'6'}, NestedParties2_NoNested2PartyIDs_36);
        set_field(noNested2PartyIDs_1_0_2_2, FIX::Nested2PartyRole{767410633}, NestedParties2_NoNested2PartyIDs_36);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_36);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_71;
          set_field(noNested2PartySubIDs_1_0_2_3_0, FIX::Nested2PartySubID{"STRING_1908179478"}, NstdPtys2SubGrp_NoNested2PartySubIDs_71);
          set_field(noNested2PartySubIDs_1_0_2_3_0, FIX::Nested2PartySubIDType{1268017258}, NstdPtys2SubGrp_NoNested2PartySubIDs_71);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_71);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_72;
          set_field(noNested2PartySubIDs_1_0_2_3_1, FIX::Nested2PartySubID{"STRING_1383429085"}, NstdPtys2SubGrp_NoNested2PartySubIDs_72);
          set_field(noNested2PartySubIDs_1_0_2_3_1, FIX::Nested2PartySubIDType{714989140}, NstdPtys2SubGrp_NoNested2PartySubIDs_72);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_72);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_2.addGroup(noNested2PartySubIDs_1_0_2_3_1);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_2);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_12;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_1269388676"}, LegStipulations_NoLegStipulations_12);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_869541528"}, LegStipulations_NoLegStipulations_12);
      all_values.push_back(LegStipulations_NoLegStipulations_12);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_91;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1596662336"}, NestedParties_NoNestedPartyIDs_91);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_91);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1030436936}, NestedParties_NoNestedPartyIDs_91);
      all_values.push_back(NestedParties_NoNestedPartyIDs_91);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_191;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_850252137"}, NstdPtysSubGrp_NoNestedPartySubIDs_191);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{461650939}, NstdPtysSubGrp_NoNestedPartySubIDs_191);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_191);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_2;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_3;
    set_field(noLegs_0_2, FIX::LegAllocID{"STRING_184710344"}, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegCoveredOrUncovered{715304987}, LegOrdGrp_NoLegs_3);
    FIX::LegCurrencyRatio LegCurrencyRatio_5;
    LegCurrencyRatio_5.setString("1495083");
set_field(noLegs_0_2, LegCurrencyRatio_5, LegOrdGrp_NoLegs_3);
    FIX::LegDividendYield LegDividendYield_5;
    LegDividendYield_5.setString("21.260000");
set_field(noLegs_0_2, LegDividendYield_5, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegExecInst{"MULTIPLECHARVALUE_1328455554"}, LegOrdGrp_NoLegs_3);
    FIX::LegOrderQty LegOrderQty_5;
    LegOrderQty_5.setString("19886703");
set_field(noLegs_0_2, LegOrderQty_5, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegPositionEffect{'1'}, LegOrdGrp_NoLegs_3);
    FIX::LegQty LegQty_5;
    LegQty_5.setString("7954764");
set_field(noLegs_0_2, LegQty_5, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegRefID{"STRING_738416336"}, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegSettlCurrency{"USD"}, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegSettlDate{"LOCALMKTDATE_1119087946"}, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegSettlType{'1'}, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegSwapType{1}, LegOrdGrp_NoLegs_3);
    FIX::LegVolatility LegVolatility_5;
    LegVolatility_5.setString("17192117");
set_field(noLegs_0_2, LegVolatility_5, LegOrdGrp_NoLegs_3);
    all_values.push_back(LegOrdGrp_NoLegs_3);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_85;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_1903583665"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{269480249}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1479907544"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{1024117275}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_1652909335"}, InstrumentLeg_85);
    FIX::LegContractMultiplier LegContractMultiplier_85;
    LegContractMultiplier_85.setString("474130");
set_field(noLegs_0_2, LegContractMultiplier_85, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{967356475}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_774814363"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_916954564"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1017447958"}, InstrumentLeg_85);
    FIX::LegCouponRate LegCouponRate_85;
    LegCouponRate_85.setString("30.510000");
set_field(noLegs_0_2, LegCouponRate_85, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_1999230889"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegCurrency{"JPY"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_701999378"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{362052186}, InstrumentLeg_85);
    FIX::LegFactor LegFactor_85;
    LegFactor_85.setString("1011548");
set_field(noLegs_0_2, LegFactor_85, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{1417304365}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_511560515"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1058156971"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_598276271"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_352747224"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_310173821"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_1393752682"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1091163560"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_581276089"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_85);
    FIX::LegOptionRatio LegOptionRatio_85;
    LegOptionRatio_85.setString("627678");
set_field(noLegs_0_2, LegOptionRatio_85, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_1717449121"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_1575703693"}, InstrumentLeg_85);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_85;
    LegPriceUnitOfMeasureQty_85.setString("17819795");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_85, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegProduct{1473549138}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegPutOrCall{1845183942}, InstrumentLeg_85);
    FIX::LegRatioQty LegRatioQty_85;
    LegRatioQty_85.setString("11144034");
set_field(noLegs_0_2, LegRatioQty_85, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_350182765"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_1350609629"}, InstrumentLeg_85);
    FIX::LegRepurchaseRate LegRepurchaseRate_85;
    LegRepurchaseRate_85.setString("65.050000");
set_field(noLegs_0_2, LegRepurchaseRate_85, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{1317539240}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_2125423992"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_2078771069"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_187503551"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_201933396"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_1930518310"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_87904797"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegSide{'1'}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_485034040"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_85);
    FIX::LegStrikePrice LegStrikePrice_85;
    LegStrikePrice_85.setString("19023384");
set_field(noLegs_0_2, LegStrikePrice_85, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_961517499"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_1277689712"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_353131028"}, InstrumentLeg_85);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1314264723"}, InstrumentLeg_85);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_85;
    LegUnitOfMeasureQty_85.setString("15878635");
set_field(noLegs_0_2, LegUnitOfMeasureQty_85, InstrumentLeg_85);
    all_values.push_back(InstrumentLeg_85);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_171;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_257944636"}, LegSecAltIDGrp_NoLegSecurityAltID_171);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_21655974"}, LegSecAltIDGrp_NoLegSecurityAltID_171);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_171);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_172;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_989741888"}, LegSecAltIDGrp_NoLegSecurityAltID_172);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_320712494"}, LegSecAltIDGrp_NoLegSecurityAltID_172);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_172);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_2_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_9;
      set_field(noLegAllocs_2_1_0, FIX::LegAllocAccount{"STRING_417961933"}, LegPreAllocGrp_NoLegAllocs_9);
      set_field(noLegAllocs_2_1_0, FIX::LegAllocAcctIDSource{"STRING_2102692067"}, LegPreAllocGrp_NoLegAllocs_9);
      FIX::LegAllocQty LegAllocQty_9;
      LegAllocQty_9.setString("10651705");
set_field(noLegAllocs_2_1_0, LegAllocQty_9, LegPreAllocGrp_NoLegAllocs_9);
      set_field(noLegAllocs_2_1_0, FIX::LegAllocSettlCurrency{"CAN"}, LegPreAllocGrp_NoLegAllocs_9);
      set_field(noLegAllocs_2_1_0, FIX::LegIndividualAllocID{"STRING_1415353350"}, LegPreAllocGrp_NoLegAllocs_9);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_9);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_37;
        set_field(noNested2PartyIDs_2_0_2_0, FIX::Nested2PartyID{"STRING_83944744"}, NestedParties2_NoNested2PartyIDs_37);
        set_field(noNested2PartyIDs_2_0_2_0, FIX::Nested2PartyIDSource{'5'}, NestedParties2_NoNested2PartyIDs_37);
        set_field(noNested2PartyIDs_2_0_2_0, FIX::Nested2PartyRole{1444212201}, NestedParties2_NoNested2PartyIDs_37);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_37);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_73;
          set_field(noNested2PartySubIDs_2_0_0_3_0, FIX::Nested2PartySubID{"STRING_772912494"}, NstdPtys2SubGrp_NoNested2PartySubIDs_73);
          set_field(noNested2PartySubIDs_2_0_0_3_0, FIX::Nested2PartySubIDType{1646145597}, NstdPtys2SubGrp_NoNested2PartySubIDs_73);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_73);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_74;
          set_field(noNested2PartySubIDs_2_0_0_3_1, FIX::Nested2PartySubID{"STRING_1945750476"}, NstdPtys2SubGrp_NoNested2PartySubIDs_74);
          set_field(noNested2PartySubIDs_2_0_0_3_1, FIX::Nested2PartySubIDType{860817291}, NstdPtys2SubGrp_NoNested2PartySubIDs_74);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_74);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_75;
          set_field(noNested2PartySubIDs_2_0_0_3_2, FIX::Nested2PartySubID{"STRING_1764523494"}, NstdPtys2SubGrp_NoNested2PartySubIDs_75);
          set_field(noNested2PartySubIDs_2_0_0_3_2, FIX::Nested2PartySubIDType{283300869}, NstdPtys2SubGrp_NoNested2PartySubIDs_75);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_75);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_2);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_38;
        set_field(noNested2PartyIDs_2_0_2_1, FIX::Nested2PartyID{"STRING_1310774275"}, NestedParties2_NoNested2PartyIDs_38);
        set_field(noNested2PartyIDs_2_0_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_38);
        set_field(noNested2PartyIDs_2_0_2_1, FIX::Nested2PartyRole{38155626}, NestedParties2_NoNested2PartyIDs_38);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_38);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_76;
          set_field(noNested2PartySubIDs_2_0_1_3_0, FIX::Nested2PartySubID{"STRING_1114262299"}, NstdPtys2SubGrp_NoNested2PartySubIDs_76);
          set_field(noNested2PartySubIDs_2_0_1_3_0, FIX::Nested2PartySubIDType{391286655}, NstdPtys2SubGrp_NoNested2PartySubIDs_76);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_76);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_77;
          set_field(noNested2PartySubIDs_2_0_1_3_1, FIX::Nested2PartySubID{"STRING_1439072849"}, NstdPtys2SubGrp_NoNested2PartySubIDs_77);
          set_field(noNested2PartySubIDs_2_0_1_3_1, FIX::Nested2PartySubIDType{554642184}, NstdPtys2SubGrp_NoNested2PartySubIDs_77);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_77);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_78;
          set_field(noNested2PartySubIDs_2_0_1_3_2, FIX::Nested2PartySubID{"STRING_2138170366"}, NstdPtys2SubGrp_NoNested2PartySubIDs_78);
          set_field(noNested2PartySubIDs_2_0_1_3_2, FIX::Nested2PartySubIDType{1697017485}, NstdPtys2SubGrp_NoNested2PartySubIDs_78);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_78);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_2);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_39;
        set_field(noNested2PartyIDs_2_0_2_2, FIX::Nested2PartyID{"STRING_576298159"}, NestedParties2_NoNested2PartyIDs_39);
        set_field(noNested2PartyIDs_2_0_2_2, FIX::Nested2PartyIDSource{'9'}, NestedParties2_NoNested2PartyIDs_39);
        set_field(noNested2PartyIDs_2_0_2_2, FIX::Nested2PartyRole{2017729980}, NestedParties2_NoNested2PartyIDs_39);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_39);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_79;
          set_field(noNested2PartySubIDs_2_0_2_3_0, FIX::Nested2PartySubID{"STRING_1398390539"}, NstdPtys2SubGrp_NoNested2PartySubIDs_79);
          set_field(noNested2PartySubIDs_2_0_2_3_0, FIX::Nested2PartySubIDType{1972938399}, NstdPtys2SubGrp_NoNested2PartySubIDs_79);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_79);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_2.addGroup(noNested2PartySubIDs_2_0_2_3_0);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_2);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_2_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_10;
      set_field(noLegAllocs_2_1_1, FIX::LegAllocAccount{"STRING_1233090192"}, LegPreAllocGrp_NoLegAllocs_10);
      set_field(noLegAllocs_2_1_1, FIX::LegAllocAcctIDSource{"STRING_1514052766"}, LegPreAllocGrp_NoLegAllocs_10);
      FIX::LegAllocQty LegAllocQty_10;
      LegAllocQty_10.setString("8950666");
set_field(noLegAllocs_2_1_1, LegAllocQty_10, LegPreAllocGrp_NoLegAllocs_10);
      set_field(noLegAllocs_2_1_1, FIX::LegAllocSettlCurrency{"EUR"}, LegPreAllocGrp_NoLegAllocs_10);
      set_field(noLegAllocs_2_1_1, FIX::LegIndividualAllocID{"STRING_979011383"}, LegPreAllocGrp_NoLegAllocs_10);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_10);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_40;
        set_field(noNested2PartyIDs_2_1_2_0, FIX::Nested2PartyID{"STRING_129569529"}, NestedParties2_NoNested2PartyIDs_40);
        set_field(noNested2PartyIDs_2_1_2_0, FIX::Nested2PartyIDSource{'9'}, NestedParties2_NoNested2PartyIDs_40);
        set_field(noNested2PartyIDs_2_1_2_0, FIX::Nested2PartyRole{1859281331}, NestedParties2_NoNested2PartyIDs_40);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_40);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_80;
          set_field(noNested2PartySubIDs_2_1_0_3_0, FIX::Nested2PartySubID{"STRING_792510377"}, NstdPtys2SubGrp_NoNested2PartySubIDs_80);
          set_field(noNested2PartySubIDs_2_1_0_3_0, FIX::Nested2PartySubIDType{572614975}, NstdPtys2SubGrp_NoNested2PartySubIDs_80);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_80);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_0);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_41;
        set_field(noNested2PartyIDs_2_1_2_1, FIX::Nested2PartyID{"STRING_1392754972"}, NestedParties2_NoNested2PartyIDs_41);
        set_field(noNested2PartyIDs_2_1_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_41);
        set_field(noNested2PartyIDs_2_1_2_1, FIX::Nested2PartyRole{1883389250}, NestedParties2_NoNested2PartyIDs_41);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_41);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_81;
          set_field(noNested2PartySubIDs_2_1_1_3_0, FIX::Nested2PartySubID{"STRING_1113966873"}, NstdPtys2SubGrp_NoNested2PartySubIDs_81);
          set_field(noNested2PartySubIDs_2_1_1_3_0, FIX::Nested2PartySubIDType{2008197376}, NstdPtys2SubGrp_NoNested2PartySubIDs_81);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_81);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_1.addGroup(noNested2PartySubIDs_2_1_1_3_0);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_42;
        set_field(noNested2PartyIDs_2_1_2_2, FIX::Nested2PartyID{"STRING_196106210"}, NestedParties2_NoNested2PartyIDs_42);
        set_field(noNested2PartyIDs_2_1_2_2, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_42);
        set_field(noNested2PartyIDs_2_1_2_2, FIX::Nested2PartyRole{1299786577}, NestedParties2_NoNested2PartyIDs_42);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_42);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_82;
          set_field(noNested2PartySubIDs_2_1_2_3_0, FIX::Nested2PartySubID{"STRING_1495940246"}, NstdPtys2SubGrp_NoNested2PartySubIDs_82);
          set_field(noNested2PartySubIDs_2_1_2_3_0, FIX::Nested2PartySubIDType{849320415}, NstdPtys2SubGrp_NoNested2PartySubIDs_82);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_82);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_2.addGroup(noNested2PartySubIDs_2_1_2_3_0);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_2);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_13;
      set_field(noLegStipulations_2_1_0, FIX::LegStipulationType{"STRING_328885204"}, LegStipulations_NoLegStipulations_13);
      set_field(noLegStipulations_2_1_0, FIX::LegStipulationValue{"STRING_719566747"}, LegStipulations_NoLegStipulations_13);
      all_values.push_back(LegStipulations_NoLegStipulations_13);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_2_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_14;
      set_field(noLegStipulations_2_1_1, FIX::LegStipulationType{"STRING_1494966160"}, LegStipulations_NoLegStipulations_14);
      set_field(noLegStipulations_2_1_1, FIX::LegStipulationValue{"STRING_1727275743"}, LegStipulations_NoLegStipulations_14);
      all_values.push_back(LegStipulations_NoLegStipulations_14);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_1);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_92;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_580572704"}, NestedParties_NoNestedPartyIDs_92);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_92);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{1440088136}, NestedParties_NoNestedPartyIDs_92);
      all_values.push_back(NestedParties_NoNestedPartyIDs_92);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_192;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_1926685837"}, NstdPtysSubGrp_NoNestedPartySubIDs_192);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{271615871}, NstdPtysSubGrp_NoNestedPartySubIDs_192);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_192);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_193;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_20417788"}, NstdPtysSubGrp_NoNestedPartySubIDs_193);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{2056255366}, NstdPtysSubGrp_NoNestedPartySubIDs_193);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_193);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_93;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_1265859420"}, NestedParties_NoNestedPartyIDs_93);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_93);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{1684486844}, NestedParties_NoNestedPartyIDs_93);
      all_values.push_back(NestedParties_NoNestedPartyIDs_93);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_194;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_304830447"}, NstdPtysSubGrp_NoNestedPartySubIDs_194);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{929758169}, NstdPtysSubGrp_NoNestedPartySubIDs_194);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_194);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_94;
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyID{"STRING_986697396"}, NestedParties_NoNestedPartyIDs_94);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_94);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyRole{11602080}, NestedParties_NoNestedPartyIDs_94);
      all_values.push_back(NestedParties_NoNestedPartyIDs_94);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_195;
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubID{"STRING_2048933425"}, NstdPtysSubGrp_NoNestedPartySubIDs_195);
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubIDType{207708291}, NstdPtysSubGrp_NoNestedPartySubIDs_195);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_195);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_16;
  FIX::CashOrderQty CashOrderQty_16;
  CashOrderQty_16.setString("14584341");
set_field(msg, CashOrderQty_16, OrderQtyData_16);
  FIX::OrderPercent OrderPercent_16;
  OrderPercent_16.setString("63.540000");
set_field(msg, OrderPercent_16, OrderQtyData_16);
  FIX::OrderQty OrderQty_25;
  OrderQty_25.setString("9584566");
set_field(msg, OrderQty_25, OrderQtyData_16);
  set_field(msg, FIX::RoundingDirection{'1'}, OrderQtyData_16);
  FIX::RoundingModulus RoundingModulus_16;
  RoundingModulus_16.setString("20505567");
set_field(msg, RoundingModulus_16, OrderQtyData_16);
  all_values.push_back(OrderQtyData_16);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_86;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1135775951"}, Parties_NoPartyIDs_86);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_86);
    set_field(noPartyIDs_0_0, FIX::PartyRole{50}, Parties_NoPartyIDs_86);
    all_values.push_back(Parties_NoPartyIDs_86);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_169;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1167661366"}, PtysSubGrp_NoPartySubIDs_169);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_169);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_169);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_87;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1809412908"}, Parties_NoPartyIDs_87);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_87);
    set_field(noPartyIDs_0_1, FIX::PartyRole{82}, Parties_NoPartyIDs_87);
    all_values.push_back(Parties_NoPartyIDs_87);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_170;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_731881726"}, PtysSubGrp_NoPartySubIDs_170);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_170);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_170);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_171;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1497386815"}, PtysSubGrp_NoPartySubIDs_171);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{18}, PtysSubGrp_NoPartySubIDs_171);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_171);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_172;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_900240668"}, PtysSubGrp_NoPartySubIDs_172);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_172);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_172);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_88;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_1908627297"}, Parties_NoPartyIDs_88);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_88);
    set_field(noPartyIDs_0_2, FIX::PartyRole{38}, Parties_NoPartyIDs_88);
    all_values.push_back(Parties_NoPartyIDs_88);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_173;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1245807164"}, PtysSubGrp_NoPartySubIDs_173);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_173);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_173);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_174;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_701021667"}, PtysSubGrp_NoPartySubIDs_174);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_174);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_174);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PegInstructions
  multiset<string> PegInstructions_6;
  set_field(msg, FIX::PegLimitType{2}, PegInstructions_6);
  set_field(msg, FIX::PegMoveType{0}, PegInstructions_6);
  set_field(msg, FIX::PegOffsetType{0}, PegInstructions_6);
  FIX::PegOffsetValue PegOffsetValue_6;
  PegOffsetValue_6.setString("9944315");
set_field(msg, PegOffsetValue_6, PegInstructions_6);
  set_field(msg, FIX::PegPriceType{5}, PegInstructions_6);
  set_field(msg, FIX::PegRoundDirection{2}, PegInstructions_6);
  set_field(msg, FIX::PegScope{3}, PegInstructions_6);
  set_field(msg, FIX::PegSecurityDesc{"STRING_1954638867"}, PegInstructions_6);
  set_field(msg, FIX::PegSecurityID{"STRING_726722638"}, PegInstructions_6);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_617953286"}, PegInstructions_6);
  set_field(msg, FIX::PegSymbol{"STRING_522723266"}, PegInstructions_6);
  all_values.push_back(PegInstructions_6);
  all_compo_names.insert(".");

  // PreAllocMlegGrp
  // Group PreAllocMlegGrp.NoAllocs
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_0;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_3;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_684028095"}, PreAllocMlegGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{184652526}, PreAllocMlegGrp_NoAllocs_3);
    FIX::AllocQty AllocQty_39;
    AllocQty_39.setString("2071662");
set_field(noAllocs_0_0, AllocQty_39, PreAllocMlegGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"CAN"}, PreAllocMlegGrp_NoAllocs_3);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_939047938"}, PreAllocMlegGrp_NoAllocs_3);
    all_values.push_back(PreAllocMlegGrp_NoAllocs_3);
    all_compo_names.insert("...NoAllocs");

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_8;
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyID{"STRING_1123170790"}, NestedParties3_NoNested3PartyIDs_8);
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyIDSource{'7'}, NestedParties3_NoNested3PartyIDs_8);
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyRole{1752417720}, NestedParties3_NoNested3PartyIDs_8);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_8);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_18;
        set_field(noNested3PartySubIDs_0_0_2_0, FIX::Nested3PartySubID{"STRING_550449086"}, NstdPtys3SubGrp_NoNested3PartySubIDs_18);
        set_field(noNested3PartySubIDs_0_0_2_0, FIX::Nested3PartySubIDType{810005188}, NstdPtys3SubGrp_NoNested3PartySubIDs_18);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_18);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_9;
      set_field(noNested3PartyIDs_0_1_1, FIX::Nested3PartyID{"STRING_1974225334"}, NestedParties3_NoNested3PartyIDs_9);
      set_field(noNested3PartyIDs_0_1_1, FIX::Nested3PartyIDSource{'1'}, NestedParties3_NoNested3PartyIDs_9);
      set_field(noNested3PartyIDs_0_1_1, FIX::Nested3PartyRole{2055812352}, NestedParties3_NoNested3PartyIDs_9);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_9);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_19;
        set_field(noNested3PartySubIDs_0_1_2_0, FIX::Nested3PartySubID{"STRING_1999311798"}, NstdPtys3SubGrp_NoNested3PartySubIDs_19);
        set_field(noNested3PartySubIDs_0_1_2_0, FIX::Nested3PartySubIDType{1055585646}, NstdPtys3SubGrp_NoNested3PartySubIDs_19);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_19);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_1;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_4;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_1838466851"}, PreAllocMlegGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{2011283967}, PreAllocMlegGrp_NoAllocs_4);
    FIX::AllocQty AllocQty_40;
    AllocQty_40.setString("12565952");
set_field(noAllocs_0_1, AllocQty_40, PreAllocMlegGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::AllocSettlCurrency{"CAN"}, PreAllocMlegGrp_NoAllocs_4);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_1360678063"}, PreAllocMlegGrp_NoAllocs_4);
    all_values.push_back(PreAllocMlegGrp_NoAllocs_4);
    all_compo_names.insert("...NoAllocs");

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_10;
      set_field(noNested3PartyIDs_1_1_0, FIX::Nested3PartyID{"STRING_489818454"}, NestedParties3_NoNested3PartyIDs_10);
      set_field(noNested3PartyIDs_1_1_0, FIX::Nested3PartyIDSource{'2'}, NestedParties3_NoNested3PartyIDs_10);
      set_field(noNested3PartyIDs_1_1_0, FIX::Nested3PartyRole{288335613}, NestedParties3_NoNested3PartyIDs_10);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_10);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_20;
        set_field(noNested3PartySubIDs_1_0_2_0, FIX::Nested3PartySubID{"STRING_1834301058"}, NstdPtys3SubGrp_NoNested3PartySubIDs_20);
        set_field(noNested3PartySubIDs_1_0_2_0, FIX::Nested3PartySubIDType{972363709}, NstdPtys3SubGrp_NoNested3PartySubIDs_20);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_20);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_21;
        set_field(noNested3PartySubIDs_1_0_2_1, FIX::Nested3PartySubID{"STRING_1197194246"}, NstdPtys3SubGrp_NoNested3PartySubIDs_21);
        set_field(noNested3PartySubIDs_1_0_2_1, FIX::Nested3PartySubIDType{2041467269}, NstdPtys3SubGrp_NoNested3PartySubIDs_21);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_21);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_22;
        set_field(noNested3PartySubIDs_1_0_2_2, FIX::Nested3PartySubID{"STRING_656515564"}, NstdPtys3SubGrp_NoNested3PartySubIDs_22);
        set_field(noNested3PartySubIDs_1_0_2_2, FIX::Nested3PartySubIDType{822978221}, NstdPtys3SubGrp_NoNested3PartySubIDs_22);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_22);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_0);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_2;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_5;
    set_field(noAllocs_0_2, FIX::AllocAccount{"STRING_833031559"}, PreAllocMlegGrp_NoAllocs_5);
    set_field(noAllocs_0_2, FIX::AllocAcctIDSource{1508692616}, PreAllocMlegGrp_NoAllocs_5);
    FIX::AllocQty AllocQty_41;
    AllocQty_41.setString("19461490");
set_field(noAllocs_0_2, AllocQty_41, PreAllocMlegGrp_NoAllocs_5);
    set_field(noAllocs_0_2, FIX::AllocSettlCurrency{"EUR"}, PreAllocMlegGrp_NoAllocs_5);
    set_field(noAllocs_0_2, FIX::IndividualAllocID{"STRING_1956226165"}, PreAllocMlegGrp_NoAllocs_5);
    all_values.push_back(PreAllocMlegGrp_NoAllocs_5);
    all_compo_names.insert("...NoAllocs");

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_2_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_11;
      set_field(noNested3PartyIDs_2_1_0, FIX::Nested3PartyID{"STRING_1923631877"}, NestedParties3_NoNested3PartyIDs_11);
      set_field(noNested3PartyIDs_2_1_0, FIX::Nested3PartyIDSource{'1'}, NestedParties3_NoNested3PartyIDs_11);
      set_field(noNested3PartyIDs_2_1_0, FIX::Nested3PartyRole{1323592566}, NestedParties3_NoNested3PartyIDs_11);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_11);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_23;
        set_field(noNested3PartySubIDs_2_0_2_0, FIX::Nested3PartySubID{"STRING_1437976150"}, NstdPtys3SubGrp_NoNested3PartySubIDs_23);
        set_field(noNested3PartySubIDs_2_0_2_0, FIX::Nested3PartySubIDType{1175420716}, NstdPtys3SubGrp_NoNested3PartySubIDs_23);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_23);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_0.addGroup(noNested3PartySubIDs_2_0_2_0);
      }
      noAllocs_0_2.addGroup(noNested3PartyIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_2_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_12;
      set_field(noNested3PartyIDs_2_1_1, FIX::Nested3PartyID{"STRING_740062579"}, NestedParties3_NoNested3PartyIDs_12);
      set_field(noNested3PartyIDs_2_1_1, FIX::Nested3PartyIDSource{'1'}, NestedParties3_NoNested3PartyIDs_12);
      set_field(noNested3PartyIDs_2_1_1, FIX::Nested3PartyRole{1039221035}, NestedParties3_NoNested3PartyIDs_12);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_12);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_24;
        set_field(noNested3PartySubIDs_2_1_2_0, FIX::Nested3PartySubID{"STRING_1814374146"}, NstdPtys3SubGrp_NoNested3PartySubIDs_24);
        set_field(noNested3PartySubIDs_2_1_2_0, FIX::Nested3PartySubIDType{1721884270}, NstdPtys3SubGrp_NoNested3PartySubIDs_24);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_24);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_1.addGroup(noNested3PartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_25;
        set_field(noNested3PartySubIDs_2_1_2_1, FIX::Nested3PartySubID{"STRING_1209852289"}, NstdPtys3SubGrp_NoNested3PartySubIDs_25);
        set_field(noNested3PartySubIDs_2_1_2_1, FIX::Nested3PartySubIDType{1484756473}, NstdPtys3SubGrp_NoNested3PartySubIDs_25);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_25);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_1.addGroup(noNested3PartySubIDs_2_1_2_1);
      }
      noAllocs_0_2.addGroup(noNested3PartyIDs_2_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_2_1_2;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_13;
      set_field(noNested3PartyIDs_2_1_2, FIX::Nested3PartyID{"STRING_64219077"}, NestedParties3_NoNested3PartyIDs_13);
      set_field(noNested3PartyIDs_2_1_2, FIX::Nested3PartyIDSource{'1'}, NestedParties3_NoNested3PartyIDs_13);
      set_field(noNested3PartyIDs_2_1_2, FIX::Nested3PartyRole{1773092086}, NestedParties3_NoNested3PartyIDs_13);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_13);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_2_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_26;
        set_field(noNested3PartySubIDs_2_2_2_0, FIX::Nested3PartySubID{"STRING_836586752"}, NstdPtys3SubGrp_NoNested3PartySubIDs_26);
        set_field(noNested3PartySubIDs_2_2_2_0, FIX::Nested3PartySubIDType{597972147}, NstdPtys3SubGrp_NoNested3PartySubIDs_26);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_26);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_2.addGroup(noNested3PartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_2_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_27;
        set_field(noNested3PartySubIDs_2_2_2_1, FIX::Nested3PartySubID{"STRING_126471396"}, NstdPtys3SubGrp_NoNested3PartySubIDs_27);
        set_field(noNested3PartySubIDs_2_2_2_1, FIX::Nested3PartySubIDType{730570374}, NstdPtys3SubGrp_NoNested3PartySubIDs_27);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_27);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_2.addGroup(noNested3PartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_2_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_28;
        set_field(noNested3PartySubIDs_2_2_2_2, FIX::Nested3PartySubID{"STRING_1254487712"}, NstdPtys3SubGrp_NoNested3PartySubIDs_28);
        set_field(noNested3PartySubIDs_2_2_2_2, FIX::Nested3PartySubIDType{949449617}, NstdPtys3SubGrp_NoNested3PartySubIDs_28);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_28);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_2.addGroup(noNested3PartySubIDs_2_2_2_2);
      }
      noAllocs_0_2.addGroup(noNested3PartyIDs_2_1_2);
    }
    msg.addGroup(noAllocs_0_2);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderMultileg::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_11;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_615696680"}, StrategyParametersGrp_NoStrategyParameters_11);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{10}, StrategyParametersGrp_NoStrategyParameters_11);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_1038455282"}, StrategyParametersGrp_NoStrategyParameters_11);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_11);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_12;
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterName{"STRING_1729323369"}, StrategyParametersGrp_NoStrategyParameters_12);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterType{21}, StrategyParametersGrp_NoStrategyParameters_12);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterValue{"STRING_1063757716"}, StrategyParametersGrp_NoStrategyParameters_12);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_12);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderMultileg::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_12;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_12);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_1"}, TrdgSesGrp_NoTradingSessions_12);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_12);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_6;
  set_field(msg, FIX::TriggerAction{'3'}, TriggeringInstruction_6);
  FIX::TriggerNewPrice TriggerNewPrice_6;
  TriggerNewPrice_6.setString("16303178");
set_field(msg, TriggerNewPrice_6, TriggeringInstruction_6);
  FIX::TriggerNewQty TriggerNewQty_6;
  TriggerNewQty_6.setString("14152873");
set_field(msg, TriggerNewQty_6, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerOrderType{'2'}, TriggeringInstruction_6);
  FIX::TriggerPrice TriggerPrice_6;
  TriggerPrice_6.setString("6117935");
set_field(msg, TriggerPrice_6, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerPriceDirection{'U'}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerPriceType{'4'}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerPriceTypeScope{'2'}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_2028909009"}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerSecurityID{"STRING_841553978"}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_1763440527"}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerSymbol{"STRING_2093128086"}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_1991323320"}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_1389048965"}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerType{'4'}, TriggeringInstruction_6);
  all_values.push_back(TriggeringInstruction_6);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderMultileg::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_69;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1987021113"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1148876631}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1410996799"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1094025177}, UnderlyingInstrument_69);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_69;
    UnderlyingAdjustedQuantity_69.setString("20983262");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_69, UnderlyingInstrument_69);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_69;
    UnderlyingAllocationPercent_69.setString("50.840000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_69, UnderlyingInstrument_69);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_69;
    UnderlyingAttachmentPoint_69.setString("18.570000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_698957582"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1865570366"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1291561579"}, UnderlyingInstrument_69);
    FIX::UnderlyingCapValue UnderlyingCapValue_69;
    UnderlyingCapValue_69.setString("12558150");
set_field(noUnderlyings_0_0, UnderlyingCapValue_69, UnderlyingInstrument_69);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_69;
    UnderlyingCashAmount_69.setString("7818444");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_69);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_69;
    UnderlyingContractMultiplier_69.setString("14481567");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1021711069}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1839498061"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_930990984"}, UnderlyingInstrument_69);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_69;
    UnderlyingCouponRate_69.setString("47.720000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1622025525"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_69);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_69;
    UnderlyingCurrentValue_69.setString("12537272");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_69, UnderlyingInstrument_69);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_69;
    UnderlyingDetachmentPoint_69.setString("85.940000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_69, UnderlyingInstrument_69);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_69;
    UnderlyingDirtyPrice_69.setString("4779648");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_69, UnderlyingInstrument_69);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_69;
    UnderlyingEndPrice_69.setString("20952811");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_69, UnderlyingInstrument_69);
    FIX::UnderlyingEndValue UnderlyingEndValue_69;
    UnderlyingEndValue_69.setString("14374254");
set_field(noUnderlyings_0_0, UnderlyingEndValue_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{423609310}, UnderlyingInstrument_69);
    FIX::UnderlyingFXRate UnderlyingFXRate_69;
    UnderlyingFXRate_69.setString("19391208");
set_field(noUnderlyings_0_0, UnderlyingFXRate_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_69);
    FIX::UnderlyingFactor UnderlyingFactor_69;
    UnderlyingFactor_69.setString("14460145");
set_field(noUnderlyings_0_0, UnderlyingFactor_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{472063641}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_518528255"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_447407529"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1883060440"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1612553432"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_398250130"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_562691877"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1174791642"}, UnderlyingInstrument_69);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_69;
    UnderlyingNotionalPercentageOutstanding_69.setString("77.120000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_69);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_69;
    UnderlyingOriginalNotionalPercentageOutstanding_69.setString("95.730000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_205539144"}, UnderlyingInstrument_69);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_69;
    UnderlyingPriceUnitOfMeasureQty_69.setString("10626230");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{968419102}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1653695925}, UnderlyingInstrument_69);
    FIX::UnderlyingPx UnderlyingPx_69;
    UnderlyingPx_69.setString("20843341");
set_field(noUnderlyings_0_0, UnderlyingPx_69, UnderlyingInstrument_69);
    FIX::UnderlyingQty UnderlyingQty_69;
    UnderlyingQty_69.setString("6604335");
set_field(noUnderlyings_0_0, UnderlyingQty_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_437203261"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_226365224"}, UnderlyingInstrument_69);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_69;
    UnderlyingRepurchaseRate_69.setString("53.930000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1979987801}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_822904735"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1388702607"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1653972747"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1300869607"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1336500151"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_943914572"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1724478917"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1128137367"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1622905362"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_69);
    FIX::UnderlyingStartValue UnderlyingStartValue_69;
    UnderlyingStartValue_69.setString("16002010");
set_field(noUnderlyings_0_0, UnderlyingStartValue_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2141433618"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_69);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_69;
    UnderlyingStrikePrice_69.setString("16065034");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1868667474"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1898469678"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_633811396"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_818391538"}, UnderlyingInstrument_69);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_69;
    UnderlyingUnitOfMeasureQty_69.setString("317646");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_69, UnderlyingInstrument_69);
    all_values.push_back(UnderlyingInstrument_69);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_146;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1023930682"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_146);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1094387656"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_146);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_146);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_138;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_530142959"}, UnderlyingStipulations_NoUnderlyingStips_138);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1031238108"}, UnderlyingStipulations_NoUnderlyingStips_138);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_138);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_139;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_434049940"}, UnderlyingStipulations_NoUnderlyingStips_139);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_967346220"}, UnderlyingStipulations_NoUnderlyingStips_139);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_139);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_140;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1257603333"}, UnderlyingStipulations_NoUnderlyingStips_140);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_569025333"}, UnderlyingStipulations_NoUnderlyingStips_140);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_140);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_151;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2080508068"}, UndlyInstrumentParties_NoUndlyInstrumentParties_151);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_151);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{306339472}, UndlyInstrumentParties_NoUndlyInstrumentParties_151);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_151);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1146744443"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1250254044}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_299);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_810889297"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{127398162}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_300);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_70;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_725675758"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1833899112}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1727599171"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{719625728}, UnderlyingInstrument_70);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_70;
    UnderlyingAdjustedQuantity_70.setString("11568328");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_70, UnderlyingInstrument_70);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_70;
    UnderlyingAllocationPercent_70.setString("33.250000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_70, UnderlyingInstrument_70);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_70;
    UnderlyingAttachmentPoint_70.setString("54.830000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_878016634"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_666879355"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_812456879"}, UnderlyingInstrument_70);
    FIX::UnderlyingCapValue UnderlyingCapValue_70;
    UnderlyingCapValue_70.setString("16964081");
set_field(noUnderlyings_0_1, UnderlyingCapValue_70, UnderlyingInstrument_70);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_70;
    UnderlyingCashAmount_70.setString("6986439");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_70);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_70;
    UnderlyingContractMultiplier_70.setString("5728552");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1793031638}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1538754273"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1102998165"}, UnderlyingInstrument_70);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_70;
    UnderlyingCouponRate_70.setString("60.980000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1972804213"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_70);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_70;
    UnderlyingCurrentValue_70.setString("3943458");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_70, UnderlyingInstrument_70);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_70;
    UnderlyingDetachmentPoint_70.setString("11.100000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_70, UnderlyingInstrument_70);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_70;
    UnderlyingDirtyPrice_70.setString("18674138");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_70, UnderlyingInstrument_70);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_70;
    UnderlyingEndPrice_70.setString("2045901");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_70, UnderlyingInstrument_70);
    FIX::UnderlyingEndValue UnderlyingEndValue_70;
    UnderlyingEndValue_70.setString("10290505");
set_field(noUnderlyings_0_1, UnderlyingEndValue_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{953824232}, UnderlyingInstrument_70);
    FIX::UnderlyingFXRate UnderlyingFXRate_70;
    UnderlyingFXRate_70.setString("13513346");
set_field(noUnderlyings_0_1, UnderlyingFXRate_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_70);
    FIX::UnderlyingFactor UnderlyingFactor_70;
    UnderlyingFactor_70.setString("17647135");
set_field(noUnderlyings_0_1, UnderlyingFactor_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1478732795}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_857496737"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1451128994"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1058848319"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1577122465"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_460478154"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1974741644"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1755767948"}, UnderlyingInstrument_70);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_70;
    UnderlyingNotionalPercentageOutstanding_70.setString("47.890000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_70);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_70;
    UnderlyingOriginalNotionalPercentageOutstanding_70.setString("11.800000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_887419313"}, UnderlyingInstrument_70);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_70;
    UnderlyingPriceUnitOfMeasureQty_70.setString("11927813");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{38395381}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1460274520}, UnderlyingInstrument_70);
    FIX::UnderlyingPx UnderlyingPx_70;
    UnderlyingPx_70.setString("8383293");
set_field(noUnderlyings_0_1, UnderlyingPx_70, UnderlyingInstrument_70);
    FIX::UnderlyingQty UnderlyingQty_70;
    UnderlyingQty_70.setString("15771496");
set_field(noUnderlyings_0_1, UnderlyingQty_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_415789037"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1515115421"}, UnderlyingInstrument_70);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_70;
    UnderlyingRepurchaseRate_70.setString("2.190000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{338649775}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1302021205"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1796816117"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1061360885"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1021951409"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_2001406307"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_2090411468"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1975775641"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1205257292"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_74748798"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_70);
    FIX::UnderlyingStartValue UnderlyingStartValue_70;
    UnderlyingStartValue_70.setString("5365064");
set_field(noUnderlyings_0_1, UnderlyingStartValue_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_932245535"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_70);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_70;
    UnderlyingStrikePrice_70.setString("3618843");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1357129023"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1422612754"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_2117652301"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_548140164"}, UnderlyingInstrument_70);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_70;
    UnderlyingUnitOfMeasureQty_70.setString("19167501");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_70, UnderlyingInstrument_70);
    all_values.push_back(UnderlyingInstrument_70);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_147;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1435559477"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_147);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_962047791"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_147);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_147);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_148;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_429305214"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_148);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_748350349"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_148);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_148);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_149;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1800377114"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_149);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_2006454868"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_149);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_149);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_141;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1168008887"}, UnderlyingStipulations_NoUnderlyingStips_141);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1261441439"}, UnderlyingStipulations_NoUnderlyingStips_141);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_141);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_142;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1502789162"}, UnderlyingStipulations_NoUnderlyingStips_142);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_322546444"}, UnderlyingStipulations_NoUnderlyingStips_142);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_142);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_152;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_416666399"}, UndlyInstrumentParties_NoUndlyInstrumentParties_152);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_152);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{764696567}, UndlyInstrumentParties_NoUndlyInstrumentParties_152);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_152);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1172789846"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1969953859}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_301);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_434343018"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{618311721}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_302);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_358976651"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1366588553}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_303);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_153;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1514962589"}, UndlyInstrumentParties_NoUndlyInstrumentParties_153);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_153);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1728472906}, UndlyInstrumentParties_NoUndlyInstrumentParties_153);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_153);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1229460516"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1698641560}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_304);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_154;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1272748128"}, UndlyInstrumentParties_NoUndlyInstrumentParties_154);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_154);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{2089551393}, UndlyInstrumentParties_NoUndlyInstrumentParties_154);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_154);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1960774765"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{371372960}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_305);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1309174307"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1613668231}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_306);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // header
  multiset<string> header_53;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_0"}, header_53);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_325830046"}, header_53);
  set_header_field(msg.getHeader(), FIX::BodyLength{634193470}, header_53);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1491785620"}, header_53);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1828619208"}, header_53);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_956739915"}, header_53);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_255075880"}, header_53);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{97801960}, header_53);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_53);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1019772448}, header_53);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_457396179"}, header_53);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1326543967"}, header_53);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_842242659"}, header_53);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(16, 50, 43, 25, 5, 2005)}, header_53);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_53);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_53);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1390474921"}, header_53);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1162207074}, header_53);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1088770914"}, header_53);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1332542667"}, header_53);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1723031032"}, header_53);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(11, 32, 34, 11, 7, 2014)}, header_53);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1278561779"}, header_53);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_891687299"}, header_53);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1959179999"}, header_53);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1533637660"}, header_53);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{989489259}, header_53);
  all_values.push_back(header_53);
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
