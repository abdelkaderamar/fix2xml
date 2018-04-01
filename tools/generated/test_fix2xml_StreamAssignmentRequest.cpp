#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/StreamAssignmentRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( StreamAssignmentRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::StreamAssignmentRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentRequest_0;
  set_field(msg, FIX::StreamAsgnReqID{"STRING_630994915"}, StreamAssignmentRequest_0);
  set_field(msg, FIX::StreamAsgnReqType{1}, StreamAssignmentRequest_0);
  all_values.push_back(StreamAssignmentRequest_0);

  all_compo_names.insert("StreamAssignmentRequest");

  // StrmAsgnReqGrp
  // Group StrmAsgnReqGrp.NoAsgnReqs
  {
    FIX50SP2::StreamAssignmentRequest::NoAsgnReqs noAsgnReqs_0_0;
    // StrmAsgnReqGrp.NoAsgnReqs
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_136;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_974880399"}, Parties_NoPartyIDs_136);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_136);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{35}, Parties_NoPartyIDs_136);
      all_values.push_back(Parties_NoPartyIDs_136);
      all_compo_names.insert("...NoAsgnReqs...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_282;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_282809430"}, PtysSubGrp_NoPartySubIDs_282);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{18}, PtysSubGrp_NoPartySubIDs_282);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_282);
        all_compo_names.insert("...NoAsgnReqs...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // StrmAsgnReqInstrmtGrp
    // Group StrmAsgnReqInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_0;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_0;
      FIX::MDEntrySize MDEntrySize_6;
      MDEntrySize_6.setString("19786901");
set_field(noRelatedSym_0_1_0, MDEntrySize_6, StrmAsgnReqInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::MDStreamID{"STRING_28176291"}, StrmAsgnReqInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::SettlType{"STRING_9"}, StrmAsgnReqInstrmtGrp_NoRelatedSym_0);
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_0);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym");

      // Instrument
      multiset<string> Instrument_80;
      FIX::AttachmentPoint AttachmentPoint_80;
      AttachmentPoint_80.setString("6.080000");
set_field(noRelatedSym_0_1_0, AttachmentPoint_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::CFICode{"STRING_1181382368"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::CPProgram{1}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::CPRegType{"STRING_1887460659"}, Instrument_80);
      FIX::CapPrice CapPrice_80;
      CapPrice_80.setString("11953465");
set_field(noRelatedSym_0_1_0, CapPrice_80, Instrument_80);
      FIX::ContractMultiplier ContractMultiplier_80;
      ContractMultiplier_80.setString("11220239");
set_field(noRelatedSym_0_1_0, ContractMultiplier_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::ContractMultiplierUnit{2}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::ContractSettlMonth{"MONTHYEAR_1989481601"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::CountryOfIssue{"COUNTRY_1731620750"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1873836548"}, Instrument_80);
      FIX::CouponRate CouponRate_80;
      CouponRate_80.setString("38.650000");
set_field(noRelatedSym_0_1_0, CouponRate_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::CreditRating{"STRING_1348212616"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::DatedDate{"LOCALMKTDATE_167944319"}, Instrument_80);
      FIX::DetachmentPoint DetachmentPoint_80;
      DetachmentPoint_80.setString("13.580000");
set_field(noRelatedSym_0_1_0, DetachmentPoint_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::EncodedIssuer{"DATA_1920688471"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::EncodedIssuerLen{374313450}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::EncodedSecurityDesc{"DATA_52633741"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::EncodedSecurityDescLen{404199739}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::ExerciseStyle{1}, Instrument_80);
      FIX::Factor Factor_80;
      Factor_80.setString("3866494");
set_field(noRelatedSym_0_1_0, Factor_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::FlexProductEligibilityIndicator{false}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::FlexibleIndicator{false}, Instrument_80);
      FIX::FloorPrice FloorPrice_80;
      FloorPrice_80.setString("20999168");
set_field(noRelatedSym_0_1_0, FloorPrice_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::FlowScheduleType{0}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::InstrRegistry{"STRING_1613899118"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::InstrmtAssignmentMethod{'2'}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1346105714"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::IssueDate{"LOCALMKTDATE_2028859296"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::Issuer{"STRING_66449131"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::ListMethod{0}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::LocaleOfIssue{"STRING_207185509"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::MaturityDate{"LOCALMKTDATE_1386889740"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::MaturityMonthYear{"MONTHYEAR_408180726"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::MaturityTime{"TZTIMEONLY_1494760661"}, Instrument_80);
      FIX::MinPriceIncrement MinPriceIncrement_80;
      MinPriceIncrement_80.setString("11268667");
set_field(noRelatedSym_0_1_0, MinPriceIncrement_80, Instrument_80);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_80;
      MinPriceIncrementAmount_80.setString("16035272");
set_field(noRelatedSym_0_1_0, MinPriceIncrementAmount_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::NTPositionLimit{469300937}, Instrument_80);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_80;
      NotionalPercentageOutstanding_80.setString("18.860000");
set_field(noRelatedSym_0_1_0, NotionalPercentageOutstanding_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::OptAttribute{'1'}, Instrument_80);
      FIX::OptPayoutAmount OptPayoutAmount_80;
      OptPayoutAmount_80.setString("534380");
set_field(noRelatedSym_0_1_0, OptPayoutAmount_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::OptPayoutType{2}, Instrument_80);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_80;
      OriginalNotionalPercentageOutstanding_80.setString("91.000000");
set_field(noRelatedSym_0_1_0, OriginalNotionalPercentageOutstanding_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::Pool{"STRING_1401650656"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::PositionLimit{897489106}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::PriceUnitOfMeasure{"STRING_1174855479"}, Instrument_80);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_80;
      PriceUnitOfMeasureQty_80.setString("12718025");
set_field(noRelatedSym_0_1_0, PriceUnitOfMeasureQty_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::Product{13}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::ProductComplex{"STRING_1579055218"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::PutOrCall{0}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::RedemptionDate{"LOCALMKTDATE_1761120002"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::RepoCollateralSecurityType{"STRING_1190854821"}, Instrument_80);
      FIX::RepurchaseRate RepurchaseRate_80;
      RepurchaseRate_80.setString("56.520000");
set_field(noRelatedSym_0_1_0, RepurchaseRate_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::RepurchaseTerm{1713553207}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::RestructuringType{"STRING_MM"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::SecurityDesc{"STRING_1997144770"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::SecurityExchange{"EXCHANGE_1948795843"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::SecurityGroup{"STRING_1745180868"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::SecurityID{"STRING_1878520418"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::SecurityIDSource{"STRING_7"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::SecurityStatus{"STRING_1"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::SecuritySubType{"STRING_2085705927"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::SecurityType{"STRING_CDS"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::Seniority{"STRING_SB"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::SettlMethod{'C'}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::SettleOnOpenFlag{"STRING_234034169"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::StateOrProvinceOfIssue{"STRING_836203586"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::StrikeCurrency{"JPY"}, Instrument_80);
      FIX::StrikeMultiplier StrikeMultiplier_80;
      StrikeMultiplier_80.setString("1342451");
set_field(noRelatedSym_0_1_0, StrikeMultiplier_80, Instrument_80);
      FIX::StrikePrice StrikePrice_80;
      StrikePrice_80.setString("19557219");
set_field(noRelatedSym_0_1_0, StrikePrice_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::StrikePriceBoundaryMethod{3}, Instrument_80);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_80;
      StrikePriceBoundaryPrecision_80.setString("6.250000");
set_field(noRelatedSym_0_1_0, StrikePriceBoundaryPrecision_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::StrikePriceDeterminationMethod{3}, Instrument_80);
      FIX::StrikeValue StrikeValue_80;
      StrikeValue_80.setString("7167763");
set_field(noRelatedSym_0_1_0, StrikeValue_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::Symbol{"STRING_1454047435"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::TimeUnit{"STRING_Mo"}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::UnitOfMeasure{"STRING_Gal"}, Instrument_80);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_80;
      UnitOfMeasureQty_80.setString("12549209");
set_field(noRelatedSym_0_1_0, UnitOfMeasureQty_80, Instrument_80);
      set_field(noRelatedSym_0_1_0, FIX::ValuationMethod{"STRING_CDS"}, Instrument_80);
      all_values.push_back(Instrument_80);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_162;
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_162);
        FIX::ComplexEventPrice ComplexEventPrice_162;
        ComplexEventPrice_162.setString("20082239");
set_field(noComplexEvents_0_0_2_0, ComplexEventPrice_162, ComplexEvents_NoComplexEvents_162);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_162);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_162;
        ComplexEventPriceBoundaryPrecision_162.setString("77.110000");
set_field(noComplexEvents_0_0_2_0, ComplexEventPriceBoundaryPrecision_162, ComplexEvents_NoComplexEvents_162);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_162);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_162);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_162;
        ComplexOptPayoutAmount_162.setString("12188644");
set_field(noComplexEvents_0_0_2_0, ComplexOptPayoutAmount_162, ComplexEvents_NoComplexEvents_162);
        all_values.push_back(ComplexEvents_NoComplexEvents_162);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_337;
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 0, 55, 21, 7, 2004)}, ComplexEventDates_NoComplexEventDates_337);
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 55, 33, 20, 2, 2011)}, ComplexEventDates_NoComplexEventDates_337);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_337);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_689;
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 1, 19)}, ComplexEventTimes_NoComplexEventTimes_689);
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 32, 54)}, ComplexEventTimes_NoComplexEventTimes_689);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_689);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_690;
            set_field(noComplexEventTimes_0_0_0_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 29, 42)}, ComplexEventTimes_NoComplexEventTimes_690);
            set_field(noComplexEventTimes_0_0_0_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 43, 34)}, ComplexEventTimes_NoComplexEventTimes_690);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_690);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_338;
          set_field(noComplexEventDates_0_0_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 26, 43, 17, 9, 2009)}, ComplexEventDates_NoComplexEventDates_338);
          set_field(noComplexEventDates_0_0_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 45, 5, 11, 11, 2008)}, ComplexEventDates_NoComplexEventDates_338);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_338);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_691;
            set_field(noComplexEventTimes_0_0_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 13, 25)}, ComplexEventTimes_NoComplexEventTimes_691);
            set_field(noComplexEventTimes_0_0_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 57, 15)}, ComplexEventTimes_NoComplexEventTimes_691);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_691);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_692;
            set_field(noComplexEventTimes_0_0_0_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 44, 6)}, ComplexEventTimes_NoComplexEventTimes_692);
            set_field(noComplexEventTimes_0_0_0_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 41, 40)}, ComplexEventTimes_NoComplexEventTimes_692);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_692);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_1);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_693;
            set_field(noComplexEventTimes_0_0_0_1_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 6, 1)}, ComplexEventTimes_NoComplexEventTimes_693);
            set_field(noComplexEventTimes_0_0_0_1_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 59, 2)}, ComplexEventTimes_NoComplexEventTimes_693);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_693);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_339;
          set_field(noComplexEventDates_0_0_0_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 7, 28, 14, 8, 2004)}, ComplexEventDates_NoComplexEventDates_339);
          set_field(noComplexEventDates_0_0_0_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 54, 58, 1, 11, 2017)}, ComplexEventDates_NoComplexEventDates_339);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_339);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_694;
            set_field(noComplexEventTimes_0_0_0_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 0, 19)}, ComplexEventTimes_NoComplexEventTimes_694);
            set_field(noComplexEventTimes_0_0_0_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 1, 59)}, ComplexEventTimes_NoComplexEventTimes_694);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_694);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_2.addGroup(noComplexEventTimes_0_0_0_2_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_163;
        set_field(noEvents_0_0_2_0, FIX::EventDate{"LOCALMKTDATE_1857497010"}, EvntGrp_NoEvents_163);
        FIX::EventPx EventPx_163;
        EventPx_163.setString("15787905");
set_field(noEvents_0_0_2_0, EventPx_163, EvntGrp_NoEvents_163);
        set_field(noEvents_0_0_2_0, FIX::EventText{"STRING_1679377894"}, EvntGrp_NoEvents_163);
        set_field(noEvents_0_0_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(1, 25, 3, 14, 2, 2015)}, EvntGrp_NoEvents_163);
        set_field(noEvents_0_0_2_0, FIX::EventType{4}, EvntGrp_NoEvents_163);
        all_values.push_back(EvntGrp_NoEvents_163);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_164;
        set_field(noEvents_0_0_2_1, FIX::EventDate{"LOCALMKTDATE_1749354515"}, EvntGrp_NoEvents_164);
        FIX::EventPx EventPx_164;
        EventPx_164.setString("11153203");
set_field(noEvents_0_0_2_1, EventPx_164, EvntGrp_NoEvents_164);
        set_field(noEvents_0_0_2_1, FIX::EventText{"STRING_605317583"}, EvntGrp_NoEvents_164);
        set_field(noEvents_0_0_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(2, 17, 57, 27, 4, 2009)}, EvntGrp_NoEvents_164);
        set_field(noEvents_0_0_2_1, FIX::EventType{4}, EvntGrp_NoEvents_164);
        all_values.push_back(EvntGrp_NoEvents_164);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_154;
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyID{"STRING_988818298"}, InstrumentParties_NoInstrumentParties_154);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_154);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyRole{1581810348}, InstrumentParties_NoInstrumentParties_154);
        all_values.push_back(InstrumentParties_NoInstrumentParties_154);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314;
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubID{"STRING_1999333218"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314);
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubIDType{1429451981}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_314);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315;
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubID{"STRING_2127333085"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315);
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubIDType{1984319151}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316;
          set_field(noInstrumentPartySubIDs_0_0_0_3_2, FIX::InstrumentPartySubID{"STRING_1139465344"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316);
          set_field(noInstrumentPartySubIDs_0_0_0_3_2, FIX::InstrumentPartySubIDType{1558640003}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_155;
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyID{"STRING_1516213397"}, InstrumentParties_NoInstrumentParties_155);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_155);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyRole{1430653516}, InstrumentParties_NoInstrumentParties_155);
        all_values.push_back(InstrumentParties_NoInstrumentParties_155);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317;
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubID{"STRING_1018633080"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317);
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubIDType{858261331}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318;
          set_field(noInstrumentPartySubIDs_0_0_1_3_1, FIX::InstrumentPartySubID{"STRING_278620587"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318);
          set_field(noInstrumentPartySubIDs_0_0_1_3_1, FIX::InstrumentPartySubIDType{1925504343}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_156;
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyID{"STRING_1031363414"}, InstrumentParties_NoInstrumentParties_156);
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_156);
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyRole{893341014}, InstrumentParties_NoInstrumentParties_156);
        all_values.push_back(InstrumentParties_NoInstrumentParties_156);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319;
          set_field(noInstrumentPartySubIDs_0_0_2_3_0, FIX::InstrumentPartySubID{"STRING_1358244541"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319);
          set_field(noInstrumentPartySubIDs_0_0_2_3_0, FIX::InstrumentPartySubIDType{2035843352}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320;
          set_field(noInstrumentPartySubIDs_0_0_2_3_1, FIX::InstrumentPartySubID{"STRING_698851787"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320);
          set_field(noInstrumentPartySubIDs_0_0_2_3_1, FIX::InstrumentPartySubIDType{2084964059}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_158;
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltID{"STRING_130318194"}, SecAltIDGrp_NoSecurityAltID_158);
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltIDSource{"STRING_1879777476"}, SecAltIDGrp_NoSecurityAltID_158);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_158);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_160;
      set_field(noRelatedSym_0_1_0, FIX::SecurityXML{"XMLDATA_1555111327"}, SecurityXML_160);
      set_field(noRelatedSym_0_1_0, FIX::SecurityXMLLen{927042983}, SecurityXML_160);
      set_field(noRelatedSym_0_1_0, FIX::SecurityXMLSchema{"STRING_721112126"}, SecurityXML_160);
      all_values.push_back(SecurityXML_160);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym..");

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_1;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_1;
      FIX::MDEntrySize MDEntrySize_7;
      MDEntrySize_7.setString("4252648");
set_field(noRelatedSym_0_1_1, MDEntrySize_7, StrmAsgnReqInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::MDStreamID{"STRING_361369684"}, StrmAsgnReqInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::SettlType{"STRING_8"}, StrmAsgnReqInstrmtGrp_NoRelatedSym_1);
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_1);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym");

      // Instrument
      multiset<string> Instrument_81;
      FIX::AttachmentPoint AttachmentPoint_81;
      AttachmentPoint_81.setString("44.460000");
set_field(noRelatedSym_0_1_1, AttachmentPoint_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::CFICode{"STRING_1790821665"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::CPProgram{99}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::CPRegType{"STRING_113949949"}, Instrument_81);
      FIX::CapPrice CapPrice_81;
      CapPrice_81.setString("7828033");
set_field(noRelatedSym_0_1_1, CapPrice_81, Instrument_81);
      FIX::ContractMultiplier ContractMultiplier_81;
      ContractMultiplier_81.setString("20947207");
set_field(noRelatedSym_0_1_1, ContractMultiplier_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::ContractMultiplierUnit{0}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::ContractSettlMonth{"MONTHYEAR_589571858"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::CountryOfIssue{"COUNTRY_1377890614"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::CouponPaymentDate{"LOCALMKTDATE_371149052"}, Instrument_81);
      FIX::CouponRate CouponRate_81;
      CouponRate_81.setString("49.390000");
set_field(noRelatedSym_0_1_1, CouponRate_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::CreditRating{"STRING_88668297"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::DatedDate{"LOCALMKTDATE_649769639"}, Instrument_81);
      FIX::DetachmentPoint DetachmentPoint_81;
      DetachmentPoint_81.setString("56.340000");
set_field(noRelatedSym_0_1_1, DetachmentPoint_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::EncodedIssuer{"DATA_1120031711"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::EncodedIssuerLen{530261093}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::EncodedSecurityDesc{"DATA_132083000"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::EncodedSecurityDescLen{609229060}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::ExerciseStyle{0}, Instrument_81);
      FIX::Factor Factor_81;
      Factor_81.setString("204427");
set_field(noRelatedSym_0_1_1, Factor_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::FlexibleIndicator{false}, Instrument_81);
      FIX::FloorPrice FloorPrice_81;
      FloorPrice_81.setString("20188262");
set_field(noRelatedSym_0_1_1, FloorPrice_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::FlowScheduleType{2}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::InstrRegistry{"STRING_1558279873"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::InterestAccrualDate{"LOCALMKTDATE_217958377"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::IssueDate{"LOCALMKTDATE_131908352"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::Issuer{"STRING_1851718852"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::ListMethod{1}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::LocaleOfIssue{"STRING_688139656"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::MaturityDate{"LOCALMKTDATE_2128833298"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::MaturityMonthYear{"MONTHYEAR_222666079"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::MaturityTime{"TZTIMEONLY_1224220398"}, Instrument_81);
      FIX::MinPriceIncrement MinPriceIncrement_81;
      MinPriceIncrement_81.setString("952995");
set_field(noRelatedSym_0_1_1, MinPriceIncrement_81, Instrument_81);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_81;
      MinPriceIncrementAmount_81.setString("10054694");
set_field(noRelatedSym_0_1_1, MinPriceIncrementAmount_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::NTPositionLimit{1171457496}, Instrument_81);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_81;
      NotionalPercentageOutstanding_81.setString("29.450000");
set_field(noRelatedSym_0_1_1, NotionalPercentageOutstanding_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::OptAttribute{'1'}, Instrument_81);
      FIX::OptPayoutAmount OptPayoutAmount_81;
      OptPayoutAmount_81.setString("4018644");
set_field(noRelatedSym_0_1_1, OptPayoutAmount_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::OptPayoutType{3}, Instrument_81);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_81;
      OriginalNotionalPercentageOutstanding_81.setString("25.900000");
set_field(noRelatedSym_0_1_1, OriginalNotionalPercentageOutstanding_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::Pool{"STRING_490532759"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::PositionLimit{598897988}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::PriceUnitOfMeasure{"STRING_1610564470"}, Instrument_81);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_81;
      PriceUnitOfMeasureQty_81.setString("11291590");
set_field(noRelatedSym_0_1_1, PriceUnitOfMeasureQty_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::Product{1}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::ProductComplex{"STRING_72309882"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::PutOrCall{1}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::RedemptionDate{"LOCALMKTDATE_447030282"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::RepoCollateralSecurityType{"STRING_1380390730"}, Instrument_81);
      FIX::RepurchaseRate RepurchaseRate_81;
      RepurchaseRate_81.setString("34.650000");
set_field(noRelatedSym_0_1_1, RepurchaseRate_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::RepurchaseTerm{318372931}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::RestructuringType{"STRING_FR"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::SecurityDesc{"STRING_2106963338"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::SecurityExchange{"EXCHANGE_1744826907"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::SecurityGroup{"STRING_889264501"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::SecurityID{"STRING_91388042"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::SecurityIDSource{"STRING_E"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::SecurityStatus{"STRING_2"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::SecuritySubType{"STRING_779527699"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::SecurityType{"STRING_EUCD"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::Seniority{"STRING_SB"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::SettlMethod{'P'}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::SettleOnOpenFlag{"STRING_1525711360"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::StateOrProvinceOfIssue{"STRING_549244434"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::StrikeCurrency{"CAN"}, Instrument_81);
      FIX::StrikeMultiplier StrikeMultiplier_81;
      StrikeMultiplier_81.setString("21442857");
set_field(noRelatedSym_0_1_1, StrikeMultiplier_81, Instrument_81);
      FIX::StrikePrice StrikePrice_81;
      StrikePrice_81.setString("14295864");
set_field(noRelatedSym_0_1_1, StrikePrice_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::StrikePriceBoundaryMethod{2}, Instrument_81);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_81;
      StrikePriceBoundaryPrecision_81.setString("46.750000");
set_field(noRelatedSym_0_1_1, StrikePriceBoundaryPrecision_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::StrikePriceDeterminationMethod{3}, Instrument_81);
      FIX::StrikeValue StrikeValue_81;
      StrikeValue_81.setString("16517169");
set_field(noRelatedSym_0_1_1, StrikeValue_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::Symbol{"STRING_1347069252"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::TimeUnit{"STRING_D"}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::UnitOfMeasure{"STRING_tn"}, Instrument_81);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_81;
      UnitOfMeasureQty_81.setString("15035734");
set_field(noRelatedSym_0_1_1, UnitOfMeasureQty_81, Instrument_81);
      set_field(noRelatedSym_0_1_1, FIX::ValuationMethod{"STRING_CDS"}, Instrument_81);
      all_values.push_back(Instrument_81);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_163;
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_163);
        FIX::ComplexEventPrice ComplexEventPrice_163;
        ComplexEventPrice_163.setString("3915763");
set_field(noComplexEvents_0_1_2_0, ComplexEventPrice_163, ComplexEvents_NoComplexEvents_163);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_163);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_163;
        ComplexEventPriceBoundaryPrecision_163.setString("66.500000");
set_field(noComplexEvents_0_1_2_0, ComplexEventPriceBoundaryPrecision_163, ComplexEvents_NoComplexEvents_163);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_163);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_163);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_163;
        ComplexOptPayoutAmount_163.setString("21031246");
set_field(noComplexEvents_0_1_2_0, ComplexOptPayoutAmount_163, ComplexEvents_NoComplexEvents_163);
        all_values.push_back(ComplexEvents_NoComplexEvents_163);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_340;
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 38, 47, 1, 12, 2000)}, ComplexEventDates_NoComplexEventDates_340);
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 7, 58, 27, 12, 2003)}, ComplexEventDates_NoComplexEventDates_340);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_340);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_695;
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 41, 48)}, ComplexEventTimes_NoComplexEventTimes_695);
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 31, 41)}, ComplexEventTimes_NoComplexEventTimes_695);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_695);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_164;
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_164);
        FIX::ComplexEventPrice ComplexEventPrice_164;
        ComplexEventPrice_164.setString("20030213");
set_field(noComplexEvents_0_1_2_1, ComplexEventPrice_164, ComplexEvents_NoComplexEvents_164);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_164);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_164;
        ComplexEventPriceBoundaryPrecision_164.setString("91.900000");
set_field(noComplexEvents_0_1_2_1, ComplexEventPriceBoundaryPrecision_164, ComplexEvents_NoComplexEvents_164);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_164);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_164);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_164;
        ComplexOptPayoutAmount_164.setString("14740302");
set_field(noComplexEvents_0_1_2_1, ComplexOptPayoutAmount_164, ComplexEvents_NoComplexEvents_164);
        all_values.push_back(ComplexEvents_NoComplexEvents_164);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_341;
          set_field(noComplexEventDates_0_1_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 34, 34, 1, 10, 2014)}, ComplexEventDates_NoComplexEventDates_341);
          set_field(noComplexEventDates_0_1_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 7, 34, 0, 7, 2013)}, ComplexEventDates_NoComplexEventDates_341);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_341);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_696;
            set_field(noComplexEventTimes_0_1_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 47, 1)}, ComplexEventTimes_NoComplexEventTimes_696);
            set_field(noComplexEventTimes_0_1_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 24, 43)}, ComplexEventTimes_NoComplexEventTimes_696);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_696);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_0);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_342;
          set_field(noComplexEventDates_0_1_1_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 33, 25, 4, 3, 2011)}, ComplexEventDates_NoComplexEventDates_342);
          set_field(noComplexEventDates_0_1_1_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 44, 33, 19, 6, 2016)}, ComplexEventDates_NoComplexEventDates_342);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_342);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_697;
            set_field(noComplexEventTimes_0_1_1_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 46, 32)}, ComplexEventTimes_NoComplexEventTimes_697);
            set_field(noComplexEventTimes_0_1_1_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 55, 6)}, ComplexEventTimes_NoComplexEventTimes_697);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_697);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_1.addGroup(noComplexEventTimes_0_1_1_1_4_0);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_1);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_165;
        set_field(noComplexEvents_0_1_2_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_165);
        FIX::ComplexEventPrice ComplexEventPrice_165;
        ComplexEventPrice_165.setString("19579955");
set_field(noComplexEvents_0_1_2_2, ComplexEventPrice_165, ComplexEvents_NoComplexEvents_165);
        set_field(noComplexEvents_0_1_2_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_165);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_165;
        ComplexEventPriceBoundaryPrecision_165.setString("91.560000");
set_field(noComplexEvents_0_1_2_2, ComplexEventPriceBoundaryPrecision_165, ComplexEvents_NoComplexEvents_165);
        set_field(noComplexEvents_0_1_2_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_165);
        set_field(noComplexEvents_0_1_2_2, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_165);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_165;
        ComplexOptPayoutAmount_165.setString("12003428");
set_field(noComplexEvents_0_1_2_2, ComplexOptPayoutAmount_165, ComplexEvents_NoComplexEvents_165);
        all_values.push_back(ComplexEvents_NoComplexEvents_165);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_343;
          set_field(noComplexEventDates_0_1_2_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 34, 33, 18, 6, 2006)}, ComplexEventDates_NoComplexEventDates_343);
          set_field(noComplexEventDates_0_1_2_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 2, 47, 13, 1, 2015)}, ComplexEventDates_NoComplexEventDates_343);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_343);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_698;
            set_field(noComplexEventTimes_0_1_2_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 46, 53)}, ComplexEventTimes_NoComplexEventTimes_698);
            set_field(noComplexEventTimes_0_1_2_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 41, 56)}, ComplexEventTimes_NoComplexEventTimes_698);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_698);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_2_3_0.addGroup(noComplexEventTimes_0_1_2_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_699;
            set_field(noComplexEventTimes_0_1_2_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 42, 10)}, ComplexEventTimes_NoComplexEventTimes_699);
            set_field(noComplexEventTimes_0_1_2_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 2, 32)}, ComplexEventTimes_NoComplexEventTimes_699);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_699);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_2_3_0.addGroup(noComplexEventTimes_0_1_2_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_700;
            set_field(noComplexEventTimes_0_1_2_0_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 59, 27)}, ComplexEventTimes_NoComplexEventTimes_700);
            set_field(noComplexEventTimes_0_1_2_0_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 45, 24)}, ComplexEventTimes_NoComplexEventTimes_700);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_700);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_2_3_0.addGroup(noComplexEventTimes_0_1_2_0_4_2);
          }
          noComplexEvents_0_1_2_2.addGroup(noComplexEventDates_0_1_2_3_0);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_165;
        set_field(noEvents_0_1_2_0, FIX::EventDate{"LOCALMKTDATE_704833659"}, EvntGrp_NoEvents_165);
        FIX::EventPx EventPx_165;
        EventPx_165.setString("12161959");
set_field(noEvents_0_1_2_0, EventPx_165, EvntGrp_NoEvents_165);
        set_field(noEvents_0_1_2_0, FIX::EventText{"STRING_1200636079"}, EvntGrp_NoEvents_165);
        set_field(noEvents_0_1_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(12, 27, 17, 18, 6, 2008)}, EvntGrp_NoEvents_165);
        set_field(noEvents_0_1_2_0, FIX::EventType{17}, EvntGrp_NoEvents_165);
        all_values.push_back(EvntGrp_NoEvents_165);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_166;
        set_field(noEvents_0_1_2_1, FIX::EventDate{"LOCALMKTDATE_295222805"}, EvntGrp_NoEvents_166);
        FIX::EventPx EventPx_166;
        EventPx_166.setString("7834653");
set_field(noEvents_0_1_2_1, EventPx_166, EvntGrp_NoEvents_166);
        set_field(noEvents_0_1_2_1, FIX::EventText{"STRING_1886239732"}, EvntGrp_NoEvents_166);
        set_field(noEvents_0_1_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(5, 26, 49, 20, 2, 2013)}, EvntGrp_NoEvents_166);
        set_field(noEvents_0_1_2_1, FIX::EventType{10}, EvntGrp_NoEvents_166);
        all_values.push_back(EvntGrp_NoEvents_166);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_167;
        set_field(noEvents_0_1_2_2, FIX::EventDate{"LOCALMKTDATE_1838502795"}, EvntGrp_NoEvents_167);
        FIX::EventPx EventPx_167;
        EventPx_167.setString("16123670");
set_field(noEvents_0_1_2_2, EventPx_167, EvntGrp_NoEvents_167);
        set_field(noEvents_0_1_2_2, FIX::EventText{"STRING_1946385928"}, EvntGrp_NoEvents_167);
        set_field(noEvents_0_1_2_2, FIX::EventTime{FIX::UTCTIMESTAMP(10, 12, 19, 14, 7, 2008)}, EvntGrp_NoEvents_167);
        set_field(noEvents_0_1_2_2, FIX::EventType{6}, EvntGrp_NoEvents_167);
        all_values.push_back(EvntGrp_NoEvents_167);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_157;
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyID{"STRING_2096654034"}, InstrumentParties_NoInstrumentParties_157);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_157);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyRole{1415532932}, InstrumentParties_NoInstrumentParties_157);
        all_values.push_back(InstrumentParties_NoInstrumentParties_157);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321;
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubID{"STRING_558453196"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321);
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubIDType{1909225537}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_158;
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyID{"STRING_1610945105"}, InstrumentParties_NoInstrumentParties_158);
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_158);
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyRole{56964694}, InstrumentParties_NoInstrumentParties_158);
        all_values.push_back(InstrumentParties_NoInstrumentParties_158);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322;
          set_field(noInstrumentPartySubIDs_0_1_1_3_0, FIX::InstrumentPartySubID{"STRING_1505588216"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322);
          set_field(noInstrumentPartySubIDs_0_1_1_3_0, FIX::InstrumentPartySubIDType{585754453}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323;
          set_field(noInstrumentPartySubIDs_0_1_1_3_1, FIX::InstrumentPartySubID{"STRING_925427542"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323);
          set_field(noInstrumentPartySubIDs_0_1_1_3_1, FIX::InstrumentPartySubIDType{815588955}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324;
          set_field(noInstrumentPartySubIDs_0_1_1_3_2, FIX::InstrumentPartySubID{"STRING_284836674"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324);
          set_field(noInstrumentPartySubIDs_0_1_1_3_2, FIX::InstrumentPartySubIDType{2136692666}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_2);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_159;
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltID{"STRING_354554198"}, SecAltIDGrp_NoSecurityAltID_159);
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltIDSource{"STRING_956753867"}, SecAltIDGrp_NoSecurityAltID_159);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_159);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_160;
        set_field(noSecurityAltID_0_1_2_1, FIX::SecurityAltID{"STRING_1154781335"}, SecAltIDGrp_NoSecurityAltID_160);
        set_field(noSecurityAltID_0_1_2_1, FIX::SecurityAltIDSource{"STRING_1966921226"}, SecAltIDGrp_NoSecurityAltID_160);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_160);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_162;
      set_field(noRelatedSym_0_1_1, FIX::SecurityXML{"XMLDATA_755656147"}, SecurityXML_162);
      set_field(noRelatedSym_0_1_1, FIX::SecurityXMLLen{1491905529}, SecurityXML_162);
      set_field(noRelatedSym_0_1_1, FIX::SecurityXMLSchema{"STRING_1815113356"}, SecurityXML_162);
      all_values.push_back(SecurityXML_162);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym..");

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_1);
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
