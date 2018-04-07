#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SettlementObligationReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementObligationReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SettlementObligationReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementObligationReport_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1075993515"}, SettlementObligationReport_0);
  set_field(msg, FIX::EncodedText{"DATA_753258170"}, SettlementObligationReport_0);
  set_field(msg, FIX::EncodedTextLen{129866941}, SettlementObligationReport_0);
  set_field(msg, FIX::SettlObligMode{2}, SettlementObligationReport_0);
  set_field(msg, FIX::SettlObligMsgID{"STRING_362292098"}, SettlementObligationReport_0);
  set_field(msg, FIX::SettlementCycleNo{2064986071}, SettlementObligationReport_0);
  set_field(msg, FIX::Text{"STRING_238328032"}, SettlementObligationReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(2, 20, 31, 12, 11, 2000)}, SettlementObligationReport_0);
  all_values.push_back(SettlementObligationReport_0);

  all_compo_names.insert("SettlementObligationReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_18;
  set_field(msg, FIX::ApplID{"STRING_1989110721"}, ApplicationSequenceControl_18);
  set_field(msg, FIX::ApplLastSeqNum{1385711326}, ApplicationSequenceControl_18);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_18);
  set_field(msg, FIX::ApplSeqNum{27787489}, ApplicationSequenceControl_18);
  all_values.push_back(ApplicationSequenceControl_18);
  all_compo_names.insert(".");

  // SettlObligationInstructions
  // Group SettlObligationInstructions.NoSettlOblig
  {
    FIX50SP2::SettlementObligationReport::NoSettlOblig noSettlOblig_0_0;
    // SettlObligationInstructions.NoSettlOblig
    multiset<string> SettlObligationInstructions_NoSettlOblig_0;
    FIX::CcyAmt CcyAmt_0;
    CcyAmt_0.setString("3782911");
set_field(noSettlOblig_0_0, CcyAmt_0, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::Currency{"USD"}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::EffectiveTime{FIX::UTCTIMESTAMP(12, 57, 50, 13, 10, 2003)}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(4, 36, 58, 9, 8, 2017)}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(15, 55, 35, 8, 3, 2001)}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::NetGrossInd{1}, SettlObligationInstructions_NoSettlOblig_0);
    FIX::SettlCurrAmt SettlCurrAmt_7;
    SettlCurrAmt_7.setString("13969666");
set_field(noSettlOblig_0_0, SettlCurrAmt_7, SettlObligationInstructions_NoSettlOblig_0);
    FIX::SettlCurrFxRate SettlCurrFxRate_7;
    SettlCurrFxRate_7.setString("7368998");
set_field(noSettlOblig_0_0, SettlCurrFxRate_7, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::SettlCurrency{"EUR"}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::SettlDate{"LOCALMKTDATE_764687350"}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::SettlObligID{"STRING_362471642"}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::SettlObligRefID{"STRING_1132163840"}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::SettlObligTransType{'C'}, SettlObligationInstructions_NoSettlOblig_0);
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_0);
    all_compo_names.insert("...NoSettlOblig");

    // Instrument
    multiset<string> Instrument_75;
    FIX::AttachmentPoint AttachmentPoint_75;
    AttachmentPoint_75.setString("28.270000");
set_field(noSettlOblig_0_0, AttachmentPoint_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::CFICode{"STRING_1342879111"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::CPProgram{2}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::CPRegType{"STRING_102606136"}, Instrument_75);
    FIX::CapPrice CapPrice_75;
    CapPrice_75.setString("286699");
set_field(noSettlOblig_0_0, CapPrice_75, Instrument_75);
    FIX::ContractMultiplier ContractMultiplier_75;
    ContractMultiplier_75.setString("15042534");
set_field(noSettlOblig_0_0, ContractMultiplier_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::ContractMultiplierUnit{1}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::ContractSettlMonth{"MONTHYEAR_683348494"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::CountryOfIssue{"COUNTRY_470032126"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_776184873"}, Instrument_75);
    FIX::CouponRate CouponRate_75;
    CouponRate_75.setString("69.220000");
set_field(noSettlOblig_0_0, CouponRate_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::CreditRating{"STRING_189068976"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::DatedDate{"LOCALMKTDATE_823839259"}, Instrument_75);
    FIX::DetachmentPoint DetachmentPoint_75;
    DetachmentPoint_75.setString("12.490000");
set_field(noSettlOblig_0_0, DetachmentPoint_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::EncodedIssuer{"DATA_270397925"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::EncodedIssuerLen{788996068}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::EncodedSecurityDesc{"DATA_273713609"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::EncodedSecurityDescLen{327733320}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::ExerciseStyle{1}, Instrument_75);
    FIX::Factor Factor_75;
    Factor_75.setString("20093255");
set_field(noSettlOblig_0_0, Factor_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::FlexProductEligibilityIndicator{false}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::FlexibleIndicator{true}, Instrument_75);
    FIX::FloorPrice FloorPrice_75;
    FloorPrice_75.setString("521877");
set_field(noSettlOblig_0_0, FloorPrice_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::FlowScheduleType{3}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::InstrRegistry{"STRING_2108088863"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_673018511"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::IssueDate{"LOCALMKTDATE_725292565"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::Issuer{"STRING_1990716626"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::ListMethod{1}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::LocaleOfIssue{"STRING_20936646"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::MaturityDate{"LOCALMKTDATE_1680035805"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1000577814"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::MaturityTime{"TZTIMEONLY_1432472362"}, Instrument_75);
    FIX::MinPriceIncrement MinPriceIncrement_75;
    MinPriceIncrement_75.setString("17826419");
set_field(noSettlOblig_0_0, MinPriceIncrement_75, Instrument_75);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_75;
    MinPriceIncrementAmount_75.setString("10292477");
set_field(noSettlOblig_0_0, MinPriceIncrementAmount_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::NTPositionLimit{789242160}, Instrument_75);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_75;
    NotionalPercentageOutstanding_75.setString("57.230000");
set_field(noSettlOblig_0_0, NotionalPercentageOutstanding_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::OptAttribute{'1'}, Instrument_75);
    FIX::OptPayoutAmount OptPayoutAmount_75;
    OptPayoutAmount_75.setString("12592742");
set_field(noSettlOblig_0_0, OptPayoutAmount_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::OptPayoutType{3}, Instrument_75);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_75;
    OriginalNotionalPercentageOutstanding_75.setString("31.630000");
set_field(noSettlOblig_0_0, OriginalNotionalPercentageOutstanding_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::Pool{"STRING_1448343263"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::PositionLimit{2093579856}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::PriceUnitOfMeasure{"STRING_1718741188"}, Instrument_75);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_75;
    PriceUnitOfMeasureQty_75.setString("7350922");
set_field(noSettlOblig_0_0, PriceUnitOfMeasureQty_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::Product{8}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::ProductComplex{"STRING_2046474509"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::PutOrCall{1}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::RedemptionDate{"LOCALMKTDATE_118166235"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::RepoCollateralSecurityType{"STRING_568653768"}, Instrument_75);
    FIX::RepurchaseRate RepurchaseRate_75;
    RepurchaseRate_75.setString("38.450000");
set_field(noSettlOblig_0_0, RepurchaseRate_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::RepurchaseTerm{170353994}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::RestructuringType{"STRING_MM"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::SecurityDesc{"STRING_395319061"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::SecurityExchange{"EXCHANGE_1798598978"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::SecurityGroup{"STRING_1160818149"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::SecurityID{"STRING_1120611626"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::SecurityIDSource{"STRING_8"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::SecuritySubType{"STRING_1141548272"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::SecurityType{"STRING_MPP"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::Seniority{"STRING_SD"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::SettlMethod{'P'}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::SettleOnOpenFlag{"STRING_809542408"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::StateOrProvinceOfIssue{"STRING_700858767"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::StrikeCurrency{"USD"}, Instrument_75);
    FIX::StrikeMultiplier StrikeMultiplier_75;
    StrikeMultiplier_75.setString("2659713");
set_field(noSettlOblig_0_0, StrikeMultiplier_75, Instrument_75);
    FIX::StrikePrice StrikePrice_75;
    StrikePrice_75.setString("3275697");
set_field(noSettlOblig_0_0, StrikePrice_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::StrikePriceBoundaryMethod{2}, Instrument_75);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_75;
    StrikePriceBoundaryPrecision_75.setString("8.760000");
set_field(noSettlOblig_0_0, StrikePriceBoundaryPrecision_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::StrikePriceDeterminationMethod{2}, Instrument_75);
    FIX::StrikeValue StrikeValue_75;
    StrikeValue_75.setString("3714512");
set_field(noSettlOblig_0_0, StrikeValue_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::Symbol{"STRING_80231641"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::TimeUnit{"STRING_Min"}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_75);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_75;
    UnitOfMeasureQty_75.setString("1700684");
set_field(noSettlOblig_0_0, UnitOfMeasureQty_75, Instrument_75);
    set_field(noSettlOblig_0_0, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_75);
    all_values.push_back(Instrument_75);
    all_compo_names.insert("...NoSettlOblig.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_154;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_154);
      FIX::ComplexEventPrice ComplexEventPrice_154;
      ComplexEventPrice_154.setString("6250762");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_154, ComplexEvents_NoComplexEvents_154);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_154);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_154;
      ComplexEventPriceBoundaryPrecision_154.setString("13.140000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_154, ComplexEvents_NoComplexEvents_154);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_154);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_154);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_154;
      ComplexOptPayoutAmount_154.setString("21207129");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_154, ComplexEvents_NoComplexEvents_154);
      all_values.push_back(ComplexEvents_NoComplexEvents_154);
      all_compo_names.insert("...NoSettlOblig....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_321;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 18, 10, 8, 12, 2017)}, ComplexEventDates_NoComplexEventDates_321);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 30, 58, 24, 7, 2009)}, ComplexEventDates_NoComplexEventDates_321);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_321);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_656;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 38, 2)}, ComplexEventTimes_NoComplexEventTimes_656);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 12, 21)}, ComplexEventTimes_NoComplexEventTimes_656);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_656);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_657;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 30, 26)}, ComplexEventTimes_NoComplexEventTimes_657);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 59, 7)}, ComplexEventTimes_NoComplexEventTimes_657);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_657);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_322;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 26, 33, 21, 6, 2001)}, ComplexEventDates_NoComplexEventDates_322);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 25, 11, 8, 8, 2002)}, ComplexEventDates_NoComplexEventDates_322);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_322);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_658;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 31, 32)}, ComplexEventTimes_NoComplexEventTimes_658);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 36, 55)}, ComplexEventTimes_NoComplexEventTimes_658);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_658);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_659;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 25, 14)}, ComplexEventTimes_NoComplexEventTimes_659);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 13, 35)}, ComplexEventTimes_NoComplexEventTimes_659);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_659);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_660;
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 53, 53)}, ComplexEventTimes_NoComplexEventTimes_660);
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 48, 12)}, ComplexEventTimes_NoComplexEventTimes_660);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_660);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noSettlOblig_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_151;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1162118533"}, EvntGrp_NoEvents_151);
      FIX::EventPx EventPx_151;
      EventPx_151.setString("11046905");
set_field(noEvents_0_1_0, EventPx_151, EvntGrp_NoEvents_151);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_927248146"}, EvntGrp_NoEvents_151);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(1, 39, 6, 27, 3, 2002)}, EvntGrp_NoEvents_151);
      set_field(noEvents_0_1_0, FIX::EventType{18}, EvntGrp_NoEvents_151);
      all_values.push_back(EvntGrp_NoEvents_151);
      all_compo_names.insert("...NoSettlOblig....NoEvents");

      noSettlOblig_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_152;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_1932340839"}, EvntGrp_NoEvents_152);
      FIX::EventPx EventPx_152;
      EventPx_152.setString("21322795");
set_field(noEvents_0_1_1, EventPx_152, EvntGrp_NoEvents_152);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_1767991272"}, EvntGrp_NoEvents_152);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(11, 29, 26, 19, 11, 2010)}, EvntGrp_NoEvents_152);
      set_field(noEvents_0_1_1, FIX::EventType{7}, EvntGrp_NoEvents_152);
      all_values.push_back(EvntGrp_NoEvents_152);
      all_compo_names.insert("...NoSettlOblig....NoEvents");

      noSettlOblig_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_143;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_631361082"}, InstrumentParties_NoInstrumentParties_143);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_143);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{635476067}, InstrumentParties_NoInstrumentParties_143);
      all_values.push_back(InstrumentParties_NoInstrumentParties_143);
      all_compo_names.insert("...NoSettlOblig....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_1444354018"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1164756276}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noSettlOblig_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_146;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_1602783645"}, SecAltIDGrp_NoSecurityAltID_146);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_179391161"}, SecAltIDGrp_NoSecurityAltID_146);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_146);
      all_compo_names.insert("...NoSettlOblig....NoSecurityAltID");

      noSettlOblig_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_150;
    set_field(noSettlOblig_0_0, FIX::SecurityXML{"XMLDATA_63966780"}, SecurityXML_150);
    set_field(noSettlOblig_0_0, FIX::SecurityXMLLen{382548143}, SecurityXML_150);
    set_field(noSettlOblig_0_0, FIX::SecurityXMLSchema{"STRING_549908958"}, SecurityXML_150);
    all_values.push_back(SecurityXML_150);
    all_compo_names.insert("...NoSettlOblig..");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_131;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_1638018423"}, Parties_NoPartyIDs_131);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_131);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{13}, Parties_NoPartyIDs_131);
      all_values.push_back(Parties_NoPartyIDs_131);
      all_compo_names.insert("...NoSettlOblig...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_273;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_318319615"}, PtysSubGrp_NoPartySubIDs_273);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_273);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_273);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_274;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_1525031557"}, PtysSubGrp_NoPartySubIDs_274);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_274);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_274);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_275;
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubID{"STRING_1304453821"}, PtysSubGrp_NoPartySubIDs_275);
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_275);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_275);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSettlOblig_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_132;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_958637172"}, Parties_NoPartyIDs_132);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_132);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{77}, Parties_NoPartyIDs_132);
      all_values.push_back(Parties_NoPartyIDs_132);
      all_compo_names.insert("...NoSettlOblig...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_276;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_1046817116"}, PtysSubGrp_NoPartySubIDs_276);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_276);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_276);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_277;
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubID{"STRING_1150784630"}, PtysSubGrp_NoPartySubIDs_277);
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_277);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_277);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noSettlOblig_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_0;
      set_field(noSettlDetails_0_1_0, FIX::SettlObligSource{'3'}, SettlDetails_NoSettlDetails_0);
      all_values.push_back(SettlDetails_NoSettlDetails_0);
      all_compo_names.insert("...NoSettlOblig...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_39;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_985544282"}, SettlParties_NoSettlPartyIDs_39);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_39);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{813176286}, SettlParties_NoSettlPartyIDs_39);
        all_values.push_back(SettlParties_NoSettlPartyIDs_39);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_81;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_622261937"}, SettlPtysSubGrp_NoSettlPartySubIDs_81);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{992567447}, SettlPtysSubGrp_NoSettlPartySubIDs_81);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_81);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_82;
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubID{"STRING_8787279"}, SettlPtysSubGrp_NoSettlPartySubIDs_82);
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubIDType{1004810081}, SettlPtysSubGrp_NoSettlPartySubIDs_82);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_82);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_83;
          set_field(noSettlPartySubIDs_0_0_0_3_2, FIX::SettlPartySubID{"STRING_1542476405"}, SettlPtysSubGrp_NoSettlPartySubIDs_83);
          set_field(noSettlPartySubIDs_0_0_0_3_2, FIX::SettlPartySubIDType{1917613372}, SettlPtysSubGrp_NoSettlPartySubIDs_83);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_83);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_2);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_40;
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyID{"STRING_495344856"}, SettlParties_NoSettlPartyIDs_40);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyIDSource{'3'}, SettlParties_NoSettlPartyIDs_40);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyRole{1881796413}, SettlParties_NoSettlPartyIDs_40);
        all_values.push_back(SettlParties_NoSettlPartyIDs_40);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_84;
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubID{"STRING_645414617"}, SettlPtysSubGrp_NoSettlPartySubIDs_84);
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubIDType{1418258962}, SettlPtysSubGrp_NoSettlPartySubIDs_84);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_84);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_41;
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyID{"STRING_1613067130"}, SettlParties_NoSettlPartyIDs_41);
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyIDSource{'9'}, SettlParties_NoSettlPartyIDs_41);
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyRole{575229136}, SettlParties_NoSettlPartyIDs_41);
        all_values.push_back(SettlParties_NoSettlPartyIDs_41);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_85;
          set_field(noSettlPartySubIDs_0_0_2_3_0, FIX::SettlPartySubID{"STRING_1907167351"}, SettlPtysSubGrp_NoSettlPartySubIDs_85);
          set_field(noSettlPartySubIDs_0_0_2_3_0, FIX::SettlPartySubIDType{234855458}, SettlPtysSubGrp_NoSettlPartySubIDs_85);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_85);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_86;
          set_field(noSettlPartySubIDs_0_0_2_3_1, FIX::SettlPartySubID{"STRING_215179087"}, SettlPtysSubGrp_NoSettlPartySubIDs_86);
          set_field(noSettlPartySubIDs_0_0_2_3_1, FIX::SettlPartySubIDType{245423166}, SettlPtysSubGrp_NoSettlPartySubIDs_86);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_86);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_87;
          set_field(noSettlPartySubIDs_0_0_2_3_2, FIX::SettlPartySubID{"STRING_1281672575"}, SettlPtysSubGrp_NoSettlPartySubIDs_87);
          set_field(noSettlPartySubIDs_0_0_2_3_2, FIX::SettlPartySubIDType{392733474}, SettlPtysSubGrp_NoSettlPartySubIDs_87);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_87);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_2);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_2);
      }
      noSettlOblig_0_0.addGroup(noSettlDetails_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_0_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_1;
      set_field(noSettlDetails_0_1_1, FIX::SettlObligSource{'3'}, SettlDetails_NoSettlDetails_1);
      all_values.push_back(SettlDetails_NoSettlDetails_1);
      all_compo_names.insert("...NoSettlOblig...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_42;
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyID{"STRING_1201648944"}, SettlParties_NoSettlPartyIDs_42);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_42);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyRole{2090520175}, SettlParties_NoSettlPartyIDs_42);
        all_values.push_back(SettlParties_NoSettlPartyIDs_42);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_88;
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubID{"STRING_138294011"}, SettlPtysSubGrp_NoSettlPartySubIDs_88);
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubIDType{756212813}, SettlPtysSubGrp_NoSettlPartySubIDs_88);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_88);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_43;
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyID{"STRING_2132013726"}, SettlParties_NoSettlPartyIDs_43);
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyIDSource{'7'}, SettlParties_NoSettlPartyIDs_43);
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyRole{1748780261}, SettlParties_NoSettlPartyIDs_43);
        all_values.push_back(SettlParties_NoSettlPartyIDs_43);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_89;
          set_field(noSettlPartySubIDs_0_1_1_3_0, FIX::SettlPartySubID{"STRING_1765366029"}, SettlPtysSubGrp_NoSettlPartySubIDs_89);
          set_field(noSettlPartySubIDs_0_1_1_3_0, FIX::SettlPartySubIDType{1143773018}, SettlPtysSubGrp_NoSettlPartySubIDs_89);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_89);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_44;
        set_field(noSettlPartyIDs_0_1_2_2, FIX::SettlPartyID{"STRING_1910930730"}, SettlParties_NoSettlPartyIDs_44);
        set_field(noSettlPartyIDs_0_1_2_2, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_44);
        set_field(noSettlPartyIDs_0_1_2_2, FIX::SettlPartyRole{1470868020}, SettlParties_NoSettlPartyIDs_44);
        all_values.push_back(SettlParties_NoSettlPartyIDs_44);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_90;
          set_field(noSettlPartySubIDs_0_1_2_3_0, FIX::SettlPartySubID{"STRING_201262811"}, SettlPtysSubGrp_NoSettlPartySubIDs_90);
          set_field(noSettlPartySubIDs_0_1_2_3_0, FIX::SettlPartySubIDType{2116282637}, SettlPtysSubGrp_NoSettlPartySubIDs_90);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_90);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_91;
          set_field(noSettlPartySubIDs_0_1_2_3_1, FIX::SettlPartySubID{"STRING_916018809"}, SettlPtysSubGrp_NoSettlPartySubIDs_91);
          set_field(noSettlPartySubIDs_0_1_2_3_1, FIX::SettlPartySubIDType{1814329941}, SettlPtysSubGrp_NoSettlPartySubIDs_91);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_91);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_2.addGroup(noSettlPartySubIDs_0_1_2_3_1);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_2);
      }
      noSettlOblig_0_0.addGroup(noSettlDetails_0_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_0_1_2;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_2;
      set_field(noSettlDetails_0_1_2, FIX::SettlObligSource{'2'}, SettlDetails_NoSettlDetails_2);
      all_values.push_back(SettlDetails_NoSettlDetails_2);
      all_compo_names.insert("...NoSettlOblig...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_45;
        set_field(noSettlPartyIDs_0_2_2_0, FIX::SettlPartyID{"STRING_1565817613"}, SettlParties_NoSettlPartyIDs_45);
        set_field(noSettlPartyIDs_0_2_2_0, FIX::SettlPartyIDSource{'6'}, SettlParties_NoSettlPartyIDs_45);
        set_field(noSettlPartyIDs_0_2_2_0, FIX::SettlPartyRole{1726103404}, SettlParties_NoSettlPartyIDs_45);
        all_values.push_back(SettlParties_NoSettlPartyIDs_45);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_92;
          set_field(noSettlPartySubIDs_0_2_0_3_0, FIX::SettlPartySubID{"STRING_922436037"}, SettlPtysSubGrp_NoSettlPartySubIDs_92);
          set_field(noSettlPartySubIDs_0_2_0_3_0, FIX::SettlPartySubIDType{860292331}, SettlPtysSubGrp_NoSettlPartySubIDs_92);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_92);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_93;
          set_field(noSettlPartySubIDs_0_2_0_3_1, FIX::SettlPartySubID{"STRING_26246526"}, SettlPtysSubGrp_NoSettlPartySubIDs_93);
          set_field(noSettlPartySubIDs_0_2_0_3_1, FIX::SettlPartySubIDType{171160186}, SettlPtysSubGrp_NoSettlPartySubIDs_93);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_93);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_94;
          set_field(noSettlPartySubIDs_0_2_0_3_2, FIX::SettlPartySubID{"STRING_1154908848"}, SettlPtysSubGrp_NoSettlPartySubIDs_94);
          set_field(noSettlPartySubIDs_0_2_0_3_2, FIX::SettlPartySubIDType{1227895470}, SettlPtysSubGrp_NoSettlPartySubIDs_94);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_94);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_2);
        }
        noSettlDetails_0_1_2.addGroup(noSettlPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_46;
        set_field(noSettlPartyIDs_0_2_2_1, FIX::SettlPartyID{"STRING_1289975904"}, SettlParties_NoSettlPartyIDs_46);
        set_field(noSettlPartyIDs_0_2_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_46);
        set_field(noSettlPartyIDs_0_2_2_1, FIX::SettlPartyRole{1267605049}, SettlParties_NoSettlPartyIDs_46);
        all_values.push_back(SettlParties_NoSettlPartyIDs_46);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_95;
          set_field(noSettlPartySubIDs_0_2_1_3_0, FIX::SettlPartySubID{"STRING_1854158189"}, SettlPtysSubGrp_NoSettlPartySubIDs_95);
          set_field(noSettlPartySubIDs_0_2_1_3_0, FIX::SettlPartySubIDType{1252135127}, SettlPtysSubGrp_NoSettlPartySubIDs_95);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_95);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_1.addGroup(noSettlPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_96;
          set_field(noSettlPartySubIDs_0_2_1_3_1, FIX::SettlPartySubID{"STRING_41342216"}, SettlPtysSubGrp_NoSettlPartySubIDs_96);
          set_field(noSettlPartySubIDs_0_2_1_3_1, FIX::SettlPartySubIDType{1455454802}, SettlPtysSubGrp_NoSettlPartySubIDs_96);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_96);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_1.addGroup(noSettlPartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_97;
          set_field(noSettlPartySubIDs_0_2_1_3_2, FIX::SettlPartySubID{"STRING_1245452484"}, SettlPtysSubGrp_NoSettlPartySubIDs_97);
          set_field(noSettlPartySubIDs_0_2_1_3_2, FIX::SettlPartySubIDType{1806708245}, SettlPtysSubGrp_NoSettlPartySubIDs_97);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_97);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_1.addGroup(noSettlPartySubIDs_0_2_1_3_2);
        }
        noSettlDetails_0_1_2.addGroup(noSettlPartyIDs_0_2_2_1);
      }
      noSettlOblig_0_0.addGroup(noSettlDetails_0_1_2);
    }
    msg.addGroup(noSettlOblig_0_0);
  }
  {
    FIX50SP2::SettlementObligationReport::NoSettlOblig noSettlOblig_0_1;
    // SettlObligationInstructions.NoSettlOblig
    multiset<string> SettlObligationInstructions_NoSettlOblig_1;
    FIX::CcyAmt CcyAmt_1;
    CcyAmt_1.setString("4517441");
set_field(noSettlOblig_0_1, CcyAmt_1, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::Currency{"EUR"}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::EffectiveTime{FIX::UTCTIMESTAMP(21, 54, 43, 15, 8, 2009)}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::ExpireTime{FIX::UTCTIMESTAMP(0, 54, 56, 20, 8, 2015)}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(5, 8, 1, 10, 9, 2012)}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::NetGrossInd{2}, SettlObligationInstructions_NoSettlOblig_1);
    FIX::SettlCurrAmt SettlCurrAmt_8;
    SettlCurrAmt_8.setString("10173997");
set_field(noSettlOblig_0_1, SettlCurrAmt_8, SettlObligationInstructions_NoSettlOblig_1);
    FIX::SettlCurrFxRate SettlCurrFxRate_8;
    SettlCurrFxRate_8.setString("3188064");
set_field(noSettlOblig_0_1, SettlCurrFxRate_8, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::SettlCurrency{"USD"}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::SettlDate{"LOCALMKTDATE_1564258966"}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::SettlObligID{"STRING_555711135"}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::SettlObligRefID{"STRING_777115053"}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::SettlObligTransType{'C'}, SettlObligationInstructions_NoSettlOblig_1);
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_1);
    all_compo_names.insert("...NoSettlOblig");

    // Instrument
    multiset<string> Instrument_76;
    FIX::AttachmentPoint AttachmentPoint_76;
    AttachmentPoint_76.setString("29.700000");
set_field(noSettlOblig_0_1, AttachmentPoint_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::CFICode{"STRING_552243598"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::CPProgram{2}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::CPRegType{"STRING_301877616"}, Instrument_76);
    FIX::CapPrice CapPrice_76;
    CapPrice_76.setString("2961711");
set_field(noSettlOblig_0_1, CapPrice_76, Instrument_76);
    FIX::ContractMultiplier ContractMultiplier_76;
    ContractMultiplier_76.setString("2075288");
set_field(noSettlOblig_0_1, ContractMultiplier_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::ContractMultiplierUnit{1}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::ContractSettlMonth{"MONTHYEAR_957427836"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::CountryOfIssue{"COUNTRY_973971393"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1148817108"}, Instrument_76);
    FIX::CouponRate CouponRate_76;
    CouponRate_76.setString("37.620000");
set_field(noSettlOblig_0_1, CouponRate_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::CreditRating{"STRING_1319033670"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::DatedDate{"LOCALMKTDATE_1988708712"}, Instrument_76);
    FIX::DetachmentPoint DetachmentPoint_76;
    DetachmentPoint_76.setString("57.260000");
set_field(noSettlOblig_0_1, DetachmentPoint_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::EncodedIssuer{"DATA_376904629"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::EncodedIssuerLen{707363195}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::EncodedSecurityDesc{"DATA_545817875"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::EncodedSecurityDescLen{589684437}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::ExerciseStyle{2}, Instrument_76);
    FIX::Factor Factor_76;
    Factor_76.setString("21201759");
set_field(noSettlOblig_0_1, Factor_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::FlexibleIndicator{false}, Instrument_76);
    FIX::FloorPrice FloorPrice_76;
    FloorPrice_76.setString("8278366");
set_field(noSettlOblig_0_1, FloorPrice_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::FlowScheduleType{4}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::InstrRegistry{"STRING_39390985"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_1095696579"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::IssueDate{"LOCALMKTDATE_1603649951"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::Issuer{"STRING_132550627"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::ListMethod{0}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::LocaleOfIssue{"STRING_2029324835"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::MaturityDate{"LOCALMKTDATE_460713597"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::MaturityMonthYear{"MONTHYEAR_277571582"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::MaturityTime{"TZTIMEONLY_814175485"}, Instrument_76);
    FIX::MinPriceIncrement MinPriceIncrement_76;
    MinPriceIncrement_76.setString("7625912");
set_field(noSettlOblig_0_1, MinPriceIncrement_76, Instrument_76);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_76;
    MinPriceIncrementAmount_76.setString("5737427");
set_field(noSettlOblig_0_1, MinPriceIncrementAmount_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::NTPositionLimit{1021704358}, Instrument_76);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_76;
    NotionalPercentageOutstanding_76.setString("97.690000");
set_field(noSettlOblig_0_1, NotionalPercentageOutstanding_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::OptAttribute{'1'}, Instrument_76);
    FIX::OptPayoutAmount OptPayoutAmount_76;
    OptPayoutAmount_76.setString("19956757");
set_field(noSettlOblig_0_1, OptPayoutAmount_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::OptPayoutType{1}, Instrument_76);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_76;
    OriginalNotionalPercentageOutstanding_76.setString("43.150000");
set_field(noSettlOblig_0_1, OriginalNotionalPercentageOutstanding_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::Pool{"STRING_1167225774"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::PositionLimit{1695071941}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::PriceUnitOfMeasure{"STRING_1544130403"}, Instrument_76);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_76;
    PriceUnitOfMeasureQty_76.setString("2549514");
set_field(noSettlOblig_0_1, PriceUnitOfMeasureQty_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::Product{12}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::ProductComplex{"STRING_2133814841"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::PutOrCall{0}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::RedemptionDate{"LOCALMKTDATE_311846550"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::RepoCollateralSecurityType{"STRING_1886740814"}, Instrument_76);
    FIX::RepurchaseRate RepurchaseRate_76;
    RepurchaseRate_76.setString("91.410000");
set_field(noSettlOblig_0_1, RepurchaseRate_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::RepurchaseTerm{1139683153}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::RestructuringType{"STRING_MR"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::SecurityDesc{"STRING_668840126"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::SecurityExchange{"EXCHANGE_716522645"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::SecurityGroup{"STRING_1605279444"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::SecurityID{"STRING_125006429"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::SecurityIDSource{"STRING_G"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::SecurityStatus{"STRING_1"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::SecuritySubType{"STRING_6847617"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::SecurityType{"STRING_MIO"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::Seniority{"STRING_SR"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::SettlMethod{'C'}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::SettleOnOpenFlag{"STRING_2072378084"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::StateOrProvinceOfIssue{"STRING_34438079"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::StrikeCurrency{"CHF"}, Instrument_76);
    FIX::StrikeMultiplier StrikeMultiplier_76;
    StrikeMultiplier_76.setString("15656086");
set_field(noSettlOblig_0_1, StrikeMultiplier_76, Instrument_76);
    FIX::StrikePrice StrikePrice_76;
    StrikePrice_76.setString("16909195");
set_field(noSettlOblig_0_1, StrikePrice_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::StrikePriceBoundaryMethod{5}, Instrument_76);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_76;
    StrikePriceBoundaryPrecision_76.setString("92.980000");
set_field(noSettlOblig_0_1, StrikePriceBoundaryPrecision_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::StrikePriceDeterminationMethod{4}, Instrument_76);
    FIX::StrikeValue StrikeValue_76;
    StrikeValue_76.setString("20313593");
set_field(noSettlOblig_0_1, StrikeValue_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::Symbol{"STRING_890845691"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::TimeUnit{"STRING_D"}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_76);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_76;
    UnitOfMeasureQty_76.setString("10476918");
set_field(noSettlOblig_0_1, UnitOfMeasureQty_76, Instrument_76);
    set_field(noSettlOblig_0_1, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_76);
    all_values.push_back(Instrument_76);
    all_compo_names.insert("...NoSettlOblig.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_155;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_155);
      FIX::ComplexEventPrice ComplexEventPrice_155;
      ComplexEventPrice_155.setString("5340460");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_155, ComplexEvents_NoComplexEvents_155);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_155);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_155;
      ComplexEventPriceBoundaryPrecision_155.setString("74.740000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_155, ComplexEvents_NoComplexEvents_155);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_155);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_155);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_155;
      ComplexOptPayoutAmount_155.setString("3235039");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_155, ComplexEvents_NoComplexEvents_155);
      all_values.push_back(ComplexEvents_NoComplexEvents_155);
      all_compo_names.insert("...NoSettlOblig....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_323;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 16, 39, 7, 5, 2008)}, ComplexEventDates_NoComplexEventDates_323);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 42, 53, 7, 9, 2006)}, ComplexEventDates_NoComplexEventDates_323);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_323);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_661;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 27, 44)}, ComplexEventTimes_NoComplexEventTimes_661);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 26, 56)}, ComplexEventTimes_NoComplexEventTimes_661);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_661);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_662;
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 28, 24)}, ComplexEventTimes_NoComplexEventTimes_662);
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 8, 19)}, ComplexEventTimes_NoComplexEventTimes_662);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_662);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_663;
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 35, 4)}, ComplexEventTimes_NoComplexEventTimes_663);
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 42, 1)}, ComplexEventTimes_NoComplexEventTimes_663);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_663);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_324;
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 54, 51, 17, 12, 2011)}, ComplexEventDates_NoComplexEventDates_324);
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 56, 45, 20, 11, 2011)}, ComplexEventDates_NoComplexEventDates_324);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_324);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_664;
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 1, 35)}, ComplexEventTimes_NoComplexEventTimes_664);
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 43, 56)}, ComplexEventTimes_NoComplexEventTimes_664);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_664);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      noSettlOblig_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_153;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_768853224"}, EvntGrp_NoEvents_153);
      FIX::EventPx EventPx_153;
      EventPx_153.setString("3802544");
set_field(noEvents_1_1_0, EventPx_153, EvntGrp_NoEvents_153);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_1720932997"}, EvntGrp_NoEvents_153);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(18, 12, 2, 2, 5, 2014)}, EvntGrp_NoEvents_153);
      set_field(noEvents_1_1_0, FIX::EventType{2}, EvntGrp_NoEvents_153);
      all_values.push_back(EvntGrp_NoEvents_153);
      all_compo_names.insert("...NoSettlOblig....NoEvents");

      noSettlOblig_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_144;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_594536759"}, InstrumentParties_NoInstrumentParties_144);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_144);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{1344975966}, InstrumentParties_NoInstrumentParties_144);
      all_values.push_back(InstrumentParties_NoInstrumentParties_144);
      all_compo_names.insert("...NoSettlOblig....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_881064451"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{714135823}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noSettlOblig_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_145;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_1320820158"}, InstrumentParties_NoInstrumentParties_145);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_145);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{592671166}, InstrumentParties_NoInstrumentParties_145);
      all_values.push_back(InstrumentParties_NoInstrumentParties_145);
      all_compo_names.insert("...NoSettlOblig....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_1476180233"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{1514628010}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      noSettlOblig_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_146;
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyID{"STRING_652479224"}, InstrumentParties_NoInstrumentParties_146);
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_146);
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyRole{435607720}, InstrumentParties_NoInstrumentParties_146);
      all_values.push_back(InstrumentParties_NoInstrumentParties_146);
      all_compo_names.insert("...NoSettlOblig....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297;
        set_field(noInstrumentPartySubIDs_1_2_2_0, FIX::InstrumentPartySubID{"STRING_1117803964"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297);
        set_field(noInstrumentPartySubIDs_1_2_2_0, FIX::InstrumentPartySubIDType{1602735876}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298;
        set_field(noInstrumentPartySubIDs_1_2_2_1, FIX::InstrumentPartySubID{"STRING_2129042726"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298);
        set_field(noInstrumentPartySubIDs_1_2_2_1, FIX::InstrumentPartySubIDType{1886657188}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299;
        set_field(noInstrumentPartySubIDs_1_2_2_2, FIX::InstrumentPartySubID{"STRING_1982990340"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299);
        set_field(noInstrumentPartySubIDs_1_2_2_2, FIX::InstrumentPartySubIDType{1702492076}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_2);
      }
      noSettlOblig_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_147;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_615727054"}, SecAltIDGrp_NoSecurityAltID_147);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_606767700"}, SecAltIDGrp_NoSecurityAltID_147);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_147);
      all_compo_names.insert("...NoSettlOblig....NoSecurityAltID");

      noSettlOblig_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_148;
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltID{"STRING_1361605591"}, SecAltIDGrp_NoSecurityAltID_148);
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltIDSource{"STRING_1465193465"}, SecAltIDGrp_NoSecurityAltID_148);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_148);
      all_compo_names.insert("...NoSettlOblig....NoSecurityAltID");

      noSettlOblig_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_149;
      set_field(noSecurityAltID_1_1_2, FIX::SecurityAltID{"STRING_1033494568"}, SecAltIDGrp_NoSecurityAltID_149);
      set_field(noSecurityAltID_1_1_2, FIX::SecurityAltIDSource{"STRING_1304373560"}, SecAltIDGrp_NoSecurityAltID_149);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_149);
      all_compo_names.insert("...NoSettlOblig....NoSecurityAltID");

      noSettlOblig_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_152;
    set_field(noSettlOblig_0_1, FIX::SecurityXML{"XMLDATA_241989858"}, SecurityXML_152);
    set_field(noSettlOblig_0_1, FIX::SecurityXMLLen{1976839654}, SecurityXML_152);
    set_field(noSettlOblig_0_1, FIX::SecurityXMLSchema{"STRING_1898910319"}, SecurityXML_152);
    all_values.push_back(SecurityXML_152);
    all_compo_names.insert("...NoSettlOblig..");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_133;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_1174331972"}, Parties_NoPartyIDs_133);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_133);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{35}, Parties_NoPartyIDs_133);
      all_values.push_back(Parties_NoPartyIDs_133);
      all_compo_names.insert("...NoSettlOblig...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_278;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_1379093223"}, PtysSubGrp_NoPartySubIDs_278);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_278);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_278);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_279;
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubID{"STRING_333655314"}, PtysSubGrp_NoPartySubIDs_279);
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_279);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_279);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noSettlOblig_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_134;
      set_field(noPartyIDs_1_1_1, FIX::PartyID{"STRING_1142358531"}, Parties_NoPartyIDs_134);
      set_field(noPartyIDs_1_1_1, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_134);
      set_field(noPartyIDs_1_1_1, FIX::PartyRole{68}, Parties_NoPartyIDs_134);
      all_values.push_back(Parties_NoPartyIDs_134);
      all_compo_names.insert("...NoSettlOblig...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_280;
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubID{"STRING_136407397"}, PtysSubGrp_NoPartySubIDs_280);
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_280);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_280);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      noSettlOblig_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_1_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_3;
      set_field(noSettlDetails_1_1_0, FIX::SettlObligSource{'2'}, SettlDetails_NoSettlDetails_3);
      all_values.push_back(SettlDetails_NoSettlDetails_3);
      all_compo_names.insert("...NoSettlOblig...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_47;
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyID{"STRING_1658775756"}, SettlParties_NoSettlPartyIDs_47);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_47);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyRole{2002930829}, SettlParties_NoSettlPartyIDs_47);
        all_values.push_back(SettlParties_NoSettlPartyIDs_47);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_98;
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubID{"STRING_42893372"}, SettlPtysSubGrp_NoSettlPartySubIDs_98);
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubIDType{462214881}, SettlPtysSubGrp_NoSettlPartySubIDs_98);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_98);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_99;
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubID{"STRING_1842788069"}, SettlPtysSubGrp_NoSettlPartySubIDs_99);
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubIDType{1508086837}, SettlPtysSubGrp_NoSettlPartySubIDs_99);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_99);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      noSettlOblig_0_1.addGroup(noSettlDetails_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_1_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_4;
      set_field(noSettlDetails_1_1_1, FIX::SettlObligSource{'3'}, SettlDetails_NoSettlDetails_4);
      all_values.push_back(SettlDetails_NoSettlDetails_4);
      all_compo_names.insert("...NoSettlOblig...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_48;
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyID{"STRING_1750076695"}, SettlParties_NoSettlPartyIDs_48);
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_48);
        set_field(noSettlPartyIDs_1_1_2_0, FIX::SettlPartyRole{751104653}, SettlParties_NoSettlPartyIDs_48);
        all_values.push_back(SettlParties_NoSettlPartyIDs_48);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_100;
          set_field(noSettlPartySubIDs_1_1_0_3_0, FIX::SettlPartySubID{"STRING_351913780"}, SettlPtysSubGrp_NoSettlPartySubIDs_100);
          set_field(noSettlPartySubIDs_1_1_0_3_0, FIX::SettlPartySubIDType{809377718}, SettlPtysSubGrp_NoSettlPartySubIDs_100);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_100);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_101;
          set_field(noSettlPartySubIDs_1_1_0_3_1, FIX::SettlPartySubID{"STRING_597227534"}, SettlPtysSubGrp_NoSettlPartySubIDs_101);
          set_field(noSettlPartySubIDs_1_1_0_3_1, FIX::SettlPartySubIDType{92897928}, SettlPtysSubGrp_NoSettlPartySubIDs_101);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_101);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_0.addGroup(noSettlPartySubIDs_1_1_0_3_1);
        }
        noSettlDetails_1_1_1.addGroup(noSettlPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_49;
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyID{"STRING_40987293"}, SettlParties_NoSettlPartyIDs_49);
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_49);
        set_field(noSettlPartyIDs_1_1_2_1, FIX::SettlPartyRole{426553243}, SettlParties_NoSettlPartyIDs_49);
        all_values.push_back(SettlParties_NoSettlPartyIDs_49);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_102;
          set_field(noSettlPartySubIDs_1_1_1_3_0, FIX::SettlPartySubID{"STRING_1405764364"}, SettlPtysSubGrp_NoSettlPartySubIDs_102);
          set_field(noSettlPartySubIDs_1_1_1_3_0, FIX::SettlPartySubIDType{127352920}, SettlPtysSubGrp_NoSettlPartySubIDs_102);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_102);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_103;
          set_field(noSettlPartySubIDs_1_1_1_3_1, FIX::SettlPartySubID{"STRING_1800428089"}, SettlPtysSubGrp_NoSettlPartySubIDs_103);
          set_field(noSettlPartySubIDs_1_1_1_3_1, FIX::SettlPartySubIDType{60078968}, SettlPtysSubGrp_NoSettlPartySubIDs_103);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_103);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_1.addGroup(noSettlPartySubIDs_1_1_1_3_1);
        }
        noSettlDetails_1_1_1.addGroup(noSettlPartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_1_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_50;
        set_field(noSettlPartyIDs_1_1_2_2, FIX::SettlPartyID{"STRING_263760317"}, SettlParties_NoSettlPartyIDs_50);
        set_field(noSettlPartyIDs_1_1_2_2, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_50);
        set_field(noSettlPartyIDs_1_1_2_2, FIX::SettlPartyRole{1979681184}, SettlParties_NoSettlPartyIDs_50);
        all_values.push_back(SettlParties_NoSettlPartyIDs_50);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_104;
          set_field(noSettlPartySubIDs_1_1_2_3_0, FIX::SettlPartySubID{"STRING_272262869"}, SettlPtysSubGrp_NoSettlPartySubIDs_104);
          set_field(noSettlPartySubIDs_1_1_2_3_0, FIX::SettlPartySubIDType{1490973292}, SettlPtysSubGrp_NoSettlPartySubIDs_104);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_104);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_1_2_2.addGroup(noSettlPartySubIDs_1_1_2_3_0);
        }
        noSettlDetails_1_1_1.addGroup(noSettlPartyIDs_1_1_2_2);
      }
      noSettlOblig_0_1.addGroup(noSettlDetails_1_1_1);
    }
    msg.addGroup(noSettlOblig_0_1);
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
