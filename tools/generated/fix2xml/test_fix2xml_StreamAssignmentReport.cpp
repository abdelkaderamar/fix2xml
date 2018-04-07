#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::StreamAssignmentReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentReport_0;
  set_field(msg, FIX::StreamAsgnReqID{"STRING_1430069908"}, StreamAssignmentReport_0);
  set_field(msg, FIX::StreamAsgnReqType{2}, StreamAssignmentReport_0);
  set_field(msg, FIX::StreamAsgnRptID{"STRING_1972155770"}, StreamAssignmentReport_0);
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
      multiset<string> Parties_NoPartyIDs_135;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_1667460192"}, Parties_NoPartyIDs_135);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_135);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{64}, Parties_NoPartyIDs_135);
      all_values.push_back(Parties_NoPartyIDs_135);
      all_compo_names.insert("...NoAsgnReqs...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_281;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_436159516"}, PtysSubGrp_NoPartySubIDs_281);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_281);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_281);
        all_compo_names.insert("...NoAsgnReqs...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // StrmAsgnRptInstrmtGrp
    // Group StrmAsgnRptInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_0;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_0;
      set_field(noRelatedSym_0_1_0, FIX::EncodedText{"DATA_1169279405"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::EncodedTextLen{1615129971}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::MDStreamID{"STRING_2080136896"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::SettlType{"STRING_7"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::StreamAsgnRejReason{99}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::StreamAsgnType{2}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::Text{"STRING_2029912772"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym");

      // Instrument
      multiset<string> Instrument_77;
      FIX::AttachmentPoint AttachmentPoint_77;
      AttachmentPoint_77.setString("11.420000");
set_field(noRelatedSym_0_1_0, AttachmentPoint_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::CFICode{"STRING_568108620"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::CPProgram{2}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::CPRegType{"STRING_114450414"}, Instrument_77);
      FIX::CapPrice CapPrice_77;
      CapPrice_77.setString("2210530");
set_field(noRelatedSym_0_1_0, CapPrice_77, Instrument_77);
      FIX::ContractMultiplier ContractMultiplier_77;
      ContractMultiplier_77.setString("13482724");
set_field(noRelatedSym_0_1_0, ContractMultiplier_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::ContractMultiplierUnit{2}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::ContractSettlMonth{"MONTHYEAR_192877177"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::CountryOfIssue{"COUNTRY_1180469992"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::CouponPaymentDate{"LOCALMKTDATE_233630674"}, Instrument_77);
      FIX::CouponRate CouponRate_77;
      CouponRate_77.setString("0.470000");
set_field(noRelatedSym_0_1_0, CouponRate_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::CreditRating{"STRING_523959636"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::DatedDate{"LOCALMKTDATE_1663700582"}, Instrument_77);
      FIX::DetachmentPoint DetachmentPoint_77;
      DetachmentPoint_77.setString("0.980000");
set_field(noRelatedSym_0_1_0, DetachmentPoint_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::EncodedIssuer{"DATA_348631759"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::EncodedIssuerLen{989180214}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::EncodedSecurityDesc{"DATA_1182775030"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::EncodedSecurityDescLen{2016091951}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::ExerciseStyle{2}, Instrument_77);
      FIX::Factor Factor_77;
      Factor_77.setString("11209257");
set_field(noRelatedSym_0_1_0, Factor_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::FlexibleIndicator{false}, Instrument_77);
      FIX::FloorPrice FloorPrice_77;
      FloorPrice_77.setString("2366583");
set_field(noRelatedSym_0_1_0, FloorPrice_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::FlowScheduleType{2}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::InstrRegistry{"STRING_1280701957"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1591675255"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::IssueDate{"LOCALMKTDATE_899725248"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::Issuer{"STRING_1412332530"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::ListMethod{1}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::LocaleOfIssue{"STRING_782154372"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::MaturityDate{"LOCALMKTDATE_1399430024"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::MaturityMonthYear{"MONTHYEAR_2133424417"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::MaturityTime{"TZTIMEONLY_2070347860"}, Instrument_77);
      FIX::MinPriceIncrement MinPriceIncrement_77;
      MinPriceIncrement_77.setString("15138804");
set_field(noRelatedSym_0_1_0, MinPriceIncrement_77, Instrument_77);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_77;
      MinPriceIncrementAmount_77.setString("2069938");
set_field(noRelatedSym_0_1_0, MinPriceIncrementAmount_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::NTPositionLimit{1271136668}, Instrument_77);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_77;
      NotionalPercentageOutstanding_77.setString("11.700000");
set_field(noRelatedSym_0_1_0, NotionalPercentageOutstanding_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::OptAttribute{'3'}, Instrument_77);
      FIX::OptPayoutAmount OptPayoutAmount_77;
      OptPayoutAmount_77.setString("3041230");
set_field(noRelatedSym_0_1_0, OptPayoutAmount_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::OptPayoutType{1}, Instrument_77);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_77;
      OriginalNotionalPercentageOutstanding_77.setString("10.550000");
set_field(noRelatedSym_0_1_0, OriginalNotionalPercentageOutstanding_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::Pool{"STRING_828082649"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::PositionLimit{1641938778}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::PriceUnitOfMeasure{"STRING_1176714408"}, Instrument_77);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_77;
      PriceUnitOfMeasureQty_77.setString("4836353");
set_field(noRelatedSym_0_1_0, PriceUnitOfMeasureQty_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::Product{7}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::ProductComplex{"STRING_1045322711"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::PutOrCall{1}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::RedemptionDate{"LOCALMKTDATE_1614078301"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::RepoCollateralSecurityType{"STRING_1433585539"}, Instrument_77);
      FIX::RepurchaseRate RepurchaseRate_77;
      RepurchaseRate_77.setString("9.310000");
set_field(noRelatedSym_0_1_0, RepurchaseRate_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::RepurchaseTerm{1850736608}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::RestructuringType{"STRING_MM"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::SecurityDesc{"STRING_1551022888"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::SecurityExchange{"EXCHANGE_1555041239"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::SecurityGroup{"STRING_389315506"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::SecurityID{"STRING_303264488"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::SecurityIDSource{"STRING_I"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::SecurityStatus{"STRING_2"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::SecuritySubType{"STRING_1085418861"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::SecurityType{"STRING_TAXA"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::Seniority{"STRING_SR"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::SettlMethod{'P'}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::SettleOnOpenFlag{"STRING_1585716936"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::StateOrProvinceOfIssue{"STRING_82255"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::StrikeCurrency{"EUR"}, Instrument_77);
      FIX::StrikeMultiplier StrikeMultiplier_77;
      StrikeMultiplier_77.setString("3999532");
set_field(noRelatedSym_0_1_0, StrikeMultiplier_77, Instrument_77);
      FIX::StrikePrice StrikePrice_77;
      StrikePrice_77.setString("4360591");
set_field(noRelatedSym_0_1_0, StrikePrice_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::StrikePriceBoundaryMethod{1}, Instrument_77);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_77;
      StrikePriceBoundaryPrecision_77.setString("43.190000");
set_field(noRelatedSym_0_1_0, StrikePriceBoundaryPrecision_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::StrikePriceDeterminationMethod{4}, Instrument_77);
      FIX::StrikeValue StrikeValue_77;
      StrikeValue_77.setString("8030177");
set_field(noRelatedSym_0_1_0, StrikeValue_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::Symbol{"STRING_575341825"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::TimeUnit{"STRING_H"}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::UnitOfMeasure{"STRING_USD"}, Instrument_77);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_77;
      UnitOfMeasureQty_77.setString("14455515");
set_field(noRelatedSym_0_1_0, UnitOfMeasureQty_77, Instrument_77);
      set_field(noRelatedSym_0_1_0, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_77);
      all_values.push_back(Instrument_77);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_156;
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_156);
        FIX::ComplexEventPrice ComplexEventPrice_156;
        ComplexEventPrice_156.setString("2383419");
set_field(noComplexEvents_0_0_2_0, ComplexEventPrice_156, ComplexEvents_NoComplexEvents_156);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_156);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_156;
        ComplexEventPriceBoundaryPrecision_156.setString("16.810000");
set_field(noComplexEvents_0_0_2_0, ComplexEventPriceBoundaryPrecision_156, ComplexEvents_NoComplexEvents_156);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_156);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_156);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_156;
        ComplexOptPayoutAmount_156.setString("14226761");
set_field(noComplexEvents_0_0_2_0, ComplexOptPayoutAmount_156, ComplexEvents_NoComplexEvents_156);
        all_values.push_back(ComplexEvents_NoComplexEvents_156);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_325;
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 24, 2, 20, 1, 2009)}, ComplexEventDates_NoComplexEventDates_325);
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 41, 16, 3, 2, 2006)}, ComplexEventDates_NoComplexEventDates_325);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_325);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_665;
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 7, 51)}, ComplexEventTimes_NoComplexEventTimes_665);
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 5, 36)}, ComplexEventTimes_NoComplexEventTimes_665);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_665);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_666;
            set_field(noComplexEventTimes_0_0_0_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 44, 23)}, ComplexEventTimes_NoComplexEventTimes_666);
            set_field(noComplexEventTimes_0_0_0_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 53, 51)}, ComplexEventTimes_NoComplexEventTimes_666);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_666);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_326;
          set_field(noComplexEventDates_0_0_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 15, 50, 19, 9, 2004)}, ComplexEventDates_NoComplexEventDates_326);
          set_field(noComplexEventDates_0_0_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 13, 34, 10, 3, 2016)}, ComplexEventDates_NoComplexEventDates_326);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_326);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_667;
            set_field(noComplexEventTimes_0_0_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 15, 47)}, ComplexEventTimes_NoComplexEventTimes_667);
            set_field(noComplexEventTimes_0_0_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 44, 55)}, ComplexEventTimes_NoComplexEventTimes_667);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_667);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_668;
            set_field(noComplexEventTimes_0_0_0_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 40, 50)}, ComplexEventTimes_NoComplexEventTimes_668);
            set_field(noComplexEventTimes_0_0_0_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 35, 4)}, ComplexEventTimes_NoComplexEventTimes_668);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_668);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_327;
          set_field(noComplexEventDates_0_0_0_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 12, 50, 26, 1, 2000)}, ComplexEventDates_NoComplexEventDates_327);
          set_field(noComplexEventDates_0_0_0_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 35, 58, 18, 7, 2006)}, ComplexEventDates_NoComplexEventDates_327);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_327);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_669;
            set_field(noComplexEventTimes_0_0_0_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 20, 30)}, ComplexEventTimes_NoComplexEventTimes_669);
            set_field(noComplexEventTimes_0_0_0_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 6, 12)}, ComplexEventTimes_NoComplexEventTimes_669);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_669);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_2.addGroup(noComplexEventTimes_0_0_0_2_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_670;
            set_field(noComplexEventTimes_0_0_0_2_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 52, 2)}, ComplexEventTimes_NoComplexEventTimes_670);
            set_field(noComplexEventTimes_0_0_0_2_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 38, 28)}, ComplexEventTimes_NoComplexEventTimes_670);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_670);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_2.addGroup(noComplexEventTimes_0_0_0_2_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_154;
        set_field(noEvents_0_0_2_0, FIX::EventDate{"LOCALMKTDATE_78796953"}, EvntGrp_NoEvents_154);
        FIX::EventPx EventPx_154;
        EventPx_154.setString("20101175");
set_field(noEvents_0_0_2_0, EventPx_154, EvntGrp_NoEvents_154);
        set_field(noEvents_0_0_2_0, FIX::EventText{"STRING_634753073"}, EvntGrp_NoEvents_154);
        set_field(noEvents_0_0_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(4, 15, 3, 11, 3, 2005)}, EvntGrp_NoEvents_154);
        set_field(noEvents_0_0_2_0, FIX::EventType{14}, EvntGrp_NoEvents_154);
        all_values.push_back(EvntGrp_NoEvents_154);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_155;
        set_field(noEvents_0_0_2_1, FIX::EventDate{"LOCALMKTDATE_810798284"}, EvntGrp_NoEvents_155);
        FIX::EventPx EventPx_155;
        EventPx_155.setString("7255338");
set_field(noEvents_0_0_2_1, EventPx_155, EvntGrp_NoEvents_155);
        set_field(noEvents_0_0_2_1, FIX::EventText{"STRING_1095525919"}, EvntGrp_NoEvents_155);
        set_field(noEvents_0_0_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(3, 39, 57, 12, 5, 2009)}, EvntGrp_NoEvents_155);
        set_field(noEvents_0_0_2_1, FIX::EventType{1}, EvntGrp_NoEvents_155);
        all_values.push_back(EvntGrp_NoEvents_155);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_156;
        set_field(noEvents_0_0_2_2, FIX::EventDate{"LOCALMKTDATE_1865498308"}, EvntGrp_NoEvents_156);
        FIX::EventPx EventPx_156;
        EventPx_156.setString("18407372");
set_field(noEvents_0_0_2_2, EventPx_156, EvntGrp_NoEvents_156);
        set_field(noEvents_0_0_2_2, FIX::EventText{"STRING_1785776933"}, EvntGrp_NoEvents_156);
        set_field(noEvents_0_0_2_2, FIX::EventTime{FIX::UTCTIMESTAMP(21, 48, 53, 13, 4, 2014)}, EvntGrp_NoEvents_156);
        set_field(noEvents_0_0_2_2, FIX::EventType{14}, EvntGrp_NoEvents_156);
        all_values.push_back(EvntGrp_NoEvents_156);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_147;
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyID{"STRING_1043272377"}, InstrumentParties_NoInstrumentParties_147);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_147);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyRole{1041187019}, InstrumentParties_NoInstrumentParties_147);
        all_values.push_back(InstrumentParties_NoInstrumentParties_147);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300;
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubID{"STRING_1606549265"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300);
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubIDType{1707378770}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301;
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubID{"STRING_1319067406"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301);
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubIDType{1308575350}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302;
          set_field(noInstrumentPartySubIDs_0_0_0_3_2, FIX::InstrumentPartySubID{"STRING_370693406"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302);
          set_field(noInstrumentPartySubIDs_0_0_0_3_2, FIX::InstrumentPartySubIDType{2044601248}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_148;
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyID{"STRING_256617621"}, InstrumentParties_NoInstrumentParties_148);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_148);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyRole{1626441179}, InstrumentParties_NoInstrumentParties_148);
        all_values.push_back(InstrumentParties_NoInstrumentParties_148);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303;
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubID{"STRING_2082695150"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303);
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubIDType{1398473267}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304;
          set_field(noInstrumentPartySubIDs_0_0_1_3_1, FIX::InstrumentPartySubID{"STRING_118899729"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304);
          set_field(noInstrumentPartySubIDs_0_0_1_3_1, FIX::InstrumentPartySubIDType{1559408266}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_149;
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyID{"STRING_1710028907"}, InstrumentParties_NoInstrumentParties_149);
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_149);
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyRole{1252661864}, InstrumentParties_NoInstrumentParties_149);
        all_values.push_back(InstrumentParties_NoInstrumentParties_149);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305;
          set_field(noInstrumentPartySubIDs_0_0_2_3_0, FIX::InstrumentPartySubID{"STRING_1391262653"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305);
          set_field(noInstrumentPartySubIDs_0_0_2_3_0, FIX::InstrumentPartySubIDType{122644677}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306;
          set_field(noInstrumentPartySubIDs_0_0_2_3_1, FIX::InstrumentPartySubID{"STRING_1645170081"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306);
          set_field(noInstrumentPartySubIDs_0_0_2_3_1, FIX::InstrumentPartySubIDType{666389498}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307;
          set_field(noInstrumentPartySubIDs_0_0_2_3_2, FIX::InstrumentPartySubID{"STRING_735490659"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307);
          set_field(noInstrumentPartySubIDs_0_0_2_3_2, FIX::InstrumentPartySubIDType{1800925632}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_150;
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltID{"STRING_1210970572"}, SecAltIDGrp_NoSecurityAltID_150);
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltIDSource{"STRING_443950609"}, SecAltIDGrp_NoSecurityAltID_150);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_150);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_151;
        set_field(noSecurityAltID_0_0_2_1, FIX::SecurityAltID{"STRING_1063585673"}, SecAltIDGrp_NoSecurityAltID_151);
        set_field(noSecurityAltID_0_0_2_1, FIX::SecurityAltIDSource{"STRING_1640802410"}, SecAltIDGrp_NoSecurityAltID_151);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_151);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_152;
        set_field(noSecurityAltID_0_0_2_2, FIX::SecurityAltID{"STRING_1485137628"}, SecAltIDGrp_NoSecurityAltID_152);
        set_field(noSecurityAltID_0_0_2_2, FIX::SecurityAltIDSource{"STRING_1865154766"}, SecAltIDGrp_NoSecurityAltID_152);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_152);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_154;
      set_field(noRelatedSym_0_1_0, FIX::SecurityXML{"XMLDATA_1099868027"}, SecurityXML_154);
      set_field(noRelatedSym_0_1_0, FIX::SecurityXMLLen{1045032750}, SecurityXML_154);
      set_field(noRelatedSym_0_1_0, FIX::SecurityXMLSchema{"STRING_1036738525"}, SecurityXML_154);
      all_values.push_back(SecurityXML_154);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym..");

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_1;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_1;
      set_field(noRelatedSym_0_1_1, FIX::EncodedText{"DATA_260959729"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::EncodedTextLen{1415726157}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::MDStreamID{"STRING_933856125"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::SettlType{"STRING_C"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::StreamAsgnRejReason{0}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::StreamAsgnType{1}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::Text{"STRING_98411164"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym");

      // Instrument
      multiset<string> Instrument_78;
      FIX::AttachmentPoint AttachmentPoint_78;
      AttachmentPoint_78.setString("60.330000");
set_field(noRelatedSym_0_1_1, AttachmentPoint_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::CFICode{"STRING_1811286923"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::CPProgram{2}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::CPRegType{"STRING_1322900651"}, Instrument_78);
      FIX::CapPrice CapPrice_78;
      CapPrice_78.setString("13738321");
set_field(noRelatedSym_0_1_1, CapPrice_78, Instrument_78);
      FIX::ContractMultiplier ContractMultiplier_78;
      ContractMultiplier_78.setString("542252");
set_field(noRelatedSym_0_1_1, ContractMultiplier_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::ContractMultiplierUnit{2}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::ContractSettlMonth{"MONTHYEAR_574670727"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::CountryOfIssue{"COUNTRY_1445487936"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::CouponPaymentDate{"LOCALMKTDATE_550723544"}, Instrument_78);
      FIX::CouponRate CouponRate_78;
      CouponRate_78.setString("71.600000");
set_field(noRelatedSym_0_1_1, CouponRate_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::CreditRating{"STRING_2111877434"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::DatedDate{"LOCALMKTDATE_1286214203"}, Instrument_78);
      FIX::DetachmentPoint DetachmentPoint_78;
      DetachmentPoint_78.setString("27.920000");
set_field(noRelatedSym_0_1_1, DetachmentPoint_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::EncodedIssuer{"DATA_2132190730"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::EncodedIssuerLen{349701128}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::EncodedSecurityDesc{"DATA_169749753"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::EncodedSecurityDescLen{1048292756}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::ExerciseStyle{1}, Instrument_78);
      FIX::Factor Factor_78;
      Factor_78.setString("16548873");
set_field(noRelatedSym_0_1_1, Factor_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::FlexibleIndicator{false}, Instrument_78);
      FIX::FloorPrice FloorPrice_78;
      FloorPrice_78.setString("5524364");
set_field(noRelatedSym_0_1_1, FloorPrice_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::FlowScheduleType{4}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::InstrRegistry{"STRING_1203847646"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::InterestAccrualDate{"LOCALMKTDATE_589074876"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::IssueDate{"LOCALMKTDATE_1721424997"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::Issuer{"STRING_1796443524"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::ListMethod{0}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::LocaleOfIssue{"STRING_1819836161"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::MaturityDate{"LOCALMKTDATE_1559935909"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::MaturityMonthYear{"MONTHYEAR_665691807"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::MaturityTime{"TZTIMEONLY_2037147055"}, Instrument_78);
      FIX::MinPriceIncrement MinPriceIncrement_78;
      MinPriceIncrement_78.setString("7353529");
set_field(noRelatedSym_0_1_1, MinPriceIncrement_78, Instrument_78);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_78;
      MinPriceIncrementAmount_78.setString("20395239");
set_field(noRelatedSym_0_1_1, MinPriceIncrementAmount_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::NTPositionLimit{2091372338}, Instrument_78);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_78;
      NotionalPercentageOutstanding_78.setString("17.790000");
set_field(noRelatedSym_0_1_1, NotionalPercentageOutstanding_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::OptAttribute{'4'}, Instrument_78);
      FIX::OptPayoutAmount OptPayoutAmount_78;
      OptPayoutAmount_78.setString("13893766");
set_field(noRelatedSym_0_1_1, OptPayoutAmount_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::OptPayoutType{3}, Instrument_78);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_78;
      OriginalNotionalPercentageOutstanding_78.setString("82.290000");
set_field(noRelatedSym_0_1_1, OriginalNotionalPercentageOutstanding_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::Pool{"STRING_1353770413"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::PositionLimit{852885879}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::PriceUnitOfMeasure{"STRING_1338477496"}, Instrument_78);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_78;
      PriceUnitOfMeasureQty_78.setString("12025870");
set_field(noRelatedSym_0_1_1, PriceUnitOfMeasureQty_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::Product{10}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::ProductComplex{"STRING_239286604"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::PutOrCall{1}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::RedemptionDate{"LOCALMKTDATE_2089504509"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::RepoCollateralSecurityType{"STRING_1005250478"}, Instrument_78);
      FIX::RepurchaseRate RepurchaseRate_78;
      RepurchaseRate_78.setString("48.140000");
set_field(noRelatedSym_0_1_1, RepurchaseRate_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::RepurchaseTerm{494457345}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::RestructuringType{"STRING_MM"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::SecurityDesc{"STRING_1044858812"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::SecurityExchange{"EXCHANGE_315136339"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::SecurityGroup{"STRING_1249544106"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::SecurityID{"STRING_618800162"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::SecurityIDSource{"STRING_K"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::SecurityStatus{"STRING_2"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::SecuritySubType{"STRING_291152675"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::SecurityType{"STRING_AMENDED"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::Seniority{"STRING_SB"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::SettlMethod{'C'}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::SettleOnOpenFlag{"STRING_111901388"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::StateOrProvinceOfIssue{"STRING_661681140"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::StrikeCurrency{"CAN"}, Instrument_78);
      FIX::StrikeMultiplier StrikeMultiplier_78;
      StrikeMultiplier_78.setString("11283922");
set_field(noRelatedSym_0_1_1, StrikeMultiplier_78, Instrument_78);
      FIX::StrikePrice StrikePrice_78;
      StrikePrice_78.setString("15140814");
set_field(noRelatedSym_0_1_1, StrikePrice_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::StrikePriceBoundaryMethod{3}, Instrument_78);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_78;
      StrikePriceBoundaryPrecision_78.setString("4.380000");
set_field(noRelatedSym_0_1_1, StrikePriceBoundaryPrecision_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::StrikePriceDeterminationMethod{2}, Instrument_78);
      FIX::StrikeValue StrikeValue_78;
      StrikeValue_78.setString("16948907");
set_field(noRelatedSym_0_1_1, StrikeValue_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::Symbol{"STRING_1932327812"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::SymbolSfx{"STRING_WI"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::TimeUnit{"STRING_D"}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_78);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_78;
      UnitOfMeasureQty_78.setString("17956009");
set_field(noRelatedSym_0_1_1, UnitOfMeasureQty_78, Instrument_78);
      set_field(noRelatedSym_0_1_1, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_78);
      all_values.push_back(Instrument_78);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_157;
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_157);
        FIX::ComplexEventPrice ComplexEventPrice_157;
        ComplexEventPrice_157.setString("6559394");
set_field(noComplexEvents_0_1_2_0, ComplexEventPrice_157, ComplexEvents_NoComplexEvents_157);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_157);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_157;
        ComplexEventPriceBoundaryPrecision_157.setString("73.080000");
set_field(noComplexEvents_0_1_2_0, ComplexEventPriceBoundaryPrecision_157, ComplexEvents_NoComplexEvents_157);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_157);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_157);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_157;
        ComplexOptPayoutAmount_157.setString("11527874");
set_field(noComplexEvents_0_1_2_0, ComplexOptPayoutAmount_157, ComplexEvents_NoComplexEvents_157);
        all_values.push_back(ComplexEvents_NoComplexEvents_157);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_328;
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 7, 14, 4, 4, 2012)}, ComplexEventDates_NoComplexEventDates_328);
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 56, 13, 5, 7, 2012)}, ComplexEventDates_NoComplexEventDates_328);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_328);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_671;
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 51, 41)}, ComplexEventTimes_NoComplexEventTimes_671);
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 53, 37)}, ComplexEventTimes_NoComplexEventTimes_671);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_671);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_672;
            set_field(noComplexEventTimes_0_1_0_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 55, 4)}, ComplexEventTimes_NoComplexEventTimes_672);
            set_field(noComplexEventTimes_0_1_0_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 34, 51)}, ComplexEventTimes_NoComplexEventTimes_672);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_672);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_673;
            set_field(noComplexEventTimes_0_1_0_0_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 58, 53)}, ComplexEventTimes_NoComplexEventTimes_673);
            set_field(noComplexEventTimes_0_1_0_0_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 0, 12)}, ComplexEventTimes_NoComplexEventTimes_673);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_673);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_2);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_158;
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_158);
        FIX::ComplexEventPrice ComplexEventPrice_158;
        ComplexEventPrice_158.setString("17544198");
set_field(noComplexEvents_0_1_2_1, ComplexEventPrice_158, ComplexEvents_NoComplexEvents_158);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_158);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_158;
        ComplexEventPriceBoundaryPrecision_158.setString("29.170000");
set_field(noComplexEvents_0_1_2_1, ComplexEventPriceBoundaryPrecision_158, ComplexEvents_NoComplexEvents_158);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_158);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_158);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_158;
        ComplexOptPayoutAmount_158.setString("87662");
set_field(noComplexEvents_0_1_2_1, ComplexOptPayoutAmount_158, ComplexEvents_NoComplexEvents_158);
        all_values.push_back(ComplexEvents_NoComplexEvents_158);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_329;
          set_field(noComplexEventDates_0_1_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 58, 33, 19, 5, 2011)}, ComplexEventDates_NoComplexEventDates_329);
          set_field(noComplexEventDates_0_1_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 6, 39, 22, 7, 2017)}, ComplexEventDates_NoComplexEventDates_329);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_329);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_674;
            set_field(noComplexEventTimes_0_1_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 8, 59)}, ComplexEventTimes_NoComplexEventTimes_674);
            set_field(noComplexEventTimes_0_1_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 59, 33)}, ComplexEventTimes_NoComplexEventTimes_674);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_674);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_675;
            set_field(noComplexEventTimes_0_1_1_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 42, 12)}, ComplexEventTimes_NoComplexEventTimes_675);
            set_field(noComplexEventTimes_0_1_1_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 40, 59)}, ComplexEventTimes_NoComplexEventTimes_675);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_675);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_676;
            set_field(noComplexEventTimes_0_1_1_0_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 57, 36)}, ComplexEventTimes_NoComplexEventTimes_676);
            set_field(noComplexEventTimes_0_1_1_0_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 39, 26)}, ComplexEventTimes_NoComplexEventTimes_676);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_676);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_2);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_330;
          set_field(noComplexEventDates_0_1_1_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 5, 43, 12, 4, 2012)}, ComplexEventDates_NoComplexEventDates_330);
          set_field(noComplexEventDates_0_1_1_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 8, 53, 24, 3, 2009)}, ComplexEventDates_NoComplexEventDates_330);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_330);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_677;
            set_field(noComplexEventTimes_0_1_1_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 8, 41)}, ComplexEventTimes_NoComplexEventTimes_677);
            set_field(noComplexEventTimes_0_1_1_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 21, 5)}, ComplexEventTimes_NoComplexEventTimes_677);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_677);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_1.addGroup(noComplexEventTimes_0_1_1_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_678;
            set_field(noComplexEventTimes_0_1_1_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 55, 41)}, ComplexEventTimes_NoComplexEventTimes_678);
            set_field(noComplexEventTimes_0_1_1_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 20, 28)}, ComplexEventTimes_NoComplexEventTimes_678);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_678);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_1.addGroup(noComplexEventTimes_0_1_1_1_4_1);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_1);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_159;
        set_field(noComplexEvents_0_1_2_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_159);
        FIX::ComplexEventPrice ComplexEventPrice_159;
        ComplexEventPrice_159.setString("11314765");
set_field(noComplexEvents_0_1_2_2, ComplexEventPrice_159, ComplexEvents_NoComplexEvents_159);
        set_field(noComplexEvents_0_1_2_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_159);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_159;
        ComplexEventPriceBoundaryPrecision_159.setString("51.880000");
set_field(noComplexEvents_0_1_2_2, ComplexEventPriceBoundaryPrecision_159, ComplexEvents_NoComplexEvents_159);
        set_field(noComplexEvents_0_1_2_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_159);
        set_field(noComplexEvents_0_1_2_2, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_159);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_159;
        ComplexOptPayoutAmount_159.setString("11942237");
set_field(noComplexEvents_0_1_2_2, ComplexOptPayoutAmount_159, ComplexEvents_NoComplexEvents_159);
        all_values.push_back(ComplexEvents_NoComplexEvents_159);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_331;
          set_field(noComplexEventDates_0_1_2_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 33, 53, 3, 7, 2007)}, ComplexEventDates_NoComplexEventDates_331);
          set_field(noComplexEventDates_0_1_2_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 19, 45, 13, 6, 2006)}, ComplexEventDates_NoComplexEventDates_331);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_331);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_679;
            set_field(noComplexEventTimes_0_1_2_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 41, 7)}, ComplexEventTimes_NoComplexEventTimes_679);
            set_field(noComplexEventTimes_0_1_2_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 27, 41)}, ComplexEventTimes_NoComplexEventTimes_679);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_679);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_2_3_0.addGroup(noComplexEventTimes_0_1_2_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_680;
            set_field(noComplexEventTimes_0_1_2_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 59, 23)}, ComplexEventTimes_NoComplexEventTimes_680);
            set_field(noComplexEventTimes_0_1_2_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 51, 50)}, ComplexEventTimes_NoComplexEventTimes_680);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_680);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_2_3_0.addGroup(noComplexEventTimes_0_1_2_0_4_1);
          }
          noComplexEvents_0_1_2_2.addGroup(noComplexEventDates_0_1_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_332;
          set_field(noComplexEventDates_0_1_2_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 23, 7, 8, 6, 2012)}, ComplexEventDates_NoComplexEventDates_332);
          set_field(noComplexEventDates_0_1_2_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 37, 46, 12, 11, 2014)}, ComplexEventDates_NoComplexEventDates_332);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_332);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_681;
            set_field(noComplexEventTimes_0_1_2_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 24, 32)}, ComplexEventTimes_NoComplexEventTimes_681);
            set_field(noComplexEventTimes_0_1_2_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 0, 49)}, ComplexEventTimes_NoComplexEventTimes_681);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_681);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_2_3_1.addGroup(noComplexEventTimes_0_1_2_1_4_0);
          }
          noComplexEvents_0_1_2_2.addGroup(noComplexEventDates_0_1_2_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_333;
          set_field(noComplexEventDates_0_1_2_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 49, 44, 27, 2, 2000)}, ComplexEventDates_NoComplexEventDates_333);
          set_field(noComplexEventDates_0_1_2_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 48, 16, 18, 1, 2007)}, ComplexEventDates_NoComplexEventDates_333);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_333);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_682;
            set_field(noComplexEventTimes_0_1_2_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 17, 23)}, ComplexEventTimes_NoComplexEventTimes_682);
            set_field(noComplexEventTimes_0_1_2_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 7, 52)}, ComplexEventTimes_NoComplexEventTimes_682);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_682);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_2_3_2.addGroup(noComplexEventTimes_0_1_2_2_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_683;
            set_field(noComplexEventTimes_0_1_2_2_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 17, 5)}, ComplexEventTimes_NoComplexEventTimes_683);
            set_field(noComplexEventTimes_0_1_2_2_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 57, 52)}, ComplexEventTimes_NoComplexEventTimes_683);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_683);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_2_3_2.addGroup(noComplexEventTimes_0_1_2_2_4_1);
          }
          noComplexEvents_0_1_2_2.addGroup(noComplexEventDates_0_1_2_3_2);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_157;
        set_field(noEvents_0_1_2_0, FIX::EventDate{"LOCALMKTDATE_612848886"}, EvntGrp_NoEvents_157);
        FIX::EventPx EventPx_157;
        EventPx_157.setString("13458935");
set_field(noEvents_0_1_2_0, EventPx_157, EvntGrp_NoEvents_157);
        set_field(noEvents_0_1_2_0, FIX::EventText{"STRING_1089961369"}, EvntGrp_NoEvents_157);
        set_field(noEvents_0_1_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(10, 17, 11, 25, 11, 2007)}, EvntGrp_NoEvents_157);
        set_field(noEvents_0_1_2_0, FIX::EventType{12}, EvntGrp_NoEvents_157);
        all_values.push_back(EvntGrp_NoEvents_157);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_158;
        set_field(noEvents_0_1_2_1, FIX::EventDate{"LOCALMKTDATE_810253834"}, EvntGrp_NoEvents_158);
        FIX::EventPx EventPx_158;
        EventPx_158.setString("2166551");
set_field(noEvents_0_1_2_1, EventPx_158, EvntGrp_NoEvents_158);
        set_field(noEvents_0_1_2_1, FIX::EventText{"STRING_1653510111"}, EvntGrp_NoEvents_158);
        set_field(noEvents_0_1_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(6, 0, 26, 23, 9, 2014)}, EvntGrp_NoEvents_158);
        set_field(noEvents_0_1_2_1, FIX::EventType{13}, EvntGrp_NoEvents_158);
        all_values.push_back(EvntGrp_NoEvents_158);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_159;
        set_field(noEvents_0_1_2_2, FIX::EventDate{"LOCALMKTDATE_27164732"}, EvntGrp_NoEvents_159);
        FIX::EventPx EventPx_159;
        EventPx_159.setString("5995252");
set_field(noEvents_0_1_2_2, EventPx_159, EvntGrp_NoEvents_159);
        set_field(noEvents_0_1_2_2, FIX::EventText{"STRING_268367281"}, EvntGrp_NoEvents_159);
        set_field(noEvents_0_1_2_2, FIX::EventTime{FIX::UTCTIMESTAMP(11, 44, 34, 27, 6, 2004)}, EvntGrp_NoEvents_159);
        set_field(noEvents_0_1_2_2, FIX::EventType{1}, EvntGrp_NoEvents_159);
        all_values.push_back(EvntGrp_NoEvents_159);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_150;
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyID{"STRING_456433610"}, InstrumentParties_NoInstrumentParties_150);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_150);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyRole{116710000}, InstrumentParties_NoInstrumentParties_150);
        all_values.push_back(InstrumentParties_NoInstrumentParties_150);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308;
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubID{"STRING_1316180456"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308);
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubIDType{260599358}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309;
          set_field(noInstrumentPartySubIDs_0_1_0_3_1, FIX::InstrumentPartySubID{"STRING_360709512"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309);
          set_field(noInstrumentPartySubIDs_0_1_0_3_1, FIX::InstrumentPartySubIDType{412505459}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_1);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_151;
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyID{"STRING_1070853193"}, InstrumentParties_NoInstrumentParties_151);
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_151);
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyRole{2066015571}, InstrumentParties_NoInstrumentParties_151);
        all_values.push_back(InstrumentParties_NoInstrumentParties_151);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310;
          set_field(noInstrumentPartySubIDs_0_1_1_3_0, FIX::InstrumentPartySubID{"STRING_2079140419"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310);
          set_field(noInstrumentPartySubIDs_0_1_1_3_0, FIX::InstrumentPartySubIDType{1243439203}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311;
          set_field(noInstrumentPartySubIDs_0_1_1_3_1, FIX::InstrumentPartySubID{"STRING_2134622743"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311);
          set_field(noInstrumentPartySubIDs_0_1_1_3_1, FIX::InstrumentPartySubIDType{1194781819}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_1);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_153;
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltID{"STRING_989630461"}, SecAltIDGrp_NoSecurityAltID_153);
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltIDSource{"STRING_1487079851"}, SecAltIDGrp_NoSecurityAltID_153);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_153);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_154;
        set_field(noSecurityAltID_0_1_2_1, FIX::SecurityAltID{"STRING_927525016"}, SecAltIDGrp_NoSecurityAltID_154);
        set_field(noSecurityAltID_0_1_2_1, FIX::SecurityAltIDSource{"STRING_1589155701"}, SecAltIDGrp_NoSecurityAltID_154);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_154);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_156;
      set_field(noRelatedSym_0_1_1, FIX::SecurityXML{"XMLDATA_1755447132"}, SecurityXML_156);
      set_field(noRelatedSym_0_1_1, FIX::SecurityXMLLen{1466486813}, SecurityXML_156);
      set_field(noRelatedSym_0_1_1, FIX::SecurityXMLSchema{"STRING_1949725664"}, SecurityXML_156);
      all_values.push_back(SecurityXML_156);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym..");

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_1);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_2;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_2;
      set_field(noRelatedSym_0_1_2, FIX::EncodedText{"DATA_1316497668"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_2);
      set_field(noRelatedSym_0_1_2, FIX::EncodedTextLen{73471580}, StrmAsgnRptInstrmtGrp_NoRelatedSym_2);
      set_field(noRelatedSym_0_1_2, FIX::MDStreamID{"STRING_1536635571"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_2);
      set_field(noRelatedSym_0_1_2, FIX::SettlType{"STRING_6"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_2);
      set_field(noRelatedSym_0_1_2, FIX::StreamAsgnRejReason{0}, StrmAsgnRptInstrmtGrp_NoRelatedSym_2);
      set_field(noRelatedSym_0_1_2, FIX::StreamAsgnType{3}, StrmAsgnRptInstrmtGrp_NoRelatedSym_2);
      set_field(noRelatedSym_0_1_2, FIX::Text{"STRING_1524685793"}, StrmAsgnRptInstrmtGrp_NoRelatedSym_2);
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_2);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym");

      // Instrument
      multiset<string> Instrument_79;
      FIX::AttachmentPoint AttachmentPoint_79;
      AttachmentPoint_79.setString("24.900000");
set_field(noRelatedSym_0_1_2, AttachmentPoint_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::CFICode{"STRING_547615830"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::CPProgram{1}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::CPRegType{"STRING_1472207623"}, Instrument_79);
      FIX::CapPrice CapPrice_79;
      CapPrice_79.setString("18637962");
set_field(noRelatedSym_0_1_2, CapPrice_79, Instrument_79);
      FIX::ContractMultiplier ContractMultiplier_79;
      ContractMultiplier_79.setString("19019951");
set_field(noRelatedSym_0_1_2, ContractMultiplier_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::ContractMultiplierUnit{2}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::ContractSettlMonth{"MONTHYEAR_128818097"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::CountryOfIssue{"COUNTRY_825364697"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::CouponPaymentDate{"LOCALMKTDATE_262798141"}, Instrument_79);
      FIX::CouponRate CouponRate_79;
      CouponRate_79.setString("0.200000");
set_field(noRelatedSym_0_1_2, CouponRate_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::CreditRating{"STRING_1595105613"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::DatedDate{"LOCALMKTDATE_194454913"}, Instrument_79);
      FIX::DetachmentPoint DetachmentPoint_79;
      DetachmentPoint_79.setString("92.240000");
set_field(noRelatedSym_0_1_2, DetachmentPoint_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::EncodedIssuer{"DATA_1582244708"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::EncodedIssuerLen{1389236732}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::EncodedSecurityDesc{"DATA_43665859"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::EncodedSecurityDescLen{424391521}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::ExerciseStyle{2}, Instrument_79);
      FIX::Factor Factor_79;
      Factor_79.setString("9711908");
set_field(noRelatedSym_0_1_2, Factor_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::FlexProductEligibilityIndicator{false}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::FlexibleIndicator{false}, Instrument_79);
      FIX::FloorPrice FloorPrice_79;
      FloorPrice_79.setString("2901940");
set_field(noRelatedSym_0_1_2, FloorPrice_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::FlowScheduleType{4}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::InstrRegistry{"STRING_1653294087"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::InstrmtAssignmentMethod{'3'}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::InterestAccrualDate{"LOCALMKTDATE_1204941163"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::IssueDate{"LOCALMKTDATE_1455163309"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::Issuer{"STRING_1804454501"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::ListMethod{0}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::LocaleOfIssue{"STRING_832365454"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::MaturityDate{"LOCALMKTDATE_1554193344"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::MaturityMonthYear{"MONTHYEAR_2074512396"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::MaturityTime{"TZTIMEONLY_326277600"}, Instrument_79);
      FIX::MinPriceIncrement MinPriceIncrement_79;
      MinPriceIncrement_79.setString("8789173");
set_field(noRelatedSym_0_1_2, MinPriceIncrement_79, Instrument_79);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_79;
      MinPriceIncrementAmount_79.setString("17908250");
set_field(noRelatedSym_0_1_2, MinPriceIncrementAmount_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::NTPositionLimit{80789104}, Instrument_79);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_79;
      NotionalPercentageOutstanding_79.setString("8.070000");
set_field(noRelatedSym_0_1_2, NotionalPercentageOutstanding_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::OptAttribute{'1'}, Instrument_79);
      FIX::OptPayoutAmount OptPayoutAmount_79;
      OptPayoutAmount_79.setString("9061538");
set_field(noRelatedSym_0_1_2, OptPayoutAmount_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::OptPayoutType{2}, Instrument_79);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_79;
      OriginalNotionalPercentageOutstanding_79.setString("31.520000");
set_field(noRelatedSym_0_1_2, OriginalNotionalPercentageOutstanding_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::Pool{"STRING_353775766"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::PositionLimit{1021603862}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::PriceUnitOfMeasure{"STRING_1936020475"}, Instrument_79);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_79;
      PriceUnitOfMeasureQty_79.setString("2633569");
set_field(noRelatedSym_0_1_2, PriceUnitOfMeasureQty_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::Product{11}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::ProductComplex{"STRING_212928348"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::PutOrCall{1}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::RedemptionDate{"LOCALMKTDATE_2125155463"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::RepoCollateralSecurityType{"STRING_78991923"}, Instrument_79);
      FIX::RepurchaseRate RepurchaseRate_79;
      RepurchaseRate_79.setString("63.000000");
set_field(noRelatedSym_0_1_2, RepurchaseRate_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::RepurchaseTerm{267865856}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::RestructuringType{"STRING_XR"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::SecurityDesc{"STRING_834796739"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::SecurityExchange{"EXCHANGE_631531477"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::SecurityGroup{"STRING_952238678"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::SecurityID{"STRING_142476401"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::SecurityIDSource{"STRING_8"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::SecurityStatus{"STRING_1"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::SecuritySubType{"STRING_974841855"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::SecurityType{"STRING_PEF"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::Seniority{"STRING_SB"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::SettlMethod{'P'}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::SettleOnOpenFlag{"STRING_574129346"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::StateOrProvinceOfIssue{"STRING_2049505379"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::StrikeCurrency{"GBP"}, Instrument_79);
      FIX::StrikeMultiplier StrikeMultiplier_79;
      StrikeMultiplier_79.setString("18216648");
set_field(noRelatedSym_0_1_2, StrikeMultiplier_79, Instrument_79);
      FIX::StrikePrice StrikePrice_79;
      StrikePrice_79.setString("1405787");
set_field(noRelatedSym_0_1_2, StrikePrice_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::StrikePriceBoundaryMethod{4}, Instrument_79);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_79;
      StrikePriceBoundaryPrecision_79.setString("43.680000");
set_field(noRelatedSym_0_1_2, StrikePriceBoundaryPrecision_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::StrikePriceDeterminationMethod{4}, Instrument_79);
      FIX::StrikeValue StrikeValue_79;
      StrikeValue_79.setString("8397493");
set_field(noRelatedSym_0_1_2, StrikeValue_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::Symbol{"STRING_603989448"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::SymbolSfx{"STRING_CD"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::TimeUnit{"STRING_H"}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_79);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_79;
      UnitOfMeasureQty_79.setString("20952961");
set_field(noRelatedSym_0_1_2, UnitOfMeasureQty_79, Instrument_79);
      set_field(noRelatedSym_0_1_2, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_79);
      all_values.push_back(Instrument_79);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_160;
        set_field(noComplexEvents_0_2_2_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_160);
        FIX::ComplexEventPrice ComplexEventPrice_160;
        ComplexEventPrice_160.setString("20034917");
set_field(noComplexEvents_0_2_2_0, ComplexEventPrice_160, ComplexEvents_NoComplexEvents_160);
        set_field(noComplexEvents_0_2_2_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_160);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_160;
        ComplexEventPriceBoundaryPrecision_160.setString("55.350000");
set_field(noComplexEvents_0_2_2_0, ComplexEventPriceBoundaryPrecision_160, ComplexEvents_NoComplexEvents_160);
        set_field(noComplexEvents_0_2_2_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_160);
        set_field(noComplexEvents_0_2_2_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_160);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_160;
        ComplexOptPayoutAmount_160.setString("1065882");
set_field(noComplexEvents_0_2_2_0, ComplexOptPayoutAmount_160, ComplexEvents_NoComplexEvents_160);
        all_values.push_back(ComplexEvents_NoComplexEvents_160);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_334;
          set_field(noComplexEventDates_0_2_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 36, 12, 15, 3, 2004)}, ComplexEventDates_NoComplexEventDates_334);
          set_field(noComplexEventDates_0_2_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 59, 43, 3, 12, 2006)}, ComplexEventDates_NoComplexEventDates_334);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_334);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_684;
            set_field(noComplexEventTimes_0_2_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 23, 36)}, ComplexEventTimes_NoComplexEventTimes_684);
            set_field(noComplexEventTimes_0_2_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 0, 53)}, ComplexEventTimes_NoComplexEventTimes_684);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_684);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_0);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_0);
        }
        noRelatedSym_0_1_2.addGroup(noComplexEvents_0_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_2_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_161;
        set_field(noComplexEvents_0_2_2_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_161);
        FIX::ComplexEventPrice ComplexEventPrice_161;
        ComplexEventPrice_161.setString("5931834");
set_field(noComplexEvents_0_2_2_1, ComplexEventPrice_161, ComplexEvents_NoComplexEvents_161);
        set_field(noComplexEvents_0_2_2_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_161);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_161;
        ComplexEventPriceBoundaryPrecision_161.setString("3.150000");
set_field(noComplexEvents_0_2_2_1, ComplexEventPriceBoundaryPrecision_161, ComplexEvents_NoComplexEvents_161);
        set_field(noComplexEvents_0_2_2_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_161);
        set_field(noComplexEvents_0_2_2_1, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_161);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_161;
        ComplexOptPayoutAmount_161.setString("9452086");
set_field(noComplexEvents_0_2_2_1, ComplexOptPayoutAmount_161, ComplexEvents_NoComplexEvents_161);
        all_values.push_back(ComplexEvents_NoComplexEvents_161);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_335;
          set_field(noComplexEventDates_0_2_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 56, 13, 7, 11, 2005)}, ComplexEventDates_NoComplexEventDates_335);
          set_field(noComplexEventDates_0_2_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 8, 57, 14, 9, 2004)}, ComplexEventDates_NoComplexEventDates_335);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_335);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_685;
            set_field(noComplexEventTimes_0_2_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 26, 16)}, ComplexEventTimes_NoComplexEventTimes_685);
            set_field(noComplexEventTimes_0_2_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 17, 32)}, ComplexEventTimes_NoComplexEventTimes_685);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_685);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_1_3_0.addGroup(noComplexEventTimes_0_2_1_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_686;
            set_field(noComplexEventTimes_0_2_1_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 10, 32)}, ComplexEventTimes_NoComplexEventTimes_686);
            set_field(noComplexEventTimes_0_2_1_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 16, 9)}, ComplexEventTimes_NoComplexEventTimes_686);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_686);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_1_3_0.addGroup(noComplexEventTimes_0_2_1_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_687;
            set_field(noComplexEventTimes_0_2_1_0_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 5, 33)}, ComplexEventTimes_NoComplexEventTimes_687);
            set_field(noComplexEventTimes_0_2_1_0_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 42, 0)}, ComplexEventTimes_NoComplexEventTimes_687);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_687);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_1_3_0.addGroup(noComplexEventTimes_0_2_1_0_4_2);
          }
          noComplexEvents_0_2_2_1.addGroup(noComplexEventDates_0_2_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_336;
          set_field(noComplexEventDates_0_2_1_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 50, 13, 14, 7, 2004)}, ComplexEventDates_NoComplexEventDates_336);
          set_field(noComplexEventDates_0_2_1_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 34, 47, 22, 9, 2008)}, ComplexEventDates_NoComplexEventDates_336);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_336);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_688;
            set_field(noComplexEventTimes_0_2_1_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 33, 14)}, ComplexEventTimes_NoComplexEventTimes_688);
            set_field(noComplexEventTimes_0_2_1_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 30, 24)}, ComplexEventTimes_NoComplexEventTimes_688);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_688);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_1_3_1.addGroup(noComplexEventTimes_0_2_1_1_4_0);
          }
          noComplexEvents_0_2_2_1.addGroup(noComplexEventDates_0_2_1_3_1);
        }
        noRelatedSym_0_1_2.addGroup(noComplexEvents_0_2_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_160;
        set_field(noEvents_0_2_2_0, FIX::EventDate{"LOCALMKTDATE_1250118718"}, EvntGrp_NoEvents_160);
        FIX::EventPx EventPx_160;
        EventPx_160.setString("19440465");
set_field(noEvents_0_2_2_0, EventPx_160, EvntGrp_NoEvents_160);
        set_field(noEvents_0_2_2_0, FIX::EventText{"STRING_1352954789"}, EvntGrp_NoEvents_160);
        set_field(noEvents_0_2_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(12, 11, 37, 27, 7, 2007)}, EvntGrp_NoEvents_160);
        set_field(noEvents_0_2_2_0, FIX::EventType{5}, EvntGrp_NoEvents_160);
        all_values.push_back(EvntGrp_NoEvents_160);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_2.addGroup(noEvents_0_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_2_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_161;
        set_field(noEvents_0_2_2_1, FIX::EventDate{"LOCALMKTDATE_978855036"}, EvntGrp_NoEvents_161);
        FIX::EventPx EventPx_161;
        EventPx_161.setString("17912772");
set_field(noEvents_0_2_2_1, EventPx_161, EvntGrp_NoEvents_161);
        set_field(noEvents_0_2_2_1, FIX::EventText{"STRING_2140368700"}, EvntGrp_NoEvents_161);
        set_field(noEvents_0_2_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(7, 6, 46, 5, 8, 2000)}, EvntGrp_NoEvents_161);
        set_field(noEvents_0_2_2_1, FIX::EventType{1}, EvntGrp_NoEvents_161);
        all_values.push_back(EvntGrp_NoEvents_161);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_2.addGroup(noEvents_0_2_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_2_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_162;
        set_field(noEvents_0_2_2_2, FIX::EventDate{"LOCALMKTDATE_775148053"}, EvntGrp_NoEvents_162);
        FIX::EventPx EventPx_162;
        EventPx_162.setString("18611632");
set_field(noEvents_0_2_2_2, EventPx_162, EvntGrp_NoEvents_162);
        set_field(noEvents_0_2_2_2, FIX::EventText{"STRING_63790865"}, EvntGrp_NoEvents_162);
        set_field(noEvents_0_2_2_2, FIX::EventTime{FIX::UTCTIMESTAMP(15, 49, 50, 15, 3, 2016)}, EvntGrp_NoEvents_162);
        set_field(noEvents_0_2_2_2, FIX::EventType{1}, EvntGrp_NoEvents_162);
        all_values.push_back(EvntGrp_NoEvents_162);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_2.addGroup(noEvents_0_2_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_152;
        set_field(noInstrumentParties_0_2_2_0, FIX::InstrumentPartyID{"STRING_724088596"}, InstrumentParties_NoInstrumentParties_152);
        set_field(noInstrumentParties_0_2_2_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_152);
        set_field(noInstrumentParties_0_2_2_0, FIX::InstrumentPartyRole{1379251691}, InstrumentParties_NoInstrumentParties_152);
        all_values.push_back(InstrumentParties_NoInstrumentParties_152);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312;
          set_field(noInstrumentPartySubIDs_0_2_0_3_0, FIX::InstrumentPartySubID{"STRING_1669598795"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312);
          set_field(noInstrumentPartySubIDs_0_2_0_3_0, FIX::InstrumentPartySubIDType{717025677}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_0);
        }
        noRelatedSym_0_1_2.addGroup(noInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_2_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_153;
        set_field(noInstrumentParties_0_2_2_1, FIX::InstrumentPartyID{"STRING_393981004"}, InstrumentParties_NoInstrumentParties_153);
        set_field(noInstrumentParties_0_2_2_1, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_153);
        set_field(noInstrumentParties_0_2_2_1, FIX::InstrumentPartyRole{1695880713}, InstrumentParties_NoInstrumentParties_153);
        all_values.push_back(InstrumentParties_NoInstrumentParties_153);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313;
          set_field(noInstrumentPartySubIDs_0_2_1_3_0, FIX::InstrumentPartySubID{"STRING_2058333331"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313);
          set_field(noInstrumentPartySubIDs_0_2_1_3_0, FIX::InstrumentPartySubIDType{1489234112}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_1.addGroup(noInstrumentPartySubIDs_0_2_1_3_0);
        }
        noRelatedSym_0_1_2.addGroup(noInstrumentParties_0_2_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_155;
        set_field(noSecurityAltID_0_2_2_0, FIX::SecurityAltID{"STRING_961765290"}, SecAltIDGrp_NoSecurityAltID_155);
        set_field(noSecurityAltID_0_2_2_0, FIX::SecurityAltIDSource{"STRING_567020050"}, SecAltIDGrp_NoSecurityAltID_155);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_155);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_2.addGroup(noSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_2_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_156;
        set_field(noSecurityAltID_0_2_2_1, FIX::SecurityAltID{"STRING_13964186"}, SecAltIDGrp_NoSecurityAltID_156);
        set_field(noSecurityAltID_0_2_2_1, FIX::SecurityAltIDSource{"STRING_1981932421"}, SecAltIDGrp_NoSecurityAltID_156);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_156);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_2.addGroup(noSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_2_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_157;
        set_field(noSecurityAltID_0_2_2_2, FIX::SecurityAltID{"STRING_136348124"}, SecAltIDGrp_NoSecurityAltID_157);
        set_field(noSecurityAltID_0_2_2_2, FIX::SecurityAltIDSource{"STRING_794135046"}, SecAltIDGrp_NoSecurityAltID_157);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_157);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_2.addGroup(noSecurityAltID_0_2_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_158;
      set_field(noRelatedSym_0_1_2, FIX::SecurityXML{"XMLDATA_609596826"}, SecurityXML_158);
      set_field(noRelatedSym_0_1_2, FIX::SecurityXMLLen{1997511412}, SecurityXML_158);
      set_field(noRelatedSym_0_1_2, FIX::SecurityXMLSchema{"STRING_857925911"}, SecurityXML_158);
      all_values.push_back(SecurityXML_158);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym..");

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_2);
    }
    msg.addGroup(noAsgnReqs_0_0);
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
