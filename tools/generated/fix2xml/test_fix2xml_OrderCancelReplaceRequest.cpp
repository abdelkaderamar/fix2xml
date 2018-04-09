#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::OrderCancelReplaceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelReplaceRequest_0;
  set_field(msg, FIX::Account{"STRING_1464333028"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::AccountType{4}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::AcctIDSource{4}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::AllocID{"STRING_225486144"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::BookingType{0}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::BookingUnit{'2'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::CancellationRights{'O'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::CashMargin{'2'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ClOrdID{"STRING_1532721594"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_807962938"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ClearingFeeIndicator{"STRING_9"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ComplianceID{"STRING_1138277746"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::CoveredOrUncovered{1}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::Currency{"EUR"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::CustDirectedOrder{true}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::CustOrderCapacity{1}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::CustOrderHandlingInst{"MULTIPLESTRINGVALUE_MAO"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::DayBookingInst{'0'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::Designation{"STRING_1601038952"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(1, 29, 59, 13, 3, 2013)}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_389203719"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::EncodedTextLen{94737423}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_448758361"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExDestinationIDSource{'E'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_h"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_1867062839"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(19, 45, 40, 19, 12, 2015)}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ForexReq{false}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::GTBookingInst{1}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::HandlInst{'2'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ListID{"STRING_1182278748"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::LocateReqd{false}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ManualOrderIndicator{true}, OrderCancelReplaceRequest_0);
  FIX::MatchIncrement MatchIncrement_8;
  MatchIncrement_8.setString("12573657");
set_field(msg, MatchIncrement_8, OrderCancelReplaceRequest_0);
  FIX::MaxFloor MaxFloor_8;
  MaxFloor_8.setString("15262503");
set_field(msg, MaxFloor_8, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::MaxPriceLevels{420284702}, OrderCancelReplaceRequest_0);
  FIX::MaxShow MaxShow_8;
  MaxShow_8.setString("16379161");
set_field(msg, MaxShow_8, OrderCancelReplaceRequest_0);
  FIX::MinQty MinQty_14;
  MinQty_14.setString("9798056");
set_field(msg, MinQty_14, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'2'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrdType{'L'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrderCapacity{'I'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrderHandlingInstSource{1}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrderID{"STRING_1512351949"}, OrderCancelReplaceRequest_0);
  FIX::OrderQty2 OrderQty2_16;
  OrderQty2_16.setString("2316954");
set_field(msg, OrderQty2_16, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_4"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrigClOrdID{"STRING_1901555668"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(2, 23, 37, 5, 3, 2000)}, OrderCancelReplaceRequest_0);
  FIX::ParticipationRate ParticipationRate_8;
  ParticipationRate_8.setString("56.070000");
set_field(msg, ParticipationRate_8, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::PositionEffect{'C'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::PreTradeAnonymity{false}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::PreallocMethod{'0'}, OrderCancelReplaceRequest_0);
  FIX::Price Price_18;
  Price_18.setString("21226268");
set_field(msg, Price_18, OrderCancelReplaceRequest_0);
  FIX::Price2 Price2_3;
  Price2_3.setString("19578694");
set_field(msg, Price2_3, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::PriceProtectionScope{'1'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::PriceType{9}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::QtyType{1}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::ReceivedDeptID{"STRING_898487556"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::RegistID{"STRING_1879008698"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_102546658"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::SettlCurrency{"GBP"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1740462829"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::SettlDate2{"LOCALMKTDATE_1257059843"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::SettlType{"STRING_B"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::Side{'A'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::SolicitedFlag{true}, OrderCancelReplaceRequest_0);
  FIX::StopPx StopPx_8;
  StopPx_8.setString("5862623");
set_field(msg, StopPx_8, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::TargetStrategy{1}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_580367787"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::Text{"STRING_1485484940"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::TimeInForce{'0'}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_906800613"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_685982222"}, OrderCancelReplaceRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(2, 44, 56, 2, 4, 2012)}, OrderCancelReplaceRequest_0);
  all_values.push_back(OrderCancelReplaceRequest_0);

  all_compo_names.insert("OrderCancelReplaceRequest");

  // CommissionData
  multiset<string> CommissionData_23;
  set_field(msg, FIX::CommCurrency{"CHF"}, CommissionData_23);
  set_field(msg, FIX::CommType{'3'}, CommissionData_23);
  FIX::Commission Commission_23;
  Commission_23.setString("927981");
set_field(msg, Commission_23, CommissionData_23);
  set_field(msg, FIX::FundRenewWaiv{'Y'}, CommissionData_23);
  all_values.push_back(CommissionData_23);
  all_compo_names.insert(".");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_8;
  set_field(msg, FIX::DiscretionInst{'6'}, DiscretionInstructions_8);
  set_field(msg, FIX::DiscretionLimitType{1}, DiscretionInstructions_8);
  set_field(msg, FIX::DiscretionMoveType{1}, DiscretionInstructions_8);
  set_field(msg, FIX::DiscretionOffsetType{1}, DiscretionInstructions_8);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_8;
  DiscretionOffsetValue_8.setString("11880093");
set_field(msg, DiscretionOffsetValue_8, DiscretionInstructions_8);
  set_field(msg, FIX::DiscretionRoundDirection{2}, DiscretionInstructions_8);
  set_field(msg, FIX::DiscretionScope{2}, DiscretionInstructions_8);
  all_values.push_back(DiscretionInstructions_8);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_8;
  FIX::DisplayHighQty DisplayHighQty_8;
  DisplayHighQty_8.setString("7809885");
set_field(msg, DisplayHighQty_8, DisplayInstruction_8);
  FIX::DisplayLowQty DisplayLowQty_8;
  DisplayLowQty_8.setString("8619508");
set_field(msg, DisplayLowQty_8, DisplayInstruction_8);
  set_field(msg, FIX::DisplayMethod{'1'}, DisplayInstruction_8);
  FIX::DisplayMinIncr DisplayMinIncr_8;
  DisplayMinIncr_8.setString("17709061");
set_field(msg, DisplayMinIncr_8, DisplayInstruction_8);
  FIX::DisplayQty DisplayQty_8;
  DisplayQty_8.setString("12106232");
set_field(msg, DisplayQty_8, DisplayInstruction_8);
  set_field(msg, FIX::DisplayWhen{'1'}, DisplayInstruction_8);
  FIX::RefreshQty RefreshQty_8;
  RefreshQty_8.setString("21256920");
set_field(msg, RefreshQty_8, DisplayInstruction_8);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_8;
  SecondaryDisplayQty_8.setString("17909910");
set_field(msg, SecondaryDisplayQty_8, DisplayInstruction_8);
  all_values.push_back(DisplayInstruction_8);
  all_compo_names.insert(".");

  // FinancingDetails
  multiset<string> FinancingDetails_13;
  set_field(msg, FIX::AgreementCurrency{"USD"}, FinancingDetails_13);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_550308019"}, FinancingDetails_13);
  set_field(msg, FIX::AgreementDesc{"STRING_66440155"}, FinancingDetails_13);
  set_field(msg, FIX::AgreementID{"STRING_1917038786"}, FinancingDetails_13);
  set_field(msg, FIX::DeliveryType{1}, FinancingDetails_13);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1819982499"}, FinancingDetails_13);
  FIX::MarginRatio MarginRatio_13;
  MarginRatio_13.setString("37.740000");
set_field(msg, MarginRatio_13, FinancingDetails_13);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1215041079"}, FinancingDetails_13);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_13);
  all_values.push_back(FinancingDetails_13);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_55;
  FIX::AttachmentPoint AttachmentPoint_55;
  AttachmentPoint_55.setString("31.120000");
set_field(msg, AttachmentPoint_55, Instrument_55);
  set_field(msg, FIX::CFICode{"STRING_1497453433"}, Instrument_55);
  set_field(msg, FIX::CPProgram{99}, Instrument_55);
  set_field(msg, FIX::CPRegType{"STRING_1588185640"}, Instrument_55);
  FIX::CapPrice CapPrice_55;
  CapPrice_55.setString("15902515");
set_field(msg, CapPrice_55, Instrument_55);
  FIX::ContractMultiplier ContractMultiplier_55;
  ContractMultiplier_55.setString("9213486");
set_field(msg, ContractMultiplier_55, Instrument_55);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_55);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_528230595"}, Instrument_55);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_248985490"}, Instrument_55);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_693935296"}, Instrument_55);
  FIX::CouponRate CouponRate_55;
  CouponRate_55.setString("99.240000");
set_field(msg, CouponRate_55, Instrument_55);
  set_field(msg, FIX::CreditRating{"STRING_2001360177"}, Instrument_55);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_264382401"}, Instrument_55);
  FIX::DetachmentPoint DetachmentPoint_55;
  DetachmentPoint_55.setString("47.870000");
set_field(msg, DetachmentPoint_55, Instrument_55);
  set_field(msg, FIX::EncodedIssuer{"DATA_715827412"}, Instrument_55);
  set_field(msg, FIX::EncodedIssuerLen{1868060317}, Instrument_55);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_2120650906"}, Instrument_55);
  set_field(msg, FIX::EncodedSecurityDescLen{1926450679}, Instrument_55);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_55);
  FIX::Factor Factor_55;
  Factor_55.setString("20988592");
set_field(msg, Factor_55, Instrument_55);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_55);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_55);
  FIX::FloorPrice FloorPrice_55;
  FloorPrice_55.setString("384419");
set_field(msg, FloorPrice_55, Instrument_55);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_55);
  set_field(msg, FIX::InstrRegistry{"STRING_1357415045"}, Instrument_55);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_55);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1167910717"}, Instrument_55);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1029913896"}, Instrument_55);
  set_field(msg, FIX::Issuer{"STRING_348440864"}, Instrument_55);
  set_field(msg, FIX::ListMethod{1}, Instrument_55);
  set_field(msg, FIX::LocaleOfIssue{"STRING_2116577050"}, Instrument_55);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1425183976"}, Instrument_55);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1732921582"}, Instrument_55);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_313809169"}, Instrument_55);
  FIX::MinPriceIncrement MinPriceIncrement_55;
  MinPriceIncrement_55.setString("8658859");
set_field(msg, MinPriceIncrement_55, Instrument_55);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_55;
  MinPriceIncrementAmount_55.setString("11756895");
set_field(msg, MinPriceIncrementAmount_55, Instrument_55);
  set_field(msg, FIX::NTPositionLimit{1235157844}, Instrument_55);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_55;
  NotionalPercentageOutstanding_55.setString("39.120000");
set_field(msg, NotionalPercentageOutstanding_55, Instrument_55);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_55);
  FIX::OptPayoutAmount OptPayoutAmount_55;
  OptPayoutAmount_55.setString("14841433");
set_field(msg, OptPayoutAmount_55, Instrument_55);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_55);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_55;
  OriginalNotionalPercentageOutstanding_55.setString("63.780000");
set_field(msg, OriginalNotionalPercentageOutstanding_55, Instrument_55);
  set_field(msg, FIX::Pool{"STRING_1338019863"}, Instrument_55);
  set_field(msg, FIX::PositionLimit{952017961}, Instrument_55);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_55);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_2053847276"}, Instrument_55);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_55;
  PriceUnitOfMeasureQty_55.setString("6725946");
set_field(msg, PriceUnitOfMeasureQty_55, Instrument_55);
  set_field(msg, FIX::Product{1}, Instrument_55);
  set_field(msg, FIX::ProductComplex{"STRING_1832814307"}, Instrument_55);
  set_field(msg, FIX::PutOrCall{0}, Instrument_55);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1546964063"}, Instrument_55);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1255288745"}, Instrument_55);
  FIX::RepurchaseRate RepurchaseRate_55;
  RepurchaseRate_55.setString("28.300000");
set_field(msg, RepurchaseRate_55, Instrument_55);
  set_field(msg, FIX::RepurchaseTerm{1585406015}, Instrument_55);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_55);
  set_field(msg, FIX::SecurityDesc{"STRING_936534227"}, Instrument_55);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1393403105"}, Instrument_55);
  set_field(msg, FIX::SecurityGroup{"STRING_248498271"}, Instrument_55);
  set_field(msg, FIX::SecurityID{"STRING_1966448123"}, Instrument_55);
  set_field(msg, FIX::SecurityIDSource{"STRING_K"}, Instrument_55);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_55);
  set_field(msg, FIX::SecuritySubType{"STRING_1935541525"}, Instrument_55);
  set_field(msg, FIX::SecurityType{"STRING_WAR"}, Instrument_55);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_55);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_55);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1885430267"}, Instrument_55);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1245093861"}, Instrument_55);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_55);
  FIX::StrikeMultiplier StrikeMultiplier_55;
  StrikeMultiplier_55.setString("8015303");
set_field(msg, StrikeMultiplier_55, Instrument_55);
  FIX::StrikePrice StrikePrice_55;
  StrikePrice_55.setString("6736845");
set_field(msg, StrikePrice_55, Instrument_55);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_55);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_55;
  StrikePriceBoundaryPrecision_55.setString("66.920000");
set_field(msg, StrikePriceBoundaryPrecision_55, Instrument_55);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_55);
  FIX::StrikeValue StrikeValue_55;
  StrikeValue_55.setString("13713004");
set_field(msg, StrikeValue_55, Instrument_55);
  set_field(msg, FIX::Symbol{"STRING_1549144209"}, Instrument_55);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_55);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_55);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_55);
  set_field(msg, FIX::UnitOfMeasure{"STRING_t"}, Instrument_55);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_55;
  UnitOfMeasureQty_55.setString("3320393");
set_field(msg, UnitOfMeasureQty_55, Instrument_55);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_55);
  all_values.push_back(Instrument_55);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_108;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_108);
    FIX::ComplexEventPrice ComplexEventPrice_108;
    ComplexEventPrice_108.setString("19821354");
set_field(noComplexEvents_0_0, ComplexEventPrice_108, ComplexEvents_NoComplexEvents_108);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_108);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_108;
    ComplexEventPriceBoundaryPrecision_108.setString("27.380000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_108, ComplexEvents_NoComplexEvents_108);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_108);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_108);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_108;
    ComplexOptPayoutAmount_108.setString("6666572");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_108, ComplexEvents_NoComplexEvents_108);
    all_values.push_back(ComplexEvents_NoComplexEvents_108);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_215;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 53, 24, 14, 9, 2015)}, ComplexEventDates_NoComplexEventDates_215);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 11, 18, 10, 1, 2000)}, ComplexEventDates_NoComplexEventDates_215);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_215);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_431;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 2, 2)}, ComplexEventTimes_NoComplexEventTimes_431);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 43, 36)}, ComplexEventTimes_NoComplexEventTimes_431);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_431);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_216;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 54, 38, 16, 5, 2016)}, ComplexEventDates_NoComplexEventDates_216);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 55, 36, 17, 6, 2012)}, ComplexEventDates_NoComplexEventDates_216);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_216);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_432;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 26, 12)}, ComplexEventTimes_NoComplexEventTimes_432);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 42, 40)}, ComplexEventTimes_NoComplexEventTimes_432);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_432);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_433;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 34, 34)}, ComplexEventTimes_NoComplexEventTimes_433);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 17, 20)}, ComplexEventTimes_NoComplexEventTimes_433);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_433);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_434;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 15, 7)}, ComplexEventTimes_NoComplexEventTimes_434);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 11, 48)}, ComplexEventTimes_NoComplexEventTimes_434);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_434);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_109;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_109);
    FIX::ComplexEventPrice ComplexEventPrice_109;
    ComplexEventPrice_109.setString("19341580");
set_field(noComplexEvents_0_1, ComplexEventPrice_109, ComplexEvents_NoComplexEvents_109);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_109);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_109;
    ComplexEventPriceBoundaryPrecision_109.setString("2.220000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_109, ComplexEvents_NoComplexEvents_109);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_109);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_109);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_109;
    ComplexOptPayoutAmount_109.setString("944268");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_109, ComplexEvents_NoComplexEvents_109);
    all_values.push_back(ComplexEvents_NoComplexEvents_109);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_217;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 49, 30, 4, 12, 2008)}, ComplexEventDates_NoComplexEventDates_217);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 36, 34, 1, 5, 2007)}, ComplexEventDates_NoComplexEventDates_217);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_217);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_435;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 25, 35)}, ComplexEventTimes_NoComplexEventTimes_435);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 38, 19)}, ComplexEventTimes_NoComplexEventTimes_435);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_435);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_218;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 36, 2, 11, 6, 2011)}, ComplexEventDates_NoComplexEventDates_218);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 37, 45, 11, 7, 2001)}, ComplexEventDates_NoComplexEventDates_218);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_218);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_436;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 45, 32)}, ComplexEventTimes_NoComplexEventTimes_436);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 15, 45)}, ComplexEventTimes_NoComplexEventTimes_436);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_436);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_437;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 2, 33)}, ComplexEventTimes_NoComplexEventTimes_437);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 4, 49)}, ComplexEventTimes_NoComplexEventTimes_437);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_437);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_438;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 25, 41)}, ComplexEventTimes_NoComplexEventTimes_438);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 44, 4)}, ComplexEventTimes_NoComplexEventTimes_438);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_438);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_110;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_110);
    FIX::ComplexEventPrice ComplexEventPrice_110;
    ComplexEventPrice_110.setString("7538614");
set_field(noComplexEvents_0_2, ComplexEventPrice_110, ComplexEvents_NoComplexEvents_110);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_110);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_110;
    ComplexEventPriceBoundaryPrecision_110.setString("82.430000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_110, ComplexEvents_NoComplexEvents_110);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_110);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_110);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_110;
    ComplexOptPayoutAmount_110.setString("10295782");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_110, ComplexEvents_NoComplexEvents_110);
    all_values.push_back(ComplexEvents_NoComplexEvents_110);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_219;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 50, 16, 15, 10, 2006)}, ComplexEventDates_NoComplexEventDates_219);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 56, 59, 4, 12, 2001)}, ComplexEventDates_NoComplexEventDates_219);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_219);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_439;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 30, 55)}, ComplexEventTimes_NoComplexEventTimes_439);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 40, 40)}, ComplexEventTimes_NoComplexEventTimes_439);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_439);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_440;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 14, 31)}, ComplexEventTimes_NoComplexEventTimes_440);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 35, 32)}, ComplexEventTimes_NoComplexEventTimes_440);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_440);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_441;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 22, 54)}, ComplexEventTimes_NoComplexEventTimes_441);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 48, 18)}, ComplexEventTimes_NoComplexEventTimes_441);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_441);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderCancelReplaceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_118;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_776256337"}, EvntGrp_NoEvents_118);
    FIX::EventPx EventPx_118;
    EventPx_118.setString("8486037");
set_field(noEvents_0_0, EventPx_118, EvntGrp_NoEvents_118);
    set_field(noEvents_0_0, FIX::EventText{"STRING_2024557762"}, EvntGrp_NoEvents_118);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(16, 20, 26, 4, 7, 2001)}, EvntGrp_NoEvents_118);
    set_field(noEvents_0_0, FIX::EventType{16}, EvntGrp_NoEvents_118);
    all_values.push_back(EvntGrp_NoEvents_118);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_104;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1472344553"}, InstrumentParties_NoInstrumentParties_104);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_104);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{255087163}, InstrumentParties_NoInstrumentParties_104);
    all_values.push_back(InstrumentParties_NoInstrumentParties_104);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_2121301921"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1664228534}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1277141941"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1469822382}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1955464489"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1819957713}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_105;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_2058066560"}, InstrumentParties_NoInstrumentParties_105);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_105);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1596932927}, InstrumentParties_NoInstrumentParties_105);
    all_values.push_back(InstrumentParties_NoInstrumentParties_105);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_2141353808"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1652424358}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1228186247"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{855001818}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_106;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_1397952956"}, InstrumentParties_NoInstrumentParties_106);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_106);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1703605588}, InstrumentParties_NoInstrumentParties_106);
    all_values.push_back(InstrumentParties_NoInstrumentParties_106);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1171143148"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{418888884}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_216);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_2075799511"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{489754666}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_217);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218;
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubID{"STRING_1648991944"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218);
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubIDType{616034285}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_218);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_115;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_890218032"}, SecAltIDGrp_NoSecurityAltID_115);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_520158320"}, SecAltIDGrp_NoSecurityAltID_115);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_115);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_110;
  set_field(msg, FIX::SecurityXML{"XMLDATA_164375805"}, SecurityXML_110);
  set_field(msg, FIX::SecurityXMLLen{1997066699}, SecurityXML_110);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_775245483"}, SecurityXML_110);
  all_values.push_back(SecurityXML_110);
  all_compo_names.insert("..");

  // OrderQtyData
  multiset<string> OrderQtyData_18;
  FIX::CashOrderQty CashOrderQty_18;
  CashOrderQty_18.setString("13656824");
set_field(msg, CashOrderQty_18, OrderQtyData_18);
  FIX::OrderPercent OrderPercent_18;
  OrderPercent_18.setString("49.730000");
set_field(msg, OrderPercent_18, OrderQtyData_18);
  FIX::OrderQty OrderQty_27;
  OrderQty_27.setString("2919903");
set_field(msg, OrderQty_27, OrderQtyData_18);
  set_field(msg, FIX::RoundingDirection{'2'}, OrderQtyData_18);
  FIX::RoundingModulus RoundingModulus_18;
  RoundingModulus_18.setString("12932237");
set_field(msg, RoundingModulus_18, OrderQtyData_18);
  all_values.push_back(OrderQtyData_18);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_92;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_167814832"}, Parties_NoPartyIDs_92);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_92);
    set_field(noPartyIDs_0_0, FIX::PartyRole{7}, Parties_NoPartyIDs_92);
    all_values.push_back(Parties_NoPartyIDs_92);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_182;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_318542139"}, PtysSubGrp_NoPartySubIDs_182);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_182);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_182);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PegInstructions
  multiset<string> PegInstructions_8;
  set_field(msg, FIX::PegLimitType{0}, PegInstructions_8);
  set_field(msg, FIX::PegMoveType{0}, PegInstructions_8);
  set_field(msg, FIX::PegOffsetType{0}, PegInstructions_8);
  FIX::PegOffsetValue PegOffsetValue_8;
  PegOffsetValue_8.setString("5201577");
set_field(msg, PegOffsetValue_8, PegInstructions_8);
  set_field(msg, FIX::PegPriceType{4}, PegInstructions_8);
  set_field(msg, FIX::PegRoundDirection{1}, PegInstructions_8);
  set_field(msg, FIX::PegScope{2}, PegInstructions_8);
  set_field(msg, FIX::PegSecurityDesc{"STRING_427346823"}, PegInstructions_8);
  set_field(msg, FIX::PegSecurityID{"STRING_557181001"}, PegInstructions_8);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_1723500712"}, PegInstructions_8);
  set_field(msg, FIX::PegSymbol{"STRING_917101490"}, PegInstructions_8);
  all_values.push_back(PegInstructions_8);
  all_compo_names.insert(".");

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::OrderCancelReplaceRequest::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_23;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_192051350"}, PreAllocGrp_NoAllocs_23);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{1756616390}, PreAllocGrp_NoAllocs_23);
    FIX::AllocQty AllocQty_43;
    AllocQty_43.setString("9489073");
set_field(noAllocs_0_0, AllocQty_43, PreAllocGrp_NoAllocs_23);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"CAN"}, PreAllocGrp_NoAllocs_23);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_798490381"}, PreAllocGrp_NoAllocs_23);
    all_values.push_back(PreAllocGrp_NoAllocs_23);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_96;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1139191020"}, NestedParties_NoNestedPartyIDs_96);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_96);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1779445523}, NestedParties_NoNestedPartyIDs_96);
      all_values.push_back(NestedParties_NoNestedPartyIDs_96);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_199;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1915115413"}, NstdPtysSubGrp_NoNestedPartySubIDs_199);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1879416734}, NstdPtysSubGrp_NoNestedPartySubIDs_199);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_199);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_97;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_1802346619"}, NestedParties_NoNestedPartyIDs_97);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'9'}, NestedParties_NoNestedPartyIDs_97);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1612714932}, NestedParties_NoNestedPartyIDs_97);
      all_values.push_back(NestedParties_NoNestedPartyIDs_97);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_200;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1289980524"}, NstdPtysSubGrp_NoNestedPartySubIDs_200);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1339883290}, NstdPtysSubGrp_NoNestedPartySubIDs_200);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_200);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_201;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_541815552"}, NstdPtysSubGrp_NoNestedPartySubIDs_201);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{689225263}, NstdPtysSubGrp_NoNestedPartySubIDs_201);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_201);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_202;
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubID{"STRING_1922053467"}, NstdPtysSubGrp_NoNestedPartySubIDs_202);
        set_field(noNestedPartySubIDs_0_1_2_2, FIX::NestedPartySubIDType{1061973331}, NstdPtysSubGrp_NoNestedPartySubIDs_202);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_202);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_98;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_2092912586"}, NestedParties_NoNestedPartyIDs_98);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_98);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{709674532}, NestedParties_NoNestedPartyIDs_98);
      all_values.push_back(NestedParties_NoNestedPartyIDs_98);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_203;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_470042936"}, NstdPtysSubGrp_NoNestedPartySubIDs_203);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{285691597}, NstdPtysSubGrp_NoNestedPartySubIDs_203);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_203);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_22;
  set_field(msg, FIX::BenchmarkCurveCurrency{"USD"}, SpreadOrBenchmarkCurveData_22);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_FutureSWAP"}, SpreadOrBenchmarkCurveData_22);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_899009993"}, SpreadOrBenchmarkCurveData_22);
  FIX::BenchmarkPrice BenchmarkPrice_22;
  BenchmarkPrice_22.setString("14776395");
set_field(msg, BenchmarkPrice_22, SpreadOrBenchmarkCurveData_22);
  set_field(msg, FIX::BenchmarkPriceType{1189952617}, SpreadOrBenchmarkCurveData_22);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_672518541"}, SpreadOrBenchmarkCurveData_22);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_128646296"}, SpreadOrBenchmarkCurveData_22);
  FIX::Spread Spread_22;
  Spread_22.setString("5299241");
set_field(msg, Spread_22, SpreadOrBenchmarkCurveData_22);
  all_values.push_back(SpreadOrBenchmarkCurveData_22);
  all_compo_names.insert(".");

  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::OrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_16;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_750538002"}, StrategyParametersGrp_NoStrategyParameters_16);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{25}, StrategyParametersGrp_NoStrategyParameters_16);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_1298757700"}, StrategyParametersGrp_NoStrategyParameters_16);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_16);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_17;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_MOC"}, TrdRegTimestamps_NoTrdRegTimestamps_17);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_IN"}, TrdRegTimestamps_NoTrdRegTimestamps_17);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_17);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(10, 50, 20, 6, 10, 2015)}, TrdRegTimestamps_NoTrdRegTimestamps_17);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_1829536637"}, TrdRegTimestamps_NoTrdRegTimestamps_17);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{4}, TrdRegTimestamps_NoTrdRegTimestamps_17);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_17);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_14;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_14);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_14);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_14);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_15;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_15);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_7"}, TrdgSesGrp_NoTradingSessions_15);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_15);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::OrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_16;
    set_field(noTradingSessions_0_2, FIX::TradingSessionID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_16);
    set_field(noTradingSessions_0_2, FIX::TradingSessionSubID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_16);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_16);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_8;
  set_field(msg, FIX::TriggerAction{'1'}, TriggeringInstruction_8);
  FIX::TriggerNewPrice TriggerNewPrice_8;
  TriggerNewPrice_8.setString("16809385");
set_field(msg, TriggerNewPrice_8, TriggeringInstruction_8);
  FIX::TriggerNewQty TriggerNewQty_8;
  TriggerNewQty_8.setString("7152965");
set_field(msg, TriggerNewQty_8, TriggeringInstruction_8);
  set_field(msg, FIX::TriggerOrderType{'2'}, TriggeringInstruction_8);
  FIX::TriggerPrice TriggerPrice_8;
  TriggerPrice_8.setString("2059734");
set_field(msg, TriggerPrice_8, TriggeringInstruction_8);
  set_field(msg, FIX::TriggerPriceDirection{'D'}, TriggeringInstruction_8);
  set_field(msg, FIX::TriggerPriceType{'2'}, TriggeringInstruction_8);
  set_field(msg, FIX::TriggerPriceTypeScope{'0'}, TriggeringInstruction_8);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_1594480800"}, TriggeringInstruction_8);
  set_field(msg, FIX::TriggerSecurityID{"STRING_889441158"}, TriggeringInstruction_8);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_1168957096"}, TriggeringInstruction_8);
  set_field(msg, FIX::TriggerSymbol{"STRING_2112650568"}, TriggeringInstruction_8);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_783260243"}, TriggeringInstruction_8);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_2122577768"}, TriggeringInstruction_8);
  set_field(msg, FIX::TriggerType{'2'}, TriggeringInstruction_8);
  all_values.push_back(TriggeringInstruction_8);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_77;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_200841874"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{2086880103}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_841244274"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{968405180}, UnderlyingInstrument_77);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_77;
    UnderlyingAdjustedQuantity_77.setString("12607267");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_77, UnderlyingInstrument_77);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_77;
    UnderlyingAllocationPercent_77.setString("77.530000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_77, UnderlyingInstrument_77);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_77;
    UnderlyingAttachmentPoint_77.setString("81.700000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_380002331"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1701113168"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1042185692"}, UnderlyingInstrument_77);
    FIX::UnderlyingCapValue UnderlyingCapValue_77;
    UnderlyingCapValue_77.setString("20195373");
set_field(noUnderlyings_0_0, UnderlyingCapValue_77, UnderlyingInstrument_77);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_77;
    UnderlyingCashAmount_77.setString("4100378");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_77);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_77;
    UnderlyingContractMultiplier_77.setString("6539822");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1795178457}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_727283229"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_187437213"}, UnderlyingInstrument_77);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_77;
    UnderlyingCouponRate_77.setString("13.100000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_924914264"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_77);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_77;
    UnderlyingCurrentValue_77.setString("16524694");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_77, UnderlyingInstrument_77);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_77;
    UnderlyingDetachmentPoint_77.setString("0.920000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_77, UnderlyingInstrument_77);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_77;
    UnderlyingDirtyPrice_77.setString("6539312");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_77, UnderlyingInstrument_77);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_77;
    UnderlyingEndPrice_77.setString("3944269");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_77, UnderlyingInstrument_77);
    FIX::UnderlyingEndValue UnderlyingEndValue_77;
    UnderlyingEndValue_77.setString("14325671");
set_field(noUnderlyings_0_0, UnderlyingEndValue_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{619098180}, UnderlyingInstrument_77);
    FIX::UnderlyingFXRate UnderlyingFXRate_77;
    UnderlyingFXRate_77.setString("11776871");
set_field(noUnderlyings_0_0, UnderlyingFXRate_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_77);
    FIX::UnderlyingFactor UnderlyingFactor_77;
    UnderlyingFactor_77.setString("20738732");
set_field(noUnderlyings_0_0, UnderlyingFactor_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1319997790}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1608503182"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2013269709"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_13758416"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_429424715"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1126512809"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1328506170"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1079882885"}, UnderlyingInstrument_77);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_77;
    UnderlyingNotionalPercentageOutstanding_77.setString("51.410000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_77);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_77;
    UnderlyingOriginalNotionalPercentageOutstanding_77.setString("85.770000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1378568817"}, UnderlyingInstrument_77);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_77;
    UnderlyingPriceUnitOfMeasureQty_77.setString("12921735");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1694189740}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{2032551089}, UnderlyingInstrument_77);
    FIX::UnderlyingPx UnderlyingPx_77;
    UnderlyingPx_77.setString("9398683");
set_field(noUnderlyings_0_0, UnderlyingPx_77, UnderlyingInstrument_77);
    FIX::UnderlyingQty UnderlyingQty_77;
    UnderlyingQty_77.setString("2739893");
set_field(noUnderlyings_0_0, UnderlyingQty_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_72504654"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1302859682"}, UnderlyingInstrument_77);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_77;
    UnderlyingRepurchaseRate_77.setString("35.850000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{465915350}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_362310142"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_703889361"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_729525442"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1016241402"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1098316294"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_14608983"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1635339582"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_128519823"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1422270291"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_77);
    FIX::UnderlyingStartValue UnderlyingStartValue_77;
    UnderlyingStartValue_77.setString("14485176");
set_field(noUnderlyings_0_0, UnderlyingStartValue_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_883289826"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_77);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_77;
    UnderlyingStrikePrice_77.setString("13127145");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_77, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_406544410"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_643298552"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_245113778"}, UnderlyingInstrument_77);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1913059551"}, UnderlyingInstrument_77);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_77;
    UnderlyingUnitOfMeasureQty_77.setString("15254342");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_77, UnderlyingInstrument_77);
    all_values.push_back(UnderlyingInstrument_77);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_161;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1144144720"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_161);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_670124157"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_161);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_161);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_162;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1913888447"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_162);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1029212161"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_162);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_162);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_156;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_40394120"}, UnderlyingStipulations_NoUnderlyingStips_156);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1101716816"}, UnderlyingStipulations_NoUnderlyingStips_156);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_156);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_157;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_765368564"}, UnderlyingStipulations_NoUnderlyingStips_157);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1239297705"}, UnderlyingStipulations_NoUnderlyingStips_157);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_157);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_167;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1127678706"}, UndlyInstrumentParties_NoUndlyInstrumentParties_167);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_167);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{149673961}, UndlyInstrumentParties_NoUndlyInstrumentParties_167);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_167);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_894019713"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{164282944}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_334);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1631776043"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1022539536}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_335);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_168;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1586553235"}, UndlyInstrumentParties_NoUndlyInstrumentParties_168);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_168);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{323573502}, UndlyInstrumentParties_NoUndlyInstrumentParties_168);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_168);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_326053184"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1785849533}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_336);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1635073954"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{732597595}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_337);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::OrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_281664437"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1880187732}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_338);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_17;
  FIX::Yield Yield_17;
  Yield_17.setString("34.980000");
set_field(msg, Yield_17, YieldData_17);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1807098680"}, YieldData_17);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_2099886439"}, YieldData_17);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_17;
  YieldRedemptionPrice_17.setString("16423182");
set_field(msg, YieldRedemptionPrice_17, YieldData_17);
  set_field(msg, FIX::YieldRedemptionPriceType{329739190}, YieldData_17);
  set_field(msg, FIX::YieldType{"STRING_SEMIANNUAL"}, YieldData_17);
  all_values.push_back(YieldData_17);
  all_compo_names.insert(".");

  // header
  multiset<string> header_57;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_57);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1939731719"}, header_57);
  set_header_field(msg.getHeader(), FIX::BodyLength{1906685358}, header_57);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1625763548"}, header_57);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_557616635"}, header_57);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_998499416"}, header_57);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1045912067"}, header_57);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1685295342}, header_57);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_57);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1195586028}, header_57);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1681731803"}, header_57);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1688222547"}, header_57);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1359868972"}, header_57);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(20, 39, 34, 14, 10, 2000)}, header_57);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_57);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_57);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1123212913"}, header_57);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{806882261}, header_57);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_341592364"}, header_57);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1621386412"}, header_57);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_466497293"}, header_57);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(15, 3, 6, 23, 8, 2000)}, header_57);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1118547616"}, header_57);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1146101190"}, header_57);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_770503872"}, header_57);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_16976035"}, header_57);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{683912884}, header_57);
  all_values.push_back(header_57);
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
