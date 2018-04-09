#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::NewOrderSingle msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderSingle_0;
  set_field(msg, FIX::Account{"STRING_2112934120"}, NewOrderSingle_0);
  set_field(msg, FIX::AccountType{3}, NewOrderSingle_0);
  set_field(msg, FIX::AcctIDSource{1}, NewOrderSingle_0);
  set_field(msg, FIX::AllocID{"STRING_1291994439"}, NewOrderSingle_0);
  set_field(msg, FIX::BookingType{0}, NewOrderSingle_0);
  set_field(msg, FIX::BookingUnit{'2'}, NewOrderSingle_0);
  set_field(msg, FIX::CancellationRights{'O'}, NewOrderSingle_0);
  set_field(msg, FIX::CashMargin{'2'}, NewOrderSingle_0);
  set_field(msg, FIX::ClOrdID{"STRING_301985091"}, NewOrderSingle_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_254217460"}, NewOrderSingle_0);
  set_field(msg, FIX::ClearingFeeIndicator{"STRING_3"}, NewOrderSingle_0);
  set_field(msg, FIX::ComplianceID{"STRING_2141302100"}, NewOrderSingle_0);
  set_field(msg, FIX::CoveredOrUncovered{0}, NewOrderSingle_0);
  set_field(msg, FIX::Currency{"GBP"}, NewOrderSingle_0);
  set_field(msg, FIX::CustDirectedOrder{false}, NewOrderSingle_0);
  set_field(msg, FIX::CustOrderCapacity{1}, NewOrderSingle_0);
  set_field(msg, FIX::CustOrderHandlingInst{"MULTIPLESTRINGVALUE_LOC"}, NewOrderSingle_0);
  set_field(msg, FIX::DayBookingInst{'1'}, NewOrderSingle_0);
  set_field(msg, FIX::Designation{"STRING_1243365091"}, NewOrderSingle_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(21, 5, 39, 4, 6, 2013)}, NewOrderSingle_0);
  set_field(msg, FIX::EncodedText{"DATA_1720907947"}, NewOrderSingle_0);
  set_field(msg, FIX::EncodedTextLen{278264493}, NewOrderSingle_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_577276323"}, NewOrderSingle_0);
  set_field(msg, FIX::ExDestinationIDSource{'E'}, NewOrderSingle_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_r"}, NewOrderSingle_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_983202783"}, NewOrderSingle_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(20, 34, 56, 15, 9, 2017)}, NewOrderSingle_0);
  set_field(msg, FIX::ForexReq{false}, NewOrderSingle_0);
  set_field(msg, FIX::GTBookingInst{1}, NewOrderSingle_0);
  set_field(msg, FIX::HandlInst{'1'}, NewOrderSingle_0);
  set_field(msg, FIX::IOIID{"STRING_875486102"}, NewOrderSingle_0);
  set_field(msg, FIX::LocateReqd{true}, NewOrderSingle_0);
  set_field(msg, FIX::ManualOrderIndicator{true}, NewOrderSingle_0);
  FIX::MatchIncrement MatchIncrement_7;
  MatchIncrement_7.setString("338859");
set_field(msg, MatchIncrement_7, NewOrderSingle_0);
  FIX::MaxFloor MaxFloor_7;
  MaxFloor_7.setString("12896000");
set_field(msg, MaxFloor_7, NewOrderSingle_0);
  set_field(msg, FIX::MaxPriceLevels{155421999}, NewOrderSingle_0);
  FIX::MaxShow MaxShow_7;
  MaxShow_7.setString("9153168");
set_field(msg, MaxShow_7, NewOrderSingle_0);
  FIX::MinQty MinQty_13;
  MinQty_13.setString("3854815");
set_field(msg, MinQty_13, NewOrderSingle_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'N'}, NewOrderSingle_0);
  set_field(msg, FIX::OrdType{'F'}, NewOrderSingle_0);
  set_field(msg, FIX::OrderCapacity{'A'}, NewOrderSingle_0);
  set_field(msg, FIX::OrderHandlingInstSource{1}, NewOrderSingle_0);
  FIX::OrderQty2 OrderQty2_15;
  OrderQty2_15.setString("13632063");
set_field(msg, OrderQty2_15, NewOrderSingle_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_E"}, NewOrderSingle_0);
  FIX::ParticipationRate ParticipationRate_7;
  ParticipationRate_7.setString("92.130000");
set_field(msg, ParticipationRate_7, NewOrderSingle_0);
  set_field(msg, FIX::PositionEffect{'R'}, NewOrderSingle_0);
  set_field(msg, FIX::PreTradeAnonymity{false}, NewOrderSingle_0);
  set_field(msg, FIX::PreallocMethod{'0'}, NewOrderSingle_0);
  FIX::PrevClosePx PrevClosePx_7;
  PrevClosePx_7.setString("14995442");
set_field(msg, PrevClosePx_7, NewOrderSingle_0);
  FIX::Price Price_17;
  Price_17.setString("8381571");
set_field(msg, Price_17, NewOrderSingle_0);
  FIX::Price2 Price2_2;
  Price2_2.setString("7978846");
set_field(msg, Price2_2, NewOrderSingle_0);
  set_field(msg, FIX::PriceProtectionScope{'3'}, NewOrderSingle_0);
  set_field(msg, FIX::PriceType{14}, NewOrderSingle_0);
  set_field(msg, FIX::ProcessCode{'6'}, NewOrderSingle_0);
  set_field(msg, FIX::QtyType{2}, NewOrderSingle_0);
  set_field(msg, FIX::QuoteID{"STRING_703975187"}, NewOrderSingle_0);
  set_field(msg, FIX::ReceivedDeptID{"STRING_1267565962"}, NewOrderSingle_0);
  set_field(msg, FIX::RefOrderID{"STRING_1770757327"}, NewOrderSingle_0);
  set_field(msg, FIX::RefOrderIDSource{'2'}, NewOrderSingle_0);
  set_field(msg, FIX::RegistID{"STRING_815847205"}, NewOrderSingle_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_2120017207"}, NewOrderSingle_0);
  set_field(msg, FIX::SettlCurrency{"EUR"}, NewOrderSingle_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1706086813"}, NewOrderSingle_0);
  set_field(msg, FIX::SettlDate2{"LOCALMKTDATE_197673271"}, NewOrderSingle_0);
  set_field(msg, FIX::SettlType{"STRING_2"}, NewOrderSingle_0);
  set_field(msg, FIX::Side{'D'}, NewOrderSingle_0);
  set_field(msg, FIX::SolicitedFlag{true}, NewOrderSingle_0);
  FIX::StopPx StopPx_7;
  StopPx_7.setString("12917422");
set_field(msg, StopPx_7, NewOrderSingle_0);
  set_field(msg, FIX::TargetStrategy{2}, NewOrderSingle_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_1646975782"}, NewOrderSingle_0);
  set_field(msg, FIX::Text{"STRING_1141351826"}, NewOrderSingle_0);
  set_field(msg, FIX::TimeInForce{'8'}, NewOrderSingle_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_862698492"}, NewOrderSingle_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_1457529564"}, NewOrderSingle_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(21, 55, 40, 8, 12, 2005)}, NewOrderSingle_0);
  all_values.push_back(NewOrderSingle_0);

  all_compo_names.insert("NewOrderSingle");

  // CommissionData
  multiset<string> CommissionData_22;
  set_field(msg, FIX::CommCurrency{"CAN"}, CommissionData_22);
  set_field(msg, FIX::CommType{'2'}, CommissionData_22);
  FIX::Commission Commission_22;
  Commission_22.setString("17810815");
set_field(msg, Commission_22, CommissionData_22);
  set_field(msg, FIX::FundRenewWaiv{'N'}, CommissionData_22);
  all_values.push_back(CommissionData_22);
  all_compo_names.insert(".");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_7;
  set_field(msg, FIX::DiscretionInst{'4'}, DiscretionInstructions_7);
  set_field(msg, FIX::DiscretionLimitType{2}, DiscretionInstructions_7);
  set_field(msg, FIX::DiscretionMoveType{0}, DiscretionInstructions_7);
  set_field(msg, FIX::DiscretionOffsetType{1}, DiscretionInstructions_7);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_7;
  DiscretionOffsetValue_7.setString("13768887");
set_field(msg, DiscretionOffsetValue_7, DiscretionInstructions_7);
  set_field(msg, FIX::DiscretionRoundDirection{2}, DiscretionInstructions_7);
  set_field(msg, FIX::DiscretionScope{3}, DiscretionInstructions_7);
  all_values.push_back(DiscretionInstructions_7);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_7;
  FIX::DisplayHighQty DisplayHighQty_7;
  DisplayHighQty_7.setString("9354919");
set_field(msg, DisplayHighQty_7, DisplayInstruction_7);
  FIX::DisplayLowQty DisplayLowQty_7;
  DisplayLowQty_7.setString("13227653");
set_field(msg, DisplayLowQty_7, DisplayInstruction_7);
  set_field(msg, FIX::DisplayMethod{'1'}, DisplayInstruction_7);
  FIX::DisplayMinIncr DisplayMinIncr_7;
  DisplayMinIncr_7.setString("6495171");
set_field(msg, DisplayMinIncr_7, DisplayInstruction_7);
  FIX::DisplayQty DisplayQty_7;
  DisplayQty_7.setString("2882717");
set_field(msg, DisplayQty_7, DisplayInstruction_7);
  set_field(msg, FIX::DisplayWhen{'1'}, DisplayInstruction_7);
  FIX::RefreshQty RefreshQty_7;
  RefreshQty_7.setString("6447486");
set_field(msg, RefreshQty_7, DisplayInstruction_7);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_7;
  SecondaryDisplayQty_7.setString("19352475");
set_field(msg, SecondaryDisplayQty_7, DisplayInstruction_7);
  all_values.push_back(DisplayInstruction_7);
  all_compo_names.insert(".");

  // FinancingDetails
  multiset<string> FinancingDetails_12;
  set_field(msg, FIX::AgreementCurrency{"JPY"}, FinancingDetails_12);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_650462374"}, FinancingDetails_12);
  set_field(msg, FIX::AgreementDesc{"STRING_975250616"}, FinancingDetails_12);
  set_field(msg, FIX::AgreementID{"STRING_260151077"}, FinancingDetails_12);
  set_field(msg, FIX::DeliveryType{3}, FinancingDetails_12);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_879738763"}, FinancingDetails_12);
  FIX::MarginRatio MarginRatio_12;
  MarginRatio_12.setString("6.170000");
set_field(msg, MarginRatio_12, FinancingDetails_12);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1453697591"}, FinancingDetails_12);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_12);
  all_values.push_back(FinancingDetails_12);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_52;
  FIX::AttachmentPoint AttachmentPoint_52;
  AttachmentPoint_52.setString("11.810000");
set_field(msg, AttachmentPoint_52, Instrument_52);
  set_field(msg, FIX::CFICode{"STRING_1819463223"}, Instrument_52);
  set_field(msg, FIX::CPProgram{1}, Instrument_52);
  set_field(msg, FIX::CPRegType{"STRING_460951022"}, Instrument_52);
  FIX::CapPrice CapPrice_52;
  CapPrice_52.setString("14530611");
set_field(msg, CapPrice_52, Instrument_52);
  FIX::ContractMultiplier ContractMultiplier_52;
  ContractMultiplier_52.setString("21169322");
set_field(msg, ContractMultiplier_52, Instrument_52);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_52);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_709932669"}, Instrument_52);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_930753303"}, Instrument_52);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1358449835"}, Instrument_52);
  FIX::CouponRate CouponRate_52;
  CouponRate_52.setString("14.400000");
set_field(msg, CouponRate_52, Instrument_52);
  set_field(msg, FIX::CreditRating{"STRING_2055845356"}, Instrument_52);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1831783438"}, Instrument_52);
  FIX::DetachmentPoint DetachmentPoint_52;
  DetachmentPoint_52.setString("97.280000");
set_field(msg, DetachmentPoint_52, Instrument_52);
  set_field(msg, FIX::EncodedIssuer{"DATA_1231127033"}, Instrument_52);
  set_field(msg, FIX::EncodedIssuerLen{1063894082}, Instrument_52);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1524346828"}, Instrument_52);
  set_field(msg, FIX::EncodedSecurityDescLen{1519398781}, Instrument_52);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_52);
  FIX::Factor Factor_52;
  Factor_52.setString("216118");
set_field(msg, Factor_52, Instrument_52);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_52);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_52);
  FIX::FloorPrice FloorPrice_52;
  FloorPrice_52.setString("8553588");
set_field(msg, FloorPrice_52, Instrument_52);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_52);
  set_field(msg, FIX::InstrRegistry{"STRING_2080718624"}, Instrument_52);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_52);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_112449266"}, Instrument_52);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_812973739"}, Instrument_52);
  set_field(msg, FIX::Issuer{"STRING_616746937"}, Instrument_52);
  set_field(msg, FIX::ListMethod{1}, Instrument_52);
  set_field(msg, FIX::LocaleOfIssue{"STRING_287874197"}, Instrument_52);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_156954470"}, Instrument_52);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1238126432"}, Instrument_52);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_731802950"}, Instrument_52);
  FIX::MinPriceIncrement MinPriceIncrement_52;
  MinPriceIncrement_52.setString("6179054");
set_field(msg, MinPriceIncrement_52, Instrument_52);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_52;
  MinPriceIncrementAmount_52.setString("5437038");
set_field(msg, MinPriceIncrementAmount_52, Instrument_52);
  set_field(msg, FIX::NTPositionLimit{701251537}, Instrument_52);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_52;
  NotionalPercentageOutstanding_52.setString("23.190000");
set_field(msg, NotionalPercentageOutstanding_52, Instrument_52);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_52);
  FIX::OptPayoutAmount OptPayoutAmount_52;
  OptPayoutAmount_52.setString("16320048");
set_field(msg, OptPayoutAmount_52, Instrument_52);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_52);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_52;
  OriginalNotionalPercentageOutstanding_52.setString("43.520000");
set_field(msg, OriginalNotionalPercentageOutstanding_52, Instrument_52);
  set_field(msg, FIX::Pool{"STRING_1540366549"}, Instrument_52);
  set_field(msg, FIX::PositionLimit{14948297}, Instrument_52);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_52);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_624009934"}, Instrument_52);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_52;
  PriceUnitOfMeasureQty_52.setString("10788423");
set_field(msg, PriceUnitOfMeasureQty_52, Instrument_52);
  set_field(msg, FIX::Product{12}, Instrument_52);
  set_field(msg, FIX::ProductComplex{"STRING_2143408716"}, Instrument_52);
  set_field(msg, FIX::PutOrCall{0}, Instrument_52);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1466279077"}, Instrument_52);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1303087732"}, Instrument_52);
  FIX::RepurchaseRate RepurchaseRate_52;
  RepurchaseRate_52.setString("36.960000");
set_field(msg, RepurchaseRate_52, Instrument_52);
  set_field(msg, FIX::RepurchaseTerm{174154320}, Instrument_52);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_52);
  set_field(msg, FIX::SecurityDesc{"STRING_1557808673"}, Instrument_52);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1289664288"}, Instrument_52);
  set_field(msg, FIX::SecurityGroup{"STRING_1225678388"}, Instrument_52);
  set_field(msg, FIX::SecurityID{"STRING_223298764"}, Instrument_52);
  set_field(msg, FIX::SecurityIDSource{"STRING_G"}, Instrument_52);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_52);
  set_field(msg, FIX::SecuritySubType{"STRING_511172962"}, Instrument_52);
  set_field(msg, FIX::SecurityType{"STRING_FXNDF"}, Instrument_52);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_52);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_52);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_533787541"}, Instrument_52);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_278688273"}, Instrument_52);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_52);
  FIX::StrikeMultiplier StrikeMultiplier_52;
  StrikeMultiplier_52.setString("15323248");
set_field(msg, StrikeMultiplier_52, Instrument_52);
  FIX::StrikePrice StrikePrice_52;
  StrikePrice_52.setString("14287486");
set_field(msg, StrikePrice_52, Instrument_52);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_52);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_52;
  StrikePriceBoundaryPrecision_52.setString("55.380000");
set_field(msg, StrikePriceBoundaryPrecision_52, Instrument_52);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_52);
  FIX::StrikeValue StrikeValue_52;
  StrikeValue_52.setString("19990666");
set_field(msg, StrikeValue_52, Instrument_52);
  set_field(msg, FIX::Symbol{"STRING_498135971"}, Instrument_52);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_52);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_52);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_52);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_52);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_52;
  UnitOfMeasureQty_52.setString("14495310");
set_field(msg, UnitOfMeasureQty_52, Instrument_52);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_52);
  all_values.push_back(Instrument_52);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderSingle::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_103;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_103);
    FIX::ComplexEventPrice ComplexEventPrice_103;
    ComplexEventPrice_103.setString("14357529");
set_field(noComplexEvents_0_0, ComplexEventPrice_103, ComplexEvents_NoComplexEvents_103);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_103);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_103;
    ComplexEventPriceBoundaryPrecision_103.setString("61.570000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_103, ComplexEvents_NoComplexEvents_103);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_103);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_103);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_103;
    ComplexOptPayoutAmount_103.setString("5602449");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_103, ComplexEvents_NoComplexEvents_103);
    all_values.push_back(ComplexEvents_NoComplexEvents_103);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_204;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 27, 14, 20, 5, 2012)}, ComplexEventDates_NoComplexEventDates_204);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 54, 53, 12, 5, 2008)}, ComplexEventDates_NoComplexEventDates_204);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_204);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_408;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 12, 47)}, ComplexEventTimes_NoComplexEventTimes_408);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 1, 19)}, ComplexEventTimes_NoComplexEventTimes_408);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_408);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_205;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 44, 18, 24, 7, 2010)}, ComplexEventDates_NoComplexEventDates_205);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 16, 2, 25, 6, 2006)}, ComplexEventDates_NoComplexEventDates_205);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_205);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_409;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 3, 21)}, ComplexEventTimes_NoComplexEventTimes_409);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 11, 39)}, ComplexEventTimes_NoComplexEventTimes_409);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_409);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_410;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 51, 30)}, ComplexEventTimes_NoComplexEventTimes_410);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 31, 19)}, ComplexEventTimes_NoComplexEventTimes_410);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_410);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_411;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 55, 31)}, ComplexEventTimes_NoComplexEventTimes_411);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 4, 29)}, ComplexEventTimes_NoComplexEventTimes_411);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_411);
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
    FIX50SP2::NewOrderSingle::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_114;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_610588152"}, EvntGrp_NoEvents_114);
    FIX::EventPx EventPx_114;
    EventPx_114.setString("5183978");
set_field(noEvents_0_0, EventPx_114, EvntGrp_NoEvents_114);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1505020557"}, EvntGrp_NoEvents_114);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(9, 6, 45, 11, 10, 2006)}, EvntGrp_NoEvents_114);
    set_field(noEvents_0_0, FIX::EventType{11}, EvntGrp_NoEvents_114);
    all_values.push_back(EvntGrp_NoEvents_114);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_115;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_509613657"}, EvntGrp_NoEvents_115);
    FIX::EventPx EventPx_115;
    EventPx_115.setString("14219113");
set_field(noEvents_0_1, EventPx_115, EvntGrp_NoEvents_115);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1281749309"}, EvntGrp_NoEvents_115);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(13, 12, 10, 25, 9, 2004)}, EvntGrp_NoEvents_115);
    set_field(noEvents_0_1, FIX::EventType{1}, EvntGrp_NoEvents_115);
    all_values.push_back(EvntGrp_NoEvents_115);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderSingle::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_100;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_2061550640"}, InstrumentParties_NoInstrumentParties_100);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_100);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1988886369}, InstrumentParties_NoInstrumentParties_100);
    all_values.push_back(InstrumentParties_NoInstrumentParties_100);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_646087793"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1638520505}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_203);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_101;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1680642815"}, InstrumentParties_NoInstrumentParties_101);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_101);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{101625009}, InstrumentParties_NoInstrumentParties_101);
    all_values.push_back(InstrumentParties_NoInstrumentParties_101);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1447799891"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1840077327}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_481645355"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{165307270}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206;
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubID{"STRING_375080464"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206);
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubIDType{1115941322}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderSingle::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_107;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1394004310"}, SecAltIDGrp_NoSecurityAltID_107);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_2083596592"}, SecAltIDGrp_NoSecurityAltID_107);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_107);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_108;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1731332356"}, SecAltIDGrp_NoSecurityAltID_108);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_668432059"}, SecAltIDGrp_NoSecurityAltID_108);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_108);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_104;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1217862253"}, SecurityXML_104);
  set_field(msg, FIX::SecurityXMLLen{1454066036}, SecurityXML_104);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1858039328"}, SecurityXML_104);
  all_values.push_back(SecurityXML_104);
  all_compo_names.insert("..");

  // OrderQtyData
  multiset<string> OrderQtyData_17;
  FIX::CashOrderQty CashOrderQty_17;
  CashOrderQty_17.setString("15773820");
set_field(msg, CashOrderQty_17, OrderQtyData_17);
  FIX::OrderPercent OrderPercent_17;
  OrderPercent_17.setString("7.670000");
set_field(msg, OrderPercent_17, OrderQtyData_17);
  FIX::OrderQty OrderQty_26;
  OrderQty_26.setString("14741336");
set_field(msg, OrderQty_26, OrderQtyData_17);
  set_field(msg, FIX::RoundingDirection{'2'}, OrderQtyData_17);
  FIX::RoundingModulus RoundingModulus_17;
  RoundingModulus_17.setString("1689252");
set_field(msg, RoundingModulus_17, OrderQtyData_17);
  all_values.push_back(OrderQtyData_17);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_89;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1309184728"}, Parties_NoPartyIDs_89);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_89);
    set_field(noPartyIDs_0_0, FIX::PartyRole{78}, Parties_NoPartyIDs_89);
    all_values.push_back(Parties_NoPartyIDs_89);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_175;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_370397091"}, PtysSubGrp_NoPartySubIDs_175);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_175);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_175);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_176;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_641624306"}, PtysSubGrp_NoPartySubIDs_176);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_176);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_176);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_177;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1751348916"}, PtysSubGrp_NoPartySubIDs_177);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{18}, PtysSubGrp_NoPartySubIDs_177);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_177);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_90;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_2102596876"}, Parties_NoPartyIDs_90);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_90);
    set_field(noPartyIDs_0_1, FIX::PartyRole{7}, Parties_NoPartyIDs_90);
    all_values.push_back(Parties_NoPartyIDs_90);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_178;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1216972429"}, PtysSubGrp_NoPartySubIDs_178);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_178);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_178);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_179;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1552699905"}, PtysSubGrp_NoPartySubIDs_179);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_179);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_179);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_91;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_57444120"}, Parties_NoPartyIDs_91);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_91);
    set_field(noPartyIDs_0_2, FIX::PartyRole{18}, Parties_NoPartyIDs_91);
    all_values.push_back(Parties_NoPartyIDs_91);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_180;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_559191455"}, PtysSubGrp_NoPartySubIDs_180);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_180);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_180);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_181;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_436431859"}, PtysSubGrp_NoPartySubIDs_181);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_181);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_181);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PegInstructions
  multiset<string> PegInstructions_7;
  set_field(msg, FIX::PegLimitType{2}, PegInstructions_7);
  set_field(msg, FIX::PegMoveType{0}, PegInstructions_7);
  set_field(msg, FIX::PegOffsetType{0}, PegInstructions_7);
  FIX::PegOffsetValue PegOffsetValue_7;
  PegOffsetValue_7.setString("14432046");
set_field(msg, PegOffsetValue_7, PegInstructions_7);
  set_field(msg, FIX::PegPriceType{7}, PegInstructions_7);
  set_field(msg, FIX::PegRoundDirection{1}, PegInstructions_7);
  set_field(msg, FIX::PegScope{4}, PegInstructions_7);
  set_field(msg, FIX::PegSecurityDesc{"STRING_1845724330"}, PegInstructions_7);
  set_field(msg, FIX::PegSecurityID{"STRING_1529258433"}, PegInstructions_7);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_1896594014"}, PegInstructions_7);
  set_field(msg, FIX::PegSymbol{"STRING_1506810264"}, PegInstructions_7);
  all_values.push_back(PegInstructions_7);
  all_compo_names.insert(".");

  // PreAllocGrp
  // Group PreAllocGrp.NoAllocs
  {
    FIX50SP2::NewOrderSingle::NoAllocs noAllocs_0_0;
    // PreAllocGrp.NoAllocs
    multiset<string> PreAllocGrp_NoAllocs_22;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1800150272"}, PreAllocGrp_NoAllocs_22);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{1110675532}, PreAllocGrp_NoAllocs_22);
    FIX::AllocQty AllocQty_42;
    AllocQty_42.setString("7666484");
set_field(noAllocs_0_0, AllocQty_42, PreAllocGrp_NoAllocs_22);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"CAN"}, PreAllocGrp_NoAllocs_22);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_1202491401"}, PreAllocGrp_NoAllocs_22);
    all_values.push_back(PreAllocGrp_NoAllocs_22);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_95;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1231829473"}, NestedParties_NoNestedPartyIDs_95);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_95);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1597238340}, NestedParties_NoNestedPartyIDs_95);
      all_values.push_back(NestedParties_NoNestedPartyIDs_95);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_196;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_2070858980"}, NstdPtysSubGrp_NoNestedPartySubIDs_196);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{938567542}, NstdPtysSubGrp_NoNestedPartySubIDs_196);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_196);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_197;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_1398093143"}, NstdPtysSubGrp_NoNestedPartySubIDs_197);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{649251511}, NstdPtysSubGrp_NoNestedPartySubIDs_197);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_197);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_198;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_1497758998"}, NstdPtysSubGrp_NoNestedPartySubIDs_198);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{579731721}, NstdPtysSubGrp_NoNestedPartySubIDs_198);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_198);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_21;
  set_field(msg, FIX::BenchmarkCurveCurrency{"CHF"}, SpreadOrBenchmarkCurveData_21);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_Euribor"}, SpreadOrBenchmarkCurveData_21);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_848765271"}, SpreadOrBenchmarkCurveData_21);
  FIX::BenchmarkPrice BenchmarkPrice_21;
  BenchmarkPrice_21.setString("5563351");
set_field(msg, BenchmarkPrice_21, SpreadOrBenchmarkCurveData_21);
  set_field(msg, FIX::BenchmarkPriceType{1149732056}, SpreadOrBenchmarkCurveData_21);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1532007813"}, SpreadOrBenchmarkCurveData_21);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_935006131"}, SpreadOrBenchmarkCurveData_21);
  FIX::Spread Spread_21;
  Spread_21.setString("5284453");
set_field(msg, Spread_21, SpreadOrBenchmarkCurveData_21);
  all_values.push_back(SpreadOrBenchmarkCurveData_21);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_34;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_RESTRICTED"}, Stipulations_NoStipulations_34);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_277555697"}, Stipulations_NoStipulations_34);
    all_values.push_back(Stipulations_NoStipulations_34);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_35;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_CPP"}, Stipulations_NoStipulations_35);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_340180007"}, Stipulations_NoStipulations_35);
    all_values.push_back(Stipulations_NoStipulations_35);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_36;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_YIELD"}, Stipulations_NoStipulations_36);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_1700250643"}, Stipulations_NoStipulations_36);
    all_values.push_back(Stipulations_NoStipulations_36);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderSingle::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_13;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_1685485821"}, StrategyParametersGrp_NoStrategyParameters_13);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{11}, StrategyParametersGrp_NoStrategyParameters_13);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_161836167"}, StrategyParametersGrp_NoStrategyParameters_13);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_13);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_14;
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterName{"STRING_1730024256"}, StrategyParametersGrp_NoStrategyParameters_14);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterType{14}, StrategyParametersGrp_NoStrategyParameters_14);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterValue{"STRING_27767378"}, StrategyParametersGrp_NoStrategyParameters_14);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_14);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoStrategyParameters noStrategyParameters_0_2;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_15;
    set_field(noStrategyParameters_0_2, FIX::StrategyParameterName{"STRING_1179778949"}, StrategyParametersGrp_NoStrategyParameters_15);
    set_field(noStrategyParameters_0_2, FIX::StrategyParameterType{25}, StrategyParametersGrp_NoStrategyParameters_15);
    set_field(noStrategyParameters_0_2, FIX::StrategyParameterValue{"STRING_2098626358"}, StrategyParametersGrp_NoStrategyParameters_15);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_15);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::NewOrderSingle::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_16;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_PEG"}, TrdRegTimestamps_NoTrdRegTimestamps_16);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_T"}, TrdRegTimestamps_NoTrdRegTimestamps_16);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_16);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(1, 25, 21, 20, 5, 2015)}, TrdRegTimestamps_NoTrdRegTimestamps_16);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_1919367029"}, TrdRegTimestamps_NoTrdRegTimestamps_16);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{3}, TrdRegTimestamps_NoTrdRegTimestamps_16);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_16);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderSingle::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_13;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_13);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_7"}, TrdgSesGrp_NoTradingSessions_13);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_13);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_7;
  set_field(msg, FIX::TriggerAction{'3'}, TriggeringInstruction_7);
  FIX::TriggerNewPrice TriggerNewPrice_7;
  TriggerNewPrice_7.setString("15917069");
set_field(msg, TriggerNewPrice_7, TriggeringInstruction_7);
  FIX::TriggerNewQty TriggerNewQty_7;
  TriggerNewQty_7.setString("8088056");
set_field(msg, TriggerNewQty_7, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerOrderType{'1'}, TriggeringInstruction_7);
  FIX::TriggerPrice TriggerPrice_7;
  TriggerPrice_7.setString("11444739");
set_field(msg, TriggerPrice_7, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerPriceDirection{'U'}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerPriceType{'4'}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerPriceTypeScope{'1'}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_2077470221"}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerSecurityID{"STRING_718373642"}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_1511551532"}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerSymbol{"STRING_2105237599"}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_1898152591"}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_1686558350"}, TriggeringInstruction_7);
  set_field(msg, FIX::TriggerType{'3'}, TriggeringInstruction_7);
  all_values.push_back(TriggeringInstruction_7);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_71;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1112174663"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{509290884}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1190153628"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1117522697}, UnderlyingInstrument_71);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_71;
    UnderlyingAdjustedQuantity_71.setString("478848");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_71, UnderlyingInstrument_71);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_71;
    UnderlyingAllocationPercent_71.setString("7.130000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_71, UnderlyingInstrument_71);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_71;
    UnderlyingAttachmentPoint_71.setString("81.500000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_435244045"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1214979297"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1691005660"}, UnderlyingInstrument_71);
    FIX::UnderlyingCapValue UnderlyingCapValue_71;
    UnderlyingCapValue_71.setString("2071274");
set_field(noUnderlyings_0_0, UnderlyingCapValue_71, UnderlyingInstrument_71);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_71;
    UnderlyingCashAmount_71.setString("13668240");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_71);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_71;
    UnderlyingContractMultiplier_71.setString("12092593");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1835449646}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_453699743"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_653482643"}, UnderlyingInstrument_71);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_71;
    UnderlyingCouponRate_71.setString("16.380000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_2051530603"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_71);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_71;
    UnderlyingCurrentValue_71.setString("10398799");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_71, UnderlyingInstrument_71);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_71;
    UnderlyingDetachmentPoint_71.setString("9.980000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_71, UnderlyingInstrument_71);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_71;
    UnderlyingDirtyPrice_71.setString("1949086");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_71, UnderlyingInstrument_71);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_71;
    UnderlyingEndPrice_71.setString("17582536");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_71, UnderlyingInstrument_71);
    FIX::UnderlyingEndValue UnderlyingEndValue_71;
    UnderlyingEndValue_71.setString("18741225");
set_field(noUnderlyings_0_0, UnderlyingEndValue_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{152662568}, UnderlyingInstrument_71);
    FIX::UnderlyingFXRate UnderlyingFXRate_71;
    UnderlyingFXRate_71.setString("15089225");
set_field(noUnderlyings_0_0, UnderlyingFXRate_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_71);
    FIX::UnderlyingFactor UnderlyingFactor_71;
    UnderlyingFactor_71.setString("615592");
set_field(noUnderlyings_0_0, UnderlyingFactor_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1230454360}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_377888248"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_570850114"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_273124340"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1495410945"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_618734943"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_123781405"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_177325448"}, UnderlyingInstrument_71);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_71;
    UnderlyingNotionalPercentageOutstanding_71.setString("89.890000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_71);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_71;
    UnderlyingOriginalNotionalPercentageOutstanding_71.setString("11.080000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1261106416"}, UnderlyingInstrument_71);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_71;
    UnderlyingPriceUnitOfMeasureQty_71.setString("5581010");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{654422313}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{322882071}, UnderlyingInstrument_71);
    FIX::UnderlyingPx UnderlyingPx_71;
    UnderlyingPx_71.setString("2460670");
set_field(noUnderlyings_0_0, UnderlyingPx_71, UnderlyingInstrument_71);
    FIX::UnderlyingQty UnderlyingQty_71;
    UnderlyingQty_71.setString("11081220");
set_field(noUnderlyings_0_0, UnderlyingQty_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_976364714"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_742838704"}, UnderlyingInstrument_71);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_71;
    UnderlyingRepurchaseRate_71.setString("90.120000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{626837692}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1007760748"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_2052049001"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_989408690"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1202669365"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1662818984"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_716047573"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1355331934"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1024257910"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_2129244806"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_71);
    FIX::UnderlyingStartValue UnderlyingStartValue_71;
    UnderlyingStartValue_71.setString("1072286");
set_field(noUnderlyings_0_0, UnderlyingStartValue_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_359649406"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_71);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_71;
    UnderlyingStrikePrice_71.setString("18550603");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_71, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_458992574"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_504134368"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_2032385800"}, UnderlyingInstrument_71);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1512971563"}, UnderlyingInstrument_71);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_71;
    UnderlyingUnitOfMeasureQty_71.setString("18428950");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_71, UnderlyingInstrument_71);
    all_values.push_back(UnderlyingInstrument_71);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_150;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_626594331"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_150);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_253512492"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_150);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_150);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_151;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_260171925"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_151);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_949476403"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_151);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_151);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_152;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_499579558"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_152);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1368293981"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_152);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_152);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_143;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1242418263"}, UnderlyingStipulations_NoUnderlyingStips_143);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_232979345"}, UnderlyingStipulations_NoUnderlyingStips_143);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_143);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_155;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_102695363"}, UndlyInstrumentParties_NoUndlyInstrumentParties_155);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_155);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1394603852}, UndlyInstrumentParties_NoUndlyInstrumentParties_155);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_155);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1800363682"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2110651425}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_307);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_513213015"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{677137944}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_308);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_156;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_2092412584"}, UndlyInstrumentParties_NoUndlyInstrumentParties_156);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_156);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{784366567}, UndlyInstrumentParties_NoUndlyInstrumentParties_156);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_156);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1770361810"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1164719530}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_309);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_157;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_12155046"}, UndlyInstrumentParties_NoUndlyInstrumentParties_157);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_157);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1668853898}, UndlyInstrumentParties_NoUndlyInstrumentParties_157);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_157);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1594842300"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1364265322}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_310);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1650290458"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{73952984}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_311);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_72;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1617777814"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1910462383}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1023429387"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{2117357372}, UnderlyingInstrument_72);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_72;
    UnderlyingAdjustedQuantity_72.setString("11312727");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_72, UnderlyingInstrument_72);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_72;
    UnderlyingAllocationPercent_72.setString("68.560000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_72, UnderlyingInstrument_72);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_72;
    UnderlyingAttachmentPoint_72.setString("19.870000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1364252062"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1206982018"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1314987351"}, UnderlyingInstrument_72);
    FIX::UnderlyingCapValue UnderlyingCapValue_72;
    UnderlyingCapValue_72.setString("15017967");
set_field(noUnderlyings_0_1, UnderlyingCapValue_72, UnderlyingInstrument_72);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_72;
    UnderlyingCashAmount_72.setString("4541022");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_72);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_72;
    UnderlyingContractMultiplier_72.setString("11546767");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{417269999}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_986081447"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1831814740"}, UnderlyingInstrument_72);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_72;
    UnderlyingCouponRate_72.setString("89.350000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_768701978"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_72);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_72;
    UnderlyingCurrentValue_72.setString("3915801");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_72, UnderlyingInstrument_72);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_72;
    UnderlyingDetachmentPoint_72.setString("71.890000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_72, UnderlyingInstrument_72);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_72;
    UnderlyingDirtyPrice_72.setString("6789323");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_72, UnderlyingInstrument_72);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_72;
    UnderlyingEndPrice_72.setString("4734508");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_72, UnderlyingInstrument_72);
    FIX::UnderlyingEndValue UnderlyingEndValue_72;
    UnderlyingEndValue_72.setString("11547874");
set_field(noUnderlyings_0_1, UnderlyingEndValue_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{575989523}, UnderlyingInstrument_72);
    FIX::UnderlyingFXRate UnderlyingFXRate_72;
    UnderlyingFXRate_72.setString("20682931");
set_field(noUnderlyings_0_1, UnderlyingFXRate_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_72);
    FIX::UnderlyingFactor UnderlyingFactor_72;
    UnderlyingFactor_72.setString("787963");
set_field(noUnderlyings_0_1, UnderlyingFactor_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{2142246162}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1989346927"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1989258717"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1018191901"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1959220652"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_973047786"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1819978758"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1024028991"}, UnderlyingInstrument_72);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_72;
    UnderlyingNotionalPercentageOutstanding_72.setString("62.000000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_72);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_72;
    UnderlyingOriginalNotionalPercentageOutstanding_72.setString("26.940000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1691612961"}, UnderlyingInstrument_72);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_72;
    UnderlyingPriceUnitOfMeasureQty_72.setString("13335793");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{664401126}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{698806109}, UnderlyingInstrument_72);
    FIX::UnderlyingPx UnderlyingPx_72;
    UnderlyingPx_72.setString("17508493");
set_field(noUnderlyings_0_1, UnderlyingPx_72, UnderlyingInstrument_72);
    FIX::UnderlyingQty UnderlyingQty_72;
    UnderlyingQty_72.setString("16504825");
set_field(noUnderlyings_0_1, UnderlyingQty_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_383137201"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2113048285"}, UnderlyingInstrument_72);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_72;
    UnderlyingRepurchaseRate_72.setString("9.040000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{851834860}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_632341915"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_663281045"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_337768401"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1311274239"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1136731923"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1492555840"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1887263762"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1057541453"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1864124954"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_72);
    FIX::UnderlyingStartValue UnderlyingStartValue_72;
    UnderlyingStartValue_72.setString("10523039");
set_field(noUnderlyings_0_1, UnderlyingStartValue_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1705988233"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_72);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_72;
    UnderlyingStrikePrice_72.setString("15177252");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_72, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_633399303"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1742990979"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_394270581"}, UnderlyingInstrument_72);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_823215503"}, UnderlyingInstrument_72);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_72;
    UnderlyingUnitOfMeasureQty_72.setString("4749844");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_72, UnderlyingInstrument_72);
    all_values.push_back(UnderlyingInstrument_72);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_153;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_367344817"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_153);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1808563809"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_153);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_153);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_154;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1250204402"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_154);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1066150926"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_154);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_154);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_144;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_753203327"}, UnderlyingStipulations_NoUnderlyingStips_144);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1449288127"}, UnderlyingStipulations_NoUnderlyingStips_144);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_144);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_145;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1377494148"}, UnderlyingStipulations_NoUnderlyingStips_145);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1024904231"}, UnderlyingStipulations_NoUnderlyingStips_145);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_145);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_158;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2009836063"}, UndlyInstrumentParties_NoUndlyInstrumentParties_158);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_158);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{491407740}, UndlyInstrumentParties_NoUndlyInstrumentParties_158);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_158);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_677433551"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1983963580}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_312);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_913406769"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1734975005}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_313);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1700604886"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{731983217}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_314);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::NewOrderSingle::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_73;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_639795325"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{1259109472}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_392334734"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{562807546}, UnderlyingInstrument_73);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_73;
    UnderlyingAdjustedQuantity_73.setString("6293510");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_73, UnderlyingInstrument_73);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_73;
    UnderlyingAllocationPercent_73.setString("40.370000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_73, UnderlyingInstrument_73);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_73;
    UnderlyingAttachmentPoint_73.setString("48.780000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1023621642"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_1848949540"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_633299337"}, UnderlyingInstrument_73);
    FIX::UnderlyingCapValue UnderlyingCapValue_73;
    UnderlyingCapValue_73.setString("16094249");
set_field(noUnderlyings_0_2, UnderlyingCapValue_73, UnderlyingInstrument_73);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_73;
    UnderlyingCashAmount_73.setString("688107");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_73);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_73;
    UnderlyingContractMultiplier_73.setString("7121456");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{1134961635}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1706309010"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1465348999"}, UnderlyingInstrument_73);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_73;
    UnderlyingCouponRate_73.setString("61.140000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_936319510"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_73);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_73;
    UnderlyingCurrentValue_73.setString("7986719");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_73, UnderlyingInstrument_73);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_73;
    UnderlyingDetachmentPoint_73.setString("48.590000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_73, UnderlyingInstrument_73);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_73;
    UnderlyingDirtyPrice_73.setString("10818131");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_73, UnderlyingInstrument_73);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_73;
    UnderlyingEndPrice_73.setString("19722985");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_73, UnderlyingInstrument_73);
    FIX::UnderlyingEndValue UnderlyingEndValue_73;
    UnderlyingEndValue_73.setString("5609047");
set_field(noUnderlyings_0_2, UnderlyingEndValue_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{918293126}, UnderlyingInstrument_73);
    FIX::UnderlyingFXRate UnderlyingFXRate_73;
    UnderlyingFXRate_73.setString("7382217");
set_field(noUnderlyings_0_2, UnderlyingFXRate_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_73);
    FIX::UnderlyingFactor UnderlyingFactor_73;
    UnderlyingFactor_73.setString("4714143");
set_field(noUnderlyings_0_2, UnderlyingFactor_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{1470204917}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_788191445"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1730523836"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_1862539651"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_1350998991"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_212391250"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_740790040"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1509313869"}, UnderlyingInstrument_73);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_73;
    UnderlyingNotionalPercentageOutstanding_73.setString("28.920000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_73);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_73;
    UnderlyingOriginalNotionalPercentageOutstanding_73.setString("32.070000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_697954162"}, UnderlyingInstrument_73);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_73;
    UnderlyingPriceUnitOfMeasureQty_73.setString("5110666");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{289509058}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{1410099834}, UnderlyingInstrument_73);
    FIX::UnderlyingPx UnderlyingPx_73;
    UnderlyingPx_73.setString("16460282");
set_field(noUnderlyings_0_2, UnderlyingPx_73, UnderlyingInstrument_73);
    FIX::UnderlyingQty UnderlyingQty_73;
    UnderlyingQty_73.setString("19958180");
set_field(noUnderlyings_0_2, UnderlyingQty_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_727965186"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2082794392"}, UnderlyingInstrument_73);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_73;
    UnderlyingRepurchaseRate_73.setString("39.300000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{1070734769}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_525716198"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_1583325855"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_954205980"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1607529391"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1408140786"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_1515110743"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_378338869"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_2146362487"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_1663506863"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_73);
    FIX::UnderlyingStartValue UnderlyingStartValue_73;
    UnderlyingStartValue_73.setString("14690837");
set_field(noUnderlyings_0_2, UnderlyingStartValue_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_304214660"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_73);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_73;
    UnderlyingStrikePrice_73.setString("16552136");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_73, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_645184672"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_1924929800"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_1017043873"}, UnderlyingInstrument_73);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1881197565"}, UnderlyingInstrument_73);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_73;
    UnderlyingUnitOfMeasureQty_73.setString("2197020");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_73, UnderlyingInstrument_73);
    all_values.push_back(UnderlyingInstrument_73);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_155;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_431668079"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_155);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_730768728"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_155);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_155);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_146;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_1841767914"}, UnderlyingStipulations_NoUnderlyingStips_146);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_229313358"}, UnderlyingStipulations_NoUnderlyingStips_146);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_146);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_147;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_1150016910"}, UnderlyingStipulations_NoUnderlyingStips_147);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_422249452"}, UnderlyingStipulations_NoUnderlyingStips_147);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_147);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_159;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1934670840"}, UndlyInstrumentParties_NoUndlyInstrumentParties_159);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_159);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{690340300}, UndlyInstrumentParties_NoUndlyInstrumentParties_159);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_159);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_299706553"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{150386044}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_315);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_631170186"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1814817297}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_316);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_160;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_528724913"}, UndlyInstrumentParties_NoUndlyInstrumentParties_160);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_160);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{1330840512}, UndlyInstrumentParties_NoUndlyInstrumentParties_160);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_160);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2099132781"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1635055173}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_317);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1811271570"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1135788893}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_318);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1142785177"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{308972594}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_319);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_161;
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_913235046"}, UndlyInstrumentParties_NoUndlyInstrumentParties_161);
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_161);
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyRole{42686511}, UndlyInstrumentParties_NoUndlyInstrumentParties_161);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_161);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320;
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1024518835"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320);
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{474354591}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_320);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::NewOrderSingle::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321;
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1863705859"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321);
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{178717677}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_321);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // YieldData
  multiset<string> YieldData_16;
  FIX::Yield Yield_16;
  Yield_16.setString("88.570000");
set_field(msg, Yield_16, YieldData_16);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_2093019217"}, YieldData_16);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1328734588"}, YieldData_16);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_16;
  YieldRedemptionPrice_16.setString("5908883");
set_field(msg, YieldRedemptionPrice_16, YieldData_16);
  set_field(msg, FIX::YieldRedemptionPriceType{110159672}, YieldData_16);
  set_field(msg, FIX::YieldType{"STRING_SIMPLE"}, YieldData_16);
  all_values.push_back(YieldData_16);
  all_compo_names.insert(".");

  // header
  multiset<string> header_54;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_0"}, header_54);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_800499972"}, header_54);
  set_header_field(msg.getHeader(), FIX::BodyLength{338951180}, header_54);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_236095435"}, header_54);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_950886016"}, header_54);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_970121366"}, header_54);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_2050912732"}, header_54);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1479610930}, header_54);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_54);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1234269597}, header_54);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_710605429"}, header_54);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1551819524"}, header_54);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_721841122"}, header_54);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(18, 59, 26, 20, 6, 2011)}, header_54);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_54);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_54);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1200407048"}, header_54);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{155035511}, header_54);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_932724566"}, header_54);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1369045905"}, header_54);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_100571080"}, header_54);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(14, 12, 6, 24, 2, 2002)}, header_54);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_2132418532"}, header_54);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1962116741"}, header_54);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_391486184"}, header_54);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_2035847616"}, header_54);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1294244023}, header_54);
  all_values.push_back(header_54);
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
