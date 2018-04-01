#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::TradeCaptureReportRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportRequest_0;
  set_field(msg, FIX::ClOrdID{"STRING_1559252863"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1425729683"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1040159889"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::EncodedTextLen{457427111}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::ExecID{"STRING_678698968"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::ExecType{'E'}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::FirmTradeID{"STRING_2028242373"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::MatchStatus{'1'}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::MessageEventSource{"STRING_1434333185"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::MultiLegReportingType{'2'}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::OrderID{"STRING_383808019"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::ResponseDestination{"STRING_1742917070"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::ResponseTransportType{1}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::SecondaryFirmTradeID{"STRING_1215908113"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::SecondaryTradeID{"STRING_1965881857"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::SecondaryTradeReportID{"STRING_817330463"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::SecondaryTrdType{1564479800}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::Side{'4'}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::Text{"STRING_996824767"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TimeBracket{"STRING_256028110"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeHandlingInstr{'2'}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeID{"STRING_75175444"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeInputDevice{"STRING_419680965"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeInputSource{"STRING_715343696"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeLinkID{"STRING_1639960788"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeReportID{"STRING_935202655"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeRequestID{"STRING_1847121518"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradeRequestType{2}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_3"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TransferReason{"STRING_507531887"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TrdMatchID{"STRING_1534185018"}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TrdSubType{18}, TradeCaptureReportRequest_0);
  set_field(msg, FIX::TrdType{3}, TradeCaptureReportRequest_0);
  all_values.push_back(TradeCaptureReportRequest_0);

  all_compo_names.insert("TradeCaptureReportRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_30;
  set_field(msg, FIX::AgreementCurrency{"GBP"}, FinancingDetails_30);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_845717723"}, FinancingDetails_30);
  set_field(msg, FIX::AgreementDesc{"STRING_120989841"}, FinancingDetails_30);
  set_field(msg, FIX::AgreementID{"STRING_1565164459"}, FinancingDetails_30);
  set_field(msg, FIX::DeliveryType{1}, FinancingDetails_30);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_504797861"}, FinancingDetails_30);
  FIX::MarginRatio MarginRatio_30;
  MarginRatio_30.setString("78.810000");
set_field(msg, MarginRatio_30, FinancingDetails_30);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1727819746"}, FinancingDetails_30);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_30);
  all_values.push_back(FinancingDetails_30);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_117;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_397666561"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1137702126}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_488030558"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{300330731}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_2134526893"}, InstrumentLeg_117);
    FIX::LegContractMultiplier LegContractMultiplier_117;
    LegContractMultiplier_117.setString("7440586");
set_field(noLegs_0_0, LegContractMultiplier_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1663168699}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_62218690"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1163739633"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_231028747"}, InstrumentLeg_117);
    FIX::LegCouponRate LegCouponRate_117;
    LegCouponRate_117.setString("94.780000");
set_field(noLegs_0_0, LegCouponRate_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_2098942288"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_59913975"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{563759038}, InstrumentLeg_117);
    FIX::LegFactor LegFactor_117;
    LegFactor_117.setString("11579903");
set_field(noLegs_0_0, LegFactor_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1594098993}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_89527700"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2122949387"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1659499331"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_220358974"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_821183462"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1780489173"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1785523433"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_387889039"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_117);
    FIX::LegOptionRatio LegOptionRatio_117;
    LegOptionRatio_117.setString("7986376");
set_field(noLegs_0_0, LegOptionRatio_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_2115708785"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1858509360"}, InstrumentLeg_117);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_117;
    LegPriceUnitOfMeasureQty_117.setString("17776337");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegProduct{365891698}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegPutOrCall{848727838}, InstrumentLeg_117);
    FIX::LegRatioQty LegRatioQty_117;
    LegRatioQty_117.setString("1181806");
set_field(noLegs_0_0, LegRatioQty_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_666222429"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_835771084"}, InstrumentLeg_117);
    FIX::LegRepurchaseRate LegRepurchaseRate_117;
    LegRepurchaseRate_117.setString("93.350000");
set_field(noLegs_0_0, LegRepurchaseRate_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{181907480}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_897989774"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_2025978968"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_412936228"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_452685604"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1977437608"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_343602845"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_2037351583"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_117);
    FIX::LegStrikePrice LegStrikePrice_117;
    LegStrikePrice_117.setString("14839669");
set_field(noLegs_0_0, LegStrikePrice_117, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_996889583"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_89116586"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_995982611"}, InstrumentLeg_117);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1217248557"}, InstrumentLeg_117);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_117;
    LegUnitOfMeasureQty_117.setString("9103000");
set_field(noLegs_0_0, LegUnitOfMeasureQty_117, InstrumentLeg_117);
    all_values.push_back(InstrumentLeg_117);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_244;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_855288342"}, LegSecAltIDGrp_NoLegSecurityAltID_244);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1298189088"}, LegSecAltIDGrp_NoLegSecurityAltID_244);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_244);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_84;
  FIX::AttachmentPoint AttachmentPoint_84;
  AttachmentPoint_84.setString("15.220000");
set_field(msg, AttachmentPoint_84, Instrument_84);
  set_field(msg, FIX::CFICode{"STRING_1653926009"}, Instrument_84);
  set_field(msg, FIX::CPProgram{1}, Instrument_84);
  set_field(msg, FIX::CPRegType{"STRING_477817234"}, Instrument_84);
  FIX::CapPrice CapPrice_84;
  CapPrice_84.setString("12840761");
set_field(msg, CapPrice_84, Instrument_84);
  FIX::ContractMultiplier ContractMultiplier_84;
  ContractMultiplier_84.setString("16323059");
set_field(msg, ContractMultiplier_84, Instrument_84);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_84);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1402256785"}, Instrument_84);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_151044705"}, Instrument_84);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_14832509"}, Instrument_84);
  FIX::CouponRate CouponRate_84;
  CouponRate_84.setString("24.720000");
set_field(msg, CouponRate_84, Instrument_84);
  set_field(msg, FIX::CreditRating{"STRING_332952186"}, Instrument_84);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_912822283"}, Instrument_84);
  FIX::DetachmentPoint DetachmentPoint_84;
  DetachmentPoint_84.setString("14.400000");
set_field(msg, DetachmentPoint_84, Instrument_84);
  set_field(msg, FIX::EncodedIssuer{"DATA_745888414"}, Instrument_84);
  set_field(msg, FIX::EncodedIssuerLen{1365507887}, Instrument_84);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1972945400"}, Instrument_84);
  set_field(msg, FIX::EncodedSecurityDescLen{1089491259}, Instrument_84);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_84);
  FIX::Factor Factor_84;
  Factor_84.setString("18628133");
set_field(msg, Factor_84, Instrument_84);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_84);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_84);
  FIX::FloorPrice FloorPrice_84;
  FloorPrice_84.setString("11992966");
set_field(msg, FloorPrice_84, Instrument_84);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_84);
  set_field(msg, FIX::InstrRegistry{"STRING_523935778"}, Instrument_84);
  set_field(msg, FIX::InstrmtAssignmentMethod{'4'}, Instrument_84);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2063507636"}, Instrument_84);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1434235826"}, Instrument_84);
  set_field(msg, FIX::Issuer{"STRING_676783715"}, Instrument_84);
  set_field(msg, FIX::ListMethod{0}, Instrument_84);
  set_field(msg, FIX::LocaleOfIssue{"STRING_584941266"}, Instrument_84);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1443575237"}, Instrument_84);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_277754691"}, Instrument_84);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1851355492"}, Instrument_84);
  FIX::MinPriceIncrement MinPriceIncrement_84;
  MinPriceIncrement_84.setString("19213924");
set_field(msg, MinPriceIncrement_84, Instrument_84);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_84;
  MinPriceIncrementAmount_84.setString("15618308");
set_field(msg, MinPriceIncrementAmount_84, Instrument_84);
  set_field(msg, FIX::NTPositionLimit{1336177768}, Instrument_84);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_84;
  NotionalPercentageOutstanding_84.setString("38.970000");
set_field(msg, NotionalPercentageOutstanding_84, Instrument_84);
  set_field(msg, FIX::OptAttribute{'8'}, Instrument_84);
  FIX::OptPayoutAmount OptPayoutAmount_84;
  OptPayoutAmount_84.setString("14872224");
set_field(msg, OptPayoutAmount_84, Instrument_84);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_84);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_84;
  OriginalNotionalPercentageOutstanding_84.setString("64.180000");
set_field(msg, OriginalNotionalPercentageOutstanding_84, Instrument_84);
  set_field(msg, FIX::Pool{"STRING_1820174659"}, Instrument_84);
  set_field(msg, FIX::PositionLimit{2028108689}, Instrument_84);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_84);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_418579425"}, Instrument_84);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_84;
  PriceUnitOfMeasureQty_84.setString("12461329");
set_field(msg, PriceUnitOfMeasureQty_84, Instrument_84);
  set_field(msg, FIX::Product{1}, Instrument_84);
  set_field(msg, FIX::ProductComplex{"STRING_1508070685"}, Instrument_84);
  set_field(msg, FIX::PutOrCall{1}, Instrument_84);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_469915649"}, Instrument_84);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1357440180"}, Instrument_84);
  FIX::RepurchaseRate RepurchaseRate_84;
  RepurchaseRate_84.setString("4.650000");
set_field(msg, RepurchaseRate_84, Instrument_84);
  set_field(msg, FIX::RepurchaseTerm{1669212264}, Instrument_84);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_84);
  set_field(msg, FIX::SecurityDesc{"STRING_378572595"}, Instrument_84);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1717007843"}, Instrument_84);
  set_field(msg, FIX::SecurityGroup{"STRING_2119723246"}, Instrument_84);
  set_field(msg, FIX::SecurityID{"STRING_1812808421"}, Instrument_84);
  set_field(msg, FIX::SecurityIDSource{"STRING_3"}, Instrument_84);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_84);
  set_field(msg, FIX::SecuritySubType{"STRING_250266040"}, Instrument_84);
  set_field(msg, FIX::SecurityType{"STRING_STN"}, Instrument_84);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_84);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_84);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1463791971"}, Instrument_84);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_435653782"}, Instrument_84);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_84);
  FIX::StrikeMultiplier StrikeMultiplier_84;
  StrikeMultiplier_84.setString("12522577");
set_field(msg, StrikeMultiplier_84, Instrument_84);
  FIX::StrikePrice StrikePrice_84;
  StrikePrice_84.setString("6300544");
set_field(msg, StrikePrice_84, Instrument_84);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_84);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_84;
  StrikePriceBoundaryPrecision_84.setString("4.990000");
set_field(msg, StrikePriceBoundaryPrecision_84, Instrument_84);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_84);
  FIX::StrikeValue StrikeValue_84;
  StrikeValue_84.setString("14126736");
set_field(msg, StrikeValue_84, Instrument_84);
  set_field(msg, FIX::Symbol{"STRING_967514709"}, Instrument_84);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_84);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_84);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_84);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_84);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_84;
  UnitOfMeasureQty_84.setString("20786242");
set_field(msg, UnitOfMeasureQty_84, Instrument_84);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_84);
  all_values.push_back(Instrument_84);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_168;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_168);
    FIX::ComplexEventPrice ComplexEventPrice_168;
    ComplexEventPrice_168.setString("17137449");
set_field(noComplexEvents_0_0, ComplexEventPrice_168, ComplexEvents_NoComplexEvents_168);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_168);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_168;
    ComplexEventPriceBoundaryPrecision_168.setString("99.840000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_168, ComplexEvents_NoComplexEvents_168);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_168);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_168);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_168;
    ComplexOptPayoutAmount_168.setString("19771584");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_168, ComplexEvents_NoComplexEvents_168);
    all_values.push_back(ComplexEvents_NoComplexEvents_168);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_349;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 42, 42, 22, 3, 2004)}, ComplexEventDates_NoComplexEventDates_349);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 4, 51, 13, 8, 2004)}, ComplexEventDates_NoComplexEventDates_349);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_349);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_711;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 20, 37)}, ComplexEventTimes_NoComplexEventTimes_711);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 50, 2)}, ComplexEventTimes_NoComplexEventTimes_711);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_711);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_350;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 4, 46, 21, 1, 2014)}, ComplexEventDates_NoComplexEventDates_350);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 22, 23, 8, 1, 2001)}, ComplexEventDates_NoComplexEventDates_350);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_350);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_712;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 52, 54)}, ComplexEventTimes_NoComplexEventTimes_712);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 46, 25)}, ComplexEventTimes_NoComplexEventTimes_712);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_712);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_713;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 37, 58)}, ComplexEventTimes_NoComplexEventTimes_713);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 40, 26)}, ComplexEventTimes_NoComplexEventTimes_713);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_713);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_714;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 22, 34)}, ComplexEventTimes_NoComplexEventTimes_714);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 10, 47)}, ComplexEventTimes_NoComplexEventTimes_714);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_714);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_169;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_169);
    FIX::ComplexEventPrice ComplexEventPrice_169;
    ComplexEventPrice_169.setString("724307");
set_field(noComplexEvents_0_1, ComplexEventPrice_169, ComplexEvents_NoComplexEvents_169);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_169);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_169;
    ComplexEventPriceBoundaryPrecision_169.setString("14.000000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_169, ComplexEvents_NoComplexEvents_169);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_169);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_169);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_169;
    ComplexOptPayoutAmount_169.setString("19095790");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_169, ComplexEvents_NoComplexEvents_169);
    all_values.push_back(ComplexEvents_NoComplexEvents_169);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_351;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 46, 19, 13, 1, 2014)}, ComplexEventDates_NoComplexEventDates_351);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 13, 36, 22, 11, 2014)}, ComplexEventDates_NoComplexEventDates_351);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_351);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_715;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 54, 16)}, ComplexEventTimes_NoComplexEventTimes_715);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 26, 55)}, ComplexEventTimes_NoComplexEventTimes_715);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_715);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_716;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 57, 53)}, ComplexEventTimes_NoComplexEventTimes_716);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 50, 17)}, ComplexEventTimes_NoComplexEventTimes_716);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_716);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_352;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 55, 13, 24, 8, 2007)}, ComplexEventDates_NoComplexEventDates_352);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 54, 46, 27, 6, 2006)}, ComplexEventDates_NoComplexEventDates_352);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_352);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_717;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 41, 31)}, ComplexEventTimes_NoComplexEventTimes_717);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 49, 51)}, ComplexEventTimes_NoComplexEventTimes_717);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_717);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_718;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 48, 12)}, ComplexEventTimes_NoComplexEventTimes_718);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 54, 15)}, ComplexEventTimes_NoComplexEventTimes_718);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_718);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_719;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 10, 36)}, ComplexEventTimes_NoComplexEventTimes_719);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 17, 15)}, ComplexEventTimes_NoComplexEventTimes_719);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_719);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_170;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_170);
    FIX::ComplexEventPrice ComplexEventPrice_170;
    ComplexEventPrice_170.setString("19152636");
set_field(noComplexEvents_0_2, ComplexEventPrice_170, ComplexEvents_NoComplexEvents_170);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_170);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_170;
    ComplexEventPriceBoundaryPrecision_170.setString("45.580000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_170, ComplexEvents_NoComplexEvents_170);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_170);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_170);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_170;
    ComplexOptPayoutAmount_170.setString("15655018");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_170, ComplexEvents_NoComplexEvents_170);
    all_values.push_back(ComplexEvents_NoComplexEvents_170);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_353;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 23, 40, 17, 1, 2007)}, ComplexEventDates_NoComplexEventDates_353);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 19, 57, 27, 8, 2009)}, ComplexEventDates_NoComplexEventDates_353);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_353);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_720;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 52, 53)}, ComplexEventTimes_NoComplexEventTimes_720);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 3, 22)}, ComplexEventTimes_NoComplexEventTimes_720);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_720);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_173;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_640528507"}, EvntGrp_NoEvents_173);
    FIX::EventPx EventPx_173;
    EventPx_173.setString("4458964");
set_field(noEvents_0_0, EventPx_173, EvntGrp_NoEvents_173);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1904156287"}, EvntGrp_NoEvents_173);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(3, 25, 44, 7, 2, 2007)}, EvntGrp_NoEvents_173);
    set_field(noEvents_0_0, FIX::EventType{8}, EvntGrp_NoEvents_173);
    all_values.push_back(EvntGrp_NoEvents_173);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_174;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1733631650"}, EvntGrp_NoEvents_174);
    FIX::EventPx EventPx_174;
    EventPx_174.setString("13472826");
set_field(noEvents_0_1, EventPx_174, EvntGrp_NoEvents_174);
    set_field(noEvents_0_1, FIX::EventText{"STRING_129356990"}, EvntGrp_NoEvents_174);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(9, 9, 24, 24, 9, 2003)}, EvntGrp_NoEvents_174);
    set_field(noEvents_0_1, FIX::EventType{8}, EvntGrp_NoEvents_174);
    all_values.push_back(EvntGrp_NoEvents_174);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_175;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_1397370674"}, EvntGrp_NoEvents_175);
    FIX::EventPx EventPx_175;
    EventPx_175.setString("10391285");
set_field(noEvents_0_2, EventPx_175, EvntGrp_NoEvents_175);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1902437219"}, EvntGrp_NoEvents_175);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(7, 57, 54, 25, 3, 2007)}, EvntGrp_NoEvents_175);
    set_field(noEvents_0_2, FIX::EventType{1}, EvntGrp_NoEvents_175);
    all_values.push_back(EvntGrp_NoEvents_175);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_163;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_4220145"}, InstrumentParties_NoInstrumentParties_163);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_163);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{2135041731}, InstrumentParties_NoInstrumentParties_163);
    all_values.push_back(InstrumentParties_NoInstrumentParties_163);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1149830563"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1432076108}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_192225216"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{795953103}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1018224111"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1539507836}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_164;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_925310093"}, InstrumentParties_NoInstrumentParties_164);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_164);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{843608685}, InstrumentParties_NoInstrumentParties_164);
    all_values.push_back(InstrumentParties_NoInstrumentParties_164);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1124525202"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{949691889}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_583604631"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1872820557}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_165;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_1068042436"}, InstrumentParties_NoInstrumentParties_165);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_165);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{764465414}, InstrumentParties_NoInstrumentParties_165);
    all_values.push_back(InstrumentParties_NoInstrumentParties_165);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1125777597"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{2081714925}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_1039058885"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{1143328431}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341;
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubID{"STRING_194371882"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341);
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubIDType{2095253492}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_167;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_900408982"}, SecAltIDGrp_NoSecurityAltID_167);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_760637090"}, SecAltIDGrp_NoSecurityAltID_167);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_167);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_168;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1805627918"}, SecAltIDGrp_NoSecurityAltID_168);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_295508238"}, SecAltIDGrp_NoSecurityAltID_168);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_168);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_169;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_748195173"}, SecAltIDGrp_NoSecurityAltID_169);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1885764248"}, SecAltIDGrp_NoSecurityAltID_169);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_169);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_168;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1445338802"}, SecurityXML_168);
  set_field(msg, FIX::SecurityXMLLen{32787634}, SecurityXML_168);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_2077989464"}, SecurityXML_168);
  all_values.push_back(SecurityXML_168);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_16;
  set_field(msg, FIX::DeliveryForm{2}, InstrumentExtension_16);
  FIX::PctAtRisk PctAtRisk_16;
  PctAtRisk_16.setString("17.450000");
set_field(msg, PctAtRisk_16, InstrumentExtension_16);
  all_values.push_back(InstrumentExtension_16);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_28;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{21}, AttrbGrp_NoInstrAttrib_28);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_1917892063"}, AttrbGrp_NoInstrAttrib_28);
    all_values.push_back(AttrbGrp_NoInstrAttrib_28);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_29;
    set_field(noInstrAttrib_0_1, FIX::InstrAttribType{10}, AttrbGrp_NoInstrAttrib_29);
    set_field(noInstrAttrib_0_1, FIX::InstrAttribValue{"STRING_1019897445"}, AttrbGrp_NoInstrAttrib_29);
    all_values.push_back(AttrbGrp_NoInstrAttrib_29);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoInstrAttrib noInstrAttrib_0_2;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_30;
    set_field(noInstrAttrib_0_2, FIX::InstrAttribType{18}, AttrbGrp_NoInstrAttrib_30);
    set_field(noInstrAttrib_0_2, FIX::InstrAttribValue{"STRING_1115830579"}, AttrbGrp_NoInstrAttrib_30);
    all_values.push_back(AttrbGrp_NoInstrAttrib_30);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_146;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_620270526"}, Parties_NoPartyIDs_146);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_146);
    set_field(noPartyIDs_0_0, FIX::PartyRole{24}, Parties_NoPartyIDs_146);
    all_values.push_back(Parties_NoPartyIDs_146);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_298;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_859385375"}, PtysSubGrp_NoPartySubIDs_298);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_298);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_298);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_299;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1318967217"}, PtysSubGrp_NoPartySubIDs_299);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_299);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_299);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_300;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1558616115"}, PtysSubGrp_NoPartySubIDs_300);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{20}, PtysSubGrp_NoPartySubIDs_300);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_300);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_147;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1846214105"}, Parties_NoPartyIDs_147);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'C'}, Parties_NoPartyIDs_147);
    set_field(noPartyIDs_0_1, FIX::PartyRole{60}, Parties_NoPartyIDs_147);
    all_values.push_back(Parties_NoPartyIDs_147);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_301;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_870684510"}, PtysSubGrp_NoPartySubIDs_301);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_301);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_301);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_302;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1207562720"}, PtysSubGrp_NoPartySubIDs_302);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_302);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_302);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_303;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_2007111474"}, PtysSubGrp_NoPartySubIDs_303);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_303);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_303);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TrdCapDtGrp
  // Group TrdCapDtGrp.NoDates
  {
    FIX50SP2::TradeCaptureReportRequest::NoDates noDates_0_0;
    // TrdCapDtGrp.NoDates
    multiset<string> TrdCapDtGrp_NoDates_0;
    set_field(noDates_0_0, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(11, 39, 34, 6, 6, 2001)}, TrdCapDtGrp_NoDates_0);
    set_field(noDates_0_0, FIX::TradeDate{"LOCALMKTDATE_809220483"}, TrdCapDtGrp_NoDates_0);
    set_field(noDates_0_0, FIX::TransactTime{FIX::UTCTIMESTAMP(12, 10, 27, 19, 11, 2009)}, TrdCapDtGrp_NoDates_0);
    all_values.push_back(TrdCapDtGrp_NoDates_0);
    all_compo_names.insert("...NoDates");

    msg.addGroup(noDates_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequest::NoDates noDates_0_1;
    // TrdCapDtGrp.NoDates
    multiset<string> TrdCapDtGrp_NoDates_1;
    set_field(noDates_0_1, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(8, 36, 45, 7, 10, 2009)}, TrdCapDtGrp_NoDates_1);
    set_field(noDates_0_1, FIX::TradeDate{"LOCALMKTDATE_1617830405"}, TrdCapDtGrp_NoDates_1);
    set_field(noDates_0_1, FIX::TransactTime{FIX::UTCTIMESTAMP(8, 50, 32, 18, 9, 2001)}, TrdCapDtGrp_NoDates_1);
    all_values.push_back(TrdCapDtGrp_NoDates_1);
    all_compo_names.insert("...NoDates");

    msg.addGroup(noDates_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_137;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1992666988"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{245627790}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1510578617"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{817737774}, UnderlyingInstrument_137);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_137;
    UnderlyingAdjustedQuantity_137.setString("1599146");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_137, UnderlyingInstrument_137);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_137;
    UnderlyingAllocationPercent_137.setString("82.380000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_137, UnderlyingInstrument_137);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_137;
    UnderlyingAttachmentPoint_137.setString("60.050000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_969135140"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_535204790"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_2111176314"}, UnderlyingInstrument_137);
    FIX::UnderlyingCapValue UnderlyingCapValue_137;
    UnderlyingCapValue_137.setString("2511425");
set_field(noUnderlyings_0_0, UnderlyingCapValue_137, UnderlyingInstrument_137);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_137;
    UnderlyingCashAmount_137.setString("17155643");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_137);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_137;
    UnderlyingContractMultiplier_137.setString("9178858");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1607825652}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1854941139"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_756112677"}, UnderlyingInstrument_137);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_137;
    UnderlyingCouponRate_137.setString("75.600000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_271858037"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_137);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_137;
    UnderlyingCurrentValue_137.setString("20487988");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_137, UnderlyingInstrument_137);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_137;
    UnderlyingDetachmentPoint_137.setString("54.060000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_137, UnderlyingInstrument_137);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_137;
    UnderlyingDirtyPrice_137.setString("3943198");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_137, UnderlyingInstrument_137);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_137;
    UnderlyingEndPrice_137.setString("4014568");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_137, UnderlyingInstrument_137);
    FIX::UnderlyingEndValue UnderlyingEndValue_137;
    UnderlyingEndValue_137.setString("16101448");
set_field(noUnderlyings_0_0, UnderlyingEndValue_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1403202470}, UnderlyingInstrument_137);
    FIX::UnderlyingFXRate UnderlyingFXRate_137;
    UnderlyingFXRate_137.setString("15105635");
set_field(noUnderlyings_0_0, UnderlyingFXRate_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_137);
    FIX::UnderlyingFactor UnderlyingFactor_137;
    UnderlyingFactor_137.setString("15049518");
set_field(noUnderlyings_0_0, UnderlyingFactor_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1011657618}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1347075432"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1750579599"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_374752587"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_17329558"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1910494256"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1913470825"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_680035564"}, UnderlyingInstrument_137);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_137;
    UnderlyingNotionalPercentageOutstanding_137.setString("57.490000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_137);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_137;
    UnderlyingOriginalNotionalPercentageOutstanding_137.setString("82.300000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_983288251"}, UnderlyingInstrument_137);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_137;
    UnderlyingPriceUnitOfMeasureQty_137.setString("20167563");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1345401291}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1901174056}, UnderlyingInstrument_137);
    FIX::UnderlyingPx UnderlyingPx_137;
    UnderlyingPx_137.setString("14770983");
set_field(noUnderlyings_0_0, UnderlyingPx_137, UnderlyingInstrument_137);
    FIX::UnderlyingQty UnderlyingQty_137;
    UnderlyingQty_137.setString("10528587");
set_field(noUnderlyings_0_0, UnderlyingQty_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_509803085"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_580662242"}, UnderlyingInstrument_137);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_137;
    UnderlyingRepurchaseRate_137.setString("68.190000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{469998086}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1173662167"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1226031994"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_2048023492"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1567982005"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1627488816"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1510684680"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_823700827"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_990568749"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_865093124"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_137);
    FIX::UnderlyingStartValue UnderlyingStartValue_137;
    UnderlyingStartValue_137.setString("20022263");
set_field(noUnderlyings_0_0, UnderlyingStartValue_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_64684909"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_137);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_137;
    UnderlyingStrikePrice_137.setString("820144");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1694759196"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_2142966133"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_762050031"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_279421297"}, UnderlyingInstrument_137);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_137;
    UnderlyingUnitOfMeasureQty_137.setString("2966744");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_137, UnderlyingInstrument_137);
    all_values.push_back(UnderlyingInstrument_137);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_281;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1262709548"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_281);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_165947129"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_281);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_281);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_282;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_603695904"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_282);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1016399957"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_282);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_282);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_283;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1643045459"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_283);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1656554687"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_283);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_283);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_279;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_76224053"}, UnderlyingStipulations_NoUnderlyingStips_279);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_833787858"}, UnderlyingStipulations_NoUnderlyingStips_279);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_279);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_280;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1996201128"}, UnderlyingStipulations_NoUnderlyingStips_280);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1249886220"}, UnderlyingStipulations_NoUnderlyingStips_280);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_280);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_284;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1896740972"}, UndlyInstrumentParties_NoUndlyInstrumentParties_284);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_284);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1539825021}, UndlyInstrumentParties_NoUndlyInstrumentParties_284);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_284);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1494085404"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{382910122}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_285;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_2125035129"}, UndlyInstrumentParties_NoUndlyInstrumentParties_285);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_285);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{237652842}, UndlyInstrumentParties_NoUndlyInstrumentParties_285);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_285);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1459519332"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{467148150}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_124250857"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1006794880}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_462630635"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{886300889}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
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
