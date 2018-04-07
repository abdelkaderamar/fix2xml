#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::OrderStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderStatusRequest_0;
  set_field(msg, FIX::Account{"STRING_178279911"}, OrderStatusRequest_0);
  set_field(msg, FIX::AcctIDSource{4}, OrderStatusRequest_0);
  set_field(msg, FIX::ClOrdID{"STRING_96478899"}, OrderStatusRequest_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_881597025"}, OrderStatusRequest_0);
  set_field(msg, FIX::OrdStatusReqID{"STRING_1423220253"}, OrderStatusRequest_0);
  set_field(msg, FIX::OrderID{"STRING_783130911"}, OrderStatusRequest_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1404587021"}, OrderStatusRequest_0);
  set_field(msg, FIX::Side{'3'}, OrderStatusRequest_0);
  all_values.push_back(OrderStatusRequest_0);

  all_compo_names.insert("OrderStatusRequest");

  // FinancingDetails
  multiset<string> FinancingDetails_15;
  set_field(msg, FIX::AgreementCurrency{"GBP"}, FinancingDetails_15);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_1193070746"}, FinancingDetails_15);
  set_field(msg, FIX::AgreementDesc{"STRING_1344247495"}, FinancingDetails_15);
  set_field(msg, FIX::AgreementID{"STRING_1784649785"}, FinancingDetails_15);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_15);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1252313347"}, FinancingDetails_15);
  FIX::MarginRatio MarginRatio_15;
  MarginRatio_15.setString("86.070000");
set_field(msg, MarginRatio_15, FinancingDetails_15);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1467971557"}, FinancingDetails_15);
  set_field(msg, FIX::TerminationType{4}, FinancingDetails_15);
  all_values.push_back(FinancingDetails_15);
  all_compo_names.insert(".");

  // Instrument
  multiset<string> Instrument_49;
  FIX::AttachmentPoint AttachmentPoint_49;
  AttachmentPoint_49.setString("66.480000");
set_field(msg, AttachmentPoint_49, Instrument_49);
  set_field(msg, FIX::CFICode{"STRING_59446398"}, Instrument_49);
  set_field(msg, FIX::CPProgram{1}, Instrument_49);
  set_field(msg, FIX::CPRegType{"STRING_253183170"}, Instrument_49);
  FIX::CapPrice CapPrice_49;
  CapPrice_49.setString("17319657");
set_field(msg, CapPrice_49, Instrument_49);
  FIX::ContractMultiplier ContractMultiplier_49;
  ContractMultiplier_49.setString("9009692");
set_field(msg, ContractMultiplier_49, Instrument_49);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_49);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1586046586"}, Instrument_49);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1854954915"}, Instrument_49);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_802274784"}, Instrument_49);
  FIX::CouponRate CouponRate_49;
  CouponRate_49.setString("22.300000");
set_field(msg, CouponRate_49, Instrument_49);
  set_field(msg, FIX::CreditRating{"STRING_1452749405"}, Instrument_49);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1158770632"}, Instrument_49);
  FIX::DetachmentPoint DetachmentPoint_49;
  DetachmentPoint_49.setString("21.420000");
set_field(msg, DetachmentPoint_49, Instrument_49);
  set_field(msg, FIX::EncodedIssuer{"DATA_948544962"}, Instrument_49);
  set_field(msg, FIX::EncodedIssuerLen{1255249531}, Instrument_49);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_703415519"}, Instrument_49);
  set_field(msg, FIX::EncodedSecurityDescLen{224281567}, Instrument_49);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_49);
  FIX::Factor Factor_49;
  Factor_49.setString("21080025");
set_field(msg, Factor_49, Instrument_49);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_49);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_49);
  FIX::FloorPrice FloorPrice_49;
  FloorPrice_49.setString("18745781");
set_field(msg, FloorPrice_49, Instrument_49);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_49);
  set_field(msg, FIX::InstrRegistry{"STRING_1221810945"}, Instrument_49);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_49);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_526463049"}, Instrument_49);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_326640644"}, Instrument_49);
  set_field(msg, FIX::Issuer{"STRING_1122549283"}, Instrument_49);
  set_field(msg, FIX::ListMethod{0}, Instrument_49);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1036913932"}, Instrument_49);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_398802283"}, Instrument_49);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_2053881004"}, Instrument_49);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_526106123"}, Instrument_49);
  FIX::MinPriceIncrement MinPriceIncrement_49;
  MinPriceIncrement_49.setString("6519854");
set_field(msg, MinPriceIncrement_49, Instrument_49);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_49;
  MinPriceIncrementAmount_49.setString("16383630");
set_field(msg, MinPriceIncrementAmount_49, Instrument_49);
  set_field(msg, FIX::NTPositionLimit{1427075410}, Instrument_49);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_49;
  NotionalPercentageOutstanding_49.setString("0.100000");
set_field(msg, NotionalPercentageOutstanding_49, Instrument_49);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_49);
  FIX::OptPayoutAmount OptPayoutAmount_49;
  OptPayoutAmount_49.setString("11345466");
set_field(msg, OptPayoutAmount_49, Instrument_49);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_49);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_49;
  OriginalNotionalPercentageOutstanding_49.setString("46.160000");
set_field(msg, OriginalNotionalPercentageOutstanding_49, Instrument_49);
  set_field(msg, FIX::Pool{"STRING_439812434"}, Instrument_49);
  set_field(msg, FIX::PositionLimit{874351778}, Instrument_49);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_49);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1388357396"}, Instrument_49);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_49;
  PriceUnitOfMeasureQty_49.setString("21296013");
set_field(msg, PriceUnitOfMeasureQty_49, Instrument_49);
  set_field(msg, FIX::Product{8}, Instrument_49);
  set_field(msg, FIX::ProductComplex{"STRING_1612638963"}, Instrument_49);
  set_field(msg, FIX::PutOrCall{1}, Instrument_49);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1206217523"}, Instrument_49);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_733707028"}, Instrument_49);
  FIX::RepurchaseRate RepurchaseRate_49;
  RepurchaseRate_49.setString("15.540000");
set_field(msg, RepurchaseRate_49, Instrument_49);
  set_field(msg, FIX::RepurchaseTerm{933312062}, Instrument_49);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_49);
  set_field(msg, FIX::SecurityDesc{"STRING_972388851"}, Instrument_49);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_297572738"}, Instrument_49);
  set_field(msg, FIX::SecurityGroup{"STRING_1574308888"}, Instrument_49);
  set_field(msg, FIX::SecurityID{"STRING_1299029496"}, Instrument_49);
  set_field(msg, FIX::SecurityIDSource{"STRING_M"}, Instrument_49);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_49);
  set_field(msg, FIX::SecuritySubType{"STRING_188459780"}, Instrument_49);
  set_field(msg, FIX::SecurityType{"STRING_MPP"}, Instrument_49);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_49);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_49);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_323426110"}, Instrument_49);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_818536651"}, Instrument_49);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_49);
  FIX::StrikeMultiplier StrikeMultiplier_49;
  StrikeMultiplier_49.setString("18954626");
set_field(msg, StrikeMultiplier_49, Instrument_49);
  FIX::StrikePrice StrikePrice_49;
  StrikePrice_49.setString("11287043");
set_field(msg, StrikePrice_49, Instrument_49);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_49);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_49;
  StrikePriceBoundaryPrecision_49.setString("36.540000");
set_field(msg, StrikePriceBoundaryPrecision_49, Instrument_49);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_49);
  FIX::StrikeValue StrikeValue_49;
  StrikeValue_49.setString("19741490");
set_field(msg, StrikeValue_49, Instrument_49);
  set_field(msg, FIX::Symbol{"STRING_1010726764"}, Instrument_49);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_49);
  set_field(msg, FIX::TimeUnit{"STRING_Min"}, Instrument_49);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_49);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_49);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_49;
  UnitOfMeasureQty_49.setString("18292811");
set_field(msg, UnitOfMeasureQty_49, Instrument_49);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_49);
  all_values.push_back(Instrument_49);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::OrderStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_98;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_98);
    FIX::ComplexEventPrice ComplexEventPrice_98;
    ComplexEventPrice_98.setString("1009876");
set_field(noComplexEvents_0_0, ComplexEventPrice_98, ComplexEvents_NoComplexEvents_98);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_98);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_98;
    ComplexEventPriceBoundaryPrecision_98.setString("42.700000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_98, ComplexEvents_NoComplexEvents_98);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_98);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_98);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_98;
    ComplexOptPayoutAmount_98.setString("17037937");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_98, ComplexEvents_NoComplexEvents_98);
    all_values.push_back(ComplexEvents_NoComplexEvents_98);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_209;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 59, 13, 1, 10, 2000)}, ComplexEventDates_NoComplexEventDates_209);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 14, 31, 7, 5, 2005)}, ComplexEventDates_NoComplexEventDates_209);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_209);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_422;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 0, 19)}, ComplexEventTimes_NoComplexEventTimes_422);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 20, 12)}, ComplexEventTimes_NoComplexEventTimes_422);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_422);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_210;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 54, 41, 9, 9, 2013)}, ComplexEventDates_NoComplexEventDates_210);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 17, 51, 7, 11, 2016)}, ComplexEventDates_NoComplexEventDates_210);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_210);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_423;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 1, 49)}, ComplexEventTimes_NoComplexEventTimes_423);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 30, 27)}, ComplexEventTimes_NoComplexEventTimes_423);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_423);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_424;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 19, 57)}, ComplexEventTimes_NoComplexEventTimes_424);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 17, 55)}, ComplexEventTimes_NoComplexEventTimes_424);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_424);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_425;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 49, 27)}, ComplexEventTimes_NoComplexEventTimes_425);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 46, 23)}, ComplexEventTimes_NoComplexEventTimes_425);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_425);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_211;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 14, 54, 18, 7, 2016)}, ComplexEventDates_NoComplexEventDates_211);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 27, 1, 11, 2, 2005)}, ComplexEventDates_NoComplexEventDates_211);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_211);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_426;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 33, 24)}, ComplexEventTimes_NoComplexEventTimes_426);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 33, 2)}, ComplexEventTimes_NoComplexEventTimes_426);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_426);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_427;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 51, 18)}, ComplexEventTimes_NoComplexEventTimes_427);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 57, 53)}, ComplexEventTimes_NoComplexEventTimes_427);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_427);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::OrderStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_102;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_637215112"}, EvntGrp_NoEvents_102);
    FIX::EventPx EventPx_102;
    EventPx_102.setString("17219742");
set_field(noEvents_0_0, EventPx_102, EvntGrp_NoEvents_102);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1890140527"}, EvntGrp_NoEvents_102);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(5, 33, 58, 4, 1, 2015)}, EvntGrp_NoEvents_102);
    set_field(noEvents_0_0, FIX::EventType{12}, EvntGrp_NoEvents_102);
    all_values.push_back(EvntGrp_NoEvents_102);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::OrderStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_93;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1193610314"}, InstrumentParties_NoInstrumentParties_93);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_93);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{541169828}, InstrumentParties_NoInstrumentParties_93);
    all_values.push_back(InstrumentParties_NoInstrumentParties_93);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_900353478"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1501286432}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_94;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1258939066"}, InstrumentParties_NoInstrumentParties_94);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_94);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{173421898}, InstrumentParties_NoInstrumentParties_94);
    all_values.push_back(InstrumentParties_NoInstrumentParties_94);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_772696017"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{65224737}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_186);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_531772652"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{559634588}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_187);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::OrderStatusRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_95;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_787936587"}, InstrumentParties_NoInstrumentParties_95);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_95);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1542680945}, InstrumentParties_NoInstrumentParties_95);
    all_values.push_back(InstrumentParties_NoInstrumentParties_95);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1906886474"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{32412409}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_188);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_1198488499"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{1649543353}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_189);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190;
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubID{"STRING_1388676696"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190);
      set_field(noInstrumentPartySubIDs_2_1_2, FIX::InstrumentPartySubIDType{2097521184}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_190);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_2);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_101;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_687396746"}, SecAltIDGrp_NoSecurityAltID_101);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1515039412"}, SecAltIDGrp_NoSecurityAltID_101);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_101);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_102;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_755465678"}, SecAltIDGrp_NoSecurityAltID_102);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1029144258"}, SecAltIDGrp_NoSecurityAltID_102);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_102);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_98;
  set_field(msg, FIX::SecurityXML{"XMLDATA_942549255"}, SecurityXML_98);
  set_field(msg, FIX::SecurityXMLLen{1084327880}, SecurityXML_98);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_75270924"}, SecurityXML_98);
  all_values.push_back(SecurityXML_98);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::OrderStatusRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_91;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1625497708"}, Parties_NoPartyIDs_91);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_91);
    set_field(noPartyIDs_0_0, FIX::PartyRole{36}, Parties_NoPartyIDs_91);
    all_values.push_back(Parties_NoPartyIDs_91);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_184;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_706172622"}, PtysSubGrp_NoPartySubIDs_184);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_184);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_184);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_185;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1152722391"}, PtysSubGrp_NoPartySubIDs_185);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_185);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_185);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_186;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_399990194"}, PtysSubGrp_NoPartySubIDs_186);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_186);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_186);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_85;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_959624782"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{2005883715}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1564143777"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{354822079}, UnderlyingInstrument_85);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_85;
    UnderlyingAdjustedQuantity_85.setString("14823979");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_85, UnderlyingInstrument_85);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_85;
    UnderlyingAllocationPercent_85.setString("66.030000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_85, UnderlyingInstrument_85);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_85;
    UnderlyingAttachmentPoint_85.setString("44.880000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_533402798"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_825606308"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1775911184"}, UnderlyingInstrument_85);
    FIX::UnderlyingCapValue UnderlyingCapValue_85;
    UnderlyingCapValue_85.setString("4834403");
set_field(noUnderlyings_0_0, UnderlyingCapValue_85, UnderlyingInstrument_85);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_85;
    UnderlyingCashAmount_85.setString("6607263");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_85);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_85;
    UnderlyingContractMultiplier_85.setString("19984797");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1416192024}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1344968541"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_793545353"}, UnderlyingInstrument_85);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_85;
    UnderlyingCouponRate_85.setString("62.560000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1420239465"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_85);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_85;
    UnderlyingCurrentValue_85.setString("8674730");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_85, UnderlyingInstrument_85);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_85;
    UnderlyingDetachmentPoint_85.setString("64.950000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_85, UnderlyingInstrument_85);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_85;
    UnderlyingDirtyPrice_85.setString("8103508");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_85, UnderlyingInstrument_85);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_85;
    UnderlyingEndPrice_85.setString("15736456");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_85, UnderlyingInstrument_85);
    FIX::UnderlyingEndValue UnderlyingEndValue_85;
    UnderlyingEndValue_85.setString("4278606");
set_field(noUnderlyings_0_0, UnderlyingEndValue_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1963073201}, UnderlyingInstrument_85);
    FIX::UnderlyingFXRate UnderlyingFXRate_85;
    UnderlyingFXRate_85.setString("14923598");
set_field(noUnderlyings_0_0, UnderlyingFXRate_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_85);
    FIX::UnderlyingFactor UnderlyingFactor_85;
    UnderlyingFactor_85.setString("10335366");
set_field(noUnderlyings_0_0, UnderlyingFactor_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1942846661}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1787475647"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_891936748"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1359506790"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_2142297726"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_226851047"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_535569745"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_382048567"}, UnderlyingInstrument_85);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_85;
    UnderlyingNotionalPercentageOutstanding_85.setString("38.450000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_85);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_85;
    UnderlyingOriginalNotionalPercentageOutstanding_85.setString("61.030000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1243694179"}, UnderlyingInstrument_85);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_85;
    UnderlyingPriceUnitOfMeasureQty_85.setString("20219023");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{326300386}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1094690277}, UnderlyingInstrument_85);
    FIX::UnderlyingPx UnderlyingPx_85;
    UnderlyingPx_85.setString("12906107");
set_field(noUnderlyings_0_0, UnderlyingPx_85, UnderlyingInstrument_85);
    FIX::UnderlyingQty UnderlyingQty_85;
    UnderlyingQty_85.setString("16712689");
set_field(noUnderlyings_0_0, UnderlyingQty_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1888235630"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1643647032"}, UnderlyingInstrument_85);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_85;
    UnderlyingRepurchaseRate_85.setString("47.450000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{87631167}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1474697349"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1811497766"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_888197662"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_137564511"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1237659761"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1316058333"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_2100637712"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_582535939"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_2143909199"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_85);
    FIX::UnderlyingStartValue UnderlyingStartValue_85;
    UnderlyingStartValue_85.setString("3778989");
set_field(noUnderlyings_0_0, UnderlyingStartValue_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1783901198"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_85);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_85;
    UnderlyingStrikePrice_85.setString("17787152");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_85, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_2105478540"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_125491840"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_13280196"}, UnderlyingInstrument_85);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_718248737"}, UnderlyingInstrument_85);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_85;
    UnderlyingUnitOfMeasureQty_85.setString("14866678");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_85, UnderlyingInstrument_85);
    all_values.push_back(UnderlyingInstrument_85);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_182;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1961942916"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_182);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1361086645"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_182);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_182);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_183;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_350056686"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_183);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_909149545"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_183);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_183);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_170;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_2021325613"}, UnderlyingStipulations_NoUnderlyingStips_170);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_649901527"}, UnderlyingStipulations_NoUnderlyingStips_170);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_170);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_171;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_377158"}, UnderlyingStipulations_NoUnderlyingStips_171);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_817866710"}, UnderlyingStipulations_NoUnderlyingStips_171);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_171);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_172;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_737532694"}, UnderlyingStipulations_NoUnderlyingStips_172);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1475074507"}, UnderlyingStipulations_NoUnderlyingStips_172);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_172);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_173;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1625730356"}, UndlyInstrumentParties_NoUndlyInstrumentParties_173);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_173);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1719540589}, UndlyInstrumentParties_NoUndlyInstrumentParties_173);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_173);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1565793083"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{154592880}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_339);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_790730593"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{405000181}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_340);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_174;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_532491833"}, UndlyInstrumentParties_NoUndlyInstrumentParties_174);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_174);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{136144026}, UndlyInstrumentParties_NoUndlyInstrumentParties_174);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_174);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_58379772"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{94138919}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_341);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_247905768"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{71659968}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_342);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_812387656"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1734573662}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_343);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_175;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_95416268"}, UndlyInstrumentParties_NoUndlyInstrumentParties_175);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_175);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{948176660}, UndlyInstrumentParties_NoUndlyInstrumentParties_175);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_175);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1535996470"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1452390433}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_344);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_319314919"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{38414350}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_345);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1452767591"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{1137181630}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_346);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::OrderStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_86;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_775947044"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{780358451}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1619062458"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{254193753}, UnderlyingInstrument_86);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_86;
    UnderlyingAdjustedQuantity_86.setString("2455138");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_86, UnderlyingInstrument_86);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_86;
    UnderlyingAllocationPercent_86.setString("94.000000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_86, UnderlyingInstrument_86);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_86;
    UnderlyingAttachmentPoint_86.setString("87.950000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1811306905"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1345712280"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1839229388"}, UnderlyingInstrument_86);
    FIX::UnderlyingCapValue UnderlyingCapValue_86;
    UnderlyingCapValue_86.setString("688234");
set_field(noUnderlyings_0_1, UnderlyingCapValue_86, UnderlyingInstrument_86);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_86;
    UnderlyingCashAmount_86.setString("18782041");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_86);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_86;
    UnderlyingContractMultiplier_86.setString("2049674");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{2000618041}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_177273656"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_299106384"}, UnderlyingInstrument_86);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_86;
    UnderlyingCouponRate_86.setString("1.620000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_248933624"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_86);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_86;
    UnderlyingCurrentValue_86.setString("3443498");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_86, UnderlyingInstrument_86);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_86;
    UnderlyingDetachmentPoint_86.setString("9.650000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_86, UnderlyingInstrument_86);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_86;
    UnderlyingDirtyPrice_86.setString("6363068");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_86, UnderlyingInstrument_86);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_86;
    UnderlyingEndPrice_86.setString("7898228");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_86, UnderlyingInstrument_86);
    FIX::UnderlyingEndValue UnderlyingEndValue_86;
    UnderlyingEndValue_86.setString("11268537");
set_field(noUnderlyings_0_1, UnderlyingEndValue_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{2088697270}, UnderlyingInstrument_86);
    FIX::UnderlyingFXRate UnderlyingFXRate_86;
    UnderlyingFXRate_86.setString("11091377");
set_field(noUnderlyings_0_1, UnderlyingFXRate_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_86);
    FIX::UnderlyingFactor UnderlyingFactor_86;
    UnderlyingFactor_86.setString("13939812");
set_field(noUnderlyings_0_1, UnderlyingFactor_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{98835748}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1941215182"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_26856016"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1717898206"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_47925287"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_272369838"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_761533958"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1096424082"}, UnderlyingInstrument_86);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_86;
    UnderlyingNotionalPercentageOutstanding_86.setString("67.440000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_86);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_86;
    UnderlyingOriginalNotionalPercentageOutstanding_86.setString("98.220000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_5016534"}, UnderlyingInstrument_86);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_86;
    UnderlyingPriceUnitOfMeasureQty_86.setString("18379667");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{907063706}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{209983999}, UnderlyingInstrument_86);
    FIX::UnderlyingPx UnderlyingPx_86;
    UnderlyingPx_86.setString("16911010");
set_field(noUnderlyings_0_1, UnderlyingPx_86, UnderlyingInstrument_86);
    FIX::UnderlyingQty UnderlyingQty_86;
    UnderlyingQty_86.setString("10843373");
set_field(noUnderlyings_0_1, UnderlyingQty_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_509090383"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1792141260"}, UnderlyingInstrument_86);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_86;
    UnderlyingRepurchaseRate_86.setString("9.860000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1620584424}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1480271436"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1677620879"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1211441741"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_2116578273"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_319960077"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_190811881"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_2057791895"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1429097843"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1356080019"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_86);
    FIX::UnderlyingStartValue UnderlyingStartValue_86;
    UnderlyingStartValue_86.setString("15279335");
set_field(noUnderlyings_0_1, UnderlyingStartValue_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1149811554"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_86);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_86;
    UnderlyingStrikePrice_86.setString("11977368");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_86, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1603515315"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1859882108"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_146677276"}, UnderlyingInstrument_86);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1539708411"}, UnderlyingInstrument_86);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_86;
    UnderlyingUnitOfMeasureQty_86.setString("18196446");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_86, UnderlyingInstrument_86);
    all_values.push_back(UnderlyingInstrument_86);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_184;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1544724946"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_184);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1510127756"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_184);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_184);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_185;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1841910804"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_185);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1754708945"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_185);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_185);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_173;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_778764518"}, UnderlyingStipulations_NoUnderlyingStips_173);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_116315681"}, UnderlyingStipulations_NoUnderlyingStips_173);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_173);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_176;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2112035505"}, UndlyInstrumentParties_NoUndlyInstrumentParties_176);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_176);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{31190606}, UndlyInstrumentParties_NoUndlyInstrumentParties_176);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_176);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_800858198"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{285231}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_347);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_177;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1962132813"}, UndlyInstrumentParties_NoUndlyInstrumentParties_177);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_177);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{2058077126}, UndlyInstrumentParties_NoUndlyInstrumentParties_177);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_177);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_200266451"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1214882939}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_348);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::OrderStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_624196952"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1350078005}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_349);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
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
