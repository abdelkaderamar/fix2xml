#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::NewOrderList msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderList_0;
  set_field(msg, FIX::AllowableOneSidednessCurr{"GBP"}, NewOrderList_0);
  FIX::AllowableOneSidednessPct AllowableOneSidednessPct_0;
  AllowableOneSidednessPct_0.setString("24.510000");
set_field(msg, AllowableOneSidednessPct_0, NewOrderList_0);
  FIX::AllowableOneSidednessValue AllowableOneSidednessValue_0;
  AllowableOneSidednessValue_0.setString("1456188");
set_field(msg, AllowableOneSidednessValue_0, NewOrderList_0);
  set_field(msg, FIX::BidID{"STRING_16555751"}, NewOrderList_0);
  set_field(msg, FIX::BidType{3}, NewOrderList_0);
  set_field(msg, FIX::CancellationRights{'O'}, NewOrderList_0);
  set_field(msg, FIX::ClientBidID{"STRING_1911463700"}, NewOrderList_0);
  set_field(msg, FIX::ContingencyType{3}, NewOrderList_0);
  set_field(msg, FIX::EncodedListExecInst{"DATA_1365999371"}, NewOrderList_0);
  set_field(msg, FIX::EncodedListExecInstLen{796338628}, NewOrderList_0);
  set_field(msg, FIX::LastFragment{false}, NewOrderList_0);
  set_field(msg, FIX::ListExecInst{"STRING_1237121447"}, NewOrderList_0);
  set_field(msg, FIX::ListExecInstType{'1'}, NewOrderList_0);
  set_field(msg, FIX::ListID{"STRING_355599160"}, NewOrderList_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'Y'}, NewOrderList_0);
  set_field(msg, FIX::ProgPeriodInterval{302597280}, NewOrderList_0);
  set_field(msg, FIX::ProgRptReqs{3}, NewOrderList_0);
  set_field(msg, FIX::RegistID{"STRING_646732803"}, NewOrderList_0);
  set_field(msg, FIX::TotNoOrders{2112904107}, NewOrderList_0);
  all_values.push_back(NewOrderList_0);

  all_compo_names.insert("NewOrderList");

  // ListOrdGrp
  // Group ListOrdGrp.NoOrders
  {
    FIX50SP2::NewOrderList::NoOrders noOrders_0_0;
    // ListOrdGrp.NoOrders
    multiset<string> ListOrdGrp_NoOrders_0;
    set_field(noOrders_0_0, FIX::Account{"STRING_1876519942"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::AccountType{1}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::AcctIDSource{3}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::AllocID{"STRING_390542922"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::BookingType{0}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::BookingUnit{'1'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::CashMargin{'1'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_586514897"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ClOrdLinkID{"STRING_291276776"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ClearingFeeIndicator{"STRING_5"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ComplianceID{"STRING_1531529004"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::CoveredOrUncovered{0}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::Currency{"JPY"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::CustOrderCapacity{1}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::DayBookingInst{'1'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::Designation{"STRING_608302364"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::EffectiveTime{FIX::UTCTIMESTAMP(22, 55, 56, 19, 11, 2017)}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::EncodedText{"DATA_1256157579"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::EncodedTextLen{23183016}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ExDestination{"EXCHANGE_1158918029"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ExDestinationIDSource{'G'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ExecInst{"MULTIPLECHARVALUE_S"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ExpireDate{"LOCALMKTDATE_1124338488"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(18, 57, 47, 8, 3, 2016)}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ForexReq{false}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::GTBookingInst{1}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::HandlInst{'2'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::IOIID{"STRING_962086617"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ListSeqNo{313134707}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::LocateReqd{false}, ListOrdGrp_NoOrders_0);
    FIX::MatchIncrement MatchIncrement_4;
    MatchIncrement_4.setString("3881944");
set_field(noOrders_0_0, MatchIncrement_4, ListOrdGrp_NoOrders_0);
    FIX::MaxFloor MaxFloor_4;
    MaxFloor_4.setString("19902825");
set_field(noOrders_0_0, MaxFloor_4, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::MaxPriceLevels{1358107285}, ListOrdGrp_NoOrders_0);
    FIX::MaxShow MaxShow_4;
    MaxShow_4.setString("2940611");
set_field(noOrders_0_0, MaxShow_4, ListOrdGrp_NoOrders_0);
    FIX::MinQty MinQty_8;
    MinQty_8.setString("4511012");
set_field(noOrders_0_0, MinQty_8, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrdType{'M'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrderCapacity{'R'}, ListOrdGrp_NoOrders_0);
    FIX::OrderQty2 OrderQty2_5;
    OrderQty2_5.setString("2779193");
set_field(noOrders_0_0, OrderQty2_5, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_5"}, ListOrdGrp_NoOrders_0);
    FIX::ParticipationRate ParticipationRate_4;
    ParticipationRate_4.setString("71.990000");
set_field(noOrders_0_0, ParticipationRate_4, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::PositionEffect{'F'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::PreTradeAnonymity{false}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::PreallocMethod{'1'}, ListOrdGrp_NoOrders_0);
    FIX::PrevClosePx PrevClosePx_4;
    PrevClosePx_4.setString("13650419");
set_field(noOrders_0_0, PrevClosePx_4, ListOrdGrp_NoOrders_0);
    FIX::Price Price_14;
    Price_14.setString("4218744");
set_field(noOrders_0_0, Price_14, ListOrdGrp_NoOrders_0);
    FIX::Price2 Price2_0;
    Price2_0.setString("4258651");
set_field(noOrders_0_0, Price2_0, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::PriceProtectionScope{'1'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::PriceType{14}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ProcessCode{'2'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::QtyType{1}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::QuoteID{"STRING_1478509202"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::RefOrderID{"STRING_1958327918"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::RefOrderIDSource{'3'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_1821083656"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SettlCurrency{"USD"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SettlDate{"LOCALMKTDATE_602689359"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SettlDate2{"LOCALMKTDATE_230499600"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SettlInstMode{'3'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SettlType{"STRING_2"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::Side{'A'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SideValueInd{1}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SolicitedFlag{true}, ListOrdGrp_NoOrders_0);
    FIX::StopPx StopPx_4;
    StopPx_4.setString("13633738");
set_field(noOrders_0_0, StopPx_4, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::TargetStrategy{1}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::TargetStrategyParameters{"STRING_1209724238"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::Text{"STRING_1921317860"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::TimeInForce{'7'}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::TradeDate{"LOCALMKTDATE_1487643593"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::TradeOriginationDate{"LOCALMKTDATE_327953566"}, ListOrdGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(10, 49, 42, 4, 6, 2011)}, ListOrdGrp_NoOrders_0);
    all_values.push_back(ListOrdGrp_NoOrders_0);
    all_compo_names.insert("...NoOrders");

    // CommissionData
    multiset<string> CommissionData_14;
    set_field(noOrders_0_0, FIX::CommCurrency{"USD"}, CommissionData_14);
    set_field(noOrders_0_0, FIX::CommType{'3'}, CommissionData_14);
    FIX::Commission Commission_14;
    Commission_14.setString("734773");
set_field(noOrders_0_0, Commission_14, CommissionData_14);
    set_field(noOrders_0_0, FIX::FundRenewWaiv{'N'}, CommissionData_14);
    all_values.push_back(CommissionData_14);
    all_compo_names.insert("...NoOrders.");

    // DiscretionInstructions
    multiset<string> DiscretionInstructions_4;
    set_field(noOrders_0_0, FIX::DiscretionInst{'1'}, DiscretionInstructions_4);
    set_field(noOrders_0_0, FIX::DiscretionLimitType{1}, DiscretionInstructions_4);
    set_field(noOrders_0_0, FIX::DiscretionMoveType{0}, DiscretionInstructions_4);
    set_field(noOrders_0_0, FIX::DiscretionOffsetType{0}, DiscretionInstructions_4);
    FIX::DiscretionOffsetValue DiscretionOffsetValue_4;
    DiscretionOffsetValue_4.setString("1121437");
set_field(noOrders_0_0, DiscretionOffsetValue_4, DiscretionInstructions_4);
    set_field(noOrders_0_0, FIX::DiscretionRoundDirection{2}, DiscretionInstructions_4);
    set_field(noOrders_0_0, FIX::DiscretionScope{1}, DiscretionInstructions_4);
    all_values.push_back(DiscretionInstructions_4);
    all_compo_names.insert("...NoOrders.");

    // DisplayInstruction
    multiset<string> DisplayInstruction_4;
    FIX::DisplayHighQty DisplayHighQty_4;
    DisplayHighQty_4.setString("369754");
set_field(noOrders_0_0, DisplayHighQty_4, DisplayInstruction_4);
    FIX::DisplayLowQty DisplayLowQty_4;
    DisplayLowQty_4.setString("20821364");
set_field(noOrders_0_0, DisplayLowQty_4, DisplayInstruction_4);
    set_field(noOrders_0_0, FIX::DisplayMethod{'2'}, DisplayInstruction_4);
    FIX::DisplayMinIncr DisplayMinIncr_4;
    DisplayMinIncr_4.setString("3500017");
set_field(noOrders_0_0, DisplayMinIncr_4, DisplayInstruction_4);
    FIX::DisplayQty DisplayQty_4;
    DisplayQty_4.setString("6932757");
set_field(noOrders_0_0, DisplayQty_4, DisplayInstruction_4);
    set_field(noOrders_0_0, FIX::DisplayWhen{'1'}, DisplayInstruction_4);
    FIX::RefreshQty RefreshQty_4;
    RefreshQty_4.setString("9570890");
set_field(noOrders_0_0, RefreshQty_4, DisplayInstruction_4);
    FIX::SecondaryDisplayQty SecondaryDisplayQty_4;
    SecondaryDisplayQty_4.setString("19030000");
set_field(noOrders_0_0, SecondaryDisplayQty_4, DisplayInstruction_4);
    all_values.push_back(DisplayInstruction_4);
    all_compo_names.insert("...NoOrders.");

    // Instrument
    multiset<string> Instrument_38;
    FIX::AttachmentPoint AttachmentPoint_38;
    AttachmentPoint_38.setString("40.570000");
set_field(noOrders_0_0, AttachmentPoint_38, Instrument_38);
    set_field(noOrders_0_0, FIX::CFICode{"STRING_401111534"}, Instrument_38);
    set_field(noOrders_0_0, FIX::CPProgram{2}, Instrument_38);
    set_field(noOrders_0_0, FIX::CPRegType{"STRING_411227623"}, Instrument_38);
    FIX::CapPrice CapPrice_38;
    CapPrice_38.setString("17301112");
set_field(noOrders_0_0, CapPrice_38, Instrument_38);
    FIX::ContractMultiplier ContractMultiplier_38;
    ContractMultiplier_38.setString("19251788");
set_field(noOrders_0_0, ContractMultiplier_38, Instrument_38);
    set_field(noOrders_0_0, FIX::ContractMultiplierUnit{1}, Instrument_38);
    set_field(noOrders_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1905278375"}, Instrument_38);
    set_field(noOrders_0_0, FIX::CountryOfIssue{"COUNTRY_1824755898"}, Instrument_38);
    set_field(noOrders_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_14922150"}, Instrument_38);
    FIX::CouponRate CouponRate_38;
    CouponRate_38.setString("70.870000");
set_field(noOrders_0_0, CouponRate_38, Instrument_38);
    set_field(noOrders_0_0, FIX::CreditRating{"STRING_1611807068"}, Instrument_38);
    set_field(noOrders_0_0, FIX::DatedDate{"LOCALMKTDATE_1573919628"}, Instrument_38);
    FIX::DetachmentPoint DetachmentPoint_38;
    DetachmentPoint_38.setString("27.370000");
set_field(noOrders_0_0, DetachmentPoint_38, Instrument_38);
    set_field(noOrders_0_0, FIX::EncodedIssuer{"DATA_1685284429"}, Instrument_38);
    set_field(noOrders_0_0, FIX::EncodedIssuerLen{316459012}, Instrument_38);
    set_field(noOrders_0_0, FIX::EncodedSecurityDesc{"DATA_365999010"}, Instrument_38);
    set_field(noOrders_0_0, FIX::EncodedSecurityDescLen{687199371}, Instrument_38);
    set_field(noOrders_0_0, FIX::ExerciseStyle{0}, Instrument_38);
    FIX::Factor Factor_38;
    Factor_38.setString("12237824");
set_field(noOrders_0_0, Factor_38, Instrument_38);
    set_field(noOrders_0_0, FIX::FlexProductEligibilityIndicator{false}, Instrument_38);
    set_field(noOrders_0_0, FIX::FlexibleIndicator{false}, Instrument_38);
    FIX::FloorPrice FloorPrice_38;
    FloorPrice_38.setString("1645818");
set_field(noOrders_0_0, FloorPrice_38, Instrument_38);
    set_field(noOrders_0_0, FIX::FlowScheduleType{0}, Instrument_38);
    set_field(noOrders_0_0, FIX::InstrRegistry{"STRING_1981047269"}, Instrument_38);
    set_field(noOrders_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_38);
    set_field(noOrders_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1186320273"}, Instrument_38);
    set_field(noOrders_0_0, FIX::IssueDate{"LOCALMKTDATE_526839409"}, Instrument_38);
    set_field(noOrders_0_0, FIX::Issuer{"STRING_1567571380"}, Instrument_38);
    set_field(noOrders_0_0, FIX::ListMethod{0}, Instrument_38);
    set_field(noOrders_0_0, FIX::LocaleOfIssue{"STRING_282355787"}, Instrument_38);
    set_field(noOrders_0_0, FIX::MaturityDate{"LOCALMKTDATE_1650845437"}, Instrument_38);
    set_field(noOrders_0_0, FIX::MaturityMonthYear{"MONTHYEAR_397037214"}, Instrument_38);
    set_field(noOrders_0_0, FIX::MaturityTime{"TZTIMEONLY_1525515759"}, Instrument_38);
    FIX::MinPriceIncrement MinPriceIncrement_38;
    MinPriceIncrement_38.setString("20620730");
set_field(noOrders_0_0, MinPriceIncrement_38, Instrument_38);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_38;
    MinPriceIncrementAmount_38.setString("21271484");
set_field(noOrders_0_0, MinPriceIncrementAmount_38, Instrument_38);
    set_field(noOrders_0_0, FIX::NTPositionLimit{1303210918}, Instrument_38);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_38;
    NotionalPercentageOutstanding_38.setString("7.060000");
set_field(noOrders_0_0, NotionalPercentageOutstanding_38, Instrument_38);
    set_field(noOrders_0_0, FIX::OptAttribute{'1'}, Instrument_38);
    FIX::OptPayoutAmount OptPayoutAmount_38;
    OptPayoutAmount_38.setString("9804831");
set_field(noOrders_0_0, OptPayoutAmount_38, Instrument_38);
    set_field(noOrders_0_0, FIX::OptPayoutType{2}, Instrument_38);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_38;
    OriginalNotionalPercentageOutstanding_38.setString("65.940000");
set_field(noOrders_0_0, OriginalNotionalPercentageOutstanding_38, Instrument_38);
    set_field(noOrders_0_0, FIX::Pool{"STRING_444806588"}, Instrument_38);
    set_field(noOrders_0_0, FIX::PositionLimit{1505568837}, Instrument_38);
    set_field(noOrders_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_38);
    set_field(noOrders_0_0, FIX::PriceUnitOfMeasure{"STRING_2130091018"}, Instrument_38);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_38;
    PriceUnitOfMeasureQty_38.setString("18220278");
set_field(noOrders_0_0, PriceUnitOfMeasureQty_38, Instrument_38);
    set_field(noOrders_0_0, FIX::Product{4}, Instrument_38);
    set_field(noOrders_0_0, FIX::ProductComplex{"STRING_669806741"}, Instrument_38);
    set_field(noOrders_0_0, FIX::PutOrCall{0}, Instrument_38);
    set_field(noOrders_0_0, FIX::RedemptionDate{"LOCALMKTDATE_1069317173"}, Instrument_38);
    set_field(noOrders_0_0, FIX::RepoCollateralSecurityType{"STRING_1469149835"}, Instrument_38);
    FIX::RepurchaseRate RepurchaseRate_38;
    RepurchaseRate_38.setString("70.570000");
set_field(noOrders_0_0, RepurchaseRate_38, Instrument_38);
    set_field(noOrders_0_0, FIX::RepurchaseTerm{1233899071}, Instrument_38);
    set_field(noOrders_0_0, FIX::RestructuringType{"STRING_FR"}, Instrument_38);
    set_field(noOrders_0_0, FIX::SecurityDesc{"STRING_287100678"}, Instrument_38);
    set_field(noOrders_0_0, FIX::SecurityExchange{"EXCHANGE_344546959"}, Instrument_38);
    set_field(noOrders_0_0, FIX::SecurityGroup{"STRING_1344305025"}, Instrument_38);
    set_field(noOrders_0_0, FIX::SecurityID{"STRING_813940087"}, Instrument_38);
    set_field(noOrders_0_0, FIX::SecurityIDSource{"STRING_1"}, Instrument_38);
    set_field(noOrders_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_38);
    set_field(noOrders_0_0, FIX::SecuritySubType{"STRING_1096295875"}, Instrument_38);
    set_field(noOrders_0_0, FIX::SecurityType{"STRING_TB"}, Instrument_38);
    set_field(noOrders_0_0, FIX::Seniority{"STRING_SR"}, Instrument_38);
    set_field(noOrders_0_0, FIX::SettlMethod{'C'}, Instrument_38);
    set_field(noOrders_0_0, FIX::SettleOnOpenFlag{"STRING_1330069542"}, Instrument_38);
    set_field(noOrders_0_0, FIX::StateOrProvinceOfIssue{"STRING_1716932699"}, Instrument_38);
    set_field(noOrders_0_0, FIX::StrikeCurrency{"GBP"}, Instrument_38);
    FIX::StrikeMultiplier StrikeMultiplier_38;
    StrikeMultiplier_38.setString("14543922");
set_field(noOrders_0_0, StrikeMultiplier_38, Instrument_38);
    FIX::StrikePrice StrikePrice_38;
    StrikePrice_38.setString("6105384");
set_field(noOrders_0_0, StrikePrice_38, Instrument_38);
    set_field(noOrders_0_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_38);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_38;
    StrikePriceBoundaryPrecision_38.setString("88.010000");
set_field(noOrders_0_0, StrikePriceBoundaryPrecision_38, Instrument_38);
    set_field(noOrders_0_0, FIX::StrikePriceDeterminationMethod{2}, Instrument_38);
    FIX::StrikeValue StrikeValue_38;
    StrikeValue_38.setString("5365309");
set_field(noOrders_0_0, StrikeValue_38, Instrument_38);
    set_field(noOrders_0_0, FIX::Symbol{"STRING_1030214485"}, Instrument_38);
    set_field(noOrders_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_38);
    set_field(noOrders_0_0, FIX::TimeUnit{"STRING_Yr"}, Instrument_38);
    set_field(noOrders_0_0, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_38);
    set_field(noOrders_0_0, FIX::UnitOfMeasure{"STRING_Gal"}, Instrument_38);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_38;
    UnitOfMeasureQty_38.setString("7657014");
set_field(noOrders_0_0, UnitOfMeasureQty_38, Instrument_38);
    set_field(noOrders_0_0, FIX::ValuationMethod{"STRING_CDS"}, Instrument_38);
    all_values.push_back(Instrument_38);
    all_compo_names.insert("...NoOrders.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_79;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_79);
      FIX::ComplexEventPrice ComplexEventPrice_79;
      ComplexEventPrice_79.setString("10314817");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_79, ComplexEvents_NoComplexEvents_79);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_79);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_79;
      ComplexEventPriceBoundaryPrecision_79.setString("91.890000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_79, ComplexEvents_NoComplexEvents_79);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_79);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_79);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_79;
      ComplexOptPayoutAmount_79.setString("1727956");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_79, ComplexEvents_NoComplexEvents_79);
      all_values.push_back(ComplexEvents_NoComplexEvents_79);
      all_compo_names.insert("...NoOrders....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_163;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 29, 57, 22, 1, 2013)}, ComplexEventDates_NoComplexEventDates_163);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 48, 12, 5, 6, 2007)}, ComplexEventDates_NoComplexEventDates_163);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_163);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_328;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 3, 27)}, ComplexEventTimes_NoComplexEventTimes_328);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 52, 22)}, ComplexEventTimes_NoComplexEventTimes_328);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_328);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_164;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 6, 49, 12, 4, 2010)}, ComplexEventDates_NoComplexEventDates_164);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 54, 26, 10, 5, 2000)}, ComplexEventDates_NoComplexEventDates_164);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_164);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_329;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 31, 7)}, ComplexEventTimes_NoComplexEventTimes_329);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 37, 43)}, ComplexEventTimes_NoComplexEventTimes_329);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_329);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_330;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 38, 59)}, ComplexEventTimes_NoComplexEventTimes_330);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 43, 42)}, ComplexEventTimes_NoComplexEventTimes_330);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_330);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_165;
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 48, 55, 4, 8, 2015)}, ComplexEventDates_NoComplexEventDates_165);
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 31, 34, 18, 1, 2016)}, ComplexEventDates_NoComplexEventDates_165);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_165);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_331;
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 57, 43)}, ComplexEventTimes_NoComplexEventTimes_331);
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 12, 6)}, ComplexEventTimes_NoComplexEventTimes_331);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_331);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_332;
          set_field(noComplexEventTimes_0_0_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 37, 13)}, ComplexEventTimes_NoComplexEventTimes_332);
          set_field(noComplexEventTimes_0_0_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 56, 44)}, ComplexEventTimes_NoComplexEventTimes_332);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_332);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noOrders_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_80;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_80);
      FIX::ComplexEventPrice ComplexEventPrice_80;
      ComplexEventPrice_80.setString("1254278");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_80, ComplexEvents_NoComplexEvents_80);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_80);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_80;
      ComplexEventPriceBoundaryPrecision_80.setString("60.060000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_80, ComplexEvents_NoComplexEvents_80);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_80);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_80);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_80;
      ComplexOptPayoutAmount_80.setString("7211300");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_80, ComplexEvents_NoComplexEvents_80);
      all_values.push_back(ComplexEvents_NoComplexEvents_80);
      all_compo_names.insert("...NoOrders....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_166;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 59, 17, 7, 8, 2001)}, ComplexEventDates_NoComplexEventDates_166);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 41, 5, 25, 12, 2005)}, ComplexEventDates_NoComplexEventDates_166);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_166);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_333;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 37, 51)}, ComplexEventTimes_NoComplexEventTimes_333);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 40, 37)}, ComplexEventTimes_NoComplexEventTimes_333);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_333);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_334;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 53, 57)}, ComplexEventTimes_NoComplexEventTimes_334);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 41, 40)}, ComplexEventTimes_NoComplexEventTimes_334);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_334);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_335;
          set_field(noComplexEventTimes_0_1_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 39, 53)}, ComplexEventTimes_NoComplexEventTimes_335);
          set_field(noComplexEventTimes_0_1_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 36, 5)}, ComplexEventTimes_NoComplexEventTimes_335);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_335);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_167;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 11, 15, 13, 5, 2005)}, ComplexEventDates_NoComplexEventDates_167);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 52, 54, 17, 6, 2004)}, ComplexEventDates_NoComplexEventDates_167);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_167);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_336;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 36, 30)}, ComplexEventTimes_NoComplexEventTimes_336);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 11, 7)}, ComplexEventTimes_NoComplexEventTimes_336);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_336);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_337;
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 46, 13)}, ComplexEventTimes_NoComplexEventTimes_337);
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 42, 39)}, ComplexEventTimes_NoComplexEventTimes_337);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_337);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_168;
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 50, 50, 20, 12, 2011)}, ComplexEventDates_NoComplexEventDates_168);
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 57, 22, 8, 7, 2002)}, ComplexEventDates_NoComplexEventDates_168);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_168);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_338;
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 56, 24)}, ComplexEventTimes_NoComplexEventTimes_338);
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 35, 40)}, ComplexEventTimes_NoComplexEventTimes_338);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_338);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_339;
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 27, 7)}, ComplexEventTimes_NoComplexEventTimes_339);
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 49, 32)}, ComplexEventTimes_NoComplexEventTimes_339);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_339);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noOrders_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_81;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_81);
      FIX::ComplexEventPrice ComplexEventPrice_81;
      ComplexEventPrice_81.setString("13038810");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_81, ComplexEvents_NoComplexEvents_81);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_81);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_81;
      ComplexEventPriceBoundaryPrecision_81.setString("87.370000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_81, ComplexEvents_NoComplexEvents_81);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_81);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_81);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_81;
      ComplexOptPayoutAmount_81.setString("21181582");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_81, ComplexEvents_NoComplexEvents_81);
      all_values.push_back(ComplexEvents_NoComplexEvents_81);
      all_compo_names.insert("...NoOrders....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_169;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 54, 33, 17, 8, 2008)}, ComplexEventDates_NoComplexEventDates_169);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 32, 32, 23, 6, 2002)}, ComplexEventDates_NoComplexEventDates_169);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_169);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_340;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 23, 6)}, ComplexEventTimes_NoComplexEventTimes_340);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 47, 51)}, ComplexEventTimes_NoComplexEventTimes_340);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_340);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_341;
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 5, 8)}, ComplexEventTimes_NoComplexEventTimes_341);
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 3, 49)}, ComplexEventTimes_NoComplexEventTimes_341);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_341);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_342;
          set_field(noComplexEventTimes_0_2_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 43, 44)}, ComplexEventTimes_NoComplexEventTimes_342);
          set_field(noComplexEventTimes_0_2_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 29, 8)}, ComplexEventTimes_NoComplexEventTimes_342);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_342);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_170;
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 40, 24, 11, 5, 2008)}, ComplexEventDates_NoComplexEventDates_170);
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 35, 4, 14, 7, 2015)}, ComplexEventDates_NoComplexEventDates_170);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_170);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_343;
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 58, 42)}, ComplexEventTimes_NoComplexEventTimes_343);
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 37, 16)}, ComplexEventTimes_NoComplexEventTimes_343);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_343);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_344;
          set_field(noComplexEventTimes_0_2_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 51, 17)}, ComplexEventTimes_NoComplexEventTimes_344);
          set_field(noComplexEventTimes_0_2_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 38, 15)}, ComplexEventTimes_NoComplexEventTimes_344);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_344);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_171;
        set_field(noComplexEventDates_0_2_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 48, 34, 7, 9, 2016)}, ComplexEventDates_NoComplexEventDates_171);
        set_field(noComplexEventDates_0_2_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 13, 33, 13, 9, 2016)}, ComplexEventDates_NoComplexEventDates_171);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_171);
        all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_345;
          set_field(noComplexEventTimes_0_2_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 13, 51)}, ComplexEventTimes_NoComplexEventTimes_345);
          set_field(noComplexEventTimes_0_2_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 28, 9)}, ComplexEventTimes_NoComplexEventTimes_345);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_345);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_346;
          set_field(noComplexEventTimes_0_2_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 53, 9)}, ComplexEventTimes_NoComplexEventTimes_346);
          set_field(noComplexEventTimes_0_2_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 39, 59)}, ComplexEventTimes_NoComplexEventTimes_346);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_346);
          all_compo_names.insert("...NoOrders....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_2);
      }
      noOrders_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_80;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1425899111"}, EvntGrp_NoEvents_80);
      FIX::EventPx EventPx_80;
      EventPx_80.setString("5351999");
set_field(noEvents_0_1_0, EventPx_80, EvntGrp_NoEvents_80);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1835477620"}, EvntGrp_NoEvents_80);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(11, 18, 11, 19, 9, 2000)}, EvntGrp_NoEvents_80);
      set_field(noEvents_0_1_0, FIX::EventType{13}, EvntGrp_NoEvents_80);
      all_values.push_back(EvntGrp_NoEvents_80);
      all_compo_names.insert("...NoOrders....NoEvents");

      noOrders_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_81;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_251905448"}, EvntGrp_NoEvents_81);
      FIX::EventPx EventPx_81;
      EventPx_81.setString("7225389");
set_field(noEvents_0_1_1, EventPx_81, EvntGrp_NoEvents_81);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_1653940075"}, EvntGrp_NoEvents_81);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(19, 0, 17, 24, 3, 2007)}, EvntGrp_NoEvents_81);
      set_field(noEvents_0_1_1, FIX::EventType{7}, EvntGrp_NoEvents_81);
      all_values.push_back(EvntGrp_NoEvents_81);
      all_compo_names.insert("...NoOrders....NoEvents");

      noOrders_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_72;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_437534113"}, InstrumentParties_NoInstrumentParties_72);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_72);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1179580759}, InstrumentParties_NoInstrumentParties_72);
      all_values.push_back(InstrumentParties_NoInstrumentParties_72);
      all_compo_names.insert("...NoOrders....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_556982754"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{2084238298}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145);
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
      multiset<string> SecAltIDGrp_NoSecurityAltID_80;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_346157579"}, SecAltIDGrp_NoSecurityAltID_80);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1362653762"}, SecAltIDGrp_NoSecurityAltID_80);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_80);
      all_compo_names.insert("...NoOrders....NoSecurityAltID");

      noOrders_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_81;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_457017027"}, SecAltIDGrp_NoSecurityAltID_81);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_34151551"}, SecAltIDGrp_NoSecurityAltID_81);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_81);
      all_compo_names.insert("...NoOrders....NoSecurityAltID");

      noOrders_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_82;
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltID{"STRING_821190516"}, SecAltIDGrp_NoSecurityAltID_82);
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltIDSource{"STRING_1742893526"}, SecAltIDGrp_NoSecurityAltID_82);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_82);
      all_compo_names.insert("...NoOrders....NoSecurityAltID");

      noOrders_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_76;
    set_field(noOrders_0_0, FIX::SecurityXML{"XMLDATA_1237379330"}, SecurityXML_76);
    set_field(noOrders_0_0, FIX::SecurityXMLLen{261013540}, SecurityXML_76);
    set_field(noOrders_0_0, FIX::SecurityXMLSchema{"STRING_368606069"}, SecurityXML_76);
    all_values.push_back(SecurityXML_76);
    all_compo_names.insert("...NoOrders..");

    // OrderQtyData
    multiset<string> OrderQtyData_11;
    FIX::CashOrderQty CashOrderQty_11;
    CashOrderQty_11.setString("6032503");
set_field(noOrders_0_0, CashOrderQty_11, OrderQtyData_11);
    FIX::OrderPercent OrderPercent_11;
    OrderPercent_11.setString("19.760000");
set_field(noOrders_0_0, OrderPercent_11, OrderQtyData_11);
    FIX::OrderQty OrderQty_19;
    OrderQty_19.setString("5868676");
set_field(noOrders_0_0, OrderQty_19, OrderQtyData_11);
    set_field(noOrders_0_0, FIX::RoundingDirection{'1'}, OrderQtyData_11);
    FIX::RoundingModulus RoundingModulus_11;
    RoundingModulus_11.setString("14345209");
set_field(noOrders_0_0, RoundingModulus_11, OrderQtyData_11);
    all_values.push_back(OrderQtyData_11);
    all_compo_names.insert("...NoOrders.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_74;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_1655831627"}, Parties_NoPartyIDs_74);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_74);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{39}, Parties_NoPartyIDs_74);
      all_values.push_back(Parties_NoPartyIDs_74);
      all_compo_names.insert("...NoOrders...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_143;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_249969976"}, PtysSubGrp_NoPartySubIDs_143);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_143);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_143);
        all_compo_names.insert("...NoOrders...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_144;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_753015214"}, PtysSubGrp_NoPartySubIDs_144);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_144);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_144);
        all_compo_names.insert("...NoOrders...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_145;
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubID{"STRING_1402188865"}, PtysSubGrp_NoPartySubIDs_145);
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_145);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_145);
        all_compo_names.insert("...NoOrders...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_75;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_628172893"}, Parties_NoPartyIDs_75);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'C'}, Parties_NoPartyIDs_75);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{46}, Parties_NoPartyIDs_75);
      all_values.push_back(Parties_NoPartyIDs_75);
      all_compo_names.insert("...NoOrders...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_146;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_371040627"}, PtysSubGrp_NoPartySubIDs_146);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_146);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_146);
        all_compo_names.insert("...NoOrders...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_147;
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubID{"STRING_1531313227"}, PtysSubGrp_NoPartySubIDs_147);
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubIDType{21}, PtysSubGrp_NoPartySubIDs_147);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_147);
        all_compo_names.insert("...NoOrders...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noOrders_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // PegInstructions
    multiset<string> PegInstructions_4;
    set_field(noOrders_0_0, FIX::PegLimitType{2}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegMoveType{0}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegOffsetType{1}, PegInstructions_4);
    FIX::PegOffsetValue PegOffsetValue_4;
    PegOffsetValue_4.setString("16786107");
set_field(noOrders_0_0, PegOffsetValue_4, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegPriceType{5}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegRoundDirection{2}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegScope{4}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegSecurityDesc{"STRING_1258610854"}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegSecurityID{"STRING_1380396774"}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegSecurityIDSource{"STRING_486600821"}, PegInstructions_4);
    set_field(noOrders_0_0, FIX::PegSymbol{"STRING_2113766696"}, PegInstructions_4);
    all_values.push_back(PegInstructions_4);
    all_compo_names.insert("...NoOrders.");

    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_12;
      set_field(noAllocs_0_1_0, FIX::AllocAccount{"STRING_579924930"}, PreAllocGrp_NoAllocs_12);
      set_field(noAllocs_0_1_0, FIX::AllocAcctIDSource{1622114676}, PreAllocGrp_NoAllocs_12);
      FIX::AllocQty AllocQty_24;
      AllocQty_24.setString("18909365");
set_field(noAllocs_0_1_0, AllocQty_24, PreAllocGrp_NoAllocs_12);
      set_field(noAllocs_0_1_0, FIX::AllocSettlCurrency{"GBP"}, PreAllocGrp_NoAllocs_12);
      set_field(noAllocs_0_1_0, FIX::IndividualAllocID{"STRING_2140906531"}, PreAllocGrp_NoAllocs_12);
      all_values.push_back(PreAllocGrp_NoAllocs_12);
      all_compo_names.insert("...NoOrders...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_71;
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyID{"STRING_623253538"}, NestedParties_NoNestedPartyIDs_71);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_71);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyRole{563812244}, NestedParties_NoNestedPartyIDs_71);
        all_values.push_back(NestedParties_NoNestedPartyIDs_71);
        all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_155;
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubID{"STRING_1976196779"}, NstdPtysSubGrp_NoNestedPartySubIDs_155);
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubIDType{998098221}, NstdPtysSubGrp_NoNestedPartySubIDs_155);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_155);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_156;
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubID{"STRING_1370685982"}, NstdPtysSubGrp_NoNestedPartySubIDs_156);
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubIDType{1013868779}, NstdPtysSubGrp_NoNestedPartySubIDs_156);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_156);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoAllocs noAllocs_0_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_13;
      set_field(noAllocs_0_1_1, FIX::AllocAccount{"STRING_1369138848"}, PreAllocGrp_NoAllocs_13);
      set_field(noAllocs_0_1_1, FIX::AllocAcctIDSource{849386147}, PreAllocGrp_NoAllocs_13);
      FIX::AllocQty AllocQty_25;
      AllocQty_25.setString("3976983");
set_field(noAllocs_0_1_1, AllocQty_25, PreAllocGrp_NoAllocs_13);
      set_field(noAllocs_0_1_1, FIX::AllocSettlCurrency{"GBP"}, PreAllocGrp_NoAllocs_13);
      set_field(noAllocs_0_1_1, FIX::IndividualAllocID{"STRING_1963163136"}, PreAllocGrp_NoAllocs_13);
      all_values.push_back(PreAllocGrp_NoAllocs_13);
      all_compo_names.insert("...NoOrders...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_72;
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyID{"STRING_316230408"}, NestedParties_NoNestedPartyIDs_72);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_72);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyRole{2031165644}, NestedParties_NoNestedPartyIDs_72);
        all_values.push_back(NestedParties_NoNestedPartyIDs_72);
        all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_157;
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubID{"STRING_1729650803"}, NstdPtysSubGrp_NoNestedPartySubIDs_157);
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubIDType{1264078770}, NstdPtysSubGrp_NoNestedPartySubIDs_157);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_157);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_158;
          set_field(noNestedPartySubIDs_0_1_0_3_1, FIX::NestedPartySubID{"STRING_702564369"}, NstdPtysSubGrp_NoNestedPartySubIDs_158);
          set_field(noNestedPartySubIDs_0_1_0_3_1, FIX::NestedPartySubIDType{1695933852}, NstdPtysSubGrp_NoNestedPartySubIDs_158);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_158);
          all_compo_names.insert("...NoOrders...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      noOrders_0_0.addGroup(noAllocs_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_17;
    set_field(noOrders_0_0, FIX::BenchmarkCurveCurrency{"JPY"}, SpreadOrBenchmarkCurveData_17);
    set_field(noOrders_0_0, FIX::BenchmarkCurveName{"STRING_LIBID"}, SpreadOrBenchmarkCurveData_17);
    set_field(noOrders_0_0, FIX::BenchmarkCurvePoint{"STRING_1674965732"}, SpreadOrBenchmarkCurveData_17);
    FIX::BenchmarkPrice BenchmarkPrice_17;
    BenchmarkPrice_17.setString("4187597");
set_field(noOrders_0_0, BenchmarkPrice_17, SpreadOrBenchmarkCurveData_17);
    set_field(noOrders_0_0, FIX::BenchmarkPriceType{1040803204}, SpreadOrBenchmarkCurveData_17);
    set_field(noOrders_0_0, FIX::BenchmarkSecurityID{"STRING_1668388615"}, SpreadOrBenchmarkCurveData_17);
    set_field(noOrders_0_0, FIX::BenchmarkSecurityIDSource{"STRING_1727866758"}, SpreadOrBenchmarkCurveData_17);
    FIX::Spread Spread_17;
    Spread_17.setString("16640567");
set_field(noOrders_0_0, Spread_17, SpreadOrBenchmarkCurveData_17);
    all_values.push_back(SpreadOrBenchmarkCurveData_17);
    all_compo_names.insert("...NoOrders.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::NewOrderList::NoOrders::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_26;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_MHP"}, Stipulations_NoStipulations_26);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_1330375961"}, Stipulations_NoStipulations_26);
      all_values.push_back(Stipulations_NoStipulations_26);
      all_compo_names.insert("...NoOrders...NoStipulations");

      noOrders_0_0.addGroup(noStipulations_0_1_0);
    }
    // StrategyParametersGrp
    // Group StrategyParametersGrp.NoStrategyParameters
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_0_1_0;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_5;
      set_field(noStrategyParameters_0_1_0, FIX::StrategyParameterName{"STRING_1142293576"}, StrategyParametersGrp_NoStrategyParameters_5);
      set_field(noStrategyParameters_0_1_0, FIX::StrategyParameterType{22}, StrategyParametersGrp_NoStrategyParameters_5);
      set_field(noStrategyParameters_0_1_0, FIX::StrategyParameterValue{"STRING_1711510764"}, StrategyParametersGrp_NoStrategyParameters_5);
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_5);
      all_compo_names.insert("...NoOrders...NoStrategyParameters");

      noOrders_0_0.addGroup(noStrategyParameters_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoStrategyParameters noStrategyParameters_0_1_1;
      // StrategyParametersGrp.NoStrategyParameters
      multiset<string> StrategyParametersGrp_NoStrategyParameters_6;
      set_field(noStrategyParameters_0_1_1, FIX::StrategyParameterName{"STRING_363948776"}, StrategyParametersGrp_NoStrategyParameters_6);
      set_field(noStrategyParameters_0_1_1, FIX::StrategyParameterType{7}, StrategyParametersGrp_NoStrategyParameters_6);
      set_field(noStrategyParameters_0_1_1, FIX::StrategyParameterValue{"STRING_2109209122"}, StrategyParametersGrp_NoStrategyParameters_6);
      all_values.push_back(StrategyParametersGrp_NoStrategyParameters_6);
      all_compo_names.insert("...NoOrders...NoStrategyParameters");

      noOrders_0_0.addGroup(noStrategyParameters_0_1_1);
    }
    // TrdgSesGrp
    // Group TrdgSesGrp.NoTradingSessions
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_0;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_10;
      set_field(noTradingSessions_0_1_0, FIX::TradingSessionID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_10);
      set_field(noTradingSessions_0_1_0, FIX::TradingSessionSubID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_10);
      all_values.push_back(TrdgSesGrp_NoTradingSessions_10);
      all_compo_names.insert("...NoOrders...NoTradingSessions");

      noOrders_0_0.addGroup(noTradingSessions_0_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_1;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_11;
      set_field(noTradingSessions_0_1_1, FIX::TradingSessionID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_11);
      set_field(noTradingSessions_0_1_1, FIX::TradingSessionSubID{"STRING_7"}, TrdgSesGrp_NoTradingSessions_11);
      all_values.push_back(TrdgSesGrp_NoTradingSessions_11);
      all_compo_names.insert("...NoOrders...NoTradingSessions");

      noOrders_0_0.addGroup(noTradingSessions_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoTradingSessions noTradingSessions_0_1_2;
      // TrdgSesGrp.NoTradingSessions
      multiset<string> TrdgSesGrp_NoTradingSessions_12;
      set_field(noTradingSessions_0_1_2, FIX::TradingSessionID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_12);
      set_field(noTradingSessions_0_1_2, FIX::TradingSessionSubID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_12);
      all_values.push_back(TrdgSesGrp_NoTradingSessions_12);
      all_compo_names.insert("...NoOrders...NoTradingSessions");

      noOrders_0_0.addGroup(noTradingSessions_0_1_2);
    }
    // TriggeringInstruction
    multiset<string> TriggeringInstruction_4;
    set_field(noOrders_0_0, FIX::TriggerAction{'3'}, TriggeringInstruction_4);
    FIX::TriggerNewPrice TriggerNewPrice_4;
    TriggerNewPrice_4.setString("19780957");
set_field(noOrders_0_0, TriggerNewPrice_4, TriggeringInstruction_4);
    FIX::TriggerNewQty TriggerNewQty_4;
    TriggerNewQty_4.setString("16823263");
set_field(noOrders_0_0, TriggerNewQty_4, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerOrderType{'2'}, TriggeringInstruction_4);
    FIX::TriggerPrice TriggerPrice_4;
    TriggerPrice_4.setString("15265459");
set_field(noOrders_0_0, TriggerPrice_4, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerPriceDirection{'U'}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerPriceType{'6'}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerPriceTypeScope{'3'}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerSecurityDesc{"STRING_993837590"}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerSecurityID{"STRING_829107842"}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerSecurityIDSource{"STRING_1590430355"}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerSymbol{"STRING_514742558"}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerTradingSessionID{"STRING_409490953"}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerTradingSessionSubID{"STRING_1107003450"}, TriggeringInstruction_4);
    set_field(noOrders_0_0, FIX::TriggerType{'4'}, TriggeringInstruction_4);
    all_values.push_back(TriggeringInstruction_4);
    all_compo_names.insert("...NoOrders.");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_64;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_289895763"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{2081313396}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1695979884"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{843474059}, UnderlyingInstrument_64);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_64;
      UnderlyingAdjustedQuantity_64.setString("16453405");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_64, UnderlyingInstrument_64);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_64;
      UnderlyingAllocationPercent_64.setString("86.600000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_64, UnderlyingInstrument_64);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_64;
      UnderlyingAttachmentPoint_64.setString("48.530000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_1607065986"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_1231743377"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_139538986"}, UnderlyingInstrument_64);
      FIX::UnderlyingCapValue UnderlyingCapValue_64;
      UnderlyingCapValue_64.setString("13844709");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_64, UnderlyingInstrument_64);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_64;
      UnderlyingCashAmount_64.setString("17663089");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_64);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_64;
      UnderlyingContractMultiplier_64.setString("16329158");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{37072852}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1069131617"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1463527927"}, UnderlyingInstrument_64);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_64;
      UnderlyingCouponRate_64.setString("91.810000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_196990428"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_64);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_64;
      UnderlyingCurrentValue_64.setString("6073385");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_64, UnderlyingInstrument_64);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_64;
      UnderlyingDetachmentPoint_64.setString("73.490000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_64, UnderlyingInstrument_64);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_64;
      UnderlyingDirtyPrice_64.setString("20321086");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_64, UnderlyingInstrument_64);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_64;
      UnderlyingEndPrice_64.setString("14364463");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_64, UnderlyingInstrument_64);
      FIX::UnderlyingEndValue UnderlyingEndValue_64;
      UnderlyingEndValue_64.setString("8351640");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{399367540}, UnderlyingInstrument_64);
      FIX::UnderlyingFXRate UnderlyingFXRate_64;
      UnderlyingFXRate_64.setString("18459373");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_64);
      FIX::UnderlyingFactor UnderlyingFactor_64;
      UnderlyingFactor_64.setString("17830389");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{252139995}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_84579623"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1716868700"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_1948119879"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_928053682"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1214725565"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1860564891"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1027008535"}, UnderlyingInstrument_64);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_64;
      UnderlyingNotionalPercentageOutstanding_64.setString("79.030000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_64);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_64;
      UnderlyingOriginalNotionalPercentageOutstanding_64.setString("75.220000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2058778852"}, UnderlyingInstrument_64);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_64;
      UnderlyingPriceUnitOfMeasureQty_64.setString("5636499");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{1662901050}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{1544211065}, UnderlyingInstrument_64);
      FIX::UnderlyingPx UnderlyingPx_64;
      UnderlyingPx_64.setString("6007227");
set_field(noUnderlyings_0_1_0, UnderlyingPx_64, UnderlyingInstrument_64);
      FIX::UnderlyingQty UnderlyingQty_64;
      UnderlyingQty_64.setString("5845490");
set_field(noUnderlyings_0_1_0, UnderlyingQty_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_860255344"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_172638298"}, UnderlyingInstrument_64);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_64;
      UnderlyingRepurchaseRate_64.setString("94.480000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{1702845543}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_1210909338"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_1388877987"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_947579244"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_1095534320"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_677840721"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_1782743301"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_1494901861"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_376294408"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_1577427161"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_64);
      FIX::UnderlyingStartValue UnderlyingStartValue_64;
      UnderlyingStartValue_64.setString("6284344");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1662006784"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_64);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_64;
      UnderlyingStrikePrice_64.setString("4425768");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_64, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_1914567782"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_142151877"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_1469585353"}, UnderlyingInstrument_64);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_441392038"}, UnderlyingInstrument_64);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_64;
      UnderlyingUnitOfMeasureQty_64.setString("10869764");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_64, UnderlyingInstrument_64);
      all_values.push_back(UnderlyingInstrument_64);
      all_compo_names.insert("...NoOrders...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_136;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_352687242"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_136);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1650626410"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_136);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_136);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_137;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_4066629"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_137);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1896898307"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_137);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_137);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_138;
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_103865526"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_138);
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_588615649"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_138);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_138);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_122;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_276503824"}, UnderlyingStipulations_NoUnderlyingStips_122);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_1370155097"}, UnderlyingStipulations_NoUnderlyingStips_122);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_122);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_123;
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipType{"STRING_165031899"}, UnderlyingStipulations_NoUnderlyingStips_123);
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipValue{"STRING_1487413162"}, UnderlyingStipulations_NoUnderlyingStips_123);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_123);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_124;
        set_field(noUnderlyingStips_0_0_2_2, FIX::UnderlyingStipType{"STRING_611549436"}, UnderlyingStipulations_NoUnderlyingStips_124);
        set_field(noUnderlyingStips_0_0_2_2, FIX::UnderlyingStipValue{"STRING_1112611143"}, UnderlyingStipulations_NoUnderlyingStips_124);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_124);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_135;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1289390158"}, UndlyInstrumentParties_NoUndlyInstrumentParties_135);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_135);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{1930365696}, UndlyInstrumentParties_NoUndlyInstrumentParties_135);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_135);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_177814310"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{913339213}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_264);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_146635322"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1839821094}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_265);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1613181430"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{575705956}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_266);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_136;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_134914264"}, UndlyInstrumentParties_NoUndlyInstrumentParties_136);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_136);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{717857834}, UndlyInstrumentParties_NoUndlyInstrumentParties_136);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_136);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1821657603"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1804834331}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_267);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2093148845"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{26861197}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_268);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1307977093"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{2097215474}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_269);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_137;
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_1923759505"}, UndlyInstrumentParties_NoUndlyInstrumentParties_137);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_137);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyRole{538347475}, UndlyInstrumentParties_NoUndlyInstrumentParties_137);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_137);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1688346444"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1908502572}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_270);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_550977760"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{1028275959}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271);
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
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuer{"DATA_372568361"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuerLen{1663588903}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1463739794"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDescLen{1661958519}, UnderlyingInstrument_65);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_65;
      UnderlyingAdjustedQuantity_65.setString("2639760");
set_field(noUnderlyings_0_1_1, UnderlyingAdjustedQuantity_65, UnderlyingInstrument_65);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_65;
      UnderlyingAllocationPercent_65.setString("18.420000");
set_field(noUnderlyings_0_1_1, UnderlyingAllocationPercent_65, UnderlyingInstrument_65);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_65;
      UnderlyingAttachmentPoint_65.setString("94.370000");
set_field(noUnderlyings_0_1_1, UnderlyingAttachmentPoint_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCFICode{"STRING_441790362"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPProgram{"STRING_12477407"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPRegType{"STRING_1326794759"}, UnderlyingInstrument_65);
      FIX::UnderlyingCapValue UnderlyingCapValue_65;
      UnderlyingCapValue_65.setString("1341278");
set_field(noUnderlyings_0_1_1, UnderlyingCapValue_65, UnderlyingInstrument_65);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_65;
      UnderlyingCashAmount_65.setString("16256588");
set_field(noUnderlyings_0_1_1, UnderlyingCashAmount_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_65);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_65;
      UnderlyingContractMultiplier_65.setString("2690420");
set_field(noUnderlyings_0_1_1, UnderlyingContractMultiplier_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingContractMultiplierUnit{858440754}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_472874902"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1873541690"}, UnderlyingInstrument_65);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_65;
      UnderlyingCouponRate_65.setString("47.090000");
set_field(noUnderlyings_0_1_1, UnderlyingCouponRate_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCreditRating{"STRING_130225585"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_65);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_65;
      UnderlyingCurrentValue_65.setString("14382026");
set_field(noUnderlyings_0_1_1, UnderlyingCurrentValue_65, UnderlyingInstrument_65);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_65;
      UnderlyingDetachmentPoint_65.setString("87.130000");
set_field(noUnderlyings_0_1_1, UnderlyingDetachmentPoint_65, UnderlyingInstrument_65);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_65;
      UnderlyingDirtyPrice_65.setString("3357517");
set_field(noUnderlyings_0_1_1, UnderlyingDirtyPrice_65, UnderlyingInstrument_65);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_65;
      UnderlyingEndPrice_65.setString("7025616");
set_field(noUnderlyings_0_1_1, UnderlyingEndPrice_65, UnderlyingInstrument_65);
      FIX::UnderlyingEndValue UnderlyingEndValue_65;
      UnderlyingEndValue_65.setString("1598025");
set_field(noUnderlyings_0_1_1, UnderlyingEndValue_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingExerciseStyle{721697625}, UnderlyingInstrument_65);
      FIX::UnderlyingFXRate UnderlyingFXRate_65;
      UnderlyingFXRate_65.setString("2434244");
set_field(noUnderlyings_0_1_1, UnderlyingFXRate_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_65);
      FIX::UnderlyingFactor UnderlyingFactor_65;
      UnderlyingFactor_65.setString("12726753");
set_field(noUnderlyings_0_1_1, UnderlyingFactor_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFlowScheduleType{1271700406}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingInstrRegistry{"STRING_293389826"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_788780640"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssuer{"STRING_587956552"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_1955348345"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1052756693"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1834578394"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_988024135"}, UnderlyingInstrument_65);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_65;
      UnderlyingNotionalPercentageOutstanding_65.setString("70.550000");
set_field(noUnderlyings_0_1_1, UnderlyingNotionalPercentageOutstanding_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_65);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_65;
      UnderlyingOriginalNotionalPercentageOutstanding_65.setString("52.460000");
set_field(noUnderlyings_0_1_1, UnderlyingOriginalNotionalPercentageOutstanding_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1628674864"}, UnderlyingInstrument_65);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_65;
      UnderlyingPriceUnitOfMeasureQty_65.setString("13252309");
set_field(noUnderlyings_0_1_1, UnderlyingPriceUnitOfMeasureQty_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingProduct{2069835962}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPutOrCall{1897716936}, UnderlyingInstrument_65);
      FIX::UnderlyingPx UnderlyingPx_65;
      UnderlyingPx_65.setString("361880");
set_field(noUnderlyings_0_1_1, UnderlyingPx_65, UnderlyingInstrument_65);
      FIX::UnderlyingQty UnderlyingQty_65;
      UnderlyingQty_65.setString("3952272");
set_field(noUnderlyings_0_1_1, UnderlyingQty_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1623774978"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_568802807"}, UnderlyingInstrument_65);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_65;
      UnderlyingRepurchaseRate_65.setString("28.020000");
set_field(noUnderlyings_0_1_1, UnderlyingRepurchaseRate_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepurchaseTerm{1295498217}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRestructuringType{"STRING_1128278714"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityDesc{"STRING_1963655481"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_916953283"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityID{"STRING_1464030478"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityIDSource{"STRING_518733484"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecuritySubType{"STRING_1076755824"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityType{"STRING_38244455"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSeniority{"STRING_762157931"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlMethod{"STRING_997577289"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_65);
      FIX::UnderlyingStartValue UnderlyingStartValue_65;
      UnderlyingStartValue_65.setString("20338583");
set_field(noUnderlyings_0_1_1, UnderlyingStartValue_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1290967116"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_65);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_65;
      UnderlyingStrikePrice_65.setString("10988318");
set_field(noUnderlyings_0_1_1, UnderlyingStrikePrice_65, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbol{"STRING_1004973525"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbolSfx{"STRING_161425989"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingTimeUnit{"STRING_2086855948"}, UnderlyingInstrument_65);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_352036933"}, UnderlyingInstrument_65);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_65;
      UnderlyingUnitOfMeasureQty_65.setString("20084817");
set_field(noUnderlyings_0_1_1, UnderlyingUnitOfMeasureQty_65, UnderlyingInstrument_65);
      all_values.push_back(UnderlyingInstrument_65);
      all_compo_names.insert("...NoOrders...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_139;
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_1980711797"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_139);
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1186229133"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_139);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_139);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_140;
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_29059861"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_140);
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1730945085"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_140);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_140);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_125;
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipType{"STRING_424287078"}, UnderlyingStipulations_NoUnderlyingStips_125);
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipValue{"STRING_1207236416"}, UnderlyingStipulations_NoUnderlyingStips_125);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_125);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_126;
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipType{"STRING_1791220038"}, UnderlyingStipulations_NoUnderlyingStips_126);
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipValue{"STRING_949739880"}, UnderlyingStipulations_NoUnderlyingStips_126);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_126);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_138;
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_772015104"}, UndlyInstrumentParties_NoUndlyInstrumentParties_138);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_138);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyRole{1272204268}, UndlyInstrumentParties_NoUndlyInstrumentParties_138);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_138);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1284645197"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{201476444}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_126806389"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{2046803128}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_273);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1199053734"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{1437726229}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_274);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noOrders_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::NewOrderList::NoOrders::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_66;
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuer{"DATA_1933177818"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuerLen{342537202}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1389943061"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDescLen{260025413}, UnderlyingInstrument_66);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_66;
      UnderlyingAdjustedQuantity_66.setString("14413690");
set_field(noUnderlyings_0_1_2, UnderlyingAdjustedQuantity_66, UnderlyingInstrument_66);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_66;
      UnderlyingAllocationPercent_66.setString("29.390000");
set_field(noUnderlyings_0_1_2, UnderlyingAllocationPercent_66, UnderlyingInstrument_66);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_66;
      UnderlyingAttachmentPoint_66.setString("14.020000");
set_field(noUnderlyings_0_1_2, UnderlyingAttachmentPoint_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCFICode{"STRING_1380741316"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPProgram{"STRING_599469872"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPRegType{"STRING_282449544"}, UnderlyingInstrument_66);
      FIX::UnderlyingCapValue UnderlyingCapValue_66;
      UnderlyingCapValue_66.setString("14874488");
set_field(noUnderlyings_0_1_2, UnderlyingCapValue_66, UnderlyingInstrument_66);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_66;
      UnderlyingCashAmount_66.setString("4326980");
set_field(noUnderlyings_0_1_2, UnderlyingCashAmount_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_66);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_66;
      UnderlyingContractMultiplier_66.setString("15165087");
set_field(noUnderlyings_0_1_2, UnderlyingContractMultiplier_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingContractMultiplierUnit{16159458}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_543612261"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1940795802"}, UnderlyingInstrument_66);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_66;
      UnderlyingCouponRate_66.setString("58.740000");
set_field(noUnderlyings_0_1_2, UnderlyingCouponRate_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCreditRating{"STRING_187348651"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_66);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_66;
      UnderlyingCurrentValue_66.setString("9593637");
set_field(noUnderlyings_0_1_2, UnderlyingCurrentValue_66, UnderlyingInstrument_66);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_66;
      UnderlyingDetachmentPoint_66.setString("37.470000");
set_field(noUnderlyings_0_1_2, UnderlyingDetachmentPoint_66, UnderlyingInstrument_66);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_66;
      UnderlyingDirtyPrice_66.setString("7033674");
set_field(noUnderlyings_0_1_2, UnderlyingDirtyPrice_66, UnderlyingInstrument_66);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_66;
      UnderlyingEndPrice_66.setString("10479256");
set_field(noUnderlyings_0_1_2, UnderlyingEndPrice_66, UnderlyingInstrument_66);
      FIX::UnderlyingEndValue UnderlyingEndValue_66;
      UnderlyingEndValue_66.setString("6461252");
set_field(noUnderlyings_0_1_2, UnderlyingEndValue_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingExerciseStyle{904843925}, UnderlyingInstrument_66);
      FIX::UnderlyingFXRate UnderlyingFXRate_66;
      UnderlyingFXRate_66.setString("11747320");
set_field(noUnderlyings_0_1_2, UnderlyingFXRate_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_66);
      FIX::UnderlyingFactor UnderlyingFactor_66;
      UnderlyingFactor_66.setString("21038976");
set_field(noUnderlyings_0_1_2, UnderlyingFactor_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFlowScheduleType{464974659}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingInstrRegistry{"STRING_331138947"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_298951213"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssuer{"STRING_1854917720"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_591164360"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1740320228"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2102350659"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1012615762"}, UnderlyingInstrument_66);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_66;
      UnderlyingNotionalPercentageOutstanding_66.setString("78.960000");
set_field(noUnderlyings_0_1_2, UnderlyingNotionalPercentageOutstanding_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_66);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_66;
      UnderlyingOriginalNotionalPercentageOutstanding_66.setString("53.070000");
set_field(noUnderlyings_0_1_2, UnderlyingOriginalNotionalPercentageOutstanding_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_313543111"}, UnderlyingInstrument_66);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_66;
      UnderlyingPriceUnitOfMeasureQty_66.setString("9870349");
set_field(noUnderlyings_0_1_2, UnderlyingPriceUnitOfMeasureQty_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingProduct{616260337}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPutOrCall{1830051836}, UnderlyingInstrument_66);
      FIX::UnderlyingPx UnderlyingPx_66;
      UnderlyingPx_66.setString("10031943");
set_field(noUnderlyings_0_1_2, UnderlyingPx_66, UnderlyingInstrument_66);
      FIX::UnderlyingQty UnderlyingQty_66;
      UnderlyingQty_66.setString("11598725");
set_field(noUnderlyings_0_1_2, UnderlyingQty_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1623363990"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_79106589"}, UnderlyingInstrument_66);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_66;
      UnderlyingRepurchaseRate_66.setString("12.490000");
set_field(noUnderlyings_0_1_2, UnderlyingRepurchaseRate_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepurchaseTerm{218932377}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRestructuringType{"STRING_1657753449"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityDesc{"STRING_159101356"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1727896124"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityID{"STRING_213637282"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityIDSource{"STRING_1207027045"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecuritySubType{"STRING_226537773"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityType{"STRING_1118481207"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSeniority{"STRING_234275475"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlMethod{"STRING_771982550"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_66);
      FIX::UnderlyingStartValue UnderlyingStartValue_66;
      UnderlyingStartValue_66.setString("6992501");
set_field(noUnderlyings_0_1_2, UnderlyingStartValue_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1103121497"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_66);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_66;
      UnderlyingStrikePrice_66.setString("16942858");
set_field(noUnderlyings_0_1_2, UnderlyingStrikePrice_66, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbol{"STRING_966683011"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbolSfx{"STRING_361551218"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingTimeUnit{"STRING_559417972"}, UnderlyingInstrument_66);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_1940260908"}, UnderlyingInstrument_66);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_66;
      UnderlyingUnitOfMeasureQty_66.setString("9158881");
set_field(noUnderlyings_0_1_2, UnderlyingUnitOfMeasureQty_66, UnderlyingInstrument_66);
      all_values.push_back(UnderlyingInstrument_66);
      all_compo_names.insert("...NoOrders...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_141;
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_106320371"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_141);
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1902923006"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_141);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_141);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_127;
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipType{"STRING_1936372207"}, UnderlyingStipulations_NoUnderlyingStips_127);
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipValue{"STRING_758633721"}, UnderlyingStipulations_NoUnderlyingStips_127);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_127);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_128;
        set_field(noUnderlyingStips_0_2_2_1, FIX::UnderlyingStipType{"STRING_1483132566"}, UnderlyingStipulations_NoUnderlyingStips_128);
        set_field(noUnderlyingStips_0_2_2_1, FIX::UnderlyingStipValue{"STRING_1412252550"}, UnderlyingStipulations_NoUnderlyingStips_128);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_128);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_1);
      }
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_129;
        set_field(noUnderlyingStips_0_2_2_2, FIX::UnderlyingStipType{"STRING_837740310"}, UnderlyingStipulations_NoUnderlyingStips_129);
        set_field(noUnderlyingStips_0_2_2_2, FIX::UnderlyingStipValue{"STRING_682870167"}, UnderlyingStipulations_NoUnderlyingStips_129);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_129);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_139;
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_348010112"}, UndlyInstrumentParties_NoUndlyInstrumentParties_139);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_139);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyRole{1211597403}, UndlyInstrumentParties_NoUndlyInstrumentParties_139);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_139);
        all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::NewOrderList::NoOrders::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2048998568"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1438135176}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_275);
          all_compo_names.insert("...NoOrders...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      noOrders_0_0.addGroup(noUnderlyings_0_1_2);
    }
    // YieldData
    multiset<string> YieldData_12;
    FIX::Yield Yield_12;
    Yield_12.setString("86.010000");
set_field(noOrders_0_0, Yield_12, YieldData_12);
    set_field(noOrders_0_0, FIX::YieldCalcDate{"LOCALMKTDATE_135790395"}, YieldData_12);
    set_field(noOrders_0_0, FIX::YieldRedemptionDate{"LOCALMKTDATE_62634078"}, YieldData_12);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_12;
    YieldRedemptionPrice_12.setString("6075401");
set_field(noOrders_0_0, YieldRedemptionPrice_12, YieldData_12);
    set_field(noOrders_0_0, FIX::YieldRedemptionPriceType{835040529}, YieldData_12);
    set_field(noOrders_0_0, FIX::YieldType{"STRING_PROCEEDS"}, YieldData_12);
    all_values.push_back(YieldData_12);
    all_compo_names.insert("...NoOrders.");

    msg.addGroup(noOrders_0_0);
  }
  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::NewOrderList::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_4;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_1241724736"}, RootParties_NoRootPartyIDs_4);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'7'}, RootParties_NoRootPartyIDs_4);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{800585965}, RootParties_NoRootPartyIDs_4);
    all_values.push_back(RootParties_NoRootPartyIDs_4);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_9;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_1271975758"}, RootSubParties_NoRootPartySubIDs_9);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{593363225}, RootSubParties_NoRootPartySubIDs_9);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_9);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderList::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_5;
    set_field(noRootPartyIDs_0_1, FIX::RootPartyID{"STRING_371680407"}, RootParties_NoRootPartyIDs_5);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyIDSource{'9'}, RootParties_NoRootPartyIDs_5);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyRole{699683597}, RootParties_NoRootPartyIDs_5);
    all_values.push_back(RootParties_NoRootPartyIDs_5);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_10;
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubID{"STRING_1302235358"}, RootSubParties_NoRootPartySubIDs_10);
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubIDType{488572156}, RootSubParties_NoRootPartySubIDs_10);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_10);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  {
    FIX50SP2::NewOrderList::NoRootPartyIDs noRootPartyIDs_0_2;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_6;
    set_field(noRootPartyIDs_0_2, FIX::RootPartyID{"STRING_885753486"}, RootParties_NoRootPartyIDs_6);
    set_field(noRootPartyIDs_0_2, FIX::RootPartyIDSource{'6'}, RootParties_NoRootPartyIDs_6);
    set_field(noRootPartyIDs_0_2, FIX::RootPartyRole{1900824706}, RootParties_NoRootPartyIDs_6);
    all_values.push_back(RootParties_NoRootPartyIDs_6);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_11;
      set_field(noRootPartySubIDs_2_1_0, FIX::RootPartySubID{"STRING_1320754444"}, RootSubParties_NoRootPartySubIDs_11);
      set_field(noRootPartySubIDs_2_1_0, FIX::RootPartySubIDType{1384525985}, RootSubParties_NoRootPartySubIDs_11);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_11);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::NewOrderList::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_2_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_12;
      set_field(noRootPartySubIDs_2_1_1, FIX::RootPartySubID{"STRING_2071503909"}, RootSubParties_NoRootPartySubIDs_12);
      set_field(noRootPartySubIDs_2_1_1, FIX::RootPartySubIDType{15242320}, RootSubParties_NoRootPartySubIDs_12);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_12);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_2.addGroup(noRootPartySubIDs_2_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_2);
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
