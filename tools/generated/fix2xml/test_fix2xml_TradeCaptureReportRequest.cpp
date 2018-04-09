#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradeCaptureReportRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReportRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::TradeCaptureReportRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportRequest_0;
  set_field(msg, FIX::ClOrdID{"STRING_1334949525"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_555933267"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1882219351"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::EncodedTextLen{522569160}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::ExecID{"STRING_1436052088"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::ExecType{'9'}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::FirmTradeID{"STRING_1425998017"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::MatchStatus{'2'}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::MessageEventSource{"STRING_163501933"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::MultiLegReportingType{'2'}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::OrderID{"STRING_652482378"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::ResponseDestination{"STRING_1133829592"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::ResponseTransportType{1}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::SecondaryFirmTradeID{"STRING_1775845823"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::SecondaryTradeID{"STRING_516507143"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::SecondaryTradeReportID{"STRING_1380633718"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::SecondaryTrdType{1223299301}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::Side{'3'}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::Text{"STRING_1928941043"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TimeBracket{"STRING_274834574"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeHandlingInstr{'3'}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeID{"STRING_1673922656"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeInputDevice{"STRING_1193024941"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeInputSource{"STRING_523364246"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeLinkID{"STRING_1196936928"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeReportID{"STRING_148167357"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeRequestID{"STRING_1972237517"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeRequestType{2}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_5"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_5"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TransferReason{"STRING_1549427112"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TrdMatchID{"STRING_2086895269"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TrdSubType{3}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TrdType{53}, TradeCaptureReportRequest_0);
  all_values.push_back(TradeCaptureReportRequest_0);

  all_compo_names.insert("TradeCaptureReportRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_31;
  set_field(msg, FIX::AgreementCurrency{"JPY"}, FinancingDetails_31);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1350510642"}, FinancingDetails_31);
  set_field(msg, FIX::AgreementDesc{"STRING_313987284"}, FinancingDetails_31);
  set_field(msg, FIX::AgreementID{"STRING_165669683"}, FinancingDetails_31);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_31);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_966469662"}, FinancingDetails_31);
  FIX::MarginRatio MarginRatio_31;
  MarginRatio_31.setString("92.760000");
set_field(msg, MarginRatio_31, FinancingDetails_31);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1135084185"}, FinancingDetails_31);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_31);
  all_values.push_back(FinancingDetails_31);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_142;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_368234256"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1818131139}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_577787317"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1084561617}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1599588535"}, InstrumentLeg_142);
    FIX::LegContractMultiplier LegContractMultiplier_142;
    LegContractMultiplier_142.setString("8526218");
set_field(noLegs_0_0, LegContractMultiplier_142, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1177033578}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1126027543"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_2045646832"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1700397824"}, InstrumentLeg_142);
    FIX::LegCouponRate LegCouponRate_142;
    LegCouponRate_142.setString("8.240000");
set_field(noLegs_0_0, LegCouponRate_142, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_46330541"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1577292543"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1661475473}, InstrumentLeg_142);
    FIX::LegFactor LegFactor_142;
    LegFactor_142.setString("19393855");
set_field(noLegs_0_0, LegFactor_142, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1516704165}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1532534956"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1863898149"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_744684226"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1534702706"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1066925143"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1058671511"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1700372389"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1123301133"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_142);
    FIX::LegOptionRatio LegOptionRatio_142;
    LegOptionRatio_142.setString("8523880");
set_field(noLegs_0_0, LegOptionRatio_142, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_110901671"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_472489363"}, InstrumentLeg_142);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_142;
    LegPriceUnitOfMeasureQty_142.setString("5209107");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_142, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegProduct{479135927}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegPutOrCall{143136855}, InstrumentLeg_142);
    FIX::LegRatioQty LegRatioQty_142;
    LegRatioQty_142.setString("10986981");
set_field(noLegs_0_0, LegRatioQty_142, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1563697544"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1742725390"}, InstrumentLeg_142);
    FIX::LegRepurchaseRate LegRepurchaseRate_142;
    LegRepurchaseRate_142.setString("99.970000");
set_field(noLegs_0_0, LegRepurchaseRate_142, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{593247474}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_721269285"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1849483181"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_146161651"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_896750109"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1895813723"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1671313344"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1325622618"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_142);
    FIX::LegStrikePrice LegStrikePrice_142;
    LegStrikePrice_142.setString("6948431");
set_field(noLegs_0_0, LegStrikePrice_142, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_570356477"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_795024898"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1439527362"}, InstrumentLeg_142);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_2105059183"}, InstrumentLeg_142);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_142;
    LegUnitOfMeasureQty_142.setString("18619500");
set_field(noLegs_0_0, LegUnitOfMeasureQty_142, InstrumentLeg_142);
    all_values.push_back(InstrumentLeg_142);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_286;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1657947925"}, LegSecAltIDGrp_NoLegSecurityAltID_286);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_837767526"}, LegSecAltIDGrp_NoLegSecurityAltID_286);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_286);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_99;
  FIX::AttachmentPoint AttachmentPoint_99;
  AttachmentPoint_99.setString("27.500000");
set_field(msg, AttachmentPoint_99, Instrument_99);
  set_field(msg, FIX::CFICode{"STRING_362852294"}, Instrument_99);
  set_field(msg, FIX::CPProgram{99}, Instrument_99);
  set_field(msg, FIX::CPRegType{"STRING_700862114"}, Instrument_99);
  FIX::CapPrice CapPrice_99;
  CapPrice_99.setString("8837630");
set_field(msg, CapPrice_99, Instrument_99);
  FIX::ContractMultiplier ContractMultiplier_99;
  ContractMultiplier_99.setString("14278051");
set_field(msg, ContractMultiplier_99, Instrument_99);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_99);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1982461188"}, Instrument_99);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_844019020"}, Instrument_99);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_439240711"}, Instrument_99);
  FIX::CouponRate CouponRate_99;
  CouponRate_99.setString("75.370000");
set_field(msg, CouponRate_99, Instrument_99);
  set_field(msg, FIX::CreditRating{"STRING_1437266495"}, Instrument_99);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1160509996"}, Instrument_99);
  FIX::DetachmentPoint DetachmentPoint_99;
  DetachmentPoint_99.setString("70.710000");
set_field(msg, DetachmentPoint_99, Instrument_99);
  set_field(msg, FIX::EncodedIssuer{"DATA_1583428146"}, Instrument_99);
  set_field(msg, FIX::EncodedIssuerLen{2057260106}, Instrument_99);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1236627146"}, Instrument_99);
  set_field(msg, FIX::EncodedSecurityDescLen{1107257842}, Instrument_99);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_99);
  FIX::Factor Factor_99;
  Factor_99.setString("4147661");
set_field(msg, Factor_99, Instrument_99);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_99);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_99);
  FIX::FloorPrice FloorPrice_99;
  FloorPrice_99.setString("11096092");
set_field(msg, FloorPrice_99, Instrument_99);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_99);
  set_field(msg, FIX::InstrRegistry{"STRING_922636626"}, Instrument_99);
  set_field(msg, FIX::InstrmtAssignmentMethod{'4'}, Instrument_99);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_673011377"}, Instrument_99);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_637103019"}, Instrument_99);
  set_field(msg, FIX::Issuer{"STRING_752368191"}, Instrument_99);
  set_field(msg, FIX::ListMethod{0}, Instrument_99);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1474870545"}, Instrument_99);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_980740941"}, Instrument_99);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_546327948"}, Instrument_99);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_276056095"}, Instrument_99);
  FIX::MinPriceIncrement MinPriceIncrement_99;
  MinPriceIncrement_99.setString("16816030");
set_field(msg, MinPriceIncrement_99, Instrument_99);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_99;
  MinPriceIncrementAmount_99.setString("14300910");
set_field(msg, MinPriceIncrementAmount_99, Instrument_99);
  set_field(msg, FIX::NTPositionLimit{1703861219}, Instrument_99);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_99;
  NotionalPercentageOutstanding_99.setString("83.760000");
set_field(msg, NotionalPercentageOutstanding_99, Instrument_99);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_99);
  FIX::OptPayoutAmount OptPayoutAmount_99;
  OptPayoutAmount_99.setString("4003965");
set_field(msg, OptPayoutAmount_99, Instrument_99);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_99);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_99;
  OriginalNotionalPercentageOutstanding_99.setString("24.610000");
set_field(msg, OriginalNotionalPercentageOutstanding_99, Instrument_99);
  set_field(msg, FIX::Pool{"STRING_1837663087"}, Instrument_99);
  set_field(msg, FIX::PositionLimit{1977869084}, Instrument_99);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_99);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1273607585"}, Instrument_99);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_99;
  PriceUnitOfMeasureQty_99.setString("18876455");
set_field(msg, PriceUnitOfMeasureQty_99, Instrument_99);
  set_field(msg, FIX::Product{6}, Instrument_99);
  set_field(msg, FIX::ProductComplex{"STRING_233381779"}, Instrument_99);
  set_field(msg, FIX::PutOrCall{1}, Instrument_99);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1896089147"}, Instrument_99);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_378461143"}, Instrument_99);
  FIX::RepurchaseRate RepurchaseRate_99;
  RepurchaseRate_99.setString("86.010000");
set_field(msg, RepurchaseRate_99, Instrument_99);
  set_field(msg, FIX::RepurchaseTerm{858214751}, Instrument_99);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_99);
  set_field(msg, FIX::SecurityDesc{"STRING_1986895227"}, Instrument_99);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1259867717"}, Instrument_99);
  set_field(msg, FIX::SecurityGroup{"STRING_1766908362"}, Instrument_99);
  set_field(msg, FIX::SecurityID{"STRING_476514598"}, Instrument_99);
  set_field(msg, FIX::SecurityIDSource{"STRING_D"}, Instrument_99);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_99);
  set_field(msg, FIX::SecuritySubType{"STRING_1951385143"}, Instrument_99);
  set_field(msg, FIX::SecurityType{"STRING_STN"}, Instrument_99);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_99);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_99);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_379612609"}, Instrument_99);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1779319348"}, Instrument_99);
  set_field(msg, FIX::StrikeCurrency{"CHF"}, Instrument_99);
  FIX::StrikeMultiplier StrikeMultiplier_99;
  StrikeMultiplier_99.setString("8969042");
set_field(msg, StrikeMultiplier_99, Instrument_99);
  FIX::StrikePrice StrikePrice_99;
  StrikePrice_99.setString("367317");
set_field(msg, StrikePrice_99, Instrument_99);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_99);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_99;
  StrikePriceBoundaryPrecision_99.setString("67.330000");
set_field(msg, StrikePriceBoundaryPrecision_99, Instrument_99);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_99);
  FIX::StrikeValue StrikeValue_99;
  StrikeValue_99.setString("14054755");
set_field(msg, StrikeValue_99, Instrument_99);
  set_field(msg, FIX::Symbol{"STRING_2045482618"}, Instrument_99);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_99);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_99);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_99);
  set_field(msg, FIX::UnitOfMeasure{"STRING_lbs"}, Instrument_99);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_99;
  UnitOfMeasureQty_99.setString("20822842");
set_field(msg, UnitOfMeasureQty_99, Instrument_99);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_99);
  all_values.push_back(Instrument_99);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_203;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_203);
    FIX::ComplexEventPrice ComplexEventPrice_203;
    ComplexEventPrice_203.setString("19861422");
set_field(noComplexEvents_0_0, ComplexEventPrice_203, ComplexEvents_NoComplexEvents_203);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_203);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_203;
    ComplexEventPriceBoundaryPrecision_203.setString("8.080000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_203, ComplexEvents_NoComplexEvents_203);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_203);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_203);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_203;
    ComplexOptPayoutAmount_203.setString("13149854");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_203, ComplexEvents_NoComplexEvents_203);
    all_values.push_back(ComplexEvents_NoComplexEvents_203);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_409;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 21, 56, 20, 3, 2012)}, ComplexEventDates_NoComplexEventDates_409);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 48, 48, 0, 7, 2005)}, ComplexEventDates_NoComplexEventDates_409);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_409);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_822;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 16, 44)}, ComplexEventTimes_NoComplexEventTimes_822);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 16, 41)}, ComplexEventTimes_NoComplexEventTimes_822);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_822);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_823;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 59, 33)}, ComplexEventTimes_NoComplexEventTimes_823);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 59, 49)}, ComplexEventTimes_NoComplexEventTimes_823);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_823);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_824;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 2, 48)}, ComplexEventTimes_NoComplexEventTimes_824);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 4, 11)}, ComplexEventTimes_NoComplexEventTimes_824);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_824);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_410;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 59, 44, 3, 5, 2006)}, ComplexEventDates_NoComplexEventDates_410);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 34, 59, 23, 4, 2003)}, ComplexEventDates_NoComplexEventDates_410);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_410);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_825;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 32, 18)}, ComplexEventTimes_NoComplexEventTimes_825);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 9, 53)}, ComplexEventTimes_NoComplexEventTimes_825);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_825);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_411;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 56, 55, 19, 5, 2010)}, ComplexEventDates_NoComplexEventDates_411);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 37, 21, 9, 5, 2017)}, ComplexEventDates_NoComplexEventDates_411);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_411);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_826;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 5, 38)}, ComplexEventTimes_NoComplexEventTimes_826);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 46, 29)}, ComplexEventTimes_NoComplexEventTimes_826);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_826);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_204;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_204);
    FIX::ComplexEventPrice ComplexEventPrice_204;
    ComplexEventPrice_204.setString("7909538");
set_field(noComplexEvents_0_1, ComplexEventPrice_204, ComplexEvents_NoComplexEvents_204);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_204);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_204;
    ComplexEventPriceBoundaryPrecision_204.setString("73.310000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_204, ComplexEvents_NoComplexEvents_204);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_204);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_204);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_204;
    ComplexOptPayoutAmount_204.setString("18408419");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_204, ComplexEvents_NoComplexEvents_204);
    all_values.push_back(ComplexEvents_NoComplexEvents_204);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_412;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 29, 12, 2, 11, 2008)}, ComplexEventDates_NoComplexEventDates_412);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 33, 30, 15, 2, 2006)}, ComplexEventDates_NoComplexEventDates_412);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_412);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_827;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 56, 51)}, ComplexEventTimes_NoComplexEventTimes_827);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 37, 37)}, ComplexEventTimes_NoComplexEventTimes_827);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_827);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_828;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 23, 16)}, ComplexEventTimes_NoComplexEventTimes_828);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 49, 42)}, ComplexEventTimes_NoComplexEventTimes_828);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_828);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_829;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 4, 2)}, ComplexEventTimes_NoComplexEventTimes_829);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 50, 19)}, ComplexEventTimes_NoComplexEventTimes_829);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_829);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_413;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 50, 28, 1, 7, 2012)}, ComplexEventDates_NoComplexEventDates_413);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 14, 17, 19, 12, 2016)}, ComplexEventDates_NoComplexEventDates_413);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_413);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_830;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 27, 49)}, ComplexEventTimes_NoComplexEventTimes_830);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 38, 50)}, ComplexEventTimes_NoComplexEventTimes_830);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_830);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_831;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 54, 43)}, ComplexEventTimes_NoComplexEventTimes_831);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 34, 8)}, ComplexEventTimes_NoComplexEventTimes_831);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_831);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_414;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 58, 49, 27, 9, 2007)}, ComplexEventDates_NoComplexEventDates_414);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 22, 30, 25, 2, 2002)}, ComplexEventDates_NoComplexEventDates_414);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_414);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_832;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 13, 14)}, ComplexEventTimes_NoComplexEventTimes_832);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 44, 6)}, ComplexEventTimes_NoComplexEventTimes_832);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_832);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_833;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 52, 30)}, ComplexEventTimes_NoComplexEventTimes_833);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 56, 35)}, ComplexEventTimes_NoComplexEventTimes_833);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_833);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_194;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1399732126"}, EvntGrp_NoEvents_194);
    FIX::EventPx EventPx_194;
    EventPx_194.setString("7888196");
set_field(noEvents_0_0, EventPx_194, EvntGrp_NoEvents_194);
    set_field(noEvents_0_0, FIX::EventText{"STRING_732003247"}, EvntGrp_NoEvents_194);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(9, 14, 55, 7, 5, 2014)}, EvntGrp_NoEvents_194);
    set_field(noEvents_0_0, FIX::EventType{6}, EvntGrp_NoEvents_194);
    all_values.push_back(EvntGrp_NoEvents_194);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_190;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1232345194"}, InstrumentParties_NoInstrumentParties_190);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_190);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{2135437255}, InstrumentParties_NoInstrumentParties_190);
    all_values.push_back(InstrumentParties_NoInstrumentParties_190);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_383;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1003273756"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_383);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1570921741}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_383);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_383);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_198;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1772969122"}, SecAltIDGrp_NoSecurityAltID_198);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_691814198"}, SecAltIDGrp_NoSecurityAltID_198);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_198);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_199;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_154999667"}, SecAltIDGrp_NoSecurityAltID_199);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_2077487349"}, SecAltIDGrp_NoSecurityAltID_199);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_199);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_198;
  set_field(msg, FIX::SecurityXML{"XMLDATA_966583928"}, SecurityXML_198);
  set_field(msg, FIX::SecurityXMLLen{1309713220}, SecurityXML_198);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1773250171"}, SecurityXML_198);
  all_values.push_back(SecurityXML_198);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_18;
  set_field(msg, FIX::DeliveryForm{2}, InstrumentExtension_18);
  FIX::PctAtRisk PctAtRisk_18;
  PctAtRisk_18.setString("83.570000");
set_field(msg, PctAtRisk_18, InstrumentExtension_18);
  all_values.push_back(InstrumentExtension_18);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_35;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{3}, AttrbGrp_NoInstrAttrib_35);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_1910428255"}, AttrbGrp_NoInstrAttrib_35);
    all_values.push_back(AttrbGrp_NoInstrAttrib_35);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_36;
    set_field(noInstrAttrib_0_1, FIX::InstrAttribType{29}, AttrbGrp_NoInstrAttrib_36);
    set_field(noInstrAttrib_0_1, FIX::InstrAttribValue{"STRING_1662746007"}, AttrbGrp_NoInstrAttrib_36);
    all_values.push_back(AttrbGrp_NoInstrAttrib_36);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_37;
    set_field(noInstrAttrib_0_2, FIX::InstrAttribType{25}, AttrbGrp_NoInstrAttrib_37);
    set_field(noInstrAttrib_0_2, FIX::InstrAttribValue{"STRING_1671751840"}, AttrbGrp_NoInstrAttrib_37);
    all_values.push_back(AttrbGrp_NoInstrAttrib_37);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_159;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_2057091488"}, Parties_NoPartyIDs_159);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'C'}, Parties_NoPartyIDs_159);
    set_field(noPartyIDs_0_0, FIX::PartyRole{78}, Parties_NoPartyIDs_159);
    all_values.push_back(Parties_NoPartyIDs_159);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_317;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1023731034"}, PtysSubGrp_NoPartySubIDs_317);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_317);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_317);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_318;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1102069310"}, PtysSubGrp_NoPartySubIDs_318);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_318);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_318);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_319;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_395644596"}, PtysSubGrp_NoPartySubIDs_319);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_319);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_319);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_160;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1561856102"}, Parties_NoPartyIDs_160);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_160);
    set_field(noPartyIDs_0_1, FIX::PartyRole{8}, Parties_NoPartyIDs_160);
    all_values.push_back(Parties_NoPartyIDs_160);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_320;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1024403826"}, PtysSubGrp_NoPartySubIDs_320);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_320);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_320);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_321;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1958884899"}, PtysSubGrp_NoPartySubIDs_321);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_321);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_321);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TrdCapDtGrp
  // Group TrdCapDtGrp.NoDates
  {
    FIX50SP2::TradeCaptureReportRequest::NoDates noDates_0_0;
    // TrdCapDtGrp.NoDates
    multiset<string> TrdCapDtGrp_NoDates_0;
    set_field(noDates_0_0, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(19, 45, 40, 3, 4, 2015)}, TrdCapDtGrp_NoDates_0);
    set_field(noDates_0_0, FIX::TradeDate{"LOCALMKTDATE_1646674369"}, TrdCapDtGrp_NoDates_0);
    set_field(noDates_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(9, 22, 39, 6, 3, 2011)}, TrdCapDtGrp_NoDates_0);
    all_values.push_back(TrdCapDtGrp_NoDates_0);
    all_compo_names.insert("...NoDates");

    msg.addGroup(noDates_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_140;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_2128401764"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1040862920}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_718540593"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{89510696}, UnderlyingInstrument_140);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_140;
    UnderlyingAdjustedQuantity_140.setString("14365075");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_140, UnderlyingInstrument_140);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_140;
    UnderlyingAllocationPercent_140.setString("35.110000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_140, UnderlyingInstrument_140);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_140;
    UnderlyingAttachmentPoint_140.setString("67.990000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_687942221"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_174540874"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1307768383"}, UnderlyingInstrument_140);
    FIX::UnderlyingCapValue UnderlyingCapValue_140;
    UnderlyingCapValue_140.setString("17123460");
set_field(noUnderlyings_0_0, UnderlyingCapValue_140, UnderlyingInstrument_140);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_140;
    UnderlyingCashAmount_140.setString("13798160");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_140);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_140;
    UnderlyingContractMultiplier_140.setString("5192699");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1404191572}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_92800458"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1099443978"}, UnderlyingInstrument_140);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_140;
    UnderlyingCouponRate_140.setString("41.090000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_613169638"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_140);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_140;
    UnderlyingCurrentValue_140.setString("8964834");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_140, UnderlyingInstrument_140);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_140;
    UnderlyingDetachmentPoint_140.setString("46.700000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_140, UnderlyingInstrument_140);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_140;
    UnderlyingDirtyPrice_140.setString("934705");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_140, UnderlyingInstrument_140);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_140;
    UnderlyingEndPrice_140.setString("16747450");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_140, UnderlyingInstrument_140);
    FIX::UnderlyingEndValue UnderlyingEndValue_140;
    UnderlyingEndValue_140.setString("11093935");
set_field(noUnderlyings_0_0, UnderlyingEndValue_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1037714979}, UnderlyingInstrument_140);
    FIX::UnderlyingFXRate UnderlyingFXRate_140;
    UnderlyingFXRate_140.setString("2151309");
set_field(noUnderlyings_0_0, UnderlyingFXRate_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_140);
    FIX::UnderlyingFactor UnderlyingFactor_140;
    UnderlyingFactor_140.setString("12152031");
set_field(noUnderlyings_0_0, UnderlyingFactor_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1979085832}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_47498782"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_108582399"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_550142778"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_137009479"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1545089916"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_211222641"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1788376278"}, UnderlyingInstrument_140);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_140;
    UnderlyingNotionalPercentageOutstanding_140.setString("84.890000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_140);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_140;
    UnderlyingOriginalNotionalPercentageOutstanding_140.setString("10.130000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1797894536"}, UnderlyingInstrument_140);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_140;
    UnderlyingPriceUnitOfMeasureQty_140.setString("17655795");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{2067830647}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{169680815}, UnderlyingInstrument_140);
    FIX::UnderlyingPx UnderlyingPx_140;
    UnderlyingPx_140.setString("10222875");
set_field(noUnderlyings_0_0, UnderlyingPx_140, UnderlyingInstrument_140);
    FIX::UnderlyingQty UnderlyingQty_140;
    UnderlyingQty_140.setString("131474");
set_field(noUnderlyings_0_0, UnderlyingQty_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1269124793"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_136877984"}, UnderlyingInstrument_140);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_140;
    UnderlyingRepurchaseRate_140.setString("70.960000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1708385094}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_2130760973"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1522800522"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1646836117"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_76747905"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1050061941"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_608746053"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1114462884"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1265192843"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_675326720"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_140);
    FIX::UnderlyingStartValue UnderlyingStartValue_140;
    UnderlyingStartValue_140.setString("10967950");
set_field(noUnderlyings_0_0, UnderlyingStartValue_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_722825502"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_140);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_140;
    UnderlyingStrikePrice_140.setString("8598349");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_140, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1835854679"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1858160446"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_500727611"}, UnderlyingInstrument_140);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1921403168"}, UnderlyingInstrument_140);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_140;
    UnderlyingUnitOfMeasureQty_140.setString("964403");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_140, UnderlyingInstrument_140);
    all_values.push_back(UnderlyingInstrument_140);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_290;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1571814056"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_290);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1862019911"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_290);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_290);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_291;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1369735624"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_291);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1741494872"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_291);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_291);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_284;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1382883081"}, UnderlyingStipulations_NoUnderlyingStips_284);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_863136017"}, UnderlyingStipulations_NoUnderlyingStips_284);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_284);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_285;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_873701770"}, UnderlyingStipulations_NoUnderlyingStips_285);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_2009200177"}, UnderlyingStipulations_NoUnderlyingStips_285);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_285);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_286;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_424037464"}, UnderlyingStipulations_NoUnderlyingStips_286);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_856979095"}, UnderlyingStipulations_NoUnderlyingStips_286);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_286);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_294;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2070873581"}, UndlyInstrumentParties_NoUndlyInstrumentParties_294);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_294);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{287095345}, UndlyInstrumentParties_NoUndlyInstrumentParties_294);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_294);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_594;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2048189884"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_594);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1552288188}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_594);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_594);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_295;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1207462706"}, UndlyInstrumentParties_NoUndlyInstrumentParties_295);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_295);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{501599567}, UndlyInstrumentParties_NoUndlyInstrumentParties_295);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_295);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_595;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_373653363"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_595);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1053725}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_595);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_595);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_296;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_642639542"}, UndlyInstrumentParties_NoUndlyInstrumentParties_296);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_296);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1859214171}, UndlyInstrumentParties_NoUndlyInstrumentParties_296);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_296);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_596;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1983427562"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_596);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1955654485}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_596);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_596);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_597;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_445272130"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_597);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1407757970}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_597);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_597);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_598;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1670190748"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_598);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{1815007754}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_598);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_598);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // header
  multiset<string> header_98;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_98);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_259530886"}, header_98);
  set_header_field(msg.getHeader(), FIX::BodyLength{1050407188}, header_98);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1864905212"}, header_98);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1133232656"}, header_98);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_912123717"}, header_98);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_141459028"}, header_98);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1990211751}, header_98);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_98);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{64848961}, header_98);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_776455103"}, header_98);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_436252466"}, header_98);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_596984947"}, header_98);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(14, 34, 0, 21, 12, 2015)}, header_98);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_98);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_98);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1195727697"}, header_98);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{55440822}, header_98);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1225775263"}, header_98);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1031671611"}, header_98);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_2011095307"}, header_98);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(21, 27, 0, 20, 3, 2002)}, header_98);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1011136692"}, header_98);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_779082302"}, header_98);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1153618758"}, header_98);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1152595720"}, header_98);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{621810406}, header_98);
  all_values.push_back(header_98);
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
