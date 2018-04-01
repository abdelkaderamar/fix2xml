#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderCancelReplaceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelReplaceRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderCancelReplaceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelReplaceRequest_0;
  set_field(msg, FIX::Account{"STRING_1523510127"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::AccountType{8}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::AcctIDSource{4}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::AllocID{"STRING_765373781"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::BookingType{2}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::BookingUnit{'1'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::CancellationRights{'Y'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::CashMargin{'1'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ClOrdID{"STRING_1541082565"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_1700694721"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ClearingFeeIndicator{"STRING_4"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ComplianceID{"STRING_903447602"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::CoveredOrUncovered{1}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::Currency{"GBP"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::CustDirectedOrder{true}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::CustOrderCapacity{3}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::CustOrderHandlingInst{"MULTIPLESTRINGVALUE_FOK"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::DayBookingInst{'2'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::Designation{"STRING_361289716"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(8, 3, 8, 22, 9, 2009)}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1547921714"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::EncodedTextLen{9084613}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_1471771557"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExDestinationIDSource{'D'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_C"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_705675125"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(1, 10, 33, 13, 10, 2014)}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ForexReq{true}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::GTBookingInst{2}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::HandlInst{'3'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ListID{"STRING_152321721"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::LocateReqd{true}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ManualOrderIndicator{false}, OrderCancelReplaceRequest_0);
  FIX::MatchIncrement MatchIncrement_7;
  MatchIncrement_7.setString("16266610");
set_field(msg, MatchIncrement_7, OrderCancelReplaceRequest_0);
  FIX::MaxFloor MaxFloor_7;
  MaxFloor_7.setString("11885846");
set_field(msg, MaxFloor_7, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::MaxPriceLevels{1218495544}, OrderCancelReplaceRequest_0);
  FIX::MaxShow MaxShow_7;
  MaxShow_7.setString("11853624");
set_field(msg, MaxShow_7, OrderCancelReplaceRequest_0);
  FIX::MinQty MinQty_11;
  MinQty_11.setString("15498743");
set_field(msg, MinQty_11, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'N'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrdType{'2'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrderCapacity{'A'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrderHandlingInstSource{1}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrderID{"STRING_1208192339"}, OrderCancelReplaceRequest_0);
  FIX::OrderQty2 OrderQty2_7;
  OrderQty2_7.setString("5203939");
set_field(msg, OrderQty2_7, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_1"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrigClOrdID{"STRING_608630405"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(13, 19, 47, 6, 4, 2010)}, OrderCancelReplaceRequest_0);
  FIX::ParticipationRate ParticipationRate_7;
  ParticipationRate_7.setString("78.570000");
set_field(msg, ParticipationRate_7, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::PositionEffect{'N'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::PreTradeAnonymity{false}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::PreallocMethod{'0'}, OrderCancelReplaceRequest_0);
  FIX::Price Price_17;
  Price_17.setString("6072410");
set_field(msg, Price_17, OrderCancelReplaceRequest_0);
  FIX::Price2 Price2_2;
  Price2_2.setString("18608534");
set_field(msg, Price2_2, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::PriceProtectionScope{'0'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::PriceType{1}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::QtyType{0}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ReceivedDeptID{"STRING_1036492836"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::RegistID{"STRING_1240241879"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1492352519"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::SettlCurrency{"EUR"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_530231369"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::SettlDate2{"LOCALMKTDATE_1627468149"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::SettlType{"STRING_4"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::Side{'B'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::SolicitedFlag{false}, OrderCancelReplaceRequest_0);
  FIX::StopPx StopPx_7;
  StopPx_7.setString("7100033");
set_field(msg, StopPx_7, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::TargetStrategy{2}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_537539809"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::Text{"STRING_1588962098"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::TimeInForce{'1'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1067018336"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_1792208728"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(11, 14, 30, 27, 12, 2016)}, OrderCancelReplaceRequest_0);
  all_values.push_back(OrderCancelReplaceRequest_0);

  all_compo_names.insert("OrderCancelReplaceRequest");

  // CommissionData
  multiset<string> CommissionData_17;
  set_field(msg, FIX::CommCurrency{"CHF"}, CommissionData_17);
  set_field(msg, FIX::CommType{'6'}, CommissionData_17);
  FIX::Commission Commission_17;
  Commission_17.setString("8726688");
set_field(msg, Commission_17, CommissionData_17);
  set_field(msg, FIX::FundRenewWaiv{'N'}, CommissionData_17);
  all_values.push_back(CommissionData_17);
  all_compo_names.insert(".");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_7;
  set_field(msg, FIX::DiscretionInst{'1'}, DiscretionInstructions_7);
  set_field(msg, FIX::DiscretionLimitType{2}, DiscretionInstructions_7);
  set_field(msg, FIX::DiscretionMoveType{0}, DiscretionInstructions_7);
  set_field(msg, FIX::DiscretionOffsetType{0}, DiscretionInstructions_7);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_7;
  DiscretionOffsetValue_7.setString("832292");
set_field(msg, DiscretionOffsetValue_7, DiscretionInstructions_7);
  set_field(msg, FIX::DiscretionRoundDirection{2}, DiscretionInstructions_7);
  set_field(msg, FIX::DiscretionScope{4}, DiscretionInstructions_7);
  all_values.push_back(DiscretionInstructions_7);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_7;
  FIX::DisplayHighQty DisplayHighQty_7;
  DisplayHighQty_7.setString("6134605");
set_field(msg, DisplayHighQty_7, DisplayInstruction_7);
  FIX::DisplayLowQty DisplayLowQty_7;
  DisplayLowQty_7.setString("8036600");
set_field(msg, DisplayLowQty_7, DisplayInstruction_7);
  set_field(msg, FIX::DisplayMethod{'1'}, DisplayInstruction_7);
  FIX::DisplayMinIncr DisplayMinIncr_7;
  DisplayMinIncr_7.setString("16054549");
set_field(msg, DisplayMinIncr_7, DisplayInstruction_7);
  FIX::DisplayQty DisplayQty_7;
  DisplayQty_7.setString("8208059");
set_field(msg, DisplayQty_7, DisplayInstruction_7);
  set_field(msg, FIX::DisplayWhen{'1'}, DisplayInstruction_7);
  FIX::RefreshQty RefreshQty_7;
  RefreshQty_7.setString("16581580");
set_field(msg, RefreshQty_7, DisplayInstruction_7);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_7;
  SecondaryDisplayQty_7.setString("13583457");
set_field(msg, SecondaryDisplayQty_7, DisplayInstruction_7);
  all_values.push_back(DisplayInstruction_7);
  all_compo_names.insert(".");

  // FinancingDetails
  multiset<string> FinancingDetails_13;
  set_field(msg, FIX::AgreementCurrency{"GBP"}, FinancingDetails_13);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_277880412"}, FinancingDetails_13);
  set_field(msg, FIX::AgreementDesc{"STRING_1072402624"}, FinancingDetails_13);
  set_field(msg, FIX::AgreementID{"STRING_893986351"}, FinancingDetails_13);
  set_field(msg, FIX::DeliveryType{0}, FinancingDetails_13);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1626049459"}, FinancingDetails_13);
  FIX::MarginRatio MarginRatio_13;
  MarginRatio_13.setString("91.410000");
set_field(msg, MarginRatio_13, FinancingDetails_13);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_158687167"}, FinancingDetails_13);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_13);
  all_values.push_back(FinancingDetails_13);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_42;
  FIX::AttachmentPoint AttachmentPoint_42;
  AttachmentPoint_42.setString("1.830000");
set_field(msg, AttachmentPoint_42, Instrument_42);
  set_field(msg, FIX::CFICode{"STRING_1317986216"}, Instrument_42);
  set_field(msg, FIX::CPProgram{1}, Instrument_42);
  set_field(msg, FIX::CPRegType{"STRING_1417538661"}, Instrument_42);
  FIX::CapPrice CapPrice_42;
  CapPrice_42.setString("431713");
set_field(msg, CapPrice_42, Instrument_42);
  FIX::ContractMultiplier ContractMultiplier_42;
  ContractMultiplier_42.setString("3407603");
set_field(msg, ContractMultiplier_42, Instrument_42);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_42);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_781531735"}, Instrument_42);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1586842024"}, Instrument_42);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_304253231"}, Instrument_42);
  FIX::CouponRate CouponRate_42;
  CouponRate_42.setString("9.420000");
set_field(msg, CouponRate_42, Instrument_42);
  set_field(msg, FIX::CreditRating{"STRING_763033894"}, Instrument_42);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_678985230"}, Instrument_42);
  FIX::DetachmentPoint DetachmentPoint_42;
  DetachmentPoint_42.setString("15.180000");
set_field(msg, DetachmentPoint_42, Instrument_42);
  set_field(msg, FIX::EncodedIssuer{"DATA_1566693913"}, Instrument_42);
  set_field(msg, FIX::EncodedIssuerLen{1955180946}, Instrument_42);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_936192840"}, Instrument_42);
  set_field(msg, FIX::EncodedSecurityDescLen{240016179}, Instrument_42);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_42);
  FIX::Factor Factor_42;
  Factor_42.setString("4468672");
set_field(msg, Factor_42, Instrument_42);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_42);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_42);
  FIX::FloorPrice FloorPrice_42;
  FloorPrice_42.setString("6188751");
set_field(msg, FloorPrice_42, Instrument_42);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_42);
  set_field(msg, FIX::InstrRegistry{"STRING_2146492913"}, Instrument_42);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_42);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_988247036"}, Instrument_42);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1625058724"}, Instrument_42);
  set_field(msg, FIX::Issuer{"STRING_652396993"}, Instrument_42);
  set_field(msg, FIX::ListMethod{1}, Instrument_42);
  set_field(msg, FIX::LocaleOfIssue{"STRING_272185579"}, Instrument_42);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_627313528"}, Instrument_42);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_317436771"}, Instrument_42);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_403357027"}, Instrument_42);
  FIX::MinPriceIncrement MinPriceIncrement_42;
  MinPriceIncrement_42.setString("20448521");
set_field(msg, MinPriceIncrement_42, Instrument_42);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_42;
  MinPriceIncrementAmount_42.setString("3606081");
set_field(msg, MinPriceIncrementAmount_42, Instrument_42);
  set_field(msg, FIX::NTPositionLimit{744117345}, Instrument_42);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_42;
  NotionalPercentageOutstanding_42.setString("35.480000");
set_field(msg, NotionalPercentageOutstanding_42, Instrument_42);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_42);
  FIX::OptPayoutAmount OptPayoutAmount_42;
  OptPayoutAmount_42.setString("1834757");
set_field(msg, OptPayoutAmount_42, Instrument_42);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_42);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_42;
  OriginalNotionalPercentageOutstanding_42.setString("8.480000");
set_field(msg, OriginalNotionalPercentageOutstanding_42, Instrument_42);
  set_field(msg, FIX::Pool{"STRING_946509615"}, Instrument_42);
  set_field(msg, FIX::PositionLimit{1121382009}, Instrument_42);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_42);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_365719880"}, Instrument_42);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_42;
  PriceUnitOfMeasureQty_42.setString("9290793");
set_field(msg, PriceUnitOfMeasureQty_42, Instrument_42);
  set_field(msg, FIX::Product{1}, Instrument_42);
  set_field(msg, FIX::ProductComplex{"STRING_605736060"}, Instrument_42);
  set_field(msg, FIX::PutOrCall{0}, Instrument_42);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_573215159"}, Instrument_42);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_56614315"}, Instrument_42);
  FIX::RepurchaseRate RepurchaseRate_42;
  RepurchaseRate_42.setString("23.410000");
set_field(msg, RepurchaseRate_42, Instrument_42);
  set_field(msg, FIX::RepurchaseTerm{1192090308}, Instrument_42);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_42);
  set_field(msg, FIX::SecurityDesc{"STRING_1648591607"}, Instrument_42);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_557468160"}, Instrument_42);
  set_field(msg, FIX::SecurityGroup{"STRING_773620019"}, Instrument_42);
  set_field(msg, FIX::SecurityID{"STRING_1126166683"}, Instrument_42);
  set_field(msg, FIX::SecurityIDSource{"STRING_E"}, Instrument_42);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_42);
  set_field(msg, FIX::SecuritySubType{"STRING_1398352262"}, Instrument_42);
  set_field(msg, FIX::SecurityType{"STRING_TAN"}, Instrument_42);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_42);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_42);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1734547223"}, Instrument_42);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_451115517"}, Instrument_42);
  set_field(msg, FIX::StrikeCurrency{"CHF"}, Instrument_42);
  FIX::StrikeMultiplier StrikeMultiplier_42;
  StrikeMultiplier_42.setString("15932554");
set_field(msg, StrikeMultiplier_42, Instrument_42);
  FIX::StrikePrice StrikePrice_42;
  StrikePrice_42.setString("5818187");
set_field(msg, StrikePrice_42, Instrument_42);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_42);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_42;
  StrikePriceBoundaryPrecision_42.setString("26.230000");
set_field(msg, StrikePriceBoundaryPrecision_42, Instrument_42);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_42);
  FIX::StrikeValue StrikeValue_42;
  StrikeValue_42.setString("12889859");
set_field(msg, StrikeValue_42, Instrument_42);
  set_field(msg, FIX::Symbol{"STRING_642827693"}, Instrument_42);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_42);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_42);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_42);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_42);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_42;
  UnitOfMeasureQty_42.setString("6460736");
set_field(msg, UnitOfMeasureQty_42, Instrument_42);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_42);
  all_values.push_back(Instrument_42);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_87;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_87);
    FIX::ComplexEventPrice ComplexEventPrice_87;
    ComplexEventPrice_87.setString("3869974");
set_field(noComplexEvents_0_0, ComplexEventPrice_87, ComplexEvents_NoComplexEvents_87);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_87);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_87;
    ComplexEventPriceBoundaryPrecision_87.setString("39.250000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_87, ComplexEvents_NoComplexEvents_87);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_87);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_87);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_87;
    ComplexOptPayoutAmount_87.setString("7754469");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_87, ComplexEvents_NoComplexEvents_87);
    all_values.push_back(ComplexEvents_NoComplexEvents_87);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_184;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 52, 36, 8, 8, 2015)}, ComplexEventDates_NoComplexEventDates_184);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 29, 11, 5, 9, 2004)}, ComplexEventDates_NoComplexEventDates_184);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_184);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_370;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 9, 2)}, ComplexEventTimes_NoComplexEventTimes_370);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 17, 30)}, ComplexEventTimes_NoComplexEventTimes_370);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_370);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_371;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 25, 49)}, ComplexEventTimes_NoComplexEventTimes_371);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 49, 36)}, ComplexEventTimes_NoComplexEventTimes_371);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_371);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_185;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 20, 37, 9, 8, 2002)}, ComplexEventDates_NoComplexEventDates_185);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 31, 27, 16, 5, 2001)}, ComplexEventDates_NoComplexEventDates_185);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_185);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_372;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 55, 48)}, ComplexEventTimes_NoComplexEventTimes_372);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 5, 4)}, ComplexEventTimes_NoComplexEventTimes_372);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_372);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_373;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 29, 2)}, ComplexEventTimes_NoComplexEventTimes_373);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 43, 5)}, ComplexEventTimes_NoComplexEventTimes_373);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_373);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_374;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 25, 11)}, ComplexEventTimes_NoComplexEventTimes_374);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 13, 17)}, ComplexEventTimes_NoComplexEventTimes_374);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_374);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderCancelReplaceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_87;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1446629445"}, EvntGrp_NoEvents_87);
    FIX::EventPx EventPx_87;
    EventPx_87.setString("16400712");
set_field(noEvents_0_0, EventPx_87, EvntGrp_NoEvents_87);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1930397095"}, EvntGrp_NoEvents_87);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(21, 40, 47, 21, 12, 2003)}, EvntGrp_NoEvents_87);
    set_field(noEvents_0_0, FIX::EventType{9}, EvntGrp_NoEvents_87);
    all_values.push_back(EvntGrp_NoEvents_87);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_78;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_404213064"}, InstrumentParties_NoInstrumentParties_78);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_78);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1375978829}, InstrumentParties_NoInstrumentParties_78);
    all_values.push_back(InstrumentParties_NoInstrumentParties_78);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1385871594"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{718356803}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1285640360"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{119361267}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_79;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1815692167"}, InstrumentParties_NoInstrumentParties_79);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_79);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1305352989}, InstrumentParties_NoInstrumentParties_79);
    all_values.push_back(InstrumentParties_NoInstrumentParties_79);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1181958642"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1480365320}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_444788412"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1852968799}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_87;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_2030942009"}, SecAltIDGrp_NoSecurityAltID_87);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_344238590"}, SecAltIDGrp_NoSecurityAltID_87);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_87);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_84;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1226145430"}, SecurityXML_84);
  set_field(msg, FIX::SecurityXMLLen{1523529605}, SecurityXML_84);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_127152037"}, SecurityXML_84);
  all_values.push_back(SecurityXML_84);
  all_compo_names.insert("..");

  // OrderQtyData
  multiset<string> OrderQtyData_14;
  FIX::CashOrderQty CashOrderQty_14;
  CashOrderQty_14.setString("15588484");
set_field(msg, CashOrderQty_14, OrderQtyData_14);
  FIX::OrderPercent OrderPercent_14;
  OrderPercent_14.setString("24.340000");
set_field(msg, OrderPercent_14, OrderQtyData_14);
  FIX::OrderQty OrderQty_22;
  OrderQty_22.setString("16671117");
set_field(msg, OrderQty_22, OrderQtyData_14);
  set_field(msg, FIX::RoundingDirection{'0'}, OrderQtyData_14);
  FIX::RoundingModulus RoundingModulus_14;
  RoundingModulus_14.setString("5832126");
set_field(msg, RoundingModulus_14, OrderQtyData_14);
  all_values.push_back(OrderQtyData_14);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_80;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_209726641"}, Parties_NoPartyIDs_80);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_80);
    set_field(noPartyIDs_0_0, FIX::PartyRole{75}, Parties_NoPartyIDs_80);
    all_values.push_back(Parties_NoPartyIDs_80);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_157;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_147771144"}, PtysSubGrp_NoPartySubIDs_157);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_157);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_157);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_158;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1546640469"}, PtysSubGrp_NoPartySubIDs_158);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_158);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_158);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_159;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_2017614346"}, PtysSubGrp_NoPartySubIDs_159);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_159);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_159);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PegInstructions
  multiset<string> PegInstructions_7;
  set_field(msg, FIX::PegLimitType{0}, PegInstructions_7);
  set_field(msg, FIX::PegMoveType{1}, PegInstructions_7);
  set_field(msg, FIX::PegOffsetType{3}, PegInstructions_7);
  FIX::PegOffsetValue PegOffsetValue_7;
  PegOffsetValue_7.setString("8108733");
set_field(msg, PegOffsetValue_7, PegInstructions_7);
  set_field(msg, FIX::PegPriceType{1}, PegInstructions_7);
  set_field(msg, FIX::PegRoundDirection{1}, PegInstructions_7);
  set_field(msg, FIX::PegScope{3}, PegInstructions_7);
  set_field(msg, FIX::PegSecurityDesc{"STRING_382460828"}, PegInstructions_7);
  set_field(msg, FIX::PegSecurityID{"STRING_894636273"}, PegInstructions_7);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_2070754652"}, PegInstructions_7);
  set_field(msg, FIX::PegSymbol{"STRING_265919189"}, PegInstructions_7);
  all_values.push_back(PegInstructions_7);
  all_compo_names.insert(".");

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::OrderCancelReplaceRequest::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_16;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1149416434"}, PreAllocGrp_NoAllocs_16);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{1789448794}, PreAllocGrp_NoAllocs_16);
    FIX::AllocQty AllocQty_30;
    AllocQty_30.setString("13660269");
set_field(noAllocs_0_0, AllocQty_30, PreAllocGrp_NoAllocs_16);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"CHF"}, PreAllocGrp_NoAllocs_16);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_885655029"}, PreAllocGrp_NoAllocs_16);
    all_values.push_back(PreAllocGrp_NoAllocs_16);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_83;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1336760221"}, NestedParties_NoNestedPartyIDs_83);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_83);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{77039226}, NestedParties_NoNestedPartyIDs_83);
      all_values.push_back(NestedParties_NoNestedPartyIDs_83);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_174;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_2014068468"}, NstdPtysSubGrp_NoNestedPartySubIDs_174);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{690978932}, NstdPtysSubGrp_NoNestedPartySubIDs_174);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_174);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_175;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_1563364345"}, NstdPtysSubGrp_NoNestedPartySubIDs_175);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1165842363}, NstdPtysSubGrp_NoNestedPartySubIDs_175);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_175);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoAllocs noAllocs_0_1;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_17;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_90135753"}, PreAllocGrp_NoAllocs_17);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{949523436}, PreAllocGrp_NoAllocs_17);
    FIX::AllocQty AllocQty_31;
    AllocQty_31.setString("10359730");
set_field(noAllocs_0_1, AllocQty_31, PreAllocGrp_NoAllocs_17);
    set_field(noAllocs_0_1, FIX::AllocSettlCurrency{"EUR"}, PreAllocGrp_NoAllocs_17);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_574312279"}, PreAllocGrp_NoAllocs_17);
    all_values.push_back(PreAllocGrp_NoAllocs_17);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_84;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1265917140"}, NestedParties_NoNestedPartyIDs_84);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_84);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1971276537}, NestedParties_NoNestedPartyIDs_84);
      all_values.push_back(NestedParties_NoNestedPartyIDs_84);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_176;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_894445524"}, NstdPtysSubGrp_NoNestedPartySubIDs_176);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{718429162}, NstdPtysSubGrp_NoNestedPartySubIDs_176);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_176);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_177;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_1332943162"}, NstdPtysSubGrp_NoNestedPartySubIDs_177);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{1160364713}, NstdPtysSubGrp_NoNestedPartySubIDs_177);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_177);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_85;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_1957304025"}, NestedParties_NoNestedPartyIDs_85);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_85);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{802329860}, NestedParties_NoNestedPartyIDs_85);
      all_values.push_back(NestedParties_NoNestedPartyIDs_85);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_178;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_895657219"}, NstdPtysSubGrp_NoNestedPartySubIDs_178);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{1555877441}, NstdPtysSubGrp_NoNestedPartySubIDs_178);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_178);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_179;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_2061502306"}, NstdPtysSubGrp_NoNestedPartySubIDs_179);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{762969803}, NstdPtysSubGrp_NoNestedPartySubIDs_179);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_179);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_86;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_745154014"}, NestedParties_NoNestedPartyIDs_86);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_86);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{840009029}, NestedParties_NoNestedPartyIDs_86);
      all_values.push_back(NestedParties_NoNestedPartyIDs_86);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_180;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_1871393233"}, NstdPtysSubGrp_NoNestedPartySubIDs_180);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{1530987961}, NstdPtysSubGrp_NoNestedPartySubIDs_180);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_180);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoAllocs noAllocs_0_2;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_18;
    set_field(noAllocs_0_2, FIX::AllocAccount{"STRING_1576627912"}, PreAllocGrp_NoAllocs_18);
    set_field(noAllocs_0_2, FIX::AllocAcctIDSource{889751948}, PreAllocGrp_NoAllocs_18);
    FIX::AllocQty AllocQty_32;
    AllocQty_32.setString("16211237");
set_field(noAllocs_0_2, AllocQty_32, PreAllocGrp_NoAllocs_18);
    set_field(noAllocs_0_2, FIX::AllocSettlCurrency{"EUR"}, PreAllocGrp_NoAllocs_18);
    set_field(noAllocs_0_2, FIX::IndividualAllocID{"STRING_248573002"}, PreAllocGrp_NoAllocs_18);
    all_values.push_back(PreAllocGrp_NoAllocs_18);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_87;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_352553640"}, NestedParties_NoNestedPartyIDs_87);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_87);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{2099628634}, NestedParties_NoNestedPartyIDs_87);
      all_values.push_back(NestedParties_NoNestedPartyIDs_87);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_181;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_854491306"}, NstdPtysSubGrp_NoNestedPartySubIDs_181);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{1361817144}, NstdPtysSubGrp_NoNestedPartySubIDs_181);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_181);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_182;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_1758983860"}, NstdPtysSubGrp_NoNestedPartySubIDs_182);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{1572920468}, NstdPtysSubGrp_NoNestedPartySubIDs_182);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_182);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_88;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_547276659"}, NestedParties_NoNestedPartyIDs_88);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_88);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{1382740845}, NestedParties_NoNestedPartyIDs_88);
      all_values.push_back(NestedParties_NoNestedPartyIDs_88);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_183;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_1574194785"}, NstdPtysSubGrp_NoNestedPartySubIDs_183);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{411104474}, NstdPtysSubGrp_NoNestedPartySubIDs_183);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_183);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_184;
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubID{"STRING_1777809827"}, NstdPtysSubGrp_NoNestedPartySubIDs_184);
        set_field(noNestedPartySubIDs_2_1_2_1, FIX::NestedPartySubIDType{982588578}, NstdPtysSubGrp_NoNestedPartySubIDs_184);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_184);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    msg.addGroup(noAllocs_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_19;
  set_field(msg, FIX::BenchmarkCurveCurrency{"GBP"}, SpreadOrBenchmarkCurveData_19);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_LIBID"}, SpreadOrBenchmarkCurveData_19);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_182447898"}, SpreadOrBenchmarkCurveData_19);
  FIX::BenchmarkPrice BenchmarkPrice_19;
  BenchmarkPrice_19.setString("12333050");
set_field(msg, BenchmarkPrice_19, SpreadOrBenchmarkCurveData_19);
  set_field(msg, FIX::BenchmarkPriceType{1741006159}, SpreadOrBenchmarkCurveData_19);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_2053841131"}, SpreadOrBenchmarkCurveData_19);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_616809325"}, SpreadOrBenchmarkCurveData_19);
  FIX::Spread Spread_19;
  Spread_19.setString("11701504");
set_field(msg, Spread_19, SpreadOrBenchmarkCurveData_19);
  all_values.push_back(SpreadOrBenchmarkCurveData_19);
  all_compo_names.insert(".");

  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::OrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_10;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_90449392"}, StrategyParametersGrp_NoStrategyParameters_10);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{16}, StrategyParametersGrp_NoStrategyParameters_10);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_574350792"}, StrategyParametersGrp_NoStrategyParameters_10);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_10);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_11;
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterName{"STRING_339022395"}, StrategyParametersGrp_NoStrategyParameters_11);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterType{14}, StrategyParametersGrp_NoStrategyParameters_11);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterValue{"STRING_926904433"}, StrategyParametersGrp_NoStrategyParameters_11);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_11);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_21;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_E.W"}, TrdRegTimestamps_NoTrdRegTimestamps_21);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_PF"}, TrdRegTimestamps_NoTrdRegTimestamps_21);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_21);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(13, 59, 20, 10, 2, 2010)}, TrdRegTimestamps_NoTrdRegTimestamps_21);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_1601519044"}, TrdRegTimestamps_NoTrdRegTimestamps_21);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{1}, TrdRegTimestamps_NoTrdRegTimestamps_21);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_21);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_15;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_15);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_7"}, TrdgSesGrp_NoTradingSessions_15);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_15);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_16;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_16);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_16);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_16);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_7;
  set_field(msg, FIX::TriggerAction{'3'}, TriggeringInstruction_7);
  FIX::TriggerNewPrice TriggerNewPrice_7;
  TriggerNewPrice_7.setString("20878808");
set_field(msg, TriggerNewPrice_7, TriggeringInstruction_7);
  FIX::TriggerNewQty TriggerNewQty_7;
  TriggerNewQty_7.setString("17578890");
set_field(msg, TriggerNewQty_7, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerOrderType{'2'}, TriggeringInstruction_7);
  FIX::TriggerPrice TriggerPrice_7;
  TriggerPrice_7.setString("5572065");
set_field(msg, TriggerPrice_7, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerPriceDirection{'U'}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerPriceType{'1'}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerPriceTypeScope{'3'}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_181890331"}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerSecurityID{"STRING_932915701"}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_986678358"}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerSymbol{"STRING_416936301"}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_1859820134"}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_208915523"}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerType{'3'}, TriggeringInstruction_7);
  all_values.push_back(TriggeringInstruction_7);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_76;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_285643994"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{5651711}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_759238588"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1935292933}, UnderlyingInstrument_76);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_76;
    UnderlyingAdjustedQuantity_76.setString("21019364");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_76, UnderlyingInstrument_76);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_76;
    UnderlyingAllocationPercent_76.setString("28.460000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_76, UnderlyingInstrument_76);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_76;
    UnderlyingAttachmentPoint_76.setString("54.220000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_785406543"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_240598242"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1968726034"}, UnderlyingInstrument_76);
    FIX::UnderlyingCapValue UnderlyingCapValue_76;
    UnderlyingCapValue_76.setString("12466864");
set_field(noUnderlyings_0_0, UnderlyingCapValue_76, UnderlyingInstrument_76);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_76;
    UnderlyingCashAmount_76.setString("6772222");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_76);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_76;
    UnderlyingContractMultiplier_76.setString("21012623");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{694105136}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1098474125"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2041659569"}, UnderlyingInstrument_76);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_76;
    UnderlyingCouponRate_76.setString("5.660000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_660929602"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_76);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_76;
    UnderlyingCurrentValue_76.setString("10194945");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_76, UnderlyingInstrument_76);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_76;
    UnderlyingDetachmentPoint_76.setString("84.550000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_76, UnderlyingInstrument_76);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_76;
    UnderlyingDirtyPrice_76.setString("12669567");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_76, UnderlyingInstrument_76);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_76;
    UnderlyingEndPrice_76.setString("19524102");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_76, UnderlyingInstrument_76);
    FIX::UnderlyingEndValue UnderlyingEndValue_76;
    UnderlyingEndValue_76.setString("20857168");
set_field(noUnderlyings_0_0, UnderlyingEndValue_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1683893053}, UnderlyingInstrument_76);
    FIX::UnderlyingFXRate UnderlyingFXRate_76;
    UnderlyingFXRate_76.setString("16647466");
set_field(noUnderlyings_0_0, UnderlyingFXRate_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_76);
    FIX::UnderlyingFactor UnderlyingFactor_76;
    UnderlyingFactor_76.setString("1405366");
set_field(noUnderlyings_0_0, UnderlyingFactor_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1021042305}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_432792683"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_146188374"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1780280893"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_220601968"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_100641197"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_419360091"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_893317391"}, UnderlyingInstrument_76);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_76;
    UnderlyingNotionalPercentageOutstanding_76.setString("77.400000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'6'}, UnderlyingInstrument_76);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_76;
    UnderlyingOriginalNotionalPercentageOutstanding_76.setString("97.770000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2132734182"}, UnderlyingInstrument_76);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_76;
    UnderlyingPriceUnitOfMeasureQty_76.setString("13371805");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{9452259}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{2086512858}, UnderlyingInstrument_76);
    FIX::UnderlyingPx UnderlyingPx_76;
    UnderlyingPx_76.setString("20312856");
set_field(noUnderlyings_0_0, UnderlyingPx_76, UnderlyingInstrument_76);
    FIX::UnderlyingQty UnderlyingQty_76;
    UnderlyingQty_76.setString("11079263");
set_field(noUnderlyings_0_0, UnderlyingQty_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1980688779"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_188312605"}, UnderlyingInstrument_76);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_76;
    UnderlyingRepurchaseRate_76.setString("59.870000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{284587623}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1273379026"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_640866850"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1383626078"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_392852130"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_445793414"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1321859244"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_2076745184"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_2110540112"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1469007933"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_76);
    FIX::UnderlyingStartValue UnderlyingStartValue_76;
    UnderlyingStartValue_76.setString("9840987");
set_field(noUnderlyings_0_0, UnderlyingStartValue_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1901800616"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_76);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_76;
    UnderlyingStrikePrice_76.setString("21224025");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_76, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_316627771"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1036256105"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_868236328"}, UnderlyingInstrument_76);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1202675512"}, UnderlyingInstrument_76);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_76;
    UnderlyingUnitOfMeasureQty_76.setString("16962144");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_76, UnderlyingInstrument_76);
    all_values.push_back(UnderlyingInstrument_76);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_160;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1187926046"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_160);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_885911342"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_160);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_160);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_161;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1592248364"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_161);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1126955256"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_161);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_161);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_162;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_769713381"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_162);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_552691101"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_162);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_162);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_152;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_958025987"}, UnderlyingStipulations_NoUnderlyingStips_152);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_174063440"}, UnderlyingStipulations_NoUnderlyingStips_152);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_152);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_153;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1244748010"}, UnderlyingStipulations_NoUnderlyingStips_153);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_83921365"}, UnderlyingStipulations_NoUnderlyingStips_153);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_153);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_156;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_480890441"}, UndlyInstrumentParties_NoUndlyInstrumentParties_156);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_156);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1260723704}, UndlyInstrumentParties_NoUndlyInstrumentParties_156);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_156);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_406035032"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1223780168}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1124273971"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{475833231}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_60395289"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{878590939}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_77;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_691819805"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{677291303}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_853509876"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1008447577}, UnderlyingInstrument_77);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_77;
    UnderlyingAdjustedQuantity_77.setString("17135474");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_77, UnderlyingInstrument_77);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_77;
    UnderlyingAllocationPercent_77.setString("62.040000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_77, UnderlyingInstrument_77);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_77;
    UnderlyingAttachmentPoint_77.setString("94.410000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1262278200"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1157058661"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1251565487"}, UnderlyingInstrument_77);
    FIX::UnderlyingCapValue UnderlyingCapValue_77;
    UnderlyingCapValue_77.setString("7058");
set_field(noUnderlyings_0_1, UnderlyingCapValue_77, UnderlyingInstrument_77);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_77;
    UnderlyingCashAmount_77.setString("6018233");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_77);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_77;
    UnderlyingContractMultiplier_77.setString("7704192");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1154514479}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1191197483"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1728445263"}, UnderlyingInstrument_77);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_77;
    UnderlyingCouponRate_77.setString("79.190000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_288461846"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_77);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_77;
    UnderlyingCurrentValue_77.setString("7693522");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_77, UnderlyingInstrument_77);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_77;
    UnderlyingDetachmentPoint_77.setString("64.760000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_77, UnderlyingInstrument_77);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_77;
    UnderlyingDirtyPrice_77.setString("12567482");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_77, UnderlyingInstrument_77);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_77;
    UnderlyingEndPrice_77.setString("4246183");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_77, UnderlyingInstrument_77);
    FIX::UnderlyingEndValue UnderlyingEndValue_77;
    UnderlyingEndValue_77.setString("5476915");
set_field(noUnderlyings_0_1, UnderlyingEndValue_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{333044785}, UnderlyingInstrument_77);
    FIX::UnderlyingFXRate UnderlyingFXRate_77;
    UnderlyingFXRate_77.setString("15488922");
set_field(noUnderlyings_0_1, UnderlyingFXRate_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_77);
    FIX::UnderlyingFactor UnderlyingFactor_77;
    UnderlyingFactor_77.setString("3934400");
set_field(noUnderlyings_0_1, UnderlyingFactor_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{279999587}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1715344545"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1070731377"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1133509463"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_576308474"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_636795137"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_707772020"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_639947915"}, UnderlyingInstrument_77);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_77;
    UnderlyingNotionalPercentageOutstanding_77.setString("33.370000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_77);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_77;
    UnderlyingOriginalNotionalPercentageOutstanding_77.setString("34.030000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1899779232"}, UnderlyingInstrument_77);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_77;
    UnderlyingPriceUnitOfMeasureQty_77.setString("3191704");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{2122550499}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{522714860}, UnderlyingInstrument_77);
    FIX::UnderlyingPx UnderlyingPx_77;
    UnderlyingPx_77.setString("14736848");
set_field(noUnderlyings_0_1, UnderlyingPx_77, UnderlyingInstrument_77);
    FIX::UnderlyingQty UnderlyingQty_77;
    UnderlyingQty_77.setString("11662643");
set_field(noUnderlyings_0_1, UnderlyingQty_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_103676475"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_654779161"}, UnderlyingInstrument_77);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_77;
    UnderlyingRepurchaseRate_77.setString("61.800000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1916043103}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_650803722"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_76594819"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_2057699580"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1907551987"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_501213144"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_457907440"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_93113124"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_2050105439"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1481432180"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_77);
    FIX::UnderlyingStartValue UnderlyingStartValue_77;
    UnderlyingStartValue_77.setString("1826213");
set_field(noUnderlyings_0_1, UnderlyingStartValue_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1049293078"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_77);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_77;
    UnderlyingStrikePrice_77.setString("16256015");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_46596065"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_2023902862"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_118065820"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1945669402"}, UnderlyingInstrument_77);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_77;
    UnderlyingUnitOfMeasureQty_77.setString("17412498");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_77, UnderlyingInstrument_77);
    all_values.push_back(UnderlyingInstrument_77);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_163;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1697964986"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_163);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_2060420307"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_163);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_163);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_154;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_73196198"}, UnderlyingStipulations_NoUnderlyingStips_154);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1386621549"}, UnderlyingStipulations_NoUnderlyingStips_154);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_154);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_155;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1003426760"}, UnderlyingStipulations_NoUnderlyingStips_155);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_176872673"}, UnderlyingStipulations_NoUnderlyingStips_155);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_155);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_157;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_310669293"}, UndlyInstrumentParties_NoUndlyInstrumentParties_157);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_157);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{544720785}, UndlyInstrumentParties_NoUndlyInstrumentParties_157);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_157);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2003131709"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{304789125}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_888477256"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{313555501}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_158;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_397902249"}, UndlyInstrumentParties_NoUndlyInstrumentParties_158);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_158);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1794987682}, UndlyInstrumentParties_NoUndlyInstrumentParties_158);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_158);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_973720426"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{696797112}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_294256375"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{142367620}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_174915016"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{340852440}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_159;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_18786834"}, UndlyInstrumentParties_NoUndlyInstrumentParties_159);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_159);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{139038195}, UndlyInstrumentParties_NoUndlyInstrumentParties_159);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_159);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_155076411"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1837003181}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_78;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1672973389"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{2139722485}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1910199380"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{912111290}, UnderlyingInstrument_78);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_78;
    UnderlyingAdjustedQuantity_78.setString("9956655");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_78, UnderlyingInstrument_78);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_78;
    UnderlyingAllocationPercent_78.setString("20.530000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_78, UnderlyingInstrument_78);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_78;
    UnderlyingAttachmentPoint_78.setString("83.530000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1306334891"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_2032504182"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1350749139"}, UnderlyingInstrument_78);
    FIX::UnderlyingCapValue UnderlyingCapValue_78;
    UnderlyingCapValue_78.setString("16935990");
set_field(noUnderlyings_0_2, UnderlyingCapValue_78, UnderlyingInstrument_78);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_78;
    UnderlyingCashAmount_78.setString("18881522");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_78);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_78;
    UnderlyingContractMultiplier_78.setString("4345926");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{54224097}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_2053440513"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1225691660"}, UnderlyingInstrument_78);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_78;
    UnderlyingCouponRate_78.setString("17.790000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_790412313"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_78);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_78;
    UnderlyingCurrentValue_78.setString("10846686");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_78, UnderlyingInstrument_78);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_78;
    UnderlyingDetachmentPoint_78.setString("60.590000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_78, UnderlyingInstrument_78);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_78;
    UnderlyingDirtyPrice_78.setString("5734402");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_78, UnderlyingInstrument_78);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_78;
    UnderlyingEndPrice_78.setString("14255211");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_78, UnderlyingInstrument_78);
    FIX::UnderlyingEndValue UnderlyingEndValue_78;
    UnderlyingEndValue_78.setString("2130828");
set_field(noUnderlyings_0_2, UnderlyingEndValue_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{866421096}, UnderlyingInstrument_78);
    FIX::UnderlyingFXRate UnderlyingFXRate_78;
    UnderlyingFXRate_78.setString("15645593");
set_field(noUnderlyings_0_2, UnderlyingFXRate_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_78);
    FIX::UnderlyingFactor UnderlyingFactor_78;
    UnderlyingFactor_78.setString("10214975");
set_field(noUnderlyings_0_2, UnderlyingFactor_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{1254078858}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1498609364"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1013736345"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_1016794590"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_263237007"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_2009401943"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_956382995"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1069265360"}, UnderlyingInstrument_78);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_78;
    UnderlyingNotionalPercentageOutstanding_78.setString("31.860000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_78);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_78;
    UnderlyingOriginalNotionalPercentageOutstanding_78.setString("8.510000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_714368541"}, UnderlyingInstrument_78);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_78;
    UnderlyingPriceUnitOfMeasureQty_78.setString("5820721");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{1928069115}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{1148961153}, UnderlyingInstrument_78);
    FIX::UnderlyingPx UnderlyingPx_78;
    UnderlyingPx_78.setString("6362962");
set_field(noUnderlyings_0_2, UnderlyingPx_78, UnderlyingInstrument_78);
    FIX::UnderlyingQty UnderlyingQty_78;
    UnderlyingQty_78.setString("18340259");
set_field(noUnderlyings_0_2, UnderlyingQty_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_227169165"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_338024353"}, UnderlyingInstrument_78);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_78;
    UnderlyingRepurchaseRate_78.setString("46.460000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{279097604}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_736549596"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_1561623335"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_473393663"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1309989856"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_839660817"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_686476556"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_28927304"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_256736493"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_512112532"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_78);
    FIX::UnderlyingStartValue UnderlyingStartValue_78;
    UnderlyingStartValue_78.setString("15108153");
set_field(noUnderlyings_0_2, UnderlyingStartValue_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2010721896"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_78);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_78;
    UnderlyingStrikePrice_78.setString("1264752");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_78, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1926079451"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_1336509289"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_1195740616"}, UnderlyingInstrument_78);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_946848989"}, UnderlyingInstrument_78);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_78;
    UnderlyingUnitOfMeasureQty_78.setString("304291");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_78, UnderlyingInstrument_78);
    all_values.push_back(UnderlyingInstrument_78);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_164;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1661217531"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_164);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_612501296"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_164);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_164);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_165;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_1248856935"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_165);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_662695036"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_165);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_165);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_156;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_935399268"}, UnderlyingStipulations_NoUnderlyingStips_156);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_889864202"}, UnderlyingStipulations_NoUnderlyingStips_156);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_156);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_157;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_1586821872"}, UnderlyingStipulations_NoUnderlyingStips_157);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_1412353914"}, UnderlyingStipulations_NoUnderlyingStips_157);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_157);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_158;
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipType{"STRING_1168961806"}, UnderlyingStipulations_NoUnderlyingStips_158);
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipValue{"STRING_175887821"}, UnderlyingStipulations_NoUnderlyingStips_158);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_158);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_160;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1642355469"}, UndlyInstrumentParties_NoUndlyInstrumentParties_160);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_160);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{1666154419}, UndlyInstrumentParties_NoUndlyInstrumentParties_160);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_160);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1514804981"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1922890912}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_161;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_693460909"}, UndlyInstrumentParties_NoUndlyInstrumentParties_161);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_161);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{1286222616}, UndlyInstrumentParties_NoUndlyInstrumentParties_161);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_161);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_334423653"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1666348909}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_14;
  FIX::Yield Yield_14;
  Yield_14.setString("44.130000");
set_field(msg, Yield_14, YieldData_14);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_113019456"}, YieldData_14);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_855374550"}, YieldData_14);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_14;
  YieldRedemptionPrice_14.setString("18789150");
set_field(msg, YieldRedemptionPrice_14, YieldData_14);
  set_field(msg, FIX::YieldRedemptionPriceType{1059868446}, YieldData_14);
  set_field(msg, FIX::YieldType{"STRING_NEXTREFUND"}, YieldData_14);
  all_values.push_back(YieldData_14);
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
