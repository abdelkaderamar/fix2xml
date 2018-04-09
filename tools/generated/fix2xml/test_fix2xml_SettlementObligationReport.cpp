#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::SettlementObligationReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementObligationReport_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_2061969667"}, SettlementObligationReport_0);
  set_field(msg, FIX::EncodedText{"DATA_740987164"}, SettlementObligationReport_0);
  set_field(msg, FIX::EncodedTextLen{1513153844}, SettlementObligationReport_0);
  set_field(msg, FIX::SettlObligMode{1}, SettlementObligationReport_0);
  set_field(msg, FIX::SettlObligMsgID{"STRING_146946137"}, SettlementObligationReport_0);
  set_field(msg, FIX::SettlementCycleNo{920175753}, SettlementObligationReport_0);
  set_field(msg, FIX::Text{"STRING_1845137653"}, SettlementObligationReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(20, 45, 53, 16, 6, 2011)}, SettlementObligationReport_0);
  all_values.push_back(SettlementObligationReport_0);

  all_compo_names.insert("SettlementObligationReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_18;
  set_field(msg, FIX::ApplID{"STRING_1687935720"}, ApplicationSequenceControl_18);
  set_field(msg, FIX::ApplLastSeqNum{644198332}, ApplicationSequenceControl_18);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_18);
  set_field(msg, FIX::ApplSeqNum{525653099}, ApplicationSequenceControl_18);
  all_values.push_back(ApplicationSequenceControl_18);
  all_compo_names.insert(".");

  // SettlObligationInstructions
  // Group SettlObligationInstructions.NoSettlOblig
  {
    FIX50SP2::SettlementObligationReport::NoSettlOblig noSettlOblig_0_0;
    // SettlObligationInstructions.NoSettlOblig
    multiset<string> SettlObligationInstructions_NoSettlOblig_0;
    FIX::CcyAmt CcyAmt_0;
    CcyAmt_0.setString("3809748");
set_field(noSettlOblig_0_0, CcyAmt_0, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::Currency{"JPY"}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::EffectiveTime{FIX::UTCTIMESTAMP(9, 58, 16, 11, 1, 2012)}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(16, 35, 6, 8, 8, 2012)}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(0, 45, 26, 17, 3, 2016)}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::NetGrossInd{1}, SettlObligationInstructions_NoSettlOblig_0);
    FIX::SettlCurrAmt SettlCurrAmt_10;
    SettlCurrAmt_10.setString("11627711");
set_field(noSettlOblig_0_0, SettlCurrAmt_10, SettlObligationInstructions_NoSettlOblig_0);
    FIX::SettlCurrFxRate SettlCurrFxRate_10;
    SettlCurrFxRate_10.setString("10919347");
set_field(noSettlOblig_0_0, SettlCurrFxRate_10, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::SettlCurrency{"CAN"}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::SettlDate{"LOCALMKTDATE_1617587810"}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::SettlObligID{"STRING_405229554"}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::SettlObligRefID{"STRING_1701381231"}, SettlObligationInstructions_NoSettlOblig_0);
    set_field(noSettlOblig_0_0, FIX::SettlObligTransType{'R'}, SettlObligationInstructions_NoSettlOblig_0);
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_0);
    all_compo_names.insert("...NoSettlOblig");

    // Instrument
    multiset<string> Instrument_89;
    FIX::AttachmentPoint AttachmentPoint_89;
    AttachmentPoint_89.setString("80.200000");
set_field(noSettlOblig_0_0, AttachmentPoint_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::CFICode{"STRING_1531286369"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::CPProgram{2}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::CPRegType{"STRING_1439069438"}, Instrument_89);
    FIX::CapPrice CapPrice_89;
    CapPrice_89.setString("6933631");
set_field(noSettlOblig_0_0, CapPrice_89, Instrument_89);
    FIX::ContractMultiplier ContractMultiplier_89;
    ContractMultiplier_89.setString("16877832");
set_field(noSettlOblig_0_0, ContractMultiplier_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::ContractMultiplierUnit{2}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::ContractSettlMonth{"MONTHYEAR_128553246"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::CountryOfIssue{"COUNTRY_1228464742"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1927539946"}, Instrument_89);
    FIX::CouponRate CouponRate_89;
    CouponRate_89.setString("30.020000");
set_field(noSettlOblig_0_0, CouponRate_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::CreditRating{"STRING_1510133428"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::DatedDate{"LOCALMKTDATE_1174781359"}, Instrument_89);
    FIX::DetachmentPoint DetachmentPoint_89;
    DetachmentPoint_89.setString("39.410000");
set_field(noSettlOblig_0_0, DetachmentPoint_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::EncodedIssuer{"DATA_1938748252"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::EncodedIssuerLen{1342198524}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::EncodedSecurityDesc{"DATA_177768886"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::EncodedSecurityDescLen{675745949}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::ExerciseStyle{0}, Instrument_89);
    FIX::Factor Factor_89;
    Factor_89.setString("13870320");
set_field(noSettlOblig_0_0, Factor_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::FlexibleIndicator{false}, Instrument_89);
    FIX::FloorPrice FloorPrice_89;
    FloorPrice_89.setString("13002984");
set_field(noSettlOblig_0_0, FloorPrice_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::FlowScheduleType{2}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::InstrRegistry{"STRING_1695969804"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_2121737923"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::IssueDate{"LOCALMKTDATE_1166073966"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::Issuer{"STRING_115509119"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::ListMethod{0}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::LocaleOfIssue{"STRING_420940337"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::MaturityDate{"LOCALMKTDATE_999527139"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1059438228"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::MaturityTime{"TZTIMEONLY_1951721637"}, Instrument_89);
    FIX::MinPriceIncrement MinPriceIncrement_89;
    MinPriceIncrement_89.setString("2911129");
set_field(noSettlOblig_0_0, MinPriceIncrement_89, Instrument_89);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_89;
    MinPriceIncrementAmount_89.setString("17528013");
set_field(noSettlOblig_0_0, MinPriceIncrementAmount_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::NTPositionLimit{1492021208}, Instrument_89);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_89;
    NotionalPercentageOutstanding_89.setString("80.120000");
set_field(noSettlOblig_0_0, NotionalPercentageOutstanding_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::OptAttribute{'1'}, Instrument_89);
    FIX::OptPayoutAmount OptPayoutAmount_89;
    OptPayoutAmount_89.setString("5730023");
set_field(noSettlOblig_0_0, OptPayoutAmount_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::OptPayoutType{1}, Instrument_89);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_89;
    OriginalNotionalPercentageOutstanding_89.setString("39.860000");
set_field(noSettlOblig_0_0, OriginalNotionalPercentageOutstanding_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::Pool{"STRING_2083135731"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::PositionLimit{1144435670}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::PriceUnitOfMeasure{"STRING_1874400335"}, Instrument_89);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_89;
    PriceUnitOfMeasureQty_89.setString("3391505");
set_field(noSettlOblig_0_0, PriceUnitOfMeasureQty_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::Product{8}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::ProductComplex{"STRING_402662637"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::PutOrCall{1}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::RedemptionDate{"LOCALMKTDATE_1829815201"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::RepoCollateralSecurityType{"STRING_41223057"}, Instrument_89);
    FIX::RepurchaseRate RepurchaseRate_89;
    RepurchaseRate_89.setString("17.420000");
set_field(noSettlOblig_0_0, RepurchaseRate_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::RepurchaseTerm{982630011}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::RestructuringType{"STRING_MR"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::SecurityDesc{"STRING_1691707898"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::SecurityExchange{"EXCHANGE_692909576"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::SecurityGroup{"STRING_816808924"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::SecurityID{"STRING_710298216"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::SecurityIDSource{"STRING_8"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::SecuritySubType{"STRING_1131238553"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::SecurityType{"STRING_TAXA"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::Seniority{"STRING_SB"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::SettlMethod{'C'}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::SettleOnOpenFlag{"STRING_2099058765"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::StateOrProvinceOfIssue{"STRING_1009716749"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::StrikeCurrency{"CAN"}, Instrument_89);
    FIX::StrikeMultiplier StrikeMultiplier_89;
    StrikeMultiplier_89.setString("7435877");
set_field(noSettlOblig_0_0, StrikeMultiplier_89, Instrument_89);
    FIX::StrikePrice StrikePrice_89;
    StrikePrice_89.setString("8530164");
set_field(noSettlOblig_0_0, StrikePrice_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::StrikePriceBoundaryMethod{1}, Instrument_89);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_89;
    StrikePriceBoundaryPrecision_89.setString("17.200000");
set_field(noSettlOblig_0_0, StrikePriceBoundaryPrecision_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::StrikePriceDeterminationMethod{1}, Instrument_89);
    FIX::StrikeValue StrikeValue_89;
    StrikeValue_89.setString("12552631");
set_field(noSettlOblig_0_0, StrikeValue_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::Symbol{"STRING_220702352"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::TimeUnit{"STRING_Wk"}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_89);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_89;
    UnitOfMeasureQty_89.setString("9861166");
set_field(noSettlOblig_0_0, UnitOfMeasureQty_89, Instrument_89);
    set_field(noSettlOblig_0_0, FIX::ValuationMethod{"STRING_FUT"}, Instrument_89);
    all_values.push_back(Instrument_89);
    all_compo_names.insert("...NoSettlOblig.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_183;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_183);
      FIX::ComplexEventPrice ComplexEventPrice_183;
      ComplexEventPrice_183.setString("13284470");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_183, ComplexEvents_NoComplexEvents_183);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_183);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_183;
      ComplexEventPriceBoundaryPrecision_183.setString("90.020000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_183, ComplexEvents_NoComplexEvents_183);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_183);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_183);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_183;
      ComplexOptPayoutAmount_183.setString("12363772");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_183, ComplexEvents_NoComplexEvents_183);
      all_values.push_back(ComplexEvents_NoComplexEvents_183);
      all_compo_names.insert("...NoSettlOblig....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_368;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 54, 1, 2, 8, 2006)}, ComplexEventDates_NoComplexEventDates_368);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 24, 7, 21, 5, 2013)}, ComplexEventDates_NoComplexEventDates_368);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_368);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_745;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 40, 38)}, ComplexEventTimes_NoComplexEventTimes_745);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 29, 26)}, ComplexEventTimes_NoComplexEventTimes_745);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_745);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noSettlOblig_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_184;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_184);
      FIX::ComplexEventPrice ComplexEventPrice_184;
      ComplexEventPrice_184.setString("457042");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_184, ComplexEvents_NoComplexEvents_184);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_184);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_184;
      ComplexEventPriceBoundaryPrecision_184.setString("94.640000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_184, ComplexEvents_NoComplexEvents_184);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_184);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_184);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_184;
      ComplexOptPayoutAmount_184.setString("6839830");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_184, ComplexEvents_NoComplexEvents_184);
      all_values.push_back(ComplexEvents_NoComplexEvents_184);
      all_compo_names.insert("...NoSettlOblig....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_369;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 57, 25, 5, 5, 2001)}, ComplexEventDates_NoComplexEventDates_369);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 11, 34, 9, 8, 2003)}, ComplexEventDates_NoComplexEventDates_369);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_369);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_746;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 45, 37)}, ComplexEventTimes_NoComplexEventTimes_746);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 7, 8)}, ComplexEventTimes_NoComplexEventTimes_746);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_746);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_747;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 5, 15)}, ComplexEventTimes_NoComplexEventTimes_747);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 22, 42)}, ComplexEventTimes_NoComplexEventTimes_747);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_747);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noSettlOblig_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_175;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1020318201"}, EvntGrp_NoEvents_175);
      FIX::EventPx EventPx_175;
      EventPx_175.setString("10437113");
set_field(noEvents_0_1_0, EventPx_175, EvntGrp_NoEvents_175);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_959297899"}, EvntGrp_NoEvents_175);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(11, 14, 57, 8, 7, 2001)}, EvntGrp_NoEvents_175);
      set_field(noEvents_0_1_0, FIX::EventType{10}, EvntGrp_NoEvents_175);
      all_values.push_back(EvntGrp_NoEvents_175);
      all_compo_names.insert("...NoSettlOblig....NoEvents");

      noSettlOblig_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_167;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1893314993"}, InstrumentParties_NoInstrumentParties_167);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_167);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1480009297}, InstrumentParties_NoInstrumentParties_167);
      all_values.push_back(InstrumentParties_NoInstrumentParties_167);
      all_compo_names.insert("...NoSettlOblig....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_438790472"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{147206646}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noSettlOblig_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_168;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_1248057119"}, InstrumentParties_NoInstrumentParties_168);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_168);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{1826628433}, InstrumentParties_NoInstrumentParties_168);
      all_values.push_back(InstrumentParties_NoInstrumentParties_168);
      all_compo_names.insert("...NoSettlOblig....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_1486492038"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{1404270797}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340;
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubID{"STRING_1852963505"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340);
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubIDType{918712045}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341;
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubID{"STRING_901490396"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341);
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubIDType{650821167}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noSettlOblig_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_176;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_1000578939"}, SecAltIDGrp_NoSecurityAltID_176);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1566527301"}, SecAltIDGrp_NoSecurityAltID_176);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_176);
      all_compo_names.insert("...NoSettlOblig....NoSecurityAltID");

      noSettlOblig_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_177;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_2055233288"}, SecAltIDGrp_NoSecurityAltID_177);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_2044290318"}, SecAltIDGrp_NoSecurityAltID_177);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_177);
      all_compo_names.insert("...NoSettlOblig....NoSecurityAltID");

      noSettlOblig_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_178;
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltID{"STRING_378341552"}, SecAltIDGrp_NoSecurityAltID_178);
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltIDSource{"STRING_840308019"}, SecAltIDGrp_NoSecurityAltID_178);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_178);
      all_compo_names.insert("...NoSettlOblig....NoSecurityAltID");

      noSettlOblig_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_178;
    set_field(noSettlOblig_0_0, FIX::SecurityXML{"XMLDATA_31986250"}, SecurityXML_178);
    set_field(noSettlOblig_0_0, FIX::SecurityXMLLen{316691259}, SecurityXML_178);
    set_field(noSettlOblig_0_0, FIX::SecurityXMLSchema{"STRING_973245696"}, SecurityXML_178);
    all_values.push_back(SecurityXML_178);
    all_compo_names.insert("...NoSettlOblig..");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_140;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_1060624197"}, Parties_NoPartyIDs_140);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_140);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{69}, Parties_NoPartyIDs_140);
      all_values.push_back(Parties_NoPartyIDs_140);
      all_compo_names.insert("...NoSettlOblig...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_279;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_193549545"}, PtysSubGrp_NoPartySubIDs_279);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{28}, PtysSubGrp_NoPartySubIDs_279);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_279);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_280;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_1577401863"}, PtysSubGrp_NoPartySubIDs_280);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_280);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_280);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_281;
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubID{"STRING_1478718938"}, PtysSubGrp_NoPartySubIDs_281);
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_281);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_281);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSettlOblig_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_141;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_756722394"}, Parties_NoPartyIDs_141);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_141);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{65}, Parties_NoPartyIDs_141);
      all_values.push_back(Parties_NoPartyIDs_141);
      all_compo_names.insert("...NoSettlOblig...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_282;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_172121528"}, PtysSubGrp_NoPartySubIDs_282);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_282);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_282);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noSettlOblig_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_142;
      set_field(noPartyIDs_0_1_2, FIX::PartyID{"STRING_523877691"}, Parties_NoPartyIDs_142);
      set_field(noPartyIDs_0_1_2, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_142);
      set_field(noPartyIDs_0_1_2, FIX::PartyRole{22}, Parties_NoPartyIDs_142);
      all_values.push_back(Parties_NoPartyIDs_142);
      all_compo_names.insert("...NoSettlOblig...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_283;
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubID{"STRING_2125748661"}, PtysSubGrp_NoPartySubIDs_283);
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_283);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_283);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      noSettlOblig_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_0_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_0;
      set_field(noSettlDetails_0_1_0, FIX::SettlObligSource{'2'}, SettlDetails_NoSettlDetails_0);
      all_values.push_back(SettlDetails_NoSettlDetails_0);
      all_compo_names.insert("...NoSettlOblig...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_36;
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyID{"STRING_972084064"}, SettlParties_NoSettlPartyIDs_36);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyIDSource{'7'}, SettlParties_NoSettlPartyIDs_36);
        set_field(noSettlPartyIDs_0_0_2_0, FIX::SettlPartyRole{343919052}, SettlParties_NoSettlPartyIDs_36);
        all_values.push_back(SettlParties_NoSettlPartyIDs_36);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_73;
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubID{"STRING_1699568369"}, SettlPtysSubGrp_NoSettlPartySubIDs_73);
          set_field(noSettlPartySubIDs_0_0_0_3_0, FIX::SettlPartySubIDType{38055222}, SettlPtysSubGrp_NoSettlPartySubIDs_73);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_73);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_74;
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubID{"STRING_201915872"}, SettlPtysSubGrp_NoSettlPartySubIDs_74);
          set_field(noSettlPartySubIDs_0_0_0_3_1, FIX::SettlPartySubIDType{2147286569}, SettlPtysSubGrp_NoSettlPartySubIDs_74);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_74);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_0.addGroup(noSettlPartySubIDs_0_0_0_3_1);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_37;
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyID{"STRING_1615124882"}, SettlParties_NoSettlPartyIDs_37);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_37);
        set_field(noSettlPartyIDs_0_0_2_1, FIX::SettlPartyRole{193352466}, SettlParties_NoSettlPartyIDs_37);
        all_values.push_back(SettlParties_NoSettlPartyIDs_37);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_75;
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubID{"STRING_1876710302"}, SettlPtysSubGrp_NoSettlPartySubIDs_75);
          set_field(noSettlPartySubIDs_0_0_1_3_0, FIX::SettlPartySubIDType{1849501389}, SettlPtysSubGrp_NoSettlPartySubIDs_75);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_75);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_1.addGroup(noSettlPartySubIDs_0_0_1_3_0);
        }
        noSettlDetails_0_1_0.addGroup(noSettlPartyIDs_0_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_38;
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyID{"STRING_1986288638"}, SettlParties_NoSettlPartyIDs_38);
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_38);
        set_field(noSettlPartyIDs_0_0_2_2, FIX::SettlPartyRole{458740136}, SettlParties_NoSettlPartyIDs_38);
        all_values.push_back(SettlParties_NoSettlPartyIDs_38);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_76;
          set_field(noSettlPartySubIDs_0_0_2_3_0, FIX::SettlPartySubID{"STRING_710104812"}, SettlPtysSubGrp_NoSettlPartySubIDs_76);
          set_field(noSettlPartySubIDs_0_0_2_3_0, FIX::SettlPartySubIDType{1277137970}, SettlPtysSubGrp_NoSettlPartySubIDs_76);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_76);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_77;
          set_field(noSettlPartySubIDs_0_0_2_3_1, FIX::SettlPartySubID{"STRING_844039656"}, SettlPtysSubGrp_NoSettlPartySubIDs_77);
          set_field(noSettlPartySubIDs_0_0_2_3_1, FIX::SettlPartySubIDType{1370645256}, SettlPtysSubGrp_NoSettlPartySubIDs_77);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_77);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_0_2_2.addGroup(noSettlPartySubIDs_0_0_2_3_1);
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
        multiset<string> SettlParties_NoSettlPartyIDs_39;
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyID{"STRING_785192449"}, SettlParties_NoSettlPartyIDs_39);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyIDSource{'8'}, SettlParties_NoSettlPartyIDs_39);
        set_field(noSettlPartyIDs_0_1_2_0, FIX::SettlPartyRole{1913138244}, SettlParties_NoSettlPartyIDs_39);
        all_values.push_back(SettlParties_NoSettlPartyIDs_39);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_78;
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubID{"STRING_1421973383"}, SettlPtysSubGrp_NoSettlPartySubIDs_78);
          set_field(noSettlPartySubIDs_0_1_0_3_0, FIX::SettlPartySubIDType{1799152898}, SettlPtysSubGrp_NoSettlPartySubIDs_78);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_78);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_79;
          set_field(noSettlPartySubIDs_0_1_0_3_1, FIX::SettlPartySubID{"STRING_1512251384"}, SettlPtysSubGrp_NoSettlPartySubIDs_79);
          set_field(noSettlPartySubIDs_0_1_0_3_1, FIX::SettlPartySubIDType{246573800}, SettlPtysSubGrp_NoSettlPartySubIDs_79);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_79);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_80;
          set_field(noSettlPartySubIDs_0_1_0_3_2, FIX::SettlPartySubID{"STRING_377991923"}, SettlPtysSubGrp_NoSettlPartySubIDs_80);
          set_field(noSettlPartySubIDs_0_1_0_3_2, FIX::SettlPartySubIDType{1856170436}, SettlPtysSubGrp_NoSettlPartySubIDs_80);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_80);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_0.addGroup(noSettlPartySubIDs_0_1_0_3_2);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_40;
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyID{"STRING_1535349123"}, SettlParties_NoSettlPartyIDs_40);
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_40);
        set_field(noSettlPartyIDs_0_1_2_1, FIX::SettlPartyRole{1894225659}, SettlParties_NoSettlPartyIDs_40);
        all_values.push_back(SettlParties_NoSettlPartyIDs_40);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_81;
          set_field(noSettlPartySubIDs_0_1_1_3_0, FIX::SettlPartySubID{"STRING_2077363214"}, SettlPtysSubGrp_NoSettlPartySubIDs_81);
          set_field(noSettlPartySubIDs_0_1_1_3_0, FIX::SettlPartySubIDType{1361866893}, SettlPtysSubGrp_NoSettlPartySubIDs_81);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_81);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_1_2_1.addGroup(noSettlPartySubIDs_0_1_1_3_0);
        }
        noSettlDetails_0_1_1.addGroup(noSettlPartyIDs_0_1_2_1);
      }
      noSettlOblig_0_0.addGroup(noSettlDetails_0_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_0_1_2;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_2;
      set_field(noSettlDetails_0_1_2, FIX::SettlObligSource{'3'}, SettlDetails_NoSettlDetails_2);
      all_values.push_back(SettlDetails_NoSettlDetails_2);
      all_compo_names.insert("...NoSettlOblig...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_0_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_41;
        set_field(noSettlPartyIDs_0_2_2_0, FIX::SettlPartyID{"STRING_1869436593"}, SettlParties_NoSettlPartyIDs_41);
        set_field(noSettlPartyIDs_0_2_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_41);
        set_field(noSettlPartyIDs_0_2_2_0, FIX::SettlPartyRole{1972733422}, SettlParties_NoSettlPartyIDs_41);
        all_values.push_back(SettlParties_NoSettlPartyIDs_41);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_82;
          set_field(noSettlPartySubIDs_0_2_0_3_0, FIX::SettlPartySubID{"STRING_1072151606"}, SettlPtysSubGrp_NoSettlPartySubIDs_82);
          set_field(noSettlPartySubIDs_0_2_0_3_0, FIX::SettlPartySubIDType{283989910}, SettlPtysSubGrp_NoSettlPartySubIDs_82);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_82);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_0_2_2_0.addGroup(noSettlPartySubIDs_0_2_0_3_0);
        }
        noSettlDetails_0_1_2.addGroup(noSettlPartyIDs_0_2_2_0);
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
    CcyAmt_1.setString("2326760");
set_field(noSettlOblig_0_1, CcyAmt_1, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::Currency{"USD"}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::EffectiveTime{FIX::UTCTIMESTAMP(18, 33, 2, 4, 1, 2000)}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::ExpireTime{FIX::UTCTIMESTAMP(4, 48, 5, 20, 12, 2014)}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(19, 33, 23, 17, 11, 2014)}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::NetGrossInd{1}, SettlObligationInstructions_NoSettlOblig_1);
    FIX::SettlCurrAmt SettlCurrAmt_11;
    SettlCurrAmt_11.setString("7474617");
set_field(noSettlOblig_0_1, SettlCurrAmt_11, SettlObligationInstructions_NoSettlOblig_1);
    FIX::SettlCurrFxRate SettlCurrFxRate_11;
    SettlCurrFxRate_11.setString("490073");
set_field(noSettlOblig_0_1, SettlCurrFxRate_11, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::SettlCurrency{"USD"}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::SettlDate{"LOCALMKTDATE_1121158958"}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::SettlObligID{"STRING_751848998"}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::SettlObligRefID{"STRING_540895781"}, SettlObligationInstructions_NoSettlOblig_1);
    set_field(noSettlOblig_0_1, FIX::SettlObligTransType{'C'}, SettlObligationInstructions_NoSettlOblig_1);
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_1);
    all_compo_names.insert("...NoSettlOblig");

    // Instrument
    multiset<string> Instrument_90;
    FIX::AttachmentPoint AttachmentPoint_90;
    AttachmentPoint_90.setString("32.300000");
set_field(noSettlOblig_0_1, AttachmentPoint_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::CFICode{"STRING_1617611500"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::CPProgram{99}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::CPRegType{"STRING_1380153123"}, Instrument_90);
    FIX::CapPrice CapPrice_90;
    CapPrice_90.setString("3342331");
set_field(noSettlOblig_0_1, CapPrice_90, Instrument_90);
    FIX::ContractMultiplier ContractMultiplier_90;
    ContractMultiplier_90.setString("14044765");
set_field(noSettlOblig_0_1, ContractMultiplier_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::ContractMultiplierUnit{1}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::ContractSettlMonth{"MONTHYEAR_963993052"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::CountryOfIssue{"COUNTRY_100438344"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_445457091"}, Instrument_90);
    FIX::CouponRate CouponRate_90;
    CouponRate_90.setString("22.000000");
set_field(noSettlOblig_0_1, CouponRate_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::CreditRating{"STRING_308651489"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::DatedDate{"LOCALMKTDATE_2009411391"}, Instrument_90);
    FIX::DetachmentPoint DetachmentPoint_90;
    DetachmentPoint_90.setString("32.710000");
set_field(noSettlOblig_0_1, DetachmentPoint_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::EncodedIssuer{"DATA_225551423"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::EncodedIssuerLen{813747519}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::EncodedSecurityDesc{"DATA_346857339"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::EncodedSecurityDescLen{2036677016}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::ExerciseStyle{2}, Instrument_90);
    FIX::Factor Factor_90;
    Factor_90.setString("8662346");
set_field(noSettlOblig_0_1, Factor_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::FlexibleIndicator{false}, Instrument_90);
    FIX::FloorPrice FloorPrice_90;
    FloorPrice_90.setString("15088439");
set_field(noSettlOblig_0_1, FloorPrice_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::FlowScheduleType{4}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::InstrRegistry{"STRING_1835046905"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_1970383707"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::IssueDate{"LOCALMKTDATE_808722215"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::Issuer{"STRING_581068372"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::ListMethod{0}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::LocaleOfIssue{"STRING_1564653943"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::MaturityDate{"LOCALMKTDATE_746561602"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::MaturityMonthYear{"MONTHYEAR_1981407341"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::MaturityTime{"TZTIMEONLY_1178520049"}, Instrument_90);
    FIX::MinPriceIncrement MinPriceIncrement_90;
    MinPriceIncrement_90.setString("21267147");
set_field(noSettlOblig_0_1, MinPriceIncrement_90, Instrument_90);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_90;
    MinPriceIncrementAmount_90.setString("1681568");
set_field(noSettlOblig_0_1, MinPriceIncrementAmount_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::NTPositionLimit{435512984}, Instrument_90);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_90;
    NotionalPercentageOutstanding_90.setString("13.170000");
set_field(noSettlOblig_0_1, NotionalPercentageOutstanding_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::OptAttribute{'1'}, Instrument_90);
    FIX::OptPayoutAmount OptPayoutAmount_90;
    OptPayoutAmount_90.setString("5359513");
set_field(noSettlOblig_0_1, OptPayoutAmount_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::OptPayoutType{2}, Instrument_90);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_90;
    OriginalNotionalPercentageOutstanding_90.setString("84.520000");
set_field(noSettlOblig_0_1, OriginalNotionalPercentageOutstanding_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::Pool{"STRING_844602817"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::PositionLimit{1562176152}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::PriceUnitOfMeasure{"STRING_1070154241"}, Instrument_90);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_90;
    PriceUnitOfMeasureQty_90.setString("2284400");
set_field(noSettlOblig_0_1, PriceUnitOfMeasureQty_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::Product{3}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::ProductComplex{"STRING_959347609"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::PutOrCall{1}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::RedemptionDate{"LOCALMKTDATE_1200540035"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::RepoCollateralSecurityType{"STRING_1874049816"}, Instrument_90);
    FIX::RepurchaseRate RepurchaseRate_90;
    RepurchaseRate_90.setString("45.700000");
set_field(noSettlOblig_0_1, RepurchaseRate_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::RepurchaseTerm{561900322}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::RestructuringType{"STRING_MR"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::SecurityDesc{"STRING_909907827"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::SecurityExchange{"EXCHANGE_391119696"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::SecurityGroup{"STRING_1211630217"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::SecurityID{"STRING_1718630042"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::SecurityIDSource{"STRING_I"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::SecurityStatus{"STRING_2"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::SecuritySubType{"STRING_1135800337"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::SecurityType{"STRING_OOF"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::Seniority{"STRING_SD"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::SettlMethod{'P'}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::SettleOnOpenFlag{"STRING_1697980749"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::StateOrProvinceOfIssue{"STRING_1577506598"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::StrikeCurrency{"GBP"}, Instrument_90);
    FIX::StrikeMultiplier StrikeMultiplier_90;
    StrikeMultiplier_90.setString("5621728");
set_field(noSettlOblig_0_1, StrikeMultiplier_90, Instrument_90);
    FIX::StrikePrice StrikePrice_90;
    StrikePrice_90.setString("11383010");
set_field(noSettlOblig_0_1, StrikePrice_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::StrikePriceBoundaryMethod{4}, Instrument_90);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_90;
    StrikePriceBoundaryPrecision_90.setString("13.020000");
set_field(noSettlOblig_0_1, StrikePriceBoundaryPrecision_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::StrikePriceDeterminationMethod{1}, Instrument_90);
    FIX::StrikeValue StrikeValue_90;
    StrikeValue_90.setString("19202293");
set_field(noSettlOblig_0_1, StrikeValue_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::Symbol{"STRING_779709378"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::SymbolSfx{"STRING_WI"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::TimeUnit{"STRING_D"}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_90);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_90;
    UnitOfMeasureQty_90.setString("15849743");
set_field(noSettlOblig_0_1, UnitOfMeasureQty_90, Instrument_90);
    set_field(noSettlOblig_0_1, FIX::ValuationMethod{"STRING_FUT"}, Instrument_90);
    all_values.push_back(Instrument_90);
    all_compo_names.insert("...NoSettlOblig.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_185;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_185);
      FIX::ComplexEventPrice ComplexEventPrice_185;
      ComplexEventPrice_185.setString("7289715");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_185, ComplexEvents_NoComplexEvents_185);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_185);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_185;
      ComplexEventPriceBoundaryPrecision_185.setString("31.210000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_185, ComplexEvents_NoComplexEvents_185);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_185);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_185);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_185;
      ComplexOptPayoutAmount_185.setString("11408895");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_185, ComplexEvents_NoComplexEvents_185);
      all_values.push_back(ComplexEvents_NoComplexEvents_185);
      all_compo_names.insert("...NoSettlOblig....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_370;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 52, 37, 8, 6, 2013)}, ComplexEventDates_NoComplexEventDates_370);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 37, 18, 13, 5, 2016)}, ComplexEventDates_NoComplexEventDates_370);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_370);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_748;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 9, 4)}, ComplexEventTimes_NoComplexEventTimes_748);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 45, 54)}, ComplexEventTimes_NoComplexEventTimes_748);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_748);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_371;
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 14, 47, 27, 9, 2012)}, ComplexEventDates_NoComplexEventDates_371);
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 39, 4, 12, 8, 2003)}, ComplexEventDates_NoComplexEventDates_371);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_371);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_749;
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 1, 0)}, ComplexEventTimes_NoComplexEventTimes_749);
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 51, 5)}, ComplexEventTimes_NoComplexEventTimes_749);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_749);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_372;
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 15, 20, 14, 12, 2005)}, ComplexEventDates_NoComplexEventDates_372);
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 45, 10, 12, 9, 2012)}, ComplexEventDates_NoComplexEventDates_372);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_372);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_750;
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 18, 12)}, ComplexEventTimes_NoComplexEventTimes_750);
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 9, 54)}, ComplexEventTimes_NoComplexEventTimes_750);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_750);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_751;
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 55, 37)}, ComplexEventTimes_NoComplexEventTimes_751);
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 20, 52)}, ComplexEventTimes_NoComplexEventTimes_751);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_751);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_752;
          set_field(noComplexEventTimes_1_0_2_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 59, 5)}, ComplexEventTimes_NoComplexEventTimes_752);
          set_field(noComplexEventTimes_1_0_2_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 2, 41)}, ComplexEventTimes_NoComplexEventTimes_752);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_752);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noSettlOblig_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_186;
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_186);
      FIX::ComplexEventPrice ComplexEventPrice_186;
      ComplexEventPrice_186.setString("4639161");
set_field(noComplexEvents_1_1_1, ComplexEventPrice_186, ComplexEvents_NoComplexEvents_186);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_186);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_186;
      ComplexEventPriceBoundaryPrecision_186.setString("48.570000");
set_field(noComplexEvents_1_1_1, ComplexEventPriceBoundaryPrecision_186, ComplexEvents_NoComplexEvents_186);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_186);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_186);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_186;
      ComplexOptPayoutAmount_186.setString("18567452");
set_field(noComplexEvents_1_1_1, ComplexOptPayoutAmount_186, ComplexEvents_NoComplexEvents_186);
      all_values.push_back(ComplexEvents_NoComplexEvents_186);
      all_compo_names.insert("...NoSettlOblig....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_373;
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 56, 17, 24, 11, 2009)}, ComplexEventDates_NoComplexEventDates_373);
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 51, 50, 10, 1, 2010)}, ComplexEventDates_NoComplexEventDates_373);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_373);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_753;
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 50, 54)}, ComplexEventTimes_NoComplexEventTimes_753);
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 48, 55)}, ComplexEventTimes_NoComplexEventTimes_753);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_753);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_754;
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 46, 59)}, ComplexEventTimes_NoComplexEventTimes_754);
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 15, 38)}, ComplexEventTimes_NoComplexEventTimes_754);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_754);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_755;
          set_field(noComplexEventTimes_1_1_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 35, 53)}, ComplexEventTimes_NoComplexEventTimes_755);
          set_field(noComplexEventTimes_1_1_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 57, 31)}, ComplexEventTimes_NoComplexEventTimes_755);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_755);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_374;
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 13, 51, 16, 4, 2000)}, ComplexEventDates_NoComplexEventDates_374);
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 32, 35, 6, 3, 2003)}, ComplexEventDates_NoComplexEventDates_374);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_374);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_756;
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 47, 7)}, ComplexEventTimes_NoComplexEventTimes_756);
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 22, 15)}, ComplexEventTimes_NoComplexEventTimes_756);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_756);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_375;
        set_field(noComplexEventDates_1_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 42, 13, 17, 4, 2002)}, ComplexEventDates_NoComplexEventDates_375);
        set_field(noComplexEventDates_1_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 42, 57, 22, 11, 2006)}, ComplexEventDates_NoComplexEventDates_375);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_375);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_757;
          set_field(noComplexEventTimes_1_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 49, 42)}, ComplexEventTimes_NoComplexEventTimes_757);
          set_field(noComplexEventTimes_1_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 57, 19)}, ComplexEventTimes_NoComplexEventTimes_757);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_757);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_758;
          set_field(noComplexEventTimes_1_1_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 59, 6)}, ComplexEventTimes_NoComplexEventTimes_758);
          set_field(noComplexEventTimes_1_1_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 20, 15)}, ComplexEventTimes_NoComplexEventTimes_758);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_758);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_2);
      }
      noSettlOblig_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_187;
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_187);
      FIX::ComplexEventPrice ComplexEventPrice_187;
      ComplexEventPrice_187.setString("14127920");
set_field(noComplexEvents_1_1_2, ComplexEventPrice_187, ComplexEvents_NoComplexEvents_187);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_187);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_187;
      ComplexEventPriceBoundaryPrecision_187.setString("42.360000");
set_field(noComplexEvents_1_1_2, ComplexEventPriceBoundaryPrecision_187, ComplexEvents_NoComplexEvents_187);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_187);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_187);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_187;
      ComplexOptPayoutAmount_187.setString("154500");
set_field(noComplexEvents_1_1_2, ComplexOptPayoutAmount_187, ComplexEvents_NoComplexEvents_187);
      all_values.push_back(ComplexEvents_NoComplexEvents_187);
      all_compo_names.insert("...NoSettlOblig....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_376;
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 19, 38, 12, 12, 2010)}, ComplexEventDates_NoComplexEventDates_376);
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 35, 26, 14, 7, 2011)}, ComplexEventDates_NoComplexEventDates_376);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_376);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_759;
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 49, 7)}, ComplexEventTimes_NoComplexEventTimes_759);
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 27, 10)}, ComplexEventTimes_NoComplexEventTimes_759);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_759);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_760;
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 7, 35)}, ComplexEventTimes_NoComplexEventTimes_760);
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 46, 41)}, ComplexEventTimes_NoComplexEventTimes_760);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_760);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_761;
          set_field(noComplexEventTimes_1_2_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 52, 36)}, ComplexEventTimes_NoComplexEventTimes_761);
          set_field(noComplexEventTimes_1_2_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 23, 43)}, ComplexEventTimes_NoComplexEventTimes_761);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_761);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_2);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      noSettlOblig_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_176;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_953297690"}, EvntGrp_NoEvents_176);
      FIX::EventPx EventPx_176;
      EventPx_176.setString("15413522");
set_field(noEvents_1_1_0, EventPx_176, EvntGrp_NoEvents_176);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_1059864366"}, EvntGrp_NoEvents_176);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(1, 48, 10, 16, 2, 2006)}, EvntGrp_NoEvents_176);
      set_field(noEvents_1_1_0, FIX::EventType{8}, EvntGrp_NoEvents_176);
      all_values.push_back(EvntGrp_NoEvents_176);
      all_compo_names.insert("...NoSettlOblig....NoEvents");

      noSettlOblig_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_169;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_553186957"}, InstrumentParties_NoInstrumentParties_169);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_169);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{1857782660}, InstrumentParties_NoInstrumentParties_169);
      all_values.push_back(InstrumentParties_NoInstrumentParties_169);
      all_compo_names.insert("...NoSettlOblig....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_519890956"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{574866708}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343;
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubID{"STRING_1238204020"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343);
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubIDType{2047356987}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344;
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubID{"STRING_1454884474"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344);
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubIDType{888967994}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noSettlOblig_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_170;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_1724740285"}, InstrumentParties_NoInstrumentParties_170);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_170);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{265939978}, InstrumentParties_NoInstrumentParties_170);
      all_values.push_back(InstrumentParties_NoInstrumentParties_170);
      all_compo_names.insert("...NoSettlOblig....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_1815414374"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{183142926}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      noSettlOblig_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_171;
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyID{"STRING_561130809"}, InstrumentParties_NoInstrumentParties_171);
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_171);
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyRole{1661649042}, InstrumentParties_NoInstrumentParties_171);
      all_values.push_back(InstrumentParties_NoInstrumentParties_171);
      all_compo_names.insert("...NoSettlOblig....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346;
        set_field(noInstrumentPartySubIDs_1_2_2_0, FIX::InstrumentPartySubID{"STRING_1530870179"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346);
        set_field(noInstrumentPartySubIDs_1_2_2_0, FIX::InstrumentPartySubIDType{574029761}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347;
        set_field(noInstrumentPartySubIDs_1_2_2_1, FIX::InstrumentPartySubID{"STRING_222390412"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347);
        set_field(noInstrumentPartySubIDs_1_2_2_1, FIX::InstrumentPartySubIDType{523737436}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348;
        set_field(noInstrumentPartySubIDs_1_2_2_2, FIX::InstrumentPartySubID{"STRING_616019789"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348);
        set_field(noInstrumentPartySubIDs_1_2_2_2, FIX::InstrumentPartySubIDType{2093407743}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348);
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
      multiset<string> SecAltIDGrp_NoSecurityAltID_179;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_356422079"}, SecAltIDGrp_NoSecurityAltID_179);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_1921772653"}, SecAltIDGrp_NoSecurityAltID_179);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_179);
      all_compo_names.insert("...NoSettlOblig....NoSecurityAltID");

      noSettlOblig_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_180;
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltID{"STRING_1653651695"}, SecAltIDGrp_NoSecurityAltID_180);
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltIDSource{"STRING_831857632"}, SecAltIDGrp_NoSecurityAltID_180);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_180);
      all_compo_names.insert("...NoSettlOblig....NoSecurityAltID");

      noSettlOblig_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_180;
    set_field(noSettlOblig_0_1, FIX::SecurityXML{"XMLDATA_327475962"}, SecurityXML_180);
    set_field(noSettlOblig_0_1, FIX::SecurityXMLLen{807083144}, SecurityXML_180);
    set_field(noSettlOblig_0_1, FIX::SecurityXMLSchema{"STRING_542156645"}, SecurityXML_180);
    all_values.push_back(SecurityXML_180);
    all_compo_names.insert("...NoSettlOblig..");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_143;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_1326974100"}, Parties_NoPartyIDs_143);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_143);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{20}, Parties_NoPartyIDs_143);
      all_values.push_back(Parties_NoPartyIDs_143);
      all_compo_names.insert("...NoSettlOblig...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_284;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_424424179"}, PtysSubGrp_NoPartySubIDs_284);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_284);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_284);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_285;
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubID{"STRING_804104077"}, PtysSubGrp_NoPartySubIDs_285);
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_285);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_285);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noSettlOblig_0_1.addGroup(noPartyIDs_1_1_0);
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
        multiset<string> SettlParties_NoSettlPartyIDs_42;
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyID{"STRING_1299564594"}, SettlParties_NoSettlPartyIDs_42);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyIDSource{'3'}, SettlParties_NoSettlPartyIDs_42);
        set_field(noSettlPartyIDs_1_0_2_0, FIX::SettlPartyRole{411548062}, SettlParties_NoSettlPartyIDs_42);
        all_values.push_back(SettlParties_NoSettlPartyIDs_42);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_83;
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubID{"STRING_1848872791"}, SettlPtysSubGrp_NoSettlPartySubIDs_83);
          set_field(noSettlPartySubIDs_1_0_0_3_0, FIX::SettlPartySubIDType{1942418242}, SettlPtysSubGrp_NoSettlPartySubIDs_83);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_83);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_84;
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubID{"STRING_1387759750"}, SettlPtysSubGrp_NoSettlPartySubIDs_84);
          set_field(noSettlPartySubIDs_1_0_0_3_1, FIX::SettlPartySubIDType{2071263204}, SettlPtysSubGrp_NoSettlPartySubIDs_84);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_84);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_85;
          set_field(noSettlPartySubIDs_1_0_0_3_2, FIX::SettlPartySubID{"STRING_318672030"}, SettlPtysSubGrp_NoSettlPartySubIDs_85);
          set_field(noSettlPartySubIDs_1_0_0_3_2, FIX::SettlPartySubIDType{2003779539}, SettlPtysSubGrp_NoSettlPartySubIDs_85);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_85);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_0.addGroup(noSettlPartySubIDs_1_0_0_3_2);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_43;
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyID{"STRING_2017187299"}, SettlParties_NoSettlPartyIDs_43);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_43);
        set_field(noSettlPartyIDs_1_0_2_1, FIX::SettlPartyRole{212717970}, SettlParties_NoSettlPartyIDs_43);
        all_values.push_back(SettlParties_NoSettlPartyIDs_43);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_86;
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubID{"STRING_795078326"}, SettlPtysSubGrp_NoSettlPartySubIDs_86);
          set_field(noSettlPartySubIDs_1_0_1_3_0, FIX::SettlPartySubIDType{1044575603}, SettlPtysSubGrp_NoSettlPartySubIDs_86);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_86);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_1.addGroup(noSettlPartySubIDs_1_0_1_3_0);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_1_0_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_44;
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyID{"STRING_2118952266"}, SettlParties_NoSettlPartyIDs_44);
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_44);
        set_field(noSettlPartyIDs_1_0_2_2, FIX::SettlPartyRole{1586732248}, SettlParties_NoSettlPartyIDs_44);
        all_values.push_back(SettlParties_NoSettlPartyIDs_44);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_87;
          set_field(noSettlPartySubIDs_1_0_2_3_0, FIX::SettlPartySubID{"STRING_781651923"}, SettlPtysSubGrp_NoSettlPartySubIDs_87);
          set_field(noSettlPartySubIDs_1_0_2_3_0, FIX::SettlPartySubIDType{556271953}, SettlPtysSubGrp_NoSettlPartySubIDs_87);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_87);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_88;
          set_field(noSettlPartySubIDs_1_0_2_3_1, FIX::SettlPartySubID{"STRING_803775637"}, SettlPtysSubGrp_NoSettlPartySubIDs_88);
          set_field(noSettlPartySubIDs_1_0_2_3_1, FIX::SettlPartySubIDType{2008499363}, SettlPtysSubGrp_NoSettlPartySubIDs_88);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_88);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_1_0_2_2.addGroup(noSettlPartySubIDs_1_0_2_3_1);
        }
        noSettlDetails_1_1_0.addGroup(noSettlPartyIDs_1_0_2_2);
      }
      noSettlOblig_0_1.addGroup(noSettlDetails_1_1_0);
    }
    msg.addGroup(noSettlOblig_0_1);
  }
  {
    FIX50SP2::SettlementObligationReport::NoSettlOblig noSettlOblig_0_2;
    // SettlObligationInstructions.NoSettlOblig
    multiset<string> SettlObligationInstructions_NoSettlOblig_2;
    FIX::CcyAmt CcyAmt_2;
    CcyAmt_2.setString("9806961");
set_field(noSettlOblig_0_2, CcyAmt_2, SettlObligationInstructions_NoSettlOblig_2);
    set_field(noSettlOblig_0_2, FIX::Currency{"JPY"}, SettlObligationInstructions_NoSettlOblig_2);
    set_field(noSettlOblig_0_2, FIX::EffectiveTime{FIX::UTCTIMESTAMP(18, 15, 23, 25, 12, 2009)}, SettlObligationInstructions_NoSettlOblig_2);
    set_field(noSettlOblig_0_2, FIX::ExpireTime{FIX::UTCTIMESTAMP(22, 59, 32, 2, 7, 2009)}, SettlObligationInstructions_NoSettlOblig_2);
    set_field(noSettlOblig_0_2, FIX::LastUpdateTime{FIX::UTCTIMESTAMP(5, 34, 1, 3, 2, 2000)}, SettlObligationInstructions_NoSettlOblig_2);
    set_field(noSettlOblig_0_2, FIX::NetGrossInd{1}, SettlObligationInstructions_NoSettlOblig_2);
    FIX::SettlCurrAmt SettlCurrAmt_12;
    SettlCurrAmt_12.setString("3821204");
set_field(noSettlOblig_0_2, SettlCurrAmt_12, SettlObligationInstructions_NoSettlOblig_2);
    FIX::SettlCurrFxRate SettlCurrFxRate_12;
    SettlCurrFxRate_12.setString("7254731");
set_field(noSettlOblig_0_2, SettlCurrFxRate_12, SettlObligationInstructions_NoSettlOblig_2);
    set_field(noSettlOblig_0_2, FIX::SettlCurrency{"JPY"}, SettlObligationInstructions_NoSettlOblig_2);
    set_field(noSettlOblig_0_2, FIX::SettlDate{"LOCALMKTDATE_1529248770"}, SettlObligationInstructions_NoSettlOblig_2);
    set_field(noSettlOblig_0_2, FIX::SettlObligID{"STRING_568347129"}, SettlObligationInstructions_NoSettlOblig_2);
    set_field(noSettlOblig_0_2, FIX::SettlObligRefID{"STRING_1919088534"}, SettlObligationInstructions_NoSettlOblig_2);
    set_field(noSettlOblig_0_2, FIX::SettlObligTransType{'N'}, SettlObligationInstructions_NoSettlOblig_2);
    all_values.push_back(SettlObligationInstructions_NoSettlOblig_2);
    all_compo_names.insert("...NoSettlOblig");

    // Instrument
    multiset<string> Instrument_91;
    FIX::AttachmentPoint AttachmentPoint_91;
    AttachmentPoint_91.setString("69.210000");
set_field(noSettlOblig_0_2, AttachmentPoint_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::CFICode{"STRING_1506400425"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::CPProgram{2}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::CPRegType{"STRING_1671900196"}, Instrument_91);
    FIX::CapPrice CapPrice_91;
    CapPrice_91.setString("15157424");
set_field(noSettlOblig_0_2, CapPrice_91, Instrument_91);
    FIX::ContractMultiplier ContractMultiplier_91;
    ContractMultiplier_91.setString("14344940");
set_field(noSettlOblig_0_2, ContractMultiplier_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::ContractMultiplierUnit{1}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::ContractSettlMonth{"MONTHYEAR_1936632533"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::CountryOfIssue{"COUNTRY_2023500370"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::CouponPaymentDate{"LOCALMKTDATE_771560825"}, Instrument_91);
    FIX::CouponRate CouponRate_91;
    CouponRate_91.setString("35.650000");
set_field(noSettlOblig_0_2, CouponRate_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::CreditRating{"STRING_1852782754"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::DatedDate{"LOCALMKTDATE_1169607092"}, Instrument_91);
    FIX::DetachmentPoint DetachmentPoint_91;
    DetachmentPoint_91.setString("2.750000");
set_field(noSettlOblig_0_2, DetachmentPoint_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::EncodedIssuer{"DATA_1538361030"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::EncodedIssuerLen{1437357009}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::EncodedSecurityDesc{"DATA_215393616"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::EncodedSecurityDescLen{1436657276}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::ExerciseStyle{0}, Instrument_91);
    FIX::Factor Factor_91;
    Factor_91.setString("6863952");
set_field(noSettlOblig_0_2, Factor_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::FlexProductEligibilityIndicator{false}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::FlexibleIndicator{false}, Instrument_91);
    FIX::FloorPrice FloorPrice_91;
    FloorPrice_91.setString("6120747");
set_field(noSettlOblig_0_2, FloorPrice_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::FlowScheduleType{1}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::InstrRegistry{"STRING_1957783908"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::InstrmtAssignmentMethod{'1'}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::InterestAccrualDate{"LOCALMKTDATE_1552558328"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::IssueDate{"LOCALMKTDATE_1339549031"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::Issuer{"STRING_1887753317"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::ListMethod{0}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::LocaleOfIssue{"STRING_228087832"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::MaturityDate{"LOCALMKTDATE_973736590"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::MaturityMonthYear{"MONTHYEAR_683079991"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::MaturityTime{"TZTIMEONLY_1887305627"}, Instrument_91);
    FIX::MinPriceIncrement MinPriceIncrement_91;
    MinPriceIncrement_91.setString("4981531");
set_field(noSettlOblig_0_2, MinPriceIncrement_91, Instrument_91);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_91;
    MinPriceIncrementAmount_91.setString("513387");
set_field(noSettlOblig_0_2, MinPriceIncrementAmount_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::NTPositionLimit{1174316068}, Instrument_91);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_91;
    NotionalPercentageOutstanding_91.setString("72.530000");
set_field(noSettlOblig_0_2, NotionalPercentageOutstanding_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::OptAttribute{'1'}, Instrument_91);
    FIX::OptPayoutAmount OptPayoutAmount_91;
    OptPayoutAmount_91.setString("10503327");
set_field(noSettlOblig_0_2, OptPayoutAmount_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::OptPayoutType{1}, Instrument_91);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_91;
    OriginalNotionalPercentageOutstanding_91.setString("48.900000");
set_field(noSettlOblig_0_2, OriginalNotionalPercentageOutstanding_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::Pool{"STRING_755631897"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::PositionLimit{589131522}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::PriceUnitOfMeasure{"STRING_146509279"}, Instrument_91);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_91;
    PriceUnitOfMeasureQty_91.setString("20264885");
set_field(noSettlOblig_0_2, PriceUnitOfMeasureQty_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::Product{6}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::ProductComplex{"STRING_1583166555"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::PutOrCall{1}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::RedemptionDate{"LOCALMKTDATE_1286720416"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::RepoCollateralSecurityType{"STRING_1815212032"}, Instrument_91);
    FIX::RepurchaseRate RepurchaseRate_91;
    RepurchaseRate_91.setString("15.940000");
set_field(noSettlOblig_0_2, RepurchaseRate_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::RepurchaseTerm{1898795190}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::RestructuringType{"STRING_MM"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::SecurityDesc{"STRING_123231854"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::SecurityExchange{"EXCHANGE_1070717730"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::SecurityGroup{"STRING_1834452638"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::SecurityID{"STRING_1462780885"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::SecurityIDSource{"STRING_E"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::SecurityStatus{"STRING_1"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::SecuritySubType{"STRING_1690868717"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::SecurityType{"STRING_EUCD"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::Seniority{"STRING_SB"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::SettlMethod{'P'}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::SettleOnOpenFlag{"STRING_135393479"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::StateOrProvinceOfIssue{"STRING_1745550987"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::StrikeCurrency{"USD"}, Instrument_91);
    FIX::StrikeMultiplier StrikeMultiplier_91;
    StrikeMultiplier_91.setString("15860386");
set_field(noSettlOblig_0_2, StrikeMultiplier_91, Instrument_91);
    FIX::StrikePrice StrikePrice_91;
    StrikePrice_91.setString("15078559");
set_field(noSettlOblig_0_2, StrikePrice_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::StrikePriceBoundaryMethod{4}, Instrument_91);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_91;
    StrikePriceBoundaryPrecision_91.setString("99.060000");
set_field(noSettlOblig_0_2, StrikePriceBoundaryPrecision_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::StrikePriceDeterminationMethod{1}, Instrument_91);
    FIX::StrikeValue StrikeValue_91;
    StrikeValue_91.setString("9394966");
set_field(noSettlOblig_0_2, StrikeValue_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::Symbol{"STRING_1816431423"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::SymbolSfx{"STRING_WI"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::TimeUnit{"STRING_Wk"}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::UnitOfMeasure{"STRING_USD"}, Instrument_91);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_91;
    UnitOfMeasureQty_91.setString("20466060");
set_field(noSettlOblig_0_2, UnitOfMeasureQty_91, Instrument_91);
    set_field(noSettlOblig_0_2, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_91);
    all_values.push_back(Instrument_91);
    all_compo_names.insert("...NoSettlOblig.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_188;
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_188);
      FIX::ComplexEventPrice ComplexEventPrice_188;
      ComplexEventPrice_188.setString("13073048");
set_field(noComplexEvents_2_1_0, ComplexEventPrice_188, ComplexEvents_NoComplexEvents_188);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_188);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_188;
      ComplexEventPriceBoundaryPrecision_188.setString("58.370000");
set_field(noComplexEvents_2_1_0, ComplexEventPriceBoundaryPrecision_188, ComplexEvents_NoComplexEvents_188);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_188);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_188);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_188;
      ComplexOptPayoutAmount_188.setString("17980667");
set_field(noComplexEvents_2_1_0, ComplexOptPayoutAmount_188, ComplexEvents_NoComplexEvents_188);
      all_values.push_back(ComplexEvents_NoComplexEvents_188);
      all_compo_names.insert("...NoSettlOblig....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_377;
        set_field(noComplexEventDates_2_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 11, 7, 9, 11, 2002)}, ComplexEventDates_NoComplexEventDates_377);
        set_field(noComplexEventDates_2_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 3, 37, 10, 6, 2014)}, ComplexEventDates_NoComplexEventDates_377);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_377);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_762;
          set_field(noComplexEventTimes_2_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 33, 25)}, ComplexEventTimes_NoComplexEventTimes_762);
          set_field(noComplexEventTimes_2_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 30, 6)}, ComplexEventTimes_NoComplexEventTimes_762);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_762);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_763;
          set_field(noComplexEventTimes_2_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 23, 13)}, ComplexEventTimes_NoComplexEventTimes_763);
          set_field(noComplexEventTimes_2_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 55, 1)}, ComplexEventTimes_NoComplexEventTimes_763);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_763);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_1);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_378;
        set_field(noComplexEventDates_2_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 12, 19, 0, 12, 2014)}, ComplexEventDates_NoComplexEventDates_378);
        set_field(noComplexEventDates_2_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 41, 48, 16, 3, 2008)}, ComplexEventDates_NoComplexEventDates_378);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_378);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_764;
          set_field(noComplexEventTimes_2_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 24, 17)}, ComplexEventTimes_NoComplexEventTimes_764);
          set_field(noComplexEventTimes_2_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 39, 14)}, ComplexEventTimes_NoComplexEventTimes_764);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_764);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_765;
          set_field(noComplexEventTimes_2_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 29, 27)}, ComplexEventTimes_NoComplexEventTimes_765);
          set_field(noComplexEventTimes_2_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 14, 3)}, ComplexEventTimes_NoComplexEventTimes_765);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_765);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_766;
          set_field(noComplexEventTimes_2_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 15, 10)}, ComplexEventTimes_NoComplexEventTimes_766);
          set_field(noComplexEventTimes_2_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 40, 17)}, ComplexEventTimes_NoComplexEventTimes_766);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_766);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_379;
        set_field(noComplexEventDates_2_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 57, 16, 4, 12, 2008)}, ComplexEventDates_NoComplexEventDates_379);
        set_field(noComplexEventDates_2_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 24, 36, 26, 7, 2016)}, ComplexEventDates_NoComplexEventDates_379);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_379);
        all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_767;
          set_field(noComplexEventTimes_2_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 53, 15)}, ComplexEventTimes_NoComplexEventTimes_767);
          set_field(noComplexEventTimes_2_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 30, 50)}, ComplexEventTimes_NoComplexEventTimes_767);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_767);
          all_compo_names.insert("...NoSettlOblig....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_2.addGroup(noComplexEventTimes_2_0_2_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_2);
      }
      noSettlOblig_0_2.addGroup(noComplexEvents_2_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_177;
      set_field(noEvents_2_1_0, FIX::EventDate{"LOCALMKTDATE_390276736"}, EvntGrp_NoEvents_177);
      FIX::EventPx EventPx_177;
      EventPx_177.setString("10408390");
set_field(noEvents_2_1_0, EventPx_177, EvntGrp_NoEvents_177);
      set_field(noEvents_2_1_0, FIX::EventText{"STRING_421762997"}, EvntGrp_NoEvents_177);
      set_field(noEvents_2_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(4, 57, 31, 24, 12, 2016)}, EvntGrp_NoEvents_177);
      set_field(noEvents_2_1_0, FIX::EventType{18}, EvntGrp_NoEvents_177);
      all_values.push_back(EvntGrp_NoEvents_177);
      all_compo_names.insert("...NoSettlOblig....NoEvents");

      noSettlOblig_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_178;
      set_field(noEvents_2_1_1, FIX::EventDate{"LOCALMKTDATE_549152739"}, EvntGrp_NoEvents_178);
      FIX::EventPx EventPx_178;
      EventPx_178.setString("5514639");
set_field(noEvents_2_1_1, EventPx_178, EvntGrp_NoEvents_178);
      set_field(noEvents_2_1_1, FIX::EventText{"STRING_916896825"}, EvntGrp_NoEvents_178);
      set_field(noEvents_2_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(14, 9, 35, 0, 9, 2009)}, EvntGrp_NoEvents_178);
      set_field(noEvents_2_1_1, FIX::EventType{1}, EvntGrp_NoEvents_178);
      all_values.push_back(EvntGrp_NoEvents_178);
      all_compo_names.insert("...NoSettlOblig....NoEvents");

      noSettlOblig_0_2.addGroup(noEvents_2_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoEvents noEvents_2_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_179;
      set_field(noEvents_2_1_2, FIX::EventDate{"LOCALMKTDATE_373165052"}, EvntGrp_NoEvents_179);
      FIX::EventPx EventPx_179;
      EventPx_179.setString("8034955");
set_field(noEvents_2_1_2, EventPx_179, EvntGrp_NoEvents_179);
      set_field(noEvents_2_1_2, FIX::EventText{"STRING_1814906193"}, EvntGrp_NoEvents_179);
      set_field(noEvents_2_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(7, 48, 10, 21, 4, 2002)}, EvntGrp_NoEvents_179);
      set_field(noEvents_2_1_2, FIX::EventType{8}, EvntGrp_NoEvents_179);
      all_values.push_back(EvntGrp_NoEvents_179);
      all_compo_names.insert("...NoSettlOblig....NoEvents");

      noSettlOblig_0_2.addGroup(noEvents_2_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_172;
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyID{"STRING_1737160968"}, InstrumentParties_NoInstrumentParties_172);
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_172);
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyRole{50333229}, InstrumentParties_NoInstrumentParties_172);
      all_values.push_back(InstrumentParties_NoInstrumentParties_172);
      all_compo_names.insert("...NoSettlOblig....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349;
        set_field(noInstrumentPartySubIDs_2_0_2_0, FIX::InstrumentPartySubID{"STRING_67720047"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349);
        set_field(noInstrumentPartySubIDs_2_0_2_0, FIX::InstrumentPartySubIDType{642668840}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_349);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      noSettlOblig_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_173;
      set_field(noInstrumentParties_2_1_1, FIX::InstrumentPartyID{"STRING_1004580700"}, InstrumentParties_NoInstrumentParties_173);
      set_field(noInstrumentParties_2_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_173);
      set_field(noInstrumentParties_2_1_1, FIX::InstrumentPartyRole{1191821579}, InstrumentParties_NoInstrumentParties_173);
      all_values.push_back(InstrumentParties_NoInstrumentParties_173);
      all_compo_names.insert("...NoSettlOblig....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350;
        set_field(noInstrumentPartySubIDs_2_1_2_0, FIX::InstrumentPartySubID{"STRING_1097976589"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350);
        set_field(noInstrumentPartySubIDs_2_1_2_0, FIX::InstrumentPartySubIDType{1762121158}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_350);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      noSettlOblig_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties noInstrumentParties_2_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_174;
      set_field(noInstrumentParties_2_1_2, FIX::InstrumentPartyID{"STRING_2037762254"}, InstrumentParties_NoInstrumentParties_174);
      set_field(noInstrumentParties_2_1_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_174);
      set_field(noInstrumentParties_2_1_2, FIX::InstrumentPartyRole{569405365}, InstrumentParties_NoInstrumentParties_174);
      all_values.push_back(InstrumentParties_NoInstrumentParties_174);
      all_compo_names.insert("...NoSettlOblig....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351;
        set_field(noInstrumentPartySubIDs_2_2_2_0, FIX::InstrumentPartySubID{"STRING_556445075"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351);
        set_field(noInstrumentPartySubIDs_2_2_2_0, FIX::InstrumentPartySubIDType{1979464336}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_351);
        all_compo_names.insert("...NoSettlOblig....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_0);
      }
      noSettlOblig_0_2.addGroup(noInstrumentParties_2_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_181;
      set_field(noSecurityAltID_2_1_0, FIX::SecurityAltID{"STRING_929610127"}, SecAltIDGrp_NoSecurityAltID_181);
      set_field(noSecurityAltID_2_1_0, FIX::SecurityAltIDSource{"STRING_635476236"}, SecAltIDGrp_NoSecurityAltID_181);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_181);
      all_compo_names.insert("...NoSettlOblig....NoSecurityAltID");

      noSettlOblig_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_182;
      set_field(noSecurityAltID_2_1_1, FIX::SecurityAltID{"STRING_1050486935"}, SecAltIDGrp_NoSecurityAltID_182);
      set_field(noSecurityAltID_2_1_1, FIX::SecurityAltIDSource{"STRING_2021871595"}, SecAltIDGrp_NoSecurityAltID_182);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_182);
      all_compo_names.insert("...NoSettlOblig....NoSecurityAltID");

      noSettlOblig_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_182;
    set_field(noSettlOblig_0_2, FIX::SecurityXML{"XMLDATA_1015899044"}, SecurityXML_182);
    set_field(noSettlOblig_0_2, FIX::SecurityXMLLen{1238446103}, SecurityXML_182);
    set_field(noSettlOblig_0_2, FIX::SecurityXMLSchema{"STRING_2096630765"}, SecurityXML_182);
    all_values.push_back(SecurityXML_182);
    all_compo_names.insert("...NoSettlOblig..");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_144;
      set_field(noPartyIDs_2_1_0, FIX::PartyID{"STRING_196886958"}, Parties_NoPartyIDs_144);
      set_field(noPartyIDs_2_1_0, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_144);
      set_field(noPartyIDs_2_1_0, FIX::PartyRole{26}, Parties_NoPartyIDs_144);
      all_values.push_back(Parties_NoPartyIDs_144);
      all_compo_names.insert("...NoSettlOblig...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_286;
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubID{"STRING_3860344"}, PtysSubGrp_NoPartySubIDs_286);
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubIDType{23}, PtysSubGrp_NoPartySubIDs_286);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_286);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_287;
        set_field(noPartySubIDs_2_0_2_1, FIX::PartySubID{"STRING_1774907688"}, PtysSubGrp_NoPartySubIDs_287);
        set_field(noPartySubIDs_2_0_2_1, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_287);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_287);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_288;
        set_field(noPartySubIDs_2_0_2_2, FIX::PartySubID{"STRING_1377719387"}, PtysSubGrp_NoPartySubIDs_288);
        set_field(noPartySubIDs_2_0_2_2, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_288);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_288);
        all_compo_names.insert("...NoSettlOblig...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_2);
      }
      noSettlOblig_0_2.addGroup(noPartyIDs_2_1_0);
    }
    // SettlDetails
    // Group SettlDetails.NoSettlDetails
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_2_1_0;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_4;
      set_field(noSettlDetails_2_1_0, FIX::SettlObligSource{'1'}, SettlDetails_NoSettlDetails_4);
      all_values.push_back(SettlDetails_NoSettlDetails_4);
      all_compo_names.insert("...NoSettlOblig...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_0_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_45;
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyID{"STRING_569420388"}, SettlParties_NoSettlPartyIDs_45);
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyIDSource{'5'}, SettlParties_NoSettlPartyIDs_45);
        set_field(noSettlPartyIDs_2_0_2_0, FIX::SettlPartyRole{1076551970}, SettlParties_NoSettlPartyIDs_45);
        all_values.push_back(SettlParties_NoSettlPartyIDs_45);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_89;
          set_field(noSettlPartySubIDs_2_0_0_3_0, FIX::SettlPartySubID{"STRING_656225904"}, SettlPtysSubGrp_NoSettlPartySubIDs_89);
          set_field(noSettlPartySubIDs_2_0_0_3_0, FIX::SettlPartySubIDType{1645957335}, SettlPtysSubGrp_NoSettlPartySubIDs_89);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_89);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_0_2_0.addGroup(noSettlPartySubIDs_2_0_0_3_0);
        }
        noSettlDetails_2_1_0.addGroup(noSettlPartyIDs_2_0_2_0);
      }
      noSettlOblig_0_2.addGroup(noSettlDetails_2_1_0);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_2_1_1;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_5;
      set_field(noSettlDetails_2_1_1, FIX::SettlObligSource{'1'}, SettlDetails_NoSettlDetails_5);
      all_values.push_back(SettlDetails_NoSettlDetails_5);
      all_compo_names.insert("...NoSettlOblig...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_1_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_46;
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyID{"STRING_1477938023"}, SettlParties_NoSettlPartyIDs_46);
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyIDSource{'7'}, SettlParties_NoSettlPartyIDs_46);
        set_field(noSettlPartyIDs_2_1_2_0, FIX::SettlPartyRole{2142281106}, SettlParties_NoSettlPartyIDs_46);
        all_values.push_back(SettlParties_NoSettlPartyIDs_46);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_90;
          set_field(noSettlPartySubIDs_2_1_0_3_0, FIX::SettlPartySubID{"STRING_1798236601"}, SettlPtysSubGrp_NoSettlPartySubIDs_90);
          set_field(noSettlPartySubIDs_2_1_0_3_0, FIX::SettlPartySubIDType{2016669054}, SettlPtysSubGrp_NoSettlPartySubIDs_90);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_90);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_91;
          set_field(noSettlPartySubIDs_2_1_0_3_1, FIX::SettlPartySubID{"STRING_981829655"}, SettlPtysSubGrp_NoSettlPartySubIDs_91);
          set_field(noSettlPartySubIDs_2_1_0_3_1, FIX::SettlPartySubIDType{889199057}, SettlPtysSubGrp_NoSettlPartySubIDs_91);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_91);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_92;
          set_field(noSettlPartySubIDs_2_1_0_3_2, FIX::SettlPartySubID{"STRING_1965816171"}, SettlPtysSubGrp_NoSettlPartySubIDs_92);
          set_field(noSettlPartySubIDs_2_1_0_3_2, FIX::SettlPartySubIDType{130473721}, SettlPtysSubGrp_NoSettlPartySubIDs_92);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_92);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_0.addGroup(noSettlPartySubIDs_2_1_0_3_2);
        }
        noSettlDetails_2_1_1.addGroup(noSettlPartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_1_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_47;
        set_field(noSettlPartyIDs_2_1_2_1, FIX::SettlPartyID{"STRING_1086086015"}, SettlParties_NoSettlPartyIDs_47);
        set_field(noSettlPartyIDs_2_1_2_1, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_47);
        set_field(noSettlPartyIDs_2_1_2_1, FIX::SettlPartyRole{600185533}, SettlParties_NoSettlPartyIDs_47);
        all_values.push_back(SettlParties_NoSettlPartyIDs_47);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_93;
          set_field(noSettlPartySubIDs_2_1_1_3_0, FIX::SettlPartySubID{"STRING_236375891"}, SettlPtysSubGrp_NoSettlPartySubIDs_93);
          set_field(noSettlPartySubIDs_2_1_1_3_0, FIX::SettlPartySubIDType{1910184873}, SettlPtysSubGrp_NoSettlPartySubIDs_93);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_93);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_1.addGroup(noSettlPartySubIDs_2_1_1_3_0);
        }
        noSettlDetails_2_1_1.addGroup(noSettlPartyIDs_2_1_2_1);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_1_2_2;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_48;
        set_field(noSettlPartyIDs_2_1_2_2, FIX::SettlPartyID{"STRING_290600866"}, SettlParties_NoSettlPartyIDs_48);
        set_field(noSettlPartyIDs_2_1_2_2, FIX::SettlPartyIDSource{'3'}, SettlParties_NoSettlPartyIDs_48);
        set_field(noSettlPartyIDs_2_1_2_2, FIX::SettlPartyRole{1140420612}, SettlParties_NoSettlPartyIDs_48);
        all_values.push_back(SettlParties_NoSettlPartyIDs_48);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_94;
          set_field(noSettlPartySubIDs_2_1_2_3_0, FIX::SettlPartySubID{"STRING_1553513903"}, SettlPtysSubGrp_NoSettlPartySubIDs_94);
          set_field(noSettlPartySubIDs_2_1_2_3_0, FIX::SettlPartySubIDType{551736115}, SettlPtysSubGrp_NoSettlPartySubIDs_94);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_94);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_2.addGroup(noSettlPartySubIDs_2_1_2_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_95;
          set_field(noSettlPartySubIDs_2_1_2_3_1, FIX::SettlPartySubID{"STRING_2022608206"}, SettlPtysSubGrp_NoSettlPartySubIDs_95);
          set_field(noSettlPartySubIDs_2_1_2_3_1, FIX::SettlPartySubIDType{2122934292}, SettlPtysSubGrp_NoSettlPartySubIDs_95);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_95);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_1_2_2.addGroup(noSettlPartySubIDs_2_1_2_3_1);
        }
        noSettlDetails_2_1_1.addGroup(noSettlPartyIDs_2_1_2_2);
      }
      noSettlOblig_0_2.addGroup(noSettlDetails_2_1_1);
    }
    {
      FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails noSettlDetails_2_1_2;
      // SettlDetails.NoSettlDetails
      multiset<string> SettlDetails_NoSettlDetails_6;
      set_field(noSettlDetails_2_1_2, FIX::SettlObligSource{'2'}, SettlDetails_NoSettlDetails_6);
      all_values.push_back(SettlDetails_NoSettlDetails_6);
      all_compo_names.insert("...NoSettlOblig...NoSettlDetails");

      // SettlParties
      // Group SettlParties.NoSettlPartyIDs
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_2_2_0;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_49;
        set_field(noSettlPartyIDs_2_2_2_0, FIX::SettlPartyID{"STRING_435149638"}, SettlParties_NoSettlPartyIDs_49);
        set_field(noSettlPartyIDs_2_2_2_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_49);
        set_field(noSettlPartyIDs_2_2_2_0, FIX::SettlPartyRole{450150215}, SettlParties_NoSettlPartyIDs_49);
        all_values.push_back(SettlParties_NoSettlPartyIDs_49);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_96;
          set_field(noSettlPartySubIDs_2_2_0_3_0, FIX::SettlPartySubID{"STRING_782441443"}, SettlPtysSubGrp_NoSettlPartySubIDs_96);
          set_field(noSettlPartySubIDs_2_2_0_3_0, FIX::SettlPartySubIDType{1928088238}, SettlPtysSubGrp_NoSettlPartySubIDs_96);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_96);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_97;
          set_field(noSettlPartySubIDs_2_2_0_3_1, FIX::SettlPartySubID{"STRING_547584581"}, SettlPtysSubGrp_NoSettlPartySubIDs_97);
          set_field(noSettlPartySubIDs_2_2_0_3_1, FIX::SettlPartySubIDType{777238902}, SettlPtysSubGrp_NoSettlPartySubIDs_97);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_97);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_0_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_98;
          set_field(noSettlPartySubIDs_2_2_0_3_2, FIX::SettlPartySubID{"STRING_1894018850"}, SettlPtysSubGrp_NoSettlPartySubIDs_98);
          set_field(noSettlPartySubIDs_2_2_0_3_2, FIX::SettlPartySubIDType{198337535}, SettlPtysSubGrp_NoSettlPartySubIDs_98);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_98);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_0.addGroup(noSettlPartySubIDs_2_2_0_3_2);
        }
        noSettlDetails_2_1_2.addGroup(noSettlPartyIDs_2_2_2_0);
      }
      {
        FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs noSettlPartyIDs_2_2_2_1;
        // SettlParties.NoSettlPartyIDs
        multiset<string> SettlParties_NoSettlPartyIDs_50;
        set_field(noSettlPartyIDs_2_2_2_1, FIX::SettlPartyID{"STRING_646424308"}, SettlParties_NoSettlPartyIDs_50);
        set_field(noSettlPartyIDs_2_2_2_1, FIX::SettlPartyIDSource{'7'}, SettlParties_NoSettlPartyIDs_50);
        set_field(noSettlPartyIDs_2_2_2_1, FIX::SettlPartyRole{1087536592}, SettlParties_NoSettlPartyIDs_50);
        all_values.push_back(SettlParties_NoSettlPartyIDs_50);
        all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs");

        // SettlPtysSubGrp
        // Group SettlPtysSubGrp.NoSettlPartySubIDs
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_0;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_99;
          set_field(noSettlPartySubIDs_2_2_1_3_0, FIX::SettlPartySubID{"STRING_858838578"}, SettlPtysSubGrp_NoSettlPartySubIDs_99);
          set_field(noSettlPartySubIDs_2_2_1_3_0, FIX::SettlPartySubIDType{26138959}, SettlPtysSubGrp_NoSettlPartySubIDs_99);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_99);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_0);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_1;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_100;
          set_field(noSettlPartySubIDs_2_2_1_3_1, FIX::SettlPartySubID{"STRING_697272378"}, SettlPtysSubGrp_NoSettlPartySubIDs_100);
          set_field(noSettlPartySubIDs_2_2_1_3_1, FIX::SettlPartySubIDType{1459024112}, SettlPtysSubGrp_NoSettlPartySubIDs_100);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_100);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_1);
        }
        {
          FIX50SP2::SettlementObligationReport::NoSettlOblig::NoSettlDetails::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_1_3_2;
          // SettlPtysSubGrp.NoSettlPartySubIDs
          multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_101;
          set_field(noSettlPartySubIDs_2_2_1_3_2, FIX::SettlPartySubID{"STRING_689315785"}, SettlPtysSubGrp_NoSettlPartySubIDs_101);
          set_field(noSettlPartySubIDs_2_2_1_3_2, FIX::SettlPartySubIDType{933648269}, SettlPtysSubGrp_NoSettlPartySubIDs_101);
          all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_101);
          all_compo_names.insert("...NoSettlOblig...NoSettlDetails...NoSettlPartyIDs...NoSettlPartySubIDs");

          noSettlPartyIDs_2_2_2_1.addGroup(noSettlPartySubIDs_2_2_1_3_2);
        }
        noSettlDetails_2_1_2.addGroup(noSettlPartyIDs_2_2_2_1);
      }
      noSettlOblig_0_2.addGroup(noSettlDetails_2_1_2);
    }
    msg.addGroup(noSettlOblig_0_2);
  }
  // header
  multiset<string> header_92;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_92);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_979916651"}, header_92);
  set_header_field(msg.getHeader(), FIX::BodyLength{1326302816}, header_92);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_214662301"}, header_92);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1540610398"}, header_92);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_732333072"}, header_92);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_766398416"}, header_92);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1415734956}, header_92);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_92);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1827426625}, header_92);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_219927837"}, header_92);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1142933354"}, header_92);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1397197089"}, header_92);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(5, 45, 23, 15, 4, 2017)}, header_92);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_92);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_92);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_925582702"}, header_92);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{628743330}, header_92);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1920574926"}, header_92);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1784421281"}, header_92);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_654882289"}, header_92);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(17, 15, 46, 2, 7, 2005)}, header_92);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_384865735"}, header_92);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1717241476"}, header_92);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1315164167"}, header_92);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1151264151"}, header_92);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{985492785}, header_92);
  all_values.push_back(header_92);
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
