#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NewOrderList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderList, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::NewOrderList msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderList_0;
  set_field(msg, FIX::AllowableOneSidednessCurr{"EUR"}, NewOrderList_0);
  FIX::AllowableOneSidednessPct AllowableOneSidednessPct_0;
  AllowableOneSidednessPct_0.setString("50.660000");
set_field(msg, AllowableOneSidednessPct_0, NewOrderList_0);
  FIX::AllowableOneSidednessValue AllowableOneSidednessValue_0;
  AllowableOneSidednessValue_0.setString("12342934");
set_field(msg, AllowableOneSidednessValue_0, NewOrderList_0);
  set_field(msg, FIX::BidID{"STRING_813051638"}, NewOrderList_0);
  set_field(msg, FIX::BidType{2}, NewOrderList_0);
  set_field(msg, FIX::CancellationRights{'Y'}, NewOrderList_0);
  set_field(msg, FIX::ClientBidID{"STRING_1695611467"}, NewOrderList_0);
  set_field(msg, FIX::ContingencyType{2}, NewOrderList_0);
  set_field(msg, FIX::EncodedListExecInst{"DATA_414620559"}, NewOrderList_0);
  set_field(msg, FIX::EncodedListExecInstLen{1689211252}, NewOrderList_0);
  set_field(msg, FIX::LastFragment{false}, NewOrderList_0);
  set_field(msg, FIX::ListExecInst{"STRING_588624771"}, NewOrderList_0);
  set_field(msg, FIX::ListExecInstType{'3'}, NewOrderList_0);
  set_field(msg, FIX::ListID{"STRING_637182244"}, NewOrderList_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'N'}, NewOrderList_0);
  set_field(msg, FIX::ProgPeriodInterval{1800155812}, NewOrderList_0);
  set_field(msg, FIX::ProgRptReqs{1}, NewOrderList_0);
  set_field(msg, FIX::RegistID{"STRING_2039718776"}, NewOrderList_0);
  set_field(msg, FIX::TotNoOrders{1161324934}, NewOrderList_0);
  all_values.push_back(NewOrderList_0);

  all_compo_names.insert("NewOrderList");

  // ListOrdGrp
  // Group ListOrdGrp.NoOrders
  {
    FIX50SP2::NewOrderList::NoOrders noOrders_0_0;
    // ListOrdGrp.NoOrders
    multiset<string> ListOrdGrp_NoOrders_0;
    set_field(noOrders_0_0, FIX::Account{"STRING_1706848460"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::AccountType{2}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::AcctIDSource{99}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::AllocID{"STRING_1965108535"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::BookingType{1}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::BookingUnit{'2'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::CashMargin{'1'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_1813379231"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ClOrdLinkID{"STRING_43056224"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ClearingFeeIndicator{"STRING_H"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ComplianceID{"STRING_837518684"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::CoveredOrUncovered{1}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::Currency{"GBP"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::CustOrderCapacity{2}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::DayBookingInst{'0'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::Designation{"STRING_1302463810"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::EffectiveTime{FIX::UTCTIMESTAMP(12, 50, 1, 19, 10, 2000)}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::EncodedText{"DATA_1059717943"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::EncodedTextLen{2005845924}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ExDestination{"EXCHANGE_152805854"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ExDestinationIDSource{'C'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ExecInst{"MULTIPLECHARVALUE_S"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ExpireDate{"LOCALMKTDATE_1314130789"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(0, 18, 48, 3, 9, 2005)}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ForexReq{false}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::GTBookingInst{2}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::HandlInst{'2'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::IOIID{"STRING_1391548119"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ListSeqNo{1136026843}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::LocateReqd{true}, ListOrdGrp_NoOrders_0);
    FIX::MatchIncrement MatchIncrement_4;
    MatchIncrement_4.setString("14228288");
set_field(noOrders_0_0, MatchIncrement_4, ListOrdGrp_NoOrders_0);
    FIX::MaxFloor MaxFloor_4;
    MaxFloor_4.setString("10603552");
set_field(noOrders_0_0, MaxFloor_4, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::MaxPriceLevels{1852995749}, ListOrdGrp_NoOrders_0);
    FIX::MaxShow MaxShow_4;
    MaxShow_4.setString("19390314");
set_field(noOrders_0_0, MaxShow_4, ListOrdGrp_NoOrders_0);
    FIX::MinQty MinQty_10;
    MinQty_10.setString("2153354");
set_field(noOrders_0_0, MinQty_10, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrdType{'F'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrderCapacity{'W'}, ListOrdGrp_NoOrders_0);
    FIX::OrderQty2 OrderQty2_13;
    OrderQty2_13.setString("19324198");
set_field(noOrders_0_0, OrderQty2_13, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_3"}, ListOrdGrp_NoOrders_0);
    FIX::ParticipationRate ParticipationRate_4;
    ParticipationRate_4.setString("80.640000");
set_field(noOrders_0_0, ParticipationRate_4, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::PositionEffect{'R'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::PreTradeAnonymity{true}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::PreallocMethod{'1'}, ListOrdGrp_NoOrders_0);
    FIX::PrevClosePx PrevClosePx_4;
    PrevClosePx_4.setString("19490075");
set_field(noOrders_0_0, PrevClosePx_4, ListOrdGrp_NoOrders_0);
    FIX::Price Price_14;
    Price_14.setString("1962965");
set_field(noOrders_0_0, Price_14, ListOrdGrp_NoOrders_0);
    FIX::Price2 Price2_0;
    Price2_0.setString("14783293");
set_field(noOrders_0_0, Price2_0, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::PriceProtectionScope{'3'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::PriceType{18}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ProcessCode{'3'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::QtyType{0}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::QuoteID{"STRING_1008517928"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::RefOrderID{"STRING_1049719890"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::RefOrderIDSource{'3'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_1641130504"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SettlCurrency{"EUR"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SettlDate{"LOCALMKTDATE_1939638663"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SettlDate2{"LOCALMKTDATE_1791551476"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SettlInstMode{'5'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SettlType{"STRING_2"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::Side{'D'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SideValueInd{2}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SolicitedFlag{true}, ListOrdGrp_NoOrders_0);
    FIX::StopPx StopPx_4;
    StopPx_4.setString("6026448");
set_field(noOrders_0_0, StopPx_4, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::TargetStrategy{3}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::TargetStrategyParameters{"STRING_56388960"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::Text{"STRING_456215600"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::TimeInForce{'5'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::TradeDate{"LOCALMKTDATE_1988808786"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::TradeOriginationDate{"LOCALMKTDATE_2147056252"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(1, 39, 28, 12, 1, 2006)}, ListOrdGrp_NoOrders_0);
    all_values.push_back(ListOrdGrp_NoOrders_0);
    all_compo_names.insert("...NoOrders");

    // CommissionData
    multiset<string> CommissionData_19;
    set_field(noOrders_0_0, FIX::CommCurrency{"JPY"}, CommissionData_19);
    set_field(noOrders_0_0, FIX::CommType{'1'}, CommissionData_19);
    FIX::Commission Commission_19;
    Commission_19.setString("1476993");
set_field(noOrders_0_0, Commission_19, CommissionData_19);
    set_field(noOrders_0_0, FIX::FundRenewWaiv{'N'}, CommissionData_19);
    all_values.push_back(CommissionData_19);
    all_compo_names.insert("...NoOrders.");

    // DiscretionInstructions
    multiset<string> DiscretionInstructions_4;
    set_field(noOrders_0_0, FIX::DiscretionInst{'7'}, DiscretionInstructions_4);
    set_field(noOrders_0_0, FIX::DiscretionLimitType{1}, DiscretionInstructions_4);
    set_field(noOrders_0_0, FIX::DiscretionMoveType{0}, DiscretionInstructions_4);
    set_field(noOrders_0_0, FIX::DiscretionOffsetType{2}, DiscretionInstructions_4);
    FIX::DiscretionOffsetValue DiscretionOffsetValue_4;
    DiscretionOffsetValue_4.setString("6436867");
set_field(noOrders_0_0, DiscretionOffsetValue_4, DiscretionInstructions_4);
    set_field(noOrders_0_0, FIX::DiscretionRoundDirection{2}, DiscretionInstructions_4);
    set_field(noOrders_0_0, FIX::DiscretionScope{4}, DiscretionInstructions_4);
    all_values.push_back(DiscretionInstructions_4);
    all_compo_names.insert("...NoOrders.");

    // DisplayInstruction
    multiset<string> DisplayInstruction_4;
    FIX::DisplayHighQty DisplayHighQty_4;
    DisplayHighQty_4.setString("2465843");
set_field(noOrders_0_0, DisplayHighQty_4, DisplayInstruction_4);
    FIX::DisplayLowQty DisplayLowQty_4;
    DisplayLowQty_4.setString("8248051");
set_field(noOrders_0_0, DisplayLowQty_4, DisplayInstruction_4);
    set_field(noOrders_0_0, FIX::DisplayMethod{'4'}, DisplayInstruction_4);
    FIX::DisplayMinIncr DisplayMinIncr_4;
    DisplayMinIncr_4.setString("12723107");
set_field(noOrders_0_0, DisplayMinIncr_4, DisplayInstruction_4);
    FIX::DisplayQty DisplayQty_4;
    DisplayQty_4.setString("6658586");
set_field(noOrders_0_0, DisplayQty_4, DisplayInstruction_4);
    set_field(noOrders_0_0, FIX::DisplayWhen{'2'}, DisplayInstruction_4);
    FIX::RefreshQty RefreshQty_4;
    RefreshQty_4.setString("20895849");
set_field(noOrders_0_0, RefreshQty_4, DisplayInstruction_4);
    FIX::SecondaryDisplayQty SecondaryDisplayQty_4;
    SecondaryDisplayQty_4.setString("7222476");
set_field(noOrders_0_0, SecondaryDisplayQty_4, DisplayInstruction_4);
    all_values.push_back(DisplayInstruction_4);
    all_compo_names.insert("...NoOrders.");

    // Instrument
    multiset<string> Instrument_49;
    FIX::AttachmentPoint AttachmentPoint_49;
    AttachmentPoint_49.setString("68.540000");
set_field(noOrders_0_0, AttachmentPoint_49, Instrument_49);
    set_field(noOrders_0_0, FIX::CFICode{"STRING_678487951"}, Instrument_49);
    set_field(noOrders_0_0, FIX::CPProgram{1}, Instrument_49);
    set_field(noOrders_0_0, FIX::CPRegType{"STRING_414309458"}, Instrument_49);
    FIX::CapPrice CapPrice_49;
    CapPrice_49.setString("17565226");
set_field(noOrders_0_0, CapPrice_49, Instrument_49);
    FIX::ContractMultiplier ContractMultiplier_49;
    ContractMultiplier_49.setString("3480596");
set_field(noOrders_0_0, ContractMultiplier_49, Instrument_49);
    set_field(noOrders_0_0, FIX::ContractMultiplierUnit{2}, Instrument_49);
    set_field(noOrders_0_0, FIX::ContractSettlMonth{"MONTHYEAR_2088439648"}, Instrument_49);
    set_field(noOrders_0_0, FIX::CountryOfIssue{"COUNTRY_2081554010"}, Instrument_49);
    set_field(noOrders_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_696732605"}, Instrument_49);
    FIX::CouponRate CouponRate_49;
    CouponRate_49.setString("23.620000");
set_field(noOrders_0_0, CouponRate_49, Instrument_49);
    set_field(noOrders_0_0, FIX::CreditRating{"STRING_1219686117"}, Instrument_49);
    set_field(noOrders_0_0, FIX::DatedDate{"LOCALMKTDATE_299036143"}, Instrument_49);
    FIX::DetachmentPoint DetachmentPoint_49;
    DetachmentPoint_49.setString("61.990000");
set_field(noOrders_0_0, DetachmentPoint_49, Instrument_49);
    set_field(noOrders_0_0, FIX::EncodedIssuer{"DATA_1367385439"}, Instrument_49);
    set_field(noOrders_0_0, FIX::EncodedIssuerLen{909857609}, Instrument_49);
    set_field(noOrders_0_0, FIX::EncodedSecurityDesc{"DATA_1975069926"}, Instrument_49);
    set_field(noOrders_0_0, FIX::EncodedSecurityDescLen{1652239080}, Instrument_49);
    set_field(noOrders_0_0, FIX::ExerciseStyle{2}, Instrument_49);
    FIX::Factor Factor_49;
    Factor_49.setString("7897457");
set_field(noOrders_0_0, Factor_49, Instrument_49);
    set_field(noOrders_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_49);
    set_field(noOrders_0_0, FIX::FlexibleIndicator{true}, Instrument_49);
    FIX::FloorPrice FloorPrice_49;
    FloorPrice_49.setString("13959730");
set_field(noOrders_0_0, FloorPrice_49, Instrument_49);
    set_field(noOrders_0_0, FIX::FlowScheduleType{2}, Instrument_49);
    set_field(noOrders_0_0, FIX::InstrRegistry{"STRING_1735754464"}, Instrument_49);
    set_field(noOrders_0_0, FIX::InstrmtAssignmentMethod{'7'}, Instrument_49);
    set_field(noOrders_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1667337231"}, Instrument_49);
    set_field(noOrders_0_0, FIX::IssueDate{"LOCALMKTDATE_254129515"}, Instrument_49);
    set_field(noOrders_0_0, FIX::Issuer{"STRING_710370712"}, Instrument_49);
    set_field(noOrders_0_0, FIX::ListMethod{1}, Instrument_49);
    set_field(noOrders_0_0, FIX::LocaleOfIssue{"STRING_976377175"}, Instrument_49);
    set_field(noOrders_0_0, FIX::MaturityDate{"LOCALMKTDATE_1125107566"}, Instrument_49);
    set_field(noOrders_0_0, FIX::MaturityMonthYear{"MONTHYEAR_140442880"}, Instrument_49);
    set_field(noOrders_0_0, FIX::MaturityTime{"TZTIMEONLY_1539949972"}, Instrument_49);
    FIX::MinPriceIncrement MinPriceIncrement_49;
    MinPriceIncrement_49.setString("15394170");
set_field(noOrders_0_0, MinPriceIncrement_49, Instrument_49);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_49;
    MinPriceIncrementAmount_49.setString("18969655");
set_field(noOrders_0_0, MinPriceIncrementAmount_49, Instrument_49);
    set_field(noOrders_0_0, FIX::NTPositionLimit{1888009579}, Instrument_49);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_49;
    NotionalPercentageOutstanding_49.setString("97.820000");
set_field(noOrders_0_0, NotionalPercentageOutstanding_49, Instrument_49);
    set_field(noOrders_0_0, FIX::OptAttribute{'1'}, Instrument_49);
    FIX::OptPayoutAmount OptPayoutAmount_49;
    OptPayoutAmount_49.setString("18220799");
set_field(noOrders_0_0, OptPayoutAmount_49, Instrument_49);
    set_field(noOrders_0_0, FIX::OptPayoutType{2}, Instrument_49);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_49;
    OriginalNotionalPercentageOutstanding_49.setString("2.150000");
set_field(noOrders_0_0, OriginalNotionalPercentageOutstanding_49, Instrument_49);
    set_field(noOrders_0_0, FIX::Pool{"STRING_894282411"}, Instrument_49);
    set_field(noOrders_0_0, FIX::PositionLimit{845074883}, Instrument_49);
    set_field(noOrders_0_0, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_49);
    set_field(noOrders_0_0, FIX::PriceUnitOfMeasure{"STRING_114184202"}, Instrument_49);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_49;
    PriceUnitOfMeasureQty_49.setString("17549324");
set_field(noOrders_0_0, PriceUnitOfMeasureQty_49, Instrument_49);
    set_field(noOrders_0_0, FIX::Product{5}, Instrument_49);
    set_field(noOrders_0_0, FIX::ProductComplex{"STRING_1766423282"}, Instrument_49);
    set_field(noOrders_0_0, FIX::PutOrCall{0}, Instrument_49);
    set_field(noOrders_0_0, FIX::RedemptionDate{"LOCALMKTDATE_1249764796"}, Instrument_49);
    set_field(noOrders_0_0, FIX::RepoCollateralSecurityType{"STRING_1914865452"}, Instrument_49);
    FIX::RepurchaseRate RepurchaseRate_49;
    RepurchaseRate_49.setString("40.450000");
set_field(noOrders_0_0, RepurchaseRate_49, Instrument_49);
    set_field(noOrders_0_0, FIX::RepurchaseTerm{498254204}, Instrument_49);
    set_field(noOrders_0_0, FIX::RestructuringType{"STRING_MR"}, Instrument_49);
    set_field(noOrders_0_0, FIX::SecurityDesc{"STRING_1120994861"}, Instrument_49);
    set_field(noOrders_0_0, FIX::SecurityExchange{"EXCHANGE_1250103663"}, Instrument_49);
    set_field(noOrders_0_0, FIX::SecurityGroup{"STRING_1829745512"}, Instrument_49);
    set_field(noOrders_0_0, FIX::SecurityID{"STRING_1375124376"}, Instrument_49);
    set_field(noOrders_0_0, FIX::SecurityIDSource{"STRING_E"}, Instrument_49);
    set_field(noOrders_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_49);
    set_field(noOrders_0_0, FIX::SecuritySubType{"STRING_204017903"}, Instrument_49);
    set_field(noOrders_0_0, FIX::SecurityType{"STRING_CL"}, Instrument_49);
    set_field(noOrders_0_0, FIX::Seniority{"STRING_SD"}, Instrument_49);
    set_field(noOrders_0_0, FIX::SettlMethod{'C'}, Instrument_49);
    set_field(noOrders_0_0, FIX::SettleOnOpenFlag{"STRING_330031671"}, Instrument_49);
    set_field(noOrders_0_0, FIX::StateOrProvinceOfIssue{"STRING_1181625173"}, Instrument_49);
    set_field(noOrders_0_0, FIX::StrikeCurrency{"EUR"}, Instrument_49);
    FIX::StrikeMultiplier StrikeMultiplier_49;
    StrikeMultiplier_49.setString("8720630");
set_field(noOrders_0_0, StrikeMultiplier_49, Instrument_49);
    FIX::StrikePrice StrikePrice_49;
    StrikePrice_49.setString("11590901");
set_field(noOrders_0_0, StrikePrice_49, Instrument_49);
    set_field(noOrders_0_0, FIX::StrikePriceBoundaryMethod{1}, Instrument_49);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_49;
    StrikePriceBoundaryPrecision_49.setString("95.930000");
set_field(noOrders_0_0, StrikePriceBoundaryPrecision_49, Instrument_49);
    set_field(noOrders_0_0, FIX::StrikePriceDeterminationMethod{4}, Instrument_49);
    FIX::StrikeValue StrikeValue_49;
    StrikeValue_49.setString("15704514");
set_field(noOrders_0_0, StrikeValue_49, Instrument_49);
    set_field(noOrders_0_0, FIX::Symbol{"STRING_798652359"}, Instrument_49);
    set_field(noOrders_0_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_49);
    set_field(noOrders_0_0, FIX::TimeUnit{"STRING_Mo"}, Instrument_49);
    set_field(noOrders_0_0, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_49);
    set_field(noOrders_0_0, FIX::UnitOfMeasure{"STRING_Bcf"}, Instrument_49);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_49;
    UnitOfMeasureQty_49.setString("17996750");
set_field(noOrders_0_0, UnitOfMeasureQty_49, Instrument_49);
    set_field(noOrders_0_0, FIX::ValuationMethod{"STRING_FUT"}, Instrument_49);
    all_values.push_back(Instrument_49);
    all_compo_names.insert("...NoOrders.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_97;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_97);
      FIX::ComplexEventPrice ComplexEventPrice_97;
      ComplexEventPrice_97.setString("8592067");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_97, ComplexEvents_NoComplexEvents_97);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_97);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_97;
      ComplexEventPriceBoundaryPrecision_97.setString("66.600000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_97, ComplexEvents_NoComplexEvents_97);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_97);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_97);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_97;
      ComplexOptPayoutAmount_97.setString("15335510");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_97, ComplexEvents_NoComplexEvents_97);
      all_values.push_back(ComplexEvents_NoComplexEvents_97);
      all_compo_names.insert("...NoOrders....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_191;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 52, 14, 0, 8, 2017)}, ComplexEventDates_NoComplexEventDates_191);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 45, 8, 14, 7, 2017)}, ComplexEventDates_NoComplexEventDates_191);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_191);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_386;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 41, 32)}, ComplexEventTimes_NoComplexEventTimes_386);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 16, 23)}, ComplexEventTimes_NoComplexEventTimes_386);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_386);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_387;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 9, 51)}, ComplexEventTimes_NoComplexEventTimes_387);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 40, 40)}, ComplexEventTimes_NoComplexEventTimes_387);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_387);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_388;
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 32, 27)}, ComplexEventTimes_NoComplexEventTimes_388);
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 18, 1)}, ComplexEventTimes_NoComplexEventTimes_388);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_388);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_192;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 9, 21, 6, 1, 2006)}, ComplexEventDates_NoComplexEventDates_192);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 29, 20, 16, 2, 2006)}, ComplexEventDates_NoComplexEventDates_192);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_192);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_389;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 4, 27)}, ComplexEventTimes_NoComplexEventTimes_389);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 0, 22)}, ComplexEventTimes_NoComplexEventTimes_389);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_389);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_390;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 46, 57)}, ComplexEventTimes_NoComplexEventTimes_390);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 7, 7)}, ComplexEventTimes_NoComplexEventTimes_390);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_390);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_193;
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 8, 14, 18, 10, 2008)}, ComplexEventDates_NoComplexEventDates_193);
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 32, 18, 7, 2, 2005)}, ComplexEventDates_NoComplexEventDates_193);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_193);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_391;
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 50, 32)}, ComplexEventTimes_NoComplexEventTimes_391);
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 32, 55)}, ComplexEventTimes_NoComplexEventTimes_391);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_391);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noOrders_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_98;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_98);
      FIX::ComplexEventPrice ComplexEventPrice_98;
      ComplexEventPrice_98.setString("12761405");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_98, ComplexEvents_NoComplexEvents_98);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_98);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_98;
      ComplexEventPriceBoundaryPrecision_98.setString("58.140000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_98, ComplexEvents_NoComplexEvents_98);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_98);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_98);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_98;
      ComplexOptPayoutAmount_98.setString("4545482");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_98, ComplexEvents_NoComplexEvents_98);
      all_values.push_back(ComplexEvents_NoComplexEvents_98);
      all_compo_names.insert("...NoOrders....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_194;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 48, 32, 19, 2, 2005)}, ComplexEventDates_NoComplexEventDates_194);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 59, 56, 19, 1, 2017)}, ComplexEventDates_NoComplexEventDates_194);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_194);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_392;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 11, 13)}, ComplexEventTimes_NoComplexEventTimes_392);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 38, 10)}, ComplexEventTimes_NoComplexEventTimes_392);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_392);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noOrders_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_106;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1384606323"}, EvntGrp_NoEvents_106);
      FIX::EventPx EventPx_106;
      EventPx_106.setString("20870935");
set_field(noEvents_0_1_0, EventPx_106, EvntGrp_NoEvents_106);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1373802639"}, EvntGrp_NoEvents_106);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(9, 21, 59, 3, 11, 2003)}, EvntGrp_NoEvents_106);
      set_field(noEvents_0_1_0, FIX::EventType{1}, EvntGrp_NoEvents_106);
      all_values.push_back(EvntGrp_NoEvents_106);
      all_compo_names.insert("...NoOrders....NoEvents");

      noOrders_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_107;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_54299318"}, EvntGrp_NoEvents_107);
      FIX::EventPx EventPx_107;
      EventPx_107.setString("19617320");
set_field(noEvents_0_1_1, EventPx_107, EvntGrp_NoEvents_107);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_410138007"}, EvntGrp_NoEvents_107);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(0, 26, 11, 3, 7, 2002)}, EvntGrp_NoEvents_107);
      set_field(noEvents_0_1_1, FIX::EventType{9}, EvntGrp_NoEvents_107);
      all_values.push_back(EvntGrp_NoEvents_107);
      all_compo_names.insert("...NoOrders....NoEvents");

      noOrders_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_94;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_128089272"}, InstrumentParties_NoInstrumentParties_94);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_94);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1963730740}, InstrumentParties_NoInstrumentParties_94);
      all_values.push_back(InstrumentParties_NoInstrumentParties_94);
      all_compo_names.insert("...NoOrders....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_627041770"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{2072196498}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_193);
        all_compo_names.insert("...NoOrders....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_100;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_1853768595"}, SecAltIDGrp_NoSecurityAltID_100);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1309319174"}, SecAltIDGrp_NoSecurityAltID_100);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_100);
      all_compo_names.insert("...NoOrders....NoSecurityAltID");

      noOrders_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_101;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_1042565060"}, SecAltIDGrp_NoSecurityAltID_101);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_1080087586"}, SecAltIDGrp_NoSecurityAltID_101);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_101);
      all_compo_names.insert("...NoOrders....NoSecurityAltID");

      noOrders_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_98;
    set_field(noOrders_0_0, FIX::SecurityXML{"XMLDATA_1951794821"}, SecurityXML_98);
    set_field(noOrders_0_0, FIX::SecurityXMLLen{1989866669}, SecurityXML_98);
    set_field(noOrders_0_0, FIX::SecurityXMLSchema{"STRING_760954859"}, SecurityXML_98);
    all_values.push_back(SecurityXML_98);
    all_compo_names.insert("...NoOrders..");

    // OrderQtyData
    multiset<string> OrderQtyData_14;
    FIX::CashOrderQty CashOrderQty_14;
    CashOrderQty_14.setString("642338");
set_field(noOrders_0_0, CashOrderQty_14, OrderQtyData_14);
    FIX::OrderPercent OrderPercent_14;
    OrderPercent_14.setString("57.290000");
set_field(noOrders_0_0, OrderPercent_14, OrderQtyData_14);
    FIX::OrderQty OrderQty_23;
    OrderQty_23.setString("19381019");
set_field(noOrders_0_0, OrderQty_23, OrderQtyData_14);
    set_field(noOrders_0_0, FIX::RoundingDirection{'2'}, OrderQtyData_14);
    FIX::RoundingModulus RoundingModulus_14;
    RoundingModulus_14.setString("20072345");
set_field(noOrders_0_0, RoundingModulus_14, OrderQtyData_14);
    all_values.push_back(OrderQtyData_14);
    all_compo_names.insert("...NoOrders.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_81;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_28464583"}, Parties_NoPartyIDs_81);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_81);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{16}, Parties_NoPartyIDs_81);
      all_values.push_back(Parties_NoPartyIDs_81);
      all_compo_names.insert("...NoOrders...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_162;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_1844570554"}, PtysSubGrp_NoPartySubIDs_162);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_162);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_162);
        all_compo_names.insert("...NoOrders...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_163;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_1135291270"}, PtysSubGrp_NoPartySubIDs_163);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_163);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_163);
        all_compo_names.insert("...NoOrders...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_82;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_1320063513"}, Parties_NoPartyIDs_82);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_82);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{85}, Parties_NoPartyIDs_82);
      all_values.push_back(Parties_NoPartyIDs_82);
      all_compo_names.insert("...NoOrders...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_164;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_607380462"}, PtysSubGrp_NoPartySubIDs_164);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_164);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_164);
        all_compo_names.insert("...NoOrders...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_83;
      set_field(noPartyIDs_0_1_2, FIX::PartyID{"STRING_1958920453"}, Parties_NoPartyIDs_83);
      set_field(noPartyIDs_0_1_2, FIX::PartyIDSource{'G'}, Parties_NoPartyIDs_83);
      set_field(noPartyIDs_0_1_2, FIX::PartyRole{68}, Parties_NoPartyIDs_83);
      all_values.push_back(Parties_NoPartyIDs_83);
      all_compo_names.insert("...NoOrders...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_165;
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubID{"STRING_940707179"}, PtysSubGrp_NoPartySubIDs_165);
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_165);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_165);
        all_compo_names.insert("...NoOrders...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // PegInstructions
    multiset<string> PegInstructions_4;
    set_field(noOrders_0_0, FIX::PegLimitType{0}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegMoveType{1}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegOffsetType{1}, PegInstructions_4);
    FIX::PegOffsetValue PegOffsetValue_4;
    PegOffsetValue_4.setString("17993400");
set_field(noOrders_0_0, PegOffsetValue_4, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegPriceType{1}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegRoundDirection{1}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegScope{2}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegSecurityDesc{"STRING_424884326"}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegSecurityID{"STRING_617482733"}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegSecurityIDSource{"STRING_271443046"}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegSymbol{"STRING_269801993"}, PegInstructions_4);
    all_values.push_back(PegInstructions_4);
    all_compo_names.insert("...NoOrders.");

    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_17;
      set_field(noAllocs_0_1_0, FIX::AllocAccount{"STRING_541331994"}, PreAllocGrp_NoAllocs_17);
      set_field(noAllocs_0_1_0, FIX::AllocAcctIDSource{2054620064}, PreAllocGrp_NoAllocs_17);
      FIX::AllocQty AllocQty_34;
      AllocQty_34.setString("11848418");
set_field(noAllocs_0_1_0, AllocQty_34, PreAllocGrp_NoAllocs_17);
      set_field(noAllocs_0_1_0, FIX::AllocSettlCurrency{"EUR"}, PreAllocGrp_NoAllocs_17);
      set_field(noAllocs_0_1_0, FIX::IndividualAllocID{"STRING_172649483"}, PreAllocGrp_NoAllocs_17);
      all_values.push_back(PreAllocGrp_NoAllocs_17);
      all_compo_names.insert("...NoOrders...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_79;
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyID{"STRING_250848476"}, NestedParties_NoNestedPartyIDs_79);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_79);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyRole{940776079}, NestedParties_NoNestedPartyIDs_79);
        all_values.push_back(NestedParties_NoNestedPartyIDs_79);
        all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_166;
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubID{"STRING_1146862315"}, NstdPtysSubGrp_NoNestedPartySubIDs_166);
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubIDType{241465651}, NstdPtysSubGrp_NoNestedPartySubIDs_166);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_166);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_167;
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubID{"STRING_1510438066"}, NstdPtysSubGrp_NoNestedPartySubIDs_167);
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubIDType{233800900}, NstdPtysSubGrp_NoNestedPartySubIDs_167);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_167);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_168;
          set_field(noNestedPartySubIDs_0_0_0_3_2, FIX::NestedPartySubID{"STRING_1614351721"}, NstdPtysSubGrp_NoNestedPartySubIDs_168);
          set_field(noNestedPartySubIDs_0_0_0_3_2, FIX::NestedPartySubIDType{277346361}, NstdPtysSubGrp_NoNestedPartySubIDs_168);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_168);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_2);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_80;
        set_field(noNestedPartyIDs_0_0_2_1, FIX::NestedPartyID{"STRING_1174508079"}, NestedParties_NoNestedPartyIDs_80);
        set_field(noNestedPartyIDs_0_0_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_80);
        set_field(noNestedPartyIDs_0_0_2_1, FIX::NestedPartyRole{86819716}, NestedParties_NoNestedPartyIDs_80);
        all_values.push_back(NestedParties_NoNestedPartyIDs_80);
        all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_169;
          set_field(noNestedPartySubIDs_0_0_1_3_0, FIX::NestedPartySubID{"STRING_340622438"}, NstdPtysSubGrp_NoNestedPartySubIDs_169);
          set_field(noNestedPartySubIDs_0_0_1_3_0, FIX::NestedPartySubIDType{1886159740}, NstdPtysSubGrp_NoNestedPartySubIDs_169);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_169);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_170;
          set_field(noNestedPartySubIDs_0_0_1_3_1, FIX::NestedPartySubID{"STRING_1682085173"}, NstdPtysSubGrp_NoNestedPartySubIDs_170);
          set_field(noNestedPartySubIDs_0_0_1_3_1, FIX::NestedPartySubIDType{743889020}, NstdPtysSubGrp_NoNestedPartySubIDs_170);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_170);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_171;
          set_field(noNestedPartySubIDs_0_0_1_3_2, FIX::NestedPartySubID{"STRING_150368198"}, NstdPtysSubGrp_NoNestedPartySubIDs_171);
          set_field(noNestedPartySubIDs_0_0_1_3_2, FIX::NestedPartySubIDType{2106969499}, NstdPtysSubGrp_NoNestedPartySubIDs_171);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_171);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_2);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_18;
      set_field(noAllocs_0_1_1, FIX::AllocAccount{"STRING_1361371754"}, PreAllocGrp_NoAllocs_18);
      set_field(noAllocs_0_1_1, FIX::AllocAcctIDSource{421811244}, PreAllocGrp_NoAllocs_18);
      FIX::AllocQty AllocQty_35;
      AllocQty_35.setString("2292878");
set_field(noAllocs_0_1_1, AllocQty_35, PreAllocGrp_NoAllocs_18);
      set_field(noAllocs_0_1_1, FIX::AllocSettlCurrency{"EUR"}, PreAllocGrp_NoAllocs_18);
      set_field(noAllocs_0_1_1, FIX::IndividualAllocID{"STRING_136424261"}, PreAllocGrp_NoAllocs_18);
      all_values.push_back(PreAllocGrp_NoAllocs_18);
      all_compo_names.insert("...NoOrders...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_81;
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyID{"STRING_1201562139"}, NestedParties_NoNestedPartyIDs_81);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_81);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyRole{1217326766}, NestedParties_NoNestedPartyIDs_81);
        all_values.push_back(NestedParties_NoNestedPartyIDs_81);
        all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_172;
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubID{"STRING_1465541348"}, NstdPtysSubGrp_NoNestedPartySubIDs_172);
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubIDType{1756808620}, NstdPtysSubGrp_NoNestedPartySubIDs_172);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_172);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_19;
    set_field(noOrders_0_0, FIX::BenchmarkCurveCurrency{"USD"}, SpreadOrBenchmarkCurveData_19);
    set_field(noOrders_0_0, FIX::BenchmarkCurveName{"STRING_FutureSWAP"}, SpreadOrBenchmarkCurveData_19);
    set_field(noOrders_0_0, FIX::BenchmarkCurvePoint{"STRING_1692653822"}, SpreadOrBenchmarkCurveData_19);
    FIX::BenchmarkPrice BenchmarkPrice_19;
    BenchmarkPrice_19.setString("3800133");
set_field(noOrders_0_0, BenchmarkPrice_19, SpreadOrBenchmarkCurveData_19);
    set_field(noOrders_0_0, FIX::BenchmarkPriceType{989988187}, SpreadOrBenchmarkCurveData_19);
    set_field(noOrders_0_0, FIX::BenchmarkSecurityID{"STRING_1159521895"}, SpreadOrBenchmarkCurveData_19);
    set_field(noOrders_0_0, FIX::BenchmarkSecurityIDSource{"STRING_657359741"}, SpreadOrBenchmarkCurveData_19);
    FIX::Spread Spread_19;
    Spread_19.setString("170126");
set_field(noOrders_0_0, Spread_19, SpreadOrBenchmarkCurveData_19);
    all_values.push_back(SpreadOrBenchmarkCurveData_19);
    all_compo_names.insert("...NoOrders.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_31;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_MATURITY"}, Stipulations_NoStipulations_31);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_1064831816"}, Stipulations_NoStipulations_31);
      all_values.push_back(Stipulations_NoStipulations_31);
      all_compo_names.insert("...NoOrders...NoStipulations");

      noOrders_0_0.addGroup(noStipulations_0_1_0);
    }
    // StrategyParametersGrp
    // Group StrategyParametersGrp.NoStrategyParameters
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_0_1_0;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_9;
      set_field(noStrategyParameters_0_1_0, FIX::StrategyParameterName{"STRING_482855550"}, StrategyParametersGrp_NoStrategyParameters_9);
      set_field(noStrategyParameters_0_1_0, FIX::StrategyParameterType{7}, StrategyParametersGrp_NoStrategyParameters_9);
      set_field(noStrategyParameters_0_1_0, FIX::StrategyParameterValue{"STRING_98139375"}, StrategyParametersGrp_NoStrategyParameters_9);
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_9);
      all_compo_names.insert("...NoOrders...NoStrategyParameters");

      noOrders_0_0.addGroup(noStrategyParameters_0_1_0);
    }
    // TrdgSesGrp
    // Group TrdgSesGrp.NoTradingSessions
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_0;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_8;
      set_field(noTradingSessions_0_1_0, FIX::TradingSessionID{"STRING_6"}, TrdgSesGrp_NoTradingSessions_8);
      set_field(noTradingSessions_0_1_0, FIX::TradingSessionSubID{"STRING_7"}, TrdgSesGrp_NoTradingSessions_8);
      all_values.push_back(TrdgSesGrp_NoTradingSessions_8);
      all_compo_names.insert("...NoOrders...NoTradingSessions");

      noOrders_0_0.addGroup(noTradingSessions_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_1;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_9;
      set_field(noTradingSessions_0_1_1, FIX::TradingSessionID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_9);
      set_field(noTradingSessions_0_1_1, FIX::TradingSessionSubID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_9);
      all_values.push_back(TrdgSesGrp_NoTradingSessions_9);
      all_compo_names.insert("...NoOrders...NoTradingSessions");

      noOrders_0_0.addGroup(noTradingSessions_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_2;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_10;
      set_field(noTradingSessions_0_1_2, FIX::TradingSessionID{"STRING_1"}, TrdgSesGrp_NoTradingSessions_10);
      set_field(noTradingSessions_0_1_2, FIX::TradingSessionSubID{"STRING_7"}, TrdgSesGrp_NoTradingSessions_10);
      all_values.push_back(TrdgSesGrp_NoTradingSessions_10);
      all_compo_names.insert("...NoOrders...NoTradingSessions");

      noOrders_0_0.addGroup(noTradingSessions_0_1_2);
    }
    // TriggeringInstruction
    multiset<string> TriggeringInstruction_4;
    set_field(noOrders_0_0, FIX::TriggerAction{'1'}, TriggeringInstruction_4);
    FIX::TriggerNewPrice TriggerNewPrice_4;
    TriggerNewPrice_4.setString("2165401");
set_field(noOrders_0_0, TriggerNewPrice_4, TriggeringInstruction_4);
    FIX::TriggerNewQty TriggerNewQty_4;
    TriggerNewQty_4.setString("10722567");
set_field(noOrders_0_0, TriggerNewQty_4, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerOrderType{'1'}, TriggeringInstruction_4);
    FIX::TriggerPrice TriggerPrice_4;
    TriggerPrice_4.setString("14338669");
set_field(noOrders_0_0, TriggerPrice_4, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerPriceDirection{'D'}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerPriceType{'5'}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerPriceTypeScope{'2'}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerSecurityDesc{"STRING_886373338"}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerSecurityID{"STRING_326957186"}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerSecurityIDSource{"STRING_1799379214"}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerSymbol{"STRING_431543513"}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerTradingSessionID{"STRING_706970567"}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerTradingSessionSubID{"STRING_641883753"}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerType{'1'}, TriggeringInstruction_4);
    all_values.push_back(TriggeringInstruction_4);
    all_compo_names.insert("...NoOrders.");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_64;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_658896372"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{604693325}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_2108509766"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{1723728188}, UnderlyingInstrument_64);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_64;
      UnderlyingAdjustedQuantity_64.setString("21064273");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_64, UnderlyingInstrument_64);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_64;
      UnderlyingAllocationPercent_64.setString("16.680000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_64, UnderlyingInstrument_64);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_64;
      UnderlyingAttachmentPoint_64.setString("78.820000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_57083055"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_1077105416"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_734597075"}, UnderlyingInstrument_64);
      FIX::UnderlyingCapValue UnderlyingCapValue_64;
      UnderlyingCapValue_64.setString("15165941");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_64, UnderlyingInstrument_64);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_64;
      UnderlyingCashAmount_64.setString("21321404");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_64);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_64;
      UnderlyingContractMultiplier_64.setString("6884570");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{2002834992}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_299951764"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_904997277"}, UnderlyingInstrument_64);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_64;
      UnderlyingCouponRate_64.setString("80.670000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_291792288"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_64);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_64;
      UnderlyingCurrentValue_64.setString("17491741");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_64, UnderlyingInstrument_64);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_64;
      UnderlyingDetachmentPoint_64.setString("25.100000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_64, UnderlyingInstrument_64);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_64;
      UnderlyingDirtyPrice_64.setString("12491665");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_64, UnderlyingInstrument_64);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_64;
      UnderlyingEndPrice_64.setString("20761313");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_64, UnderlyingInstrument_64);
      FIX::UnderlyingEndValue UnderlyingEndValue_64;
      UnderlyingEndValue_64.setString("8864680");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{1680710085}, UnderlyingInstrument_64);
      FIX::UnderlyingFXRate UnderlyingFXRate_64;
      UnderlyingFXRate_64.setString("6356182");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_64);
      FIX::UnderlyingFactor UnderlyingFactor_64;
      UnderlyingFactor_64.setString("11242918");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{1999948575}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_39764554"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1728985171"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_1960974693"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_1763492743"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1687928851"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_257372713"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1939170625"}, UnderlyingInstrument_64);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_64;
      UnderlyingNotionalPercentageOutstanding_64.setString("19.060000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_64);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_64;
      UnderlyingOriginalNotionalPercentageOutstanding_64.setString("40.520000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1114122443"}, UnderlyingInstrument_64);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_64;
      UnderlyingPriceUnitOfMeasureQty_64.setString("13191348");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{2049088165}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{1802579533}, UnderlyingInstrument_64);
      FIX::UnderlyingPx UnderlyingPx_64;
      UnderlyingPx_64.setString("11744862");
set_field(noUnderlyings_0_1_0, UnderlyingPx_64, UnderlyingInstrument_64);
      FIX::UnderlyingQty UnderlyingQty_64;
      UnderlyingQty_64.setString("2015562");
set_field(noUnderlyings_0_1_0, UnderlyingQty_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_560093162"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2102094300"}, UnderlyingInstrument_64);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_64;
      UnderlyingRepurchaseRate_64.setString("85.700000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{751473746}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_317403886"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_95039083"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1986046257"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_1566570459"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_23686782"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_725030685"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_1099796896"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_659305049"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_105898867"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_64);
      FIX::UnderlyingStartValue UnderlyingStartValue_64;
      UnderlyingStartValue_64.setString("5117699");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_145663422"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_64);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_64;
      UnderlyingStrikePrice_64.setString("19091561");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_1346035468"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_582633734"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_1700843142"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_943563727"}, UnderlyingInstrument_64);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_64;
      UnderlyingUnitOfMeasureQty_64.setString("19171118");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_64, UnderlyingInstrument_64);
      all_values.push_back(UnderlyingInstrument_64);
      all_compo_names.insert("...NoOrders...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_134;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_2057686170"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_134);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1088763104"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_134);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_134);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_135;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_2128731711"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_135);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1712782055"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_135);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_135);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_136;
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_115765690"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_136);
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_182804344"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_136);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_136);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_127;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_70376342"}, UnderlyingStipulations_NoUnderlyingStips_127);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_676152914"}, UnderlyingStipulations_NoUnderlyingStips_127);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_127);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_139;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_387780229"}, UndlyInstrumentParties_NoUndlyInstrumentParties_139);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_139);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{715427925}, UndlyInstrumentParties_NoUndlyInstrumentParties_139);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_139);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_794878780"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1440458611}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_906663936"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1454183829}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_140;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1546357478"}, UndlyInstrumentParties_NoUndlyInstrumentParties_140);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_140);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{1965953805}, UndlyInstrumentParties_NoUndlyInstrumentParties_140);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_140);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_641375648"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{143731178}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1453693417"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{1987411117}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_276);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_726364912"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{1007052911}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_277);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_141;
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_783491196"}, UndlyInstrumentParties_NoUndlyInstrumentParties_141);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_141);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyRole{1086696457}, UndlyInstrumentParties_NoUndlyInstrumentParties_141);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_141);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1584756231"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1067944520}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_278);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_258992126"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{1700521921}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_279);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noOrders_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_65;
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1250748865"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuerLen{384383696}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1770898264"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDescLen{1926901779}, UnderlyingInstrument_65);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_65;
      UnderlyingAdjustedQuantity_65.setString("12612490");
set_field(noUnderlyings_0_1_1, UnderlyingAdjustedQuantity_65, UnderlyingInstrument_65);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_65;
      UnderlyingAllocationPercent_65.setString("48.450000");
set_field(noUnderlyings_0_1_1, UnderlyingAllocationPercent_65, UnderlyingInstrument_65);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_65;
      UnderlyingAttachmentPoint_65.setString("1.290000");
set_field(noUnderlyings_0_1_1, UnderlyingAttachmentPoint_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCFICode{"STRING_1976676938"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPProgram{"STRING_1965545533"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPRegType{"STRING_1345488909"}, UnderlyingInstrument_65);
      FIX::UnderlyingCapValue UnderlyingCapValue_65;
      UnderlyingCapValue_65.setString("12696519");
set_field(noUnderlyings_0_1_1, UnderlyingCapValue_65, UnderlyingInstrument_65);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_65;
      UnderlyingCashAmount_65.setString("7247258");
set_field(noUnderlyings_0_1_1, UnderlyingCashAmount_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_65);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_65;
      UnderlyingContractMultiplier_65.setString("6685257");
set_field(noUnderlyings_0_1_1, UnderlyingContractMultiplier_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingContractMultiplierUnit{1707994852}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_470659247"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_213062984"}, UnderlyingInstrument_65);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_65;
      UnderlyingCouponRate_65.setString("68.530000");
set_field(noUnderlyings_0_1_1, UnderlyingCouponRate_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCreditRating{"STRING_614390425"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_65);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_65;
      UnderlyingCurrentValue_65.setString("13407553");
set_field(noUnderlyings_0_1_1, UnderlyingCurrentValue_65, UnderlyingInstrument_65);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_65;
      UnderlyingDetachmentPoint_65.setString("56.650000");
set_field(noUnderlyings_0_1_1, UnderlyingDetachmentPoint_65, UnderlyingInstrument_65);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_65;
      UnderlyingDirtyPrice_65.setString("8253055");
set_field(noUnderlyings_0_1_1, UnderlyingDirtyPrice_65, UnderlyingInstrument_65);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_65;
      UnderlyingEndPrice_65.setString("18367484");
set_field(noUnderlyings_0_1_1, UnderlyingEndPrice_65, UnderlyingInstrument_65);
      FIX::UnderlyingEndValue UnderlyingEndValue_65;
      UnderlyingEndValue_65.setString("16130221");
set_field(noUnderlyings_0_1_1, UnderlyingEndValue_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingExerciseStyle{1518999236}, UnderlyingInstrument_65);
      FIX::UnderlyingFXRate UnderlyingFXRate_65;
      UnderlyingFXRate_65.setString("12740210");
set_field(noUnderlyings_0_1_1, UnderlyingFXRate_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_65);
      FIX::UnderlyingFactor UnderlyingFactor_65;
      UnderlyingFactor_65.setString("17779913");
set_field(noUnderlyings_0_1_1, UnderlyingFactor_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFlowScheduleType{827059321}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingInstrRegistry{"STRING_1784231860"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_14891410"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssuer{"STRING_450473937"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_1563649991"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1276140423"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_461668782"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2114260120"}, UnderlyingInstrument_65);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_65;
      UnderlyingNotionalPercentageOutstanding_65.setString("37.130000");
set_field(noUnderlyings_0_1_1, UnderlyingNotionalPercentageOutstanding_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_65);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_65;
      UnderlyingOriginalNotionalPercentageOutstanding_65.setString("53.810000");
set_field(noUnderlyings_0_1_1, UnderlyingOriginalNotionalPercentageOutstanding_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_227501966"}, UnderlyingInstrument_65);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_65;
      UnderlyingPriceUnitOfMeasureQty_65.setString("10044564");
set_field(noUnderlyings_0_1_1, UnderlyingPriceUnitOfMeasureQty_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingProduct{1964454471}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPutOrCall{896027697}, UnderlyingInstrument_65);
      FIX::UnderlyingPx UnderlyingPx_65;
      UnderlyingPx_65.setString("5649676");
set_field(noUnderlyings_0_1_1, UnderlyingPx_65, UnderlyingInstrument_65);
      FIX::UnderlyingQty UnderlyingQty_65;
      UnderlyingQty_65.setString("2876300");
set_field(noUnderlyings_0_1_1, UnderlyingQty_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1109090681"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_766854546"}, UnderlyingInstrument_65);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_65;
      UnderlyingRepurchaseRate_65.setString("4.950000");
set_field(noUnderlyings_0_1_1, UnderlyingRepurchaseRate_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepurchaseTerm{628363435}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRestructuringType{"STRING_808668868"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityDesc{"STRING_95292184"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1154689100"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityID{"STRING_1633974386"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityIDSource{"STRING_1932040648"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecuritySubType{"STRING_620227574"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityType{"STRING_1005489974"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSeniority{"STRING_1058578048"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlMethod{"STRING_1153710569"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_65);
      FIX::UnderlyingStartValue UnderlyingStartValue_65;
      UnderlyingStartValue_65.setString("18856373");
set_field(noUnderlyings_0_1_1, UnderlyingStartValue_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_790458781"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_65);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_65;
      UnderlyingStrikePrice_65.setString("2066251");
set_field(noUnderlyings_0_1_1, UnderlyingStrikePrice_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbol{"STRING_1927029522"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbolSfx{"STRING_650296440"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingTimeUnit{"STRING_173401597"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_884879587"}, UnderlyingInstrument_65);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_65;
      UnderlyingUnitOfMeasureQty_65.setString("9300271");
set_field(noUnderlyings_0_1_1, UnderlyingUnitOfMeasureQty_65, UnderlyingInstrument_65);
      all_values.push_back(UnderlyingInstrument_65);
      all_compo_names.insert("...NoOrders...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_137;
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_1112381553"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_137);
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1934483595"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_137);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_137);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_138;
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_1302637802"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_138);
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_2008409251"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_138);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_138);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_128;
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipType{"STRING_1590267873"}, UnderlyingStipulations_NoUnderlyingStips_128);
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipValue{"STRING_970016284"}, UnderlyingStipulations_NoUnderlyingStips_128);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_128);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_129;
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipType{"STRING_1118822186"}, UnderlyingStipulations_NoUnderlyingStips_129);
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipValue{"STRING_344804720"}, UnderlyingStipulations_NoUnderlyingStips_129);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_129);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_130;
        set_field(noUnderlyingStips_0_1_2_2, FIX::UnderlyingStipType{"STRING_1598379719"}, UnderlyingStipulations_NoUnderlyingStips_130);
        set_field(noUnderlyingStips_0_1_2_2, FIX::UnderlyingStipValue{"STRING_1927491054"}, UnderlyingStipulations_NoUnderlyingStips_130);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_130);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_142;
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_605585171"}, UndlyInstrumentParties_NoUndlyInstrumentParties_142);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_142);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyRole{224653905}, UndlyInstrumentParties_NoUndlyInstrumentParties_142);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_142);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_271988119"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1283231953}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_280);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_232039667"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{907985808}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_281);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1021385674"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{1022498449}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_282);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_143;
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1558874907"}, UndlyInstrumentParties_NoUndlyInstrumentParties_143);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_143);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyRole{1229123574}, UndlyInstrumentParties_NoUndlyInstrumentParties_143);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_143);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1860309772"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1402525171}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_283);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_75816721"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{642853231}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_284);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_740708502"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{1188198275}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_285);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      noOrders_0_0.addGroup(noUnderlyings_0_1_1);
    }
    // YieldData
    multiset<string> YieldData_14;
    FIX::Yield Yield_14;
    Yield_14.setString("31.790000");
set_field(noOrders_0_0, Yield_14, YieldData_14);
    set_field(noOrders_0_0, FIX::YieldCalcDate{"LOCALMKTDATE_2043346305"}, YieldData_14);
    set_field(noOrders_0_0, FIX::YieldRedemptionDate{"LOCALMKTDATE_1049123878"}, YieldData_14);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_14;
    YieldRedemptionPrice_14.setString("7818208");
set_field(noOrders_0_0, YieldRedemptionPrice_14, YieldData_14);
    set_field(noOrders_0_0, FIX::YieldRedemptionPriceType{1486130530}, YieldData_14);
    set_field(noOrders_0_0, FIX::YieldType{"STRING_INFLATION"}, YieldData_14);
    all_values.push_back(YieldData_14);
    all_compo_names.insert("...NoOrders.");

    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::NewOrderList::NoOrders noOrders_0_1;
    // ListOrdGrp.NoOrders
    multiset<string> ListOrdGrp_NoOrders_1;
    set_field(noOrders_0_1, FIX::Account{"STRING_1900643006"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::AccountType{6}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::AcctIDSource{1}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::AllocID{"STRING_1680650412"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::BookingType{2}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::BookingUnit{'2'}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::CashMargin{'3'}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::ClOrdID{"STRING_348202413"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::ClOrdLinkID{"STRING_1153950503"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::ClearingFeeIndicator{"STRING_3"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::ComplianceID{"STRING_1631434366"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::CoveredOrUncovered{1}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::Currency{"EUR"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::CustOrderCapacity{1}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::DayBookingInst{'1'}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::Designation{"STRING_1715349725"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::EffectiveTime{FIX::UTCTIMESTAMP(13, 50, 9, 3, 10, 2010)}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::EncodedText{"DATA_1993465874"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::EncodedTextLen{353398612}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::ExDestination{"EXCHANGE_1381741229"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::ExDestinationIDSource{'G'}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::ExecInst{"MULTIPLECHARVALUE_W"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::ExpireDate{"LOCALMKTDATE_720388111"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::ExpireTime{FIX::UTCTIMESTAMP(22, 53, 44, 10, 6, 2000)}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::ForexReq{false}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::GTBookingInst{2}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::HandlInst{'3'}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::IOIID{"STRING_440347139"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::ListSeqNo{359541352}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::LocateReqd{true}, ListOrdGrp_NoOrders_1);
    FIX::MatchIncrement MatchIncrement_5;
    MatchIncrement_5.setString("4199859");
set_field(noOrders_0_1, MatchIncrement_5, ListOrdGrp_NoOrders_1);
    FIX::MaxFloor MaxFloor_5;
    MaxFloor_5.setString("8648777");
set_field(noOrders_0_1, MaxFloor_5, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::MaxPriceLevels{670914960}, ListOrdGrp_NoOrders_1);
    FIX::MaxShow MaxShow_5;
    MaxShow_5.setString("19584997");
set_field(noOrders_0_1, MaxShow_5, ListOrdGrp_NoOrders_1);
    FIX::MinQty MinQty_11;
    MinQty_11.setString("4327438");
set_field(noOrders_0_1, MinQty_11, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::OrdType{'3'}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::OrderCapacity{'R'}, ListOrdGrp_NoOrders_1);
    FIX::OrderQty2 OrderQty2_14;
    OrderQty2_14.setString("18609196");
set_field(noOrders_0_1, OrderQty2_14, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_4"}, ListOrdGrp_NoOrders_1);
    FIX::ParticipationRate ParticipationRate_5;
    ParticipationRate_5.setString("45.470000");
set_field(noOrders_0_1, ParticipationRate_5, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::PositionEffect{'C'}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::PreTradeAnonymity{true}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::PreallocMethod{'1'}, ListOrdGrp_NoOrders_1);
    FIX::PrevClosePx PrevClosePx_5;
    PrevClosePx_5.setString("21378637");
set_field(noOrders_0_1, PrevClosePx_5, ListOrdGrp_NoOrders_1);
    FIX::Price Price_15;
    Price_15.setString("14788660");
set_field(noOrders_0_1, Price_15, ListOrdGrp_NoOrders_1);
    FIX::Price2 Price2_1;
    Price2_1.setString("20868228");
set_field(noOrders_0_1, Price2_1, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::PriceProtectionScope{'3'}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::PriceType{7}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::ProcessCode{'4'}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::QtyType{2}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::QuoteID{"STRING_455610257"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::RefOrderID{"STRING_795417052"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::RefOrderIDSource{'4'}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::SecondaryClOrdID{"STRING_982998478"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::SettlCurrency{"EUR"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::SettlDate{"LOCALMKTDATE_1858589112"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::SettlDate2{"LOCALMKTDATE_1984273480"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::SettlInstMode{'0'}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::SettlType{"STRING_9"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::Side{'D'}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::SideValueInd{1}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::SolicitedFlag{true}, ListOrdGrp_NoOrders_1);
    FIX::StopPx StopPx_5;
    StopPx_5.setString("9176147");
set_field(noOrders_0_1, StopPx_5, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::TargetStrategy{3}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::TargetStrategyParameters{"STRING_1368268385"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::Text{"STRING_931174639"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::TimeInForce{'7'}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::TradeDate{"LOCALMKTDATE_1081704410"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::TradeOriginationDate{"LOCALMKTDATE_1689904567"}, ListOrdGrp_NoOrders_1);
    set_field(noOrders_0_1, FIX::TransactTime{FIX::UTCTIMESTAMP(13, 39, 10, 16, 9, 2008)}, ListOrdGrp_NoOrders_1);
    all_values.push_back(ListOrdGrp_NoOrders_1);
    all_compo_names.insert("...NoOrders");

    // CommissionData
    multiset<string> CommissionData_20;
    set_field(noOrders_0_1, FIX::CommCurrency{"GBP"}, CommissionData_20);
    set_field(noOrders_0_1, FIX::CommType{'5'}, CommissionData_20);
    FIX::Commission Commission_20;
    Commission_20.setString("17011600");
set_field(noOrders_0_1, Commission_20, CommissionData_20);
    set_field(noOrders_0_1, FIX::FundRenewWaiv{'N'}, CommissionData_20);
    all_values.push_back(CommissionData_20);
    all_compo_names.insert("...NoOrders.");

    // DiscretionInstructions
    multiset<string> DiscretionInstructions_5;
    set_field(noOrders_0_1, FIX::DiscretionInst{'0'}, DiscretionInstructions_5);
    set_field(noOrders_0_1, FIX::DiscretionLimitType{1}, DiscretionInstructions_5);
    set_field(noOrders_0_1, FIX::DiscretionMoveType{0}, DiscretionInstructions_5);
    set_field(noOrders_0_1, FIX::DiscretionOffsetType{3}, DiscretionInstructions_5);
    FIX::DiscretionOffsetValue DiscretionOffsetValue_5;
    DiscretionOffsetValue_5.setString("14984509");
set_field(noOrders_0_1, DiscretionOffsetValue_5, DiscretionInstructions_5);
    set_field(noOrders_0_1, FIX::DiscretionRoundDirection{2}, DiscretionInstructions_5);
    set_field(noOrders_0_1, FIX::DiscretionScope{4}, DiscretionInstructions_5);
    all_values.push_back(DiscretionInstructions_5);
    all_compo_names.insert("...NoOrders.");

    // DisplayInstruction
    multiset<string> DisplayInstruction_5;
    FIX::DisplayHighQty DisplayHighQty_5;
    DisplayHighQty_5.setString("14480487");
set_field(noOrders_0_1, DisplayHighQty_5, DisplayInstruction_5);
    FIX::DisplayLowQty DisplayLowQty_5;
    DisplayLowQty_5.setString("2430597");
set_field(noOrders_0_1, DisplayLowQty_5, DisplayInstruction_5);
    set_field(noOrders_0_1, FIX::DisplayMethod{'4'}, DisplayInstruction_5);
    FIX::DisplayMinIncr DisplayMinIncr_5;
    DisplayMinIncr_5.setString("18176325");
set_field(noOrders_0_1, DisplayMinIncr_5, DisplayInstruction_5);
    FIX::DisplayQty DisplayQty_5;
    DisplayQty_5.setString("11785843");
set_field(noOrders_0_1, DisplayQty_5, DisplayInstruction_5);
    set_field(noOrders_0_1, FIX::DisplayWhen{'1'}, DisplayInstruction_5);
    FIX::RefreshQty RefreshQty_5;
    RefreshQty_5.setString("19982323");
set_field(noOrders_0_1, RefreshQty_5, DisplayInstruction_5);
    FIX::SecondaryDisplayQty SecondaryDisplayQty_5;
    SecondaryDisplayQty_5.setString("3993690");
set_field(noOrders_0_1, SecondaryDisplayQty_5, DisplayInstruction_5);
    all_values.push_back(DisplayInstruction_5);
    all_compo_names.insert("...NoOrders.");

    // Instrument
    multiset<string> Instrument_50;
    FIX::AttachmentPoint AttachmentPoint_50;
    AttachmentPoint_50.setString("43.920000");
set_field(noOrders_0_1, AttachmentPoint_50, Instrument_50);
    set_field(noOrders_0_1, FIX::CFICode{"STRING_571815529"}, Instrument_50);
    set_field(noOrders_0_1, FIX::CPProgram{99}, Instrument_50);
    set_field(noOrders_0_1, FIX::CPRegType{"STRING_544495311"}, Instrument_50);
    FIX::CapPrice CapPrice_50;
    CapPrice_50.setString("4911332");
set_field(noOrders_0_1, CapPrice_50, Instrument_50);
    FIX::ContractMultiplier ContractMultiplier_50;
    ContractMultiplier_50.setString("522756");
set_field(noOrders_0_1, ContractMultiplier_50, Instrument_50);
    set_field(noOrders_0_1, FIX::ContractMultiplierUnit{2}, Instrument_50);
    set_field(noOrders_0_1, FIX::ContractSettlMonth{"MONTHYEAR_1602167697"}, Instrument_50);
    set_field(noOrders_0_1, FIX::CountryOfIssue{"COUNTRY_761341637"}, Instrument_50);
    set_field(noOrders_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1302452935"}, Instrument_50);
    FIX::CouponRate CouponRate_50;
    CouponRate_50.setString("77.490000");
set_field(noOrders_0_1, CouponRate_50, Instrument_50);
    set_field(noOrders_0_1, FIX::CreditRating{"STRING_448523432"}, Instrument_50);
    set_field(noOrders_0_1, FIX::DatedDate{"LOCALMKTDATE_325151684"}, Instrument_50);
    FIX::DetachmentPoint DetachmentPoint_50;
    DetachmentPoint_50.setString("96.490000");
set_field(noOrders_0_1, DetachmentPoint_50, Instrument_50);
    set_field(noOrders_0_1, FIX::EncodedIssuer{"DATA_2199872"}, Instrument_50);
    set_field(noOrders_0_1, FIX::EncodedIssuerLen{1950944338}, Instrument_50);
    set_field(noOrders_0_1, FIX::EncodedSecurityDesc{"DATA_518458601"}, Instrument_50);
    set_field(noOrders_0_1, FIX::EncodedSecurityDescLen{1991400160}, Instrument_50);
    set_field(noOrders_0_1, FIX::ExerciseStyle{0}, Instrument_50);
    FIX::Factor Factor_50;
    Factor_50.setString("17357375");
set_field(noOrders_0_1, Factor_50, Instrument_50);
    set_field(noOrders_0_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_50);
    set_field(noOrders_0_1, FIX::FlexibleIndicator{false}, Instrument_50);
    FIX::FloorPrice FloorPrice_50;
    FloorPrice_50.setString("6423227");
set_field(noOrders_0_1, FloorPrice_50, Instrument_50);
    set_field(noOrders_0_1, FIX::FlowScheduleType{2}, Instrument_50);
    set_field(noOrders_0_1, FIX::InstrRegistry{"STRING_680240889"}, Instrument_50);
    set_field(noOrders_0_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_50);
    set_field(noOrders_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_313081450"}, Instrument_50);
    set_field(noOrders_0_1, FIX::IssueDate{"LOCALMKTDATE_1858825218"}, Instrument_50);
    set_field(noOrders_0_1, FIX::Issuer{"STRING_2013991091"}, Instrument_50);
    set_field(noOrders_0_1, FIX::ListMethod{0}, Instrument_50);
    set_field(noOrders_0_1, FIX::LocaleOfIssue{"STRING_110710636"}, Instrument_50);
    set_field(noOrders_0_1, FIX::MaturityDate{"LOCALMKTDATE_868581835"}, Instrument_50);
    set_field(noOrders_0_1, FIX::MaturityMonthYear{"MONTHYEAR_735645712"}, Instrument_50);
    set_field(noOrders_0_1, FIX::MaturityTime{"TZTIMEONLY_1591784112"}, Instrument_50);
    FIX::MinPriceIncrement MinPriceIncrement_50;
    MinPriceIncrement_50.setString("14130771");
set_field(noOrders_0_1, MinPriceIncrement_50, Instrument_50);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_50;
    MinPriceIncrementAmount_50.setString("12267789");
set_field(noOrders_0_1, MinPriceIncrementAmount_50, Instrument_50);
    set_field(noOrders_0_1, FIX::NTPositionLimit{1644059810}, Instrument_50);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_50;
    NotionalPercentageOutstanding_50.setString("82.300000");
set_field(noOrders_0_1, NotionalPercentageOutstanding_50, Instrument_50);
    set_field(noOrders_0_1, FIX::OptAttribute{'6'}, Instrument_50);
    FIX::OptPayoutAmount OptPayoutAmount_50;
    OptPayoutAmount_50.setString("2579177");
set_field(noOrders_0_1, OptPayoutAmount_50, Instrument_50);
    set_field(noOrders_0_1, FIX::OptPayoutType{1}, Instrument_50);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_50;
    OriginalNotionalPercentageOutstanding_50.setString("7.360000");
set_field(noOrders_0_1, OriginalNotionalPercentageOutstanding_50, Instrument_50);
    set_field(noOrders_0_1, FIX::Pool{"STRING_706441232"}, Instrument_50);
    set_field(noOrders_0_1, FIX::PositionLimit{1077239201}, Instrument_50);
    set_field(noOrders_0_1, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_50);
    set_field(noOrders_0_1, FIX::PriceUnitOfMeasure{"STRING_708641104"}, Instrument_50);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_50;
    PriceUnitOfMeasureQty_50.setString("8806998");
set_field(noOrders_0_1, PriceUnitOfMeasureQty_50, Instrument_50);
    set_field(noOrders_0_1, FIX::Product{10}, Instrument_50);
    set_field(noOrders_0_1, FIX::ProductComplex{"STRING_552557616"}, Instrument_50);
    set_field(noOrders_0_1, FIX::PutOrCall{0}, Instrument_50);
    set_field(noOrders_0_1, FIX::RedemptionDate{"LOCALMKTDATE_1407282907"}, Instrument_50);
    set_field(noOrders_0_1, FIX::RepoCollateralSecurityType{"STRING_1894925079"}, Instrument_50);
    FIX::RepurchaseRate RepurchaseRate_50;
    RepurchaseRate_50.setString("91.890000");
set_field(noOrders_0_1, RepurchaseRate_50, Instrument_50);
    set_field(noOrders_0_1, FIX::RepurchaseTerm{2049605627}, Instrument_50);
    set_field(noOrders_0_1, FIX::RestructuringType{"STRING_MM"}, Instrument_50);
    set_field(noOrders_0_1, FIX::SecurityDesc{"STRING_115406431"}, Instrument_50);
    set_field(noOrders_0_1, FIX::SecurityExchange{"EXCHANGE_1845213318"}, Instrument_50);
    set_field(noOrders_0_1, FIX::SecurityGroup{"STRING_703455449"}, Instrument_50);
    set_field(noOrders_0_1, FIX::SecurityID{"STRING_1974231649"}, Instrument_50);
    set_field(noOrders_0_1, FIX::SecurityIDSource{"STRING_4"}, Instrument_50);
    set_field(noOrders_0_1, FIX::SecurityStatus{"STRING_2"}, Instrument_50);
    set_field(noOrders_0_1, FIX::SecuritySubType{"STRING_2084942285"}, Instrument_50);
    set_field(noOrders_0_1, FIX::SecurityType{"STRING_IRS"}, Instrument_50);
    set_field(noOrders_0_1, FIX::Seniority{"STRING_SB"}, Instrument_50);
    set_field(noOrders_0_1, FIX::SettlMethod{'P'}, Instrument_50);
    set_field(noOrders_0_1, FIX::SettleOnOpenFlag{"STRING_1845896096"}, Instrument_50);
    set_field(noOrders_0_1, FIX::StateOrProvinceOfIssue{"STRING_682226634"}, Instrument_50);
    set_field(noOrders_0_1, FIX::StrikeCurrency{"JPY"}, Instrument_50);
    FIX::StrikeMultiplier StrikeMultiplier_50;
    StrikeMultiplier_50.setString("13636896");
set_field(noOrders_0_1, StrikeMultiplier_50, Instrument_50);
    FIX::StrikePrice StrikePrice_50;
    StrikePrice_50.setString("12837367");
set_field(noOrders_0_1, StrikePrice_50, Instrument_50);
    set_field(noOrders_0_1, FIX::StrikePriceBoundaryMethod{1}, Instrument_50);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_50;
    StrikePriceBoundaryPrecision_50.setString("67.100000");
set_field(noOrders_0_1, StrikePriceBoundaryPrecision_50, Instrument_50);
    set_field(noOrders_0_1, FIX::StrikePriceDeterminationMethod{4}, Instrument_50);
    FIX::StrikeValue StrikeValue_50;
    StrikeValue_50.setString("9773737");
set_field(noOrders_0_1, StrikeValue_50, Instrument_50);
    set_field(noOrders_0_1, FIX::Symbol{"STRING_1703297095"}, Instrument_50);
    set_field(noOrders_0_1, FIX::SymbolSfx{"STRING_WI"}, Instrument_50);
    set_field(noOrders_0_1, FIX::TimeUnit{"STRING_D"}, Instrument_50);
    set_field(noOrders_0_1, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_50);
    set_field(noOrders_0_1, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_50);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_50;
    UnitOfMeasureQty_50.setString("8560580");
set_field(noOrders_0_1, UnitOfMeasureQty_50, Instrument_50);
    set_field(noOrders_0_1, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_50);
    all_values.push_back(Instrument_50);
    all_compo_names.insert("...NoOrders.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_99;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_99);
      FIX::ComplexEventPrice ComplexEventPrice_99;
      ComplexEventPrice_99.setString("5367636");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_99, ComplexEvents_NoComplexEvents_99);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_99);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_99;
      ComplexEventPriceBoundaryPrecision_99.setString("0.310000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_99, ComplexEvents_NoComplexEvents_99);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_99);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_99);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_99;
      ComplexOptPayoutAmount_99.setString("2333780");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_99, ComplexEvents_NoComplexEvents_99);
      all_values.push_back(ComplexEvents_NoComplexEvents_99);
      all_compo_names.insert("...NoOrders....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_195;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 45, 53, 2, 6, 2011)}, ComplexEventDates_NoComplexEventDates_195);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 1, 33, 3, 4, 2006)}, ComplexEventDates_NoComplexEventDates_195);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_195);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_393;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 40, 13)}, ComplexEventTimes_NoComplexEventTimes_393);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 47, 22)}, ComplexEventTimes_NoComplexEventTimes_393);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_393);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_196;
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 0, 42, 11, 7, 2016)}, ComplexEventDates_NoComplexEventDates_196);
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 23, 37, 26, 2, 2016)}, ComplexEventDates_NoComplexEventDates_196);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_196);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_394;
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 18, 20)}, ComplexEventTimes_NoComplexEventTimes_394);
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 0, 33)}, ComplexEventTimes_NoComplexEventTimes_394);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_394);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_395;
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 5, 53)}, ComplexEventTimes_NoComplexEventTimes_395);
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 40, 2)}, ComplexEventTimes_NoComplexEventTimes_395);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_395);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_396;
          set_field(noComplexEventTimes_1_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 2, 1)}, ComplexEventTimes_NoComplexEventTimes_396);
          set_field(noComplexEventTimes_1_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 27, 30)}, ComplexEventTimes_NoComplexEventTimes_396);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_396);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_197;
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 7, 15, 0, 11, 2008)}, ComplexEventDates_NoComplexEventDates_197);
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 51, 4, 5, 5, 2008)}, ComplexEventDates_NoComplexEventDates_197);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_197);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_397;
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 15, 33)}, ComplexEventTimes_NoComplexEventTimes_397);
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 5, 38)}, ComplexEventTimes_NoComplexEventTimes_397);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_397);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_398;
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 40, 25)}, ComplexEventTimes_NoComplexEventTimes_398);
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 52, 31)}, ComplexEventTimes_NoComplexEventTimes_398);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_398);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noOrders_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_108;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_724723595"}, EvntGrp_NoEvents_108);
      FIX::EventPx EventPx_108;
      EventPx_108.setString("14252592");
set_field(noEvents_1_1_0, EventPx_108, EvntGrp_NoEvents_108);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_96339864"}, EvntGrp_NoEvents_108);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(16, 57, 14, 0, 5, 2004)}, EvntGrp_NoEvents_108);
      set_field(noEvents_1_1_0, FIX::EventType{14}, EvntGrp_NoEvents_108);
      all_values.push_back(EvntGrp_NoEvents_108);
      all_compo_names.insert("...NoOrders....NoEvents");

      noOrders_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_109;
      set_field(noEvents_1_1_1, FIX::EventDate{"LOCALMKTDATE_405806724"}, EvntGrp_NoEvents_109);
      FIX::EventPx EventPx_109;
      EventPx_109.setString("1275616");
set_field(noEvents_1_1_1, EventPx_109, EvntGrp_NoEvents_109);
      set_field(noEvents_1_1_1, FIX::EventText{"STRING_1778730723"}, EvntGrp_NoEvents_109);
      set_field(noEvents_1_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(7, 11, 30, 19, 4, 2016)}, EvntGrp_NoEvents_109);
      set_field(noEvents_1_1_1, FIX::EventType{10}, EvntGrp_NoEvents_109);
      all_values.push_back(EvntGrp_NoEvents_109);
      all_compo_names.insert("...NoOrders....NoEvents");

      noOrders_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_110;
      set_field(noEvents_1_1_2, FIX::EventDate{"LOCALMKTDATE_214828710"}, EvntGrp_NoEvents_110);
      FIX::EventPx EventPx_110;
      EventPx_110.setString("4255165");
set_field(noEvents_1_1_2, EventPx_110, EvntGrp_NoEvents_110);
      set_field(noEvents_1_1_2, FIX::EventText{"STRING_1080213401"}, EvntGrp_NoEvents_110);
      set_field(noEvents_1_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(2, 14, 40, 21, 8, 2015)}, EvntGrp_NoEvents_110);
      set_field(noEvents_1_1_2, FIX::EventType{4}, EvntGrp_NoEvents_110);
      all_values.push_back(EvntGrp_NoEvents_110);
      all_compo_names.insert("...NoOrders....NoEvents");

      noOrders_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_95;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_298538438"}, InstrumentParties_NoInstrumentParties_95);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_95);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{1006074465}, InstrumentParties_NoInstrumentParties_95);
      all_values.push_back(InstrumentParties_NoInstrumentParties_95);
      all_compo_names.insert("...NoOrders....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_964352912"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{612464837}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194);
        all_compo_names.insert("...NoOrders....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195;
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubID{"STRING_1564849375"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195);
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubIDType{1270831466}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195);
        all_compo_names.insert("...NoOrders....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196;
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubID{"STRING_1018271561"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196);
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubIDType{1692410994}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196);
        all_compo_names.insert("...NoOrders....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noOrders_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_96;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_902078541"}, InstrumentParties_NoInstrumentParties_96);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_96);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{1529650121}, InstrumentParties_NoInstrumentParties_96);
      all_values.push_back(InstrumentParties_NoInstrumentParties_96);
      all_compo_names.insert("...NoOrders....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_247113721"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{1277644805}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_197);
        all_compo_names.insert("...NoOrders....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      noOrders_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_97;
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyID{"STRING_245626951"}, InstrumentParties_NoInstrumentParties_97);
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_97);
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyRole{1053914346}, InstrumentParties_NoInstrumentParties_97);
      all_values.push_back(InstrumentParties_NoInstrumentParties_97);
      all_compo_names.insert("...NoOrders....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198;
        set_field(noInstrumentPartySubIDs_1_2_2_0, FIX::InstrumentPartySubID{"STRING_1520369178"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198);
        set_field(noInstrumentPartySubIDs_1_2_2_0, FIX::InstrumentPartySubIDType{2134127748}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_198);
        all_compo_names.insert("...NoOrders....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199;
        set_field(noInstrumentPartySubIDs_1_2_2_1, FIX::InstrumentPartySubID{"STRING_1702961277"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199);
        set_field(noInstrumentPartySubIDs_1_2_2_1, FIX::InstrumentPartySubIDType{221277420}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_199);
        all_compo_names.insert("...NoOrders....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200;
        set_field(noInstrumentPartySubIDs_1_2_2_2, FIX::InstrumentPartySubID{"STRING_307333014"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200);
        set_field(noInstrumentPartySubIDs_1_2_2_2, FIX::InstrumentPartySubIDType{1935808537}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_200);
        all_compo_names.insert("...NoOrders....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_2);
      }
      noOrders_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_102;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_1573308565"}, SecAltIDGrp_NoSecurityAltID_102);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_745895744"}, SecAltIDGrp_NoSecurityAltID_102);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_102);
      all_compo_names.insert("...NoOrders....NoSecurityAltID");

      noOrders_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_103;
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltID{"STRING_255563989"}, SecAltIDGrp_NoSecurityAltID_103);
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltIDSource{"STRING_788140333"}, SecAltIDGrp_NoSecurityAltID_103);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_103);
      all_compo_names.insert("...NoOrders....NoSecurityAltID");

      noOrders_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_100;
    set_field(noOrders_0_1, FIX::SecurityXML{"XMLDATA_1044434182"}, SecurityXML_100);
    set_field(noOrders_0_1, FIX::SecurityXMLLen{1655651825}, SecurityXML_100);
    set_field(noOrders_0_1, FIX::SecurityXMLSchema{"STRING_1794214798"}, SecurityXML_100);
    all_values.push_back(SecurityXML_100);
    all_compo_names.insert("...NoOrders..");

    // OrderQtyData
    multiset<string> OrderQtyData_15;
    FIX::CashOrderQty CashOrderQty_15;
    CashOrderQty_15.setString("10554282");
set_field(noOrders_0_1, CashOrderQty_15, OrderQtyData_15);
    FIX::OrderPercent OrderPercent_15;
    OrderPercent_15.setString("10.890000");
set_field(noOrders_0_1, OrderPercent_15, OrderQtyData_15);
    FIX::OrderQty OrderQty_24;
    OrderQty_24.setString("2591959");
set_field(noOrders_0_1, OrderQty_24, OrderQtyData_15);
    set_field(noOrders_0_1, FIX::RoundingDirection{'0'}, OrderQtyData_15);
    FIX::RoundingModulus RoundingModulus_15;
    RoundingModulus_15.setString("17433525");
set_field(noOrders_0_1, RoundingModulus_15, OrderQtyData_15);
    all_values.push_back(OrderQtyData_15);
    all_compo_names.insert("...NoOrders.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_84;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_17721280"}, Parties_NoPartyIDs_84);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_84);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{45}, Parties_NoPartyIDs_84);
      all_values.push_back(Parties_NoPartyIDs_84);
      all_compo_names.insert("...NoOrders...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_166;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_752187453"}, PtysSubGrp_NoPartySubIDs_166);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_166);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_166);
        all_compo_names.insert("...NoOrders...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      noOrders_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_85;
      set_field(noPartyIDs_1_1_1, FIX::PartyID{"STRING_677532558"}, Parties_NoPartyIDs_85);
      set_field(noPartyIDs_1_1_1, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_85);
      set_field(noPartyIDs_1_1_1, FIX::PartyRole{14}, Parties_NoPartyIDs_85);
      all_values.push_back(Parties_NoPartyIDs_85);
      all_compo_names.insert("...NoOrders...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_167;
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubID{"STRING_1458270067"}, PtysSubGrp_NoPartySubIDs_167);
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_167);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_167);
        all_compo_names.insert("...NoOrders...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_168;
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubID{"STRING_1718091005"}, PtysSubGrp_NoPartySubIDs_168);
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_168);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_168);
        all_compo_names.insert("...NoOrders...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      noOrders_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // PegInstructions
    multiset<string> PegInstructions_5;
    set_field(noOrders_0_1, FIX::PegLimitType{0}, PegInstructions_5);
    set_field(noOrders_0_1, FIX::PegMoveType{1}, PegInstructions_5);
    set_field(noOrders_0_1, FIX::PegOffsetType{2}, PegInstructions_5);
    FIX::PegOffsetValue PegOffsetValue_5;
    PegOffsetValue_5.setString("15558284");
set_field(noOrders_0_1, PegOffsetValue_5, PegInstructions_5);
    set_field(noOrders_0_1, FIX::PegPriceType{1}, PegInstructions_5);
    set_field(noOrders_0_1, FIX::PegRoundDirection{1}, PegInstructions_5);
    set_field(noOrders_0_1, FIX::PegScope{4}, PegInstructions_5);
    set_field(noOrders_0_1, FIX::PegSecurityDesc{"STRING_91905622"}, PegInstructions_5);
    set_field(noOrders_0_1, FIX::PegSecurityID{"STRING_444918865"}, PegInstructions_5);
    set_field(noOrders_0_1, FIX::PegSecurityIDSource{"STRING_1319560620"}, PegInstructions_5);
    set_field(noOrders_0_1, FIX::PegSymbol{"STRING_1886120420"}, PegInstructions_5);
    all_values.push_back(PegInstructions_5);
    all_compo_names.insert("...NoOrders.");

    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_1_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_19;
      set_field(noAllocs_1_1_0, FIX::AllocAccount{"STRING_1792081709"}, PreAllocGrp_NoAllocs_19);
      set_field(noAllocs_1_1_0, FIX::AllocAcctIDSource{2145316408}, PreAllocGrp_NoAllocs_19);
      FIX::AllocQty AllocQty_36;
      AllocQty_36.setString("19731410");
set_field(noAllocs_1_1_0, AllocQty_36, PreAllocGrp_NoAllocs_19);
      set_field(noAllocs_1_1_0, FIX::AllocSettlCurrency{"CHF"}, PreAllocGrp_NoAllocs_19);
      set_field(noAllocs_1_1_0, FIX::IndividualAllocID{"STRING_1990862286"}, PreAllocGrp_NoAllocs_19);
      all_values.push_back(PreAllocGrp_NoAllocs_19);
      all_compo_names.insert("...NoOrders...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_82;
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyID{"STRING_1295466568"}, NestedParties_NoNestedPartyIDs_82);
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_82);
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyRole{490601871}, NestedParties_NoNestedPartyIDs_82);
        all_values.push_back(NestedParties_NoNestedPartyIDs_82);
        all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_173;
          set_field(noNestedPartySubIDs_1_0_0_3_0, FIX::NestedPartySubID{"STRING_2068282598"}, NstdPtysSubGrp_NoNestedPartySubIDs_173);
          set_field(noNestedPartySubIDs_1_0_0_3_0, FIX::NestedPartySubIDType{1488416276}, NstdPtysSubGrp_NoNestedPartySubIDs_173);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_173);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_174;
          set_field(noNestedPartySubIDs_1_0_0_3_1, FIX::NestedPartySubID{"STRING_777395490"}, NstdPtysSubGrp_NoNestedPartySubIDs_174);
          set_field(noNestedPartySubIDs_1_0_0_3_1, FIX::NestedPartySubIDType{1652245855}, NstdPtysSubGrp_NoNestedPartySubIDs_174);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_174);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_83;
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyID{"STRING_799202695"}, NestedParties_NoNestedPartyIDs_83);
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_83);
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyRole{1222853212}, NestedParties_NoNestedPartyIDs_83);
        all_values.push_back(NestedParties_NoNestedPartyIDs_83);
        all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_175;
          set_field(noNestedPartySubIDs_1_0_1_3_0, FIX::NestedPartySubID{"STRING_321225503"}, NstdPtysSubGrp_NoNestedPartySubIDs_175);
          set_field(noNestedPartySubIDs_1_0_1_3_0, FIX::NestedPartySubIDType{1100793583}, NstdPtysSubGrp_NoNestedPartySubIDs_175);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_175);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_176;
          set_field(noNestedPartySubIDs_1_0_1_3_1, FIX::NestedPartySubID{"STRING_467539330"}, NstdPtysSubGrp_NoNestedPartySubIDs_176);
          set_field(noNestedPartySubIDs_1_0_1_3_1, FIX::NestedPartySubIDType{1877053957}, NstdPtysSubGrp_NoNestedPartySubIDs_176);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_176);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_1);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_84;
        set_field(noNestedPartyIDs_1_0_2_2, FIX::NestedPartyID{"STRING_404558871"}, NestedParties_NoNestedPartyIDs_84);
        set_field(noNestedPartyIDs_1_0_2_2, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_84);
        set_field(noNestedPartyIDs_1_0_2_2, FIX::NestedPartyRole{1540962752}, NestedParties_NoNestedPartyIDs_84);
        all_values.push_back(NestedParties_NoNestedPartyIDs_84);
        all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_177;
          set_field(noNestedPartySubIDs_1_0_2_3_0, FIX::NestedPartySubID{"STRING_312942877"}, NstdPtysSubGrp_NoNestedPartySubIDs_177);
          set_field(noNestedPartySubIDs_1_0_2_3_0, FIX::NestedPartySubIDType{713039724}, NstdPtysSubGrp_NoNestedPartySubIDs_177);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_177);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_178;
          set_field(noNestedPartySubIDs_1_0_2_3_1, FIX::NestedPartySubID{"STRING_235101266"}, NstdPtysSubGrp_NoNestedPartySubIDs_178);
          set_field(noNestedPartySubIDs_1_0_2_3_1, FIX::NestedPartySubIDType{1813289949}, NstdPtysSubGrp_NoNestedPartySubIDs_178);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_178);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_1);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_2);
      }
      noOrders_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_1_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_20;
      set_field(noAllocs_1_1_1, FIX::AllocAccount{"STRING_357637785"}, PreAllocGrp_NoAllocs_20);
      set_field(noAllocs_1_1_1, FIX::AllocAcctIDSource{232934026}, PreAllocGrp_NoAllocs_20);
      FIX::AllocQty AllocQty_37;
      AllocQty_37.setString("16389473");
set_field(noAllocs_1_1_1, AllocQty_37, PreAllocGrp_NoAllocs_20);
      set_field(noAllocs_1_1_1, FIX::AllocSettlCurrency{"EUR"}, PreAllocGrp_NoAllocs_20);
      set_field(noAllocs_1_1_1, FIX::IndividualAllocID{"STRING_1482325945"}, PreAllocGrp_NoAllocs_20);
      all_values.push_back(PreAllocGrp_NoAllocs_20);
      all_compo_names.insert("...NoOrders...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_85;
        set_field(noNestedPartyIDs_1_1_2_0, FIX::NestedPartyID{"STRING_656217255"}, NestedParties_NoNestedPartyIDs_85);
        set_field(noNestedPartyIDs_1_1_2_0, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_85);
        set_field(noNestedPartyIDs_1_1_2_0, FIX::NestedPartyRole{1974604692}, NestedParties_NoNestedPartyIDs_85);
        all_values.push_back(NestedParties_NoNestedPartyIDs_85);
        all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_179;
          set_field(noNestedPartySubIDs_1_1_0_3_0, FIX::NestedPartySubID{"STRING_646391287"}, NstdPtysSubGrp_NoNestedPartySubIDs_179);
          set_field(noNestedPartySubIDs_1_1_0_3_0, FIX::NestedPartySubIDType{1315537320}, NstdPtysSubGrp_NoNestedPartySubIDs_179);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_179);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_180;
          set_field(noNestedPartySubIDs_1_1_0_3_1, FIX::NestedPartySubID{"STRING_848875647"}, NstdPtysSubGrp_NoNestedPartySubIDs_180);
          set_field(noNestedPartySubIDs_1_1_0_3_1, FIX::NestedPartySubIDType{151153494}, NstdPtysSubGrp_NoNestedPartySubIDs_180);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_180);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_181;
          set_field(noNestedPartySubIDs_1_1_0_3_2, FIX::NestedPartySubID{"STRING_2114740016"}, NstdPtysSubGrp_NoNestedPartySubIDs_181);
          set_field(noNestedPartySubIDs_1_1_0_3_2, FIX::NestedPartySubIDType{213805609}, NstdPtysSubGrp_NoNestedPartySubIDs_181);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_181);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_2);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_86;
        set_field(noNestedPartyIDs_1_1_2_1, FIX::NestedPartyID{"STRING_1374006706"}, NestedParties_NoNestedPartyIDs_86);
        set_field(noNestedPartyIDs_1_1_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_86);
        set_field(noNestedPartyIDs_1_1_2_1, FIX::NestedPartyRole{535031112}, NestedParties_NoNestedPartyIDs_86);
        all_values.push_back(NestedParties_NoNestedPartyIDs_86);
        all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_182;
          set_field(noNestedPartySubIDs_1_1_1_3_0, FIX::NestedPartySubID{"STRING_100262442"}, NstdPtysSubGrp_NoNestedPartySubIDs_182);
          set_field(noNestedPartySubIDs_1_1_1_3_0, FIX::NestedPartySubIDType{264601421}, NstdPtysSubGrp_NoNestedPartySubIDs_182);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_182);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_0);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_87;
        set_field(noNestedPartyIDs_1_1_2_2, FIX::NestedPartyID{"STRING_731875512"}, NestedParties_NoNestedPartyIDs_87);
        set_field(noNestedPartyIDs_1_1_2_2, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_87);
        set_field(noNestedPartyIDs_1_1_2_2, FIX::NestedPartyRole{1805564173}, NestedParties_NoNestedPartyIDs_87);
        all_values.push_back(NestedParties_NoNestedPartyIDs_87);
        all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_183;
          set_field(noNestedPartySubIDs_1_1_2_3_0, FIX::NestedPartySubID{"STRING_281229332"}, NstdPtysSubGrp_NoNestedPartySubIDs_183);
          set_field(noNestedPartySubIDs_1_1_2_3_0, FIX::NestedPartySubIDType{371120249}, NstdPtysSubGrp_NoNestedPartySubIDs_183);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_183);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_184;
          set_field(noNestedPartySubIDs_1_1_2_3_1, FIX::NestedPartySubID{"STRING_1463441272"}, NstdPtysSubGrp_NoNestedPartySubIDs_184);
          set_field(noNestedPartySubIDs_1_1_2_3_1, FIX::NestedPartySubIDType{2094519281}, NstdPtysSubGrp_NoNestedPartySubIDs_184);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_184);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_185;
          set_field(noNestedPartySubIDs_1_1_2_3_2, FIX::NestedPartySubID{"STRING_728758035"}, NstdPtysSubGrp_NoNestedPartySubIDs_185);
          set_field(noNestedPartySubIDs_1_1_2_3_2, FIX::NestedPartySubIDType{1696375298}, NstdPtysSubGrp_NoNestedPartySubIDs_185);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_185);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_2);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_2);
      }
      noOrders_0_1.addGroup(noAllocs_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_1_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_21;
      set_field(noAllocs_1_1_2, FIX::AllocAccount{"STRING_1585982941"}, PreAllocGrp_NoAllocs_21);
      set_field(noAllocs_1_1_2, FIX::AllocAcctIDSource{326862789}, PreAllocGrp_NoAllocs_21);
      FIX::AllocQty AllocQty_38;
      AllocQty_38.setString("10571259");
set_field(noAllocs_1_1_2, AllocQty_38, PreAllocGrp_NoAllocs_21);
      set_field(noAllocs_1_1_2, FIX::AllocSettlCurrency{"USD"}, PreAllocGrp_NoAllocs_21);
      set_field(noAllocs_1_1_2, FIX::IndividualAllocID{"STRING_1713343240"}, PreAllocGrp_NoAllocs_21);
      all_values.push_back(PreAllocGrp_NoAllocs_21);
      all_compo_names.insert("...NoOrders...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_88;
        set_field(noNestedPartyIDs_1_2_2_0, FIX::NestedPartyID{"STRING_1637986654"}, NestedParties_NoNestedPartyIDs_88);
        set_field(noNestedPartyIDs_1_2_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_88);
        set_field(noNestedPartyIDs_1_2_2_0, FIX::NestedPartyRole{145325214}, NestedParties_NoNestedPartyIDs_88);
        all_values.push_back(NestedParties_NoNestedPartyIDs_88);
        all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_186;
          set_field(noNestedPartySubIDs_1_2_0_3_0, FIX::NestedPartySubID{"STRING_486215396"}, NstdPtysSubGrp_NoNestedPartySubIDs_186);
          set_field(noNestedPartySubIDs_1_2_0_3_0, FIX::NestedPartySubIDType{296478708}, NstdPtysSubGrp_NoNestedPartySubIDs_186);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_186);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_187;
          set_field(noNestedPartySubIDs_1_2_0_3_1, FIX::NestedPartySubID{"STRING_773296694"}, NstdPtysSubGrp_NoNestedPartySubIDs_187);
          set_field(noNestedPartySubIDs_1_2_0_3_1, FIX::NestedPartySubIDType{700021005}, NstdPtysSubGrp_NoNestedPartySubIDs_187);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_187);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_188;
          set_field(noNestedPartySubIDs_1_2_0_3_2, FIX::NestedPartySubID{"STRING_1670485414"}, NstdPtysSubGrp_NoNestedPartySubIDs_188);
          set_field(noNestedPartySubIDs_1_2_0_3_2, FIX::NestedPartySubIDType{406019806}, NstdPtysSubGrp_NoNestedPartySubIDs_188);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_188);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_2);
        }
        noAllocs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_89;
        set_field(noNestedPartyIDs_1_2_2_1, FIX::NestedPartyID{"STRING_1235052118"}, NestedParties_NoNestedPartyIDs_89);
        set_field(noNestedPartyIDs_1_2_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_89);
        set_field(noNestedPartyIDs_1_2_2_1, FIX::NestedPartyRole{506282248}, NestedParties_NoNestedPartyIDs_89);
        all_values.push_back(NestedParties_NoNestedPartyIDs_89);
        all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_189;
          set_field(noNestedPartySubIDs_1_2_1_3_0, FIX::NestedPartySubID{"STRING_582193920"}, NstdPtysSubGrp_NoNestedPartySubIDs_189);
          set_field(noNestedPartySubIDs_1_2_1_3_0, FIX::NestedPartySubIDType{474568703}, NstdPtysSubGrp_NoNestedPartySubIDs_189);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_189);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_1.addGroup(noNestedPartySubIDs_1_2_1_3_0);
        }
        noAllocs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_1);
      }
      noOrders_0_1.addGroup(noAllocs_1_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_20;
    set_field(noOrders_0_1, FIX::BenchmarkCurveCurrency{"GBP"}, SpreadOrBenchmarkCurveData_20);
    set_field(noOrders_0_1, FIX::BenchmarkCurveName{"STRING_OTHER"}, SpreadOrBenchmarkCurveData_20);
    set_field(noOrders_0_1, FIX::BenchmarkCurvePoint{"STRING_1528854314"}, SpreadOrBenchmarkCurveData_20);
    FIX::BenchmarkPrice BenchmarkPrice_20;
    BenchmarkPrice_20.setString("11264915");
set_field(noOrders_0_1, BenchmarkPrice_20, SpreadOrBenchmarkCurveData_20);
    set_field(noOrders_0_1, FIX::BenchmarkPriceType{702833668}, SpreadOrBenchmarkCurveData_20);
    set_field(noOrders_0_1, FIX::BenchmarkSecurityID{"STRING_110128701"}, SpreadOrBenchmarkCurveData_20);
    set_field(noOrders_0_1, FIX::BenchmarkSecurityIDSource{"STRING_675383200"}, SpreadOrBenchmarkCurveData_20);
    FIX::Spread Spread_20;
    Spread_20.setString("1413329");
set_field(noOrders_0_1, Spread_20, SpreadOrBenchmarkCurveData_20);
    all_values.push_back(SpreadOrBenchmarkCurveData_20);
    all_compo_names.insert("...NoOrders.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_32;
      set_field(noStipulations_1_1_0, FIX::StipulationType{"STRING_PRIMARY"}, Stipulations_NoStipulations_32);
      set_field(noStipulations_1_1_0, FIX::StipulationValue{"STRING_1062158200"}, Stipulations_NoStipulations_32);
      all_values.push_back(Stipulations_NoStipulations_32);
      all_compo_names.insert("...NoOrders...NoStipulations");

      noOrders_0_1.addGroup(noStipulations_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_1_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_33;
      set_field(noStipulations_1_1_1, FIX::StipulationType{"STRING_LOOKBACK"}, Stipulations_NoStipulations_33);
      set_field(noStipulations_1_1_1, FIX::StipulationValue{"STRING_1298368777"}, Stipulations_NoStipulations_33);
      all_values.push_back(Stipulations_NoStipulations_33);
      all_compo_names.insert("...NoOrders...NoStipulations");

      noOrders_0_1.addGroup(noStipulations_1_1_1);
    }
    // StrategyParametersGrp
    // Group StrategyParametersGrp.NoStrategyParameters
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_1_1_0;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_10;
      set_field(noStrategyParameters_1_1_0, FIX::StrategyParameterName{"STRING_1738360107"}, StrategyParametersGrp_NoStrategyParameters_10);
      set_field(noStrategyParameters_1_1_0, FIX::StrategyParameterType{8}, StrategyParametersGrp_NoStrategyParameters_10);
      set_field(noStrategyParameters_1_1_0, FIX::StrategyParameterValue{"STRING_706417342"}, StrategyParametersGrp_NoStrategyParameters_10);
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_10);
      all_compo_names.insert("...NoOrders...NoStrategyParameters");

      noOrders_0_1.addGroup(noStrategyParameters_1_1_0);
    }
    // TrdgSesGrp
    // Group TrdgSesGrp.NoTradingSessions
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_1_1_0;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_11;
      set_field(noTradingSessions_1_1_0, FIX::TradingSessionID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_11);
      set_field(noTradingSessions_1_1_0, FIX::TradingSessionSubID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_11);
      all_values.push_back(TrdgSesGrp_NoTradingSessions_11);
      all_compo_names.insert("...NoOrders...NoTradingSessions");

      noOrders_0_1.addGroup(noTradingSessions_1_1_0);
    }
    // TriggeringInstruction
    multiset<string> TriggeringInstruction_5;
    set_field(noOrders_0_1, FIX::TriggerAction{'1'}, TriggeringInstruction_5);
    FIX::TriggerNewPrice TriggerNewPrice_5;
    TriggerNewPrice_5.setString("21219449");
set_field(noOrders_0_1, TriggerNewPrice_5, TriggeringInstruction_5);
    FIX::TriggerNewQty TriggerNewQty_5;
    TriggerNewQty_5.setString("5258978");
set_field(noOrders_0_1, TriggerNewQty_5, TriggeringInstruction_5);
    set_field(noOrders_0_1, FIX::TriggerOrderType{'1'}, TriggeringInstruction_5);
    FIX::TriggerPrice TriggerPrice_5;
    TriggerPrice_5.setString("12095133");
set_field(noOrders_0_1, TriggerPrice_5, TriggeringInstruction_5);
    set_field(noOrders_0_1, FIX::TriggerPriceDirection{'U'}, TriggeringInstruction_5);
    set_field(noOrders_0_1, FIX::TriggerPriceType{'4'}, TriggeringInstruction_5);
    set_field(noOrders_0_1, FIX::TriggerPriceTypeScope{'1'}, TriggeringInstruction_5);
    set_field(noOrders_0_1, FIX::TriggerSecurityDesc{"STRING_958410144"}, TriggeringInstruction_5);
    set_field(noOrders_0_1, FIX::TriggerSecurityID{"STRING_409600590"}, TriggeringInstruction_5);
    set_field(noOrders_0_1, FIX::TriggerSecurityIDSource{"STRING_1719417354"}, TriggeringInstruction_5);
    set_field(noOrders_0_1, FIX::TriggerSymbol{"STRING_621460422"}, TriggeringInstruction_5);
    set_field(noOrders_0_1, FIX::TriggerTradingSessionID{"STRING_1165398625"}, TriggeringInstruction_5);
    set_field(noOrders_0_1, FIX::TriggerTradingSessionSubID{"STRING_1100788021"}, TriggeringInstruction_5);
    set_field(noOrders_0_1, FIX::TriggerType{'1'}, TriggeringInstruction_5);
    all_values.push_back(TriggeringInstruction_5);
    all_compo_names.insert("...NoOrders.");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_66;
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1210916722"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuerLen{275851524}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_2009565255"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDescLen{1647908213}, UnderlyingInstrument_66);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_66;
      UnderlyingAdjustedQuantity_66.setString("20083607");
set_field(noUnderlyings_1_1_0, UnderlyingAdjustedQuantity_66, UnderlyingInstrument_66);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_66;
      UnderlyingAllocationPercent_66.setString("98.070000");
set_field(noUnderlyings_1_1_0, UnderlyingAllocationPercent_66, UnderlyingInstrument_66);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_66;
      UnderlyingAttachmentPoint_66.setString("16.660000");
set_field(noUnderlyings_1_1_0, UnderlyingAttachmentPoint_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCFICode{"STRING_1159245839"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPProgram{"STRING_1485331934"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPRegType{"STRING_1339158125"}, UnderlyingInstrument_66);
      FIX::UnderlyingCapValue UnderlyingCapValue_66;
      UnderlyingCapValue_66.setString("20949543");
set_field(noUnderlyings_1_1_0, UnderlyingCapValue_66, UnderlyingInstrument_66);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_66;
      UnderlyingCashAmount_66.setString("442656");
set_field(noUnderlyings_1_1_0, UnderlyingCashAmount_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_66);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_66;
      UnderlyingContractMultiplier_66.setString("13693946");
set_field(noUnderlyings_1_1_0, UnderlyingContractMultiplier_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingContractMultiplierUnit{1047161679}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_758804743"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1343855920"}, UnderlyingInstrument_66);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_66;
      UnderlyingCouponRate_66.setString("94.960000");
set_field(noUnderlyings_1_1_0, UnderlyingCouponRate_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCreditRating{"STRING_187554381"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_66);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_66;
      UnderlyingCurrentValue_66.setString("1225862");
set_field(noUnderlyings_1_1_0, UnderlyingCurrentValue_66, UnderlyingInstrument_66);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_66;
      UnderlyingDetachmentPoint_66.setString("89.590000");
set_field(noUnderlyings_1_1_0, UnderlyingDetachmentPoint_66, UnderlyingInstrument_66);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_66;
      UnderlyingDirtyPrice_66.setString("7602022");
set_field(noUnderlyings_1_1_0, UnderlyingDirtyPrice_66, UnderlyingInstrument_66);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_66;
      UnderlyingEndPrice_66.setString("5321868");
set_field(noUnderlyings_1_1_0, UnderlyingEndPrice_66, UnderlyingInstrument_66);
      FIX::UnderlyingEndValue UnderlyingEndValue_66;
      UnderlyingEndValue_66.setString("5395026");
set_field(noUnderlyings_1_1_0, UnderlyingEndValue_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingExerciseStyle{1381662639}, UnderlyingInstrument_66);
      FIX::UnderlyingFXRate UnderlyingFXRate_66;
      UnderlyingFXRate_66.setString("16975854");
set_field(noUnderlyings_1_1_0, UnderlyingFXRate_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_66);
      FIX::UnderlyingFactor UnderlyingFactor_66;
      UnderlyingFactor_66.setString("9821309");
set_field(noUnderlyings_1_1_0, UnderlyingFactor_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFlowScheduleType{1418334129}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingInstrRegistry{"STRING_703723761"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1257982488"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssuer{"STRING_1280415736"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_204148327"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1118859550"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_57171895"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1952429993"}, UnderlyingInstrument_66);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_66;
      UnderlyingNotionalPercentageOutstanding_66.setString("17.410000");
set_field(noUnderlyings_1_1_0, UnderlyingNotionalPercentageOutstanding_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_66);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_66;
      UnderlyingOriginalNotionalPercentageOutstanding_66.setString("44.710000");
set_field(noUnderlyings_1_1_0, UnderlyingOriginalNotionalPercentageOutstanding_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_78092458"}, UnderlyingInstrument_66);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_66;
      UnderlyingPriceUnitOfMeasureQty_66.setString("15867694");
set_field(noUnderlyings_1_1_0, UnderlyingPriceUnitOfMeasureQty_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingProduct{732695734}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPutOrCall{1447487098}, UnderlyingInstrument_66);
      FIX::UnderlyingPx UnderlyingPx_66;
      UnderlyingPx_66.setString("4864474");
set_field(noUnderlyings_1_1_0, UnderlyingPx_66, UnderlyingInstrument_66);
      FIX::UnderlyingQty UnderlyingQty_66;
      UnderlyingQty_66.setString("14915004");
set_field(noUnderlyings_1_1_0, UnderlyingQty_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_643859370"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2059506985"}, UnderlyingInstrument_66);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_66;
      UnderlyingRepurchaseRate_66.setString("48.580000");
set_field(noUnderlyings_1_1_0, UnderlyingRepurchaseRate_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepurchaseTerm{1049745040}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRestructuringType{"STRING_1861299057"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityDesc{"STRING_1801641127"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_2017314000"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityID{"STRING_474017626"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityIDSource{"STRING_186344337"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecuritySubType{"STRING_409333018"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityType{"STRING_1855680266"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSeniority{"STRING_1883929821"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlMethod{"STRING_2049623705"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_66);
      FIX::UnderlyingStartValue UnderlyingStartValue_66;
      UnderlyingStartValue_66.setString("11547803");
set_field(noUnderlyings_1_1_0, UnderlyingStartValue_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_605863818"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_66);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_66;
      UnderlyingStrikePrice_66.setString("8100121");
set_field(noUnderlyings_1_1_0, UnderlyingStrikePrice_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbol{"STRING_919685972"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbolSfx{"STRING_344884285"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingTimeUnit{"STRING_614958491"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1050307713"}, UnderlyingInstrument_66);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_66;
      UnderlyingUnitOfMeasureQty_66.setString("18873881");
set_field(noUnderlyings_1_1_0, UnderlyingUnitOfMeasureQty_66, UnderlyingInstrument_66);
      all_values.push_back(UnderlyingInstrument_66);
      all_compo_names.insert("...NoOrders...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_139;
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1128400172"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_139);
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1326673924"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_139);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_139);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_140;
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_344275048"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_140);
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_428403622"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_140);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_140);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_141;
        set_field(noUnderlyingSecurityAltID_1_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_1813121413"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_141);
        set_field(noUnderlyingSecurityAltID_1_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1835775525"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_141);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_141);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_131;
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipType{"STRING_1725144750"}, UnderlyingStipulations_NoUnderlyingStips_131);
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipValue{"STRING_1367346735"}, UnderlyingStipulations_NoUnderlyingStips_131);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_131);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_132;
        set_field(noUnderlyingStips_1_0_2_1, FIX::UnderlyingStipType{"STRING_2122008033"}, UnderlyingStipulations_NoUnderlyingStips_132);
        set_field(noUnderlyingStips_1_0_2_1, FIX::UnderlyingStipValue{"STRING_1438960160"}, UnderlyingStipulations_NoUnderlyingStips_132);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_132);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_133;
        set_field(noUnderlyingStips_1_0_2_2, FIX::UnderlyingStipType{"STRING_1021504214"}, UnderlyingStipulations_NoUnderlyingStips_133);
        set_field(noUnderlyingStips_1_0_2_2, FIX::UnderlyingStipValue{"STRING_1991838385"}, UnderlyingStipulations_NoUnderlyingStips_133);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_133);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_144;
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1207848552"}, UndlyInstrumentParties_NoUndlyInstrumentParties_144);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_144);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyRole{1621174404}, UndlyInstrumentParties_NoUndlyInstrumentParties_144);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_144);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_155827812"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{164018338}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_286);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2099075027"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{761691631}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_287);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      noOrders_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_67;
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuer{"DATA_2112328409"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuerLen{239303769}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1571703776"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDescLen{884530733}, UnderlyingInstrument_67);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_67;
      UnderlyingAdjustedQuantity_67.setString("5841880");
set_field(noUnderlyings_1_1_1, UnderlyingAdjustedQuantity_67, UnderlyingInstrument_67);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_67;
      UnderlyingAllocationPercent_67.setString("86.190000");
set_field(noUnderlyings_1_1_1, UnderlyingAllocationPercent_67, UnderlyingInstrument_67);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_67;
      UnderlyingAttachmentPoint_67.setString("84.470000");
set_field(noUnderlyings_1_1_1, UnderlyingAttachmentPoint_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCFICode{"STRING_324092520"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPProgram{"STRING_1798241581"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPRegType{"STRING_915754971"}, UnderlyingInstrument_67);
      FIX::UnderlyingCapValue UnderlyingCapValue_67;
      UnderlyingCapValue_67.setString("16507664");
set_field(noUnderlyings_1_1_1, UnderlyingCapValue_67, UnderlyingInstrument_67);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_67;
      UnderlyingCashAmount_67.setString("21425166");
set_field(noUnderlyings_1_1_1, UnderlyingCashAmount_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_67);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_67;
      UnderlyingContractMultiplier_67.setString("13164042");
set_field(noUnderlyings_1_1_1, UnderlyingContractMultiplier_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingContractMultiplierUnit{1830808506}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_268937938"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_894065313"}, UnderlyingInstrument_67);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_67;
      UnderlyingCouponRate_67.setString("15.940000");
set_field(noUnderlyings_1_1_1, UnderlyingCouponRate_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCreditRating{"STRING_243462324"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_67);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_67;
      UnderlyingCurrentValue_67.setString("878170");
set_field(noUnderlyings_1_1_1, UnderlyingCurrentValue_67, UnderlyingInstrument_67);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_67;
      UnderlyingDetachmentPoint_67.setString("96.110000");
set_field(noUnderlyings_1_1_1, UnderlyingDetachmentPoint_67, UnderlyingInstrument_67);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_67;
      UnderlyingDirtyPrice_67.setString("11325407");
set_field(noUnderlyings_1_1_1, UnderlyingDirtyPrice_67, UnderlyingInstrument_67);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_67;
      UnderlyingEndPrice_67.setString("3415048");
set_field(noUnderlyings_1_1_1, UnderlyingEndPrice_67, UnderlyingInstrument_67);
      FIX::UnderlyingEndValue UnderlyingEndValue_67;
      UnderlyingEndValue_67.setString("15722103");
set_field(noUnderlyings_1_1_1, UnderlyingEndValue_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingExerciseStyle{2076835437}, UnderlyingInstrument_67);
      FIX::UnderlyingFXRate UnderlyingFXRate_67;
      UnderlyingFXRate_67.setString("4973326");
set_field(noUnderlyings_1_1_1, UnderlyingFXRate_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_67);
      FIX::UnderlyingFactor UnderlyingFactor_67;
      UnderlyingFactor_67.setString("20284268");
set_field(noUnderlyings_1_1_1, UnderlyingFactor_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFlowScheduleType{1259024260}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingInstrRegistry{"STRING_1701073467"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_120246937"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssuer{"STRING_683244389"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_438120553"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_704434991"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_722423008"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_225475352"}, UnderlyingInstrument_67);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_67;
      UnderlyingNotionalPercentageOutstanding_67.setString("75.120000");
set_field(noUnderlyings_1_1_1, UnderlyingNotionalPercentageOutstanding_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_67);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_67;
      UnderlyingOriginalNotionalPercentageOutstanding_67.setString("3.230000");
set_field(noUnderlyings_1_1_1, UnderlyingOriginalNotionalPercentageOutstanding_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_531810309"}, UnderlyingInstrument_67);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_67;
      UnderlyingPriceUnitOfMeasureQty_67.setString("3682139");
set_field(noUnderlyings_1_1_1, UnderlyingPriceUnitOfMeasureQty_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingProduct{337905268}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPutOrCall{1848214519}, UnderlyingInstrument_67);
      FIX::UnderlyingPx UnderlyingPx_67;
      UnderlyingPx_67.setString("515387");
set_field(noUnderlyings_1_1_1, UnderlyingPx_67, UnderlyingInstrument_67);
      FIX::UnderlyingQty UnderlyingQty_67;
      UnderlyingQty_67.setString("6068432");
set_field(noUnderlyings_1_1_1, UnderlyingQty_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_594796184"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1102210376"}, UnderlyingInstrument_67);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_67;
      UnderlyingRepurchaseRate_67.setString("55.310000");
set_field(noUnderlyings_1_1_1, UnderlyingRepurchaseRate_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepurchaseTerm{780338009}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRestructuringType{"STRING_1026902536"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityDesc{"STRING_938122592"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_731373973"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityID{"STRING_11959601"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityIDSource{"STRING_1279627409"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecuritySubType{"STRING_156100693"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityType{"STRING_2088795038"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSeniority{"STRING_1776960039"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlMethod{"STRING_1892329399"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_67);
      FIX::UnderlyingStartValue UnderlyingStartValue_67;
      UnderlyingStartValue_67.setString("8885006");
set_field(noUnderlyings_1_1_1, UnderlyingStartValue_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1445919219"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_67);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_67;
      UnderlyingStrikePrice_67.setString("18840397");
set_field(noUnderlyings_1_1_1, UnderlyingStrikePrice_67, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbol{"STRING_646936488"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbolSfx{"STRING_146684401"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingTimeUnit{"STRING_2109515124"}, UnderlyingInstrument_67);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_1675464000"}, UnderlyingInstrument_67);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_67;
      UnderlyingUnitOfMeasureQty_67.setString("5198653");
set_field(noUnderlyings_1_1_1, UnderlyingUnitOfMeasureQty_67, UnderlyingInstrument_67);
      all_values.push_back(UnderlyingInstrument_67);
      all_compo_names.insert("...NoOrders...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_142;
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_59790661"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_142);
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_888079266"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_142);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_142);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_134;
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipType{"STRING_1908005180"}, UnderlyingStipulations_NoUnderlyingStips_134);
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipValue{"STRING_939618048"}, UnderlyingStipulations_NoUnderlyingStips_134);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_134);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_135;
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipType{"STRING_2048010274"}, UnderlyingStipulations_NoUnderlyingStips_135);
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipValue{"STRING_355317717"}, UnderlyingStipulations_NoUnderlyingStips_135);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_135);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_145;
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_750832157"}, UndlyInstrumentParties_NoUndlyInstrumentParties_145);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_145);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyRole{921247313}, UndlyInstrumentParties_NoUndlyInstrumentParties_145);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_145);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1867029699"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{933206914}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_288);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_821098511"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{2023130392}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_289);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_874518304"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{450574902}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_290);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_146;
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1767976144"}, UndlyInstrumentParties_NoUndlyInstrumentParties_146);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_146);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyRole{1339075554}, UndlyInstrumentParties_NoUndlyInstrumentParties_146);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_146);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_639274360"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{763336946}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_291);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_802967839"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{1286210848}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_292);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_910021347"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{764999315}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_293);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_147;
        set_field(noUndlyInstrumentParties_1_1_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_814191200"}, UndlyInstrumentParties_NoUndlyInstrumentParties_147);
        set_field(noUndlyInstrumentParties_1_1_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_147);
        set_field(noUndlyInstrumentParties_1_1_2_2, FIX::UnderlyingInstrumentPartyRole{1868261114}, UndlyInstrumentParties_NoUndlyInstrumentParties_147);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_147);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294;
          set_field(noUndlyInstrumentPartySubIDs_1_1_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_170482309"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294);
          set_field(noUndlyInstrumentPartySubIDs_1_1_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1161944533}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_294);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noOrders_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_68;
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuer{"DATA_634503393"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuerLen{1110100357}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1062471160"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDescLen{989821110}, UnderlyingInstrument_68);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_68;
      UnderlyingAdjustedQuantity_68.setString("10044451");
set_field(noUnderlyings_1_1_2, UnderlyingAdjustedQuantity_68, UnderlyingInstrument_68);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_68;
      UnderlyingAllocationPercent_68.setString("33.170000");
set_field(noUnderlyings_1_1_2, UnderlyingAllocationPercent_68, UnderlyingInstrument_68);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_68;
      UnderlyingAttachmentPoint_68.setString("68.370000");
set_field(noUnderlyings_1_1_2, UnderlyingAttachmentPoint_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCFICode{"STRING_1925692447"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPProgram{"STRING_1354774419"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPRegType{"STRING_1845022888"}, UnderlyingInstrument_68);
      FIX::UnderlyingCapValue UnderlyingCapValue_68;
      UnderlyingCapValue_68.setString("7114157");
set_field(noUnderlyings_1_1_2, UnderlyingCapValue_68, UnderlyingInstrument_68);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_68;
      UnderlyingCashAmount_68.setString("283892");
set_field(noUnderlyings_1_1_2, UnderlyingCashAmount_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_68);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_68;
      UnderlyingContractMultiplier_68.setString("15859340");
set_field(noUnderlyings_1_1_2, UnderlyingContractMultiplier_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingContractMultiplierUnit{478964185}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1341162129"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_135223233"}, UnderlyingInstrument_68);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_68;
      UnderlyingCouponRate_68.setString("97.390000");
set_field(noUnderlyings_1_1_2, UnderlyingCouponRate_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCreditRating{"STRING_260090196"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_68);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_68;
      UnderlyingCurrentValue_68.setString("10630580");
set_field(noUnderlyings_1_1_2, UnderlyingCurrentValue_68, UnderlyingInstrument_68);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_68;
      UnderlyingDetachmentPoint_68.setString("84.410000");
set_field(noUnderlyings_1_1_2, UnderlyingDetachmentPoint_68, UnderlyingInstrument_68);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_68;
      UnderlyingDirtyPrice_68.setString("13439143");
set_field(noUnderlyings_1_1_2, UnderlyingDirtyPrice_68, UnderlyingInstrument_68);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_68;
      UnderlyingEndPrice_68.setString("18280573");
set_field(noUnderlyings_1_1_2, UnderlyingEndPrice_68, UnderlyingInstrument_68);
      FIX::UnderlyingEndValue UnderlyingEndValue_68;
      UnderlyingEndValue_68.setString("7274159");
set_field(noUnderlyings_1_1_2, UnderlyingEndValue_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingExerciseStyle{626317428}, UnderlyingInstrument_68);
      FIX::UnderlyingFXRate UnderlyingFXRate_68;
      UnderlyingFXRate_68.setString("15488348");
set_field(noUnderlyings_1_1_2, UnderlyingFXRate_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_68);
      FIX::UnderlyingFactor UnderlyingFactor_68;
      UnderlyingFactor_68.setString("7967997");
set_field(noUnderlyings_1_1_2, UnderlyingFactor_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFlowScheduleType{563295701}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingInstrRegistry{"STRING_88417599"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1906900094"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssuer{"STRING_1625766861"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_1078238710"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_763861580"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1291586531"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1056231899"}, UnderlyingInstrument_68);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_68;
      UnderlyingNotionalPercentageOutstanding_68.setString("3.790000");
set_field(noUnderlyings_1_1_2, UnderlyingNotionalPercentageOutstanding_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_68);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_68;
      UnderlyingOriginalNotionalPercentageOutstanding_68.setString("11.390000");
set_field(noUnderlyings_1_1_2, UnderlyingOriginalNotionalPercentageOutstanding_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1253486092"}, UnderlyingInstrument_68);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_68;
      UnderlyingPriceUnitOfMeasureQty_68.setString("5272665");
set_field(noUnderlyings_1_1_2, UnderlyingPriceUnitOfMeasureQty_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingProduct{326957124}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPutOrCall{691936462}, UnderlyingInstrument_68);
      FIX::UnderlyingPx UnderlyingPx_68;
      UnderlyingPx_68.setString("10062307");
set_field(noUnderlyings_1_1_2, UnderlyingPx_68, UnderlyingInstrument_68);
      FIX::UnderlyingQty UnderlyingQty_68;
      UnderlyingQty_68.setString("16681192");
set_field(noUnderlyings_1_1_2, UnderlyingQty_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_827159695"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_676786862"}, UnderlyingInstrument_68);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_68;
      UnderlyingRepurchaseRate_68.setString("94.490000");
set_field(noUnderlyings_1_1_2, UnderlyingRepurchaseRate_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepurchaseTerm{1601657288}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRestructuringType{"STRING_1110679900"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityDesc{"STRING_843783836"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1514882081"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityID{"STRING_307110638"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityIDSource{"STRING_524357538"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecuritySubType{"STRING_94814426"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityType{"STRING_933428066"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSeniority{"STRING_2073192354"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlMethod{"STRING_1696212280"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_68);
      FIX::UnderlyingStartValue UnderlyingStartValue_68;
      UnderlyingStartValue_68.setString("4890044");
set_field(noUnderlyings_1_1_2, UnderlyingStartValue_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1784629879"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_68);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_68;
      UnderlyingStrikePrice_68.setString("7153849");
set_field(noUnderlyings_1_1_2, UnderlyingStrikePrice_68, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbol{"STRING_106022182"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbolSfx{"STRING_1258874152"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingTimeUnit{"STRING_1771616840"}, UnderlyingInstrument_68);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_648092561"}, UnderlyingInstrument_68);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_68;
      UnderlyingUnitOfMeasureQty_68.setString("17577514");
set_field(noUnderlyings_1_1_2, UnderlyingUnitOfMeasureQty_68, UnderlyingInstrument_68);
      all_values.push_back(UnderlyingInstrument_68);
      all_compo_names.insert("...NoOrders...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_143;
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_1901578654"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_143);
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_137534392"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_143);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_143);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_144;
        set_field(noUnderlyingSecurityAltID_1_2_2_1, FIX::UnderlyingSecurityAltID{"STRING_704861456"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_144);
        set_field(noUnderlyingSecurityAltID_1_2_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_446031468"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_144);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_144);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_145;
        set_field(noUnderlyingSecurityAltID_1_2_2_2, FIX::UnderlyingSecurityAltID{"STRING_1143765163"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_145);
        set_field(noUnderlyingSecurityAltID_1_2_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_225497062"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_145);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_145);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_136;
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipType{"STRING_1820552026"}, UnderlyingStipulations_NoUnderlyingStips_136);
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipValue{"STRING_6222863"}, UnderlyingStipulations_NoUnderlyingStips_136);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_136);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_137;
        set_field(noUnderlyingStips_1_2_2_1, FIX::UnderlyingStipType{"STRING_727364803"}, UnderlyingStipulations_NoUnderlyingStips_137);
        set_field(noUnderlyingStips_1_2_2_1, FIX::UnderlyingStipValue{"STRING_783748278"}, UnderlyingStipulations_NoUnderlyingStips_137);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_137);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_148;
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_94763236"}, UndlyInstrumentParties_NoUndlyInstrumentParties_148);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_148);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyRole{1374364238}, UndlyInstrumentParties_NoUndlyInstrumentParties_148);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_148);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2024286982"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1300072945}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_295);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_149;
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1885789942"}, UndlyInstrumentParties_NoUndlyInstrumentParties_149);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_149);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyRole{1789077353}, UndlyInstrumentParties_NoUndlyInstrumentParties_149);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_149);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296;
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_949191739"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296);
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1756364974}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_296);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_0);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_150;
        set_field(noUndlyInstrumentParties_1_2_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_90837467"}, UndlyInstrumentParties_NoUndlyInstrumentParties_150);
        set_field(noUndlyInstrumentParties_1_2_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_150);
        set_field(noUndlyInstrumentParties_1_2_2_2, FIX::UnderlyingInstrumentPartyRole{867755479}, UndlyInstrumentParties_NoUndlyInstrumentParties_150);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_150);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297;
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1703306482"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297);
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{478023286}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_297);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298;
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_92874991"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298);
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{1457401488}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_298);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_3_1);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_2);
      }
      noOrders_0_1.addGroup(noUnderlyings_1_1_2);
    }
    // YieldData
    multiset<string> YieldData_15;
    FIX::Yield Yield_15;
    Yield_15.setString("76.780000");
set_field(noOrders_0_1, Yield_15, YieldData_15);
    set_field(noOrders_0_1, FIX::YieldCalcDate{"LOCALMKTDATE_797736448"}, YieldData_15);
    set_field(noOrders_0_1, FIX::YieldRedemptionDate{"LOCALMKTDATE_1903432956"}, YieldData_15);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_15;
    YieldRedemptionPrice_15.setString("17593228");
set_field(noOrders_0_1, YieldRedemptionPrice_15, YieldData_15);
    set_field(noOrders_0_1, FIX::YieldRedemptionPriceType{1023233510}, YieldData_15);
    set_field(noOrders_0_1, FIX::YieldType{"STRING_INVERSEFLOATER"}, YieldData_15);
    all_values.push_back(YieldData_15);
    all_compo_names.insert("...NoOrders.");

    msg.addGroup(noOrders_0_1);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::NewOrderList::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_6;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_1029456373"}, RootParties_NoRootPartyIDs_6);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_6);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{68655850}, RootParties_NoRootPartyIDs_6);
    all_values.push_back(RootParties_NoRootPartyIDs_6);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_11;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_1851268510"}, RootSubParties_NoRootPartySubIDs_11);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{1159514767}, RootSubParties_NoRootPartySubIDs_11);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_11);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // header
  multiset<string> header_52;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_52);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_2040846172"}, header_52);
  set_header_field(msg.getHeader(), FIX::BodyLength{1036318101}, header_52);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_258932961"}, header_52);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1779152466"}, header_52);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_495865591"}, header_52);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_2048010314"}, header_52);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1154604992}, header_52);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_52);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1656891640}, header_52);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1245442459"}, header_52);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_352787603"}, header_52);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_377163471"}, header_52);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(21, 37, 50, 6, 5, 2012)}, header_52);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_52);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_52);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_726774420"}, header_52);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{3618058}, header_52);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_367491202"}, header_52);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1756230793"}, header_52);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1760123332"}, header_52);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(3, 55, 39, 3, 4, 2011)}, header_52);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_706003196"}, header_52);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_988939538"}, header_52);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_980361864"}, header_52);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_606529862"}, header_52);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{2143544530}, header_52);
  all_values.push_back(header_52);
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
