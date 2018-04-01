#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityListUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityListUpdateReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityListUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityListUpdateReport_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_903841385"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::CorporateAction{"MULTIPLECHARVALUE_I"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::EncodedSecurityListDesc{"DATA_1421691118"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::EncodedSecurityListDescLen{1642039284}, SecurityListUpdateReport_0);
  set_field(msg, FIX::LastFragment{true}, SecurityListUpdateReport_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1015651182"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_1711608953"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityListDesc{"STRING_358529324"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityListID{"STRING_440693030"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityListRefID{"STRING_50427065"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityListType{2}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityListTypeSource{1}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityReportID{488045553}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityReqID{"STRING_1672824210"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityRequestResult{3}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_79558337"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityUpdateAction{'A'}, SecurityListUpdateReport_0);
  set_field(msg, FIX::TotNoRelatedSym{1694698931}, SecurityListUpdateReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(19, 43, 20, 26, 9, 2014)}, SecurityListUpdateReport_0);
  all_values.push_back(SecurityListUpdateReport_0);

  all_compo_names.insert("SecurityListUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_15;
  set_field(msg, FIX::ApplID{"STRING_1223641974"}, ApplicationSequenceControl_15);
  set_field(msg, FIX::ApplLastSeqNum{1273429257}, ApplicationSequenceControl_15);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_15);
  set_field(msg, FIX::ApplSeqNum{25134047}, ApplicationSequenceControl_15);
  all_values.push_back(ApplicationSequenceControl_15);
  all_compo_names.insert(".");

  // SecLstUpdRelSymGrp
  // Group SecLstUpdRelSymGrp.NoRelatedSym
  {
    FIX50SP2::SecurityListUpdateReport::NoRelatedSym noRelatedSym_0_0;
    // SecLstUpdRelSymGrp.NoRelatedSym
    multiset<string> SecLstUpdRelSymGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::Currency{"JPY"}, SecLstUpdRelSymGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedText{"DATA_2122145113"}, SecLstUpdRelSymGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedTextLen{1018695111}, SecLstUpdRelSymGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::ListUpdateAction{'4'}, SecLstUpdRelSymGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(21, 2, 41, 27, 12, 2004)}, SecLstUpdRelSymGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Text{"STRING_7918183"}, SecLstUpdRelSymGrp_NoRelatedSym_0);
    all_values.push_back(SecLstUpdRelSymGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_28;
    set_field(noRelatedSym_0_0, FIX::AgreementCurrency{"CAN"}, FinancingDetails_28);
    set_field(noRelatedSym_0_0, FIX::AgreementDate{"LOCALMKTDATE_1330640038"}, FinancingDetails_28);
    set_field(noRelatedSym_0_0, FIX::AgreementDesc{"STRING_605687330"}, FinancingDetails_28);
    set_field(noRelatedSym_0_0, FIX::AgreementID{"STRING_887748756"}, FinancingDetails_28);
    set_field(noRelatedSym_0_0, FIX::DeliveryType{1}, FinancingDetails_28);
    set_field(noRelatedSym_0_0, FIX::EndDate{"LOCALMKTDATE_2017136334"}, FinancingDetails_28);
    FIX::MarginRatio MarginRatio_28;
    MarginRatio_28.setString("81.510000");
set_field(noRelatedSym_0_0, MarginRatio_28, FinancingDetails_28);
    set_field(noRelatedSym_0_0, FIX::StartDate{"LOCALMKTDATE_1548030284"}, FinancingDetails_28);
    set_field(noRelatedSym_0_0, FIX::TerminationType{4}, FinancingDetails_28);
    all_values.push_back(FinancingDetails_28);
    all_compo_names.insert("...NoRelatedSym.");

    // Instrument
    multiset<string> Instrument_72;
    FIX::AttachmentPoint AttachmentPoint_72;
    AttachmentPoint_72.setString("34.650000");
set_field(noRelatedSym_0_0, AttachmentPoint_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_1101707960"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::CPProgram{1}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_323331791"}, Instrument_72);
    FIX::CapPrice CapPrice_72;
    CapPrice_72.setString("2276535");
set_field(noRelatedSym_0_0, CapPrice_72, Instrument_72);
    FIX::ContractMultiplier ContractMultiplier_72;
    ContractMultiplier_72.setString("14946579");
set_field(noRelatedSym_0_0, ContractMultiplier_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{1}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_676565142"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_1091661989"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1277441270"}, Instrument_72);
    FIX::CouponRate CouponRate_72;
    CouponRate_72.setString("66.070000");
set_field(noRelatedSym_0_0, CouponRate_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_2110357100"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_1700972339"}, Instrument_72);
    FIX::DetachmentPoint DetachmentPoint_72;
    DetachmentPoint_72.setString("25.040000");
set_field(noRelatedSym_0_0, DetachmentPoint_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_1997219745"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{1688628713}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_1127844078"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{177291772}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{1}, Instrument_72);
    FIX::Factor Factor_72;
    Factor_72.setString("12672635");
set_field(noRelatedSym_0_0, Factor_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{false}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{false}, Instrument_72);
    FIX::FloorPrice FloorPrice_72;
    FloorPrice_72.setString("9320235");
set_field(noRelatedSym_0_0, FloorPrice_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{3}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_711044827"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_246221666"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_580697513"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_1650356809"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::ListMethod{0}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_1689907140"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_750046626"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_748476262"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_1056569324"}, Instrument_72);
    FIX::MinPriceIncrement MinPriceIncrement_72;
    MinPriceIncrement_72.setString("10733784");
set_field(noRelatedSym_0_0, MinPriceIncrement_72, Instrument_72);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_72;
    MinPriceIncrementAmount_72.setString("9761298");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{403743672}, Instrument_72);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_72;
    NotionalPercentageOutstanding_72.setString("42.560000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'1'}, Instrument_72);
    FIX::OptPayoutAmount OptPayoutAmount_72;
    OptPayoutAmount_72.setString("14954056");
set_field(noRelatedSym_0_0, OptPayoutAmount_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{3}, Instrument_72);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_72;
    OriginalNotionalPercentageOutstanding_72.setString("79.320000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_1458279114"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{105290570}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_1308015212"}, Instrument_72);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_72;
    PriceUnitOfMeasureQty_72.setString("17939192");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::Product{3}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_1485306984"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_40590751"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_1670516940"}, Instrument_72);
    FIX::RepurchaseRate RepurchaseRate_72;
    RepurchaseRate_72.setString("52.840000");
set_field(noRelatedSym_0_0, RepurchaseRate_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{972614301}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MR"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_42066463"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_644902958"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_1285104952"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_622763977"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_8"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_165187469"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_TBILL"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SB"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'P'}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_1971201164"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_508995700"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"JPY"}, Instrument_72);
    FIX::StrikeMultiplier StrikeMultiplier_72;
    StrikeMultiplier_72.setString("142070");
set_field(noRelatedSym_0_0, StrikeMultiplier_72, Instrument_72);
    FIX::StrikePrice StrikePrice_72;
    StrikePrice_72.setString("9734224");
set_field(noRelatedSym_0_0, StrikePrice_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{2}, Instrument_72);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_72;
    StrikePriceBoundaryPrecision_72.setString("49.580000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{3}, Instrument_72);
    FIX::StrikeValue StrikeValue_72;
    StrikeValue_72.setString("19026542");
set_field(noRelatedSym_0_0, StrikeValue_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_2111095395"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Yr"}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_72);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_72;
    UnitOfMeasureQty_72.setString("7747539");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_72, Instrument_72);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_FUT"}, Instrument_72);
    all_values.push_back(Instrument_72);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_150;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_150);
      FIX::ComplexEventPrice ComplexEventPrice_150;
      ComplexEventPrice_150.setString("18976276");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_150, ComplexEvents_NoComplexEvents_150);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_150);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_150;
      ComplexEventPriceBoundaryPrecision_150.setString("20.960000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_150, ComplexEvents_NoComplexEvents_150);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_150);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_150);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_150;
      ComplexOptPayoutAmount_150.setString("7706060");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_150, ComplexEvents_NoComplexEvents_150);
      all_values.push_back(ComplexEvents_NoComplexEvents_150);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_313;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 3, 40, 16, 4, 2008)}, ComplexEventDates_NoComplexEventDates_313);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 6, 26, 3, 10, 2006)}, ComplexEventDates_NoComplexEventDates_313);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_313);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_639;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 57, 39)}, ComplexEventTimes_NoComplexEventTimes_639);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 5, 25)}, ComplexEventTimes_NoComplexEventTimes_639);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_639);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_314;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 9, 33, 1, 11, 2012)}, ComplexEventDates_NoComplexEventDates_314);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 9, 33, 21, 6, 2010)}, ComplexEventDates_NoComplexEventDates_314);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_314);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_640;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 0, 9)}, ComplexEventTimes_NoComplexEventTimes_640);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 13, 15)}, ComplexEventTimes_NoComplexEventTimes_640);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_640);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_641;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 12, 0)}, ComplexEventTimes_NoComplexEventTimes_641);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 5, 51)}, ComplexEventTimes_NoComplexEventTimes_641);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_641);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_146;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1145808761"}, EvntGrp_NoEvents_146);
      FIX::EventPx EventPx_146;
      EventPx_146.setString("21170146");
set_field(noEvents_0_1_0, EventPx_146, EvntGrp_NoEvents_146);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_14104720"}, EvntGrp_NoEvents_146);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(15, 47, 5, 12, 1, 2015)}, EvntGrp_NoEvents_146);
      set_field(noEvents_0_1_0, FIX::EventType{2}, EvntGrp_NoEvents_146);
      all_values.push_back(EvntGrp_NoEvents_146);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_138;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_270776255"}, InstrumentParties_NoInstrumentParties_138);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_138);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1907039200}, InstrumentParties_NoInstrumentParties_138);
      all_values.push_back(InstrumentParties_NoInstrumentParties_138);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_586277834"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1623081341}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_285);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_141;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_1208894511"}, SecAltIDGrp_NoSecurityAltID_141);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_2084847414"}, SecAltIDGrp_NoSecurityAltID_141);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_141);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_142;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_538155886"}, SecAltIDGrp_NoSecurityAltID_142);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_1435820473"}, SecAltIDGrp_NoSecurityAltID_142);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_142);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_143;
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltID{"STRING_589603283"}, SecAltIDGrp_NoSecurityAltID_143);
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltIDSource{"STRING_361310450"}, SecAltIDGrp_NoSecurityAltID_143);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_143);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_144;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_3994685"}, SecurityXML_144);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{214889089}, SecurityXML_144);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_128317280"}, SecurityXML_144);
    all_values.push_back(SecurityXML_144);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_13;
    set_field(noRelatedSym_0_0, FIX::DeliveryForm{2}, InstrumentExtension_13);
    FIX::PctAtRisk PctAtRisk_13;
    PctAtRisk_13.setString("46.210000");
set_field(noRelatedSym_0_0, PctAtRisk_13, InstrumentExtension_13);
    all_values.push_back(InstrumentExtension_13);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_22;
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribType{15}, AttrbGrp_NoInstrAttrib_22);
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribValue{"STRING_1383325654"}, AttrbGrp_NoInstrAttrib_22);
      all_values.push_back(AttrbGrp_NoInstrAttrib_22);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_23;
      set_field(noInstrAttrib_0_1_1, FIX::InstrAttribType{16}, AttrbGrp_NoInstrAttrib_23);
      set_field(noInstrAttrib_0_1_1, FIX::InstrAttribValue{"STRING_1688984299"}, AttrbGrp_NoInstrAttrib_23);
      all_values.push_back(AttrbGrp_NoInstrAttrib_23);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_24;
      set_field(noInstrAttrib_0_1_2, FIX::InstrAttribType{6}, AttrbGrp_NoInstrAttrib_24);
      set_field(noInstrAttrib_0_1_2, FIX::InstrAttribValue{"STRING_941237514"}, AttrbGrp_NoInstrAttrib_24);
      all_values.push_back(AttrbGrp_NoInstrAttrib_24);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_2);
    }
    // SecLstUpdRelSymsLegGrp
    // Group SecLstUpdRelSymsLegGrp.NoLegs
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_0;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_0;
      set_field(noLegs_0_1_0, FIX::LegSettlType{'1'}, SecLstUpdRelSymsLegGrp_NoLegs_0);
      set_field(noLegs_0_1_0, FIX::LegSwapType{4}, SecLstUpdRelSymsLegGrp_NoLegs_0);
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_0);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_108;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_1959496376"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{1324490766}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_37340011"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{82788983}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_928849460"}, InstrumentLeg_108);
      FIX::LegContractMultiplier LegContractMultiplier_108;
      LegContractMultiplier_108.setString("19443792");
set_field(noLegs_0_1_0, LegContractMultiplier_108, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{1227807987}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1515127295"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_1419976904"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1111907577"}, InstrumentLeg_108);
      FIX::LegCouponRate LegCouponRate_108;
      LegCouponRate_108.setString("81.580000");
set_field(noLegs_0_1_0, LegCouponRate_108, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_1357340671"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1946943954"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{2011373914}, InstrumentLeg_108);
      FIX::LegFactor LegFactor_108;
      LegFactor_108.setString("20163533");
set_field(noLegs_0_1_0, LegFactor_108, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{14349395}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_2139691194"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2002267480"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1428144016"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_2084643201"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_986506756"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_663986022"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_2043699928"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_528007408"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_108);
      FIX::LegOptionRatio LegOptionRatio_108;
      LegOptionRatio_108.setString("8374537");
set_field(noLegs_0_1_0, LegOptionRatio_108, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_581045145"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_354093924"}, InstrumentLeg_108);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_108;
      LegPriceUnitOfMeasureQty_108.setString("3697744");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_108, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegProduct{393057873}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{1678584690}, InstrumentLeg_108);
      FIX::LegRatioQty LegRatioQty_108;
      LegRatioQty_108.setString("4071144");
set_field(noLegs_0_1_0, LegRatioQty_108, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_475846856"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_459950503"}, InstrumentLeg_108);
      FIX::LegRepurchaseRate LegRepurchaseRate_108;
      LegRepurchaseRate_108.setString("99.840000");
set_field(noLegs_0_1_0, LegRepurchaseRate_108, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{1703654843}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_1975077798"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_1623986889"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_668078773"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_404132308"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_833843912"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_170658588"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegSide{'2'}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_633304218"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_108);
      FIX::LegStrikePrice LegStrikePrice_108;
      LegStrikePrice_108.setString("6476536");
set_field(noLegs_0_1_0, LegStrikePrice_108, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_26756400"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_2140144441"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_2075797630"}, InstrumentLeg_108);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_2111399601"}, InstrumentLeg_108);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_108;
      LegUnitOfMeasureQty_108.setString("9791675");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_108, InstrumentLeg_108);
      all_values.push_back(InstrumentLeg_108);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_224;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_2007615882"}, LegSecAltIDGrp_NoLegSecurityAltID_224);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_1507174957"}, LegSecAltIDGrp_NoLegSecurityAltID_224);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_224);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_225;
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltID{"STRING_2009362592"}, LegSecAltIDGrp_NoLegSecurityAltID_225);
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltIDSource{"STRING_697586029"}, LegSecAltIDGrp_NoLegSecurityAltID_225);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_225);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_226;
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltID{"STRING_2088220102"}, LegSecAltIDGrp_NoLegSecurityAltID_226);
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltIDSource{"STRING_215972868"}, LegSecAltIDGrp_NoLegSecurityAltID_226);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_226);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_15;
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveCurrency{"CAN"}, LegBenchmarkCurveData_15);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveName{"STRING_1894557559"}, LegBenchmarkCurveData_15);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurvePoint{"STRING_1474474859"}, LegBenchmarkCurveData_15);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_15;
      LegBenchmarkPrice_15.setString("8096411");
set_field(noLegs_0_1_0, LegBenchmarkPrice_15, LegBenchmarkCurveData_15);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkPriceType{207024414}, LegBenchmarkCurveData_15);
      all_values.push_back(LegBenchmarkCurveData_15);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_43;
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationType{"STRING_365812379"}, LegStipulations_NoLegStipulations_43);
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationValue{"STRING_34618564"}, LegStipulations_NoLegStipulations_43);
        all_values.push_back(LegStipulations_NoLegStipulations_43);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_1;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_1;
      set_field(noLegs_0_1_1, FIX::LegSettlType{'1'}, SecLstUpdRelSymsLegGrp_NoLegs_1);
      set_field(noLegs_0_1_1, FIX::LegSwapType{1}, SecLstUpdRelSymsLegGrp_NoLegs_1);
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_1);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_109;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_438750872"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{1988831997}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_1204549741"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{707758164}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_474652567"}, InstrumentLeg_109);
      FIX::LegContractMultiplier LegContractMultiplier_109;
      LegContractMultiplier_109.setString("12390985");
set_field(noLegs_0_1_1, LegContractMultiplier_109, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{845635125}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_1122306180"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_1265854996"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_838295918"}, InstrumentLeg_109);
      FIX::LegCouponRate LegCouponRate_109;
      LegCouponRate_109.setString("1.620000");
set_field(noLegs_0_1_1, LegCouponRate_109, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_1229770949"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"CAN"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_1089903183"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{1177154777}, InstrumentLeg_109);
      FIX::LegFactor LegFactor_109;
      LegFactor_109.setString("15047991");
set_field(noLegs_0_1_1, LegFactor_109, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{1787489212}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_1117891232"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1720771979"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_707366003"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_1451685559"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_1467845890"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_34357214"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_113843095"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_1674870304"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_109);
      FIX::LegOptionRatio LegOptionRatio_109;
      LegOptionRatio_109.setString("4796554");
set_field(noLegs_0_1_1, LegOptionRatio_109, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_1709488868"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_720346495"}, InstrumentLeg_109);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_109;
      LegPriceUnitOfMeasureQty_109.setString("15135466");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_109, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegProduct{756093}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{561694844}, InstrumentLeg_109);
      FIX::LegRatioQty LegRatioQty_109;
      LegRatioQty_109.setString("5706127");
set_field(noLegs_0_1_1, LegRatioQty_109, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_708514257"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_1036347411"}, InstrumentLeg_109);
      FIX::LegRepurchaseRate LegRepurchaseRate_109;
      LegRepurchaseRate_109.setString("13.160000");
set_field(noLegs_0_1_1, LegRepurchaseRate_109, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{1554149383}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_11169944"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_928082664"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_244961653"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_1061790106"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_10369965"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_2062425121"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegSide{'5'}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_1100273149"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_109);
      FIX::LegStrikePrice LegStrikePrice_109;
      LegStrikePrice_109.setString("7402787");
set_field(noLegs_0_1_1, LegStrikePrice_109, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_62503835"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_1635314068"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_1447644716"}, InstrumentLeg_109);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_1514189394"}, InstrumentLeg_109);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_109;
      LegUnitOfMeasureQty_109.setString("9556763");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_109, InstrumentLeg_109);
      all_values.push_back(InstrumentLeg_109);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_227;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_1628032490"}, LegSecAltIDGrp_NoLegSecurityAltID_227);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_483062967"}, LegSecAltIDGrp_NoLegSecurityAltID_227);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_227);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_228;
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltID{"STRING_1047360341"}, LegSecAltIDGrp_NoLegSecurityAltID_228);
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltIDSource{"STRING_2107687965"}, LegSecAltIDGrp_NoLegSecurityAltID_228);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_228);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_229;
        set_field(noLegSecurityAltID_0_1_2_2, FIX::LegSecurityAltID{"STRING_45068187"}, LegSecAltIDGrp_NoLegSecurityAltID_229);
        set_field(noLegSecurityAltID_0_1_2_2, FIX::LegSecurityAltIDSource{"STRING_1767706837"}, LegSecAltIDGrp_NoLegSecurityAltID_229);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_229);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_16;
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurveCurrency{"USD"}, LegBenchmarkCurveData_16);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurveName{"STRING_181918033"}, LegBenchmarkCurveData_16);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurvePoint{"STRING_2044363665"}, LegBenchmarkCurveData_16);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_16;
      LegBenchmarkPrice_16.setString("7543385");
set_field(noLegs_0_1_1, LegBenchmarkPrice_16, LegBenchmarkCurveData_16);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkPriceType{1218265445}, LegBenchmarkCurveData_16);
      all_values.push_back(LegBenchmarkCurveData_16);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_44;
        set_field(noLegStipulations_0_1_2_0, FIX::LegStipulationType{"STRING_161004273"}, LegStipulations_NoLegStipulations_44);
        set_field(noLegStipulations_0_1_2_0, FIX::LegStipulationValue{"STRING_1229435389"}, LegStipulations_NoLegStipulations_44);
        all_values.push_back(LegStipulations_NoLegStipulations_44);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_45;
        set_field(noLegStipulations_0_1_2_1, FIX::LegStipulationType{"STRING_487190349"}, LegStipulations_NoLegStipulations_45);
        set_field(noLegStipulations_0_1_2_1, FIX::LegStipulationValue{"STRING_405965926"}, LegStipulations_NoLegStipulations_45);
        all_values.push_back(LegStipulations_NoLegStipulations_45);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_46;
        set_field(noLegStipulations_0_1_2_2, FIX::LegStipulationType{"STRING_143741847"}, LegStipulations_NoLegStipulations_46);
        set_field(noLegStipulations_0_1_2_2, FIX::LegStipulationValue{"STRING_497560314"}, LegStipulations_NoLegStipulations_46);
        all_values.push_back(LegStipulations_NoLegStipulations_46);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_2;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_2;
      set_field(noLegs_0_1_2, FIX::LegSettlType{'3'}, SecLstUpdRelSymsLegGrp_NoLegs_2);
      set_field(noLegs_0_1_2, FIX::LegSwapType{2}, SecLstUpdRelSymsLegGrp_NoLegs_2);
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_2);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_110;
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuer{"DATA_1597833463"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuerLen{1413003651}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDesc{"DATA_615510561"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDescLen{190628529}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegCFICode{"STRING_1475507486"}, InstrumentLeg_110);
      FIX::LegContractMultiplier LegContractMultiplier_110;
      LegContractMultiplier_110.setString("1033409");
set_field(noLegs_0_1_2, LegContractMultiplier_110, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegContractMultiplierUnit{1638273245}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegContractSettlMonth{"MONTHYEAR_842213232"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegCountryOfIssue{"COUNTRY_1059017292"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_972791528"}, InstrumentLeg_110);
      FIX::LegCouponRate LegCouponRate_110;
      LegCouponRate_110.setString("20.740000");
set_field(noLegs_0_1_2, LegCouponRate_110, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegCreditRating{"STRING_1542080259"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegCurrency{"EUR"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegDatedDate{"LOCALMKTDATE_1587148446"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegExerciseStyle{1640375059}, InstrumentLeg_110);
      FIX::LegFactor LegFactor_110;
      LegFactor_110.setString("17567173");
set_field(noLegs_0_1_2, LegFactor_110, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegFlowScheduleType{1632972727}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegInstrRegistry{"STRING_1822293092"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1653597353"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegIssueDate{"LOCALMKTDATE_239827617"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegIssuer{"STRING_893074889"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegLocaleOfIssue{"STRING_1212705038"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegMaturityDate{"LOCALMKTDATE_400831890"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegMaturityMonthYear{"MONTHYEAR_2122510278"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegMaturityTime{"TZTIMEONLY_1699895387"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegOptAttribute{'8'}, InstrumentLeg_110);
      FIX::LegOptionRatio LegOptionRatio_110;
      LegOptionRatio_110.setString("1187684");
set_field(noLegs_0_1_2, LegOptionRatio_110, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegPool{"STRING_49972053"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegPriceUnitOfMeasure{"STRING_1127705216"}, InstrumentLeg_110);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_110;
      LegPriceUnitOfMeasureQty_110.setString("8197369");
set_field(noLegs_0_1_2, LegPriceUnitOfMeasureQty_110, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegProduct{1647805517}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegPutOrCall{393225219}, InstrumentLeg_110);
      FIX::LegRatioQty LegRatioQty_110;
      LegRatioQty_110.setString("14352475");
set_field(noLegs_0_1_2, LegRatioQty_110, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1838434046"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegRepoCollateralSecurityType{"STRING_1868732705"}, InstrumentLeg_110);
      FIX::LegRepurchaseRate LegRepurchaseRate_110;
      LegRepurchaseRate_110.setString("84.940000");
set_field(noLegs_0_1_2, LegRepurchaseRate_110, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegRepurchaseTerm{1329223643}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegSecurityDesc{"STRING_563462290"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegSecurityExchange{"EXCHANGE_450122138"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegSecurityID{"STRING_154531524"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegSecurityIDSource{"STRING_886224364"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegSecuritySubType{"STRING_1992202397"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegSecurityType{"STRING_27199746"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegSide{'1'}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegStateOrProvinceOfIssue{"STRING_1431867195"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_110);
      FIX::LegStrikePrice LegStrikePrice_110;
      LegStrikePrice_110.setString("9173562");
set_field(noLegs_0_1_2, LegStrikePrice_110, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegSymbol{"STRING_1342384249"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegSymbolSfx{"STRING_284538149"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegTimeUnit{"STRING_1157183891"}, InstrumentLeg_110);
      set_field(noLegs_0_1_2, FIX::LegUnitOfMeasure{"STRING_87975491"}, InstrumentLeg_110);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_110;
      LegUnitOfMeasureQty_110.setString("14972431");
set_field(noLegs_0_1_2, LegUnitOfMeasureQty_110, InstrumentLeg_110);
      all_values.push_back(InstrumentLeg_110);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_230;
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltID{"STRING_63002121"}, LegSecAltIDGrp_NoLegSecurityAltID_230);
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltIDSource{"STRING_1049654926"}, LegSecAltIDGrp_NoLegSecurityAltID_230);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_230);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_231;
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltID{"STRING_217329950"}, LegSecAltIDGrp_NoLegSecurityAltID_231);
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltIDSource{"STRING_181770599"}, LegSecAltIDGrp_NoLegSecurityAltID_231);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_231);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_232;
        set_field(noLegSecurityAltID_0_2_2_2, FIX::LegSecurityAltID{"STRING_1099626979"}, LegSecAltIDGrp_NoLegSecurityAltID_232);
        set_field(noLegSecurityAltID_0_2_2_2, FIX::LegSecurityAltIDSource{"STRING_1345035166"}, LegSecAltIDGrp_NoLegSecurityAltID_232);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_232);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_17;
      set_field(noLegs_0_1_2, FIX::LegBenchmarkCurveCurrency{"JPY"}, LegBenchmarkCurveData_17);
      set_field(noLegs_0_1_2, FIX::LegBenchmarkCurveName{"STRING_1738260386"}, LegBenchmarkCurveData_17);
      set_field(noLegs_0_1_2, FIX::LegBenchmarkCurvePoint{"STRING_289271415"}, LegBenchmarkCurveData_17);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_17;
      LegBenchmarkPrice_17.setString("2908992");
set_field(noLegs_0_1_2, LegBenchmarkPrice_17, LegBenchmarkCurveData_17);
      set_field(noLegs_0_1_2, FIX::LegBenchmarkPriceType{1459509443}, LegBenchmarkCurveData_17);
      all_values.push_back(LegBenchmarkCurveData_17);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_47;
        set_field(noLegStipulations_0_2_2_0, FIX::LegStipulationType{"STRING_1620122890"}, LegStipulations_NoLegStipulations_47);
        set_field(noLegStipulations_0_2_2_0, FIX::LegStipulationValue{"STRING_2022971733"}, LegStipulations_NoLegStipulations_47);
        all_values.push_back(LegStipulations_NoLegStipulations_47);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_48;
        set_field(noLegStipulations_0_2_2_1, FIX::LegStipulationType{"STRING_130498399"}, LegStipulations_NoLegStipulations_48);
        set_field(noLegStipulations_0_2_2_1, FIX::LegStipulationValue{"STRING_1774654414"}, LegStipulations_NoLegStipulations_48);
        all_values.push_back(LegStipulations_NoLegStipulations_48);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_9;
    set_field(noRelatedSym_0_0, FIX::ExpirationCycle{0}, BaseTradingRules_9);
    set_field(noRelatedSym_0_0, FIX::ImpliedMarketIndicator{0}, BaseTradingRules_9);
    FIX::MaxPriceVariation MaxPriceVariation_9;
    MaxPriceVariation_9.setString("18018541");
set_field(noRelatedSym_0_0, MaxPriceVariation_9, BaseTradingRules_9);
    FIX::MaxTradeVol MaxTradeVol_9;
    MaxTradeVol_9.setString("19309032");
set_field(noRelatedSym_0_0, MaxTradeVol_9, BaseTradingRules_9);
    FIX::MinTradeVol MinTradeVol_9;
    MinTradeVol_9.setString("14070843");
set_field(noRelatedSym_0_0, MinTradeVol_9, BaseTradingRules_9);
    set_field(noRelatedSym_0_0, FIX::MultilegModel{0}, BaseTradingRules_9);
    set_field(noRelatedSym_0_0, FIX::MultilegPriceMethod{0}, BaseTradingRules_9);
    set_field(noRelatedSym_0_0, FIX::PriceType{16}, BaseTradingRules_9);
    FIX::RoundLot RoundLot_9;
    RoundLot_9.setString("5168459");
set_field(noRelatedSym_0_0, RoundLot_9, BaseTradingRules_9);
    set_field(noRelatedSym_0_0, FIX::TradingCurrency{"EUR"}, BaseTradingRules_9);
    all_values.push_back(BaseTradingRules_9);
    all_compo_names.insert("...NoRelatedSym..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_19;
      set_field(noLotTypeRules_0_1_0, FIX::LotType{'3'}, LotTypeRules_NoLotTypeRules_19);
      FIX::MinLotSize MinLotSize_19;
      MinLotSize_19.setString("7446729");
set_field(noLotTypeRules_0_1_0, MinLotSize_19, LotTypeRules_NoLotTypeRules_19);
      all_values.push_back(LotTypeRules_NoLotTypeRules_19);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_20;
      set_field(noLotTypeRules_0_1_1, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_20);
      FIX::MinLotSize MinLotSize_20;
      MinLotSize_20.setString("12457966");
set_field(noLotTypeRules_0_1_1, MinLotSize_20, LotTypeRules_NoLotTypeRules_20);
      all_values.push_back(LotTypeRules_NoLotTypeRules_20);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_9;
    FIX::HighLimitPrice HighLimitPrice_9;
    HighLimitPrice_9.setString("9620029");
set_field(noRelatedSym_0_0, HighLimitPrice_9, PriceLimits_9);
    FIX::LowLimitPrice LowLimitPrice_9;
    LowLimitPrice_9.setString("8495941");
set_field(noRelatedSym_0_0, LowLimitPrice_9, PriceLimits_9);
    set_field(noRelatedSym_0_0, FIX::PriceLimitType{1}, PriceLimits_9);
    FIX::TradingReferencePrice TradingReferencePrice_9;
    TradingReferencePrice_9.setString("1595544");
set_field(noRelatedSym_0_0, TradingReferencePrice_9, PriceLimits_9);
    all_values.push_back(PriceLimits_9);
    all_compo_names.insert("...NoRelatedSym...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_17;
      FIX::EndTickPriceRange EndTickPriceRange_17;
      EndTickPriceRange_17.setString("7978887");
set_field(noTickRules_0_1_0, EndTickPriceRange_17, TickRules_NoTickRules_17);
      FIX::StartTickPriceRange StartTickPriceRange_17;
      StartTickPriceRange_17.setString("18978148");
set_field(noTickRules_0_1_0, StartTickPriceRange_17, TickRules_NoTickRules_17);
      FIX::TickIncrement TickIncrement_17;
      TickIncrement_17.setString("21403730");
set_field(noTickRules_0_1_0, TickIncrement_17, TickRules_NoTickRules_17);
      set_field(noTickRules_0_1_0, FIX::TickRuleType{2}, TickRules_NoTickRules_17);
      all_values.push_back(TickRules_NoTickRules_17);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_18;
      FIX::EndTickPriceRange EndTickPriceRange_18;
      EndTickPriceRange_18.setString("12098406");
set_field(noTickRules_0_1_1, EndTickPriceRange_18, TickRules_NoTickRules_18);
      FIX::StartTickPriceRange StartTickPriceRange_18;
      StartTickPriceRange_18.setString("18207493");
set_field(noTickRules_0_1_1, StartTickPriceRange_18, TickRules_NoTickRules_18);
      FIX::TickIncrement TickIncrement_18;
      TickIncrement_18.setString("5614272");
set_field(noTickRules_0_1_1, TickIncrement_18, TickRules_NoTickRules_18);
      set_field(noTickRules_0_1_1, FIX::TickRuleType{0}, TickRules_NoTickRules_18);
      all_values.push_back(TickRules_NoTickRules_18);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_0.addGroup(noTickRules_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_19;
      FIX::EndTickPriceRange EndTickPriceRange_19;
      EndTickPriceRange_19.setString("19512477");
set_field(noTickRules_0_1_2, EndTickPriceRange_19, TickRules_NoTickRules_19);
      FIX::StartTickPriceRange StartTickPriceRange_19;
      StartTickPriceRange_19.setString("1885980");
set_field(noTickRules_0_1_2, StartTickPriceRange_19, TickRules_NoTickRules_19);
      FIX::TickIncrement TickIncrement_19;
      TickIncrement_19.setString("18470411");
set_field(noTickRules_0_1_2, TickIncrement_19, TickRules_NoTickRules_19);
      set_field(noTickRules_0_1_2, FIX::TickRuleType{4}, TickRules_NoTickRules_19);
      all_values.push_back(TickRules_NoTickRules_19);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_0.addGroup(noTickRules_0_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_14;
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribType{1630460738}, NestedInstrumentAttribute_NoNestedInstrAttrib_14);
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribValue{"STRING_1186065599"}, NestedInstrumentAttribute_NoNestedInstrAttrib_14);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_14);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_15;
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionID{"STRING_1"}, TradingSessionRulesGrp_NoTradingSessionRules_15);
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionSubID{"STRING_7"}, TradingSessionRulesGrp_NoTradingSessionRules_15);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_15);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_32;
        set_field(noExecInstRules_0_0_2_0, FIX::ExecInstValue{'8'}, ExecInstRules_NoExecInstRules_32);
        all_values.push_back(ExecInstRules_NoExecInstRules_32);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_33;
        set_field(noExecInstRules_0_0_2_1, FIX::ExecInstValue{'5'}, ExecInstRules_NoExecInstRules_33);
        all_values.push_back(ExecInstRules_NoExecInstRules_33);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_34;
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_34);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDFeedType{"STRING_1294352778"}, MarketDataFeedTypes_NoMDFeedTypes_34);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MarketDepth{806921090}, MarketDataFeedTypes_NoMDFeedTypes_34);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_34);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_34;
        set_field(noMatchRules_0_0_2_0, FIX::MatchAlgorithm{"STRING_108872075"}, MatchRules_NoMatchRules_34);
        set_field(noMatchRules_0_0_2_0, FIX::MatchType{"STRING_M1"}, MatchRules_NoMatchRules_34);
        all_values.push_back(MatchRules_NoMatchRules_34);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_30;
        set_field(noOrdTypeRules_0_0_2_0, FIX::OrdType{'3'}, OrdTypeRules_NoOrdTypeRules_30);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_30);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_31;
        set_field(noOrdTypeRules_0_0_2_1, FIX::OrdType{'P'}, OrdTypeRules_NoOrdTypeRules_31);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_31);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_32;
        set_field(noOrdTypeRules_0_0_2_2, FIX::OrdType{'6'}, OrdTypeRules_NoOrdTypeRules_32);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_32);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_36;
        set_field(noTimeInForceRules_0_0_2_0, FIX::TimeInForce{'2'}, TimeInForceRules_NoTimeInForceRules_36);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_36);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_16;
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionID{"STRING_2"}, TradingSessionRulesGrp_NoTradingSessionRules_16);
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionSubID{"STRING_1"}, TradingSessionRulesGrp_NoTradingSessionRules_16);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_16);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_34;
        set_field(noExecInstRules_0_1_2_0, FIX::ExecInstValue{'6'}, ExecInstRules_NoExecInstRules_34);
        all_values.push_back(ExecInstRules_NoExecInstRules_34);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_35;
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_35);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDFeedType{"STRING_872816374"}, MarketDataFeedTypes_NoMDFeedTypes_35);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MarketDepth{2013484648}, MarketDataFeedTypes_NoMDFeedTypes_35);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_35);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_36;
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_36);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDFeedType{"STRING_715784937"}, MarketDataFeedTypes_NoMDFeedTypes_36);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MarketDepth{1496461738}, MarketDataFeedTypes_NoMDFeedTypes_36);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_36);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_37;
        set_field(noMDFeedTypes_0_1_2_2, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_37);
        set_field(noMDFeedTypes_0_1_2_2, FIX::MDFeedType{"STRING_1880698816"}, MarketDataFeedTypes_NoMDFeedTypes_37);
        set_field(noMDFeedTypes_0_1_2_2, FIX::MarketDepth{1541282831}, MarketDataFeedTypes_NoMDFeedTypes_37);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_37);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_35;
        set_field(noMatchRules_0_1_2_0, FIX::MatchAlgorithm{"STRING_1414974966"}, MatchRules_NoMatchRules_35);
        set_field(noMatchRules_0_1_2_0, FIX::MatchType{"STRING_S3"}, MatchRules_NoMatchRules_35);
        all_values.push_back(MatchRules_NoMatchRules_35);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_33;
        set_field(noOrdTypeRules_0_1_2_0, FIX::OrdType{'P'}, OrdTypeRules_NoOrdTypeRules_33);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_33);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_34;
        set_field(noOrdTypeRules_0_1_2_1, FIX::OrdType{'1'}, OrdTypeRules_NoOrdTypeRules_34);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_34);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_37;
        set_field(noTimeInForceRules_0_1_2_0, FIX::TimeInForce{'8'}, TimeInForceRules_NoTimeInForceRules_37);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_37);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_38;
        set_field(noTimeInForceRules_0_1_2_1, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_38);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_38);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_39;
        set_field(noTimeInForceRules_0_1_2_2, FIX::TimeInForce{'4'}, TimeInForceRules_NoTimeInForceRules_39);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_39);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_31;
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveCurrency{"GBP"}, SpreadOrBenchmarkCurveData_31);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveName{"STRING_MuniAAA"}, SpreadOrBenchmarkCurveData_31);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurvePoint{"STRING_1082674795"}, SpreadOrBenchmarkCurveData_31);
    FIX::BenchmarkPrice BenchmarkPrice_31;
    BenchmarkPrice_31.setString("9756061");
set_field(noRelatedSym_0_0, BenchmarkPrice_31, SpreadOrBenchmarkCurveData_31);
    set_field(noRelatedSym_0_0, FIX::BenchmarkPriceType{1103243562}, SpreadOrBenchmarkCurveData_31);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityID{"STRING_288213849"}, SpreadOrBenchmarkCurveData_31);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityIDSource{"STRING_1098397147"}, SpreadOrBenchmarkCurveData_31);
    FIX::Spread Spread_31;
    Spread_31.setString("1843582");
set_field(noRelatedSym_0_0, Spread_31, SpreadOrBenchmarkCurveData_31);
    all_values.push_back(SpreadOrBenchmarkCurveData_31);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_50;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_PROTECT"}, Stipulations_NoStipulations_50);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_350801767"}, Stipulations_NoStipulations_50);
      all_values.push_back(Stipulations_NoStipulations_50);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_14;
      FIX::EndStrikePxRange EndStrikePxRange_14;
      EndStrikePxRange_14.setString("5079481");
set_field(noStrikeRules_0_1_0, EndStrikePxRange_14, StrikeRules_NoStrikeRules_14);
      FIX::StartStrikePxRange StartStrikePxRange_14;
      StartStrikePxRange_14.setString("2168027");
set_field(noStrikeRules_0_1_0, StartStrikePxRange_14, StrikeRules_NoStrikeRules_14);
      set_field(noStrikeRules_0_1_0, FIX::StrikeExerciseStyle{606104906}, StrikeRules_NoStrikeRules_14);
      FIX::StrikeIncrement StrikeIncrement_14;
      StrikeIncrement_14.setString("12237331");
set_field(noStrikeRules_0_1_0, StrikeIncrement_14, StrikeRules_NoStrikeRules_14);
      set_field(noStrikeRules_0_1_0, FIX::StrikeRuleID{"STRING_1713264505"}, StrikeRules_NoStrikeRules_14);
      all_values.push_back(StrikeRules_NoStrikeRules_14);
      all_compo_names.insert("...NoRelatedSym...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_23;
        set_field(noMaturityRules_0_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_956948303"}, MaturityRules_NoMaturityRules_23);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_23);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrement{1264358929}, MaturityRules_NoMaturityRules_23);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_23);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityRuleID{"STRING_1392066115"}, MaturityRules_NoMaturityRules_23);
        set_field(noMaturityRules_0_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_677193360"}, MaturityRules_NoMaturityRules_23);
        all_values.push_back(MaturityRules_NoMaturityRules_23);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_24;
        set_field(noMaturityRules_0_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_1778512147"}, MaturityRules_NoMaturityRules_24);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_24);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrement{1384380569}, MaturityRules_NoMaturityRules_24);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrementUnits{0}, MaturityRules_NoMaturityRules_24);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityRuleID{"STRING_27451440"}, MaturityRules_NoMaturityRules_24);
        set_field(noMaturityRules_0_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_52956205"}, MaturityRules_NoMaturityRules_24);
        all_values.push_back(MaturityRules_NoMaturityRules_24);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_131;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1969054551"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{1137442027}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_649754805"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{797177010}, UnderlyingInstrument_131);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_131;
      UnderlyingAdjustedQuantity_131.setString("932019");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_131, UnderlyingInstrument_131);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_131;
      UnderlyingAllocationPercent_131.setString("86.540000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_131, UnderlyingInstrument_131);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_131;
      UnderlyingAttachmentPoint_131.setString("41.570000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_277560241"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_104987267"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_1530705980"}, UnderlyingInstrument_131);
      FIX::UnderlyingCapValue UnderlyingCapValue_131;
      UnderlyingCapValue_131.setString("6283620");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_131, UnderlyingInstrument_131);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_131;
      UnderlyingCashAmount_131.setString("1020583");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_131);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_131;
      UnderlyingContractMultiplier_131.setString("8451647");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{708163305}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1114903664"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_410945633"}, UnderlyingInstrument_131);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_131;
      UnderlyingCouponRate_131.setString("39.380000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_2071851967"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_131);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_131;
      UnderlyingCurrentValue_131.setString("1488079");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_131, UnderlyingInstrument_131);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_131;
      UnderlyingDetachmentPoint_131.setString("17.880000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_131, UnderlyingInstrument_131);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_131;
      UnderlyingDirtyPrice_131.setString("7559525");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_131, UnderlyingInstrument_131);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_131;
      UnderlyingEndPrice_131.setString("19273200");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_131, UnderlyingInstrument_131);
      FIX::UnderlyingEndValue UnderlyingEndValue_131;
      UnderlyingEndValue_131.setString("13795216");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{2140333148}, UnderlyingInstrument_131);
      FIX::UnderlyingFXRate UnderlyingFXRate_131;
      UnderlyingFXRate_131.setString("17718585");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_131);
      FIX::UnderlyingFactor UnderlyingFactor_131;
      UnderlyingFactor_131.setString("458057");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{1338938566}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_1228543959"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1183247732"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_1988693371"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_2025720969"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1276449674"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_779178377"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1773811479"}, UnderlyingInstrument_131);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_131;
      UnderlyingNotionalPercentageOutstanding_131.setString("99.160000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_131);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_131;
      UnderlyingOriginalNotionalPercentageOutstanding_131.setString("38.110000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_34888276"}, UnderlyingInstrument_131);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_131;
      UnderlyingPriceUnitOfMeasureQty_131.setString("9862240");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{1048204341}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{880053052}, UnderlyingInstrument_131);
      FIX::UnderlyingPx UnderlyingPx_131;
      UnderlyingPx_131.setString("16943873");
set_field(noUnderlyings_0_1_0, UnderlyingPx_131, UnderlyingInstrument_131);
      FIX::UnderlyingQty UnderlyingQty_131;
      UnderlyingQty_131.setString("156243");
set_field(noUnderlyings_0_1_0, UnderlyingQty_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1290998685"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_508787638"}, UnderlyingInstrument_131);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_131;
      UnderlyingRepurchaseRate_131.setString("63.250000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{661524358}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_587546857"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_88800618"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1424116147"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_1343499436"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_2016120707"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_656154114"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_1336348936"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_1640495615"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_2063127170"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_131);
      FIX::UnderlyingStartValue UnderlyingStartValue_131;
      UnderlyingStartValue_131.setString("8319505");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1144187481"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_131);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_131;
      UnderlyingStrikePrice_131.setString("10224248");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_1694368400"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_1452338634"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_648752634"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1100894668"}, UnderlyingInstrument_131);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_131;
      UnderlyingUnitOfMeasureQty_131.setString("1890206");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_131, UnderlyingInstrument_131);
      all_values.push_back(UnderlyingInstrument_131);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_271;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1135782944"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_271);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1175244673"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_271);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_271);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_268;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_2015835996"}, UnderlyingStipulations_NoUnderlyingStips_268);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_722148373"}, UnderlyingStipulations_NoUnderlyingStips_268);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_268);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_269;
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipType{"STRING_722131497"}, UnderlyingStipulations_NoUnderlyingStips_269);
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipValue{"STRING_1159351033"}, UnderlyingStipulations_NoUnderlyingStips_269);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_269);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_270;
        set_field(noUnderlyingStips_0_0_2_2, FIX::UnderlyingStipType{"STRING_1230936011"}, UnderlyingStipulations_NoUnderlyingStips_270);
        set_field(noUnderlyingStips_0_0_2_2, FIX::UnderlyingStipValue{"STRING_662124174"}, UnderlyingStipulations_NoUnderlyingStips_270);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_270);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_271;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1818482868"}, UndlyInstrumentParties_NoUndlyInstrumentParties_271);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_271);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{1097507891}, UndlyInstrumentParties_NoUndlyInstrumentParties_271);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_271);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_619561852"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1753662005}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_203363944"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{112573819}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1669305528"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{1585518585}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    // YieldData
    multiset<string> YieldData_26;
    FIX::Yield Yield_26;
    Yield_26.setString("43.530000");
set_field(noRelatedSym_0_0, Yield_26, YieldData_26);
    set_field(noRelatedSym_0_0, FIX::YieldCalcDate{"LOCALMKTDATE_666009361"}, YieldData_26);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionDate{"LOCALMKTDATE_2003437311"}, YieldData_26);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_26;
    YieldRedemptionPrice_26.setString("16176846");
set_field(noRelatedSym_0_0, YieldRedemptionPrice_26, YieldData_26);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionPriceType{1688434164}, YieldData_26);
    set_field(noRelatedSym_0_0, FIX::YieldType{"STRING_PUT"}, YieldData_26);
    all_values.push_back(YieldData_26);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_0);
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
