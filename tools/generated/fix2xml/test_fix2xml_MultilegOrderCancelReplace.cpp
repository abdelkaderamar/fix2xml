#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::MultilegOrderCancelReplace msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MultilegOrderCancelReplace_0;
  set_field(msg, FIX::Account{"STRING_1835453563"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::AccountType{8}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::AcctIDSource{5}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::AllocID{"STRING_730048374"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::BookingType{1}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::BookingUnit{'1'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::CancellationRights{'Y'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::CashMargin{'1'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ClOrdID{"STRING_839082473"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_831528594"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ClearingFeeIndicator{"STRING_3"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ComplianceID{"STRING_783049947"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::CoveredOrUncovered{0}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::Currency{"EUR"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::CustOrderCapacity{4}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::DayBookingInst{'0'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::Designation{"STRING_904756760"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(20, 39, 32, 22, 1, 2008)}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::EncodedText{"DATA_349586094"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::EncodedTextLen{903127258}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_1280722465"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ExDestinationIDSource{'E'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_5"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_1653184066"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(3, 24, 34, 7, 9, 2012)}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ForexReq{false}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::GTBookingInst{0}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::HandlInst{'1'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::IOIID{"STRING_1960224787"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::LocateReqd{false}, MultilegOrderCancelReplace_0);
  FIX::MatchIncrement MatchIncrement_2;
  MatchIncrement_2.setString("1844205");
set_field(msg, MatchIncrement_2, MultilegOrderCancelReplace_0);
  FIX::MaxFloor MaxFloor_2;
  MaxFloor_2.setString("1441837");
set_field(msg, MaxFloor_2, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::MaxPriceLevels{286699112}, MultilegOrderCancelReplace_0);
  FIX::MaxShow MaxShow_2;
  MaxShow_2.setString("10848115");
set_field(msg, MaxShow_2, MultilegOrderCancelReplace_0);
  FIX::MinQty MinQty_8;
  MinQty_8.setString("982712");
set_field(msg, MinQty_8, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'2'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::MultiLegRptTypeReq{0}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::MultilegModel{2}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::MultilegPriceMethod{0}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::OrdType{'J'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::OrderCapacity{'A'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::OrderID{"STRING_1781559912"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::OrderRestrictions{"MULTIPLECHARVALUE_1"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::OrigClOrdID{"STRING_1140192654"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(19, 59, 4, 5, 4, 2007)}, MultilegOrderCancelReplace_0);
  FIX::ParticipationRate ParticipationRate_2;
  ParticipationRate_2.setString("72.300000");
set_field(msg, ParticipationRate_2, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::PositionEffect{'O'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::PreTradeAnonymity{true}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::PreallocMethod{'0'}, MultilegOrderCancelReplace_0);
  FIX::PrevClosePx PrevClosePx_2;
  PrevClosePx_2.setString("13235244");
set_field(msg, PrevClosePx_2, MultilegOrderCancelReplace_0);
  FIX::Price Price_12;
  Price_12.setString("18584192");
set_field(msg, Price_12, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::PriceProtectionScope{'0'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::PriceType{2}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::ProcessCode{'6'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::QtyType{2}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::QuoteID{"STRING_419863861"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::RegistID{"STRING_1815344088"}, MultilegOrderCancelReplace_0);
  FIX::RiskFreeRate RiskFreeRate_1;
  RiskFreeRate_1.setString("16688113");
set_field(msg, RiskFreeRate_1, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1504675417"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::SettlCurrency{"CAN"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1409117340"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::SettlType{"STRING_0"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::Side{'8'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::SolicitedFlag{true}, MultilegOrderCancelReplace_0);
  FIX::StopPx StopPx_2;
  StopPx_2.setString("358309");
set_field(msg, StopPx_2, MultilegOrderCancelReplace_0);
  FIX::SwapPoints SwapPoints_0;
  SwapPoints_0.setString("10864453");
set_field(msg, SwapPoints_0, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::TargetStrategy{3}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_1176023614"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::Text{"STRING_1623648834"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::TimeInForce{'4'}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_118555825"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_792068930"}, MultilegOrderCancelReplace_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(4, 49, 20, 14, 12, 2010)}, MultilegOrderCancelReplace_0);
  all_values.push_back(MultilegOrderCancelReplace_0);

  all_compo_names.insert("MultilegOrderCancelReplace");

  // CommissionData
  multiset<string> CommissionData_15;
  set_field(msg, FIX::CommCurrency{"CHF"}, CommissionData_15);
  set_field(msg, FIX::CommType{'2'}, CommissionData_15);
  FIX::Commission Commission_15;
  Commission_15.setString("13534993");
set_field(msg, Commission_15, CommissionData_15);
  set_field(msg, FIX::FundRenewWaiv{'N'}, CommissionData_15);
  all_values.push_back(CommissionData_15);
  all_compo_names.insert(".");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_2;
  set_field(msg, FIX::DiscretionInst{'4'}, DiscretionInstructions_2);
  set_field(msg, FIX::DiscretionLimitType{0}, DiscretionInstructions_2);
  set_field(msg, FIX::DiscretionMoveType{0}, DiscretionInstructions_2);
  set_field(msg, FIX::DiscretionOffsetType{2}, DiscretionInstructions_2);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_2;
  DiscretionOffsetValue_2.setString("11305549");
set_field(msg, DiscretionOffsetValue_2, DiscretionInstructions_2);
  set_field(msg, FIX::DiscretionRoundDirection{1}, DiscretionInstructions_2);
  set_field(msg, FIX::DiscretionScope{2}, DiscretionInstructions_2);
  all_values.push_back(DiscretionInstructions_2);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_2;
  FIX::DisplayHighQty DisplayHighQty_2;
  DisplayHighQty_2.setString("3921886");
set_field(msg, DisplayHighQty_2, DisplayInstruction_2);
  FIX::DisplayLowQty DisplayLowQty_2;
  DisplayLowQty_2.setString("5276316");
set_field(msg, DisplayLowQty_2, DisplayInstruction_2);
  set_field(msg, FIX::DisplayMethod{'1'}, DisplayInstruction_2);
  FIX::DisplayMinIncr DisplayMinIncr_2;
  DisplayMinIncr_2.setString("7321444");
set_field(msg, DisplayMinIncr_2, DisplayInstruction_2);
  FIX::DisplayQty DisplayQty_2;
  DisplayQty_2.setString("5634625");
set_field(msg, DisplayQty_2, DisplayInstruction_2);
  set_field(msg, FIX::DisplayWhen{'1'}, DisplayInstruction_2);
  FIX::RefreshQty RefreshQty_2;
  RefreshQty_2.setString("17014741");
set_field(msg, RefreshQty_2, DisplayInstruction_2);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_2;
  SecondaryDisplayQty_2.setString("17394861");
set_field(msg, SecondaryDisplayQty_2, DisplayInstruction_2);
  all_values.push_back(DisplayInstruction_2);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_47;
  FIX::AttachmentPoint AttachmentPoint_47;
  AttachmentPoint_47.setString("60.020000");
set_field(msg, AttachmentPoint_47, Instrument_47);
  set_field(msg, FIX::CFICode{"STRING_285933187"}, Instrument_47);
  set_field(msg, FIX::CPProgram{99}, Instrument_47);
  set_field(msg, FIX::CPRegType{"STRING_1585994933"}, Instrument_47);
  FIX::CapPrice CapPrice_47;
  CapPrice_47.setString("2861891");
set_field(msg, CapPrice_47, Instrument_47);
  FIX::ContractMultiplier ContractMultiplier_47;
  ContractMultiplier_47.setString("5569231");
set_field(msg, ContractMultiplier_47, Instrument_47);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_47);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1135172277"}, Instrument_47);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_351454794"}, Instrument_47);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_657894910"}, Instrument_47);
  FIX::CouponRate CouponRate_47;
  CouponRate_47.setString("90.590000");
set_field(msg, CouponRate_47, Instrument_47);
  set_field(msg, FIX::CreditRating{"STRING_1469510845"}, Instrument_47);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_835149661"}, Instrument_47);
  FIX::DetachmentPoint DetachmentPoint_47;
  DetachmentPoint_47.setString("92.740000");
set_field(msg, DetachmentPoint_47, Instrument_47);
  set_field(msg, FIX::EncodedIssuer{"DATA_675526561"}, Instrument_47);
  set_field(msg, FIX::EncodedIssuerLen{536081107}, Instrument_47);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_45314439"}, Instrument_47);
  set_field(msg, FIX::EncodedSecurityDescLen{301406139}, Instrument_47);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_47);
  FIX::Factor Factor_47;
  Factor_47.setString("2589609");
set_field(msg, Factor_47, Instrument_47);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_47);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_47);
  FIX::FloorPrice FloorPrice_47;
  FloorPrice_47.setString("11853910");
set_field(msg, FloorPrice_47, Instrument_47);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_47);
  set_field(msg, FIX::InstrRegistry{"STRING_1714911810"}, Instrument_47);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_47);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_408810586"}, Instrument_47);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_130890731"}, Instrument_47);
  set_field(msg, FIX::Issuer{"STRING_586983739"}, Instrument_47);
  set_field(msg, FIX::ListMethod{1}, Instrument_47);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1870376913"}, Instrument_47);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1380909742"}, Instrument_47);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_248734316"}, Instrument_47);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1580935273"}, Instrument_47);
  FIX::MinPriceIncrement MinPriceIncrement_47;
  MinPriceIncrement_47.setString("8194210");
set_field(msg, MinPriceIncrement_47, Instrument_47);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_47;
  MinPriceIncrementAmount_47.setString("5349234");
set_field(msg, MinPriceIncrementAmount_47, Instrument_47);
  set_field(msg, FIX::NTPositionLimit{2137858437}, Instrument_47);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_47;
  NotionalPercentageOutstanding_47.setString("67.410000");
set_field(msg, NotionalPercentageOutstanding_47, Instrument_47);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_47);
  FIX::OptPayoutAmount OptPayoutAmount_47;
  OptPayoutAmount_47.setString("3418295");
set_field(msg, OptPayoutAmount_47, Instrument_47);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_47);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_47;
  OriginalNotionalPercentageOutstanding_47.setString("47.690000");
set_field(msg, OriginalNotionalPercentageOutstanding_47, Instrument_47);
  set_field(msg, FIX::Pool{"STRING_1811340429"}, Instrument_47);
  set_field(msg, FIX::PositionLimit{356557664}, Instrument_47);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_47);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_339383342"}, Instrument_47);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_47;
  PriceUnitOfMeasureQty_47.setString("8926387");
set_field(msg, PriceUnitOfMeasureQty_47, Instrument_47);
  set_field(msg, FIX::Product{11}, Instrument_47);
  set_field(msg, FIX::ProductComplex{"STRING_640789481"}, Instrument_47);
  set_field(msg, FIX::PutOrCall{1}, Instrument_47);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1370155796"}, Instrument_47);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_2072750615"}, Instrument_47);
  FIX::RepurchaseRate RepurchaseRate_47;
  RepurchaseRate_47.setString("19.670000");
set_field(msg, RepurchaseRate_47, Instrument_47);
  set_field(msg, FIX::RepurchaseTerm{408063215}, Instrument_47);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_47);
  set_field(msg, FIX::SecurityDesc{"STRING_1552220129"}, Instrument_47);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1824769787"}, Instrument_47);
  set_field(msg, FIX::SecurityGroup{"STRING_10743727"}, Instrument_47);
  set_field(msg, FIX::SecurityID{"STRING_1683110860"}, Instrument_47);
  set_field(msg, FIX::SecurityIDSource{"STRING_5"}, Instrument_47);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_47);
  set_field(msg, FIX::SecuritySubType{"STRING_1406004126"}, Instrument_47);
  set_field(msg, FIX::SecurityType{"STRING_OPT"}, Instrument_47);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_47);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_47);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_317116999"}, Instrument_47);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_757202605"}, Instrument_47);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_47);
  FIX::StrikeMultiplier StrikeMultiplier_47;
  StrikeMultiplier_47.setString("2798146");
set_field(msg, StrikeMultiplier_47, Instrument_47);
  FIX::StrikePrice StrikePrice_47;
  StrikePrice_47.setString("11716601");
set_field(msg, StrikePrice_47, Instrument_47);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_47);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_47;
  StrikePriceBoundaryPrecision_47.setString("94.360000");
set_field(msg, StrikePriceBoundaryPrecision_47, Instrument_47);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_47);
  FIX::StrikeValue StrikeValue_47;
  StrikeValue_47.setString("12060794");
set_field(msg, StrikeValue_47, Instrument_47);
  set_field(msg, FIX::Symbol{"STRING_911096184"}, Instrument_47);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_47);
  set_field(msg, FIX::TimeUnit{"STRING_Yr"}, Instrument_47);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_47);
  set_field(msg, FIX::UnitOfMeasure{"STRING_oz_tr"}, Instrument_47);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_47;
  UnitOfMeasureQty_47.setString("7487462");
set_field(msg, UnitOfMeasureQty_47, Instrument_47);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_47);
  all_values.push_back(Instrument_47);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_93;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_93);
    FIX::ComplexEventPrice ComplexEventPrice_93;
    ComplexEventPrice_93.setString("16530263");
set_field(noComplexEvents_0_0, ComplexEventPrice_93, ComplexEvents_NoComplexEvents_93);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_93);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_93;
    ComplexEventPriceBoundaryPrecision_93.setString("47.460000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_93, ComplexEvents_NoComplexEvents_93);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_93);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_93);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_93;
    ComplexOptPayoutAmount_93.setString("16739019");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_93, ComplexEvents_NoComplexEvents_93);
    all_values.push_back(ComplexEvents_NoComplexEvents_93);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_183;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 33, 11, 23, 6, 2010)}, ComplexEventDates_NoComplexEventDates_183);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 15, 43, 10, 1, 2007)}, ComplexEventDates_NoComplexEventDates_183);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_183);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_368;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 4, 0)}, ComplexEventTimes_NoComplexEventTimes_368);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 0, 15)}, ComplexEventTimes_NoComplexEventTimes_368);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_368);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_94;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_94);
    FIX::ComplexEventPrice ComplexEventPrice_94;
    ComplexEventPrice_94.setString("18206164");
set_field(noComplexEvents_0_1, ComplexEventPrice_94, ComplexEvents_NoComplexEvents_94);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_94);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_94;
    ComplexEventPriceBoundaryPrecision_94.setString("95.160000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_94, ComplexEvents_NoComplexEvents_94);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_94);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_94);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_94;
    ComplexOptPayoutAmount_94.setString("13013878");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_94, ComplexEvents_NoComplexEvents_94);
    all_values.push_back(ComplexEvents_NoComplexEvents_94);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_184;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 44, 10, 6, 6, 2012)}, ComplexEventDates_NoComplexEventDates_184);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 46, 37, 18, 11, 2014)}, ComplexEventDates_NoComplexEventDates_184);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_184);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_369;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 33, 50)}, ComplexEventTimes_NoComplexEventTimes_369);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 50, 29)}, ComplexEventTimes_NoComplexEventTimes_369);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_369);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_370;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 52, 33)}, ComplexEventTimes_NoComplexEventTimes_370);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 31, 27)}, ComplexEventTimes_NoComplexEventTimes_370);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_370);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_371;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 11, 32)}, ComplexEventTimes_NoComplexEventTimes_371);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 2, 15)}, ComplexEventTimes_NoComplexEventTimes_371);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_371);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_185;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 44, 18, 10, 9, 2000)}, ComplexEventDates_NoComplexEventDates_185);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 13, 31, 9, 5, 2016)}, ComplexEventDates_NoComplexEventDates_185);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_185);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_372;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 47, 22)}, ComplexEventTimes_NoComplexEventTimes_372);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 46, 31)}, ComplexEventTimes_NoComplexEventTimes_372);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_372);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_373;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 34, 12)}, ComplexEventTimes_NoComplexEventTimes_373);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 15, 32)}, ComplexEventTimes_NoComplexEventTimes_373);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_373);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_374;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 16, 6)}, ComplexEventTimes_NoComplexEventTimes_374);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 46, 35)}, ComplexEventTimes_NoComplexEventTimes_374);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_374);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_186;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 58, 34, 24, 9, 2004)}, ComplexEventDates_NoComplexEventDates_186);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 15, 44, 16, 11, 2004)}, ComplexEventDates_NoComplexEventDates_186);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_186);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_375;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 46, 27)}, ComplexEventTimes_NoComplexEventTimes_375);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 34, 17)}, ComplexEventTimes_NoComplexEventTimes_375);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_375);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_376;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 33, 40)}, ComplexEventTimes_NoComplexEventTimes_376);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 18, 42)}, ComplexEventTimes_NoComplexEventTimes_376);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_376);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_95;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_95);
    FIX::ComplexEventPrice ComplexEventPrice_95;
    ComplexEventPrice_95.setString("12126076");
set_field(noComplexEvents_0_2, ComplexEventPrice_95, ComplexEvents_NoComplexEvents_95);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_95);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_95;
    ComplexEventPriceBoundaryPrecision_95.setString("63.690000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_95, ComplexEvents_NoComplexEvents_95);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_95);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_95);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_95;
    ComplexOptPayoutAmount_95.setString("10800465");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_95, ComplexEvents_NoComplexEvents_95);
    all_values.push_back(ComplexEvents_NoComplexEvents_95);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_187;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 49, 42, 15, 5, 2008)}, ComplexEventDates_NoComplexEventDates_187);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 40, 24, 15, 10, 2010)}, ComplexEventDates_NoComplexEventDates_187);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_187);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_377;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 58, 31)}, ComplexEventTimes_NoComplexEventTimes_377);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 49, 10)}, ComplexEventTimes_NoComplexEventTimes_377);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_377);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_378;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 51, 8)}, ComplexEventTimes_NoComplexEventTimes_378);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 26, 56)}, ComplexEventTimes_NoComplexEventTimes_378);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_378);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_379;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 37, 13)}, ComplexEventTimes_NoComplexEventTimes_379);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 7, 47)}, ComplexEventTimes_NoComplexEventTimes_379);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_379);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_188;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 4, 20, 4, 7, 2008)}, ComplexEventDates_NoComplexEventDates_188);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 42, 42, 2, 12, 2002)}, ComplexEventDates_NoComplexEventDates_188);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_188);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_380;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 43, 15)}, ComplexEventTimes_NoComplexEventTimes_380);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 33, 19)}, ComplexEventTimes_NoComplexEventTimes_380);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_380);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_381;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 48, 3)}, ComplexEventTimes_NoComplexEventTimes_381);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 10, 37)}, ComplexEventTimes_NoComplexEventTimes_381);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_381);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::MultilegOrderCancelReplace::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_101;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_506419729"}, EvntGrp_NoEvents_101);
    FIX::EventPx EventPx_101;
    EventPx_101.setString("2214490");
set_field(noEvents_0_0, EventPx_101, EvntGrp_NoEvents_101);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1836354946"}, EvntGrp_NoEvents_101);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(16, 23, 5, 2, 10, 2011)}, EvntGrp_NoEvents_101);
    set_field(noEvents_0_0, FIX::EventType{17}, EvntGrp_NoEvents_101);
    all_values.push_back(EvntGrp_NoEvents_101);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_102;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_983222804"}, EvntGrp_NoEvents_102);
    FIX::EventPx EventPx_102;
    EventPx_102.setString("90646");
set_field(noEvents_0_1, EventPx_102, EvntGrp_NoEvents_102);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1750792508"}, EvntGrp_NoEvents_102);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(7, 43, 58, 2, 4, 2001)}, EvntGrp_NoEvents_102);
    set_field(noEvents_0_1, FIX::EventType{18}, EvntGrp_NoEvents_102);
    all_values.push_back(EvntGrp_NoEvents_102);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_90;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1751951987"}, InstrumentParties_NoInstrumentParties_90);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_90);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1991296976}, InstrumentParties_NoInstrumentParties_90);
    all_values.push_back(InstrumentParties_NoInstrumentParties_90);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_662480068"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1590387418}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_389173026"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{583842174}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_91;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_2096807147"}, InstrumentParties_NoInstrumentParties_91);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_91);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{272713473}, InstrumentParties_NoInstrumentParties_91);
    all_values.push_back(InstrumentParties_NoInstrumentParties_91);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1415373608"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1154485856}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1130260125"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1383067362}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_92;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_1474490933"}, InstrumentParties_NoInstrumentParties_92);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_92);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{65090871}, InstrumentParties_NoInstrumentParties_92);
    all_values.push_back(InstrumentParties_NoInstrumentParties_92);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_64655016"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{1815883379}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190);
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
    multiset<string> SecAltIDGrp_NoSecurityAltID_97;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_260841320"}, SecAltIDGrp_NoSecurityAltID_97);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_790173635"}, SecAltIDGrp_NoSecurityAltID_97);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_97);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_94;
  set_field(msg, FIX::SecurityXML{"XMLDATA_2131233919"}, SecurityXML_94);
  set_field(msg, FIX::SecurityXMLLen{1530965786}, SecurityXML_94);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1842343958"}, SecurityXML_94);
  all_values.push_back(SecurityXML_94);
  all_compo_names.insert("..");

  // LegOrdGrp
  // Group LegOrdGrp.NoLegs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoLegs noLegs_0_0;
    // LegOrdGrp.NoLegs
    multiset<string> LegOrdGrp_NoLegs_0;
    set_field(noLegs_0_0, FIX::LegAllocID{"STRING_367561776"}, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegCoveredOrUncovered{740743343}, LegOrdGrp_NoLegs_0);
    FIX::LegCurrencyRatio LegCurrencyRatio_2;
    LegCurrencyRatio_2.setString("9511664");
set_field(noLegs_0_0, LegCurrencyRatio_2, LegOrdGrp_NoLegs_0);
    FIX::LegDividendYield LegDividendYield_2;
    LegDividendYield_2.setString("16.420000");
set_field(noLegs_0_0, LegDividendYield_2, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegExecInst{"MULTIPLECHARVALUE_584556671"}, LegOrdGrp_NoLegs_0);
    FIX::LegOrderQty LegOrderQty_2;
    LegOrderQty_2.setString("20222561");
set_field(noLegs_0_0, LegOrderQty_2, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegPositionEffect{'1'}, LegOrdGrp_NoLegs_0);
    FIX::LegQty LegQty_2;
    LegQty_2.setString("274604");
set_field(noLegs_0_0, LegQty_2, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegRefID{"STRING_263945516"}, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlCurrency{"USD"}, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlDate{"LOCALMKTDATE_874567596"}, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSettlType{'1'}, LegOrdGrp_NoLegs_0);
    set_field(noLegs_0_0, FIX::LegSwapType{1}, LegOrdGrp_NoLegs_0);
    FIX::LegVolatility LegVolatility_2;
    LegVolatility_2.setString("1424575");
set_field(noLegs_0_0, LegVolatility_2, LegOrdGrp_NoLegs_0);
    all_values.push_back(LegOrdGrp_NoLegs_0);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_81;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_40155917"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{62477758}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1525524919"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1514646851}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_118068143"}, InstrumentLeg_81);
    FIX::LegContractMultiplier LegContractMultiplier_81;
    LegContractMultiplier_81.setString("15906157");
set_field(noLegs_0_0, LegContractMultiplier_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1824876941}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_182723159"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1259015521"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1372759494"}, InstrumentLeg_81);
    FIX::LegCouponRate LegCouponRate_81;
    LegCouponRate_81.setString("44.790000");
set_field(noLegs_0_0, LegCouponRate_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_2049189156"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1744049466"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{555724239}, InstrumentLeg_81);
    FIX::LegFactor LegFactor_81;
    LegFactor_81.setString("1946083");
set_field(noLegs_0_0, LegFactor_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{337309161}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1506890700"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1856210036"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_921865832"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1381663190"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_2032808098"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_949326273"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1645608706"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_645764686"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'9'}, InstrumentLeg_81);
    FIX::LegOptionRatio LegOptionRatio_81;
    LegOptionRatio_81.setString("3726926");
set_field(noLegs_0_0, LegOptionRatio_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1678918396"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_2005811494"}, InstrumentLeg_81);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_81;
    LegPriceUnitOfMeasureQty_81.setString("5151502");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegProduct{1719074313}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegPutOrCall{2068289252}, InstrumentLeg_81);
    FIX::LegRatioQty LegRatioQty_81;
    LegRatioQty_81.setString("20406751");
set_field(noLegs_0_0, LegRatioQty_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1086237516"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_38873747"}, InstrumentLeg_81);
    FIX::LegRepurchaseRate LegRepurchaseRate_81;
    LegRepurchaseRate_81.setString("72.720000");
set_field(noLegs_0_0, LegRepurchaseRate_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{763630809}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_221596906"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_595339146"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_2136390303"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_665161386"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_497044654"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1345416420"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSide{'4'}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_93610473"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_81);
    FIX::LegStrikePrice LegStrikePrice_81;
    LegStrikePrice_81.setString("4309196");
set_field(noLegs_0_0, LegStrikePrice_81, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1260547711"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_395542786"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1352785467"}, InstrumentLeg_81);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_494727253"}, InstrumentLeg_81);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_81;
    LegUnitOfMeasureQty_81.setString("2808672");
set_field(noLegs_0_0, LegUnitOfMeasureQty_81, InstrumentLeg_81);
    all_values.push_back(InstrumentLeg_81);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_164;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_2140335960"}, LegSecAltIDGrp_NoLegSecurityAltID_164);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_926631922"}, LegSecAltIDGrp_NoLegSecurityAltID_164);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_164);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_165;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1080738306"}, LegSecAltIDGrp_NoLegSecurityAltID_165);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_365544967"}, LegSecAltIDGrp_NoLegSecurityAltID_165);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_165);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    // LegPreAllocGrp
    // Group LegPreAllocGrp.NoLegAllocs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs noLegAllocs_0_1_0;
      // LegPreAllocGrp.NoLegAllocs
      multiset<string> LegPreAllocGrp_NoLegAllocs_6;
      set_field(noLegAllocs_0_1_0, FIX::LegAllocAccount{"STRING_939066152"}, LegPreAllocGrp_NoLegAllocs_6);
      set_field(noLegAllocs_0_1_0, FIX::LegAllocAcctIDSource{"STRING_880695178"}, LegPreAllocGrp_NoLegAllocs_6);
      FIX::LegAllocQty LegAllocQty_6;
      LegAllocQty_6.setString("296573");
set_field(noLegAllocs_0_1_0, LegAllocQty_6, LegPreAllocGrp_NoLegAllocs_6);
      set_field(noLegAllocs_0_1_0, FIX::LegAllocSettlCurrency{"EUR"}, LegPreAllocGrp_NoLegAllocs_6);
      set_field(noLegAllocs_0_1_0, FIX::LegIndividualAllocID{"STRING_1115894852"}, LegPreAllocGrp_NoLegAllocs_6);
      all_values.push_back(LegPreAllocGrp_NoLegAllocs_6);
      all_compo_names.insert("...NoLegs...NoLegAllocs");

      // NestedParties2
      // Group NestedParties2.NoNested2PartyIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_0;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_29;
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyID{"STRING_110210285"}, NestedParties2_NoNested2PartyIDs_29);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_29);
        set_field(noNested2PartyIDs_0_0_2_0, FIX::Nested2PartyRole{1120342409}, NestedParties2_NoNested2PartyIDs_29);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_29);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_55;
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubID{"STRING_1868432317"}, NstdPtys2SubGrp_NoNested2PartySubIDs_55);
          set_field(noNested2PartySubIDs_0_0_0_3_0, FIX::Nested2PartySubIDType{1785503795}, NstdPtys2SubGrp_NoNested2PartySubIDs_55);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_55);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_1;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_56;
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubID{"STRING_1202594086"}, NstdPtys2SubGrp_NoNested2PartySubIDs_56);
          set_field(noNested2PartySubIDs_0_0_0_3_1, FIX::Nested2PartySubIDType{1066365090}, NstdPtys2SubGrp_NoNested2PartySubIDs_56);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_56);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_0_3_2;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_57;
          set_field(noNested2PartySubIDs_0_0_0_3_2, FIX::Nested2PartySubID{"STRING_130228151"}, NstdPtys2SubGrp_NoNested2PartySubIDs_57);
          set_field(noNested2PartySubIDs_0_0_0_3_2, FIX::Nested2PartySubIDType{1296204559}, NstdPtys2SubGrp_NoNested2PartySubIDs_57);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_57);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_0.addGroup(noNested2PartySubIDs_0_0_0_3_2);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs noNested2PartyIDs_0_0_2_1;
        // NestedParties2.NoNested2PartyIDs
        multiset<string> NestedParties2_NoNested2PartyIDs_30;
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyID{"STRING_820022101"}, NestedParties2_NoNested2PartyIDs_30);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_30);
        set_field(noNested2PartyIDs_0_0_2_1, FIX::Nested2PartyRole{1727124193}, NestedParties2_NoNested2PartyIDs_30);
        all_values.push_back(NestedParties2_NoNested2PartyIDs_30);
        all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs");

        // NstdPtys2SubGrp
        // Group NstdPtys2SubGrp.NoNested2PartySubIDs
        {
          FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegAllocs::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_1_3_0;
          // NstdPtys2SubGrp.NoNested2PartySubIDs
          multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_58;
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubID{"STRING_1212587335"}, NstdPtys2SubGrp_NoNested2PartySubIDs_58);
          set_field(noNested2PartySubIDs_0_0_1_3_0, FIX::Nested2PartySubIDType{932426012}, NstdPtys2SubGrp_NoNested2PartySubIDs_58);
          all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_58);
          all_compo_names.insert("...NoLegs...NoLegAllocs...NoNested2PartyIDs...NoNested2PartySubIDs");

          noNested2PartyIDs_0_0_2_1.addGroup(noNested2PartySubIDs_0_0_1_3_0);
        }
        noLegAllocs_0_1_0.addGroup(noNested2PartyIDs_0_0_2_1);
      }
      noLegs_0_0.addGroup(noLegAllocs_0_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_8;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_1493454571"}, LegStipulations_NoLegStipulations_8);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_1087054105"}, LegStipulations_NoLegStipulations_8);
      all_values.push_back(LegStipulations_NoLegStipulations_8);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_9;
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationType{"STRING_420665730"}, LegStipulations_NoLegStipulations_9);
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationValue{"STRING_272602846"}, LegStipulations_NoLegStipulations_9);
      all_values.push_back(LegStipulations_NoLegStipulations_9);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoLegStipulations noLegStipulations_0_1_2;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_10;
      set_field(noLegStipulations_0_1_2, FIX::LegStipulationType{"STRING_20308763"}, LegStipulations_NoLegStipulations_10);
      set_field(noLegStipulations_0_1_2, FIX::LegStipulationValue{"STRING_786210697"}, LegStipulations_NoLegStipulations_10);
      all_values.push_back(LegStipulations_NoLegStipulations_10);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_2);
    }
    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_66;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_959374915"}, NestedParties_NoNestedPartyIDs_66);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_66);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{760326852}, NestedParties_NoNestedPartyIDs_66);
      all_values.push_back(NestedParties_NoNestedPartyIDs_66);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_137;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_293308889"}, NstdPtysSubGrp_NoNestedPartySubIDs_137);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1876221705}, NstdPtysSubGrp_NoNestedPartySubIDs_137);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_137);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_67;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_570508526"}, NestedParties_NoNestedPartyIDs_67);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_67);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{1608263719}, NestedParties_NoNestedPartyIDs_67);
      all_values.push_back(NestedParties_NoNestedPartyIDs_67);
      all_compo_names.insert("...NoLegs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_138;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1109068606"}, NstdPtysSubGrp_NoNestedPartySubIDs_138);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1329212388}, NstdPtysSubGrp_NoNestedPartySubIDs_138);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_138);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoLegs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_139;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_1328871083"}, NstdPtysSubGrp_NoNestedPartySubIDs_139);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{164179044}, NstdPtysSubGrp_NoNestedPartySubIDs_139);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_139);
        all_compo_names.insert("...NoLegs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noLegs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // OrderQtyData
  multiset<string> OrderQtyData_10;
  FIX::CashOrderQty CashOrderQty_10;
  CashOrderQty_10.setString("2480938");
set_field(msg, CashOrderQty_10, OrderQtyData_10);
  FIX::OrderPercent OrderPercent_10;
  OrderPercent_10.setString("92.340000");
set_field(msg, OrderPercent_10, OrderQtyData_10);
  FIX::OrderQty OrderQty_19;
  OrderQty_19.setString("14603836");
set_field(msg, OrderQty_19, OrderQtyData_10);
  set_field(msg, FIX::RoundingDirection{'0'}, OrderQtyData_10);
  FIX::RoundingModulus RoundingModulus_10;
  RoundingModulus_10.setString("1286601");
set_field(msg, RoundingModulus_10, OrderQtyData_10);
  all_values.push_back(OrderQtyData_10);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_73;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1001202097"}, Parties_NoPartyIDs_73);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_73);
    set_field(noPartyIDs_0_0, FIX::PartyRole{47}, Parties_NoPartyIDs_73);
    all_values.push_back(Parties_NoPartyIDs_73);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_147;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_687218395"}, PtysSubGrp_NoPartySubIDs_147);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_147);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_147);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // PegInstructions
  multiset<string> PegInstructions_2;
  set_field(msg, FIX::PegLimitType{1}, PegInstructions_2);
  set_field(msg, FIX::PegMoveType{1}, PegInstructions_2);
  set_field(msg, FIX::PegOffsetType{1}, PegInstructions_2);
  FIX::PegOffsetValue PegOffsetValue_2;
  PegOffsetValue_2.setString("4884082");
set_field(msg, PegOffsetValue_2, PegInstructions_2);
  set_field(msg, FIX::PegPriceType{7}, PegInstructions_2);
  set_field(msg, FIX::PegRoundDirection{1}, PegInstructions_2);
  set_field(msg, FIX::PegScope{4}, PegInstructions_2);
  set_field(msg, FIX::PegSecurityDesc{"STRING_303333962"}, PegInstructions_2);
  set_field(msg, FIX::PegSecurityID{"STRING_1563467319"}, PegInstructions_2);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_301139412"}, PegInstructions_2);
  set_field(msg, FIX::PegSymbol{"STRING_32072019"}, PegInstructions_2);
  all_values.push_back(PegInstructions_2);
  all_compo_names.insert(".");

  // PreAllocMlegGrp
  // Group PreAllocMlegGrp.NoAllocs
  {
    FIX50SP2::MultilegOrderCancelReplace::NoAllocs noAllocs_0_0;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_0;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_704658587"}, PreAllocMlegGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{1640335738}, PreAllocMlegGrp_NoAllocs_0);
    FIX::AllocQty AllocQty_26;
    AllocQty_26.setString("16773431");
set_field(noAllocs_0_0, AllocQty_26, PreAllocMlegGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocSettlCurrency{"GBP"}, PreAllocMlegGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_858730567"}, PreAllocMlegGrp_NoAllocs_0);
    all_values.push_back(PreAllocMlegGrp_NoAllocs_0);
    all_compo_names.insert("...NoAllocs");

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_0_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_3;
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyID{"STRING_1070158309"}, NestedParties3_NoNested3PartyIDs_3);
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyIDSource{'1'}, NestedParties3_NoNested3PartyIDs_3);
      set_field(noNested3PartyIDs_0_1_0, FIX::Nested3PartyRole{1290806192}, NestedParties3_NoNested3PartyIDs_3);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_3);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_6;
        set_field(noNested3PartySubIDs_0_0_2_0, FIX::Nested3PartySubID{"STRING_299006290"}, NstdPtys3SubGrp_NoNested3PartySubIDs_6);
        set_field(noNested3PartySubIDs_0_0_2_0, FIX::Nested3PartySubIDType{183346692}, NstdPtys3SubGrp_NoNested3PartySubIDs_6);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_6);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_0_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_7;
        set_field(noNested3PartySubIDs_0_0_2_1, FIX::Nested3PartySubID{"STRING_991992690"}, NstdPtys3SubGrp_NoNested3PartySubIDs_7);
        set_field(noNested3PartySubIDs_0_0_2_1, FIX::Nested3PartySubIDType{1640253761}, NstdPtys3SubGrp_NoNested3PartySubIDs_7);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_7);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_0_1_0.addGroup(noNested3PartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNested3PartyIDs_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoAllocs noAllocs_0_1;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_1;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_8313205"}, PreAllocMlegGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{273524557}, PreAllocMlegGrp_NoAllocs_1);
    FIX::AllocQty AllocQty_27;
    AllocQty_27.setString("1799885");
set_field(noAllocs_0_1, AllocQty_27, PreAllocMlegGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocSettlCurrency{"CAN"}, PreAllocMlegGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_1139809749"}, PreAllocMlegGrp_NoAllocs_1);
    all_values.push_back(PreAllocMlegGrp_NoAllocs_1);
    all_compo_names.insert("...NoAllocs");

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_4;
      set_field(noNested3PartyIDs_1_1_0, FIX::Nested3PartyID{"STRING_464130451"}, NestedParties3_NoNested3PartyIDs_4);
      set_field(noNested3PartyIDs_1_1_0, FIX::Nested3PartyIDSource{'6'}, NestedParties3_NoNested3PartyIDs_4);
      set_field(noNested3PartyIDs_1_1_0, FIX::Nested3PartyRole{1596883852}, NestedParties3_NoNested3PartyIDs_4);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_4);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_8;
        set_field(noNested3PartySubIDs_1_0_2_0, FIX::Nested3PartySubID{"STRING_986150821"}, NstdPtys3SubGrp_NoNested3PartySubIDs_8);
        set_field(noNested3PartySubIDs_1_0_2_0, FIX::Nested3PartySubIDType{1012867523}, NstdPtys3SubGrp_NoNested3PartySubIDs_8);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_8);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_9;
        set_field(noNested3PartySubIDs_1_0_2_1, FIX::Nested3PartySubID{"STRING_773100387"}, NstdPtys3SubGrp_NoNested3PartySubIDs_9);
        set_field(noNested3PartySubIDs_1_0_2_1, FIX::Nested3PartySubIDType{1018222840}, NstdPtys3SubGrp_NoNested3PartySubIDs_9);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_9);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_0_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_10;
        set_field(noNested3PartySubIDs_1_0_2_2, FIX::Nested3PartySubID{"STRING_999359720"}, NstdPtys3SubGrp_NoNested3PartySubIDs_10);
        set_field(noNested3PartySubIDs_1_0_2_2, FIX::Nested3PartySubIDType{1477758974}, NstdPtys3SubGrp_NoNested3PartySubIDs_10);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_10);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_0.addGroup(noNested3PartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_1_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_5;
      set_field(noNested3PartyIDs_1_1_1, FIX::Nested3PartyID{"STRING_511074930"}, NestedParties3_NoNested3PartyIDs_5);
      set_field(noNested3PartyIDs_1_1_1, FIX::Nested3PartyIDSource{'5'}, NestedParties3_NoNested3PartyIDs_5);
      set_field(noNested3PartyIDs_1_1_1, FIX::Nested3PartyRole{1144002519}, NestedParties3_NoNested3PartyIDs_5);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_5);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_11;
        set_field(noNested3PartySubIDs_1_1_2_0, FIX::Nested3PartySubID{"STRING_1387949772"}, NstdPtys3SubGrp_NoNested3PartySubIDs_11);
        set_field(noNested3PartySubIDs_1_1_2_0, FIX::Nested3PartySubIDType{974425108}, NstdPtys3SubGrp_NoNested3PartySubIDs_11);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_11);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_12;
        set_field(noNested3PartySubIDs_1_1_2_1, FIX::Nested3PartySubID{"STRING_255814069"}, NstdPtys3SubGrp_NoNested3PartySubIDs_12);
        set_field(noNested3PartySubIDs_1_1_2_1, FIX::Nested3PartySubIDType{1558295926}, NstdPtys3SubGrp_NoNested3PartySubIDs_12);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_12);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_1_1_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_13;
        set_field(noNested3PartySubIDs_1_1_2_2, FIX::Nested3PartySubID{"STRING_117747652"}, NstdPtys3SubGrp_NoNested3PartySubIDs_13);
        set_field(noNested3PartySubIDs_1_1_2_2, FIX::Nested3PartySubIDType{246604662}, NstdPtys3SubGrp_NoNested3PartySubIDs_13);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_13);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_1_1_1.addGroup(noNested3PartySubIDs_1_1_2_2);
      }
      noAllocs_0_1.addGroup(noNested3PartyIDs_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoAllocs noAllocs_0_2;
    // PreAllocMlegGrp.NoAllocs
    multiset<string> PreAllocMlegGrp_NoAllocs_2;
    set_field(noAllocs_0_2, FIX::AllocAccount{"STRING_1857302216"}, PreAllocMlegGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::AllocAcctIDSource{301094344}, PreAllocMlegGrp_NoAllocs_2);
    FIX::AllocQty AllocQty_28;
    AllocQty_28.setString("12385973");
set_field(noAllocs_0_2, AllocQty_28, PreAllocMlegGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::AllocSettlCurrency{"USD"}, PreAllocMlegGrp_NoAllocs_2);
    set_field(noAllocs_0_2, FIX::IndividualAllocID{"STRING_1512121910"}, PreAllocMlegGrp_NoAllocs_2);
    all_values.push_back(PreAllocMlegGrp_NoAllocs_2);
    all_compo_names.insert("...NoAllocs");

    // NestedParties3
    // Group NestedParties3.NoNested3PartyIDs
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_2_1_0;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_6;
      set_field(noNested3PartyIDs_2_1_0, FIX::Nested3PartyID{"STRING_1229741373"}, NestedParties3_NoNested3PartyIDs_6);
      set_field(noNested3PartyIDs_2_1_0, FIX::Nested3PartyIDSource{'1'}, NestedParties3_NoNested3PartyIDs_6);
      set_field(noNested3PartyIDs_2_1_0, FIX::Nested3PartyRole{522386940}, NestedParties3_NoNested3PartyIDs_6);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_6);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_0_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_14;
        set_field(noNested3PartySubIDs_2_0_2_0, FIX::Nested3PartySubID{"STRING_1951974516"}, NstdPtys3SubGrp_NoNested3PartySubIDs_14);
        set_field(noNested3PartySubIDs_2_0_2_0, FIX::Nested3PartySubIDType{1205203799}, NstdPtys3SubGrp_NoNested3PartySubIDs_14);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_14);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_0.addGroup(noNested3PartySubIDs_2_0_2_0);
      }
      noAllocs_0_2.addGroup(noNested3PartyIDs_2_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs noNested3PartyIDs_2_1_1;
      // NestedParties3.NoNested3PartyIDs
      multiset<string> NestedParties3_NoNested3PartyIDs_7;
      set_field(noNested3PartyIDs_2_1_1, FIX::Nested3PartyID{"STRING_384321134"}, NestedParties3_NoNested3PartyIDs_7);
      set_field(noNested3PartyIDs_2_1_1, FIX::Nested3PartyIDSource{'2'}, NestedParties3_NoNested3PartyIDs_7);
      set_field(noNested3PartyIDs_2_1_1, FIX::Nested3PartyRole{43870972}, NestedParties3_NoNested3PartyIDs_7);
      all_values.push_back(NestedParties3_NoNested3PartyIDs_7);
      all_compo_names.insert("...NoAllocs...NoNested3PartyIDs");

      // NstdPtys3SubGrp
      // Group NstdPtys3SubGrp.NoNested3PartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_1_2_0;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_15;
        set_field(noNested3PartySubIDs_2_1_2_0, FIX::Nested3PartySubID{"STRING_1049552230"}, NstdPtys3SubGrp_NoNested3PartySubIDs_15);
        set_field(noNested3PartySubIDs_2_1_2_0, FIX::Nested3PartySubIDType{1062093812}, NstdPtys3SubGrp_NoNested3PartySubIDs_15);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_15);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_1.addGroup(noNested3PartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_1_2_1;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_16;
        set_field(noNested3PartySubIDs_2_1_2_1, FIX::Nested3PartySubID{"STRING_249064730"}, NstdPtys3SubGrp_NoNested3PartySubIDs_16);
        set_field(noNested3PartySubIDs_2_1_2_1, FIX::Nested3PartySubIDType{379827556}, NstdPtys3SubGrp_NoNested3PartySubIDs_16);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_16);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_1.addGroup(noNested3PartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoAllocs::NoNested3PartyIDs::NoNested3PartySubIDs noNested3PartySubIDs_2_1_2_2;
        // NstdPtys3SubGrp.NoNested3PartySubIDs
        multiset<string> NstdPtys3SubGrp_NoNested3PartySubIDs_17;
        set_field(noNested3PartySubIDs_2_1_2_2, FIX::Nested3PartySubID{"STRING_1573168742"}, NstdPtys3SubGrp_NoNested3PartySubIDs_17);
        set_field(noNested3PartySubIDs_2_1_2_2, FIX::Nested3PartySubIDType{778283935}, NstdPtys3SubGrp_NoNested3PartySubIDs_17);
        all_values.push_back(NstdPtys3SubGrp_NoNested3PartySubIDs_17);
        all_compo_names.insert("...NoAllocs...NoNested3PartyIDs...NoNested3PartySubIDs");

        noNested3PartyIDs_2_1_1.addGroup(noNested3PartySubIDs_2_1_2_2);
      }
      noAllocs_0_2.addGroup(noNested3PartyIDs_2_1_1);
    }
    msg.addGroup(noAllocs_0_2);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::MultilegOrderCancelReplace::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_5;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_758824502"}, StrategyParametersGrp_NoStrategyParameters_5);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{24}, StrategyParametersGrp_NoStrategyParameters_5);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_350771535"}, StrategyParametersGrp_NoStrategyParameters_5);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_5);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_6;
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterName{"STRING_1014638572"}, StrategyParametersGrp_NoStrategyParameters_6);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterType{3}, StrategyParametersGrp_NoStrategyParameters_6);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterValue{"STRING_468519187"}, StrategyParametersGrp_NoStrategyParameters_6);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_6);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::MultilegOrderCancelReplace::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_4;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_6"}, TrdgSesGrp_NoTradingSessions_4);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_4);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_4);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::MultilegOrderCancelReplace::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_5;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_5);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_1"}, TrdgSesGrp_NoTradingSessions_5);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_5);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_2;
  set_field(msg, FIX::TriggerAction{'3'}, TriggeringInstruction_2);
  FIX::TriggerNewPrice TriggerNewPrice_2;
  TriggerNewPrice_2.setString("18644788");
set_field(msg, TriggerNewPrice_2, TriggeringInstruction_2);
  FIX::TriggerNewQty TriggerNewQty_2;
  TriggerNewQty_2.setString("20195140");
set_field(msg, TriggerNewQty_2, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerOrderType{'2'}, TriggeringInstruction_2);
  FIX::TriggerPrice TriggerPrice_2;
  TriggerPrice_2.setString("12048392");
set_field(msg, TriggerPrice_2, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerPriceDirection{'D'}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerPriceType{'2'}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerPriceTypeScope{'3'}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_1599621166"}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerSecurityID{"STRING_1480520871"}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_1285781978"}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerSymbol{"STRING_1643492138"}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_730225881"}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_187850560"}, TriggeringInstruction_2);
  set_field(msg, FIX::TriggerType{'3'}, TriggeringInstruction_2);
  all_values.push_back(TriggeringInstruction_2);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_62;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_567678116"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{2131271044}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1757574547"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{2091508191}, UnderlyingInstrument_62);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_62;
    UnderlyingAdjustedQuantity_62.setString("7426118");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_62, UnderlyingInstrument_62);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_62;
    UnderlyingAllocationPercent_62.setString("46.070000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_62, UnderlyingInstrument_62);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_62;
    UnderlyingAttachmentPoint_62.setString("60.780000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1757250471"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1205886946"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_763315265"}, UnderlyingInstrument_62);
    FIX::UnderlyingCapValue UnderlyingCapValue_62;
    UnderlyingCapValue_62.setString("8710100");
set_field(noUnderlyings_0_0, UnderlyingCapValue_62, UnderlyingInstrument_62);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_62;
    UnderlyingCashAmount_62.setString("3452678");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_62);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_62;
    UnderlyingContractMultiplier_62.setString("12233669");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{834721090}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_464466230"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_940362197"}, UnderlyingInstrument_62);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_62;
    UnderlyingCouponRate_62.setString("15.170000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_625745037"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_62);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_62;
    UnderlyingCurrentValue_62.setString("17219447");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_62, UnderlyingInstrument_62);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_62;
    UnderlyingDetachmentPoint_62.setString("79.510000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_62, UnderlyingInstrument_62);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_62;
    UnderlyingDirtyPrice_62.setString("5533064");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_62, UnderlyingInstrument_62);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_62;
    UnderlyingEndPrice_62.setString("10549819");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_62, UnderlyingInstrument_62);
    FIX::UnderlyingEndValue UnderlyingEndValue_62;
    UnderlyingEndValue_62.setString("1453462");
set_field(noUnderlyings_0_0, UnderlyingEndValue_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{49314894}, UnderlyingInstrument_62);
    FIX::UnderlyingFXRate UnderlyingFXRate_62;
    UnderlyingFXRate_62.setString("17852078");
set_field(noUnderlyings_0_0, UnderlyingFXRate_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_62);
    FIX::UnderlyingFactor UnderlyingFactor_62;
    UnderlyingFactor_62.setString("6074171");
set_field(noUnderlyings_0_0, UnderlyingFactor_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{617014843}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_900874957"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_591204593"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_227105742"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_844899500"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1333816492"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2003430350"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1139695578"}, UnderlyingInstrument_62);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_62;
    UnderlyingNotionalPercentageOutstanding_62.setString("33.150000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_62);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_62;
    UnderlyingOriginalNotionalPercentageOutstanding_62.setString("8.430000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1814593372"}, UnderlyingInstrument_62);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_62;
    UnderlyingPriceUnitOfMeasureQty_62.setString("14071015");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1288455991}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{890476721}, UnderlyingInstrument_62);
    FIX::UnderlyingPx UnderlyingPx_62;
    UnderlyingPx_62.setString("943389");
set_field(noUnderlyings_0_0, UnderlyingPx_62, UnderlyingInstrument_62);
    FIX::UnderlyingQty UnderlyingQty_62;
    UnderlyingQty_62.setString("17529222");
set_field(noUnderlyings_0_0, UnderlyingQty_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1830838918"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_801090460"}, UnderlyingInstrument_62);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_62;
    UnderlyingRepurchaseRate_62.setString("36.100000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1828556734}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1902259345"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1953128384"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_688121037"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_308082101"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_860626734"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_833467318"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_357396995"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_498350965"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1166664159"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_62);
    FIX::UnderlyingStartValue UnderlyingStartValue_62;
    UnderlyingStartValue_62.setString("11153658");
set_field(noUnderlyings_0_0, UnderlyingStartValue_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2067539116"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_62);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_62;
    UnderlyingStrikePrice_62.setString("7649549");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_742351628"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1198418252"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1904650546"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1685934943"}, UnderlyingInstrument_62);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_62;
    UnderlyingUnitOfMeasureQty_62.setString("1127682");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_62, UnderlyingInstrument_62);
    all_values.push_back(UnderlyingInstrument_62);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_129;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1353044668"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_129);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1519869753"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_129);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_129);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_130;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_801150085"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_130);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_96037741"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_130);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_130);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_122;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_406588658"}, UnderlyingStipulations_NoUnderlyingStips_122);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1926876659"}, UnderlyingStipulations_NoUnderlyingStips_122);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_122);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_123;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_267815509"}, UnderlyingStipulations_NoUnderlyingStips_123);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_637772269"}, UnderlyingStipulations_NoUnderlyingStips_123);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_123);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_134;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_22591206"}, UndlyInstrumentParties_NoUndlyInstrumentParties_134);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_134);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{148587135}, UndlyInstrumentParties_NoUndlyInstrumentParties_134);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_134);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1304043739"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{982054454}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_688070302"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1802394704}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1234965"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1652884494}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_135;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_770276864"}, UndlyInstrumentParties_NoUndlyInstrumentParties_135);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_135);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1061419630}, UndlyInstrumentParties_NoUndlyInstrumentParties_135);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_135);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_686245402"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1803771259}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1163683019"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{443412301}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1342222554"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1276451272}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_136;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_2103590042"}, UndlyInstrumentParties_NoUndlyInstrumentParties_136);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_136);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{648837377}, UndlyInstrumentParties_NoUndlyInstrumentParties_136);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_136);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_643821315"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{115562426}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MultilegOrderCancelReplace::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1163845138"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{423214327}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // header
  multiset<string> header_48;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_5"}, header_48);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1801617407"}, header_48);
  set_header_field(msg.getHeader(), FIX::BodyLength{2031164073}, header_48);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_405969141"}, header_48);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_97550764"}, header_48);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_32267560"}, header_48);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_736642449"}, header_48);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1401594504}, header_48);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_48);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1424712751}, header_48);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1056505560"}, header_48);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1015556980"}, header_48);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_930113597"}, header_48);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(22, 28, 12, 16, 4, 2015)}, header_48);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_48);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_48);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_2084697835"}, header_48);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{2022611512}, header_48);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1390343320"}, header_48);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_586051565"}, header_48);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_632384343"}, header_48);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(7, 1, 54, 18, 5, 2013)}, header_48);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1490961067"}, header_48);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1547914005"}, header_48);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_225843300"}, header_48);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_80119868"}, header_48);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{802024861}, header_48);
  all_values.push_back(header_48);
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
