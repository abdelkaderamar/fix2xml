#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NewOrderSingle.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderSingle, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::NewOrderSingle msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderSingle_0;
  set_field(msg, FIX::Account{"STRING_1909532138"}, NewOrderSingle_0);
  set_field(msg, FIX::AccountType{3}, NewOrderSingle_0);
  set_field(msg, FIX::AcctIDSource{3}, NewOrderSingle_0);
  set_field(msg, FIX::AllocID{"STRING_1567371525"}, NewOrderSingle_0);
  set_field(msg, FIX::BookingType{0}, NewOrderSingle_0);
  set_field(msg, FIX::BookingUnit{'2'}, NewOrderSingle_0);
  set_field(msg, FIX::CancellationRights{'Y'}, NewOrderSingle_0);
  set_field(msg, FIX::CashMargin{'1'}, NewOrderSingle_0);
  set_field(msg, FIX::ClOrdID{"STRING_2110511406"}, NewOrderSingle_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_16491473"}, NewOrderSingle_0);
  set_field(msg, FIX::ClearingFeeIndicator{"STRING_5"}, NewOrderSingle_0);
  set_field(msg, FIX::ComplianceID{"STRING_1641248477"}, NewOrderSingle_0);
  set_field(msg, FIX::CoveredOrUncovered{1}, NewOrderSingle_0);
  set_field(msg, FIX::Currency{"EUR"}, NewOrderSingle_0);
  set_field(msg, FIX::CustDirectedOrder{true}, NewOrderSingle_0);
  set_field(msg, FIX::CustOrderCapacity{2}, NewOrderSingle_0);
  set_field(msg, FIX::CustOrderHandlingInst{"MULTIPLESTRINGVALUE_MAO"}, NewOrderSingle_0);
  set_field(msg, FIX::DayBookingInst{'2'}, NewOrderSingle_0);
  set_field(msg, FIX::Designation{"STRING_1546613719"}, NewOrderSingle_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(7, 13, 24, 17, 8, 2017)}, NewOrderSingle_0);
  set_field(msg, FIX::EncodedText{"DATA_1168723946"}, NewOrderSingle_0);
  set_field(msg, FIX::EncodedTextLen{225349638}, NewOrderSingle_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_882895368"}, NewOrderSingle_0);
  set_field(msg, FIX::ExDestinationIDSource{'E'}, NewOrderSingle_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_m"}, NewOrderSingle_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_1601243280"}, NewOrderSingle_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(22, 59, 25, 10, 12, 2011)}, NewOrderSingle_0);
  set_field(msg, FIX::ForexReq{true}, NewOrderSingle_0);
  set_field(msg, FIX::GTBookingInst{1}, NewOrderSingle_0);
  set_field(msg, FIX::HandlInst{'2'}, NewOrderSingle_0);
  set_field(msg, FIX::IOIID{"STRING_425283411"}, NewOrderSingle_0);
  set_field(msg, FIX::LocateReqd{true}, NewOrderSingle_0);
  set_field(msg, FIX::ManualOrderIndicator{false}, NewOrderSingle_0);
  FIX::MatchIncrement MatchIncrement_6;
  MatchIncrement_6.setString("21446054");
set_field(msg, MatchIncrement_6, NewOrderSingle_0);
  FIX::MaxFloor MaxFloor_6;
  MaxFloor_6.setString("14503542");
set_field(msg, MaxFloor_6, NewOrderSingle_0);
  set_field(msg, FIX::MaxPriceLevels{1057132559}, NewOrderSingle_0);
  FIX::MaxShow MaxShow_6;
  MaxShow_6.setString("8405181");
set_field(msg, MaxShow_6, NewOrderSingle_0);
  FIX::MinQty MinQty_10;
  MinQty_10.setString("8494843");
set_field(msg, MinQty_10, NewOrderSingle_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'2'}, NewOrderSingle_0);
  set_field(msg, FIX::OrdType{'A'}, NewOrderSingle_0);
  set_field(msg, FIX::OrderCapacity{'I'}, NewOrderSingle_0);
  set_field(msg, FIX::OrderHandlingInstSource{1}, NewOrderSingle_0);
  FIX::OrderQty2 OrderQty2_6;
  OrderQty2_6.setString("19316111");
set_field(msg, OrderQty2_6, NewOrderSingle_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_A"}, NewOrderSingle_0);
  FIX::ParticipationRate ParticipationRate_6;
  ParticipationRate_6.setString("16.720000");
set_field(msg, ParticipationRate_6, NewOrderSingle_0);
  set_field(msg, FIX::PositionEffect{'N'}, NewOrderSingle_0);
  set_field(msg, FIX::PreTradeAnonymity{false}, NewOrderSingle_0);
  set_field(msg, FIX::PreallocMethod{'1'}, NewOrderSingle_0);
  FIX::PrevClosePx PrevClosePx_6;
  PrevClosePx_6.setString("13346196");
set_field(msg, PrevClosePx_6, NewOrderSingle_0);
  FIX::Price Price_16;
  Price_16.setString("18319805");
set_field(msg, Price_16, NewOrderSingle_0);
  FIX::Price2 Price2_1;
  Price2_1.setString("11059766");
set_field(msg, Price2_1, NewOrderSingle_0);
  set_field(msg, FIX::PriceProtectionScope{'1'}, NewOrderSingle_0);
  set_field(msg, FIX::PriceType{7}, NewOrderSingle_0);
  set_field(msg, FIX::ProcessCode{'1'}, NewOrderSingle_0);
  set_field(msg, FIX::QtyType{2}, NewOrderSingle_0);
  set_field(msg, FIX::QuoteID{"STRING_1753061644"}, NewOrderSingle_0);
  set_field(msg, FIX::ReceivedDeptID{"STRING_953863751"}, NewOrderSingle_0);
  set_field(msg, FIX::RefOrderID{"STRING_1515565202"}, NewOrderSingle_0);
  set_field(msg, FIX::RefOrderIDSource{'2'}, NewOrderSingle_0);
  set_field(msg, FIX::RegistID{"STRING_1328656068"}, NewOrderSingle_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1423357294"}, NewOrderSingle_0);
  set_field(msg, FIX::SettlCurrency{"USD"}, NewOrderSingle_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_931426044"}, NewOrderSingle_0);
  set_field(msg, FIX::SettlDate2{"LOCALMKTDATE_558269758"}, NewOrderSingle_0);
  set_field(msg, FIX::SettlType{"STRING_1"}, NewOrderSingle_0);
  set_field(msg, FIX::Side{'C'}, NewOrderSingle_0);
  set_field(msg, FIX::SolicitedFlag{true}, NewOrderSingle_0);
  FIX::StopPx StopPx_6;
  StopPx_6.setString("20211449");
set_field(msg, StopPx_6, NewOrderSingle_0);
  set_field(msg, FIX::TargetStrategy{2}, NewOrderSingle_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_65678937"}, NewOrderSingle_0);
  set_field(msg, FIX::Text{"STRING_369756820"}, NewOrderSingle_0);
  set_field(msg, FIX::TimeInForce{'7'}, NewOrderSingle_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1997290123"}, NewOrderSingle_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_1988989609"}, NewOrderSingle_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(16, 9, 23, 4, 6, 2006)}, NewOrderSingle_0);
  all_values.push_back(NewOrderSingle_0);

  all_compo_names.insert("NewOrderSingle");

  // CommissionData
  multiset<string> CommissionData_16;
  set_field(msg, FIX::CommCurrency{"CHF"}, CommissionData_16);
  set_field(msg, FIX::CommType{'2'}, CommissionData_16);
  FIX::Commission Commission_16;
  Commission_16.setString("17418703");
set_field(msg, Commission_16, CommissionData_16);
  set_field(msg, FIX::FundRenewWaiv{'Y'}, CommissionData_16);
  all_values.push_back(CommissionData_16);
  all_compo_names.insert(".");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_6;
  set_field(msg, FIX::DiscretionInst{'0'}, DiscretionInstructions_6);
  set_field(msg, FIX::DiscretionLimitType{0}, DiscretionInstructions_6);
  set_field(msg, FIX::DiscretionMoveType{0}, DiscretionInstructions_6);
  set_field(msg, FIX::DiscretionOffsetType{1}, DiscretionInstructions_6);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_6;
  DiscretionOffsetValue_6.setString("3858255");
set_field(msg, DiscretionOffsetValue_6, DiscretionInstructions_6);
  set_field(msg, FIX::DiscretionRoundDirection{2}, DiscretionInstructions_6);
  set_field(msg, FIX::DiscretionScope{2}, DiscretionInstructions_6);
  all_values.push_back(DiscretionInstructions_6);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_6;
  FIX::DisplayHighQty DisplayHighQty_6;
  DisplayHighQty_6.setString("13172515");
set_field(msg, DisplayHighQty_6, DisplayInstruction_6);
  FIX::DisplayLowQty DisplayLowQty_6;
  DisplayLowQty_6.setString("13232284");
set_field(msg, DisplayLowQty_6, DisplayInstruction_6);
  set_field(msg, FIX::DisplayMethod{'4'}, DisplayInstruction_6);
  FIX::DisplayMinIncr DisplayMinIncr_6;
  DisplayMinIncr_6.setString("11583265");
set_field(msg, DisplayMinIncr_6, DisplayInstruction_6);
  FIX::DisplayQty DisplayQty_6;
  DisplayQty_6.setString("5745327");
set_field(msg, DisplayQty_6, DisplayInstruction_6);
  set_field(msg, FIX::DisplayWhen{'2'}, DisplayInstruction_6);
  FIX::RefreshQty RefreshQty_6;
  RefreshQty_6.setString("2043262");
set_field(msg, RefreshQty_6, DisplayInstruction_6);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_6;
  SecondaryDisplayQty_6.setString("6402116");
set_field(msg, SecondaryDisplayQty_6, DisplayInstruction_6);
  all_values.push_back(DisplayInstruction_6);
  all_compo_names.insert(".");

  // FinancingDetails
  multiset<string> FinancingDetails_12;
  set_field(msg, FIX::AgreementCurrency{"USD"}, FinancingDetails_12);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_490018174"}, FinancingDetails_12);
  set_field(msg, FIX::AgreementDesc{"STRING_1162429930"}, FinancingDetails_12);
  set_field(msg, FIX::AgreementID{"STRING_1343703552"}, FinancingDetails_12);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_12);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_701034671"}, FinancingDetails_12);
  FIX::MarginRatio MarginRatio_12;
  MarginRatio_12.setString("46.070000");
set_field(msg, MarginRatio_12, FinancingDetails_12);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1282470094"}, FinancingDetails_12);
  set_field(msg, FIX::TerminationType{1}, FinancingDetails_12);
  all_values.push_back(FinancingDetails_12);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_40;
  FIX::AttachmentPoint AttachmentPoint_40;
  AttachmentPoint_40.setString("23.350000");
set_field(msg, AttachmentPoint_40, Instrument_40);
  set_field(msg, FIX::CFICode{"STRING_1922802488"}, Instrument_40);
  set_field(msg, FIX::CPProgram{99}, Instrument_40);
  set_field(msg, FIX::CPRegType{"STRING_1269864808"}, Instrument_40);
  FIX::CapPrice CapPrice_40;
  CapPrice_40.setString("15171891");
set_field(msg, CapPrice_40, Instrument_40);
  FIX::ContractMultiplier ContractMultiplier_40;
  ContractMultiplier_40.setString("4544507");
set_field(msg, ContractMultiplier_40, Instrument_40);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_40);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_479657410"}, Instrument_40);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_658261499"}, Instrument_40);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_310286030"}, Instrument_40);
  FIX::CouponRate CouponRate_40;
  CouponRate_40.setString("29.420000");
set_field(msg, CouponRate_40, Instrument_40);
  set_field(msg, FIX::CreditRating{"STRING_1423220222"}, Instrument_40);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_216131135"}, Instrument_40);
  FIX::DetachmentPoint DetachmentPoint_40;
  DetachmentPoint_40.setString("8.710000");
set_field(msg, DetachmentPoint_40, Instrument_40);
  set_field(msg, FIX::EncodedIssuer{"DATA_598965056"}, Instrument_40);
  set_field(msg, FIX::EncodedIssuerLen{1293636934}, Instrument_40);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1193577403"}, Instrument_40);
  set_field(msg, FIX::EncodedSecurityDescLen{1173497818}, Instrument_40);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_40);
  FIX::Factor Factor_40;
  Factor_40.setString("13979036");
set_field(msg, Factor_40, Instrument_40);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_40);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_40);
  FIX::FloorPrice FloorPrice_40;
  FloorPrice_40.setString("7135158");
set_field(msg, FloorPrice_40, Instrument_40);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_40);
  set_field(msg, FIX::InstrRegistry{"STRING_433190687"}, Instrument_40);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_40);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1448920178"}, Instrument_40);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1134225358"}, Instrument_40);
  set_field(msg, FIX::Issuer{"STRING_638780408"}, Instrument_40);
  set_field(msg, FIX::ListMethod{1}, Instrument_40);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1058361679"}, Instrument_40);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1859142744"}, Instrument_40);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_359225465"}, Instrument_40);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1444866210"}, Instrument_40);
  FIX::MinPriceIncrement MinPriceIncrement_40;
  MinPriceIncrement_40.setString("9815239");
set_field(msg, MinPriceIncrement_40, Instrument_40);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_40;
  MinPriceIncrementAmount_40.setString("18764146");
set_field(msg, MinPriceIncrementAmount_40, Instrument_40);
  set_field(msg, FIX::NTPositionLimit{1899316949}, Instrument_40);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_40;
  NotionalPercentageOutstanding_40.setString("12.890000");
set_field(msg, NotionalPercentageOutstanding_40, Instrument_40);
  set_field(msg, FIX::OptAttribute{'2'}, Instrument_40);
  FIX::OptPayoutAmount OptPayoutAmount_40;
  OptPayoutAmount_40.setString("4100948");
set_field(msg, OptPayoutAmount_40, Instrument_40);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_40);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_40;
  OriginalNotionalPercentageOutstanding_40.setString("13.410000");
set_field(msg, OriginalNotionalPercentageOutstanding_40, Instrument_40);
  set_field(msg, FIX::Pool{"STRING_1833315023"}, Instrument_40);
  set_field(msg, FIX::PositionLimit{1633688455}, Instrument_40);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_40);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_284796431"}, Instrument_40);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_40;
  PriceUnitOfMeasureQty_40.setString("7798417");
set_field(msg, PriceUnitOfMeasureQty_40, Instrument_40);
  set_field(msg, FIX::Product{6}, Instrument_40);
  set_field(msg, FIX::ProductComplex{"STRING_1458294250"}, Instrument_40);
  set_field(msg, FIX::PutOrCall{1}, Instrument_40);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1553319623"}, Instrument_40);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1124520119"}, Instrument_40);
  FIX::RepurchaseRate RepurchaseRate_40;
  RepurchaseRate_40.setString("29.330000");
set_field(msg, RepurchaseRate_40, Instrument_40);
  set_field(msg, FIX::RepurchaseTerm{119351872}, Instrument_40);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_40);
  set_field(msg, FIX::SecurityDesc{"STRING_581113620"}, Instrument_40);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_29087674"}, Instrument_40);
  set_field(msg, FIX::SecurityGroup{"STRING_582200694"}, Instrument_40);
  set_field(msg, FIX::SecurityID{"STRING_1715338979"}, Instrument_40);
  set_field(msg, FIX::SecurityIDSource{"STRING_3"}, Instrument_40);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_40);
  set_field(msg, FIX::SecuritySubType{"STRING_626217010"}, Instrument_40);
  set_field(msg, FIX::SecurityType{"STRING_EUSUPRA"}, Instrument_40);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_40);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_40);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1361051083"}, Instrument_40);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1254263773"}, Instrument_40);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_40);
  FIX::StrikeMultiplier StrikeMultiplier_40;
  StrikeMultiplier_40.setString("14628521");
set_field(msg, StrikeMultiplier_40, Instrument_40);
  FIX::StrikePrice StrikePrice_40;
  StrikePrice_40.setString("855276");
set_field(msg, StrikePrice_40, Instrument_40);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_40);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_40;
  StrikePriceBoundaryPrecision_40.setString("98.650000");
set_field(msg, StrikePriceBoundaryPrecision_40, Instrument_40);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_40);
  FIX::StrikeValue StrikeValue_40;
  StrikeValue_40.setString("12246008");
set_field(msg, StrikeValue_40, Instrument_40);
  set_field(msg, FIX::Symbol{"STRING_1498762078"}, Instrument_40);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_40);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_40);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_40);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_40);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_40;
  UnitOfMeasureQty_40.setString("7341211");
set_field(msg, UnitOfMeasureQty_40, Instrument_40);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_40);
  all_values.push_back(Instrument_40);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderSingle::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_83;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_83);
    FIX::ComplexEventPrice ComplexEventPrice_83;
    ComplexEventPrice_83.setString("11793658");
set_field(noComplexEvents_0_0, ComplexEventPrice_83, ComplexEvents_NoComplexEvents_83);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_83);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_83;
    ComplexEventPriceBoundaryPrecision_83.setString("76.750000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_83, ComplexEvents_NoComplexEvents_83);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_83);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_83);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_83;
    ComplexOptPayoutAmount_83.setString("10310130");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_83, ComplexEvents_NoComplexEvents_83);
    all_values.push_back(ComplexEvents_NoComplexEvents_83);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_175;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 20, 47, 17, 4, 2006)}, ComplexEventDates_NoComplexEventDates_175);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 24, 57, 15, 2, 2009)}, ComplexEventDates_NoComplexEventDates_175);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_175);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_354;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 51, 37)}, ComplexEventTimes_NoComplexEventTimes_354);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 57, 33)}, ComplexEventTimes_NoComplexEventTimes_354);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_354);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_355;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 31, 15)}, ComplexEventTimes_NoComplexEventTimes_355);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 13, 11)}, ComplexEventTimes_NoComplexEventTimes_355);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_355);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_356;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 31, 53)}, ComplexEventTimes_NoComplexEventTimes_356);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 45, 46)}, ComplexEventTimes_NoComplexEventTimes_356);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_356);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_176;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 43, 49, 11, 3, 2001)}, ComplexEventDates_NoComplexEventDates_176);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 58, 59, 1, 4, 2001)}, ComplexEventDates_NoComplexEventDates_176);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_176);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_357;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 58, 57)}, ComplexEventTimes_NoComplexEventTimes_357);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 11, 36)}, ComplexEventTimes_NoComplexEventTimes_357);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_357);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_177;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 7, 14, 4, 2, 2015)}, ComplexEventDates_NoComplexEventDates_177);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 1, 5, 15, 9, 2002)}, ComplexEventDates_NoComplexEventDates_177);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_177);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_358;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 29, 58)}, ComplexEventTimes_NoComplexEventTimes_358);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 47, 23)}, ComplexEventTimes_NoComplexEventTimes_358);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_358);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::NewOrderSingle::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_85;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_490758450"}, EvntGrp_NoEvents_85);
    FIX::EventPx EventPx_85;
    EventPx_85.setString("7530046");
set_field(noEvents_0_0, EventPx_85, EvntGrp_NoEvents_85);
    set_field(noEvents_0_0, FIX::EventText{"STRING_2121559500"}, EvntGrp_NoEvents_85);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(15, 3, 39, 8, 1, 2002)}, EvntGrp_NoEvents_85);
    set_field(noEvents_0_0, FIX::EventType{15}, EvntGrp_NoEvents_85);
    all_values.push_back(EvntGrp_NoEvents_85);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderSingle::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_76;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_514775395"}, InstrumentParties_NoInstrumentParties_76);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_76);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{336281194}, InstrumentParties_NoInstrumentParties_76);
    all_values.push_back(InstrumentParties_NoInstrumentParties_76);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1352114918"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1793006500}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1521459729"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{703309334}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderSingle::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_84;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1265209000"}, SecAltIDGrp_NoSecurityAltID_84);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_545073133"}, SecAltIDGrp_NoSecurityAltID_84);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_84);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_85;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1345578462"}, SecAltIDGrp_NoSecurityAltID_85);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1686395950"}, SecAltIDGrp_NoSecurityAltID_85);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_85);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_80;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1445375171"}, SecurityXML_80);
  set_field(msg, FIX::SecurityXMLLen{1147000538}, SecurityXML_80);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1686901582"}, SecurityXML_80);
  all_values.push_back(SecurityXML_80);
  all_compo_names.insert("..");

  // OrderQtyData
  multiset<string> OrderQtyData_13;
  FIX::CashOrderQty CashOrderQty_13;
  CashOrderQty_13.setString("7372310");
set_field(msg, CashOrderQty_13, OrderQtyData_13);
  FIX::OrderPercent OrderPercent_13;
  OrderPercent_13.setString("2.330000");
set_field(msg, OrderPercent_13, OrderQtyData_13);
  FIX::OrderQty OrderQty_21;
  OrderQty_21.setString("10506509");
set_field(msg, OrderQty_21, OrderQtyData_13);
  set_field(msg, FIX::RoundingDirection{'2'}, OrderQtyData_13);
  FIX::RoundingModulus RoundingModulus_13;
  RoundingModulus_13.setString("7772148");
set_field(msg, RoundingModulus_13, OrderQtyData_13);
  all_values.push_back(OrderQtyData_13);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_78;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_491001916"}, Parties_NoPartyIDs_78);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'G'}, Parties_NoPartyIDs_78);
    set_field(noPartyIDs_0_0, FIX::PartyRole{14}, Parties_NoPartyIDs_78);
    all_values.push_back(Parties_NoPartyIDs_78);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_152;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1984229774"}, PtysSubGrp_NoPartySubIDs_152);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_152);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_152);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_153;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1830780686"}, PtysSubGrp_NoPartySubIDs_153);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_153);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_153);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_154;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1239881934"}, PtysSubGrp_NoPartySubIDs_154);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_154);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_154);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_79;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_494576378"}, Parties_NoPartyIDs_79);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_79);
    set_field(noPartyIDs_0_1, FIX::PartyRole{41}, Parties_NoPartyIDs_79);
    all_values.push_back(Parties_NoPartyIDs_79);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_155;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1221685981"}, PtysSubGrp_NoPartySubIDs_155);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_155);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_155);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_156;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_402516983"}, PtysSubGrp_NoPartySubIDs_156);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_156);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_156);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // PegInstructions
  multiset<string> PegInstructions_6;
  set_field(msg, FIX::PegLimitType{0}, PegInstructions_6);
  set_field(msg, FIX::PegMoveType{0}, PegInstructions_6);
  set_field(msg, FIX::PegOffsetType{3}, PegInstructions_6);
  FIX::PegOffsetValue PegOffsetValue_6;
  PegOffsetValue_6.setString("3685907");
set_field(msg, PegOffsetValue_6, PegInstructions_6);
  set_field(msg, FIX::PegPriceType{9}, PegInstructions_6);
  set_field(msg, FIX::PegRoundDirection{1}, PegInstructions_6);
  set_field(msg, FIX::PegScope{3}, PegInstructions_6);
  set_field(msg, FIX::PegSecurityDesc{"STRING_982712669"}, PegInstructions_6);
  set_field(msg, FIX::PegSecurityID{"STRING_1183178619"}, PegInstructions_6);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_958659667"}, PegInstructions_6);
  set_field(msg, FIX::PegSymbol{"STRING_63218501"}, PegInstructions_6);
  all_values.push_back(PegInstructions_6);
  all_compo_names.insert(".");

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::NewOrderSingle::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_14;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1983386477"}, PreAllocGrp_NoAllocs_14);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{554220417}, PreAllocGrp_NoAllocs_14);
    FIX::AllocQty AllocQty_28;
    AllocQty_28.setString("19309317");
set_field(noAllocs_0_0, AllocQty_28, PreAllocGrp_NoAllocs_14);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"CHF"}, PreAllocGrp_NoAllocs_14);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_1767677839"}, PreAllocGrp_NoAllocs_14);
    all_values.push_back(PreAllocGrp_NoAllocs_14);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_80;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_360942483"}, NestedParties_NoNestedPartyIDs_80);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_80);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1356611391}, NestedParties_NoNestedPartyIDs_80);
      all_values.push_back(NestedParties_NoNestedPartyIDs_80);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_170;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1326615170"}, NstdPtysSubGrp_NoNestedPartySubIDs_170);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{785290872}, NstdPtysSubGrp_NoNestedPartySubIDs_170);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_170);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_171;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_749508308"}, NstdPtysSubGrp_NoNestedPartySubIDs_171);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1025822818}, NstdPtysSubGrp_NoNestedPartySubIDs_171);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_171);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoAllocs noAllocs_0_1;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_15;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_2006976853"}, PreAllocGrp_NoAllocs_15);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{313977781}, PreAllocGrp_NoAllocs_15);
    FIX::AllocQty AllocQty_29;
    AllocQty_29.setString("14283398");
set_field(noAllocs_0_1, AllocQty_29, PreAllocGrp_NoAllocs_15);
    set_field(noAllocs_0_1, FIX::AllocSettlCurrency{"JPY"}, PreAllocGrp_NoAllocs_15);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_228446269"}, PreAllocGrp_NoAllocs_15);
    all_values.push_back(PreAllocGrp_NoAllocs_15);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_81;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_1512247030"}, NestedParties_NoNestedPartyIDs_81);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_81);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1844302472}, NestedParties_NoNestedPartyIDs_81);
      all_values.push_back(NestedParties_NoNestedPartyIDs_81);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_172;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_1456640577"}, NstdPtysSubGrp_NoNestedPartySubIDs_172);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{879997443}, NstdPtysSubGrp_NoNestedPartySubIDs_172);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_172);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_82;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_231431759"}, NestedParties_NoNestedPartyIDs_82);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_82);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{692907282}, NestedParties_NoNestedPartyIDs_82);
      all_values.push_back(NestedParties_NoNestedPartyIDs_82);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_173;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_2074079496"}, NstdPtysSubGrp_NoNestedPartySubIDs_173);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{476355347}, NstdPtysSubGrp_NoNestedPartySubIDs_173);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_173);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_18;
  set_field(msg, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_18);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_SWAP"}, SpreadOrBenchmarkCurveData_18);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1759708109"}, SpreadOrBenchmarkCurveData_18);
  FIX::BenchmarkPrice BenchmarkPrice_18;
  BenchmarkPrice_18.setString("9651837");
set_field(msg, BenchmarkPrice_18, SpreadOrBenchmarkCurveData_18);
  set_field(msg, FIX::BenchmarkPriceType{928588330}, SpreadOrBenchmarkCurveData_18);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_968835852"}, SpreadOrBenchmarkCurveData_18);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1524198693"}, SpreadOrBenchmarkCurveData_18);
  FIX::Spread Spread_18;
  Spread_18.setString("1077198");
set_field(msg, Spread_18, SpreadOrBenchmarkCurveData_18);
  all_values.push_back(SpreadOrBenchmarkCurveData_18);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_27;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_CPY"}, Stipulations_NoStipulations_27);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1133542671"}, Stipulations_NoStipulations_27);
    all_values.push_back(Stipulations_NoStipulations_27);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_28;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_ISSUE"}, Stipulations_NoStipulations_28);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_440201134"}, Stipulations_NoStipulations_28);
    all_values.push_back(Stipulations_NoStipulations_28);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderSingle::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_8;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_139502521"}, StrategyParametersGrp_NoStrategyParameters_8);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{1}, StrategyParametersGrp_NoStrategyParameters_8);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_642845094"}, StrategyParametersGrp_NoStrategyParameters_8);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_8);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_9;
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterName{"STRING_824836607"}, StrategyParametersGrp_NoStrategyParameters_9);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterType{2}, StrategyParametersGrp_NoStrategyParameters_9);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterValue{"STRING_1116773002"}, StrategyParametersGrp_NoStrategyParameters_9);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_9);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::NewOrderSingle::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_18;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_MQT"}, TrdRegTimestamps_NoTrdRegTimestamps_18);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_T"}, TrdRegTimestamps_NoTrdRegTimestamps_18);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_18);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(3, 56, 11, 23, 12, 2011)}, TrdRegTimestamps_NoTrdRegTimestamps_18);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_329142505"}, TrdRegTimestamps_NoTrdRegTimestamps_18);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{3}, TrdRegTimestamps_NoTrdRegTimestamps_18);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_18);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_19;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_E.W"}, TrdRegTimestamps_NoTrdRegTimestamps_19);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_PF"}, TrdRegTimestamps_NoTrdRegTimestamps_19);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_19);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(6, 37, 25, 15, 9, 2008)}, TrdRegTimestamps_NoTrdRegTimestamps_19);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_1237465813"}, TrdRegTimestamps_NoTrdRegTimestamps_19);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{4}, TrdRegTimestamps_NoTrdRegTimestamps_19);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_19);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_20;
    set_field(noTrdRegTimestamps_0_2, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_LOC"}, TrdRegTimestamps_NoTrdRegTimestamps_20);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskType{"STRING_IN"}, TrdRegTimestamps_NoTrdRegTimestamps_20);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_20);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(12, 33, 47, 15, 10, 2011)}, TrdRegTimestamps_NoTrdRegTimestamps_20);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampOrigin{"STRING_149194161"}, TrdRegTimestamps_NoTrdRegTimestamps_20);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampType{5}, TrdRegTimestamps_NoTrdRegTimestamps_20);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_20);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderSingle::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_14;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_14);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_14);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_14);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_6;
  set_field(msg, FIX::TriggerAction{'3'}, TriggeringInstruction_6);
  FIX::TriggerNewPrice TriggerNewPrice_6;
  TriggerNewPrice_6.setString("6850075");
set_field(msg, TriggerNewPrice_6, TriggeringInstruction_6);
  FIX::TriggerNewQty TriggerNewQty_6;
  TriggerNewQty_6.setString("8471608");
set_field(msg, TriggerNewQty_6, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerOrderType{'2'}, TriggeringInstruction_6);
  FIX::TriggerPrice TriggerPrice_6;
  TriggerPrice_6.setString("3128862");
set_field(msg, TriggerPrice_6, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerPriceDirection{'U'}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerPriceType{'5'}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerPriceTypeScope{'3'}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_665044844"}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerSecurityID{"STRING_10039437"}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_1112958397"}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerSymbol{"STRING_1462309524"}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_552388037"}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_782452285"}, TriggeringInstruction_6);
  set_field(msg, FIX::TriggerType{'2'}, TriggeringInstruction_6);
  all_values.push_back(TriggeringInstruction_6);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_70;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_591448694"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1226131243}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_961244332"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1225281710}, UnderlyingInstrument_70);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_70;
    UnderlyingAdjustedQuantity_70.setString("7011079");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_70, UnderlyingInstrument_70);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_70;
    UnderlyingAllocationPercent_70.setString("62.050000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_70, UnderlyingInstrument_70);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_70;
    UnderlyingAttachmentPoint_70.setString("65.090000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_397477459"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_377454362"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_642944182"}, UnderlyingInstrument_70);
    FIX::UnderlyingCapValue UnderlyingCapValue_70;
    UnderlyingCapValue_70.setString("5466716");
set_field(noUnderlyings_0_0, UnderlyingCapValue_70, UnderlyingInstrument_70);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_70;
    UnderlyingCashAmount_70.setString("11705715");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_70);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_70;
    UnderlyingContractMultiplier_70.setString("12160249");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1688589909}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1779844402"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1901032579"}, UnderlyingInstrument_70);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_70;
    UnderlyingCouponRate_70.setString("71.460000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_932508185"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_70);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_70;
    UnderlyingCurrentValue_70.setString("15337416");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_70, UnderlyingInstrument_70);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_70;
    UnderlyingDetachmentPoint_70.setString("59.850000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_70, UnderlyingInstrument_70);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_70;
    UnderlyingDirtyPrice_70.setString("10473155");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_70, UnderlyingInstrument_70);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_70;
    UnderlyingEndPrice_70.setString("15437811");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_70, UnderlyingInstrument_70);
    FIX::UnderlyingEndValue UnderlyingEndValue_70;
    UnderlyingEndValue_70.setString("20889943");
set_field(noUnderlyings_0_0, UnderlyingEndValue_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{362141384}, UnderlyingInstrument_70);
    FIX::UnderlyingFXRate UnderlyingFXRate_70;
    UnderlyingFXRate_70.setString("20961691");
set_field(noUnderlyings_0_0, UnderlyingFXRate_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_70);
    FIX::UnderlyingFactor UnderlyingFactor_70;
    UnderlyingFactor_70.setString("9144330");
set_field(noUnderlyings_0_0, UnderlyingFactor_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1457820981}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1315411713"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2140564317"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_271581665"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_393209775"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_694188589"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1801707870"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_626496284"}, UnderlyingInstrument_70);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_70;
    UnderlyingNotionalPercentageOutstanding_70.setString("60.480000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_70);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_70;
    UnderlyingOriginalNotionalPercentageOutstanding_70.setString("4.670000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1638337668"}, UnderlyingInstrument_70);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_70;
    UnderlyingPriceUnitOfMeasureQty_70.setString("12022501");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{121635183}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{706879012}, UnderlyingInstrument_70);
    FIX::UnderlyingPx UnderlyingPx_70;
    UnderlyingPx_70.setString("7433563");
set_field(noUnderlyings_0_0, UnderlyingPx_70, UnderlyingInstrument_70);
    FIX::UnderlyingQty UnderlyingQty_70;
    UnderlyingQty_70.setString("19014795");
set_field(noUnderlyings_0_0, UnderlyingQty_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_460427943"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1131623521"}, UnderlyingInstrument_70);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_70;
    UnderlyingRepurchaseRate_70.setString("41.230000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{526863137}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1513894185"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_72762168"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1502899123"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_413726046"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1616543299"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1444409857"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_775867430"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1565228818"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_20889229"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_70);
    FIX::UnderlyingStartValue UnderlyingStartValue_70;
    UnderlyingStartValue_70.setString("8755661");
set_field(noUnderlyings_0_0, UnderlyingStartValue_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1336300942"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_70);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_70;
    UnderlyingStrikePrice_70.setString("17295107");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_70, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_230086115"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_801372038"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_208523354"}, UnderlyingInstrument_70);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1321752164"}, UnderlyingInstrument_70);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_70;
    UnderlyingUnitOfMeasureQty_70.setString("8330506");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_70, UnderlyingInstrument_70);
    all_values.push_back(UnderlyingInstrument_70);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_149;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_812606184"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_149);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_2035300736"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_149);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_149);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_137;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1519485197"}, UnderlyingStipulations_NoUnderlyingStips_137);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_631173464"}, UnderlyingStipulations_NoUnderlyingStips_137);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_137);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_138;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1353594942"}, UnderlyingStipulations_NoUnderlyingStips_138);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1979913140"}, UnderlyingStipulations_NoUnderlyingStips_138);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_138);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_146;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2040099065"}, UndlyInstrumentParties_NoUndlyInstrumentParties_146);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_146);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1129207523}, UndlyInstrumentParties_NoUndlyInstrumentParties_146);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_146);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1862191753"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1542933569}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_71;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1581920885"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1159117962}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_171317351"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{999666055}, UnderlyingInstrument_71);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_71;
    UnderlyingAdjustedQuantity_71.setString("11800071");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_71, UnderlyingInstrument_71);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_71;
    UnderlyingAllocationPercent_71.setString("78.560000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_71, UnderlyingInstrument_71);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_71;
    UnderlyingAttachmentPoint_71.setString("22.070000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_368824486"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1397515382"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_874896375"}, UnderlyingInstrument_71);
    FIX::UnderlyingCapValue UnderlyingCapValue_71;
    UnderlyingCapValue_71.setString("20983352");
set_field(noUnderlyings_0_1, UnderlyingCapValue_71, UnderlyingInstrument_71);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_71;
    UnderlyingCashAmount_71.setString("16276014");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_71);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_71;
    UnderlyingContractMultiplier_71.setString("1593749");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{801870013}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_361835388"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1637338732"}, UnderlyingInstrument_71);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_71;
    UnderlyingCouponRate_71.setString("61.980000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_249652477"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_71);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_71;
    UnderlyingCurrentValue_71.setString("8808259");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_71, UnderlyingInstrument_71);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_71;
    UnderlyingDetachmentPoint_71.setString("53.830000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_71, UnderlyingInstrument_71);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_71;
    UnderlyingDirtyPrice_71.setString("8189072");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_71, UnderlyingInstrument_71);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_71;
    UnderlyingEndPrice_71.setString("4961392");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_71, UnderlyingInstrument_71);
    FIX::UnderlyingEndValue UnderlyingEndValue_71;
    UnderlyingEndValue_71.setString("1881808");
set_field(noUnderlyings_0_1, UnderlyingEndValue_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1178199869}, UnderlyingInstrument_71);
    FIX::UnderlyingFXRate UnderlyingFXRate_71;
    UnderlyingFXRate_71.setString("16253468");
set_field(noUnderlyings_0_1, UnderlyingFXRate_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_71);
    FIX::UnderlyingFactor UnderlyingFactor_71;
    UnderlyingFactor_71.setString("8929079");
set_field(noUnderlyings_0_1, UnderlyingFactor_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1020796722}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1735479272"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2052025937"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1192114074"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_587661679"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1084549480"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_906248282"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_315410238"}, UnderlyingInstrument_71);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_71;
    UnderlyingNotionalPercentageOutstanding_71.setString("39.660000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_71);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_71;
    UnderlyingOriginalNotionalPercentageOutstanding_71.setString("66.140000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1404225522"}, UnderlyingInstrument_71);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_71;
    UnderlyingPriceUnitOfMeasureQty_71.setString("17838815");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{719091380}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1563600433}, UnderlyingInstrument_71);
    FIX::UnderlyingPx UnderlyingPx_71;
    UnderlyingPx_71.setString("4382678");
set_field(noUnderlyings_0_1, UnderlyingPx_71, UnderlyingInstrument_71);
    FIX::UnderlyingQty UnderlyingQty_71;
    UnderlyingQty_71.setString("10809267");
set_field(noUnderlyings_0_1, UnderlyingQty_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1053455517"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2052744077"}, UnderlyingInstrument_71);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_71;
    UnderlyingRepurchaseRate_71.setString("92.450000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{2142909606}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_891738176"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_63921538"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_290991341"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1710645415"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_560060817"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_479172142"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_741361637"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_37923970"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_632730529"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_71);
    FIX::UnderlyingStartValue UnderlyingStartValue_71;
    UnderlyingStartValue_71.setString("10587206");
set_field(noUnderlyings_0_1, UnderlyingStartValue_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_220726153"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_71);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_71;
    UnderlyingStrikePrice_71.setString("8083878");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_475877733"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1009599401"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1123798071"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1929251699"}, UnderlyingInstrument_71);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_71;
    UnderlyingUnitOfMeasureQty_71.setString("11658794");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_71, UnderlyingInstrument_71);
    all_values.push_back(UnderlyingInstrument_71);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_150;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1185993574"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_150);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_802277282"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_150);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_150);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_151;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_885712417"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_151);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_602110359"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_151);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_151);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_152;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1240545161"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_152);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1966639186"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_152);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_152);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_139;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1145805590"}, UnderlyingStipulations_NoUnderlyingStips_139);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1149734783"}, UnderlyingStipulations_NoUnderlyingStips_139);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_139);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_147;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2037543766"}, UndlyInstrumentParties_NoUndlyInstrumentParties_147);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_147);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1941983175}, UndlyInstrumentParties_NoUndlyInstrumentParties_147);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_147);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1773717139"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{273671670}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_194583523"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1811641109}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_148;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_906402199"}, UndlyInstrumentParties_NoUndlyInstrumentParties_148);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_148);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{722878154}, UndlyInstrumentParties_NoUndlyInstrumentParties_148);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_148);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1220181387"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{826229273}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_72;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1935516186"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{1696059120}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1835828674"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{911830609}, UnderlyingInstrument_72);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_72;
    UnderlyingAdjustedQuantity_72.setString("14778271");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_72, UnderlyingInstrument_72);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_72;
    UnderlyingAllocationPercent_72.setString("44.430000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_72, UnderlyingInstrument_72);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_72;
    UnderlyingAttachmentPoint_72.setString("16.470000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_516337097"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_1656501726"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1964164064"}, UnderlyingInstrument_72);
    FIX::UnderlyingCapValue UnderlyingCapValue_72;
    UnderlyingCapValue_72.setString("11184474");
set_field(noUnderlyings_0_2, UnderlyingCapValue_72, UnderlyingInstrument_72);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_72;
    UnderlyingCashAmount_72.setString("7495632");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_72);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_72;
    UnderlyingContractMultiplier_72.setString("6265296");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{1895368830}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_785570738"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_130037870"}, UnderlyingInstrument_72);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_72;
    UnderlyingCouponRate_72.setString("89.480000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1999227060"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_72);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_72;
    UnderlyingCurrentValue_72.setString("16254605");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_72, UnderlyingInstrument_72);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_72;
    UnderlyingDetachmentPoint_72.setString("90.680000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_72, UnderlyingInstrument_72);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_72;
    UnderlyingDirtyPrice_72.setString("14332343");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_72, UnderlyingInstrument_72);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_72;
    UnderlyingEndPrice_72.setString("12896180");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_72, UnderlyingInstrument_72);
    FIX::UnderlyingEndValue UnderlyingEndValue_72;
    UnderlyingEndValue_72.setString("11046112");
set_field(noUnderlyings_0_2, UnderlyingEndValue_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{1114603844}, UnderlyingInstrument_72);
    FIX::UnderlyingFXRate UnderlyingFXRate_72;
    UnderlyingFXRate_72.setString("20124961");
set_field(noUnderlyings_0_2, UnderlyingFXRate_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_72);
    FIX::UnderlyingFactor UnderlyingFactor_72;
    UnderlyingFactor_72.setString("1873015");
set_field(noUnderlyings_0_2, UnderlyingFactor_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{691241792}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_2019772158"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1883360703"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_379586819"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_784119120"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1213704226"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1233811262"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1862570767"}, UnderlyingInstrument_72);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_72;
    UnderlyingNotionalPercentageOutstanding_72.setString("13.240000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'7'}, UnderlyingInstrument_72);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_72;
    UnderlyingOriginalNotionalPercentageOutstanding_72.setString("11.830000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_701005132"}, UnderlyingInstrument_72);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_72;
    UnderlyingPriceUnitOfMeasureQty_72.setString("14923925");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{1315087138}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{1327534817}, UnderlyingInstrument_72);
    FIX::UnderlyingPx UnderlyingPx_72;
    UnderlyingPx_72.setString("12402777");
set_field(noUnderlyings_0_2, UnderlyingPx_72, UnderlyingInstrument_72);
    FIX::UnderlyingQty UnderlyingQty_72;
    UnderlyingQty_72.setString("21006578");
set_field(noUnderlyings_0_2, UnderlyingQty_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1457572687"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_878223062"}, UnderlyingInstrument_72);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_72;
    UnderlyingRepurchaseRate_72.setString("12.880000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{1382110085}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_2116873897"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_1430378191"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1580319153"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1402624606"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_572512555"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_537446773"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_369744802"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_437525074"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_621702745"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_72);
    FIX::UnderlyingStartValue UnderlyingStartValue_72;
    UnderlyingStartValue_72.setString("11287668");
set_field(noUnderlyings_0_2, UnderlyingStartValue_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_493991256"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_72);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_72;
    UnderlyingStrikePrice_72.setString("12781103");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1506627667"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_594681300"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_993197495"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1089185343"}, UnderlyingInstrument_72);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_72;
    UnderlyingUnitOfMeasureQty_72.setString("13375106");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_72, UnderlyingInstrument_72);
    all_values.push_back(UnderlyingInstrument_72);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_153;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1790190475"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_153);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_682419573"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_153);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_153);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_154;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_1840052168"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_154);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_970241644"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_154);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_154);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_140;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_1793226396"}, UnderlyingStipulations_NoUnderlyingStips_140);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_280330684"}, UnderlyingStipulations_NoUnderlyingStips_140);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_140);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_141;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_653436749"}, UnderlyingStipulations_NoUnderlyingStips_141);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_1598144036"}, UnderlyingStipulations_NoUnderlyingStips_141);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_141);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_142;
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipType{"STRING_1662440769"}, UnderlyingStipulations_NoUnderlyingStips_142);
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipValue{"STRING_622826998"}, UnderlyingStipulations_NoUnderlyingStips_142);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_142);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_149;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1095276275"}, UndlyInstrumentParties_NoUndlyInstrumentParties_149);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_149);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{1453551135}, UndlyInstrumentParties_NoUndlyInstrumentParties_149);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_149);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_247712759"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1891076209}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_150;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_106942145"}, UndlyInstrumentParties_NoUndlyInstrumentParties_150);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_150);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{872359428}, UndlyInstrumentParties_NoUndlyInstrumentParties_150);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_150);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1097682585"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{233229466}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1879043777"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{456826604}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_827910767"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{724757624}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_13;
  FIX::Yield Yield_13;
  Yield_13.setString("19.470000");
set_field(msg, Yield_13, YieldData_13);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_17937760"}, YieldData_13);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1249722655"}, YieldData_13);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_13;
  YieldRedemptionPrice_13.setString("11887187");
set_field(msg, YieldRedemptionPrice_13, YieldData_13);
  set_field(msg, FIX::YieldRedemptionPriceType{700357333}, YieldData_13);
  set_field(msg, FIX::YieldType{"STRING_GROSS"}, YieldData_13);
  all_values.push_back(YieldData_13);
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
