#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralResponse, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralResponse msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralResponse_0;
  set_field(msg, FIX::Account{"STRING_1885138440"}, CollateralResponse_0);
  set_field(msg, FIX::AccountType{3}, CollateralResponse_0);
  FIX::AccruedInterestAmt AccruedInterestAmt_7;
  AccruedInterestAmt_7.setString("5192263");
set_field(msg, AccruedInterestAmt_7, CollateralResponse_0);
  FIX::CashOutstanding CashOutstanding_4;
  CashOutstanding_4.setString("7787500");
set_field(msg, CashOutstanding_4, CollateralResponse_0);
  set_field(msg, FIX::ClOrdID{"STRING_177235525"}, CollateralResponse_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_738959112"}, CollateralResponse_0);
  set_field(msg, FIX::CollApplType{1}, CollateralResponse_0);
  set_field(msg, FIX::CollAsgnID{"STRING_462521813"}, CollateralResponse_0);
  set_field(msg, FIX::CollAsgnReason{0}, CollateralResponse_0);
  set_field(msg, FIX::CollAsgnRejectReason{2}, CollateralResponse_0);
  set_field(msg, FIX::CollAsgnRespType{3}, CollateralResponse_0);
  set_field(msg, FIX::CollAsgnTransType{0}, CollateralResponse_0);
  set_field(msg, FIX::CollReqID{"STRING_24420752"}, CollateralResponse_0);
  set_field(msg, FIX::CollRespID{"STRING_497402607"}, CollateralResponse_0);
  set_field(msg, FIX::Currency{"EUR"}, CollateralResponse_0);
  set_field(msg, FIX::EncodedText{"DATA_490679803"}, CollateralResponse_0);
  set_field(msg, FIX::EncodedTextLen{1801897004}, CollateralResponse_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_7;
  EndAccruedInterestAmt_7.setString("15107074");
set_field(msg, EndAccruedInterestAmt_7, CollateralResponse_0);
  FIX::EndCash EndCash_7;
  EndCash_7.setString("15835226");
set_field(msg, EndCash_7, CollateralResponse_0);
  set_field(msg, FIX::FinancialStatus{"MULTIPLECHARVALUE_2"}, CollateralResponse_0);
  FIX::MarginExcess MarginExcess_4;
  MarginExcess_4.setString("17243672");
set_field(msg, MarginExcess_4, CollateralResponse_0);
  set_field(msg, FIX::OrderID{"STRING_1094290502"}, CollateralResponse_0);
  FIX::Price Price_7;
  Price_7.setString("4394558");
set_field(msg, Price_7, CollateralResponse_0);
  set_field(msg, FIX::PriceType{17}, CollateralResponse_0);
  set_field(msg, FIX::QtyType{2}, CollateralResponse_0);
  FIX::Quantity Quantity_10;
  Quantity_10.setString("15255171");
set_field(msg, Quantity_10, CollateralResponse_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1811857186"}, CollateralResponse_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_1218401174"}, CollateralResponse_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_417554126"}, CollateralResponse_0);
  set_field(msg, FIX::Side{'B'}, CollateralResponse_0);
  FIX::StartCash StartCash_7;
  StartCash_7.setString("9560559");
set_field(msg, StartCash_7, CollateralResponse_0);
  set_field(msg, FIX::Text{"STRING_1180814885"}, CollateralResponse_0);
  FIX::TotalNetValue TotalNetValue_4;
  TotalNetValue_4.setString("16780061");
set_field(msg, TotalNetValue_4, CollateralResponse_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(18, 0, 22, 16, 6, 2000)}, CollateralResponse_0);
  all_values.push_back(CollateralResponse_0);

  all_compo_names.insert("CollateralResponse");

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralResponse::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_12;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_324272576"}, ExecCollGrp_NoExecs_12);
    all_values.push_back(ExecCollGrp_NoExecs_12);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_13;
    set_field(noExecs_0_1, FIX::ExecID{"STRING_551703357"}, ExecCollGrp_NoExecs_13);
    all_values.push_back(ExecCollGrp_NoExecs_13);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoExecs noExecs_0_2;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_14;
    set_field(noExecs_0_2, FIX::ExecID{"STRING_706152854"}, ExecCollGrp_NoExecs_14);
    all_values.push_back(ExecCollGrp_NoExecs_14);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_8;
  set_field(msg, FIX::AgreementCurrency{"GBP"}, FinancingDetails_8);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1196832657"}, FinancingDetails_8);
  set_field(msg, FIX::AgreementDesc{"STRING_1337359223"}, FinancingDetails_8);
  set_field(msg, FIX::AgreementID{"STRING_1603571442"}, FinancingDetails_8);
  set_field(msg, FIX::DeliveryType{3}, FinancingDetails_8);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1259383066"}, FinancingDetails_8);
  FIX::MarginRatio MarginRatio_8;
  MarginRatio_8.setString("50.780000");
set_field(msg, MarginRatio_8, FinancingDetails_8);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1727162141"}, FinancingDetails_8);
  set_field(msg, FIX::TerminationType{1}, FinancingDetails_8);
  all_values.push_back(FinancingDetails_8);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralResponse::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_21;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1606322342"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1076872446}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_920010762"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{677239869}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1494426572"}, InstrumentLeg_21);
    FIX::LegContractMultiplier LegContractMultiplier_21;
    LegContractMultiplier_21.setString("20787905");
set_field(noLegs_0_0, LegContractMultiplier_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1633295836}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_527757810"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1609313128"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1220618253"}, InstrumentLeg_21);
    FIX::LegCouponRate LegCouponRate_21;
    LegCouponRate_21.setString("82.200000");
set_field(noLegs_0_0, LegCouponRate_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1878794789"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_551390210"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1897288880}, InstrumentLeg_21);
    FIX::LegFactor LegFactor_21;
    LegFactor_21.setString("17676470");
set_field(noLegs_0_0, LegFactor_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{875662786}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_301508589"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_326316249"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_411125005"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_394372553"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1523148907"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1748484228"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1997943995"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_8536898"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'8'}, InstrumentLeg_21);
    FIX::LegOptionRatio LegOptionRatio_21;
    LegOptionRatio_21.setString("10309154");
set_field(noLegs_0_0, LegOptionRatio_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1735699039"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_411738942"}, InstrumentLeg_21);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_21;
    LegPriceUnitOfMeasureQty_21.setString("1390690");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegProduct{1194537733}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1488611388}, InstrumentLeg_21);
    FIX::LegRatioQty LegRatioQty_21;
    LegRatioQty_21.setString("10590797");
set_field(noLegs_0_0, LegRatioQty_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1871777602"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_835554313"}, InstrumentLeg_21);
    FIX::LegRepurchaseRate LegRepurchaseRate_21;
    LegRepurchaseRate_21.setString("66.950000");
set_field(noLegs_0_0, LegRepurchaseRate_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1357589790}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1363312123"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_452216175"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_430724395"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1101636695"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_183527316"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1800730671"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSide{'5'}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_734917526"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_21);
    FIX::LegStrikePrice LegStrikePrice_21;
    LegStrikePrice_21.setString("16105803");
set_field(noLegs_0_0, LegStrikePrice_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1852044492"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_459529489"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_2021705318"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_98933397"}, InstrumentLeg_21);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_21;
    LegUnitOfMeasureQty_21.setString("19826783");
set_field(noLegs_0_0, LegUnitOfMeasureQty_21, InstrumentLeg_21);
    all_values.push_back(InstrumentLeg_21);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_40;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_2096877392"}, LegSecAltIDGrp_NoLegSecurityAltID_40);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1991215294"}, LegSecAltIDGrp_NoLegSecurityAltID_40);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_40);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_41;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_335605897"}, LegSecAltIDGrp_NoLegSecurityAltID_41);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_980309169"}, LegSecAltIDGrp_NoLegSecurityAltID_41);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_41);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_13;
  FIX::AttachmentPoint AttachmentPoint_13;
  AttachmentPoint_13.setString("6.850000");
set_field(msg, AttachmentPoint_13, Instrument_13);
  set_field(msg, FIX::CFICode{"STRING_747344840"}, Instrument_13);
  set_field(msg, FIX::CPProgram{99}, Instrument_13);
  set_field(msg, FIX::CPRegType{"STRING_626484770"}, Instrument_13);
  FIX::CapPrice CapPrice_13;
  CapPrice_13.setString("884725");
set_field(msg, CapPrice_13, Instrument_13);
  FIX::ContractMultiplier ContractMultiplier_13;
  ContractMultiplier_13.setString("309742");
set_field(msg, ContractMultiplier_13, Instrument_13);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_13);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_924026893"}, Instrument_13);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1021360980"}, Instrument_13);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1708368515"}, Instrument_13);
  FIX::CouponRate CouponRate_13;
  CouponRate_13.setString("53.680000");
set_field(msg, CouponRate_13, Instrument_13);
  set_field(msg, FIX::CreditRating{"STRING_1473577156"}, Instrument_13);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_2139092911"}, Instrument_13);
  FIX::DetachmentPoint DetachmentPoint_13;
  DetachmentPoint_13.setString("20.640000");
set_field(msg, DetachmentPoint_13, Instrument_13);
  set_field(msg, FIX::EncodedIssuer{"DATA_1657104472"}, Instrument_13);
  set_field(msg, FIX::EncodedIssuerLen{1792339934}, Instrument_13);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1754541908"}, Instrument_13);
  set_field(msg, FIX::EncodedSecurityDescLen{244538351}, Instrument_13);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_13);
  FIX::Factor Factor_13;
  Factor_13.setString("18877551");
set_field(msg, Factor_13, Instrument_13);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_13);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_13);
  FIX::FloorPrice FloorPrice_13;
  FloorPrice_13.setString("1998009");
set_field(msg, FloorPrice_13, Instrument_13);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_13);
  set_field(msg, FIX::InstrRegistry{"STRING_998886430"}, Instrument_13);
  set_field(msg, FIX::InstrmtAssignmentMethod{'3'}, Instrument_13);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1204562585"}, Instrument_13);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_948280174"}, Instrument_13);
  set_field(msg, FIX::Issuer{"STRING_2026211030"}, Instrument_13);
  set_field(msg, FIX::ListMethod{1}, Instrument_13);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1928589343"}, Instrument_13);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1458158067"}, Instrument_13);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_140029675"}, Instrument_13);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_900483866"}, Instrument_13);
  FIX::MinPriceIncrement MinPriceIncrement_13;
  MinPriceIncrement_13.setString("20846428");
set_field(msg, MinPriceIncrement_13, Instrument_13);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_13;
  MinPriceIncrementAmount_13.setString("2285022");
set_field(msg, MinPriceIncrementAmount_13, Instrument_13);
  set_field(msg, FIX::NTPositionLimit{931458151}, Instrument_13);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_13;
  NotionalPercentageOutstanding_13.setString("79.150000");
set_field(msg, NotionalPercentageOutstanding_13, Instrument_13);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_13);
  FIX::OptPayoutAmount OptPayoutAmount_13;
  OptPayoutAmount_13.setString("19528191");
set_field(msg, OptPayoutAmount_13, Instrument_13);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_13);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_13;
  OriginalNotionalPercentageOutstanding_13.setString("45.170000");
set_field(msg, OriginalNotionalPercentageOutstanding_13, Instrument_13);
  set_field(msg, FIX::Pool{"STRING_1278912640"}, Instrument_13);
  set_field(msg, FIX::PositionLimit{1987915693}, Instrument_13);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_13);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_788533464"}, Instrument_13);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_13;
  PriceUnitOfMeasureQty_13.setString("16327719");
set_field(msg, PriceUnitOfMeasureQty_13, Instrument_13);
  set_field(msg, FIX::Product{7}, Instrument_13);
  set_field(msg, FIX::ProductComplex{"STRING_1033071815"}, Instrument_13);
  set_field(msg, FIX::PutOrCall{0}, Instrument_13);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1881206341"}, Instrument_13);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_740706831"}, Instrument_13);
  FIX::RepurchaseRate RepurchaseRate_13;
  RepurchaseRate_13.setString("35.530000");
set_field(msg, RepurchaseRate_13, Instrument_13);
  set_field(msg, FIX::RepurchaseTerm{2081007329}, Instrument_13);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_13);
  set_field(msg, FIX::SecurityDesc{"STRING_432036335"}, Instrument_13);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_2116003066"}, Instrument_13);
  set_field(msg, FIX::SecurityGroup{"STRING_1527126103"}, Instrument_13);
  set_field(msg, FIX::SecurityID{"STRING_1380316509"}, Instrument_13);
  set_field(msg, FIX::SecurityIDSource{"STRING_J"}, Instrument_13);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_13);
  set_field(msg, FIX::SecuritySubType{"STRING_1161422205"}, Instrument_13);
  set_field(msg, FIX::SecurityType{"STRING_XLINKD"}, Instrument_13);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_13);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_13);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1242564058"}, Instrument_13);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1288342869"}, Instrument_13);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_13);
  FIX::StrikeMultiplier StrikeMultiplier_13;
  StrikeMultiplier_13.setString("2933883");
set_field(msg, StrikeMultiplier_13, Instrument_13);
  FIX::StrikePrice StrikePrice_13;
  StrikePrice_13.setString("6512160");
set_field(msg, StrikePrice_13, Instrument_13);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_13);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_13;
  StrikePriceBoundaryPrecision_13.setString("28.870000");
set_field(msg, StrikePriceBoundaryPrecision_13, Instrument_13);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_13);
  FIX::StrikeValue StrikeValue_13;
  StrikeValue_13.setString("12197568");
set_field(msg, StrikeValue_13, Instrument_13);
  set_field(msg, FIX::Symbol{"STRING_1972165821"}, Instrument_13);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_13);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_13);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_13);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Gal"}, Instrument_13);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_13;
  UnitOfMeasureQty_13.setString("13857256");
set_field(msg, UnitOfMeasureQty_13, Instrument_13);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_13);
  all_values.push_back(Instrument_13);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralResponse::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_28;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_28);
    FIX::ComplexEventPrice ComplexEventPrice_28;
    ComplexEventPrice_28.setString("16328633");
set_field(noComplexEvents_0_0, ComplexEventPrice_28, ComplexEvents_NoComplexEvents_28);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_28);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_28;
    ComplexEventPriceBoundaryPrecision_28.setString("18.940000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_28, ComplexEvents_NoComplexEvents_28);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_28);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_28);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_28;
    ComplexOptPayoutAmount_28.setString("4837447");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_28, ComplexEvents_NoComplexEvents_28);
    all_values.push_back(ComplexEvents_NoComplexEvents_28);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_62;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 27, 59, 23, 2, 2012)}, ComplexEventDates_NoComplexEventDates_62);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 10, 48, 10, 11, 2013)}, ComplexEventDates_NoComplexEventDates_62);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_62);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_120;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 23, 49)}, ComplexEventTimes_NoComplexEventTimes_120);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 17, 50)}, ComplexEventTimes_NoComplexEventTimes_120);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_120);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_121;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 42, 21)}, ComplexEventTimes_NoComplexEventTimes_121);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 56, 56)}, ComplexEventTimes_NoComplexEventTimes_121);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_121);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_63;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 24, 47, 20, 6, 2004)}, ComplexEventDates_NoComplexEventDates_63);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 50, 3, 6, 5, 2008)}, ComplexEventDates_NoComplexEventDates_63);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_63);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_122;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 4, 5)}, ComplexEventTimes_NoComplexEventTimes_122);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 14, 47)}, ComplexEventTimes_NoComplexEventTimes_122);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_122);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_123;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 21, 53)}, ComplexEventTimes_NoComplexEventTimes_123);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 41, 9)}, ComplexEventTimes_NoComplexEventTimes_123);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_123);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_124;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 33, 59)}, ComplexEventTimes_NoComplexEventTimes_124);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 31, 13)}, ComplexEventTimes_NoComplexEventTimes_124);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_124);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_64;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 8, 41, 14, 11, 2014)}, ComplexEventDates_NoComplexEventDates_64);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 10, 18, 23, 8, 2006)}, ComplexEventDates_NoComplexEventDates_64);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_64);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_125;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 39, 20)}, ComplexEventTimes_NoComplexEventTimes_125);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 54, 43)}, ComplexEventTimes_NoComplexEventTimes_125);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_125);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_29;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_29);
    FIX::ComplexEventPrice ComplexEventPrice_29;
    ComplexEventPrice_29.setString("15376052");
set_field(noComplexEvents_0_1, ComplexEventPrice_29, ComplexEvents_NoComplexEvents_29);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_29);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_29;
    ComplexEventPriceBoundaryPrecision_29.setString("17.250000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_29, ComplexEvents_NoComplexEvents_29);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_29);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_29);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_29;
    ComplexOptPayoutAmount_29.setString("12091229");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_29, ComplexEvents_NoComplexEvents_29);
    all_values.push_back(ComplexEvents_NoComplexEvents_29);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_65;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 57, 7, 8, 1, 2003)}, ComplexEventDates_NoComplexEventDates_65);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 24, 12, 21, 8, 2006)}, ComplexEventDates_NoComplexEventDates_65);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_65);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_126;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 15, 51)}, ComplexEventTimes_NoComplexEventTimes_126);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 45, 13)}, ComplexEventTimes_NoComplexEventTimes_126);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_126);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_127;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 22, 22)}, ComplexEventTimes_NoComplexEventTimes_127);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 58, 30)}, ComplexEventTimes_NoComplexEventTimes_127);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_127);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_66;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 20, 19, 4, 9, 2003)}, ComplexEventDates_NoComplexEventDates_66);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 57, 42, 24, 9, 2010)}, ComplexEventDates_NoComplexEventDates_66);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_66);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_128;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 26, 39)}, ComplexEventTimes_NoComplexEventTimes_128);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 16, 35)}, ComplexEventTimes_NoComplexEventTimes_128);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_128);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_129;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 49, 15)}, ComplexEventTimes_NoComplexEventTimes_129);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 5, 42)}, ComplexEventTimes_NoComplexEventTimes_129);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_129);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_130;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 2, 58)}, ComplexEventTimes_NoComplexEventTimes_130);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 31, 36)}, ComplexEventTimes_NoComplexEventTimes_130);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_130);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_30;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_30);
    FIX::ComplexEventPrice ComplexEventPrice_30;
    ComplexEventPrice_30.setString("1503776");
set_field(noComplexEvents_0_2, ComplexEventPrice_30, ComplexEvents_NoComplexEvents_30);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_30);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_30;
    ComplexEventPriceBoundaryPrecision_30.setString("90.610000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_30, ComplexEvents_NoComplexEvents_30);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_30);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_30);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_30;
    ComplexOptPayoutAmount_30.setString("2309154");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_30, ComplexEvents_NoComplexEvents_30);
    all_values.push_back(ComplexEvents_NoComplexEvents_30);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_67;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 47, 34, 23, 5, 2010)}, ComplexEventDates_NoComplexEventDates_67);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 59, 19, 22, 3, 2001)}, ComplexEventDates_NoComplexEventDates_67);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_67);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_131;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 23, 56)}, ComplexEventTimes_NoComplexEventTimes_131);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 27, 38)}, ComplexEventTimes_NoComplexEventTimes_131);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_131);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_132;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 40, 40)}, ComplexEventTimes_NoComplexEventTimes_132);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 4, 17)}, ComplexEventTimes_NoComplexEventTimes_132);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_132);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_133;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 5, 40)}, ComplexEventTimes_NoComplexEventTimes_133);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 42, 11)}, ComplexEventTimes_NoComplexEventTimes_133);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_133);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_68;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 23, 14, 16, 5, 2017)}, ComplexEventDates_NoComplexEventDates_68);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 58, 54, 4, 5, 2013)}, ComplexEventDates_NoComplexEventDates_68);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_68);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_134;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 55, 47)}, ComplexEventTimes_NoComplexEventTimes_134);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 52, 12)}, ComplexEventTimes_NoComplexEventTimes_134);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_134);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_135;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 17, 11)}, ComplexEventTimes_NoComplexEventTimes_135);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 53, 42)}, ComplexEventTimes_NoComplexEventTimes_135);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_135);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_136;
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 5, 51)}, ComplexEventTimes_NoComplexEventTimes_136);
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 26, 18)}, ComplexEventTimes_NoComplexEventTimes_136);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_136);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralResponse::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_32;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_512313077"}, EvntGrp_NoEvents_32);
    FIX::EventPx EventPx_32;
    EventPx_32.setString("1607749");
set_field(noEvents_0_0, EventPx_32, EvntGrp_NoEvents_32);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1048891428"}, EvntGrp_NoEvents_32);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(5, 3, 5, 23, 3, 2016)}, EvntGrp_NoEvents_32);
    set_field(noEvents_0_0, FIX::EventType{18}, EvntGrp_NoEvents_32);
    all_values.push_back(EvntGrp_NoEvents_32);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_23;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1562972796"}, InstrumentParties_NoInstrumentParties_23);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_23);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{713746501}, InstrumentParties_NoInstrumentParties_23);
    all_values.push_back(InstrumentParties_NoInstrumentParties_23);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_2103253826"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{747101652}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_49);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_368037458"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{2043273756}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_50);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1698397145"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1238557340}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_51);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_24;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1712697854"}, InstrumentParties_NoInstrumentParties_24);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_24);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1176986477}, InstrumentParties_NoInstrumentParties_24);
    all_values.push_back(InstrumentParties_NoInstrumentParties_24);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_606926625"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{139099786}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_25;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1471452003"}, SecAltIDGrp_NoSecurityAltID_25);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1519757038"}, SecAltIDGrp_NoSecurityAltID_25);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_25);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_26;
  set_field(msg, FIX::SecurityXML{"XMLDATA_46985793"}, SecurityXML_26);
  set_field(msg, FIX::SecurityXMLLen{1632226987}, SecurityXML_26);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_421164819"}, SecurityXML_26);
  all_values.push_back(SecurityXML_26);
  all_compo_names.insert("..");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralResponse::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_16;
    FIX::MiscFeeAmt MiscFeeAmt_16;
    MiscFeeAmt_16.setString("8437653");
set_field(noMiscFees_0_0, MiscFeeAmt_16, MiscFeesGrp_NoMiscFees_16);
    set_field(noMiscFees_0_0, FIX::MiscFeeBasis{1}, MiscFeesGrp_NoMiscFees_16);
    set_field(noMiscFees_0_0, FIX::MiscFeeCurr{"EUR"}, MiscFeesGrp_NoMiscFees_16);
    set_field(noMiscFees_0_0, FIX::MiscFeeType{"STRING_3"}, MiscFeesGrp_NoMiscFees_16);
    all_values.push_back(MiscFeesGrp_NoMiscFees_16);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_30;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1210214597"}, Parties_NoPartyIDs_30);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_30);
    set_field(noPartyIDs_0_0, FIX::PartyRole{13}, Parties_NoPartyIDs_30);
    all_values.push_back(Parties_NoPartyIDs_30);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_64;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_957032439"}, PtysSubGrp_NoPartySubIDs_64);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{28}, PtysSubGrp_NoPartySubIDs_64);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_64);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_65;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1507329825"}, PtysSubGrp_NoPartySubIDs_65);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_65);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_65);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_66;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_512951607"}, PtysSubGrp_NoPartySubIDs_66);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_66);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_66);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_31;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1255047589"}, Parties_NoPartyIDs_31);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_31);
    set_field(noPartyIDs_0_1, FIX::PartyRole{33}, Parties_NoPartyIDs_31);
    all_values.push_back(Parties_NoPartyIDs_31);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_67;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_781011777"}, PtysSubGrp_NoPartySubIDs_67);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_67);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_67);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_68;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_243643851"}, PtysSubGrp_NoPartySubIDs_68);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{20}, PtysSubGrp_NoPartySubIDs_68);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_68);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_69;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_788964153"}, PtysSubGrp_NoPartySubIDs_69);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_69);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_69);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_32;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_292384954"}, Parties_NoPartyIDs_32);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'C'}, Parties_NoPartyIDs_32);
    set_field(noPartyIDs_0_2, FIX::PartyRole{79}, Parties_NoPartyIDs_32);
    all_values.push_back(Parties_NoPartyIDs_32);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_70;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1443633456"}, PtysSubGrp_NoPartySubIDs_70);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_70);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_70);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_71;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_1052560907"}, PtysSubGrp_NoPartySubIDs_71);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_71);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_71);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_7;
  set_field(msg, FIX::BenchmarkCurveCurrency{"CHF"}, SpreadOrBenchmarkCurveData_7);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_LIBID"}, SpreadOrBenchmarkCurveData_7);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_117294150"}, SpreadOrBenchmarkCurveData_7);
  FIX::BenchmarkPrice BenchmarkPrice_7;
  BenchmarkPrice_7.setString("11943502");
set_field(msg, BenchmarkPrice_7, SpreadOrBenchmarkCurveData_7);
  set_field(msg, FIX::BenchmarkPriceType{1435515064}, SpreadOrBenchmarkCurveData_7);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1668853796"}, SpreadOrBenchmarkCurveData_7);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_3899053"}, SpreadOrBenchmarkCurveData_7);
  FIX::Spread Spread_7;
  Spread_7.setString("15804292");
set_field(msg, Spread_7, SpreadOrBenchmarkCurveData_7);
  all_values.push_back(SpreadOrBenchmarkCurveData_7);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralResponse::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_17;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_PMAX"}, Stipulations_NoStipulations_17);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_2093380820"}, Stipulations_NoStipulations_17);
    all_values.push_back(Stipulations_NoStipulations_17);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralResponse::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_10;
    set_field(noTrades_0_0, FIX::SecondaryTradeReportID{"STRING_815597085"}, TrdCollGrp_NoTrades_10);
    set_field(noTrades_0_0, FIX::TradeReportID{"STRING_1697406119"}, TrdCollGrp_NoTrades_10);
    all_values.push_back(TrdCollGrp_NoTrades_10);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralResponse::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_12;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_NH"}, TrdRegTimestamps_NoTrdRegTimestamps_12);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_PR"}, TrdRegTimestamps_NoTrdRegTimestamps_12);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_12);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(20, 40, 28, 10, 11, 2003)}, TrdRegTimestamps_NoTrdRegTimestamps_12);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_109496891"}, TrdRegTimestamps_NoTrdRegTimestamps_12);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{1}, TrdRegTimestamps_NoTrdRegTimestamps_12);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_12);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_13;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_MAC"}, TrdRegTimestamps_NoTrdRegTimestamps_13);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_A"}, TrdRegTimestamps_NoTrdRegTimestamps_13);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_13);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(1, 27, 6, 2, 8, 2002)}, TrdRegTimestamps_NoTrdRegTimestamps_13);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_1163887787"}, TrdRegTimestamps_NoTrdRegTimestamps_13);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{7}, TrdRegTimestamps_NoTrdRegTimestamps_13);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_13);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralResponse::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_5;
    set_field(noUnderlyings_0_0, FIX::CollAction{2}, UndInstrmtCollGrp_NoUnderlyings_5);
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_5);
    all_compo_names.insert("...NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_25;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1358651668"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1218310567}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1540034369"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{908574140}, UnderlyingInstrument_25);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_25;
    UnderlyingAdjustedQuantity_25.setString("3234973");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_25, UnderlyingInstrument_25);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_25;
    UnderlyingAllocationPercent_25.setString("86.810000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_25, UnderlyingInstrument_25);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_25;
    UnderlyingAttachmentPoint_25.setString("83.880000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_682975505"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_540823195"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_343070552"}, UnderlyingInstrument_25);
    FIX::UnderlyingCapValue UnderlyingCapValue_25;
    UnderlyingCapValue_25.setString("18314178");
set_field(noUnderlyings_0_0, UnderlyingCapValue_25, UnderlyingInstrument_25);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_25;
    UnderlyingCashAmount_25.setString("8043935");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_25);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_25;
    UnderlyingContractMultiplier_25.setString("16683264");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{120319477}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1995998209"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_801384931"}, UnderlyingInstrument_25);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_25;
    UnderlyingCouponRate_25.setString("99.600000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1010572359"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_25);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_25;
    UnderlyingCurrentValue_25.setString("9762108");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_25, UnderlyingInstrument_25);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_25;
    UnderlyingDetachmentPoint_25.setString("67.690000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_25, UnderlyingInstrument_25);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_25;
    UnderlyingDirtyPrice_25.setString("21303641");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_25, UnderlyingInstrument_25);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_25;
    UnderlyingEndPrice_25.setString("21361995");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_25, UnderlyingInstrument_25);
    FIX::UnderlyingEndValue UnderlyingEndValue_25;
    UnderlyingEndValue_25.setString("12943720");
set_field(noUnderlyings_0_0, UnderlyingEndValue_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{2035638517}, UnderlyingInstrument_25);
    FIX::UnderlyingFXRate UnderlyingFXRate_25;
    UnderlyingFXRate_25.setString("11526037");
set_field(noUnderlyings_0_0, UnderlyingFXRate_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_25);
    FIX::UnderlyingFactor UnderlyingFactor_25;
    UnderlyingFactor_25.setString("8221291");
set_field(noUnderlyings_0_0, UnderlyingFactor_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1877040990}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1918294569"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2040439744"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1269591712"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_679385061"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_216453413"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1114456745"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1918893450"}, UnderlyingInstrument_25);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_25;
    UnderlyingNotionalPercentageOutstanding_25.setString("89.180000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_25);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_25;
    UnderlyingOriginalNotionalPercentageOutstanding_25.setString("3.540000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_583363116"}, UnderlyingInstrument_25);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_25;
    UnderlyingPriceUnitOfMeasureQty_25.setString("3121898");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{2000981673}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{104205952}, UnderlyingInstrument_25);
    FIX::UnderlyingPx UnderlyingPx_25;
    UnderlyingPx_25.setString("4325093");
set_field(noUnderlyings_0_0, UnderlyingPx_25, UnderlyingInstrument_25);
    FIX::UnderlyingQty UnderlyingQty_25;
    UnderlyingQty_25.setString("18494962");
set_field(noUnderlyings_0_0, UnderlyingQty_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_905590883"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1912359294"}, UnderlyingInstrument_25);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_25;
    UnderlyingRepurchaseRate_25.setString("49.460000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1823343785}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1511335643"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1688795778"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1137906906"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1494216177"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1677511697"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_284795310"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1382371046"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_682631756"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_844438211"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_25);
    FIX::UnderlyingStartValue UnderlyingStartValue_25;
    UnderlyingStartValue_25.setString("4121890");
set_field(noUnderlyings_0_0, UnderlyingStartValue_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_615249133"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_25);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_25;
    UnderlyingStrikePrice_25.setString("12946341");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_166426085"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_648753907"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1066043996"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1065855003"}, UnderlyingInstrument_25);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_25;
    UnderlyingUnitOfMeasureQty_25.setString("1565502");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_25, UnderlyingInstrument_25);
    all_values.push_back(UnderlyingInstrument_25);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_57;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1649218119"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_57);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_468740056"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_57);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_57);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_51;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1753424071"}, UnderlyingStipulations_NoUnderlyingStips_51);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_901249390"}, UnderlyingStipulations_NoUnderlyingStips_51);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_51);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_52;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_736034962"}, UnderlyingStipulations_NoUnderlyingStips_52);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_511531306"}, UnderlyingStipulations_NoUnderlyingStips_52);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_52);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_52;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1448619908"}, UndlyInstrumentParties_NoUndlyInstrumentParties_52);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_52);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{29977032}, UndlyInstrumentParties_NoUndlyInstrumentParties_52);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_52);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1325298349"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1524193209}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_519960088"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1610093660}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_6;
    set_field(noUnderlyings_0_1, FIX::CollAction{1}, UndInstrmtCollGrp_NoUnderlyings_6);
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_6);
    all_compo_names.insert("...NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_26;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1202591844"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{307048223}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_816097183"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1614780943}, UnderlyingInstrument_26);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_26;
    UnderlyingAdjustedQuantity_26.setString("9222973");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_26, UnderlyingInstrument_26);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_26;
    UnderlyingAllocationPercent_26.setString("98.550000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_26, UnderlyingInstrument_26);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_26;
    UnderlyingAttachmentPoint_26.setString("81.050000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_69447903"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_932495940"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1797832013"}, UnderlyingInstrument_26);
    FIX::UnderlyingCapValue UnderlyingCapValue_26;
    UnderlyingCapValue_26.setString("11354918");
set_field(noUnderlyings_0_1, UnderlyingCapValue_26, UnderlyingInstrument_26);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_26;
    UnderlyingCashAmount_26.setString("19983509");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_26);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_26;
    UnderlyingContractMultiplier_26.setString("1685326");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1500085415}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_275638621"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1202554978"}, UnderlyingInstrument_26);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_26;
    UnderlyingCouponRate_26.setString("58.380000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1176888012"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_26);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_26;
    UnderlyingCurrentValue_26.setString("18430130");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_26, UnderlyingInstrument_26);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_26;
    UnderlyingDetachmentPoint_26.setString("62.010000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_26, UnderlyingInstrument_26);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_26;
    UnderlyingDirtyPrice_26.setString("18049485");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_26, UnderlyingInstrument_26);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_26;
    UnderlyingEndPrice_26.setString("18729900");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_26, UnderlyingInstrument_26);
    FIX::UnderlyingEndValue UnderlyingEndValue_26;
    UnderlyingEndValue_26.setString("821745");
set_field(noUnderlyings_0_1, UnderlyingEndValue_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{982763290}, UnderlyingInstrument_26);
    FIX::UnderlyingFXRate UnderlyingFXRate_26;
    UnderlyingFXRate_26.setString("12496996");
set_field(noUnderlyings_0_1, UnderlyingFXRate_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_26);
    FIX::UnderlyingFactor UnderlyingFactor_26;
    UnderlyingFactor_26.setString("4453733");
set_field(noUnderlyings_0_1, UnderlyingFactor_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{2008780250}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1804726525"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_752421525"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_677393786"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1272023820"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1674718882"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1443463641"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_273618278"}, UnderlyingInstrument_26);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_26;
    UnderlyingNotionalPercentageOutstanding_26.setString("67.850000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_26);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_26;
    UnderlyingOriginalNotionalPercentageOutstanding_26.setString("2.910000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_732175036"}, UnderlyingInstrument_26);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_26;
    UnderlyingPriceUnitOfMeasureQty_26.setString("793432");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1878348856}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{900707639}, UnderlyingInstrument_26);
    FIX::UnderlyingPx UnderlyingPx_26;
    UnderlyingPx_26.setString("15794286");
set_field(noUnderlyings_0_1, UnderlyingPx_26, UnderlyingInstrument_26);
    FIX::UnderlyingQty UnderlyingQty_26;
    UnderlyingQty_26.setString("65038");
set_field(noUnderlyings_0_1, UnderlyingQty_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2103262617"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_537970834"}, UnderlyingInstrument_26);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_26;
    UnderlyingRepurchaseRate_26.setString("18.410000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1894368910}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_8044331"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_878921242"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_986611464"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1812992919"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_604427675"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1068786056"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_648272561"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1854127318"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1670920737"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_26);
    FIX::UnderlyingStartValue UnderlyingStartValue_26;
    UnderlyingStartValue_26.setString("17154239");
set_field(noUnderlyings_0_1, UnderlyingStartValue_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1328163615"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_26);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_26;
    UnderlyingStrikePrice_26.setString("4527037");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_26, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1373302623"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1688797699"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_726322065"}, UnderlyingInstrument_26);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_969985760"}, UnderlyingInstrument_26);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_26;
    UnderlyingUnitOfMeasureQty_26.setString("19172736");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_26, UnderlyingInstrument_26);
    all_values.push_back(UnderlyingInstrument_26);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_58;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1702160796"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_58);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1996616861"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_58);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_58);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_59;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_381153916"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_59);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_455384787"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_59);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_59);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_60;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1428561856"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_60);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_387657746"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_60);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_60);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_53;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1966532690"}, UnderlyingStipulations_NoUnderlyingStips_53);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1571049587"}, UnderlyingStipulations_NoUnderlyingStips_53);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_53);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_54;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_158049019"}, UnderlyingStipulations_NoUnderlyingStips_54);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1974577021"}, UnderlyingStipulations_NoUnderlyingStips_54);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_54);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_55;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_302487182"}, UnderlyingStipulations_NoUnderlyingStips_55);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_1144660483"}, UnderlyingStipulations_NoUnderlyingStips_55);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_55);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_53;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_906914857"}, UndlyInstrumentParties_NoUndlyInstrumentParties_53);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_53);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{140875206}, UndlyInstrumentParties_NoUndlyInstrumentParties_53);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_53);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1736883629"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1234521070}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
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
