#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::NewOrderMultileg msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderMultileg_0;
  set_field(msg, FIX::Account{"STRING_448639741"}, NewOrderMultileg_0);
  set_field(msg, FIX::AccountType{6}, NewOrderMultileg_0);
  set_field(msg, FIX::AcctIDSource{1}, NewOrderMultileg_0);
  set_field(msg, FIX::AllocID{"STRING_1886774917"}, NewOrderMultileg_0);
  set_field(msg, FIX::BookingType{2}, NewOrderMultileg_0);
  set_field(msg, FIX::BookingUnit{'2'}, NewOrderMultileg_0);
  set_field(msg, FIX::CancellationRights{'Y'}, NewOrderMultileg_0);
  set_field(msg, FIX::CashMargin{'1'}, NewOrderMultileg_0);
  set_field(msg, FIX::ClOrdID{"STRING_887588165"}, NewOrderMultileg_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_967680924"}, NewOrderMultileg_0);
  set_field(msg, FIX::ClearingFeeIndicator{"STRING_4"}, NewOrderMultileg_0);
  set_field(msg, FIX::ComplianceID{"STRING_2129312901"}, NewOrderMultileg_0);
  set_field(msg, FIX::CoveredOrUncovered{0}, NewOrderMultileg_0);
  set_field(msg, FIX::Currency{"EUR"}, NewOrderMultileg_0);
  set_field(msg, FIX::CustOrderCapacity{1}, NewOrderMultileg_0);
  set_field(msg, FIX::DayBookingInst{'1'}, NewOrderMultileg_0);
  set_field(msg, FIX::Designation{"STRING_1956785615"}, NewOrderMultileg_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(1, 20, 21, 5, 8, 2010)}, NewOrderMultileg_0);
  set_field(msg, FIX::EncodedText{"DATA_647818088"}, NewOrderMultileg_0);
  set_field(msg, FIX::EncodedTextLen{398185368}, NewOrderMultileg_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_749612994"}, NewOrderMultileg_0);
  set_field(msg, FIX::ExDestinationIDSource{'E'}, NewOrderMultileg_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_r"}, NewOrderMultileg_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_764855314"}, NewOrderMultileg_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(20, 15, 36, 0, 12, 2008)}, NewOrderMultileg_0);
  set_field(msg, FIX::ForexReq{false}, NewOrderMultileg_0);
  set_field(msg, FIX::GTBookingInst{1}, NewOrderMultileg_0);
  set_field(msg, FIX::HandlInst{'1'}, NewOrderMultileg_0);
  set_field(msg, FIX::IOIID{"STRING_1911794404"}, NewOrderMultileg_0);
  set_field(msg, FIX::LocateReqd{true}, NewOrderMultileg_0);
  FIX::MatchIncrement MatchIncrement_5;
  MatchIncrement_5.setString("3751527");
set_field(msg, MatchIncrement_5, NewOrderMultileg_0);
  FIX::MaxFloor MaxFloor_5;
  MaxFloor_5.setString("10246524");
set_field(msg, MaxFloor_5, NewOrderMultileg_0);
  set_field(msg, FIX::MaxPriceLevels{1041199169}, NewOrderMultileg_0);
  FIX::MaxShow MaxShow_5;
  MaxShow_5.setString("11798835");
set_field(msg, MaxShow_5, NewOrderMultileg_0);
  FIX::MinQty MinQty_9;
  MinQty_9.setString("7308737");
set_field(msg, MinQty_9, NewOrderMultileg_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'N'}, NewOrderMultileg_0);
  set_field(msg, FIX::MultiLegRptTypeReq{1}, NewOrderMultileg_0);
  set_field(msg, FIX::MultilegModel{0}, NewOrderMultileg_0);
  set_field(msg, FIX::MultilegPriceMethod{3}, NewOrderMultileg_0);
  set_field(msg, FIX::OrdType{'B'}, NewOrderMultileg_0);
  set_field(msg, FIX::OrderCapacity{'P'}, NewOrderMultileg_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_E"}, NewOrderMultileg_0);
  FIX::ParticipationRate ParticipationRate_5;
  ParticipationRate_5.setString("26.240000");
set_field(msg, ParticipationRate_5, NewOrderMultileg_0);
  set_field(msg, FIX::PositionEffect{'R'}, NewOrderMultileg_0);
  set_field(msg, FIX::PreTradeAnonymity{true}, NewOrderMultileg_0);
  set_field(msg, FIX::PreallocMethod{'0'}, NewOrderMultileg_0);
  FIX::PrevClosePx PrevClosePx_5;
  PrevClosePx_5.setString("4164504");
set_field(msg, PrevClosePx_5, NewOrderMultileg_0);
  FIX::Price Price_15;
  Price_15.setString("1820054");
set_field(msg, Price_15, NewOrderMultileg_0);
  set_field(msg, FIX::PriceProtectionScope{'1'}, NewOrderMultileg_0);
  set_field(msg, FIX::PriceType{17}, NewOrderMultileg_0);
  set_field(msg, FIX::ProcessCode{'6'}, NewOrderMultileg_0);
  set_field(msg, FIX::QtyType{0}, NewOrderMultileg_0);
  set_field(msg, FIX::QuoteID{"STRING_822742101"}, NewOrderMultileg_0);
  set_field(msg, FIX::RefOrderID{"STRING_1816064613"}, NewOrderMultileg_0);
  set_field(msg, FIX::RefOrderIDSource{'1'}, NewOrderMultileg_0);
  set_field(msg, FIX::RegistID{"STRING_697458885"}, NewOrderMultileg_0);
  FIX::RiskFreeRate RiskFreeRate_2;
  RiskFreeRate_2.setString("11206196");
set_field(msg, RiskFreeRate_2, NewOrderMultileg_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1440444739"}, NewOrderMultileg_0);
  set_field(msg, FIX::SettlCurrency{"JPY"}, NewOrderMultileg_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_896538701"}, NewOrderMultileg_0);
  set_field(msg, FIX::SettlType{"STRING_7"}, NewOrderMultileg_0);
  set_field(msg, FIX::Side{'F'}, NewOrderMultileg_0);
  set_field(msg, FIX::SolicitedFlag{false}, NewOrderMultileg_0);
  FIX::StopPx StopPx_5;
  StopPx_5.setString("9474093");
set_field(msg, StopPx_5, NewOrderMultileg_0);
  FIX::SwapPoints SwapPoints_1;
  SwapPoints_1.setString("4929729");
set_field(msg, SwapPoints_1, NewOrderMultileg_0);
  set_field(msg, FIX::TargetStrategy{3}, NewOrderMultileg_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_1763515458"}, NewOrderMultileg_0);
  set_field(msg, FIX::Text{"STRING_1629751532"}, NewOrderMultileg_0);
  set_field(msg, FIX::TimeInForce{'8'}, NewOrderMultileg_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1370595884"}, NewOrderMultileg_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_1513523517"}, NewOrderMultileg_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(12, 30, 36, 27, 2, 2015)}, NewOrderMultileg_0);
  all_values.push_back(NewOrderMultileg_0);

  all_compo_names.insert("NewOrderMultileg");

  // CommissionData
  multiset<string> CommissionData_15;
  set_field(msg, FIX::CommCurrency{"JPY"}, CommissionData_15);
  set_field(msg, FIX::CommType{'3'}, CommissionData_15);
  FIX::Commission Commission_15;
  Commission_15.setString("19745139");
set_field(msg, Commission_15, CommissionData_15);
  set_field(msg, FIX::FundRenewWaiv{'Y'}, CommissionData_15);
  all_values.push_back(CommissionData_15);
  all_compo_names.insert(".");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_5;
  set_field(msg, FIX::DiscretionInst{'7'}, DiscretionInstructions_5);
  set_field(msg, FIX::DiscretionLimitType{2}, DiscretionInstructions_5);
  set_field(msg, FIX::DiscretionMoveType{0}, DiscretionInstructions_5);
  set_field(msg, FIX::DiscretionOffsetType{3}, DiscretionInstructions_5);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_5;
  DiscretionOffsetValue_5.setString("10861714");
set_field(msg, DiscretionOffsetValue_5, DiscretionInstructions_5);
  set_field(msg, FIX::DiscretionRoundDirection{2}, DiscretionInstructions_5);
  set_field(msg, FIX::DiscretionScope{4}, DiscretionInstructions_5);
  all_values.push_back(DiscretionInstructions_5);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_5;
  FIX::DisplayHighQty DisplayHighQty_5;
  DisplayHighQty_5.setString("19827101");
set_field(msg, DisplayHighQty_5, DisplayInstruction_5);
  FIX::DisplayLowQty DisplayLowQty_5;
  DisplayLowQty_5.setString("17441307");
set_field(msg, DisplayLowQty_5, DisplayInstruction_5);
  set_field(msg, FIX::DisplayMethod{'3'}, DisplayInstruction_5);
  FIX::DisplayMinIncr DisplayMinIncr_5;
  DisplayMinIncr_5.setString("17729643");
set_field(msg, DisplayMinIncr_5, DisplayInstruction_5);
  FIX::DisplayQty DisplayQty_5;
  DisplayQty_5.setString("5440564");
set_field(msg, DisplayQty_5, DisplayInstruction_5);
  set_field(msg, FIX::DisplayWhen{'2'}, DisplayInstruction_5);
  FIX::RefreshQty RefreshQty_5;
  RefreshQty_5.setString("2662360");
set_field(msg, RefreshQty_5, DisplayInstruction_5);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_5;
  SecondaryDisplayQty_5.setString("1600882");
set_field(msg, SecondaryDisplayQty_5, DisplayInstruction_5);
  all_values.push_back(DisplayInstruction_5);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_39;
  FIX::AttachmentPoint AttachmentPoint_39;
  AttachmentPoint_39.setString("39.910000");
set_field(msg, AttachmentPoint_39, Instrument_39);
  set_field(msg, FIX::CFICode{"STRING_1693914295"}, Instrument_39);
  set_field(msg, FIX::CPProgram{99}, Instrument_39);
  set_field(msg, FIX::CPRegType{"STRING_551003861"}, Instrument_39);
  FIX::CapPrice CapPrice_39;
  CapPrice_39.setString("4357233");
set_field(msg, CapPrice_39, Instrument_39);
  FIX::ContractMultiplier ContractMultiplier_39;
  ContractMultiplier_39.setString("19372189");
set_field(msg, ContractMultiplier_39, Instrument_39);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_39);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1184815792"}, Instrument_39);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_2129305796"}, Instrument_39);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_762714244"}, Instrument_39);
  FIX::CouponRate CouponRate_39;
  CouponRate_39.setString("37.050000");
set_field(msg, CouponRate_39, Instrument_39);
  set_field(msg, FIX::CreditRating{"STRING_724316264"}, Instrument_39);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1826745350"}, Instrument_39);
  FIX::DetachmentPoint DetachmentPoint_39;
  DetachmentPoint_39.setString("66.920000");
set_field(msg, DetachmentPoint_39, Instrument_39);
  set_field(msg, FIX::EncodedIssuer{"DATA_551346572"}, Instrument_39);
  set_field(msg, FIX::EncodedIssuerLen{1566034909}, Instrument_39);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1331480643"}, Instrument_39);
  set_field(msg, FIX::EncodedSecurityDescLen{197073263}, Instrument_39);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_39);
  FIX::Factor Factor_39;
  Factor_39.setString("18941742");
set_field(msg, Factor_39, Instrument_39);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_39);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_39);
  FIX::FloorPrice FloorPrice_39;
  FloorPrice_39.setString("11943145");
set_field(msg, FloorPrice_39, Instrument_39);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_39);
  set_field(msg, FIX::InstrRegistry{"STRING_1428551846"}, Instrument_39);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_39);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_743951884"}, Instrument_39);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1972608256"}, Instrument_39);
  set_field(msg, FIX::Issuer{"STRING_1959250199"}, Instrument_39);
  set_field(msg, FIX::ListMethod{1}, Instrument_39);
  set_field(msg, FIX::LocaleOfIssue{"STRING_2132696476"}, Instrument_39);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_996730543"}, Instrument_39);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_556618598"}, Instrument_39);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1515896932"}, Instrument_39);
  FIX::MinPriceIncrement MinPriceIncrement_39;
  MinPriceIncrement_39.setString("15477344");
set_field(msg, MinPriceIncrement_39, Instrument_39);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_39;
  MinPriceIncrementAmount_39.setString("9923419");
set_field(msg, MinPriceIncrementAmount_39, Instrument_39);
  set_field(msg, FIX::NTPositionLimit{1305632249}, Instrument_39);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_39;
  NotionalPercentageOutstanding_39.setString("82.070000");
set_field(msg, NotionalPercentageOutstanding_39, Instrument_39);
  set_field(msg, FIX::OptAttribute{'2'}, Instrument_39);
  FIX::OptPayoutAmount OptPayoutAmount_39;
  OptPayoutAmount_39.setString("12874543");
set_field(msg, OptPayoutAmount_39, Instrument_39);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_39);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_39;
  OriginalNotionalPercentageOutstanding_39.setString("77.630000");
set_field(msg, OriginalNotionalPercentageOutstanding_39, Instrument_39);
  set_field(msg, FIX::Pool{"STRING_2011770661"}, Instrument_39);
  set_field(msg, FIX::PositionLimit{290860506}, Instrument_39);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_39);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_415633585"}, Instrument_39);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_39;
  PriceUnitOfMeasureQty_39.setString("18568954");
set_field(msg, PriceUnitOfMeasureQty_39, Instrument_39);
  set_field(msg, FIX::Product{2}, Instrument_39);
  set_field(msg, FIX::ProductComplex{"STRING_612706848"}, Instrument_39);
  set_field(msg, FIX::PutOrCall{1}, Instrument_39);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_818198385"}, Instrument_39);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1895951542"}, Instrument_39);
  FIX::RepurchaseRate RepurchaseRate_39;
  RepurchaseRate_39.setString("62.160000");
set_field(msg, RepurchaseRate_39, Instrument_39);
  set_field(msg, FIX::RepurchaseTerm{2012512948}, Instrument_39);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_39);
  set_field(msg, FIX::SecurityDesc{"STRING_677684414"}, Instrument_39);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_121583392"}, Instrument_39);
  set_field(msg, FIX::SecurityGroup{"STRING_1610890956"}, Instrument_39);
  set_field(msg, FIX::SecurityID{"STRING_502809022"}, Instrument_39);
  set_field(msg, FIX::SecurityIDSource{"STRING_3"}, Instrument_39);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_39);
  set_field(msg, FIX::SecuritySubType{"STRING_488021850"}, Instrument_39);
  set_field(msg, FIX::SecurityType{"STRING_FAC"}, Instrument_39);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_39);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_39);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_330331243"}, Instrument_39);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_2022555770"}, Instrument_39);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_39);
  FIX::StrikeMultiplier StrikeMultiplier_39;
  StrikeMultiplier_39.setString("20522298");
set_field(msg, StrikeMultiplier_39, Instrument_39);
  FIX::StrikePrice StrikePrice_39;
  StrikePrice_39.setString("3020381");
set_field(msg, StrikePrice_39, Instrument_39);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_39);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_39;
  StrikePriceBoundaryPrecision_39.setString("39.430000");
set_field(msg, StrikePriceBoundaryPrecision_39, Instrument_39);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_39);
  FIX::StrikeValue StrikeValue_39;
  StrikeValue_39.setString("10816751");
set_field(msg, StrikeValue_39, Instrument_39);
  set_field(msg, FIX::Symbol{"STRING_1790361102"}, Instrument_39);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_39);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_39);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_39);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_39);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_39;
  UnitOfMeasureQty_39.setString("3557983");
set_field(msg, UnitOfMeasureQty_39, Instrument_39);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_39);
  all_values.push_back(Instrument_39);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderMultileg::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_82;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_82);
    FIX::ComplexEventPrice ComplexEventPrice_82;
    ComplexEventPrice_82.setString("13976129");
set_field(noComplexEvents_0_0, ComplexEventPrice_82, ComplexEvents_NoComplexEvents_82);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_82);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_82;
    ComplexEventPriceBoundaryPrecision_82.setString("53.370000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_82, ComplexEvents_NoComplexEvents_82);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_82);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_82);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_82;
    ComplexOptPayoutAmount_82.setString("7854243");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_82, ComplexEvents_NoComplexEvents_82);
    all_values.push_back(ComplexEvents_NoComplexEvents_82);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_172;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 57, 23, 5, 5, 2017)}, ComplexEventDates_NoComplexEventDates_172);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 25, 15, 1, 5, 2003)}, ComplexEventDates_NoComplexEventDates_172);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_172);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_347;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 55, 11)}, ComplexEventTimes_NoComplexEventTimes_347);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 45, 25)}, ComplexEventTimes_NoComplexEventTimes_347);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_347);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_348;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 4, 29)}, ComplexEventTimes_NoComplexEventTimes_348);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 21, 4)}, ComplexEventTimes_NoComplexEventTimes_348);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_348);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_173;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 1, 0, 8, 7, 2011)}, ComplexEventDates_NoComplexEventDates_173);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 31, 5, 14, 12, 2014)}, ComplexEventDates_NoComplexEventDates_173);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_173);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_349;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 48, 37)}, ComplexEventTimes_NoComplexEventTimes_349);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 22, 50)}, ComplexEventTimes_NoComplexEventTimes_349);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_349);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_350;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 46, 24)}, ComplexEventTimes_NoComplexEventTimes_350);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 45, 30)}, ComplexEventTimes_NoComplexEventTimes_350);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_350);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_174;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 32, 34, 16, 3, 2004)}, ComplexEventDates_NoComplexEventDates_174);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 3, 51, 5, 3, 2009)}, ComplexEventDates_NoComplexEventDates_174);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_174);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_351;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 39, 1)}, ComplexEventTimes_NoComplexEventTimes_351);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 15, 7)}, ComplexEventTimes_NoComplexEventTimes_351);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_351);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_352;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 53, 9)}, ComplexEventTimes_NoComplexEventTimes_352);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 46, 5)}, ComplexEventTimes_NoComplexEventTimes_352);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_352);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_353;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 37, 52)}, ComplexEventTimes_NoComplexEventTimes_353);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 24, 49)}, ComplexEventTimes_NoComplexEventTimes_353);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_353);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::NewOrderMultileg::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_82;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_327025767"}, EvntGrp_NoEvents_82);
    FIX::EventPx EventPx_82;
    EventPx_82.setString("2025146");
set_field(noEvents_0_0, EventPx_82, EvntGrp_NoEvents_82);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1274602324"}, EvntGrp_NoEvents_82);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(23, 46, 6, 18, 6, 2001)}, EvntGrp_NoEvents_82);
    set_field(noEvents_0_0, FIX::EventType{99}, EvntGrp_NoEvents_82);
    all_values.push_back(EvntGrp_NoEvents_82);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_83;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_706194899"}, EvntGrp_NoEvents_83);
    FIX::EventPx EventPx_83;
    EventPx_83.setString("615312");
set_field(noEvents_0_1, EventPx_83, EvntGrp_NoEvents_83);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1215376246"}, EvntGrp_NoEvents_83);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(23, 31, 44, 22, 3, 2005)}, EvntGrp_NoEvents_83);
    set_field(noEvents_0_1, FIX::EventType{5}, EvntGrp_NoEvents_83);
    all_values.push_back(EvntGrp_NoEvents_83);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_84;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1347246212"}, EvntGrp_NoEvents_84);
    FIX::EventPx EventPx_84;
    EventPx_84.setString("17205384");
set_field(noEvents_0_2, EventPx_84, EvntGrp_NoEvents_84);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1403438921"}, EvntGrp_NoEvents_84);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(5, 25, 40, 7, 8, 2007)}, EvntGrp_NoEvents_84);
    set_field(noEvents_0_2, FIX::EventType{4}, EvntGrp_NoEvents_84);
    all_values.push_back(EvntGrp_NoEvents_84);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_73;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_499213840"}, InstrumentParties_NoInstrumentParties_73);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_73);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{592351814}, InstrumentParties_NoInstrumentParties_73);
    all_values.push_back(InstrumentParties_NoInstrumentParties_73);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_586197333"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1196401291}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_504589006"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{994164072}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_74;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1902596190"}, InstrumentParties_NoInstrumentParties_74);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_74);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{62056670}, InstrumentParties_NoInstrumentParties_74);
    all_values.push_back(InstrumentParties_NoInstrumentParties_74);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_637674984"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{713650522}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_75;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_1880253642"}, InstrumentParties_NoInstrumentParties_75);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_75);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1551441336}, InstrumentParties_NoInstrumentParties_75);
    all_values.push_back(InstrumentParties_NoInstrumentParties_75);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1306593747"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{751203900}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderMultileg::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_83;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_562549020"}, SecAltIDGrp_NoSecurityAltID_83);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_986764696"}, SecAltIDGrp_NoSecurityAltID_83);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_83);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_78;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1100233449"}, SecurityXML_78);
  set_field(msg, FIX::SecurityXMLLen{93811277}, SecurityXML_78);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1344944756"}, SecurityXML_78);
  all_values.push_back(SecurityXML_78);
  all_compo_names.insert("..");

  // LegOrdGrp
  // Group LegOrdGrp.NoLegs
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_0;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_1;
    set_field(noLegs_0_0, FIX::LegAllocID{"STRING_942493189"}, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegCoveredOrUncovered{2030150583}, LegOrdGrp_NoLegs_1);
    FIX::LegCurrencyRatio LegCurrencyRatio_2;
    LegCurrencyRatio_2.setString("17816548");
set_field(noLegs_0_0, LegCurrencyRatio_2, LegOrdGrp_NoLegs_1);
    FIX::LegDividendYield LegDividendYield_2;
    LegDividendYield_2.setString("37.760000");
set_field(noLegs_0_0, LegDividendYield_2, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegExecInst{"MULTIPLECHARVALUE_381880776"}, LegOrdGrp_NoLegs_1);
    FIX::LegOrderQty LegOrderQty_2;
    LegOrderQty_2.setString("6912109");
set_field(noLegs_0_0, LegOrderQty_2, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegPositionEffect{'1'}, LegOrdGrp_NoLegs_1);
    FIX::LegQty LegQty_2;
    LegQty_2.setString("15674956");
set_field(noLegs_0_0, LegQty_2, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_1277408300"}, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegSettlCurrency{"GBP"}, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_124088724"}, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegSettlType{'3'}, LegOrdGrp_NoLegs_1);
    set_field(noLegs_0_0, FIX::LegSwapType{2}, LegOrdGrp_NoLegs_1);
    FIX::LegVolatility LegVolatility_2;
    LegVolatility_2.setString("1861453");
set_field(noLegs_0_0, LegVolatility_2, LegOrdGrp_NoLegs_1);
    all_values.push_back(LegOrdGrp_NoLegs_1);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_59;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_66804554"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1128396266}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_899795917"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1947058197}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1939277929"}, InstrumentLeg_59);
    FIX::LegContractMultiplier LegContractMultiplier_59;
    LegContractMultiplier_59.setString("3037536");
set_field(noLegs_0_0, LegContractMultiplier_59, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{331482826}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1098388028"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1054957506"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_436445894"}, InstrumentLeg_59);
    FIX::LegCouponRate LegCouponRate_59;
    LegCouponRate_59.setString("70.480000");
set_field(noLegs_0_0, LegCouponRate_59, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_2041722202"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1239183311"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1802624335}, InstrumentLeg_59);
    FIX::LegFactor LegFactor_59;
    LegFactor_59.setString("5497578");
set_field(noLegs_0_0, LegFactor_59, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1121850246}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1436795542"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1468051643"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1503731022"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_2128006509"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_831213586"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_923743017"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1257931161"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1390776820"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'8'}, InstrumentLeg_59);
    FIX::LegOptionRatio LegOptionRatio_59;
    LegOptionRatio_59.setString("13820198");
set_field(noLegs_0_0, LegOptionRatio_59, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1705452596"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1339065299"}, InstrumentLeg_59);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_59;
    LegPriceUnitOfMeasureQty_59.setString("15681652");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_59, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegProduct{1772257151}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegPutOrCall{319977917}, InstrumentLeg_59);
    FIX::LegRatioQty LegRatioQty_59;
    LegRatioQty_59.setString("3204775");
set_field(noLegs_0_0, LegRatioQty_59, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1571831700"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_111772198"}, InstrumentLeg_59);
    FIX::LegRepurchaseRate LegRepurchaseRate_59;
    LegRepurchaseRate_59.setString("11.550000");
set_field(noLegs_0_0, LegRepurchaseRate_59, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1903314526}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1210160226"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1679188661"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_192276772"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_723613626"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1573427215"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1728956115"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegSide{'3'}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_665126878"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_59);
    FIX::LegStrikePrice LegStrikePrice_59;
    LegStrikePrice_59.setString("17869771");
set_field(noLegs_0_0, LegStrikePrice_59, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_673408697"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_201204167"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1143224499"}, InstrumentLeg_59);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_653931558"}, InstrumentLeg_59);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_59;
    LegUnitOfMeasureQty_59.setString("10324177");
set_field(noLegs_0_0, LegUnitOfMeasureQty_59, InstrumentLeg_59);
    all_values.push_back(InstrumentLeg_59);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_121;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1911862719"}, LegSecAltIDGrp_NoLegSecurityAltID_121);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_275710925"}, LegSecAltIDGrp_NoLegSecurityAltID_121);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_121);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_5;
      set_field(noLegAllocs_0_1_0, FIX::LegAllocAccount{"STRING_1146398956"}, LegPreAllocGrp_NoLegAllocs_5);
      set_field(noLegAllocs_0_1_0, FIX::LegAllocAcctIDSource{"STRING_1981163521"}, LegPreAllocGrp_NoLegAllocs_5);
      FIX::LegAllocQty LegAllocQty_5;
      LegAllocQty_5.setString("21068931");
set_field(noLegAllocs_0_1_0, LegAllocQty_5, LegPreAllocGrp_NoLegAllocs_5);
      set_field(noLegAllocs_0_1_0, FIX::LegAllocSettlCurrency{"JPY"}, LegPreAllocGrp_NoLegAllocs_5);
      set_field(noLegAllocs_0_1_0, FIX::LegIndividualAllocID{"STRING_279387454"}, LegPreAllocGrp_NoLegAllocs_5);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_5);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_30;
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyID{"STRING_1030285076"}, NestedParties2_NoNested2PartyIDs_30);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyIDSource{'3'}, NestedParties2_NoNested2PartyIDs_30);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyRole{1511789293}, NestedParties2_NoNested2PartyIDs_30);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_30);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_64;
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubID{"STRING_1601319878"}, NstdPtys2SubGrp_NoNested2PartySubIDs_64);
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubIDType{1043494306}, NstdPtys2SubGrp_NoNested2PartySubIDs_64);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_64);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_65;
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubID{"STRING_978392727"}, NstdPtys2SubGrp_NoNested2PartySubIDs_65);
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubIDType{177449856}, NstdPtys2SubGrp_NoNested2PartySubIDs_65);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_65);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_66;
          set_field(noNested2PartySubIDs_0_0_0_3_2, FIX::Nested2PartySubID{"STRING_469437874"}, NstdPtys2SubGrp_NoNested2PartySubIDs_66);
          set_field(noNested2PartySubIDs_0_0_0_3_2, FIX::Nested2PartySubIDType{559865195}, NstdPtys2SubGrp_NoNested2PartySubIDs_66);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_66);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_31;
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyID{"STRING_508328161"}, NestedParties2_NoNested2PartyIDs_31);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_31);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyRole{1943961997}, NestedParties2_NoNested2PartyIDs_31);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_31);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_67;
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubID{"STRING_774058229"}, NstdPtys2SubGrp_NoNested2PartySubIDs_67);
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubIDType{469887046}, NstdPtys2SubGrp_NoNested2PartySubIDs_67);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_67);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_68;
          set_field(noNested2PartySubIDs_0_0_1_3_1, FIX::Nested2PartySubID{"STRING_1590168499"}, NstdPtys2SubGrp_NoNested2PartySubIDs_68);
          set_field(noNested2PartySubIDs_0_0_1_3_1, FIX::Nested2PartySubIDType{1917282729}, NstdPtys2SubGrp_NoNested2PartySubIDs_68);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_68);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_69;
          set_field(noNested2PartySubIDs_0_0_1_3_2, FIX::Nested2PartySubID{"STRING_1123818604"}, NstdPtys2SubGrp_NoNested2PartySubIDs_69);
          set_field(noNested2PartySubIDs_0_0_1_3_2, FIX::Nested2PartySubIDType{475102604}, NstdPtys2SubGrp_NoNested2PartySubIDs_69);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_69);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_32;
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyID{"STRING_1836766597"}, NestedParties2_NoNested2PartyIDs_32);
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_32);
        set_field(noNested2PartyIDs_0_0_2_2, FIX::Nested2PartyRole{750813529}, NestedParties2_NoNested2PartyIDs_32);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_32);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_70;
          set_field(noNested2PartySubIDs_0_0_2_3_0, FIX::Nested2PartySubID{"STRING_2034596632"}, NstdPtys2SubGrp_NoNested2PartySubIDs_70);
          set_field(noNested2PartySubIDs_0_0_2_3_0, FIX::Nested2PartySubIDType{584493403}, NstdPtys2SubGrp_NoNested2PartySubIDs_70);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_70);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_71;
          set_field(noNested2PartySubIDs_0_0_2_3_1, FIX::Nested2PartySubID{"STRING_416520372"}, NstdPtys2SubGrp_NoNested2PartySubIDs_71);
          set_field(noNested2PartySubIDs_0_0_2_3_1, FIX::Nested2PartySubIDType{454193573}, NstdPtys2SubGrp_NoNested2PartySubIDs_71);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_71);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_2.addGroup(noNested2PartySubIDs_0_0_2_3_1);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_2);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_0_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_6;
      set_field(noLegAllocs_0_1_1, FIX::LegAllocAccount{"STRING_42946779"}, LegPreAllocGrp_NoLegAllocs_6);
      set_field(noLegAllocs_0_1_1, FIX::LegAllocAcctIDSource{"STRING_695907826"}, LegPreAllocGrp_NoLegAllocs_6);
      FIX::LegAllocQty LegAllocQty_6;
      LegAllocQty_6.setString("13417517");
set_field(noLegAllocs_0_1_1, LegAllocQty_6, LegPreAllocGrp_NoLegAllocs_6);
      set_field(noLegAllocs_0_1_1, FIX::LegAllocSettlCurrency{"USD"}, LegPreAllocGrp_NoLegAllocs_6);
      set_field(noLegAllocs_0_1_1, FIX::LegIndividualAllocID{"STRING_706057357"}, LegPreAllocGrp_NoLegAllocs_6);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_6);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_33;
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyID{"STRING_540903708"}, NestedParties2_NoNested2PartyIDs_33);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_33);
        set_field(noNested2PartyIDs_0_1_2_0, FIX::Nested2PartyRole{690256890}, NestedParties2_NoNested2PartyIDs_33);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_33);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_72;
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubID{"STRING_71505889"}, NstdPtys2SubGrp_NoNested2PartySubIDs_72);
          set_field(noNested2PartySubIDs_0_1_0_3_0, FIX::Nested2PartySubIDType{1250122085}, NstdPtys2SubGrp_NoNested2PartySubIDs_72);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_72);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_73;
          set_field(noNested2PartySubIDs_0_1_0_3_1, FIX::Nested2PartySubID{"STRING_1226681726"}, NstdPtys2SubGrp_NoNested2PartySubIDs_73);
          set_field(noNested2PartySubIDs_0_1_0_3_1, FIX::Nested2PartySubIDType{1206070642}, NstdPtys2SubGrp_NoNested2PartySubIDs_73);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_73);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_0.addGroup(noNested2PartySubIDs_0_1_0_3_1);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_34;
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyID{"STRING_1046600435"}, NestedParties2_NoNested2PartyIDs_34);
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyIDSource{'4'}, NestedParties2_NoNested2PartyIDs_34);
        set_field(noNested2PartyIDs_0_1_2_1, FIX::Nested2PartyRole{1980128871}, NestedParties2_NoNested2PartyIDs_34);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_34);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_74;
          set_field(noNested2PartySubIDs_0_1_1_3_0, FIX::Nested2PartySubID{"STRING_2058330910"}, NstdPtys2SubGrp_NoNested2PartySubIDs_74);
          set_field(noNested2PartySubIDs_0_1_1_3_0, FIX::Nested2PartySubIDType{1749927952}, NstdPtys2SubGrp_NoNested2PartySubIDs_74);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_74);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_1.addGroup(noNested2PartySubIDs_0_1_1_3_0);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_1_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_35;
        set_field(noNested2PartyIDs_0_1_2_2, FIX::Nested2PartyID{"STRING_492822438"}, NestedParties2_NoNested2PartyIDs_35);
        set_field(noNested2PartyIDs_0_1_2_2, FIX::Nested2PartyIDSource{'3'}, NestedParties2_NoNested2PartyIDs_35);
        set_field(noNested2PartyIDs_0_1_2_2, FIX::Nested2PartyRole{1439210902}, NestedParties2_NoNested2PartyIDs_35);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_35);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_75;
          set_field(noNested2PartySubIDs_0_1_2_3_0, FIX::Nested2PartySubID{"STRING_1136763396"}, NstdPtys2SubGrp_NoNested2PartySubIDs_75);
          set_field(noNested2PartySubIDs_0_1_2_3_0, FIX::Nested2PartySubIDType{1896321737}, NstdPtys2SubGrp_NoNested2PartySubIDs_75);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_75);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_2.addGroup(noNested2PartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_76;
          set_field(noNested2PartySubIDs_0_1_2_3_1, FIX::Nested2PartySubID{"STRING_1268133097"}, NstdPtys2SubGrp_NoNested2PartySubIDs_76);
          set_field(noNested2PartySubIDs_0_1_2_3_1, FIX::Nested2PartySubIDType{1721256799}, NstdPtys2SubGrp_NoNested2PartySubIDs_76);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_76);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_2.addGroup(noNested2PartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_77;
          set_field(noNested2PartySubIDs_0_1_2_3_2, FIX::Nested2PartySubID{"STRING_165358462"}, NstdPtys2SubGrp_NoNested2PartySubIDs_77);
          set_field(noNested2PartySubIDs_0_1_2_3_2, FIX::Nested2PartySubIDType{1722326670}, NstdPtys2SubGrp_NoNested2PartySubIDs_77);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_77);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_1_2_2.addGroup(noNested2PartySubIDs_0_1_2_3_2);
        }
        noLegAllocs_0_1_1.addGroup(noNested2PartyIDs_0_1_2_2);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_0_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_7;
      set_field(noLegAllocs_0_1_2, FIX::LegAllocAccount{"STRING_1764203578"}, LegPreAllocGrp_NoLegAllocs_7);
      set_field(noLegAllocs_0_1_2, FIX::LegAllocAcctIDSource{"STRING_861266288"}, LegPreAllocGrp_NoLegAllocs_7);
      FIX::LegAllocQty LegAllocQty_7;
      LegAllocQty_7.setString("9165947");
set_field(noLegAllocs_0_1_2, LegAllocQty_7, LegPreAllocGrp_NoLegAllocs_7);
      set_field(noLegAllocs_0_1_2, FIX::LegAllocSettlCurrency{"CHF"}, LegPreAllocGrp_NoLegAllocs_7);
      set_field(noLegAllocs_0_1_2, FIX::LegIndividualAllocID{"STRING_1622652091"}, LegPreAllocGrp_NoLegAllocs_7);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_7);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_36;
        set_field(noNested2PartyIDs_0_2_2_0, FIX::Nested2PartyID{"STRING_341753827"}, NestedParties2_NoNested2PartyIDs_36);
        set_field(noNested2PartyIDs_0_2_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_36);
        set_field(noNested2PartyIDs_0_2_2_0, FIX::Nested2PartyRole{1092072840}, NestedParties2_NoNested2PartyIDs_36);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_36);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_78;
          set_field(noNested2PartySubIDs_0_2_0_3_0, FIX::Nested2PartySubID{"STRING_1296225996"}, NstdPtys2SubGrp_NoNested2PartySubIDs_78);
          set_field(noNested2PartySubIDs_0_2_0_3_0, FIX::Nested2PartySubIDType{194711277}, NstdPtys2SubGrp_NoNested2PartySubIDs_78);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_78);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_79;
          set_field(noNested2PartySubIDs_0_2_0_3_1, FIX::Nested2PartySubID{"STRING_139305470"}, NstdPtys2SubGrp_NoNested2PartySubIDs_79);
          set_field(noNested2PartySubIDs_0_2_0_3_1, FIX::Nested2PartySubIDType{354812990}, NstdPtys2SubGrp_NoNested2PartySubIDs_79);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_79);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_80;
          set_field(noNested2PartySubIDs_0_2_0_3_2, FIX::Nested2PartySubID{"STRING_1241311712"}, NstdPtys2SubGrp_NoNested2PartySubIDs_80);
          set_field(noNested2PartySubIDs_0_2_0_3_2, FIX::Nested2PartySubIDType{607467881}, NstdPtys2SubGrp_NoNested2PartySubIDs_80);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_80);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_0.addGroup(noNested2PartySubIDs_0_2_0_3_2);
        }
        noLegAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_37;
        set_field(noNested2PartyIDs_0_2_2_1, FIX::Nested2PartyID{"STRING_187458213"}, NestedParties2_NoNested2PartyIDs_37);
        set_field(noNested2PartyIDs_0_2_2_1, FIX::Nested2PartyIDSource{'6'}, NestedParties2_NoNested2PartyIDs_37);
        set_field(noNested2PartyIDs_0_2_2_1, FIX::Nested2PartyRole{518315143}, NestedParties2_NoNested2PartyIDs_37);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_37);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_81;
          set_field(noNested2PartySubIDs_0_2_1_3_0, FIX::Nested2PartySubID{"STRING_1103137984"}, NstdPtys2SubGrp_NoNested2PartySubIDs_81);
          set_field(noNested2PartySubIDs_0_2_1_3_0, FIX::Nested2PartySubIDType{904265009}, NstdPtys2SubGrp_NoNested2PartySubIDs_81);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_81);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_82;
          set_field(noNested2PartySubIDs_0_2_1_3_1, FIX::Nested2PartySubID{"STRING_1229113420"}, NstdPtys2SubGrp_NoNested2PartySubIDs_82);
          set_field(noNested2PartySubIDs_0_2_1_3_1, FIX::Nested2PartySubIDType{336674449}, NstdPtys2SubGrp_NoNested2PartySubIDs_82);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_82);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_1_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_83;
          set_field(noNested2PartySubIDs_0_2_1_3_2, FIX::Nested2PartySubID{"STRING_2041028405"}, NstdPtys2SubGrp_NoNested2PartySubIDs_83);
          set_field(noNested2PartySubIDs_0_2_1_3_2, FIX::Nested2PartySubIDType{977951509}, NstdPtys2SubGrp_NoNested2PartySubIDs_83);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_83);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_1.addGroup(noNested2PartySubIDs_0_2_1_3_2);
        }
        noLegAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_2_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_38;
        set_field(noNested2PartyIDs_0_2_2_2, FIX::Nested2PartyID{"STRING_1604807547"}, NestedParties2_NoNested2PartyIDs_38);
        set_field(noNested2PartyIDs_0_2_2_2, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_38);
        set_field(noNested2PartyIDs_0_2_2_2, FIX::Nested2PartyRole{1143309971}, NestedParties2_NoNested2PartyIDs_38);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_38);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_84;
          set_field(noNested2PartySubIDs_0_2_2_3_0, FIX::Nested2PartySubID{"STRING_1231521487"}, NstdPtys2SubGrp_NoNested2PartySubIDs_84);
          set_field(noNested2PartySubIDs_0_2_2_3_0, FIX::Nested2PartySubIDType{2004576260}, NstdPtys2SubGrp_NoNested2PartySubIDs_84);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_84);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_2.addGroup(noNested2PartySubIDs_0_2_2_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_85;
          set_field(noNested2PartySubIDs_0_2_2_3_1, FIX::Nested2PartySubID{"STRING_2096245303"}, NstdPtys2SubGrp_NoNested2PartySubIDs_85);
          set_field(noNested2PartySubIDs_0_2_2_3_1, FIX::Nested2PartySubIDType{1921473273}, NstdPtys2SubGrp_NoNested2PartySubIDs_85);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_85);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_2_2_2.addGroup(noNested2PartySubIDs_0_2_2_3_1);
        }
        noLegAllocs_0_1_2.addGroup(noNested2PartyIDs_0_2_2_2);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_5;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_1571413746"}, LegStipulations_NoLegStipulations_5);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_175805575"}, LegStipulations_NoLegStipulations_5);
      all_values.push_back(LegStipulations_NoLegStipulations_5);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_73;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_648650205"}, NestedParties_NoNestedPartyIDs_73);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_73);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1059803951}, NestedParties_NoNestedPartyIDs_73);
      all_values.push_back(NestedParties_NoNestedPartyIDs_73);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_159;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1462589692"}, NstdPtysSubGrp_NoNestedPartySubIDs_159);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1199109421}, NstdPtysSubGrp_NoNestedPartySubIDs_159);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_159);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_74;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_152205543"}, NestedParties_NoNestedPartyIDs_74);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_74);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1806577302}, NestedParties_NoNestedPartyIDs_74);
      all_values.push_back(NestedParties_NoNestedPartyIDs_74);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_160;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1166733303"}, NstdPtysSubGrp_NoNestedPartySubIDs_160);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{177408797}, NstdPtysSubGrp_NoNestedPartySubIDs_160);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_160);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_1;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_2;
    set_field(noLegs_0_1, FIX::LegAllocID{"STRING_129566274"}, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegCoveredOrUncovered{122387639}, LegOrdGrp_NoLegs_2);
    FIX::LegCurrencyRatio LegCurrencyRatio_3;
    LegCurrencyRatio_3.setString("10816738");
set_field(noLegs_0_1, LegCurrencyRatio_3, LegOrdGrp_NoLegs_2);
    FIX::LegDividendYield LegDividendYield_3;
    LegDividendYield_3.setString("96.940000");
set_field(noLegs_0_1, LegDividendYield_3, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegExecInst{"MULTIPLECHARVALUE_459062088"}, LegOrdGrp_NoLegs_2);
    FIX::LegOrderQty LegOrderQty_3;
    LegOrderQty_3.setString("9752185");
set_field(noLegs_0_1, LegOrderQty_3, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegPositionEffect{'1'}, LegOrdGrp_NoLegs_2);
    FIX::LegQty LegQty_3;
    LegQty_3.setString("20638696");
set_field(noLegs_0_1, LegQty_3, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegRefID{"STRING_442536473"}, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegSettlCurrency{"CHF"}, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegSettlDate{"LOCALMKTDATE_1674057960"}, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegSettlType{'1'}, LegOrdGrp_NoLegs_2);
    set_field(noLegs_0_1, FIX::LegSwapType{1}, LegOrdGrp_NoLegs_2);
    FIX::LegVolatility LegVolatility_3;
    LegVolatility_3.setString("14480475");
set_field(noLegs_0_1, LegVolatility_3, LegOrdGrp_NoLegs_2);
    all_values.push_back(LegOrdGrp_NoLegs_2);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_60;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_847492870"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{468728311}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1623853160"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{847189429}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1117378516"}, InstrumentLeg_60);
    FIX::LegContractMultiplier LegContractMultiplier_60;
    LegContractMultiplier_60.setString("7442479");
set_field(noLegs_0_1, LegContractMultiplier_60, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1906993380}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_914771069"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_59353972"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_958619153"}, InstrumentLeg_60);
    FIX::LegCouponRate LegCouponRate_60;
    LegCouponRate_60.setString("66.120000");
set_field(noLegs_0_1, LegCouponRate_60, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_615771729"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegCurrency{"GBP"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1782505032"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{795121605}, InstrumentLeg_60);
    FIX::LegFactor LegFactor_60;
    LegFactor_60.setString("15362066");
set_field(noLegs_0_1, LegFactor_60, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1904892671}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1876795412"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_747402689"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_216471111"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_704530329"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_936550245"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_132857099"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1147066802"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_121524125"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_60);
    FIX::LegOptionRatio LegOptionRatio_60;
    LegOptionRatio_60.setString("6736411");
set_field(noLegs_0_1, LegOptionRatio_60, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1311074264"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_126208220"}, InstrumentLeg_60);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_60;
    LegPriceUnitOfMeasureQty_60.setString("21216886");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_60, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegProduct{11083487}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegPutOrCall{594936531}, InstrumentLeg_60);
    FIX::LegRatioQty LegRatioQty_60;
    LegRatioQty_60.setString("15980582");
set_field(noLegs_0_1, LegRatioQty_60, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_858272916"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1712315047"}, InstrumentLeg_60);
    FIX::LegRepurchaseRate LegRepurchaseRate_60;
    LegRepurchaseRate_60.setString("24.910000");
set_field(noLegs_0_1, LegRepurchaseRate_60, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{617782648}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_479602468"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_254176463"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1576401801"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1546579080"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_869948192"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_46630961"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegSide{'8'}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_504969576"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_60);
    FIX::LegStrikePrice LegStrikePrice_60;
    LegStrikePrice_60.setString("2623785");
set_field(noLegs_0_1, LegStrikePrice_60, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_571064331"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_941861485"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_478849711"}, InstrumentLeg_60);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1275594660"}, InstrumentLeg_60);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_60;
    LegUnitOfMeasureQty_60.setString("18784117");
set_field(noLegs_0_1, LegUnitOfMeasureQty_60, InstrumentLeg_60);
    all_values.push_back(InstrumentLeg_60);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_122;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_275177814"}, LegSecAltIDGrp_NoLegSecurityAltID_122);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1999935856"}, LegSecAltIDGrp_NoLegSecurityAltID_122);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_122);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_1_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_8;
      set_field(noLegAllocs_1_1_0, FIX::LegAllocAccount{"STRING_948818928"}, LegPreAllocGrp_NoLegAllocs_8);
      set_field(noLegAllocs_1_1_0, FIX::LegAllocAcctIDSource{"STRING_1163526472"}, LegPreAllocGrp_NoLegAllocs_8);
      FIX::LegAllocQty LegAllocQty_8;
      LegAllocQty_8.setString("19668086");
set_field(noLegAllocs_1_1_0, LegAllocQty_8, LegPreAllocGrp_NoLegAllocs_8);
      set_field(noLegAllocs_1_1_0, FIX::LegAllocSettlCurrency{"CHF"}, LegPreAllocGrp_NoLegAllocs_8);
      set_field(noLegAllocs_1_1_0, FIX::LegIndividualAllocID{"STRING_414261570"}, LegPreAllocGrp_NoLegAllocs_8);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_8);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_39;
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyID{"STRING_2032882875"}, NestedParties2_NoNested2PartyIDs_39);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_39);
        set_field(noNested2PartyIDs_1_0_2_0, FIX::Nested2PartyRole{568421035}, NestedParties2_NoNested2PartyIDs_39);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_39);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_86;
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubID{"STRING_458695438"}, NstdPtys2SubGrp_NoNested2PartySubIDs_86);
          set_field(noNested2PartySubIDs_1_0_0_3_0, FIX::Nested2PartySubIDType{822597499}, NstdPtys2SubGrp_NoNested2PartySubIDs_86);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_86);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_87;
          set_field(noNested2PartySubIDs_1_0_0_3_1, FIX::Nested2PartySubID{"STRING_2079583677"}, NstdPtys2SubGrp_NoNested2PartySubIDs_87);
          set_field(noNested2PartySubIDs_1_0_0_3_1, FIX::Nested2PartySubIDType{2005274518}, NstdPtys2SubGrp_NoNested2PartySubIDs_87);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_87);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_88;
          set_field(noNested2PartySubIDs_1_0_0_3_2, FIX::Nested2PartySubID{"STRING_1692545691"}, NstdPtys2SubGrp_NoNested2PartySubIDs_88);
          set_field(noNested2PartySubIDs_1_0_0_3_2, FIX::Nested2PartySubIDType{2126214638}, NstdPtys2SubGrp_NoNested2PartySubIDs_88);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_88);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_0_2_0.addGroup(noNested2PartySubIDs_1_0_0_3_2);
        }
        noLegAllocs_1_1_0.addGroup(noNested2PartyIDs_1_0_2_0);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_1_1_1;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_9;
      set_field(noLegAllocs_1_1_1, FIX::LegAllocAccount{"STRING_663526671"}, LegPreAllocGrp_NoLegAllocs_9);
      set_field(noLegAllocs_1_1_1, FIX::LegAllocAcctIDSource{"STRING_50031620"}, LegPreAllocGrp_NoLegAllocs_9);
      FIX::LegAllocQty LegAllocQty_9;
      LegAllocQty_9.setString("8204835");
set_field(noLegAllocs_1_1_1, LegAllocQty_9, LegPreAllocGrp_NoLegAllocs_9);
      set_field(noLegAllocs_1_1_1, FIX::LegAllocSettlCurrency{"CAN"}, LegPreAllocGrp_NoLegAllocs_9);
      set_field(noLegAllocs_1_1_1, FIX::LegIndividualAllocID{"STRING_1391547889"}, LegPreAllocGrp_NoLegAllocs_9);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_9);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_40;
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyID{"STRING_791259930"}, NestedParties2_NoNested2PartyIDs_40);
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyIDSource{'5'}, NestedParties2_NoNested2PartyIDs_40);
        set_field(noNested2PartyIDs_1_1_2_0, FIX::Nested2PartyRole{1530775036}, NestedParties2_NoNested2PartyIDs_40);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_40);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_89;
          set_field(noNested2PartySubIDs_1_1_0_3_0, FIX::Nested2PartySubID{"STRING_794836716"}, NstdPtys2SubGrp_NoNested2PartySubIDs_89);
          set_field(noNested2PartySubIDs_1_1_0_3_0, FIX::Nested2PartySubIDType{1383227244}, NstdPtys2SubGrp_NoNested2PartySubIDs_89);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_89);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_0.addGroup(noNested2PartySubIDs_1_1_0_3_0);
        }
        noLegAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_1_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_41;
        set_field(noNested2PartyIDs_1_1_2_1, FIX::Nested2PartyID{"STRING_1096083558"}, NestedParties2_NoNested2PartyIDs_41);
        set_field(noNested2PartyIDs_1_1_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_41);
        set_field(noNested2PartyIDs_1_1_2_1, FIX::Nested2PartyRole{399270068}, NestedParties2_NoNested2PartyIDs_41);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_41);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_90;
          set_field(noNested2PartySubIDs_1_1_1_3_0, FIX::Nested2PartySubID{"STRING_519195976"}, NstdPtys2SubGrp_NoNested2PartySubIDs_90);
          set_field(noNested2PartySubIDs_1_1_1_3_0, FIX::Nested2PartySubIDType{1573880028}, NstdPtys2SubGrp_NoNested2PartySubIDs_90);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_90);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_1_2_1.addGroup(noNested2PartySubIDs_1_1_1_3_0);
        }
        noLegAllocs_1_1_1.addGroup(noNested2PartyIDs_1_1_2_1);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_1_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_10;
      set_field(noLegAllocs_1_1_2, FIX::LegAllocAccount{"STRING_1329670167"}, LegPreAllocGrp_NoLegAllocs_10);
      set_field(noLegAllocs_1_1_2, FIX::LegAllocAcctIDSource{"STRING_892794520"}, LegPreAllocGrp_NoLegAllocs_10);
      FIX::LegAllocQty LegAllocQty_10;
      LegAllocQty_10.setString("14592792");
set_field(noLegAllocs_1_1_2, LegAllocQty_10, LegPreAllocGrp_NoLegAllocs_10);
      set_field(noLegAllocs_1_1_2, FIX::LegAllocSettlCurrency{"USD"}, LegPreAllocGrp_NoLegAllocs_10);
      set_field(noLegAllocs_1_1_2, FIX::LegIndividualAllocID{"STRING_1962461131"}, LegPreAllocGrp_NoLegAllocs_10);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_10);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_1_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_42;
        set_field(noNested2PartyIDs_1_2_2_0, FIX::Nested2PartyID{"STRING_136329407"}, NestedParties2_NoNested2PartyIDs_42);
        set_field(noNested2PartyIDs_1_2_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_42);
        set_field(noNested2PartyIDs_1_2_2_0, FIX::Nested2PartyRole{1625249445}, NestedParties2_NoNested2PartyIDs_42);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_42);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_91;
          set_field(noNested2PartySubIDs_1_2_0_3_0, FIX::Nested2PartySubID{"STRING_1873292150"}, NstdPtys2SubGrp_NoNested2PartySubIDs_91);
          set_field(noNested2PartySubIDs_1_2_0_3_0, FIX::Nested2PartySubIDType{141292468}, NstdPtys2SubGrp_NoNested2PartySubIDs_91);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_91);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_2_2_0.addGroup(noNested2PartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_92;
          set_field(noNested2PartySubIDs_1_2_0_3_1, FIX::Nested2PartySubID{"STRING_1878906718"}, NstdPtys2SubGrp_NoNested2PartySubIDs_92);
          set_field(noNested2PartySubIDs_1_2_0_3_1, FIX::Nested2PartySubIDType{546292060}, NstdPtys2SubGrp_NoNested2PartySubIDs_92);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_92);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_2_2_0.addGroup(noNested2PartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_93;
          set_field(noNested2PartySubIDs_1_2_0_3_2, FIX::Nested2PartySubID{"STRING_999277936"}, NstdPtys2SubGrp_NoNested2PartySubIDs_93);
          set_field(noNested2PartySubIDs_1_2_0_3_2, FIX::Nested2PartySubIDType{43833290}, NstdPtys2SubGrp_NoNested2PartySubIDs_93);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_93);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_1_2_2_0.addGroup(noNested2PartySubIDs_1_2_0_3_2);
        }
        noLegAllocs_1_1_2.addGroup(noNested2PartyIDs_1_2_2_0);
      }
      noLegs_0_1.addGroup(noLegAllocs_1_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_6;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_651641241"}, LegStipulations_NoLegStipulations_6);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_835093220"}, LegStipulations_NoLegStipulations_6);
      all_values.push_back(LegStipulations_NoLegStipulations_6);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_1_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_7;
      set_field(noLegStipulations_1_1_1, FIX::LegStipulationType{"STRING_310015202"}, LegStipulations_NoLegStipulations_7);
      set_field(noLegStipulations_1_1_1, FIX::LegStipulationValue{"STRING_34932629"}, LegStipulations_NoLegStipulations_7);
      all_values.push_back(LegStipulations_NoLegStipulations_7);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_1_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_8;
      set_field(noLegStipulations_1_1_2, FIX::LegStipulationType{"STRING_90576313"}, LegStipulations_NoLegStipulations_8);
      set_field(noLegStipulations_1_1_2, FIX::LegStipulationValue{"STRING_1104851918"}, LegStipulations_NoLegStipulations_8);
      all_values.push_back(LegStipulations_NoLegStipulations_8);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_75;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1186659871"}, NestedParties_NoNestedPartyIDs_75);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_75);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1817429941}, NestedParties_NoNestedPartyIDs_75);
      all_values.push_back(NestedParties_NoNestedPartyIDs_75);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_161;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_1220219891"}, NstdPtysSubGrp_NoNestedPartySubIDs_161);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1243826321}, NstdPtysSubGrp_NoNestedPartySubIDs_161);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_161);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_162;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_1284254987"}, NstdPtysSubGrp_NoNestedPartySubIDs_162);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{2113014412}, NstdPtysSubGrp_NoNestedPartySubIDs_162);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_162);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_76;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_555621929"}, NestedParties_NoNestedPartyIDs_76);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_76);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{1426746320}, NestedParties_NoNestedPartyIDs_76);
      all_values.push_back(NestedParties_NoNestedPartyIDs_76);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_163;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_65509402"}, NstdPtysSubGrp_NoNestedPartySubIDs_163);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{1563075727}, NstdPtysSubGrp_NoNestedPartySubIDs_163);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_163);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_164;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_117676924"}, NstdPtysSubGrp_NoNestedPartySubIDs_164);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{1690758847}, NstdPtysSubGrp_NoNestedPartySubIDs_164);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_164);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_77;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_1244467177"}, NestedParties_NoNestedPartyIDs_77);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_77);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{1832051316}, NestedParties_NoNestedPartyIDs_77);
      all_values.push_back(NestedParties_NoNestedPartyIDs_77);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_165;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_389777486"}, NstdPtysSubGrp_NoNestedPartySubIDs_165);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{683845604}, NstdPtysSubGrp_NoNestedPartySubIDs_165);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_165);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_166;
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubID{"STRING_1019723538"}, NstdPtysSubGrp_NoNestedPartySubIDs_166);
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubIDType{180133787}, NstdPtysSubGrp_NoNestedPartySubIDs_166);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_166);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      noLegs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoLegs noLegs_0_2;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_3;
    set_field(noLegs_0_2, FIX::LegAllocID{"STRING_1335486845"}, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegCoveredOrUncovered{1854816758}, LegOrdGrp_NoLegs_3);
    FIX::LegCurrencyRatio LegCurrencyRatio_4;
    LegCurrencyRatio_4.setString("4901489");
set_field(noLegs_0_2, LegCurrencyRatio_4, LegOrdGrp_NoLegs_3);
    FIX::LegDividendYield LegDividendYield_4;
    LegDividendYield_4.setString("94.740000");
set_field(noLegs_0_2, LegDividendYield_4, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegExecInst{"MULTIPLECHARVALUE_1945393071"}, LegOrdGrp_NoLegs_3);
    FIX::LegOrderQty LegOrderQty_4;
    LegOrderQty_4.setString("15950009");
set_field(noLegs_0_2, LegOrderQty_4, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegPositionEffect{'6'}, LegOrdGrp_NoLegs_3);
    FIX::LegQty LegQty_4;
    LegQty_4.setString("9845692");
set_field(noLegs_0_2, LegQty_4, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegRefID{"STRING_148541175"}, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegSettlCurrency{"CAN"}, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegSettlDate{"LOCALMKTDATE_1368761067"}, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegSettlType{'1'}, LegOrdGrp_NoLegs_3);
    set_field(noLegs_0_2, FIX::LegSwapType{5}, LegOrdGrp_NoLegs_3);
    FIX::LegVolatility LegVolatility_4;
    LegVolatility_4.setString("13342918");
set_field(noLegs_0_2, LegVolatility_4, LegOrdGrp_NoLegs_3);
    all_values.push_back(LegOrdGrp_NoLegs_3);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_61;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_2110490243"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{521459931}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_613554503"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{333606007}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_586969333"}, InstrumentLeg_61);
    FIX::LegContractMultiplier LegContractMultiplier_61;
    LegContractMultiplier_61.setString("291465");
set_field(noLegs_0_2, LegContractMultiplier_61, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{451282931}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_130244533"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_1273613759"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_294768357"}, InstrumentLeg_61);
    FIX::LegCouponRate LegCouponRate_61;
    LegCouponRate_61.setString("58.490000");
set_field(noLegs_0_2, LegCouponRate_61, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_102020359"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegCurrency{"EUR"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_1121743897"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{864679631}, InstrumentLeg_61);
    FIX::LegFactor LegFactor_61;
    LegFactor_61.setString("18341446");
set_field(noLegs_0_2, LegFactor_61, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{829077008}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_1354828621"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1057080476"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_626986431"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_802345882"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1698176175"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_1611555726"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_950887057"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_2009218167"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'4'}, InstrumentLeg_61);
    FIX::LegOptionRatio LegOptionRatio_61;
    LegOptionRatio_61.setString("1721644");
set_field(noLegs_0_2, LegOptionRatio_61, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_1416602833"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_479151649"}, InstrumentLeg_61);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_61;
    LegPriceUnitOfMeasureQty_61.setString("15064563");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_61, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegProduct{1379609428}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegPutOrCall{1000611580}, InstrumentLeg_61);
    FIX::LegRatioQty LegRatioQty_61;
    LegRatioQty_61.setString("21200108");
set_field(noLegs_0_2, LegRatioQty_61, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1713215435"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_1587580913"}, InstrumentLeg_61);
    FIX::LegRepurchaseRate LegRepurchaseRate_61;
    LegRepurchaseRate_61.setString("37.440000");
set_field(noLegs_0_2, LegRepurchaseRate_61, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{17014718}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_1717825446"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_1275287504"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_311783076"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_1532637647"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_1377307863"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_996328920"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegSide{'2'}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_351568113"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_61);
    FIX::LegStrikePrice LegStrikePrice_61;
    LegStrikePrice_61.setString("11806451");
set_field(noLegs_0_2, LegStrikePrice_61, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_1068353525"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_627553282"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_1807631552"}, InstrumentLeg_61);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1870699407"}, InstrumentLeg_61);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_61;
    LegUnitOfMeasureQty_61.setString("1782458");
set_field(noLegs_0_2, LegUnitOfMeasureQty_61, InstrumentLeg_61);
    all_values.push_back(InstrumentLeg_61);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_123;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_674102816"}, LegSecAltIDGrp_NoLegSecurityAltID_123);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_39980329"}, LegSecAltIDGrp_NoLegSecurityAltID_123);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_123);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_124;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_1674929825"}, LegSecAltIDGrp_NoLegSecurityAltID_124);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_846267293"}, LegSecAltIDGrp_NoLegSecurityAltID_124);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_124);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_2_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_11;
      set_field(noLegAllocs_2_1_0, FIX::LegAllocAccount{"STRING_6597826"}, LegPreAllocGrp_NoLegAllocs_11);
      set_field(noLegAllocs_2_1_0, FIX::LegAllocAcctIDSource{"STRING_205239952"}, LegPreAllocGrp_NoLegAllocs_11);
      FIX::LegAllocQty LegAllocQty_11;
      LegAllocQty_11.setString("6887089");
set_field(noLegAllocs_2_1_0, LegAllocQty_11, LegPreAllocGrp_NoLegAllocs_11);
      set_field(noLegAllocs_2_1_0, FIX::LegAllocSettlCurrency{"CHF"}, LegPreAllocGrp_NoLegAllocs_11);
      set_field(noLegAllocs_2_1_0, FIX::LegIndividualAllocID{"STRING_254440730"}, LegPreAllocGrp_NoLegAllocs_11);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_11);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_43;
        set_field(noNested2PartyIDs_2_0_2_0, FIX::Nested2PartyID{"STRING_179440859"}, NestedParties2_NoNested2PartyIDs_43);
        set_field(noNested2PartyIDs_2_0_2_0, FIX::Nested2PartyIDSource{'2'}, NestedParties2_NoNested2PartyIDs_43);
        set_field(noNested2PartyIDs_2_0_2_0, FIX::Nested2PartyRole{17648470}, NestedParties2_NoNested2PartyIDs_43);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_43);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_94;
          set_field(noNested2PartySubIDs_2_0_0_3_0, FIX::Nested2PartySubID{"STRING_583238525"}, NstdPtys2SubGrp_NoNested2PartySubIDs_94);
          set_field(noNested2PartySubIDs_2_0_0_3_0, FIX::Nested2PartySubIDType{1550286117}, NstdPtys2SubGrp_NoNested2PartySubIDs_94);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_94);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_95;
          set_field(noNested2PartySubIDs_2_0_0_3_1, FIX::Nested2PartySubID{"STRING_684552579"}, NstdPtys2SubGrp_NoNested2PartySubIDs_95);
          set_field(noNested2PartySubIDs_2_0_0_3_1, FIX::Nested2PartySubIDType{1579567445}, NstdPtys2SubGrp_NoNested2PartySubIDs_95);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_95);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_0.addGroup(noNested2PartySubIDs_2_0_0_3_1);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_44;
        set_field(noNested2PartyIDs_2_0_2_1, FIX::Nested2PartyID{"STRING_1434097922"}, NestedParties2_NoNested2PartyIDs_44);
        set_field(noNested2PartyIDs_2_0_2_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_44);
        set_field(noNested2PartyIDs_2_0_2_1, FIX::Nested2PartyRole{1293092348}, NestedParties2_NoNested2PartyIDs_44);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_44);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_96;
          set_field(noNested2PartySubIDs_2_0_1_3_0, FIX::Nested2PartySubID{"STRING_69282165"}, NstdPtys2SubGrp_NoNested2PartySubIDs_96);
          set_field(noNested2PartySubIDs_2_0_1_3_0, FIX::Nested2PartySubIDType{213962225}, NstdPtys2SubGrp_NoNested2PartySubIDs_96);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_96);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_1_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_97;
          set_field(noNested2PartySubIDs_2_0_1_3_1, FIX::Nested2PartySubID{"STRING_1632124011"}, NstdPtys2SubGrp_NoNested2PartySubIDs_97);
          set_field(noNested2PartySubIDs_2_0_1_3_1, FIX::Nested2PartySubIDType{1876913717}, NstdPtys2SubGrp_NoNested2PartySubIDs_97);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_97);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_0_2_1.addGroup(noNested2PartySubIDs_2_0_1_3_1);
        }
        noLegAllocs_2_1_0.addGroup(noNested2PartyIDs_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_0_2_2;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_45;
        set_field(noNested2PartyIDs_2_0_2_2, FIX::Nested2PartyID{"STRING_2084661632"}, NestedParties2_NoNested2PartyIDs_45);
        set_field(noNested2PartyIDs_2_0_2_2, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_45);
        set_field(noNested2PartyIDs_2_0_2_2, FIX::Nested2PartyRole{1001133700}, NestedParties2_NoNested2PartyIDs_45);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_45);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_98;
          set_field(noNested2PartySubIDs_2_0_2_3_0, FIX::Nested2PartySubID{"STRING_1850350149"}, NstdPtys2SubGrp_NoNested2PartySubIDs_98);
          set_field(noNested2PartySubIDs_2_0_2_3_0, FIX::Nested2PartySubIDType{528579877}, NstdPtys2SubGrp_NoNested2PartySubIDs_98);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_98);
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
      multiset<string> LegPreAllocGrp_NoLegAllocs_12;
      set_field(noLegAllocs_2_1_1, FIX::LegAllocAccount{"STRING_1457548094"}, LegPreAllocGrp_NoLegAllocs_12);
      set_field(noLegAllocs_2_1_1, FIX::LegAllocAcctIDSource{"STRING_1159449664"}, LegPreAllocGrp_NoLegAllocs_12);
      FIX::LegAllocQty LegAllocQty_12;
      LegAllocQty_12.setString("5351777");
set_field(noLegAllocs_2_1_1, LegAllocQty_12, LegPreAllocGrp_NoLegAllocs_12);
      set_field(noLegAllocs_2_1_1, FIX::LegAllocSettlCurrency{"CHF"}, LegPreAllocGrp_NoLegAllocs_12);
      set_field(noLegAllocs_2_1_1, FIX::LegIndividualAllocID{"STRING_1542387109"}, LegPreAllocGrp_NoLegAllocs_12);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_12);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_1_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_46;
        set_field(noNested2PartyIDs_2_1_2_0, FIX::Nested2PartyID{"STRING_2102599337"}, NestedParties2_NoNested2PartyIDs_46);
        set_field(noNested2PartyIDs_2_1_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_46);
        set_field(noNested2PartyIDs_2_1_2_0, FIX::Nested2PartyRole{2019996021}, NestedParties2_NoNested2PartyIDs_46);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_46);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_99;
          set_field(noNested2PartySubIDs_2_1_0_3_0, FIX::Nested2PartySubID{"STRING_2007342251"}, NstdPtys2SubGrp_NoNested2PartySubIDs_99);
          set_field(noNested2PartySubIDs_2_1_0_3_0, FIX::Nested2PartySubIDType{1327240736}, NstdPtys2SubGrp_NoNested2PartySubIDs_99);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_99);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_100;
          set_field(noNested2PartySubIDs_2_1_0_3_1, FIX::Nested2PartySubID{"STRING_809809663"}, NstdPtys2SubGrp_NoNested2PartySubIDs_100);
          set_field(noNested2PartySubIDs_2_1_0_3_1, FIX::Nested2PartySubIDType{1410144720}, NstdPtys2SubGrp_NoNested2PartySubIDs_100);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_100);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_101;
          set_field(noNested2PartySubIDs_2_1_0_3_2, FIX::Nested2PartySubID{"STRING_2011793315"}, NstdPtys2SubGrp_NoNested2PartySubIDs_101);
          set_field(noNested2PartySubIDs_2_1_0_3_2, FIX::Nested2PartySubIDType{241893460}, NstdPtys2SubGrp_NoNested2PartySubIDs_101);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_101);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_1_2_0.addGroup(noNested2PartySubIDs_2_1_0_3_2);
        }
        noLegAllocs_2_1_1.addGroup(noNested2PartyIDs_2_1_2_0);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs noLegAllocs_2_1_2;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_13;
      set_field(noLegAllocs_2_1_2, FIX::LegAllocAccount{"STRING_696758994"}, LegPreAllocGrp_NoLegAllocs_13);
      set_field(noLegAllocs_2_1_2, FIX::LegAllocAcctIDSource{"STRING_900430359"}, LegPreAllocGrp_NoLegAllocs_13);
      FIX::LegAllocQty LegAllocQty_13;
      LegAllocQty_13.setString("15349858");
set_field(noLegAllocs_2_1_2, LegAllocQty_13, LegPreAllocGrp_NoLegAllocs_13);
      set_field(noLegAllocs_2_1_2, FIX::LegAllocSettlCurrency{"USD"}, LegPreAllocGrp_NoLegAllocs_13);
      set_field(noLegAllocs_2_1_2, FIX::LegIndividualAllocID{"STRING_1748948034"}, LegPreAllocGrp_NoLegAllocs_13);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_13);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_2_2_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_47;
        set_field(noNested2PartyIDs_2_2_2_0, FIX::Nested2PartyID{"STRING_699142594"}, NestedParties2_NoNested2PartyIDs_47);
        set_field(noNested2PartyIDs_2_2_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_47);
        set_field(noNested2PartyIDs_2_2_2_0, FIX::Nested2PartyRole{848856258}, NestedParties2_NoNested2PartyIDs_47);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_47);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_2_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_102;
          set_field(noNested2PartySubIDs_2_2_0_3_0, FIX::Nested2PartySubID{"STRING_149923172"}, NstdPtys2SubGrp_NoNested2PartySubIDs_102);
          set_field(noNested2PartySubIDs_2_2_0_3_0, FIX::Nested2PartySubIDType{551722760}, NstdPtys2SubGrp_NoNested2PartySubIDs_102);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_102);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_2_2_0.addGroup(noNested2PartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_2_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_103;
          set_field(noNested2PartySubIDs_2_2_0_3_1, FIX::Nested2PartySubID{"STRING_81372524"}, NstdPtys2SubGrp_NoNested2PartySubIDs_103);
          set_field(noNested2PartySubIDs_2_2_0_3_1, FIX::Nested2PartySubIDType{1607471266}, NstdPtys2SubGrp_NoNested2PartySubIDs_103);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_103);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_2_2_0.addGroup(noNested2PartySubIDs_2_2_0_3_1);
        }
        {
          FIX50SP2::NewOrderMultileg::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_2_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_104;
          set_field(noNested2PartySubIDs_2_2_0_3_2, FIX::Nested2PartySubID{"STRING_1711172424"}, NstdPtys2SubGrp_NoNested2PartySubIDs_104);
          set_field(noNested2PartySubIDs_2_2_0_3_2, FIX::Nested2PartySubIDType{616550227}, NstdPtys2SubGrp_NoNested2PartySubIDs_104);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_104);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_2_2_2_0.addGroup(noNested2PartySubIDs_2_2_0_3_2);
        }
        noLegAllocs_2_1_2.addGroup(noNested2PartyIDs_2_2_2_0);
      }
      noLegs_0_2.addGroup(noLegAllocs_2_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_9;
      set_field(noLegStipulations_2_1_0, FIX::LegStipulationType{"STRING_1411847383"}, LegStipulations_NoLegStipulations_9);
      set_field(noLegStipulations_2_1_0, FIX::LegStipulationValue{"STRING_11453689"}, LegStipulations_NoLegStipulations_9);
      all_values.push_back(LegStipulations_NoLegStipulations_9);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_2_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_10;
      set_field(noLegStipulations_2_1_1, FIX::LegStipulationType{"STRING_815847178"}, LegStipulations_NoLegStipulations_10);
      set_field(noLegStipulations_2_1_1, FIX::LegStipulationValue{"STRING_1366963072"}, LegStipulations_NoLegStipulations_10);
      all_values.push_back(LegStipulations_NoLegStipulations_10);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoLegStipulations noLegStipulations_2_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_11;
      set_field(noLegStipulations_2_1_2, FIX::LegStipulationType{"STRING_2001147470"}, LegStipulations_NoLegStipulations_11);
      set_field(noLegStipulations_2_1_2, FIX::LegStipulationValue{"STRING_688359551"}, LegStipulations_NoLegStipulations_11);
      all_values.push_back(LegStipulations_NoLegStipulations_11);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_78;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_1861006073"}, NestedParties_NoNestedPartyIDs_78);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_78);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{255860226}, NestedParties_NoNestedPartyIDs_78);
      all_values.push_back(NestedParties_NoNestedPartyIDs_78);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_167;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_1879909955"}, NstdPtysSubGrp_NoNestedPartySubIDs_167);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{497753687}, NstdPtysSubGrp_NoNestedPartySubIDs_167);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_167);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_79;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_1820426140"}, NestedParties_NoNestedPartyIDs_79);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_79);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{2032739496}, NestedParties_NoNestedPartyIDs_79);
      all_values.push_back(NestedParties_NoNestedPartyIDs_79);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_168;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_1602569191"}, NstdPtysSubGrp_NoNestedPartySubIDs_168);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{1634203882}, NstdPtysSubGrp_NoNestedPartySubIDs_168);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_168);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_169;
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubID{"STRING_412758653"}, NstdPtysSubGrp_NoNestedPartySubIDs_169);
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubIDType{154228137}, NstdPtysSubGrp_NoNestedPartySubIDs_169);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_169);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noLegs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_12;
  FIX::CashOrderQty CashOrderQty_12;
  CashOrderQty_12.setString("11728462");
set_field(msg, CashOrderQty_12, OrderQtyData_12);
  FIX::OrderPercent OrderPercent_12;
  OrderPercent_12.setString("49.110000");
set_field(msg, OrderPercent_12, OrderQtyData_12);
  FIX::OrderQty OrderQty_20;
  OrderQty_20.setString("18545044");
set_field(msg, OrderQty_20, OrderQtyData_12);
  set_field(msg, FIX::RoundingDirection{'2'}, OrderQtyData_12);
  FIX::RoundingModulus RoundingModulus_12;
  RoundingModulus_12.setString("18133376");
set_field(msg, RoundingModulus_12, OrderQtyData_12);
  all_values.push_back(OrderQtyData_12);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_76;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_782757043"}, Parties_NoPartyIDs_76);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_76);
    set_field(noPartyIDs_0_0, FIX::PartyRole{33}, Parties_NoPartyIDs_76);
    all_values.push_back(Parties_NoPartyIDs_76);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_148;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_641390182"}, PtysSubGrp_NoPartySubIDs_148);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_148);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_148);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_149;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_573896238"}, PtysSubGrp_NoPartySubIDs_149);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_149);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_149);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_77;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_270061046"}, Parties_NoPartyIDs_77);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_77);
    set_field(noPartyIDs_0_1, FIX::PartyRole{15}, Parties_NoPartyIDs_77);
    all_values.push_back(Parties_NoPartyIDs_77);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_150;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1130372428"}, PtysSubGrp_NoPartySubIDs_150);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_150);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_150);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_151;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1107250616"}, PtysSubGrp_NoPartySubIDs_151);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_151);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_151);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PegInstructions
  multiset<string> PegInstructions_5;
  set_field(msg, FIX::PegLimitType{2}, PegInstructions_5);
  set_field(msg, FIX::PegMoveType{0}, PegInstructions_5);
  set_field(msg, FIX::PegOffsetType{2}, PegInstructions_5);
  FIX::PegOffsetValue PegOffsetValue_5;
  PegOffsetValue_5.setString("20932735");
set_field(msg, PegOffsetValue_5, PegInstructions_5);
  set_field(msg, FIX::PegPriceType{4}, PegInstructions_5);
  set_field(msg, FIX::PegRoundDirection{2}, PegInstructions_5);
  set_field(msg, FIX::PegScope{3}, PegInstructions_5);
  set_field(msg, FIX::PegSecurityDesc{"STRING_419740328"}, PegInstructions_5);
  set_field(msg, FIX::PegSecurityID{"STRING_1104969082"}, PegInstructions_5);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_605356419"}, PegInstructions_5);
  set_field(msg, FIX::PegSymbol{"STRING_1681355240"}, PegInstructions_5);
  all_values.push_back(PegInstructions_5);
  all_compo_names.insert(".");

  // PreAllocMlegGrp
  // Group PreAllocMlegGrp.NoAllocs
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_0;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_1;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1928125845"}, PreAllocMlegGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{1347209263}, PreAllocMlegGrp_NoAllocs_1);
    FIX::AllocQty AllocQty_26;
    AllocQty_26.setString("6003831");
set_field(noAllocs_0_0, AllocQty_26, PreAllocMlegGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"CAN"}, PreAllocMlegGrp_NoAllocs_1);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_1005326708"}, PreAllocMlegGrp_NoAllocs_1);
    all_values.push_back(PreAllocMlegGrp_NoAllocs_1);
    all_compo_names.insert("...NoAllocs");

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_5;
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyID{"STRING_1218142245"}, NestedParties3_NoNested3PartyIDs_5);
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyIDSource{'1'}, NestedParties3_NoNested3PartyIDs_5);
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyRole{895344538}, NestedParties3_NoNested3PartyIDs_5);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_5);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_10;
        set_field(noNested3PartySubIDs_0_0_2_0, FIX::Nested3PartySubID{"STRING_1691784978"}, NstdPtys3SubGrp_NoNested3PartySubIDs_10);
        set_field(noNested3PartySubIDs_0_0_2_0, FIX::Nested3PartySubIDType{10116679}, NstdPtys3SubGrp_NoNested3PartySubIDs_10);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_10);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_11;
        set_field(noNested3PartySubIDs_0_0_2_1, FIX::Nested3PartySubID{"STRING_385932022"}, NstdPtys3SubGrp_NoNested3PartySubIDs_11);
        set_field(noNested3PartySubIDs_0_0_2_1, FIX::Nested3PartySubIDType{1675368449}, NstdPtys3SubGrp_NoNested3PartySubIDs_11);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_11);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_6;
      set_field(noNested3PartyIDs_0_1_1, FIX::Nested3PartyID{"STRING_1140489108"}, NestedParties3_NoNested3PartyIDs_6);
      set_field(noNested3PartyIDs_0_1_1, FIX::Nested3PartyIDSource{'2'}, NestedParties3_NoNested3PartyIDs_6);
      set_field(noNested3PartyIDs_0_1_1, FIX::Nested3PartyRole{635135417}, NestedParties3_NoNested3PartyIDs_6);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_6);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_12;
        set_field(noNested3PartySubIDs_0_1_2_0, FIX::Nested3PartySubID{"STRING_9246502"}, NstdPtys3SubGrp_NoNested3PartySubIDs_12);
        set_field(noNested3PartySubIDs_0_1_2_0, FIX::Nested3PartySubIDType{1415328526}, NstdPtys3SubGrp_NoNested3PartySubIDs_12);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_12);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_13;
        set_field(noNested3PartySubIDs_0_1_2_1, FIX::Nested3PartySubID{"STRING_1351459597"}, NstdPtys3SubGrp_NoNested3PartySubIDs_13);
        set_field(noNested3PartySubIDs_0_1_2_1, FIX::Nested3PartySubIDType{2102520082}, NstdPtys3SubGrp_NoNested3PartySubIDs_13);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_13);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_1.addGroup(noNested3PartySubIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoAllocs noAllocs_0_1;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_2;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_1422310201"}, PreAllocMlegGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{154716894}, PreAllocMlegGrp_NoAllocs_2);
    FIX::AllocQty AllocQty_27;
    AllocQty_27.setString("15350302");
set_field(noAllocs_0_1, AllocQty_27, PreAllocMlegGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::AllocSettlCurrency{"JPY"}, PreAllocMlegGrp_NoAllocs_2);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_2140386667"}, PreAllocMlegGrp_NoAllocs_2);
    all_values.push_back(PreAllocMlegGrp_NoAllocs_2);
    all_compo_names.insert("...NoAllocs");

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_7;
      set_field(noNested3PartyIDs_1_1_0, FIX::Nested3PartyID{"STRING_2071675842"}, NestedParties3_NoNested3PartyIDs_7);
      set_field(noNested3PartyIDs_1_1_0, FIX::Nested3PartyIDSource{'1'}, NestedParties3_NoNested3PartyIDs_7);
      set_field(noNested3PartyIDs_1_1_0, FIX::Nested3PartyRole{575647737}, NestedParties3_NoNested3PartyIDs_7);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_7);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_14;
        set_field(noNested3PartySubIDs_1_0_2_0, FIX::Nested3PartySubID{"STRING_336944457"}, NstdPtys3SubGrp_NoNested3PartySubIDs_14);
        set_field(noNested3PartySubIDs_1_0_2_0, FIX::Nested3PartySubIDType{1152399800}, NstdPtys3SubGrp_NoNested3PartySubIDs_14);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_14);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_15;
        set_field(noNested3PartySubIDs_1_0_2_1, FIX::Nested3PartySubID{"STRING_1529902075"}, NstdPtys3SubGrp_NoNested3PartySubIDs_15);
        set_field(noNested3PartySubIDs_1_0_2_1, FIX::Nested3PartySubIDType{658392757}, NstdPtys3SubGrp_NoNested3PartySubIDs_15);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_15);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_16;
        set_field(noNested3PartySubIDs_1_0_2_2, FIX::Nested3PartySubID{"STRING_223058398"}, NstdPtys3SubGrp_NoNested3PartySubIDs_16);
        set_field(noNested3PartySubIDs_1_0_2_2, FIX::Nested3PartySubIDType{804142359}, NstdPtys3SubGrp_NoNested3PartySubIDs_16);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_16);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_8;
      set_field(noNested3PartyIDs_1_1_1, FIX::Nested3PartyID{"STRING_1553737296"}, NestedParties3_NoNested3PartyIDs_8);
      set_field(noNested3PartyIDs_1_1_1, FIX::Nested3PartyIDSource{'1'}, NestedParties3_NoNested3PartyIDs_8);
      set_field(noNested3PartyIDs_1_1_1, FIX::Nested3PartyRole{348443689}, NestedParties3_NoNested3PartyIDs_8);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_8);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_17;
        set_field(noNested3PartySubIDs_1_1_2_0, FIX::Nested3PartySubID{"STRING_1688002273"}, NstdPtys3SubGrp_NoNested3PartySubIDs_17);
        set_field(noNested3PartySubIDs_1_1_2_0, FIX::Nested3PartySubIDType{2023812138}, NstdPtys3SubGrp_NoNested3PartySubIDs_17);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_17);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_18;
        set_field(noNested3PartySubIDs_1_1_2_1, FIX::Nested3PartySubID{"STRING_556859435"}, NstdPtys3SubGrp_NoNested3PartySubIDs_18);
        set_field(noNested3PartySubIDs_1_1_2_1, FIX::Nested3PartySubIDType{1636714692}, NstdPtys3SubGrp_NoNested3PartySubIDs_18);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_18);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_1);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderMultileg::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_7;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_412663631"}, StrategyParametersGrp_NoStrategyParameters_7);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{17}, StrategyParametersGrp_NoStrategyParameters_7);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_1926792433"}, StrategyParametersGrp_NoStrategyParameters_7);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_7);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderMultileg::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_13;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_1"}, TrdgSesGrp_NoTradingSessions_13);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_13);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_13);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_5;
  set_field(msg, FIX::TriggerAction{'2'}, TriggeringInstruction_5);
  FIX::TriggerNewPrice TriggerNewPrice_5;
  TriggerNewPrice_5.setString("9885442");
set_field(msg, TriggerNewPrice_5, TriggeringInstruction_5);
  FIX::TriggerNewQty TriggerNewQty_5;
  TriggerNewQty_5.setString("8961858");
set_field(msg, TriggerNewQty_5, TriggeringInstruction_5);
  set_field(msg, FIX::TriggerOrderType{'2'}, TriggeringInstruction_5);
  FIX::TriggerPrice TriggerPrice_5;
  TriggerPrice_5.setString("9814472");
set_field(msg, TriggerPrice_5, TriggeringInstruction_5);
  set_field(msg, FIX::TriggerPriceDirection{'D'}, TriggeringInstruction_5);
  set_field(msg, FIX::TriggerPriceType{'2'}, TriggeringInstruction_5);
  set_field(msg, FIX::TriggerPriceTypeScope{'0'}, TriggeringInstruction_5);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_700272080"}, TriggeringInstruction_5);
  set_field(msg, FIX::TriggerSecurityID{"STRING_1479810012"}, TriggeringInstruction_5);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_1091936921"}, TriggeringInstruction_5);
  set_field(msg, FIX::TriggerSymbol{"STRING_1852671881"}, TriggeringInstruction_5);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_862228439"}, TriggeringInstruction_5);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_1750329679"}, TriggeringInstruction_5);
  set_field(msg, FIX::TriggerType{'4'}, TriggeringInstruction_5);
  all_values.push_back(TriggeringInstruction_5);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderMultileg::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_67;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1156583327"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1230316881}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_2014814487"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{572953654}, UnderlyingInstrument_67);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_67;
    UnderlyingAdjustedQuantity_67.setString("7708355");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_67, UnderlyingInstrument_67);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_67;
    UnderlyingAllocationPercent_67.setString("29.770000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_67, UnderlyingInstrument_67);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_67;
    UnderlyingAttachmentPoint_67.setString("30.900000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_260066550"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_255123237"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1542476721"}, UnderlyingInstrument_67);
    FIX::UnderlyingCapValue UnderlyingCapValue_67;
    UnderlyingCapValue_67.setString("19060277");
set_field(noUnderlyings_0_0, UnderlyingCapValue_67, UnderlyingInstrument_67);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_67;
    UnderlyingCashAmount_67.setString("344320");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_67);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_67;
    UnderlyingContractMultiplier_67.setString("13595417");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1236051009}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_930472776"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_200602306"}, UnderlyingInstrument_67);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_67;
    UnderlyingCouponRate_67.setString("68.780000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1961515228"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_67);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_67;
    UnderlyingCurrentValue_67.setString("7692662");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_67, UnderlyingInstrument_67);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_67;
    UnderlyingDetachmentPoint_67.setString("20.180000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_67, UnderlyingInstrument_67);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_67;
    UnderlyingDirtyPrice_67.setString("8096496");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_67, UnderlyingInstrument_67);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_67;
    UnderlyingEndPrice_67.setString("1015925");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_67, UnderlyingInstrument_67);
    FIX::UnderlyingEndValue UnderlyingEndValue_67;
    UnderlyingEndValue_67.setString("8814952");
set_field(noUnderlyings_0_0, UnderlyingEndValue_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{514837887}, UnderlyingInstrument_67);
    FIX::UnderlyingFXRate UnderlyingFXRate_67;
    UnderlyingFXRate_67.setString("9638210");
set_field(noUnderlyings_0_0, UnderlyingFXRate_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_67);
    FIX::UnderlyingFactor UnderlyingFactor_67;
    UnderlyingFactor_67.setString("4430845");
set_field(noUnderlyings_0_0, UnderlyingFactor_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{482708180}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1640924650"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1673401399"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_350039019"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_66394656"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_296753258"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_93698349"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1196207746"}, UnderlyingInstrument_67);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_67;
    UnderlyingNotionalPercentageOutstanding_67.setString("98.080000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_67);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_67;
    UnderlyingOriginalNotionalPercentageOutstanding_67.setString("8.190000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_315363905"}, UnderlyingInstrument_67);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_67;
    UnderlyingPriceUnitOfMeasureQty_67.setString("3832536");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1750317121}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1674905631}, UnderlyingInstrument_67);
    FIX::UnderlyingPx UnderlyingPx_67;
    UnderlyingPx_67.setString("16193046");
set_field(noUnderlyings_0_0, UnderlyingPx_67, UnderlyingInstrument_67);
    FIX::UnderlyingQty UnderlyingQty_67;
    UnderlyingQty_67.setString("5333062");
set_field(noUnderlyings_0_0, UnderlyingQty_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1875507937"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1604057848"}, UnderlyingInstrument_67);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_67;
    UnderlyingRepurchaseRate_67.setString("78.290000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{910073843}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1713435422"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1116604055"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_699632213"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_375601428"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1218196645"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1581127505"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_890439315"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_34534026"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_2065468828"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_67);
    FIX::UnderlyingStartValue UnderlyingStartValue_67;
    UnderlyingStartValue_67.setString("5172422");
set_field(noUnderlyings_0_0, UnderlyingStartValue_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1558909830"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_67);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_67;
    UnderlyingStrikePrice_67.setString("16253044");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_67, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1156194842"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_960979575"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_674028585"}, UnderlyingInstrument_67);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1713014651"}, UnderlyingInstrument_67);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_67;
    UnderlyingUnitOfMeasureQty_67.setString("13098011");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_67, UnderlyingInstrument_67);
    all_values.push_back(UnderlyingInstrument_67);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_142;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_2028378556"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_142);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1693054769"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_142);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_142);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_130;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1555800539"}, UnderlyingStipulations_NoUnderlyingStips_130);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1164875739"}, UnderlyingStipulations_NoUnderlyingStips_130);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_130);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_131;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1401369127"}, UnderlyingStipulations_NoUnderlyingStips_131);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1283824828"}, UnderlyingStipulations_NoUnderlyingStips_131);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_131);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_132;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_621449940"}, UnderlyingStipulations_NoUnderlyingStips_132);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1748706957"}, UnderlyingStipulations_NoUnderlyingStips_132);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_132);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_140;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_187401714"}, UndlyInstrumentParties_NoUndlyInstrumentParties_140);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_140);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{746047237}, UndlyInstrumentParties_NoUndlyInstrumentParties_140);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_140);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1936024009"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{179691094}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_141;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1453442457"}, UndlyInstrumentParties_NoUndlyInstrumentParties_141);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_141);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{97676275}, UndlyInstrumentParties_NoUndlyInstrumentParties_141);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_141);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_340316594"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1656586105}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1498924226"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1207597820}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1134406944"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{507635421}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::NewOrderMultileg::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_68;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_21093747"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1808435530}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_73166424"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1330894908}, UnderlyingInstrument_68);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_68;
    UnderlyingAdjustedQuantity_68.setString("9261812");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_68, UnderlyingInstrument_68);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_68;
    UnderlyingAllocationPercent_68.setString("49.800000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_68, UnderlyingInstrument_68);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_68;
    UnderlyingAttachmentPoint_68.setString("60.290000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1794244165"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1509861872"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_2041341769"}, UnderlyingInstrument_68);
    FIX::UnderlyingCapValue UnderlyingCapValue_68;
    UnderlyingCapValue_68.setString("10481296");
set_field(noUnderlyings_0_1, UnderlyingCapValue_68, UnderlyingInstrument_68);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_68;
    UnderlyingCashAmount_68.setString("6462030");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_68);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_68;
    UnderlyingContractMultiplier_68.setString("6493529");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{692618076}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_702709775"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1367180317"}, UnderlyingInstrument_68);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_68;
    UnderlyingCouponRate_68.setString("53.130000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1265712917"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_68);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_68;
    UnderlyingCurrentValue_68.setString("5716717");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_68, UnderlyingInstrument_68);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_68;
    UnderlyingDetachmentPoint_68.setString("50.660000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_68, UnderlyingInstrument_68);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_68;
    UnderlyingDirtyPrice_68.setString("17160326");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_68, UnderlyingInstrument_68);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_68;
    UnderlyingEndPrice_68.setString("12111543");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_68, UnderlyingInstrument_68);
    FIX::UnderlyingEndValue UnderlyingEndValue_68;
    UnderlyingEndValue_68.setString("13191116");
set_field(noUnderlyings_0_1, UnderlyingEndValue_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1225135140}, UnderlyingInstrument_68);
    FIX::UnderlyingFXRate UnderlyingFXRate_68;
    UnderlyingFXRate_68.setString("5625949");
set_field(noUnderlyings_0_1, UnderlyingFXRate_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_68);
    FIX::UnderlyingFactor UnderlyingFactor_68;
    UnderlyingFactor_68.setString("2120584");
set_field(noUnderlyings_0_1, UnderlyingFactor_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1070230367}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_400319579"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2020493966"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1143396791"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1731214487"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_799191605"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1097458124"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_460196868"}, UnderlyingInstrument_68);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_68;
    UnderlyingNotionalPercentageOutstanding_68.setString("21.220000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_68);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_68;
    UnderlyingOriginalNotionalPercentageOutstanding_68.setString("49.890000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1494081767"}, UnderlyingInstrument_68);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_68;
    UnderlyingPriceUnitOfMeasureQty_68.setString("11060394");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{869363050}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{2143434720}, UnderlyingInstrument_68);
    FIX::UnderlyingPx UnderlyingPx_68;
    UnderlyingPx_68.setString("17986574");
set_field(noUnderlyings_0_1, UnderlyingPx_68, UnderlyingInstrument_68);
    FIX::UnderlyingQty UnderlyingQty_68;
    UnderlyingQty_68.setString("15720728");
set_field(noUnderlyings_0_1, UnderlyingQty_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1363131390"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1089839141"}, UnderlyingInstrument_68);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_68;
    UnderlyingRepurchaseRate_68.setString("20.940000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{371368420}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_560711901"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1261973820"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1350163486"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_129260935"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_325644540"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_521791498"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1354396075"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_888239487"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_901017330"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_68);
    FIX::UnderlyingStartValue UnderlyingStartValue_68;
    UnderlyingStartValue_68.setString("19584698");
set_field(noUnderlyings_0_1, UnderlyingStartValue_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1301336909"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_68);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_68;
    UnderlyingStrikePrice_68.setString("8850677");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_68, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_91172788"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_2051841122"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1345264617"}, UnderlyingInstrument_68);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_537124910"}, UnderlyingInstrument_68);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_68;
    UnderlyingUnitOfMeasureQty_68.setString("3641938");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_68, UnderlyingInstrument_68);
    all_values.push_back(UnderlyingInstrument_68);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_143;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_2031206677"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_143);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1470233222"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_143);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_143);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_144;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_421199009"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_144);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_2027157750"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_144);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_144);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_145;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1121407051"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_145);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1993271834"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_145);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_145);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_133;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_63762544"}, UnderlyingStipulations_NoUnderlyingStips_133);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_536090281"}, UnderlyingStipulations_NoUnderlyingStips_133);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_133);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_134;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1614173912"}, UnderlyingStipulations_NoUnderlyingStips_134);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_624474445"}, UnderlyingStipulations_NoUnderlyingStips_134);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_134);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_142;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_816853751"}, UndlyInstrumentParties_NoUndlyInstrumentParties_142);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_142);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{2123708642}, UndlyInstrumentParties_NoUndlyInstrumentParties_142);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_142);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2108131456"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{864464481}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_143;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_92178932"}, UndlyInstrumentParties_NoUndlyInstrumentParties_143);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_143);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{675450687}, UndlyInstrumentParties_NoUndlyInstrumentParties_143);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_143);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_819083503"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1629833685}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_131099942"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{910256291}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::NewOrderMultileg::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_69;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1534191159"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{1476364559}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1447381201"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{1898384981}, UnderlyingInstrument_69);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_69;
    UnderlyingAdjustedQuantity_69.setString("10282005");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_69, UnderlyingInstrument_69);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_69;
    UnderlyingAllocationPercent_69.setString("42.310000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_69, UnderlyingInstrument_69);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_69;
    UnderlyingAttachmentPoint_69.setString("45.560000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1449399526"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_1210778333"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_195057959"}, UnderlyingInstrument_69);
    FIX::UnderlyingCapValue UnderlyingCapValue_69;
    UnderlyingCapValue_69.setString("12951877");
set_field(noUnderlyings_0_2, UnderlyingCapValue_69, UnderlyingInstrument_69);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_69;
    UnderlyingCashAmount_69.setString("3061001");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_69);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_69;
    UnderlyingContractMultiplier_69.setString("18312779");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{1920274089}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_883294949"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1481858447"}, UnderlyingInstrument_69);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_69;
    UnderlyingCouponRate_69.setString("41.920000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1637030330"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_69);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_69;
    UnderlyingCurrentValue_69.setString("15976781");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_69, UnderlyingInstrument_69);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_69;
    UnderlyingDetachmentPoint_69.setString("42.740000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_69, UnderlyingInstrument_69);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_69;
    UnderlyingDirtyPrice_69.setString("20204683");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_69, UnderlyingInstrument_69);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_69;
    UnderlyingEndPrice_69.setString("9772968");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_69, UnderlyingInstrument_69);
    FIX::UnderlyingEndValue UnderlyingEndValue_69;
    UnderlyingEndValue_69.setString("8505149");
set_field(noUnderlyings_0_2, UnderlyingEndValue_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{1266500567}, UnderlyingInstrument_69);
    FIX::UnderlyingFXRate UnderlyingFXRate_69;
    UnderlyingFXRate_69.setString("17963803");
set_field(noUnderlyings_0_2, UnderlyingFXRate_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_69);
    FIX::UnderlyingFactor UnderlyingFactor_69;
    UnderlyingFactor_69.setString("13976005");
set_field(noUnderlyings_0_2, UnderlyingFactor_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{559152957}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1867056159"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_726481420"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_2006534158"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_1617957492"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1754681938"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1190154741"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_691608400"}, UnderlyingInstrument_69);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_69;
    UnderlyingNotionalPercentageOutstanding_69.setString("78.160000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_69);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_69;
    UnderlyingOriginalNotionalPercentageOutstanding_69.setString("63.590000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_204301881"}, UnderlyingInstrument_69);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_69;
    UnderlyingPriceUnitOfMeasureQty_69.setString("5595496");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{1145486863}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{2035579875}, UnderlyingInstrument_69);
    FIX::UnderlyingPx UnderlyingPx_69;
    UnderlyingPx_69.setString("3323400");
set_field(noUnderlyings_0_2, UnderlyingPx_69, UnderlyingInstrument_69);
    FIX::UnderlyingQty UnderlyingQty_69;
    UnderlyingQty_69.setString("20287818");
set_field(noUnderlyings_0_2, UnderlyingQty_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1369954675"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_921984237"}, UnderlyingInstrument_69);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_69;
    UnderlyingRepurchaseRate_69.setString("84.940000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{680554468}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_702790031"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_968522984"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_855618743"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_575774757"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1945819795"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_1706133705"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1842275325"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_1594716461"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_2038998704"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_69);
    FIX::UnderlyingStartValue UnderlyingStartValue_69;
    UnderlyingStartValue_69.setString("63857");
set_field(noUnderlyings_0_2, UnderlyingStartValue_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1758571215"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_69);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_69;
    UnderlyingStrikePrice_69.setString("12290450");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_69, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1426071897"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_1055591022"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_1920653460"}, UnderlyingInstrument_69);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_335186065"}, UnderlyingInstrument_69);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_69;
    UnderlyingUnitOfMeasureQty_69.setString("13090404");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_69, UnderlyingInstrument_69);
    all_values.push_back(UnderlyingInstrument_69);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_146;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_539487947"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_146);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1868590052"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_146);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_146);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_147;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_1805323035"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_147);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_427584174"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_147);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_147);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_148;
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltID{"STRING_53446449"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_148);
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1686621199"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_148);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_148);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_135;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_975430687"}, UnderlyingStipulations_NoUnderlyingStips_135);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_1057466045"}, UnderlyingStipulations_NoUnderlyingStips_135);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_135);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_136;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_330609670"}, UnderlyingStipulations_NoUnderlyingStips_136);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_1678220718"}, UnderlyingStipulations_NoUnderlyingStips_136);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_136);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_144;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1186228413"}, UndlyInstrumentParties_NoUndlyInstrumentParties_144);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_144);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{1824325177}, UndlyInstrumentParties_NoUndlyInstrumentParties_144);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_144);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1948787153"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1271557990}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_636393526"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{893695691}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_145;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1277943761"}, UndlyInstrumentParties_NoUndlyInstrumentParties_145);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_145);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{565085650}, UndlyInstrumentParties_NoUndlyInstrumentParties_145);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_145);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1476526154"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1991157547}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_51487416"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1249695966}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::NewOrderMultileg::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_178859965"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1360527865}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
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
