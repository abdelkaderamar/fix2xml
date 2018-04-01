#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MultilegOrderCancelReplace.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MultilegOrderCancelReplace, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MultilegOrderCancelReplace msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MultilegOrderCancelReplace_0;
  set_field(msg, FIX::Account{"STRING_67737932"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::AccountType{6}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::AcctIDSource{5}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::AllocID{"STRING_713685985"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::BookingType{0}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::BookingUnit{'2'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::CancellationRights{'M'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::CashMargin{'2'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ClOrdID{"STRING_1684633096"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_2082097707"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ClearingFeeIndicator{"STRING_5"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ComplianceID{"STRING_51722562"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::CoveredOrUncovered{0}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::Currency{"CAN"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::CustOrderCapacity{4}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::DayBookingInst{'2'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::Designation{"STRING_2045875497"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(12, 49, 33, 19, 2, 2001)}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::EncodedText{"DATA_304015988"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::EncodedTextLen{1760833030}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_796400231"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ExDestinationIDSource{'D'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_M"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_425527238"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(12, 28, 5, 26, 11, 2001)}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ForexReq{false}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::GTBookingInst{0}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::HandlInst{'3'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::IOIID{"STRING_1272610113"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::LocateReqd{true}, MultilegOrderCancelReplace_0);
  FIX::MatchIncrement MatchIncrement_2;
  MatchIncrement_2.setString("3568729");
set_field(msg, MatchIncrement_2, MultilegOrderCancelReplace_0);
  FIX::MaxFloor MaxFloor_2;
  MaxFloor_2.setString("21225672");
set_field(msg, MaxFloor_2, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::MaxPriceLevels{1792781214}, MultilegOrderCancelReplace_0);
  FIX::MaxShow MaxShow_2;
  MaxShow_2.setString("1618353");
set_field(msg, MaxShow_2, MultilegOrderCancelReplace_0);
  FIX::MinQty MinQty_6;
  MinQty_6.setString("1534161");
set_field(msg, MinQty_6, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'2'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::MultiLegRptTypeReq{0}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::MultilegModel{1}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::MultilegPriceMethod{3}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::OrdType{'M'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::OrderCapacity{'P'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::OrderID{"STRING_279873602"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_3"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::OrigClOrdID{"STRING_579221231"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(0, 18, 38, 18, 11, 2003)}, MultilegOrderCancelReplace_0);
  FIX::ParticipationRate ParticipationRate_2;
  ParticipationRate_2.setString("93.020000");
set_field(msg, ParticipationRate_2, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::PositionEffect{'F'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::PreTradeAnonymity{false}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::PreallocMethod{'0'}, MultilegOrderCancelReplace_0);
  FIX::PrevClosePx PrevClosePx_2;
  PrevClosePx_2.setString("6524850");
set_field(msg, PrevClosePx_2, MultilegOrderCancelReplace_0);
  FIX::Price Price_12;
  Price_12.setString("10667353");
set_field(msg, Price_12, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::PriceProtectionScope{'3'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::PriceType{7}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ProcessCode{'2'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::QtyType{0}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::QuoteID{"STRING_391558577"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::RegistID{"STRING_166945457"}, MultilegOrderCancelReplace_0);
  FIX::RiskFreeRate RiskFreeRate_1;
  RiskFreeRate_1.setString("18670893");
set_field(msg, RiskFreeRate_1, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_553393889"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::SettlCurrency{"CHF"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1171696229"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::SettlType{"STRING_5"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::Side{'F'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::SolicitedFlag{false}, MultilegOrderCancelReplace_0);
  FIX::StopPx StopPx_2;
  StopPx_2.setString("3607339");
set_field(msg, StopPx_2, MultilegOrderCancelReplace_0);
  FIX::SwapPoints SwapPoints_0;
  SwapPoints_0.setString("12633379");
set_field(msg, SwapPoints_0, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::TargetStrategy{1}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_939955207"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::Text{"STRING_1156560905"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::TimeInForce{'3'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_13025838"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_223089215"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(16, 26, 52, 19, 12, 2014)}, MultilegOrderCancelReplace_0);
  all_values.push_back(MultilegOrderCancelReplace_0);

  all_compo_names.insert("MultilegOrderCancelReplace");

  // CommissionData
  multiset<string> CommissionData_10;
  set_field(msg, FIX::CommCurrency{"EUR"}, CommissionData_10);
  set_field(msg, FIX::CommType{'6'}, CommissionData_10);
  FIX::Commission Commission_10;
  Commission_10.setString("16872367");
set_field(msg, Commission_10, CommissionData_10);
  set_field(msg, FIX::FundRenewWaiv{'Y'}, CommissionData_10);
  all_values.push_back(CommissionData_10);
  all_compo_names.insert(".");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_2;
  set_field(msg, FIX::DiscretionInst{'3'}, DiscretionInstructions_2);
  set_field(msg, FIX::DiscretionLimitType{0}, DiscretionInstructions_2);
  set_field(msg, FIX::DiscretionMoveType{0}, DiscretionInstructions_2);
  set_field(msg, FIX::DiscretionOffsetType{0}, DiscretionInstructions_2);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_2;
  DiscretionOffsetValue_2.setString("4847055");
set_field(msg, DiscretionOffsetValue_2, DiscretionInstructions_2);
  set_field(msg, FIX::DiscretionRoundDirection{1}, DiscretionInstructions_2);
  set_field(msg, FIX::DiscretionScope{2}, DiscretionInstructions_2);
  all_values.push_back(DiscretionInstructions_2);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_2;
  FIX::DisplayHighQty DisplayHighQty_2;
  DisplayHighQty_2.setString("16564018");
set_field(msg, DisplayHighQty_2, DisplayInstruction_2);
  FIX::DisplayLowQty DisplayLowQty_2;
  DisplayLowQty_2.setString("19852536");
set_field(msg, DisplayLowQty_2, DisplayInstruction_2);
  set_field(msg, FIX::DisplayMethod{'4'}, DisplayInstruction_2);
  FIX::DisplayMinIncr DisplayMinIncr_2;
  DisplayMinIncr_2.setString("20460815");
set_field(msg, DisplayMinIncr_2, DisplayInstruction_2);
  FIX::DisplayQty DisplayQty_2;
  DisplayQty_2.setString("1985039");
set_field(msg, DisplayQty_2, DisplayInstruction_2);
  set_field(msg, FIX::DisplayWhen{'1'}, DisplayInstruction_2);
  FIX::RefreshQty RefreshQty_2;
  RefreshQty_2.setString("16394219");
set_field(msg, RefreshQty_2, DisplayInstruction_2);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_2;
  SecondaryDisplayQty_2.setString("11384591");
set_field(msg, SecondaryDisplayQty_2, DisplayInstruction_2);
  all_values.push_back(DisplayInstruction_2);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_36;
  FIX::AttachmentPoint AttachmentPoint_36;
  AttachmentPoint_36.setString("27.410000");
set_field(msg, AttachmentPoint_36, Instrument_36);
  set_field(msg, FIX::CFICode{"STRING_1232823316"}, Instrument_36);
  set_field(msg, FIX::CPProgram{1}, Instrument_36);
  set_field(msg, FIX::CPRegType{"STRING_52958308"}, Instrument_36);
  FIX::CapPrice CapPrice_36;
  CapPrice_36.setString("12518128");
set_field(msg, CapPrice_36, Instrument_36);
  FIX::ContractMultiplier ContractMultiplier_36;
  ContractMultiplier_36.setString("9466524");
set_field(msg, ContractMultiplier_36, Instrument_36);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_36);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1850721677"}, Instrument_36);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1946718506"}, Instrument_36);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1967893938"}, Instrument_36);
  FIX::CouponRate CouponRate_36;
  CouponRate_36.setString("31.740000");
set_field(msg, CouponRate_36, Instrument_36);
  set_field(msg, FIX::CreditRating{"STRING_1451785971"}, Instrument_36);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1040966316"}, Instrument_36);
  FIX::DetachmentPoint DetachmentPoint_36;
  DetachmentPoint_36.setString("37.930000");
set_field(msg, DetachmentPoint_36, Instrument_36);
  set_field(msg, FIX::EncodedIssuer{"DATA_991539101"}, Instrument_36);
  set_field(msg, FIX::EncodedIssuerLen{305900541}, Instrument_36);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_828552556"}, Instrument_36);
  set_field(msg, FIX::EncodedSecurityDescLen{922850808}, Instrument_36);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_36);
  FIX::Factor Factor_36;
  Factor_36.setString("1392470");
set_field(msg, Factor_36, Instrument_36);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_36);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_36);
  FIX::FloorPrice FloorPrice_36;
  FloorPrice_36.setString("8607202");
set_field(msg, FloorPrice_36, Instrument_36);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_36);
  set_field(msg, FIX::InstrRegistry{"STRING_1475275165"}, Instrument_36);
  set_field(msg, FIX::InstrmtAssignmentMethod{'4'}, Instrument_36);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_815072475"}, Instrument_36);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1673779155"}, Instrument_36);
  set_field(msg, FIX::Issuer{"STRING_1238966026"}, Instrument_36);
  set_field(msg, FIX::ListMethod{0}, Instrument_36);
  set_field(msg, FIX::LocaleOfIssue{"STRING_664754704"}, Instrument_36);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1068835119"}, Instrument_36);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1539834104"}, Instrument_36);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1816239740"}, Instrument_36);
  FIX::MinPriceIncrement MinPriceIncrement_36;
  MinPriceIncrement_36.setString("11217934");
set_field(msg, MinPriceIncrement_36, Instrument_36);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_36;
  MinPriceIncrementAmount_36.setString("6441633");
set_field(msg, MinPriceIncrementAmount_36, Instrument_36);
  set_field(msg, FIX::NTPositionLimit{615408575}, Instrument_36);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_36;
  NotionalPercentageOutstanding_36.setString("30.740000");
set_field(msg, NotionalPercentageOutstanding_36, Instrument_36);
  set_field(msg, FIX::OptAttribute{'3'}, Instrument_36);
  FIX::OptPayoutAmount OptPayoutAmount_36;
  OptPayoutAmount_36.setString("4146434");
set_field(msg, OptPayoutAmount_36, Instrument_36);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_36);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_36;
  OriginalNotionalPercentageOutstanding_36.setString("45.050000");
set_field(msg, OriginalNotionalPercentageOutstanding_36, Instrument_36);
  set_field(msg, FIX::Pool{"STRING_1866429405"}, Instrument_36);
  set_field(msg, FIX::PositionLimit{1649759681}, Instrument_36);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_36);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_710484858"}, Instrument_36);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_36;
  PriceUnitOfMeasureQty_36.setString("19556602");
set_field(msg, PriceUnitOfMeasureQty_36, Instrument_36);
  set_field(msg, FIX::Product{4}, Instrument_36);
  set_field(msg, FIX::ProductComplex{"STRING_1633335666"}, Instrument_36);
  set_field(msg, FIX::PutOrCall{1}, Instrument_36);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_2125864236"}, Instrument_36);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_893408423"}, Instrument_36);
  FIX::RepurchaseRate RepurchaseRate_36;
  RepurchaseRate_36.setString("19.490000");
set_field(msg, RepurchaseRate_36, Instrument_36);
  set_field(msg, FIX::RepurchaseTerm{839100862}, Instrument_36);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_36);
  set_field(msg, FIX::SecurityDesc{"STRING_511253466"}, Instrument_36);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1257275052"}, Instrument_36);
  set_field(msg, FIX::SecurityGroup{"STRING_477471833"}, Instrument_36);
  set_field(msg, FIX::SecurityID{"STRING_37548973"}, Instrument_36);
  set_field(msg, FIX::SecurityIDSource{"STRING_B"}, Instrument_36);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_36);
  set_field(msg, FIX::SecuritySubType{"STRING_702303677"}, Instrument_36);
  set_field(msg, FIX::SecurityType{"STRING_OOF"}, Instrument_36);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_36);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_36);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_391902329"}, Instrument_36);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_820996378"}, Instrument_36);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_36);
  FIX::StrikeMultiplier StrikeMultiplier_36;
  StrikeMultiplier_36.setString("11683977");
set_field(msg, StrikeMultiplier_36, Instrument_36);
  FIX::StrikePrice StrikePrice_36;
  StrikePrice_36.setString("14011117");
set_field(msg, StrikePrice_36, Instrument_36);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_36);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_36;
  StrikePriceBoundaryPrecision_36.setString("85.660000");
set_field(msg, StrikePriceBoundaryPrecision_36, Instrument_36);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_36);
  FIX::StrikeValue StrikeValue_36;
  StrikeValue_36.setString("12913548");
set_field(msg, StrikeValue_36, Instrument_36);
  set_field(msg, FIX::Symbol{"STRING_99579569"}, Instrument_36);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_36);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_36);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_36);
  set_field(msg, FIX::UnitOfMeasure{"STRING_t"}, Instrument_36);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_36;
  UnitOfMeasureQty_36.setString("6454881");
set_field(msg, UnitOfMeasureQty_36, Instrument_36);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_36);
  all_values.push_back(Instrument_36);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_74;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_74);
    FIX::ComplexEventPrice ComplexEventPrice_74;
    ComplexEventPrice_74.setString("7561945");
set_field(noComplexEvents_0_0, ComplexEventPrice_74, ComplexEvents_NoComplexEvents_74);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_74);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_74;
    ComplexEventPriceBoundaryPrecision_74.setString("99.400000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_74, ComplexEvents_NoComplexEvents_74);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_74);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_74);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_74;
    ComplexOptPayoutAmount_74.setString("2302689");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_74, ComplexEvents_NoComplexEvents_74);
    all_values.push_back(ComplexEvents_NoComplexEvents_74);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_150;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 23, 57, 16, 5, 2007)}, ComplexEventDates_NoComplexEventDates_150);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 57, 56, 0, 4, 2012)}, ComplexEventDates_NoComplexEventDates_150);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_150);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_302;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 17, 40)}, ComplexEventTimes_NoComplexEventTimes_302);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 16, 13)}, ComplexEventTimes_NoComplexEventTimes_302);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_302);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_303;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 59, 24)}, ComplexEventTimes_NoComplexEventTimes_303);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 37, 3)}, ComplexEventTimes_NoComplexEventTimes_303);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_303);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_304;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 18, 27)}, ComplexEventTimes_NoComplexEventTimes_304);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 15, 56)}, ComplexEventTimes_NoComplexEventTimes_304);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_304);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_151;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 44, 38, 7, 10, 2005)}, ComplexEventDates_NoComplexEventDates_151);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 8, 56, 1, 3, 2017)}, ComplexEventDates_NoComplexEventDates_151);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_151);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_305;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 22, 10)}, ComplexEventTimes_NoComplexEventTimes_305);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 39, 25)}, ComplexEventTimes_NoComplexEventTimes_305);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_305);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_306;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 36, 43)}, ComplexEventTimes_NoComplexEventTimes_306);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 50, 27)}, ComplexEventTimes_NoComplexEventTimes_306);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_306);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_307;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 3, 18)}, ComplexEventTimes_NoComplexEventTimes_307);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 10, 17)}, ComplexEventTimes_NoComplexEventTimes_307);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_307);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_152;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 14, 26, 17, 8, 2001)}, ComplexEventDates_NoComplexEventDates_152);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 4, 46, 21, 2, 2007)}, ComplexEventDates_NoComplexEventDates_152);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_152);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_308;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 38, 47)}, ComplexEventTimes_NoComplexEventTimes_308);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 37, 54)}, ComplexEventTimes_NoComplexEventTimes_308);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_308);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_309;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 49, 16)}, ComplexEventTimes_NoComplexEventTimes_309);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 26, 34)}, ComplexEventTimes_NoComplexEventTimes_309);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_309);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_310;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 40, 29)}, ComplexEventTimes_NoComplexEventTimes_310);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 19, 1)}, ComplexEventTimes_NoComplexEventTimes_310);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_310);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_75;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_75);
    FIX::ComplexEventPrice ComplexEventPrice_75;
    ComplexEventPrice_75.setString("20456435");
set_field(noComplexEvents_0_1, ComplexEventPrice_75, ComplexEvents_NoComplexEvents_75);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_75);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_75;
    ComplexEventPriceBoundaryPrecision_75.setString("57.990000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_75, ComplexEvents_NoComplexEvents_75);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_75);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_75);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_75;
    ComplexOptPayoutAmount_75.setString("15416416");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_75, ComplexEvents_NoComplexEvents_75);
    all_values.push_back(ComplexEvents_NoComplexEvents_75);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_153;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 56, 36, 13, 2, 2010)}, ComplexEventDates_NoComplexEventDates_153);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 11, 55, 2, 10, 2007)}, ComplexEventDates_NoComplexEventDates_153);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_153);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_311;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 13, 30)}, ComplexEventTimes_NoComplexEventTimes_311);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 49, 0)}, ComplexEventTimes_NoComplexEventTimes_311);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_311);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_312;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 31, 18)}, ComplexEventTimes_NoComplexEventTimes_312);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 12, 16)}, ComplexEventTimes_NoComplexEventTimes_312);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_312);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_313;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 4, 4)}, ComplexEventTimes_NoComplexEventTimes_313);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 18, 5)}, ComplexEventTimes_NoComplexEventTimes_313);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_313);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_154;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 0, 17, 23, 6, 2011)}, ComplexEventDates_NoComplexEventDates_154);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 46, 50, 22, 4, 2013)}, ComplexEventDates_NoComplexEventDates_154);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_154);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_314;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 9, 12)}, ComplexEventTimes_NoComplexEventTimes_314);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 25, 35)}, ComplexEventTimes_NoComplexEventTimes_314);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_314);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_315;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 40, 9)}, ComplexEventTimes_NoComplexEventTimes_315);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 28, 34)}, ComplexEventTimes_NoComplexEventTimes_315);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_315);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_316;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 26, 22)}, ComplexEventTimes_NoComplexEventTimes_316);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 55, 29)}, ComplexEventTimes_NoComplexEventTimes_316);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_316);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_155;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 19, 49, 1, 7, 2009)}, ComplexEventDates_NoComplexEventDates_155);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 36, 39, 24, 5, 2016)}, ComplexEventDates_NoComplexEventDates_155);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_155);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_317;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 44, 11)}, ComplexEventTimes_NoComplexEventTimes_317);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 39, 53)}, ComplexEventTimes_NoComplexEventTimes_317);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_317);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_76;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_76);
    FIX::ComplexEventPrice ComplexEventPrice_76;
    ComplexEventPrice_76.setString("5615153");
set_field(noComplexEvents_0_2, ComplexEventPrice_76, ComplexEvents_NoComplexEvents_76);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_76);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_76;
    ComplexEventPriceBoundaryPrecision_76.setString("24.650000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_76, ComplexEvents_NoComplexEvents_76);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_76);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_76);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_76;
    ComplexOptPayoutAmount_76.setString("10829876");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_76, ComplexEvents_NoComplexEvents_76);
    all_values.push_back(ComplexEvents_NoComplexEvents_76);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_156;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 11, 35, 19, 7, 2006)}, ComplexEventDates_NoComplexEventDates_156);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 22, 6, 12, 4, 2002)}, ComplexEventDates_NoComplexEventDates_156);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_156);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_318;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 20, 47)}, ComplexEventTimes_NoComplexEventTimes_318);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 18, 21)}, ComplexEventTimes_NoComplexEventTimes_318);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_318);
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
    FIX50SP2::MultilegOrderCancelReplace::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_75;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1327040319"}, EvntGrp_NoEvents_75);
    FIX::EventPx EventPx_75;
    EventPx_75.setString("18692479");
set_field(noEvents_0_0, EventPx_75, EvntGrp_NoEvents_75);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1656289966"}, EvntGrp_NoEvents_75);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(20, 38, 2, 18, 2, 2005)}, EvntGrp_NoEvents_75);
    set_field(noEvents_0_0, FIX::EventType{15}, EvntGrp_NoEvents_75);
    all_values.push_back(EvntGrp_NoEvents_75);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_76;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1858113860"}, EvntGrp_NoEvents_76);
    FIX::EventPx EventPx_76;
    EventPx_76.setString("12212737");
set_field(noEvents_0_1, EventPx_76, EvntGrp_NoEvents_76);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1322870948"}, EvntGrp_NoEvents_76);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(23, 31, 45, 19, 11, 2017)}, EvntGrp_NoEvents_76);
    set_field(noEvents_0_1, FIX::EventType{99}, EvntGrp_NoEvents_76);
    all_values.push_back(EvntGrp_NoEvents_76);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_77;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_493930406"}, EvntGrp_NoEvents_77);
    FIX::EventPx EventPx_77;
    EventPx_77.setString("5356415");
set_field(noEvents_0_2, EventPx_77, EvntGrp_NoEvents_77);
    set_field(noEvents_0_2, FIX::EventText{"STRING_2000302079"}, EvntGrp_NoEvents_77);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(20, 49, 24, 5, 7, 2016)}, EvntGrp_NoEvents_77);
    set_field(noEvents_0_2, FIX::EventType{7}, EvntGrp_NoEvents_77);
    all_values.push_back(EvntGrp_NoEvents_77);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_68;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1769474286"}, InstrumentParties_NoInstrumentParties_68);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_68);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{2141004106}, InstrumentParties_NoInstrumentParties_68);
    all_values.push_back(InstrumentParties_NoInstrumentParties_68);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_964779984"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{62713431}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_69;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1027956837"}, InstrumentParties_NoInstrumentParties_69);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_69);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1920827292}, InstrumentParties_NoInstrumentParties_69);
    all_values.push_back(InstrumentParties_NoInstrumentParties_69);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1169969679"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{2025347631}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1968422308"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{380148002}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141;
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubID{"STRING_1148765608"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141);
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubIDType{1323050731}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_70;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_2078443260"}, InstrumentParties_NoInstrumentParties_70);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_70);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1668086170}, InstrumentParties_NoInstrumentParties_70);
    all_values.push_back(InstrumentParties_NoInstrumentParties_70);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1592517528"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{1520904601}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::MultilegOrderCancelReplace::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_74;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1506852228"}, SecAltIDGrp_NoSecurityAltID_74);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_644397282"}, SecAltIDGrp_NoSecurityAltID_74);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_74);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_75;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_23870569"}, SecAltIDGrp_NoSecurityAltID_75);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1279043042"}, SecAltIDGrp_NoSecurityAltID_75);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_75);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_76;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_537317464"}, SecAltIDGrp_NoSecurityAltID_76);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1533163673"}, SecAltIDGrp_NoSecurityAltID_76);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_76);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_72;
  set_field(msg, FIX::SecurityXML{"XMLDATA_772998160"}, SecurityXML_72);
  set_field(msg, FIX::SecurityXMLLen{2086527612}, SecurityXML_72);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1155154311"}, SecurityXML_72);
  all_values.push_back(SecurityXML_72);
  all_compo_names.insert("..");

  // LegOrdGrp
  // Group LegOrdGrp.NoLegs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoLegs noLegs_0_0;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_0;
    set_field(noLegs_0_0, FIX::LegAllocID{"STRING_2080048070"}, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegCoveredOrUncovered{735057763}, LegOrdGrp_NoLegs_0);
    FIX::LegCurrencyRatio LegCurrencyRatio_1;
    LegCurrencyRatio_1.setString("11788165");
set_field(noLegs_0_0, LegCurrencyRatio_1, LegOrdGrp_NoLegs_0);
    FIX::LegDividendYield LegDividendYield_1;
    LegDividendYield_1.setString("15.020000");
set_field(noLegs_0_0, LegDividendYield_1, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegExecInst{"MULTIPLECHARVALUE_1763014600"}, LegOrdGrp_NoLegs_0);
    FIX::LegOrderQty LegOrderQty_1;
    LegOrderQty_1.setString("10259152");
set_field(noLegs_0_0, LegOrderQty_1, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegPositionEffect{'1'}, LegOrdGrp_NoLegs_0);
    FIX::LegQty LegQty_1;
    LegQty_1.setString("18647615");
set_field(noLegs_0_0, LegQty_1, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_48401324"}, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlCurrency{"CAN"}, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_428549326"}, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlType{'7'}, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSwapType{1}, LegOrdGrp_NoLegs_0);
    FIX::LegVolatility LegVolatility_1;
    LegVolatility_1.setString("3595089");
set_field(noLegs_0_0, LegVolatility_1, LegOrdGrp_NoLegs_0);
    all_values.push_back(LegOrdGrp_NoLegs_0);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_57;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1852127036"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{381869766}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_784398956"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1297160916}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1902774367"}, InstrumentLeg_57);
    FIX::LegContractMultiplier LegContractMultiplier_57;
    LegContractMultiplier_57.setString("6260167");
set_field(noLegs_0_0, LegContractMultiplier_57, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{656529497}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_399688001"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_649887310"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1935572539"}, InstrumentLeg_57);
    FIX::LegCouponRate LegCouponRate_57;
    LegCouponRate_57.setString("54.650000");
set_field(noLegs_0_0, LegCouponRate_57, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_35567335"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1190721646"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{775123629}, InstrumentLeg_57);
    FIX::LegFactor LegFactor_57;
    LegFactor_57.setString("8086138");
set_field(noLegs_0_0, LegFactor_57, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1925779409}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1953940191"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_803891706"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1541310361"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_832371836"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_572513204"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1258588215"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_880773160"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_218998685"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'7'}, InstrumentLeg_57);
    FIX::LegOptionRatio LegOptionRatio_57;
    LegOptionRatio_57.setString("13093224");
set_field(noLegs_0_0, LegOptionRatio_57, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1014249774"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1658071973"}, InstrumentLeg_57);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_57;
    LegPriceUnitOfMeasureQty_57.setString("16688314");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_57, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegProduct{718893162}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegPutOrCall{2039941739}, InstrumentLeg_57);
    FIX::LegRatioQty LegRatioQty_57;
    LegRatioQty_57.setString("3057467");
set_field(noLegs_0_0, LegRatioQty_57, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_2016054079"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1795232459"}, InstrumentLeg_57);
    FIX::LegRepurchaseRate LegRepurchaseRate_57;
    LegRepurchaseRate_57.setString("34.740000");
set_field(noLegs_0_0, LegRepurchaseRate_57, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{525099928}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_47436812"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1581650784"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_313188819"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_984442278"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1617218119"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_874275870"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_660456117"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_57);
    FIX::LegStrikePrice LegStrikePrice_57;
    LegStrikePrice_57.setString("4387518");
set_field(noLegs_0_0, LegStrikePrice_57, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1455856042"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1325513617"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1980062239"}, InstrumentLeg_57);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_140744231"}, InstrumentLeg_57);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_57;
    LegUnitOfMeasureQty_57.setString("18980268");
set_field(noLegs_0_0, LegUnitOfMeasureQty_57, InstrumentLeg_57);
    all_values.push_back(InstrumentLeg_57);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_117;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1021517391"}, LegSecAltIDGrp_NoLegSecurityAltID_117);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_2117025506"}, LegSecAltIDGrp_NoLegSecurityAltID_117);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_117);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_118;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1887971535"}, LegSecAltIDGrp_NoLegSecurityAltID_118);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_183356230"}, LegSecAltIDGrp_NoLegSecurityAltID_118);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_118);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_119;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_983791632"}, LegSecAltIDGrp_NoLegSecurityAltID_119);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_1398559860"}, LegSecAltIDGrp_NoLegSecurityAltID_119);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_119);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_2;
      set_field(noLegAllocs_0_1_0, FIX::LegAllocAccount{"STRING_1702684795"}, LegPreAllocGrp_NoLegAllocs_2);
      set_field(noLegAllocs_0_1_0, FIX::LegAllocAcctIDSource{"STRING_1291017951"}, LegPreAllocGrp_NoLegAllocs_2);
      FIX::LegAllocQty LegAllocQty_2;
      LegAllocQty_2.setString("104507");
set_field(noLegAllocs_0_1_0, LegAllocQty_2, LegPreAllocGrp_NoLegAllocs_2);
      set_field(noLegAllocs_0_1_0, FIX::LegAllocSettlCurrency{"USD"}, LegPreAllocGrp_NoLegAllocs_2);
      set_field(noLegAllocs_0_1_0, FIX::LegIndividualAllocID{"STRING_942214213"}, LegPreAllocGrp_NoLegAllocs_2);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_2);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_22;
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyID{"STRING_986203575"}, NestedParties2_NoNested2PartyIDs_22);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyIDSource{'3'}, NestedParties2_NoNested2PartyIDs_22);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyRole{262060325}, NestedParties2_NoNested2PartyIDs_22);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_22);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_47;
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubID{"STRING_1993599468"}, NstdPtys2SubGrp_NoNested2PartySubIDs_47);
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubIDType{1136336195}, NstdPtys2SubGrp_NoNested2PartySubIDs_47);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_47);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_23;
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyID{"STRING_1683653912"}, NestedParties2_NoNested2PartyIDs_23);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyIDSource{'5'}, NestedParties2_NoNested2PartyIDs_23);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyRole{638252046}, NestedParties2_NoNested2PartyIDs_23);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_23);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_48;
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubID{"STRING_945323815"}, NstdPtys2SubGrp_NoNested2PartySubIDs_48);
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubIDType{2094108088}, NstdPtys2SubGrp_NoNested2PartySubIDs_48);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_48);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_49;
          set_field(noNested2PartySubIDs_0_0_1_3_1, FIX::Nested2PartySubID{"STRING_1383305793"}, NstdPtys2SubGrp_NoNested2PartySubIDs_49);
          set_field(noNested2PartySubIDs_0_0_1_3_1, FIX::Nested2PartySubIDType{777902407}, NstdPtys2SubGrp_NoNested2PartySubIDs_49);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_49);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_50;
          set_field(noNested2PartySubIDs_0_0_1_3_2, FIX::Nested2PartySubID{"STRING_87368671"}, NstdPtys2SubGrp_NoNested2PartySubIDs_50);
          set_field(noNested2PartySubIDs_0_0_1_3_2, FIX::Nested2PartySubIDType{1133848967}, NstdPtys2SubGrp_NoNested2PartySubIDs_50);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_50);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_3;
      set_field(noLegAllocs_0_1_1, FIX::LegAllocAccount{"STRING_1869069213"}, LegPreAllocGrp_NoLegAllocs_3);
      set_field(noLegAllocs_0_1_1, FIX::LegAllocAcctIDSource{"STRING_1108886063"}, LegPreAllocGrp_NoLegAllocs_3);
      FIX::LegAllocQty LegAllocQty_3;
      LegAllocQty_3.setString("11033908");
set_field(noLegAllocs_0_1_1, LegAllocQty_3, LegPreAllocGrp_NoLegAllocs_3);
      set_field(noLegAllocs_0_1_1, FIX::LegAllocSettlCurrency{"CHF"}, LegPreAllocGrp_NoLegAllocs_3);
      set_field(noLegAllocs_0_1_1, FIX::LegIndividualAllocID{"STRING_2087182458"}, LegPreAllocGrp_NoLegAllocs_3);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_3);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_24;
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyID{"STRING_996946299"}, NestedParties2_NoNested2PartyIDs_24);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_24);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyRole{4167616}, NestedParties2_NoNested2PartyIDs_24);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_24);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_51;
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubID{"STRING_1066155183"}, NstdPtys2SubGrp_NoNested2PartySubIDs_51);
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubIDType{942934378}, NstdPtys2SubGrp_NoNested2PartySubIDs_51);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_51);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_25;
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyID{"STRING_1949611252"}, NestedParties2_NoNested2PartyIDs_25);
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_25);
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyRole{1929137953}, NestedParties2_NoNested2PartyIDs_25);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_25);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_52;
          set_field(noNested2PartySubIDs_0_1_1_3_0, FIX::Nested2PartySubID{"STRING_1277087014"}, NstdPtys2SubGrp_NoNested2PartySubIDs_52);
          set_field(noNested2PartySubIDs_0_1_1_3_0, FIX::Nested2PartySubIDType{1752300158}, NstdPtys2SubGrp_NoNested2PartySubIDs_52);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_52);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_53;
          set_field(noNested2PartySubIDs_0_1_1_3_1, FIX::Nested2PartySubID{"STRING_24624774"}, NstdPtys2SubGrp_NoNested2PartySubIDs_53);
          set_field(noNested2PartySubIDs_0_1_1_3_1, FIX::Nested2PartySubIDType{265939561}, NstdPtys2SubGrp_NoNested2PartySubIDs_53);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_53);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_54;
          set_field(noNested2PartySubIDs_0_1_1_3_2, FIX::Nested2PartySubID{"STRING_1288470423"}, NstdPtys2SubGrp_NoNested2PartySubIDs_54);
          set_field(noNested2PartySubIDs_0_1_1_3_2, FIX::Nested2PartySubIDType{531196712}, NstdPtys2SubGrp_NoNested2PartySubIDs_54);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_54);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_2);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_26;
        set_field(noNested2PartyIDs_0_1_2_2, FIX::Nested2PartyID{"STRING_904191607"}, NestedParties2_NoNested2PartyIDs_26);
        set_field(noNested2PartyIDs_0_1_2_2, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_26);
        set_field(noNested2PartyIDs_0_1_2_2, FIX::Nested2PartyRole{1476520527}, NestedParties2_NoNested2PartyIDs_26);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_26);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_55;
          set_field(noNested2PartySubIDs_0_1_2_3_0, FIX::Nested2PartySubID{"STRING_582084744"}, NstdPtys2SubGrp_NoNested2PartySubIDs_55);
          set_field(noNested2PartySubIDs_0_1_2_3_0, FIX::Nested2PartySubIDType{106939286}, NstdPtys2SubGrp_NoNested2PartySubIDs_55);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_55);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_2.addGroup(noNested2PartySubIDs_0_1_2_3_0);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_2);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_4;
      set_field(noLegAllocs_0_1_2, FIX::LegAllocAccount{"STRING_938184719"}, LegPreAllocGrp_NoLegAllocs_4);
      set_field(noLegAllocs_0_1_2, FIX::LegAllocAcctIDSource{"STRING_1715933711"}, LegPreAllocGrp_NoLegAllocs_4);
      FIX::LegAllocQty LegAllocQty_4;
      LegAllocQty_4.setString("19760085");
set_field(noLegAllocs_0_1_2, LegAllocQty_4, LegPreAllocGrp_NoLegAllocs_4);
      set_field(noLegAllocs_0_1_2, FIX::LegAllocSettlCurrency{"CHF"}, LegPreAllocGrp_NoLegAllocs_4);
      set_field(noLegAllocs_0_1_2, FIX::LegIndividualAllocID{"STRING_1438081952"}, LegPreAllocGrp_NoLegAllocs_4);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_4);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_27;
        set_field(noNested2PartyIDs_0_2_2_0, FIX::Nested2PartyID{"STRING_611539699"}, NestedParties2_NoNested2PartyIDs_27);
        set_field(noNested2PartyIDs_0_2_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_27);
        set_field(noNested2PartyIDs_0_2_2_0, FIX::Nested2PartyRole{41292078}, NestedParties2_NoNested2PartyIDs_27);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_27);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_56;
          set_field(noNested2PartySubIDs_0_2_0_3_0, FIX::Nested2PartySubID{"STRING_155399233"}, NstdPtys2SubGrp_NoNested2PartySubIDs_56);
          set_field(noNested2PartySubIDs_0_2_0_3_0, FIX::Nested2PartySubIDType{1048689117}, NstdPtys2SubGrp_NoNested2PartySubIDs_56);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_56);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_57;
          set_field(noNested2PartySubIDs_0_2_0_3_1, FIX::Nested2PartySubID{"STRING_1172594839"}, NstdPtys2SubGrp_NoNested2PartySubIDs_57);
          set_field(noNested2PartySubIDs_0_2_0_3_1, FIX::Nested2PartySubIDType{1098333611}, NstdPtys2SubGrp_NoNested2PartySubIDs_57);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_57);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_1);
        }
        noLegAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_28;
        set_field(noNested2PartyIDs_0_2_2_1, FIX::Nested2PartyID{"STRING_850816722"}, NestedParties2_NoNested2PartyIDs_28);
        set_field(noNested2PartyIDs_0_2_2_1, FIX::Nested2PartyIDSource{'4'}, NestedParties2_NoNested2PartyIDs_28);
        set_field(noNested2PartyIDs_0_2_2_1, FIX::Nested2PartyRole{879987917}, NestedParties2_NoNested2PartyIDs_28);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_28);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_58;
          set_field(noNested2PartySubIDs_0_2_1_3_0, FIX::Nested2PartySubID{"STRING_1317224894"}, NstdPtys2SubGrp_NoNested2PartySubIDs_58);
          set_field(noNested2PartySubIDs_0_2_1_3_0, FIX::Nested2PartySubIDType{484804427}, NstdPtys2SubGrp_NoNested2PartySubIDs_58);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_58);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_59;
          set_field(noNested2PartySubIDs_0_2_1_3_1, FIX::Nested2PartySubID{"STRING_1053950450"}, NstdPtys2SubGrp_NoNested2PartySubIDs_59);
          set_field(noNested2PartySubIDs_0_2_1_3_1, FIX::Nested2PartySubIDType{1583164455}, NstdPtys2SubGrp_NoNested2PartySubIDs_59);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_59);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_60;
          set_field(noNested2PartySubIDs_0_2_1_3_2, FIX::Nested2PartySubID{"STRING_1773274850"}, NstdPtys2SubGrp_NoNested2PartySubIDs_60);
          set_field(noNested2PartySubIDs_0_2_1_3_2, FIX::Nested2PartySubIDType{1585147162}, NstdPtys2SubGrp_NoNested2PartySubIDs_60);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_60);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_2);
        }
        noLegAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_29;
        set_field(noNested2PartyIDs_0_2_2_2, FIX::Nested2PartyID{"STRING_339872414"}, NestedParties2_NoNested2PartyIDs_29);
        set_field(noNested2PartyIDs_0_2_2_2, FIX::Nested2PartyIDSource{'9'}, NestedParties2_NoNested2PartyIDs_29);
        set_field(noNested2PartyIDs_0_2_2_2, FIX::Nested2PartyRole{914184042}, NestedParties2_NoNested2PartyIDs_29);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_29);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_61;
          set_field(noNested2PartySubIDs_0_2_2_3_0, FIX::Nested2PartySubID{"STRING_1554138546"}, NstdPtys2SubGrp_NoNested2PartySubIDs_61);
          set_field(noNested2PartySubIDs_0_2_2_3_0, FIX::Nested2PartySubIDType{1021123328}, NstdPtys2SubGrp_NoNested2PartySubIDs_61);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_61);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_2.addGroup(noNested2PartySubIDs_0_2_2_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_62;
          set_field(noNested2PartySubIDs_0_2_2_3_1, FIX::Nested2PartySubID{"STRING_2128873180"}, NstdPtys2SubGrp_NoNested2PartySubIDs_62);
          set_field(noNested2PartySubIDs_0_2_2_3_1, FIX::Nested2PartySubIDType{1122588609}, NstdPtys2SubGrp_NoNested2PartySubIDs_62);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_62);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_2.addGroup(noNested2PartySubIDs_0_2_2_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_63;
          set_field(noNested2PartySubIDs_0_2_2_3_2, FIX::Nested2PartySubID{"STRING_849648180"}, NstdPtys2SubGrp_NoNested2PartySubIDs_63);
          set_field(noNested2PartySubIDs_0_2_2_3_2, FIX::Nested2PartySubIDType{2028460314}, NstdPtys2SubGrp_NoNested2PartySubIDs_63);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_63);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_2.addGroup(noNested2PartySubIDs_0_2_2_3_2);
        }
        noLegAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_2);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_4;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_140246485"}, LegStipulations_NoLegStipulations_4);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_1072806093"}, LegStipulations_NoLegStipulations_4);
      all_values.push_back(LegStipulations_NoLegStipulations_4);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_54;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_291478102"}, NestedParties_NoNestedPartyIDs_54);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_54);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{364925205}, NestedParties_NoNestedPartyIDs_54);
      all_values.push_back(NestedParties_NoNestedPartyIDs_54);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_118;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_15303641"}, NstdPtysSubGrp_NoNestedPartySubIDs_118);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1537520044}, NstdPtysSubGrp_NoNestedPartySubIDs_118);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_118);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_119;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_1545210946"}, NstdPtysSubGrp_NoNestedPartySubIDs_119);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{866120363}, NstdPtysSubGrp_NoNestedPartySubIDs_119);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_119);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_120;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_1577657924"}, NstdPtysSubGrp_NoNestedPartySubIDs_120);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{277715215}, NstdPtysSubGrp_NoNestedPartySubIDs_120);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_120);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_55;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_1895446039"}, NestedParties_NoNestedPartyIDs_55);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_55);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{762519643}, NestedParties_NoNestedPartyIDs_55);
      all_values.push_back(NestedParties_NoNestedPartyIDs_55);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_121;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_183079977"}, NstdPtysSubGrp_NoNestedPartySubIDs_121);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{388310845}, NstdPtysSubGrp_NoNestedPartySubIDs_121);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_121);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_122;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_239576356"}, NstdPtysSubGrp_NoNestedPartySubIDs_122);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{522952391}, NstdPtysSubGrp_NoNestedPartySubIDs_122);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_122);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_123;
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubID{"STRING_1360364647"}, NstdPtysSubGrp_NoNestedPartySubIDs_123);
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubIDType{1153760398}, NstdPtysSubGrp_NoNestedPartySubIDs_123);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_123);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_56;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_1713640853"}, NestedParties_NoNestedPartyIDs_56);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_56);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{27400079}, NestedParties_NoNestedPartyIDs_56);
      all_values.push_back(NestedParties_NoNestedPartyIDs_56);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_124;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_1889608154"}, NstdPtysSubGrp_NoNestedPartySubIDs_124);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{877048259}, NstdPtysSubGrp_NoNestedPartySubIDs_124);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_124);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_125;
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubID{"STRING_1576007052"}, NstdPtysSubGrp_NoNestedPartySubIDs_125);
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubIDType{1536554005}, NstdPtysSubGrp_NoNestedPartySubIDs_125);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_125);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_7;
  FIX::CashOrderQty CashOrderQty_7;
  CashOrderQty_7.setString("10172947");
set_field(msg, CashOrderQty_7, OrderQtyData_7);
  FIX::OrderPercent OrderPercent_7;
  OrderPercent_7.setString("94.970000");
set_field(msg, OrderPercent_7, OrderQtyData_7);
  FIX::OrderQty OrderQty_15;
  OrderQty_15.setString("17950395");
set_field(msg, OrderQty_15, OrderQtyData_7);
  set_field(msg, FIX::RoundingDirection{'1'}, OrderQtyData_7);
  FIX::RoundingModulus RoundingModulus_7;
  RoundingModulus_7.setString("16154276");
set_field(msg, RoundingModulus_7, OrderQtyData_7);
  all_values.push_back(OrderQtyData_7);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_66;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1755650181"}, Parties_NoPartyIDs_66);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_66);
    set_field(noPartyIDs_0_0, FIX::PartyRole{62}, Parties_NoPartyIDs_66);
    all_values.push_back(Parties_NoPartyIDs_66);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_131;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_349368026"}, PtysSubGrp_NoPartySubIDs_131);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_131);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_131);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_67;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1431092695"}, Parties_NoPartyIDs_67);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_67);
    set_field(noPartyIDs_0_1, FIX::PartyRole{29}, Parties_NoPartyIDs_67);
    all_values.push_back(Parties_NoPartyIDs_67);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_132;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_899243260"}, PtysSubGrp_NoPartySubIDs_132);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_132);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_132);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_68;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_434439536"}, Parties_NoPartyIDs_68);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_68);
    set_field(noPartyIDs_0_2, FIX::PartyRole{5}, Parties_NoPartyIDs_68);
    all_values.push_back(Parties_NoPartyIDs_68);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_133;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_145096367"}, PtysSubGrp_NoPartySubIDs_133);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_133);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_133);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PegInstructions
  multiset<string> PegInstructions_2;
  set_field(msg, FIX::PegLimitType{0}, PegInstructions_2);
  set_field(msg, FIX::PegMoveType{0}, PegInstructions_2);
  set_field(msg, FIX::PegOffsetType{3}, PegInstructions_2);
  FIX::PegOffsetValue PegOffsetValue_2;
  PegOffsetValue_2.setString("1564645");
set_field(msg, PegOffsetValue_2, PegInstructions_2);
  set_field(msg, FIX::PegPriceType{2}, PegInstructions_2);
  set_field(msg, FIX::PegRoundDirection{2}, PegInstructions_2);
  set_field(msg, FIX::PegScope{4}, PegInstructions_2);
  set_field(msg, FIX::PegSecurityDesc{"STRING_2066839450"}, PegInstructions_2);
  set_field(msg, FIX::PegSecurityID{"STRING_1477163816"}, PegInstructions_2);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_1340574498"}, PegInstructions_2);
  set_field(msg, FIX::PegSymbol{"STRING_1228128648"}, PegInstructions_2);
  all_values.push_back(PegInstructions_2);
  all_compo_names.insert(".");

  // PreAllocMlegGrp
  // Group PreAllocMlegGrp.NoAllocs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoAllocs noAllocs_0_0;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_0;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1353055610"}, PreAllocMlegGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{836295182}, PreAllocMlegGrp_NoAllocs_0);
    FIX::AllocQty AllocQty_17;
    AllocQty_17.setString("4283555");
set_field(noAllocs_0_0, AllocQty_17, PreAllocMlegGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"GBP"}, PreAllocMlegGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_777723527"}, PreAllocMlegGrp_NoAllocs_0);
    all_values.push_back(PreAllocMlegGrp_NoAllocs_0);
    all_compo_names.insert("...NoAllocs");

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_3;
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyID{"STRING_1273281709"}, NestedParties3_NoNested3PartyIDs_3);
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyIDSource{'8'}, NestedParties3_NoNested3PartyIDs_3);
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyRole{1315839507}, NestedParties3_NoNested3PartyIDs_3);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_3);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_6;
        set_field(noNested3PartySubIDs_0_0_2_0, FIX::Nested3PartySubID{"STRING_1774297205"}, NstdPtys3SubGrp_NoNested3PartySubIDs_6);
        set_field(noNested3PartySubIDs_0_0_2_0, FIX::Nested3PartySubIDType{1079010440}, NstdPtys3SubGrp_NoNested3PartySubIDs_6);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_6);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_7;
        set_field(noNested3PartySubIDs_0_0_2_1, FIX::Nested3PartySubID{"STRING_1753849936"}, NstdPtys3SubGrp_NoNested3PartySubIDs_7);
        set_field(noNested3PartySubIDs_0_0_2_1, FIX::Nested3PartySubIDType{765633174}, NstdPtys3SubGrp_NoNested3PartySubIDs_7);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_7);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_8;
        set_field(noNested3PartySubIDs_0_0_2_2, FIX::Nested3PartySubID{"STRING_1365133764"}, NstdPtys3SubGrp_NoNested3PartySubIDs_8);
        set_field(noNested3PartySubIDs_0_0_2_2, FIX::Nested3PartySubIDType{1401170471}, NstdPtys3SubGrp_NoNested3PartySubIDs_8);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_8);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_4;
      set_field(noNested3PartyIDs_0_1_1, FIX::Nested3PartyID{"STRING_910729541"}, NestedParties3_NoNested3PartyIDs_4);
      set_field(noNested3PartyIDs_0_1_1, FIX::Nested3PartyIDSource{'1'}, NestedParties3_NoNested3PartyIDs_4);
      set_field(noNested3PartyIDs_0_1_1, FIX::Nested3PartyRole{1815510551}, NestedParties3_NoNested3PartyIDs_4);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_4);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_9;
        set_field(noNested3PartySubIDs_0_1_2_0, FIX::Nested3PartySubID{"STRING_617241561"}, NstdPtys3SubGrp_NoNested3PartySubIDs_9);
        set_field(noNested3PartySubIDs_0_1_2_0, FIX::Nested3PartySubIDType{1971975137}, NstdPtys3SubGrp_NoNested3PartySubIDs_9);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_9);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::MultilegOrderCancelReplace::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_2;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_1593075880"}, StrategyParametersGrp_NoStrategyParameters_2);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{25}, StrategyParametersGrp_NoStrategyParameters_2);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_2052126494"}, StrategyParametersGrp_NoStrategyParameters_2);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_2);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::MultilegOrderCancelReplace::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_5;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_5);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_5);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_5);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_6;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_6);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_6);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_6);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_2;
  set_field(msg, FIX::TriggerAction{'1'}, TriggeringInstruction_2);
  FIX::TriggerNewPrice TriggerNewPrice_2;
  TriggerNewPrice_2.setString("1487357");
set_field(msg, TriggerNewPrice_2, TriggeringInstruction_2);
  FIX::TriggerNewQty TriggerNewQty_2;
  TriggerNewQty_2.setString("6717460");
set_field(msg, TriggerNewQty_2, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerOrderType{'2'}, TriggeringInstruction_2);
  FIX::TriggerPrice TriggerPrice_2;
  TriggerPrice_2.setString("9264592");
set_field(msg, TriggerPrice_2, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerPriceDirection{'D'}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerPriceType{'3'}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerPriceTypeScope{'0'}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_1575850422"}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerSecurityID{"STRING_108980504"}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_1428326770"}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerSymbol{"STRING_507377214"}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_1862830440"}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_46476296"}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerType{'3'}, TriggeringInstruction_2);
  all_values.push_back(TriggeringInstruction_2);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_61;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_957205837"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{942441624}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_784544166"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{2040431824}, UnderlyingInstrument_61);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_61;
    UnderlyingAdjustedQuantity_61.setString("15596831");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_61, UnderlyingInstrument_61);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_61;
    UnderlyingAllocationPercent_61.setString("56.560000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_61, UnderlyingInstrument_61);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_61;
    UnderlyingAttachmentPoint_61.setString("88.680000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1005275417"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_2126545737"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1930361715"}, UnderlyingInstrument_61);
    FIX::UnderlyingCapValue UnderlyingCapValue_61;
    UnderlyingCapValue_61.setString("19280314");
set_field(noUnderlyings_0_0, UnderlyingCapValue_61, UnderlyingInstrument_61);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_61;
    UnderlyingCashAmount_61.setString("6896630");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_61);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_61;
    UnderlyingContractMultiplier_61.setString("16484117");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{605835913}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_737232591"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1797147444"}, UnderlyingInstrument_61);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_61;
    UnderlyingCouponRate_61.setString("19.240000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_401004634"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_61);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_61;
    UnderlyingCurrentValue_61.setString("13380583");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_61, UnderlyingInstrument_61);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_61;
    UnderlyingDetachmentPoint_61.setString("26.270000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_61, UnderlyingInstrument_61);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_61;
    UnderlyingDirtyPrice_61.setString("9659596");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_61, UnderlyingInstrument_61);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_61;
    UnderlyingEndPrice_61.setString("14470388");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_61, UnderlyingInstrument_61);
    FIX::UnderlyingEndValue UnderlyingEndValue_61;
    UnderlyingEndValue_61.setString("16584793");
set_field(noUnderlyings_0_0, UnderlyingEndValue_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1473336827}, UnderlyingInstrument_61);
    FIX::UnderlyingFXRate UnderlyingFXRate_61;
    UnderlyingFXRate_61.setString("11623856");
set_field(noUnderlyings_0_0, UnderlyingFXRate_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_61);
    FIX::UnderlyingFactor UnderlyingFactor_61;
    UnderlyingFactor_61.setString("11983641");
set_field(noUnderlyings_0_0, UnderlyingFactor_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{131419299}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_514677882"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2140805782"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_915963465"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_407626058"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1553005320"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1524999121"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_285861279"}, UnderlyingInstrument_61);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_61;
    UnderlyingNotionalPercentageOutstanding_61.setString("70.890000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_61);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_61;
    UnderlyingOriginalNotionalPercentageOutstanding_61.setString("93.460000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_191344907"}, UnderlyingInstrument_61);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_61;
    UnderlyingPriceUnitOfMeasureQty_61.setString("462405");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{984388908}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1839756612}, UnderlyingInstrument_61);
    FIX::UnderlyingPx UnderlyingPx_61;
    UnderlyingPx_61.setString("6520764");
set_field(noUnderlyings_0_0, UnderlyingPx_61, UnderlyingInstrument_61);
    FIX::UnderlyingQty UnderlyingQty_61;
    UnderlyingQty_61.setString("17216214");
set_field(noUnderlyings_0_0, UnderlyingQty_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1489420408"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1929658420"}, UnderlyingInstrument_61);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_61;
    UnderlyingRepurchaseRate_61.setString("61.330000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{2065543471}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1319767611"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1313200871"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_148212450"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_138243577"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_612756114"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1806691848"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1611580404"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1775141798"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1364163893"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_61);
    FIX::UnderlyingStartValue UnderlyingStartValue_61;
    UnderlyingStartValue_61.setString("19065610");
set_field(noUnderlyings_0_0, UnderlyingStartValue_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1878841776"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_61);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_61;
    UnderlyingStrikePrice_61.setString("1389841");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_61, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_61304721"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_52556388"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_424845465"}, UnderlyingInstrument_61);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_472101810"}, UnderlyingInstrument_61);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_61;
    UnderlyingUnitOfMeasureQty_61.setString("15566175");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_61, UnderlyingInstrument_61);
    all_values.push_back(UnderlyingInstrument_61);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_129;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_663446718"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_129);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1602858181"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_129);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_129);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_130;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1477973719"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_130);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_355719682"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_130);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_130);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_117;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1052111570"}, UnderlyingStipulations_NoUnderlyingStips_117);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1845140090"}, UnderlyingStipulations_NoUnderlyingStips_117);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_117);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_118;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_2037109448"}, UnderlyingStipulations_NoUnderlyingStips_118);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1027254055"}, UnderlyingStipulations_NoUnderlyingStips_118);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_118);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_131;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1209393412"}, UndlyInstrumentParties_NoUndlyInstrumentParties_131);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_131);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1911412363}, UndlyInstrumentParties_NoUndlyInstrumentParties_131);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_131);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_805727393"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1570620563}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_811733745"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{433385543}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_787300809"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1474194660}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_132;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_192462992"}, UndlyInstrumentParties_NoUndlyInstrumentParties_132);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_132);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{2129977709}, UndlyInstrumentParties_NoUndlyInstrumentParties_132);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_132);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_657643123"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{43798782}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
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
