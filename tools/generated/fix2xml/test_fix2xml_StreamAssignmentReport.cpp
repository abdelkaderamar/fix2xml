#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/StreamAssignmentReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( StreamAssignmentReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::StreamAssignmentReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentReport_0;
  set_field(msg, FIX::StreamAsgnReqID{"STRING_2022947883"}, StreamAssignmentReport_0);
  set_field(msg, FIX::StreamAsgnReqType{1}, StreamAssignmentReport_0);
  set_field(msg, FIX::StreamAsgnRptID{"STRING_1205420622"}, StreamAssignmentReport_0);
  all_values.push_back(StreamAssignmentReport_0);

  all_compo_names.insert("StreamAssignmentReport");

  // StrmAsgnRptGrp
  // Group StrmAsgnRptGrp.NoAsgnReqs
  {
    FIX50SP2::StreamAssignmentReport::NoAsgnReqs noAsgnReqs_0_0;
    // StrmAsgnRptGrp.NoAsgnReqs
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_145;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_1875498674"}, Parties_NoPartyIDs_145);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'F'}, Parties_NoPartyIDs_145);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{33}, Parties_NoPartyIDs_145);
      all_values.push_back(Parties_NoPartyIDs_145);
      all_compo_names.insert("...NoAsgnReqs...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_289;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_1304035062"}, PtysSubGrp_NoPartySubIDs_289);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_289);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_289);
        all_compo_names.insert("...NoAsgnReqs...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_290;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_375915514"}, PtysSubGrp_NoPartySubIDs_290);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_290);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_290);
        all_compo_names.insert("...NoAsgnReqs...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_291;
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubID{"STRING_230803689"}, PtysSubGrp_NoPartySubIDs_291);
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_291);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_291);
        all_compo_names.insert("...NoAsgnReqs...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_146;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_1473985130"}, Parties_NoPartyIDs_146);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_146);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{32}, Parties_NoPartyIDs_146);
      all_values.push_back(Parties_NoPartyIDs_146);
      all_compo_names.insert("...NoAsgnReqs...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_292;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_474258624"}, PtysSubGrp_NoPartySubIDs_292);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{33}, PtysSubGrp_NoPartySubIDs_292);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_292);
        all_compo_names.insert("...NoAsgnReqs...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // StrmAsgnRptInstrmtGrp
    // Group StrmAsgnRptInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_0;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_0;
      set_field(noRelatedSym_0_1_0, FIX::EncodedText{"DATA_1878270551"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::EncodedTextLen{57117381}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::MDStreamID{"STRING_1502212925"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::SettlType{"STRING_2"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::StreamAsgnRejReason{1}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::StreamAsgnType{2}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::Text{"STRING_1628782165"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym");

      // Instrument
      multiset<string> Instrument_92;
      FIX::AttachmentPoint AttachmentPoint_92;
      AttachmentPoint_92.setString("72.670000");
set_field(noRelatedSym_0_1_0, AttachmentPoint_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::CFICode{"STRING_2057463538"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::CPProgram{99}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::CPRegType{"STRING_276970748"}, Instrument_92);
      FIX::CapPrice CapPrice_92;
      CapPrice_92.setString("11154005");
set_field(noRelatedSym_0_1_0, CapPrice_92, Instrument_92);
      FIX::ContractMultiplier ContractMultiplier_92;
      ContractMultiplier_92.setString("3751603");
set_field(noRelatedSym_0_1_0, ContractMultiplier_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::ContractMultiplierUnit{0}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::ContractSettlMonth{"MONTHYEAR_843415539"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::CountryOfIssue{"COUNTRY_188842552"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::CouponPaymentDate{"LOCALMKTDATE_470966773"}, Instrument_92);
      FIX::CouponRate CouponRate_92;
      CouponRate_92.setString("32.080000");
set_field(noRelatedSym_0_1_0, CouponRate_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::CreditRating{"STRING_1492877614"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::DatedDate{"LOCALMKTDATE_1393436015"}, Instrument_92);
      FIX::DetachmentPoint DetachmentPoint_92;
      DetachmentPoint_92.setString("87.230000");
set_field(noRelatedSym_0_1_0, DetachmentPoint_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::EncodedIssuer{"DATA_190635766"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::EncodedIssuerLen{1624239704}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::EncodedSecurityDesc{"DATA_552043292"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::EncodedSecurityDescLen{1664620896}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::ExerciseStyle{0}, Instrument_92);
      FIX::Factor Factor_92;
      Factor_92.setString("14904791");
set_field(noRelatedSym_0_1_0, Factor_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::FlexibleIndicator{true}, Instrument_92);
      FIX::FloorPrice FloorPrice_92;
      FloorPrice_92.setString("13773930");
set_field(noRelatedSym_0_1_0, FloorPrice_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::FlowScheduleType{1}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::InstrRegistry{"STRING_1833180199"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::InterestAccrualDate{"LOCALMKTDATE_178832143"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::IssueDate{"LOCALMKTDATE_2146798197"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::Issuer{"STRING_1876493586"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::ListMethod{1}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::LocaleOfIssue{"STRING_1628096714"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::MaturityDate{"LOCALMKTDATE_1322257205"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::MaturityMonthYear{"MONTHYEAR_1160782787"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::MaturityTime{"TZTIMEONLY_984859466"}, Instrument_92);
      FIX::MinPriceIncrement MinPriceIncrement_92;
      MinPriceIncrement_92.setString("15992279");
set_field(noRelatedSym_0_1_0, MinPriceIncrement_92, Instrument_92);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_92;
      MinPriceIncrementAmount_92.setString("1286996");
set_field(noRelatedSym_0_1_0, MinPriceIncrementAmount_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::NTPositionLimit{1360019807}, Instrument_92);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_92;
      NotionalPercentageOutstanding_92.setString("92.710000");
set_field(noRelatedSym_0_1_0, NotionalPercentageOutstanding_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::OptAttribute{'9'}, Instrument_92);
      FIX::OptPayoutAmount OptPayoutAmount_92;
      OptPayoutAmount_92.setString("15488623");
set_field(noRelatedSym_0_1_0, OptPayoutAmount_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::OptPayoutType{1}, Instrument_92);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_92;
      OriginalNotionalPercentageOutstanding_92.setString("83.990000");
set_field(noRelatedSym_0_1_0, OriginalNotionalPercentageOutstanding_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::Pool{"STRING_894256326"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::PositionLimit{1674038411}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::PriceUnitOfMeasure{"STRING_1084892093"}, Instrument_92);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_92;
      PriceUnitOfMeasureQty_92.setString("11507944");
set_field(noRelatedSym_0_1_0, PriceUnitOfMeasureQty_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::Product{5}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::ProductComplex{"STRING_602029341"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::PutOrCall{1}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::RedemptionDate{"LOCALMKTDATE_1139812260"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::RepoCollateralSecurityType{"STRING_100550361"}, Instrument_92);
      FIX::RepurchaseRate RepurchaseRate_92;
      RepurchaseRate_92.setString("51.390000");
set_field(noRelatedSym_0_1_0, RepurchaseRate_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::RepurchaseTerm{369721701}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::RestructuringType{"STRING_FR"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::SecurityDesc{"STRING_272051690"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::SecurityExchange{"EXCHANGE_1804232171"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::SecurityGroup{"STRING_1103485371"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::SecurityID{"STRING_271366239"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::SecurityIDSource{"STRING_4"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::SecurityStatus{"STRING_1"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::SecuritySubType{"STRING_1899462953"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::SecurityType{"STRING_TBA"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::Seniority{"STRING_SR"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::SettlMethod{'P'}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::SettleOnOpenFlag{"STRING_159759972"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::StateOrProvinceOfIssue{"STRING_1496287060"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::StrikeCurrency{"GBP"}, Instrument_92);
      FIX::StrikeMultiplier StrikeMultiplier_92;
      StrikeMultiplier_92.setString("3209186");
set_field(noRelatedSym_0_1_0, StrikeMultiplier_92, Instrument_92);
      FIX::StrikePrice StrikePrice_92;
      StrikePrice_92.setString("14982372");
set_field(noRelatedSym_0_1_0, StrikePrice_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::StrikePriceBoundaryMethod{3}, Instrument_92);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_92;
      StrikePriceBoundaryPrecision_92.setString("33.540000");
set_field(noRelatedSym_0_1_0, StrikePriceBoundaryPrecision_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::StrikePriceDeterminationMethod{2}, Instrument_92);
      FIX::StrikeValue StrikeValue_92;
      StrikeValue_92.setString("19240364");
set_field(noRelatedSym_0_1_0, StrikeValue_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::Symbol{"STRING_1412436829"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::TimeUnit{"STRING_Mo"}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_92);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_92;
      UnitOfMeasureQty_92.setString("15587927");
set_field(noRelatedSym_0_1_0, UnitOfMeasureQty_92, Instrument_92);
      set_field(noRelatedSym_0_1_0, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_92);
      all_values.push_back(Instrument_92);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_189;
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_189);
        FIX::ComplexEventPrice ComplexEventPrice_189;
        ComplexEventPrice_189.setString("4238202");
set_field(noComplexEvents_0_0_2_0, ComplexEventPrice_189, ComplexEvents_NoComplexEvents_189);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_189);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_189;
        ComplexEventPriceBoundaryPrecision_189.setString("58.950000");
set_field(noComplexEvents_0_0_2_0, ComplexEventPriceBoundaryPrecision_189, ComplexEvents_NoComplexEvents_189);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_189);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_189);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_189;
        ComplexOptPayoutAmount_189.setString("5410821");
set_field(noComplexEvents_0_0_2_0, ComplexOptPayoutAmount_189, ComplexEvents_NoComplexEvents_189);
        all_values.push_back(ComplexEvents_NoComplexEvents_189);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_380;
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 13, 57, 10, 3, 2011)}, ComplexEventDates_NoComplexEventDates_380);
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 52, 43, 6, 7, 2006)}, ComplexEventDates_NoComplexEventDates_380);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_380);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_768;
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 34, 35)}, ComplexEventTimes_NoComplexEventTimes_768);
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 15, 7)}, ComplexEventTimes_NoComplexEventTimes_768);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_768);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_381;
          set_field(noComplexEventDates_0_0_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 4, 1, 5, 5, 2006)}, ComplexEventDates_NoComplexEventDates_381);
          set_field(noComplexEventDates_0_0_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 55, 41, 2, 7, 2007)}, ComplexEventDates_NoComplexEventDates_381);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_381);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_769;
            set_field(noComplexEventTimes_0_0_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 31, 22)}, ComplexEventTimes_NoComplexEventTimes_769);
            set_field(noComplexEventTimes_0_0_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 27, 46)}, ComplexEventTimes_NoComplexEventTimes_769);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_769);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_770;
            set_field(noComplexEventTimes_0_0_0_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 12, 52)}, ComplexEventTimes_NoComplexEventTimes_770);
            set_field(noComplexEventTimes_0_0_0_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 59, 2)}, ComplexEventTimes_NoComplexEventTimes_770);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_770);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_771;
            set_field(noComplexEventTimes_0_0_0_1_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 6, 12)}, ComplexEventTimes_NoComplexEventTimes_771);
            set_field(noComplexEventTimes_0_0_0_1_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 48, 41)}, ComplexEventTimes_NoComplexEventTimes_771);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_771);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_382;
          set_field(noComplexEventDates_0_0_0_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 23, 31, 14, 11, 2010)}, ComplexEventDates_NoComplexEventDates_382);
          set_field(noComplexEventDates_0_0_0_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 42, 39, 8, 1, 2006)}, ComplexEventDates_NoComplexEventDates_382);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_382);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_772;
            set_field(noComplexEventTimes_0_0_0_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 31, 14)}, ComplexEventTimes_NoComplexEventTimes_772);
            set_field(noComplexEventTimes_0_0_0_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 5, 50)}, ComplexEventTimes_NoComplexEventTimes_772);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_772);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_2.addGroup(noComplexEventTimes_0_0_0_2_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_190;
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_190);
        FIX::ComplexEventPrice ComplexEventPrice_190;
        ComplexEventPrice_190.setString("14879234");
set_field(noComplexEvents_0_0_2_1, ComplexEventPrice_190, ComplexEvents_NoComplexEvents_190);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_190);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_190;
        ComplexEventPriceBoundaryPrecision_190.setString("46.990000");
set_field(noComplexEvents_0_0_2_1, ComplexEventPriceBoundaryPrecision_190, ComplexEvents_NoComplexEvents_190);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_190);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_190);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_190;
        ComplexOptPayoutAmount_190.setString("677036");
set_field(noComplexEvents_0_0_2_1, ComplexOptPayoutAmount_190, ComplexEvents_NoComplexEvents_190);
        all_values.push_back(ComplexEvents_NoComplexEvents_190);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_383;
          set_field(noComplexEventDates_0_0_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 23, 31, 22, 3, 2005)}, ComplexEventDates_NoComplexEventDates_383);
          set_field(noComplexEventDates_0_0_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 15, 50, 14, 8, 2003)}, ComplexEventDates_NoComplexEventDates_383);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_383);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_773;
            set_field(noComplexEventTimes_0_0_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 59, 55)}, ComplexEventTimes_NoComplexEventTimes_773);
            set_field(noComplexEventTimes_0_0_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 0, 26)}, ComplexEventTimes_NoComplexEventTimes_773);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_773);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_384;
          set_field(noComplexEventDates_0_0_1_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 15, 14, 21, 7, 2012)}, ComplexEventDates_NoComplexEventDates_384);
          set_field(noComplexEventDates_0_0_1_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 10, 57, 9, 5, 2017)}, ComplexEventDates_NoComplexEventDates_384);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_384);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_774;
            set_field(noComplexEventTimes_0_0_1_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 58, 13)}, ComplexEventTimes_NoComplexEventTimes_774);
            set_field(noComplexEventTimes_0_0_1_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 2, 23)}, ComplexEventTimes_NoComplexEventTimes_774);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_774);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_1.addGroup(noComplexEventTimes_0_0_1_1_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_385;
          set_field(noComplexEventDates_0_0_1_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 15, 54, 24, 3, 2016)}, ComplexEventDates_NoComplexEventDates_385);
          set_field(noComplexEventDates_0_0_1_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 52, 45, 23, 6, 2004)}, ComplexEventDates_NoComplexEventDates_385);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_385);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_775;
            set_field(noComplexEventTimes_0_0_1_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 15, 48)}, ComplexEventTimes_NoComplexEventTimes_775);
            set_field(noComplexEventTimes_0_0_1_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 23, 27)}, ComplexEventTimes_NoComplexEventTimes_775);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_775);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_2.addGroup(noComplexEventTimes_0_0_1_2_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_776;
            set_field(noComplexEventTimes_0_0_1_2_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 17, 39)}, ComplexEventTimes_NoComplexEventTimes_776);
            set_field(noComplexEventTimes_0_0_1_2_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 42, 46)}, ComplexEventTimes_NoComplexEventTimes_776);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_776);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_2.addGroup(noComplexEventTimes_0_0_1_2_4_1);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_191;
        set_field(noComplexEvents_0_0_2_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_191);
        FIX::ComplexEventPrice ComplexEventPrice_191;
        ComplexEventPrice_191.setString("4561335");
set_field(noComplexEvents_0_0_2_2, ComplexEventPrice_191, ComplexEvents_NoComplexEvents_191);
        set_field(noComplexEvents_0_0_2_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_191);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_191;
        ComplexEventPriceBoundaryPrecision_191.setString("91.600000");
set_field(noComplexEvents_0_0_2_2, ComplexEventPriceBoundaryPrecision_191, ComplexEvents_NoComplexEvents_191);
        set_field(noComplexEvents_0_0_2_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_191);
        set_field(noComplexEvents_0_0_2_2, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_191);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_191;
        ComplexOptPayoutAmount_191.setString("64153");
set_field(noComplexEvents_0_0_2_2, ComplexOptPayoutAmount_191, ComplexEvents_NoComplexEvents_191);
        all_values.push_back(ComplexEvents_NoComplexEvents_191);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_386;
          set_field(noComplexEventDates_0_0_2_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 53, 52, 25, 2, 2017)}, ComplexEventDates_NoComplexEventDates_386);
          set_field(noComplexEventDates_0_0_2_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 12, 32, 4, 12, 2005)}, ComplexEventDates_NoComplexEventDates_386);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_386);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_777;
            set_field(noComplexEventTimes_0_0_2_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 56, 28)}, ComplexEventTimes_NoComplexEventTimes_777);
            set_field(noComplexEventTimes_0_0_2_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 2, 32)}, ComplexEventTimes_NoComplexEventTimes_777);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_777);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_0.addGroup(noComplexEventTimes_0_0_2_0_4_0);
          }
          noComplexEvents_0_0_2_2.addGroup(noComplexEventDates_0_0_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_387;
          set_field(noComplexEventDates_0_0_2_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 26, 11, 13, 11, 2010)}, ComplexEventDates_NoComplexEventDates_387);
          set_field(noComplexEventDates_0_0_2_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 53, 43, 19, 7, 2008)}, ComplexEventDates_NoComplexEventDates_387);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_387);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_778;
            set_field(noComplexEventTimes_0_0_2_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 44, 10)}, ComplexEventTimes_NoComplexEventTimes_778);
            set_field(noComplexEventTimes_0_0_2_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 57, 35)}, ComplexEventTimes_NoComplexEventTimes_778);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_778);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_1.addGroup(noComplexEventTimes_0_0_2_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_779;
            set_field(noComplexEventTimes_0_0_2_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 24, 16)}, ComplexEventTimes_NoComplexEventTimes_779);
            set_field(noComplexEventTimes_0_0_2_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 19, 39)}, ComplexEventTimes_NoComplexEventTimes_779);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_779);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_1.addGroup(noComplexEventTimes_0_0_2_1_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_780;
            set_field(noComplexEventTimes_0_0_2_1_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 5, 41)}, ComplexEventTimes_NoComplexEventTimes_780);
            set_field(noComplexEventTimes_0_0_2_1_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 51, 10)}, ComplexEventTimes_NoComplexEventTimes_780);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_780);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_1.addGroup(noComplexEventTimes_0_0_2_1_4_2);
          }
          noComplexEvents_0_0_2_2.addGroup(noComplexEventDates_0_0_2_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_388;
          set_field(noComplexEventDates_0_0_2_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 53, 17, 19, 6, 2005)}, ComplexEventDates_NoComplexEventDates_388);
          set_field(noComplexEventDates_0_0_2_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 17, 12, 26, 5, 2014)}, ComplexEventDates_NoComplexEventDates_388);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_388);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_781;
            set_field(noComplexEventTimes_0_0_2_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 26, 20)}, ComplexEventTimes_NoComplexEventTimes_781);
            set_field(noComplexEventTimes_0_0_2_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 31, 0)}, ComplexEventTimes_NoComplexEventTimes_781);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_781);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_2.addGroup(noComplexEventTimes_0_0_2_2_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_782;
            set_field(noComplexEventTimes_0_0_2_2_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 5, 26)}, ComplexEventTimes_NoComplexEventTimes_782);
            set_field(noComplexEventTimes_0_0_2_2_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 17, 25)}, ComplexEventTimes_NoComplexEventTimes_782);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_782);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_2.addGroup(noComplexEventTimes_0_0_2_2_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_783;
            set_field(noComplexEventTimes_0_0_2_2_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 10, 55)}, ComplexEventTimes_NoComplexEventTimes_783);
            set_field(noComplexEventTimes_0_0_2_2_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 36, 20)}, ComplexEventTimes_NoComplexEventTimes_783);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_783);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_2.addGroup(noComplexEventTimes_0_0_2_2_4_2);
          }
          noComplexEvents_0_0_2_2.addGroup(noComplexEventDates_0_0_2_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_180;
        set_field(noEvents_0_0_2_0, FIX::EventDate{"LOCALMKTDATE_239129333"}, EvntGrp_NoEvents_180);
        FIX::EventPx EventPx_180;
        EventPx_180.setString("2098326");
set_field(noEvents_0_0_2_0, EventPx_180, EvntGrp_NoEvents_180);
        set_field(noEvents_0_0_2_0, FIX::EventText{"STRING_1586979720"}, EvntGrp_NoEvents_180);
        set_field(noEvents_0_0_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(14, 54, 13, 17, 9, 2001)}, EvntGrp_NoEvents_180);
        set_field(noEvents_0_0_2_0, FIX::EventType{11}, EvntGrp_NoEvents_180);
        all_values.push_back(EvntGrp_NoEvents_180);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_175;
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyID{"STRING_414391669"}, InstrumentParties_NoInstrumentParties_175);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_175);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyRole{2114216470}, InstrumentParties_NoInstrumentParties_175);
        all_values.push_back(InstrumentParties_NoInstrumentParties_175);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352;
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubID{"STRING_759084127"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352);
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubIDType{951254728}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_352);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_176;
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyID{"STRING_22659598"}, InstrumentParties_NoInstrumentParties_176);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_176);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyRole{936634298}, InstrumentParties_NoInstrumentParties_176);
        all_values.push_back(InstrumentParties_NoInstrumentParties_176);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353;
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubID{"STRING_518433469"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353);
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubIDType{800055624}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_353);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354;
          set_field(noInstrumentPartySubIDs_0_0_1_3_1, FIX::InstrumentPartySubID{"STRING_1335289473"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354);
          set_field(noInstrumentPartySubIDs_0_0_1_3_1, FIX::InstrumentPartySubIDType{566404484}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_354);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355;
          set_field(noInstrumentPartySubIDs_0_0_1_3_2, FIX::InstrumentPartySubID{"STRING_2074766262"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355);
          set_field(noInstrumentPartySubIDs_0_0_1_3_2, FIX::InstrumentPartySubIDType{1186502069}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_355);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_177;
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyID{"STRING_777888980"}, InstrumentParties_NoInstrumentParties_177);
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_177);
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyRole{985582194}, InstrumentParties_NoInstrumentParties_177);
        all_values.push_back(InstrumentParties_NoInstrumentParties_177);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356;
          set_field(noInstrumentPartySubIDs_0_0_2_3_0, FIX::InstrumentPartySubID{"STRING_1413284839"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356);
          set_field(noInstrumentPartySubIDs_0_0_2_3_0, FIX::InstrumentPartySubIDType{425078266}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357;
          set_field(noInstrumentPartySubIDs_0_0_2_3_1, FIX::InstrumentPartySubID{"STRING_1800759562"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357);
          set_field(noInstrumentPartySubIDs_0_0_2_3_1, FIX::InstrumentPartySubIDType{1908295005}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_357);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_183;
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltID{"STRING_1329418947"}, SecAltIDGrp_NoSecurityAltID_183);
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltIDSource{"STRING_1407654446"}, SecAltIDGrp_NoSecurityAltID_183);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_183);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_184;
        set_field(noSecurityAltID_0_0_2_1, FIX::SecurityAltID{"STRING_1669030980"}, SecAltIDGrp_NoSecurityAltID_184);
        set_field(noSecurityAltID_0_0_2_1, FIX::SecurityAltIDSource{"STRING_571978244"}, SecAltIDGrp_NoSecurityAltID_184);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_184);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_184;
      set_field(noRelatedSym_0_1_0, FIX::SecurityXML{"XMLDATA_141791908"}, SecurityXML_184);
      set_field(noRelatedSym_0_1_0, FIX::SecurityXMLLen{656678958}, SecurityXML_184);
      set_field(noRelatedSym_0_1_0, FIX::SecurityXMLSchema{"STRING_986369913"}, SecurityXML_184);
      all_values.push_back(SecurityXML_184);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym..");

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_1;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_1;
      set_field(noRelatedSym_0_1_1, FIX::EncodedText{"DATA_1298070878"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::EncodedTextLen{623411781}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::MDStreamID{"STRING_680643377"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::SettlType{"STRING_9"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::StreamAsgnRejReason{99}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::StreamAsgnType{1}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::Text{"STRING_1610820048"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym");

      // Instrument
      multiset<string> Instrument_93;
      FIX::AttachmentPoint AttachmentPoint_93;
      AttachmentPoint_93.setString("71.590000");
set_field(noRelatedSym_0_1_1, AttachmentPoint_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::CFICode{"STRING_1641974079"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::CPProgram{2}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::CPRegType{"STRING_1163872784"}, Instrument_93);
      FIX::CapPrice CapPrice_93;
      CapPrice_93.setString("8297799");
set_field(noRelatedSym_0_1_1, CapPrice_93, Instrument_93);
      FIX::ContractMultiplier ContractMultiplier_93;
      ContractMultiplier_93.setString("5481743");
set_field(noRelatedSym_0_1_1, ContractMultiplier_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::ContractMultiplierUnit{0}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::ContractSettlMonth{"MONTHYEAR_2016281973"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::CountryOfIssue{"COUNTRY_1326063333"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::CouponPaymentDate{"LOCALMKTDATE_147123965"}, Instrument_93);
      FIX::CouponRate CouponRate_93;
      CouponRate_93.setString("5.200000");
set_field(noRelatedSym_0_1_1, CouponRate_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::CreditRating{"STRING_195597998"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::DatedDate{"LOCALMKTDATE_1560408804"}, Instrument_93);
      FIX::DetachmentPoint DetachmentPoint_93;
      DetachmentPoint_93.setString("87.860000");
set_field(noRelatedSym_0_1_1, DetachmentPoint_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::EncodedIssuer{"DATA_1996357560"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::EncodedIssuerLen{1321220161}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::EncodedSecurityDesc{"DATA_1776011147"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::EncodedSecurityDescLen{1178292859}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::ExerciseStyle{2}, Instrument_93);
      FIX::Factor Factor_93;
      Factor_93.setString("12975584");
set_field(noRelatedSym_0_1_1, Factor_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::FlexibleIndicator{true}, Instrument_93);
      FIX::FloorPrice FloorPrice_93;
      FloorPrice_93.setString("19542374");
set_field(noRelatedSym_0_1_1, FloorPrice_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::FlowScheduleType{4}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::InstrRegistry{"STRING_2021253747"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::InstrmtAssignmentMethod{'4'}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::InterestAccrualDate{"LOCALMKTDATE_1269800746"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::IssueDate{"LOCALMKTDATE_1930925104"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::Issuer{"STRING_2004832080"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::ListMethod{0}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::LocaleOfIssue{"STRING_1394261505"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::MaturityDate{"LOCALMKTDATE_221165592"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::MaturityMonthYear{"MONTHYEAR_1467594153"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::MaturityTime{"TZTIMEONLY_1376031374"}, Instrument_93);
      FIX::MinPriceIncrement MinPriceIncrement_93;
      MinPriceIncrement_93.setString("13850383");
set_field(noRelatedSym_0_1_1, MinPriceIncrement_93, Instrument_93);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_93;
      MinPriceIncrementAmount_93.setString("1498904");
set_field(noRelatedSym_0_1_1, MinPriceIncrementAmount_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::NTPositionLimit{1924205728}, Instrument_93);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_93;
      NotionalPercentageOutstanding_93.setString("1.260000");
set_field(noRelatedSym_0_1_1, NotionalPercentageOutstanding_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::OptAttribute{'1'}, Instrument_93);
      FIX::OptPayoutAmount OptPayoutAmount_93;
      OptPayoutAmount_93.setString("11027854");
set_field(noRelatedSym_0_1_1, OptPayoutAmount_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::OptPayoutType{3}, Instrument_93);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_93;
      OriginalNotionalPercentageOutstanding_93.setString("92.550000");
set_field(noRelatedSym_0_1_1, OriginalNotionalPercentageOutstanding_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::Pool{"STRING_1298383412"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::PositionLimit{2036242895}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::PriceUnitOfMeasure{"STRING_1147257324"}, Instrument_93);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_93;
      PriceUnitOfMeasureQty_93.setString("12099794");
set_field(noRelatedSym_0_1_1, PriceUnitOfMeasureQty_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::Product{5}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::ProductComplex{"STRING_178066536"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::PutOrCall{1}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::RedemptionDate{"LOCALMKTDATE_931130372"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::RepoCollateralSecurityType{"STRING_1928337640"}, Instrument_93);
      FIX::RepurchaseRate RepurchaseRate_93;
      RepurchaseRate_93.setString("95.890000");
set_field(noRelatedSym_0_1_1, RepurchaseRate_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::RepurchaseTerm{737884162}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::RestructuringType{"STRING_MR"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::SecurityDesc{"STRING_240839688"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::SecurityExchange{"EXCHANGE_1168049733"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::SecurityGroup{"STRING_1639812108"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::SecurityID{"STRING_24281145"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::SecurityIDSource{"STRING_C"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::SecurityStatus{"STRING_1"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::SecuritySubType{"STRING_1418542650"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::SecurityType{"STRING_SLQN"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::Seniority{"STRING_SR"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::SettlMethod{'C'}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::SettleOnOpenFlag{"STRING_484118485"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::StateOrProvinceOfIssue{"STRING_935433096"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::StrikeCurrency{"GBP"}, Instrument_93);
      FIX::StrikeMultiplier StrikeMultiplier_93;
      StrikeMultiplier_93.setString("9541218");
set_field(noRelatedSym_0_1_1, StrikeMultiplier_93, Instrument_93);
      FIX::StrikePrice StrikePrice_93;
      StrikePrice_93.setString("15265978");
set_field(noRelatedSym_0_1_1, StrikePrice_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::StrikePriceBoundaryMethod{4}, Instrument_93);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_93;
      StrikePriceBoundaryPrecision_93.setString("10.860000");
set_field(noRelatedSym_0_1_1, StrikePriceBoundaryPrecision_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::StrikePriceDeterminationMethod{3}, Instrument_93);
      FIX::StrikeValue StrikeValue_93;
      StrikeValue_93.setString("11774219");
set_field(noRelatedSym_0_1_1, StrikeValue_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::Symbol{"STRING_1832235480"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::TimeUnit{"STRING_Yr"}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::UnitOfMeasure{"STRING_USD"}, Instrument_93);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_93;
      UnitOfMeasureQty_93.setString("20312880");
set_field(noRelatedSym_0_1_1, UnitOfMeasureQty_93, Instrument_93);
      set_field(noRelatedSym_0_1_1, FIX::ValuationMethod{"STRING_FUT"}, Instrument_93);
      all_values.push_back(Instrument_93);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_192;
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_192);
        FIX::ComplexEventPrice ComplexEventPrice_192;
        ComplexEventPrice_192.setString("9873382");
set_field(noComplexEvents_0_1_2_0, ComplexEventPrice_192, ComplexEvents_NoComplexEvents_192);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_192);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_192;
        ComplexEventPriceBoundaryPrecision_192.setString("37.110000");
set_field(noComplexEvents_0_1_2_0, ComplexEventPriceBoundaryPrecision_192, ComplexEvents_NoComplexEvents_192);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_192);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_192);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_192;
        ComplexOptPayoutAmount_192.setString("5159948");
set_field(noComplexEvents_0_1_2_0, ComplexOptPayoutAmount_192, ComplexEvents_NoComplexEvents_192);
        all_values.push_back(ComplexEvents_NoComplexEvents_192);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_389;
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 58, 9, 6, 1, 2007)}, ComplexEventDates_NoComplexEventDates_389);
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 9, 53, 7, 12, 2013)}, ComplexEventDates_NoComplexEventDates_389);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_389);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_784;
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 14, 24)}, ComplexEventTimes_NoComplexEventTimes_784);
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 40, 22)}, ComplexEventTimes_NoComplexEventTimes_784);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_784);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_390;
          set_field(noComplexEventDates_0_1_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 2, 33, 2, 7, 2013)}, ComplexEventDates_NoComplexEventDates_390);
          set_field(noComplexEventDates_0_1_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 27, 42, 13, 6, 2000)}, ComplexEventDates_NoComplexEventDates_390);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_390);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_785;
            set_field(noComplexEventTimes_0_1_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 4, 37)}, ComplexEventTimes_NoComplexEventTimes_785);
            set_field(noComplexEventTimes_0_1_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 44, 0)}, ComplexEventTimes_NoComplexEventTimes_785);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_785);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_391;
          set_field(noComplexEventDates_0_1_0_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 6, 47, 10, 3, 2015)}, ComplexEventDates_NoComplexEventDates_391);
          set_field(noComplexEventDates_0_1_0_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 46, 23, 13, 2, 2017)}, ComplexEventDates_NoComplexEventDates_391);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_391);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_786;
            set_field(noComplexEventTimes_0_1_0_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 9, 26)}, ComplexEventTimes_NoComplexEventTimes_786);
            set_field(noComplexEventTimes_0_1_0_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 24, 38)}, ComplexEventTimes_NoComplexEventTimes_786);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_786);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_2.addGroup(noComplexEventTimes_0_1_0_2_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_787;
            set_field(noComplexEventTimes_0_1_0_2_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 42, 12)}, ComplexEventTimes_NoComplexEventTimes_787);
            set_field(noComplexEventTimes_0_1_0_2_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 49, 36)}, ComplexEventTimes_NoComplexEventTimes_787);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_787);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_2.addGroup(noComplexEventTimes_0_1_0_2_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_2_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_788;
            set_field(noComplexEventTimes_0_1_0_2_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 42, 36)}, ComplexEventTimes_NoComplexEventTimes_788);
            set_field(noComplexEventTimes_0_1_0_2_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 3, 29)}, ComplexEventTimes_NoComplexEventTimes_788);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_788);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_2.addGroup(noComplexEventTimes_0_1_0_2_4_2);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_2);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_193;
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_193);
        FIX::ComplexEventPrice ComplexEventPrice_193;
        ComplexEventPrice_193.setString("5077351");
set_field(noComplexEvents_0_1_2_1, ComplexEventPrice_193, ComplexEvents_NoComplexEvents_193);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_193);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_193;
        ComplexEventPriceBoundaryPrecision_193.setString("21.170000");
set_field(noComplexEvents_0_1_2_1, ComplexEventPriceBoundaryPrecision_193, ComplexEvents_NoComplexEvents_193);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_193);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_193);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_193;
        ComplexOptPayoutAmount_193.setString("7708164");
set_field(noComplexEvents_0_1_2_1, ComplexOptPayoutAmount_193, ComplexEvents_NoComplexEvents_193);
        all_values.push_back(ComplexEvents_NoComplexEvents_193);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_392;
          set_field(noComplexEventDates_0_1_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 38, 15, 23, 3, 2012)}, ComplexEventDates_NoComplexEventDates_392);
          set_field(noComplexEventDates_0_1_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 28, 50, 1, 7, 2015)}, ComplexEventDates_NoComplexEventDates_392);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_392);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_789;
            set_field(noComplexEventTimes_0_1_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 7, 19)}, ComplexEventTimes_NoComplexEventTimes_789);
            set_field(noComplexEventTimes_0_1_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 23, 5)}, ComplexEventTimes_NoComplexEventTimes_789);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_789);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_790;
            set_field(noComplexEventTimes_0_1_1_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 49, 14)}, ComplexEventTimes_NoComplexEventTimes_790);
            set_field(noComplexEventTimes_0_1_1_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 33, 51)}, ComplexEventTimes_NoComplexEventTimes_790);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_790);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_1);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_393;
          set_field(noComplexEventDates_0_1_1_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 29, 15, 5, 1, 2003)}, ComplexEventDates_NoComplexEventDates_393);
          set_field(noComplexEventDates_0_1_1_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 37, 33, 2, 1, 2013)}, ComplexEventDates_NoComplexEventDates_393);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_393);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_791;
            set_field(noComplexEventTimes_0_1_1_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 42, 19)}, ComplexEventTimes_NoComplexEventTimes_791);
            set_field(noComplexEventTimes_0_1_1_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 42, 36)}, ComplexEventTimes_NoComplexEventTimes_791);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_791);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_1.addGroup(noComplexEventTimes_0_1_1_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_792;
            set_field(noComplexEventTimes_0_1_1_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 25, 41)}, ComplexEventTimes_NoComplexEventTimes_792);
            set_field(noComplexEventTimes_0_1_1_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 6, 54)}, ComplexEventTimes_NoComplexEventTimes_792);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_792);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_1.addGroup(noComplexEventTimes_0_1_1_1_4_1);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_1);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_181;
        set_field(noEvents_0_1_2_0, FIX::EventDate{"LOCALMKTDATE_1800885540"}, EvntGrp_NoEvents_181);
        FIX::EventPx EventPx_181;
        EventPx_181.setString("21294724");
set_field(noEvents_0_1_2_0, EventPx_181, EvntGrp_NoEvents_181);
        set_field(noEvents_0_1_2_0, FIX::EventText{"STRING_144921539"}, EvntGrp_NoEvents_181);
        set_field(noEvents_0_1_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(4, 8, 48, 9, 3, 2010)}, EvntGrp_NoEvents_181);
        set_field(noEvents_0_1_2_0, FIX::EventType{8}, EvntGrp_NoEvents_181);
        all_values.push_back(EvntGrp_NoEvents_181);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_182;
        set_field(noEvents_0_1_2_1, FIX::EventDate{"LOCALMKTDATE_262736874"}, EvntGrp_NoEvents_182);
        FIX::EventPx EventPx_182;
        EventPx_182.setString("5565590");
set_field(noEvents_0_1_2_1, EventPx_182, EvntGrp_NoEvents_182);
        set_field(noEvents_0_1_2_1, FIX::EventText{"STRING_560193002"}, EvntGrp_NoEvents_182);
        set_field(noEvents_0_1_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(22, 44, 20, 13, 4, 2006)}, EvntGrp_NoEvents_182);
        set_field(noEvents_0_1_2_1, FIX::EventType{10}, EvntGrp_NoEvents_182);
        all_values.push_back(EvntGrp_NoEvents_182);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_178;
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyID{"STRING_67496897"}, InstrumentParties_NoInstrumentParties_178);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_178);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyRole{541906159}, InstrumentParties_NoInstrumentParties_178);
        all_values.push_back(InstrumentParties_NoInstrumentParties_178);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358;
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubID{"STRING_498329672"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358);
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubIDType{2025829645}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_358);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359;
          set_field(noInstrumentPartySubIDs_0_1_0_3_1, FIX::InstrumentPartySubID{"STRING_404872215"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359);
          set_field(noInstrumentPartySubIDs_0_1_0_3_1, FIX::InstrumentPartySubIDType{484362736}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_359);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_1);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_179;
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyID{"STRING_1679231538"}, InstrumentParties_NoInstrumentParties_179);
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_179);
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyRole{629284276}, InstrumentParties_NoInstrumentParties_179);
        all_values.push_back(InstrumentParties_NoInstrumentParties_179);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360;
          set_field(noInstrumentPartySubIDs_0_1_1_3_0, FIX::InstrumentPartySubID{"STRING_1505253791"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360);
          set_field(noInstrumentPartySubIDs_0_1_1_3_0, FIX::InstrumentPartySubIDType{262051636}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_360);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_0);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_185;
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltID{"STRING_191722152"}, SecAltIDGrp_NoSecurityAltID_185);
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltIDSource{"STRING_2011096554"}, SecAltIDGrp_NoSecurityAltID_185);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_185);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_186;
        set_field(noSecurityAltID_0_1_2_1, FIX::SecurityAltID{"STRING_916711090"}, SecAltIDGrp_NoSecurityAltID_186);
        set_field(noSecurityAltID_0_1_2_1, FIX::SecurityAltIDSource{"STRING_1406904159"}, SecAltIDGrp_NoSecurityAltID_186);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_186);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_187;
        set_field(noSecurityAltID_0_1_2_2, FIX::SecurityAltID{"STRING_126349780"}, SecAltIDGrp_NoSecurityAltID_187);
        set_field(noSecurityAltID_0_1_2_2, FIX::SecurityAltIDSource{"STRING_1473270157"}, SecAltIDGrp_NoSecurityAltID_187);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_187);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_186;
      set_field(noRelatedSym_0_1_1, FIX::SecurityXML{"XMLDATA_1967097161"}, SecurityXML_186);
      set_field(noRelatedSym_0_1_1, FIX::SecurityXMLLen{1869557502}, SecurityXML_186);
      set_field(noRelatedSym_0_1_1, FIX::SecurityXMLSchema{"STRING_1464033771"}, SecurityXML_186);
      all_values.push_back(SecurityXML_186);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym..");

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_1);
    }
    msg.addGroup(noAsgnReqs_0_0);
  }
  // header
  multiset<string> header_93;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_93);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1834318314"}, header_93);
  set_header_field(msg.getHeader(), FIX::BodyLength{1326600697}, header_93);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1011339456"}, header_93);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1787091701"}, header_93);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1313965978"}, header_93);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1644981322"}, header_93);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1854588598}, header_93);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_93);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{39403833}, header_93);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1720154059"}, header_93);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2123389217"}, header_93);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_2065233479"}, header_93);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(2, 9, 57, 6, 5, 2002)}, header_93);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_93);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_93);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_2061379580"}, header_93);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1215217125}, header_93);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1210215314"}, header_93);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1320800091"}, header_93);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1341566905"}, header_93);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(12, 59, 35, 1, 11, 2004)}, header_93);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1632872230"}, header_93);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_390083479"}, header_93);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_345634974"}, header_93);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1130369904"}, header_93);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{97188429}, header_93);
  all_values.push_back(header_93);
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
