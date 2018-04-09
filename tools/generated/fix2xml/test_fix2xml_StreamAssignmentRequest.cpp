#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::StreamAssignmentRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentRequest_0;
  set_field(msg, FIX::StreamAsgnReqID{"STRING_1974665486"}, StreamAssignmentRequest_0);
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
      multiset<string> Parties_NoPartyIDs_147;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_1040804220"}, Parties_NoPartyIDs_147);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_147);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{8}, Parties_NoPartyIDs_147);
      all_values.push_back(Parties_NoPartyIDs_147);
      all_compo_names.insert("...NoAsgnReqs...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_293;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_1039250403"}, PtysSubGrp_NoPartySubIDs_293);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_293);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_293);
        all_compo_names.insert("...NoAsgnReqs...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_294;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_1548310434"}, PtysSubGrp_NoPartySubIDs_294);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_294);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_294);
        all_compo_names.insert("...NoAsgnReqs...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_148;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_1409125461"}, Parties_NoPartyIDs_148);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_148);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{3}, Parties_NoPartyIDs_148);
      all_values.push_back(Parties_NoPartyIDs_148);
      all_compo_names.insert("...NoAsgnReqs...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_295;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_1536163814"}, PtysSubGrp_NoPartySubIDs_295);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_295);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_295);
        all_compo_names.insert("...NoAsgnReqs...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // StrmAsgnReqInstrmtGrp
    // Group StrmAsgnReqInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_0;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_0;
      FIX::MDEntrySize MDEntrySize_8;
      MDEntrySize_8.setString("1748017");
set_field(noRelatedSym_0_1_0, MDEntrySize_8, StrmAsgnReqInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::MDStreamID{"STRING_1277393640"}, StrmAsgnReqInstrmtGrp_NoRelatedSym_0);
      set_field(noRelatedSym_0_1_0, FIX::SettlType{"STRING_1"}, StrmAsgnReqInstrmtGrp_NoRelatedSym_0);
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_0);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym");

      // Instrument
      multiset<string> Instrument_94;
      FIX::AttachmentPoint AttachmentPoint_94;
      AttachmentPoint_94.setString("47.700000");
set_field(noRelatedSym_0_1_0, AttachmentPoint_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::CFICode{"STRING_1980536620"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::CPProgram{2}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::CPRegType{"STRING_1053652909"}, Instrument_94);
      FIX::CapPrice CapPrice_94;
      CapPrice_94.setString("18851332");
set_field(noRelatedSym_0_1_0, CapPrice_94, Instrument_94);
      FIX::ContractMultiplier ContractMultiplier_94;
      ContractMultiplier_94.setString("9387824");
set_field(noRelatedSym_0_1_0, ContractMultiplier_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::ContractMultiplierUnit{0}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::ContractSettlMonth{"MONTHYEAR_195304194"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::CountryOfIssue{"COUNTRY_34241340"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1060141770"}, Instrument_94);
      FIX::CouponRate CouponRate_94;
      CouponRate_94.setString("1.320000");
set_field(noRelatedSym_0_1_0, CouponRate_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::CreditRating{"STRING_185273442"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::DatedDate{"LOCALMKTDATE_1855998514"}, Instrument_94);
      FIX::DetachmentPoint DetachmentPoint_94;
      DetachmentPoint_94.setString("43.520000");
set_field(noRelatedSym_0_1_0, DetachmentPoint_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::EncodedIssuer{"DATA_1927880546"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::EncodedIssuerLen{465976473}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::EncodedSecurityDesc{"DATA_86390319"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::EncodedSecurityDescLen{819647301}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::ExerciseStyle{1}, Instrument_94);
      FIX::Factor Factor_94;
      Factor_94.setString("16347007");
set_field(noRelatedSym_0_1_0, Factor_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::FlexProductEligibilityIndicator{false}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::FlexibleIndicator{false}, Instrument_94);
      FIX::FloorPrice FloorPrice_94;
      FloorPrice_94.setString("20546018");
set_field(noRelatedSym_0_1_0, FloorPrice_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::FlowScheduleType{4}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::InstrRegistry{"STRING_1528755465"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1209839027"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::IssueDate{"LOCALMKTDATE_62995965"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::Issuer{"STRING_1618083740"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::ListMethod{0}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::LocaleOfIssue{"STRING_2053429894"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::MaturityDate{"LOCALMKTDATE_78924862"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::MaturityMonthYear{"MONTHYEAR_172801992"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::MaturityTime{"TZTIMEONLY_1594627599"}, Instrument_94);
      FIX::MinPriceIncrement MinPriceIncrement_94;
      MinPriceIncrement_94.setString("11325777");
set_field(noRelatedSym_0_1_0, MinPriceIncrement_94, Instrument_94);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_94;
      MinPriceIncrementAmount_94.setString("20579352");
set_field(noRelatedSym_0_1_0, MinPriceIncrementAmount_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::NTPositionLimit{385926366}, Instrument_94);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_94;
      NotionalPercentageOutstanding_94.setString("40.560000");
set_field(noRelatedSym_0_1_0, NotionalPercentageOutstanding_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::OptAttribute{'1'}, Instrument_94);
      FIX::OptPayoutAmount OptPayoutAmount_94;
      OptPayoutAmount_94.setString("4201677");
set_field(noRelatedSym_0_1_0, OptPayoutAmount_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::OptPayoutType{2}, Instrument_94);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_94;
      OriginalNotionalPercentageOutstanding_94.setString("59.510000");
set_field(noRelatedSym_0_1_0, OriginalNotionalPercentageOutstanding_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::Pool{"STRING_605441149"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::PositionLimit{986710692}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::PriceUnitOfMeasure{"STRING_385838047"}, Instrument_94);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_94;
      PriceUnitOfMeasureQty_94.setString("14526871");
set_field(noRelatedSym_0_1_0, PriceUnitOfMeasureQty_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::Product{3}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::ProductComplex{"STRING_1205485348"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::PutOrCall{0}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::RedemptionDate{"LOCALMKTDATE_1267667728"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::RepoCollateralSecurityType{"STRING_1392695349"}, Instrument_94);
      FIX::RepurchaseRate RepurchaseRate_94;
      RepurchaseRate_94.setString("31.160000");
set_field(noRelatedSym_0_1_0, RepurchaseRate_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::RepurchaseTerm{1174785919}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::RestructuringType{"STRING_FR"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::SecurityDesc{"STRING_1561268581"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::SecurityExchange{"EXCHANGE_470584276"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::SecurityGroup{"STRING_831254348"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::SecurityID{"STRING_1624264546"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::SecurityIDSource{"STRING_7"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::SecurityStatus{"STRING_1"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::SecuritySubType{"STRING_1530210792"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::SecurityType{"STRING_OOC"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::Seniority{"STRING_SD"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::SettlMethod{'C'}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::SettleOnOpenFlag{"STRING_1152687002"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::StateOrProvinceOfIssue{"STRING_1254256985"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::StrikeCurrency{"USD"}, Instrument_94);
      FIX::StrikeMultiplier StrikeMultiplier_94;
      StrikeMultiplier_94.setString("13600128");
set_field(noRelatedSym_0_1_0, StrikeMultiplier_94, Instrument_94);
      FIX::StrikePrice StrikePrice_94;
      StrikePrice_94.setString("17834488");
set_field(noRelatedSym_0_1_0, StrikePrice_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::StrikePriceBoundaryMethod{2}, Instrument_94);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_94;
      StrikePriceBoundaryPrecision_94.setString("87.550000");
set_field(noRelatedSym_0_1_0, StrikePriceBoundaryPrecision_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::StrikePriceDeterminationMethod{3}, Instrument_94);
      FIX::StrikeValue StrikeValue_94;
      StrikeValue_94.setString("14881639");
set_field(noRelatedSym_0_1_0, StrikeValue_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::Symbol{"STRING_1286095410"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::TimeUnit{"STRING_Mo"}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::UnitOfMeasure{"STRING_t"}, Instrument_94);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_94;
      UnitOfMeasureQty_94.setString("19051466");
set_field(noRelatedSym_0_1_0, UnitOfMeasureQty_94, Instrument_94);
      set_field(noRelatedSym_0_1_0, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_94);
      all_values.push_back(Instrument_94);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_194;
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_194);
        FIX::ComplexEventPrice ComplexEventPrice_194;
        ComplexEventPrice_194.setString("12140323");
set_field(noComplexEvents_0_0_2_0, ComplexEventPrice_194, ComplexEvents_NoComplexEvents_194);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_194);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_194;
        ComplexEventPriceBoundaryPrecision_194.setString("47.300000");
set_field(noComplexEvents_0_0_2_0, ComplexEventPriceBoundaryPrecision_194, ComplexEvents_NoComplexEvents_194);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_194);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_194);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_194;
        ComplexOptPayoutAmount_194.setString("8282256");
set_field(noComplexEvents_0_0_2_0, ComplexOptPayoutAmount_194, ComplexEvents_NoComplexEvents_194);
        all_values.push_back(ComplexEvents_NoComplexEvents_194);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_394;
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 38, 23, 5, 10, 2008)}, ComplexEventDates_NoComplexEventDates_394);
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 16, 48, 0, 8, 2008)}, ComplexEventDates_NoComplexEventDates_394);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_394);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_793;
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 28, 19)}, ComplexEventTimes_NoComplexEventTimes_793);
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 4, 32)}, ComplexEventTimes_NoComplexEventTimes_793);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_793);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_794;
            set_field(noComplexEventTimes_0_0_0_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 59, 41)}, ComplexEventTimes_NoComplexEventTimes_794);
            set_field(noComplexEventTimes_0_0_0_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 2, 52)}, ComplexEventTimes_NoComplexEventTimes_794);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_794);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_183;
        set_field(noEvents_0_0_2_0, FIX::EventDate{"LOCALMKTDATE_300850655"}, EvntGrp_NoEvents_183);
        FIX::EventPx EventPx_183;
        EventPx_183.setString("17815874");
set_field(noEvents_0_0_2_0, EventPx_183, EvntGrp_NoEvents_183);
        set_field(noEvents_0_0_2_0, FIX::EventText{"STRING_2058975802"}, EvntGrp_NoEvents_183);
        set_field(noEvents_0_0_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(7, 34, 51, 19, 4, 2010)}, EvntGrp_NoEvents_183);
        set_field(noEvents_0_0_2_0, FIX::EventType{99}, EvntGrp_NoEvents_183);
        all_values.push_back(EvntGrp_NoEvents_183);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_184;
        set_field(noEvents_0_0_2_1, FIX::EventDate{"LOCALMKTDATE_942714074"}, EvntGrp_NoEvents_184);
        FIX::EventPx EventPx_184;
        EventPx_184.setString("673261");
set_field(noEvents_0_0_2_1, EventPx_184, EvntGrp_NoEvents_184);
        set_field(noEvents_0_0_2_1, FIX::EventText{"STRING_251917200"}, EvntGrp_NoEvents_184);
        set_field(noEvents_0_0_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(22, 28, 19, 3, 6, 2015)}, EvntGrp_NoEvents_184);
        set_field(noEvents_0_0_2_1, FIX::EventType{12}, EvntGrp_NoEvents_184);
        all_values.push_back(EvntGrp_NoEvents_184);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_180;
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyID{"STRING_783968647"}, InstrumentParties_NoInstrumentParties_180);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_180);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyRole{348707634}, InstrumentParties_NoInstrumentParties_180);
        all_values.push_back(InstrumentParties_NoInstrumentParties_180);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361;
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubID{"STRING_925128745"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361);
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubIDType{438605516}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_361);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362;
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubID{"STRING_1577005571"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362);
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubIDType{1086168384}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_362);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_181;
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyID{"STRING_739456171"}, InstrumentParties_NoInstrumentParties_181);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_181);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyRole{997660538}, InstrumentParties_NoInstrumentParties_181);
        all_values.push_back(InstrumentParties_NoInstrumentParties_181);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363;
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubID{"STRING_1496326709"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363);
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubIDType{1913862192}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_363);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_182;
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyID{"STRING_1974393846"}, InstrumentParties_NoInstrumentParties_182);
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_182);
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyRole{899818855}, InstrumentParties_NoInstrumentParties_182);
        all_values.push_back(InstrumentParties_NoInstrumentParties_182);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364;
          set_field(noInstrumentPartySubIDs_0_0_2_3_0, FIX::InstrumentPartySubID{"STRING_43844119"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364);
          set_field(noInstrumentPartySubIDs_0_0_2_3_0, FIX::InstrumentPartySubIDType{1842532930}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_364);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365;
          set_field(noInstrumentPartySubIDs_0_0_2_3_1, FIX::InstrumentPartySubID{"STRING_1827569617"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365);
          set_field(noInstrumentPartySubIDs_0_0_2_3_1, FIX::InstrumentPartySubIDType{295761319}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_365);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366;
          set_field(noInstrumentPartySubIDs_0_0_2_3_2, FIX::InstrumentPartySubID{"STRING_1733132530"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366);
          set_field(noInstrumentPartySubIDs_0_0_2_3_2, FIX::InstrumentPartySubIDType{656132919}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_366);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_188;
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltID{"STRING_1490680042"}, SecAltIDGrp_NoSecurityAltID_188);
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltIDSource{"STRING_78663118"}, SecAltIDGrp_NoSecurityAltID_188);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_188);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_189;
        set_field(noSecurityAltID_0_0_2_1, FIX::SecurityAltID{"STRING_2086874717"}, SecAltIDGrp_NoSecurityAltID_189);
        set_field(noSecurityAltID_0_0_2_1, FIX::SecurityAltIDSource{"STRING_1154421929"}, SecAltIDGrp_NoSecurityAltID_189);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_189);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_190;
        set_field(noSecurityAltID_0_0_2_2, FIX::SecurityAltID{"STRING_1173101629"}, SecAltIDGrp_NoSecurityAltID_190);
        set_field(noSecurityAltID_0_0_2_2, FIX::SecurityAltIDSource{"STRING_1026426449"}, SecAltIDGrp_NoSecurityAltID_190);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_190);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_188;
      set_field(noRelatedSym_0_1_0, FIX::SecurityXML{"XMLDATA_1938390577"}, SecurityXML_188);
      set_field(noRelatedSym_0_1_0, FIX::SecurityXMLLen{343837891}, SecurityXML_188);
      set_field(noRelatedSym_0_1_0, FIX::SecurityXMLSchema{"STRING_1375134083"}, SecurityXML_188);
      all_values.push_back(SecurityXML_188);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym..");

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_1;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_1;
      FIX::MDEntrySize MDEntrySize_9;
      MDEntrySize_9.setString("12322353");
set_field(noRelatedSym_0_1_1, MDEntrySize_9, StrmAsgnReqInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::MDStreamID{"STRING_1268966637"}, StrmAsgnReqInstrmtGrp_NoRelatedSym_1);
      set_field(noRelatedSym_0_1_1, FIX::SettlType{"STRING_7"}, StrmAsgnReqInstrmtGrp_NoRelatedSym_1);
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_1);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym");

      // Instrument
      multiset<string> Instrument_95;
      FIX::AttachmentPoint AttachmentPoint_95;
      AttachmentPoint_95.setString("72.720000");
set_field(noRelatedSym_0_1_1, AttachmentPoint_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::CFICode{"STRING_207651373"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::CPProgram{1}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::CPRegType{"STRING_1872866606"}, Instrument_95);
      FIX::CapPrice CapPrice_95;
      CapPrice_95.setString("12053119");
set_field(noRelatedSym_0_1_1, CapPrice_95, Instrument_95);
      FIX::ContractMultiplier ContractMultiplier_95;
      ContractMultiplier_95.setString("4868428");
set_field(noRelatedSym_0_1_1, ContractMultiplier_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::ContractMultiplierUnit{2}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::ContractSettlMonth{"MONTHYEAR_971690455"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::CountryOfIssue{"COUNTRY_313753016"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::CouponPaymentDate{"LOCALMKTDATE_730141128"}, Instrument_95);
      FIX::CouponRate CouponRate_95;
      CouponRate_95.setString("93.110000");
set_field(noRelatedSym_0_1_1, CouponRate_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::CreditRating{"STRING_2073996514"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::DatedDate{"LOCALMKTDATE_773985247"}, Instrument_95);
      FIX::DetachmentPoint DetachmentPoint_95;
      DetachmentPoint_95.setString("85.930000");
set_field(noRelatedSym_0_1_1, DetachmentPoint_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::EncodedIssuer{"DATA_1754082483"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::EncodedIssuerLen{1069746567}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::EncodedSecurityDesc{"DATA_1152207475"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::EncodedSecurityDescLen{262731754}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::ExerciseStyle{2}, Instrument_95);
      FIX::Factor Factor_95;
      Factor_95.setString("4954038");
set_field(noRelatedSym_0_1_1, Factor_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::FlexibleIndicator{false}, Instrument_95);
      FIX::FloorPrice FloorPrice_95;
      FloorPrice_95.setString("16498257");
set_field(noRelatedSym_0_1_1, FloorPrice_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::FlowScheduleType{1}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::InstrRegistry{"STRING_945630945"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::InterestAccrualDate{"LOCALMKTDATE_1858334393"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::IssueDate{"LOCALMKTDATE_173281380"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::Issuer{"STRING_525484428"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::ListMethod{0}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::LocaleOfIssue{"STRING_1987020980"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::MaturityDate{"LOCALMKTDATE_1187241700"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::MaturityMonthYear{"MONTHYEAR_1187468755"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::MaturityTime{"TZTIMEONLY_245249454"}, Instrument_95);
      FIX::MinPriceIncrement MinPriceIncrement_95;
      MinPriceIncrement_95.setString("9126246");
set_field(noRelatedSym_0_1_1, MinPriceIncrement_95, Instrument_95);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_95;
      MinPriceIncrementAmount_95.setString("2452970");
set_field(noRelatedSym_0_1_1, MinPriceIncrementAmount_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::NTPositionLimit{732092272}, Instrument_95);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_95;
      NotionalPercentageOutstanding_95.setString("43.260000");
set_field(noRelatedSym_0_1_1, NotionalPercentageOutstanding_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::OptAttribute{'1'}, Instrument_95);
      FIX::OptPayoutAmount OptPayoutAmount_95;
      OptPayoutAmount_95.setString("10458452");
set_field(noRelatedSym_0_1_1, OptPayoutAmount_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::OptPayoutType{3}, Instrument_95);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_95;
      OriginalNotionalPercentageOutstanding_95.setString("31.360000");
set_field(noRelatedSym_0_1_1, OriginalNotionalPercentageOutstanding_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::Pool{"STRING_972358154"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::PositionLimit{1490977053}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::PriceUnitOfMeasure{"STRING_578956990"}, Instrument_95);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_95;
      PriceUnitOfMeasureQty_95.setString("4132399");
set_field(noRelatedSym_0_1_1, PriceUnitOfMeasureQty_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::Product{7}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::ProductComplex{"STRING_841688744"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::PutOrCall{1}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::RedemptionDate{"LOCALMKTDATE_2007699426"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::RepoCollateralSecurityType{"STRING_1183083617"}, Instrument_95);
      FIX::RepurchaseRate RepurchaseRate_95;
      RepurchaseRate_95.setString("78.940000");
set_field(noRelatedSym_0_1_1, RepurchaseRate_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::RepurchaseTerm{1510041577}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::RestructuringType{"STRING_MM"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::SecurityDesc{"STRING_1257888839"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::SecurityExchange{"EXCHANGE_803290657"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::SecurityGroup{"STRING_260947215"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::SecurityID{"STRING_1431170220"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::SecurityIDSource{"STRING_D"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::SecurityStatus{"STRING_2"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::SecuritySubType{"STRING_1270707552"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::SecurityType{"STRING_OOP"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::Seniority{"STRING_SB"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::SettlMethod{'C'}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::SettleOnOpenFlag{"STRING_1281157797"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::StateOrProvinceOfIssue{"STRING_526046722"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::StrikeCurrency{"CAN"}, Instrument_95);
      FIX::StrikeMultiplier StrikeMultiplier_95;
      StrikeMultiplier_95.setString("17430341");
set_field(noRelatedSym_0_1_1, StrikeMultiplier_95, Instrument_95);
      FIX::StrikePrice StrikePrice_95;
      StrikePrice_95.setString("11464109");
set_field(noRelatedSym_0_1_1, StrikePrice_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::StrikePriceBoundaryMethod{2}, Instrument_95);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_95;
      StrikePriceBoundaryPrecision_95.setString("36.840000");
set_field(noRelatedSym_0_1_1, StrikePriceBoundaryPrecision_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::StrikePriceDeterminationMethod{2}, Instrument_95);
      FIX::StrikeValue StrikeValue_95;
      StrikeValue_95.setString("13284936");
set_field(noRelatedSym_0_1_1, StrikeValue_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::Symbol{"STRING_896651766"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::SymbolSfx{"STRING_WI"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::TimeUnit{"STRING_Min"}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::UnitOfMeasure{"STRING_oz_tr"}, Instrument_95);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_95;
      UnitOfMeasureQty_95.setString("21347870");
set_field(noRelatedSym_0_1_1, UnitOfMeasureQty_95, Instrument_95);
      set_field(noRelatedSym_0_1_1, FIX::ValuationMethod{"STRING_CDS"}, Instrument_95);
      all_values.push_back(Instrument_95);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_195;
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_195);
        FIX::ComplexEventPrice ComplexEventPrice_195;
        ComplexEventPrice_195.setString("16317210");
set_field(noComplexEvents_0_1_2_0, ComplexEventPrice_195, ComplexEvents_NoComplexEvents_195);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_195);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_195;
        ComplexEventPriceBoundaryPrecision_195.setString("1.440000");
set_field(noComplexEvents_0_1_2_0, ComplexEventPriceBoundaryPrecision_195, ComplexEvents_NoComplexEvents_195);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_195);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_195);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_195;
        ComplexOptPayoutAmount_195.setString("8411367");
set_field(noComplexEvents_0_1_2_0, ComplexOptPayoutAmount_195, ComplexEvents_NoComplexEvents_195);
        all_values.push_back(ComplexEvents_NoComplexEvents_195);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_395;
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 25, 8, 18, 3, 2001)}, ComplexEventDates_NoComplexEventDates_395);
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 19, 47, 14, 12, 2014)}, ComplexEventDates_NoComplexEventDates_395);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_395);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_795;
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 11, 16)}, ComplexEventTimes_NoComplexEventTimes_795);
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 10, 47)}, ComplexEventTimes_NoComplexEventTimes_795);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_795);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_396;
          set_field(noComplexEventDates_0_1_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 6, 2, 5, 10, 2012)}, ComplexEventDates_NoComplexEventDates_396);
          set_field(noComplexEventDates_0_1_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 38, 17, 13, 9, 2017)}, ComplexEventDates_NoComplexEventDates_396);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_396);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_796;
            set_field(noComplexEventTimes_0_1_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 47, 53)}, ComplexEventTimes_NoComplexEventTimes_796);
            set_field(noComplexEventTimes_0_1_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 25, 30)}, ComplexEventTimes_NoComplexEventTimes_796);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_796);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_797;
            set_field(noComplexEventTimes_0_1_0_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 42, 41)}, ComplexEventTimes_NoComplexEventTimes_797);
            set_field(noComplexEventTimes_0_1_0_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 51, 31)}, ComplexEventTimes_NoComplexEventTimes_797);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_797);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_1);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_397;
          set_field(noComplexEventDates_0_1_0_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 30, 43, 17, 4, 2017)}, ComplexEventDates_NoComplexEventDates_397);
          set_field(noComplexEventDates_0_1_0_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 23, 58, 5, 9, 2015)}, ComplexEventDates_NoComplexEventDates_397);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_397);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_798;
            set_field(noComplexEventTimes_0_1_0_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 57, 10)}, ComplexEventTimes_NoComplexEventTimes_798);
            set_field(noComplexEventTimes_0_1_0_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 36, 26)}, ComplexEventTimes_NoComplexEventTimes_798);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_798);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_2.addGroup(noComplexEventTimes_0_1_0_2_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_2);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_185;
        set_field(noEvents_0_1_2_0, FIX::EventDate{"LOCALMKTDATE_143692753"}, EvntGrp_NoEvents_185);
        FIX::EventPx EventPx_185;
        EventPx_185.setString("20767577");
set_field(noEvents_0_1_2_0, EventPx_185, EvntGrp_NoEvents_185);
        set_field(noEvents_0_1_2_0, FIX::EventText{"STRING_803926798"}, EvntGrp_NoEvents_185);
        set_field(noEvents_0_1_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(3, 49, 20, 25, 6, 2002)}, EvntGrp_NoEvents_185);
        set_field(noEvents_0_1_2_0, FIX::EventType{13}, EvntGrp_NoEvents_185);
        all_values.push_back(EvntGrp_NoEvents_185);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_186;
        set_field(noEvents_0_1_2_1, FIX::EventDate{"LOCALMKTDATE_477117174"}, EvntGrp_NoEvents_186);
        FIX::EventPx EventPx_186;
        EventPx_186.setString("10112533");
set_field(noEvents_0_1_2_1, EventPx_186, EvntGrp_NoEvents_186);
        set_field(noEvents_0_1_2_1, FIX::EventText{"STRING_319163218"}, EvntGrp_NoEvents_186);
        set_field(noEvents_0_1_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(13, 21, 42, 11, 10, 2014)}, EvntGrp_NoEvents_186);
        set_field(noEvents_0_1_2_1, FIX::EventType{18}, EvntGrp_NoEvents_186);
        all_values.push_back(EvntGrp_NoEvents_186);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_183;
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyID{"STRING_844336333"}, InstrumentParties_NoInstrumentParties_183);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_183);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyRole{712641901}, InstrumentParties_NoInstrumentParties_183);
        all_values.push_back(InstrumentParties_NoInstrumentParties_183);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367;
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubID{"STRING_1687388487"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367);
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubIDType{503715749}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_367);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_191;
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltID{"STRING_1554831464"}, SecAltIDGrp_NoSecurityAltID_191);
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltIDSource{"STRING_647408502"}, SecAltIDGrp_NoSecurityAltID_191);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_191);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_190;
      set_field(noRelatedSym_0_1_1, FIX::SecurityXML{"XMLDATA_263027247"}, SecurityXML_190);
      set_field(noRelatedSym_0_1_1, FIX::SecurityXMLLen{211274614}, SecurityXML_190);
      set_field(noRelatedSym_0_1_1, FIX::SecurityXMLSchema{"STRING_1489506039"}, SecurityXML_190);
      all_values.push_back(SecurityXML_190);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym..");

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_1);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_2;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_2;
      FIX::MDEntrySize MDEntrySize_10;
      MDEntrySize_10.setString("2033868");
set_field(noRelatedSym_0_1_2, MDEntrySize_10, StrmAsgnReqInstrmtGrp_NoRelatedSym_2);
      set_field(noRelatedSym_0_1_2, FIX::MDStreamID{"STRING_207279255"}, StrmAsgnReqInstrmtGrp_NoRelatedSym_2);
      set_field(noRelatedSym_0_1_2, FIX::SettlType{"STRING_0"}, StrmAsgnReqInstrmtGrp_NoRelatedSym_2);
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_2);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym");

      // Instrument
      multiset<string> Instrument_96;
      FIX::AttachmentPoint AttachmentPoint_96;
      AttachmentPoint_96.setString("23.390000");
set_field(noRelatedSym_0_1_2, AttachmentPoint_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::CFICode{"STRING_1430160440"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::CPProgram{1}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::CPRegType{"STRING_377003104"}, Instrument_96);
      FIX::CapPrice CapPrice_96;
      CapPrice_96.setString("19072776");
set_field(noRelatedSym_0_1_2, CapPrice_96, Instrument_96);
      FIX::ContractMultiplier ContractMultiplier_96;
      ContractMultiplier_96.setString("17611298");
set_field(noRelatedSym_0_1_2, ContractMultiplier_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::ContractMultiplierUnit{2}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::ContractSettlMonth{"MONTHYEAR_1282293350"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::CountryOfIssue{"COUNTRY_1568525877"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::CouponPaymentDate{"LOCALMKTDATE_1752622463"}, Instrument_96);
      FIX::CouponRate CouponRate_96;
      CouponRate_96.setString("64.850000");
set_field(noRelatedSym_0_1_2, CouponRate_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::CreditRating{"STRING_1958561716"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::DatedDate{"LOCALMKTDATE_85862329"}, Instrument_96);
      FIX::DetachmentPoint DetachmentPoint_96;
      DetachmentPoint_96.setString("89.730000");
set_field(noRelatedSym_0_1_2, DetachmentPoint_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::EncodedIssuer{"DATA_1561419225"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::EncodedIssuerLen{258710920}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::EncodedSecurityDesc{"DATA_907895306"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::EncodedSecurityDescLen{1888966692}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::ExerciseStyle{2}, Instrument_96);
      FIX::Factor Factor_96;
      Factor_96.setString("3368609");
set_field(noRelatedSym_0_1_2, Factor_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::FlexProductEligibilityIndicator{false}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::FlexibleIndicator{false}, Instrument_96);
      FIX::FloorPrice FloorPrice_96;
      FloorPrice_96.setString("6706140");
set_field(noRelatedSym_0_1_2, FloorPrice_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::FlowScheduleType{2}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::InstrRegistry{"STRING_2122477073"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::InstrmtAssignmentMethod{'9'}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::InterestAccrualDate{"LOCALMKTDATE_1047493961"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::IssueDate{"LOCALMKTDATE_1464499465"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::Issuer{"STRING_1137028184"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::ListMethod{0}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::LocaleOfIssue{"STRING_972857537"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::MaturityDate{"LOCALMKTDATE_430536875"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::MaturityMonthYear{"MONTHYEAR_537450008"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::MaturityTime{"TZTIMEONLY_1722734039"}, Instrument_96);
      FIX::MinPriceIncrement MinPriceIncrement_96;
      MinPriceIncrement_96.setString("8075399");
set_field(noRelatedSym_0_1_2, MinPriceIncrement_96, Instrument_96);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_96;
      MinPriceIncrementAmount_96.setString("2972439");
set_field(noRelatedSym_0_1_2, MinPriceIncrementAmount_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::NTPositionLimit{1336380199}, Instrument_96);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_96;
      NotionalPercentageOutstanding_96.setString("63.010000");
set_field(noRelatedSym_0_1_2, NotionalPercentageOutstanding_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::OptAttribute{'1'}, Instrument_96);
      FIX::OptPayoutAmount OptPayoutAmount_96;
      OptPayoutAmount_96.setString("7574224");
set_field(noRelatedSym_0_1_2, OptPayoutAmount_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::OptPayoutType{1}, Instrument_96);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_96;
      OriginalNotionalPercentageOutstanding_96.setString("1.620000");
set_field(noRelatedSym_0_1_2, OriginalNotionalPercentageOutstanding_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::Pool{"STRING_568500497"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::PositionLimit{1194707446}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::PriceUnitOfMeasure{"STRING_2129919723"}, Instrument_96);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_96;
      PriceUnitOfMeasureQty_96.setString("14534183");
set_field(noRelatedSym_0_1_2, PriceUnitOfMeasureQty_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::Product{8}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::ProductComplex{"STRING_1871402767"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::PutOrCall{1}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::RedemptionDate{"LOCALMKTDATE_1924075349"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::RepoCollateralSecurityType{"STRING_1152790650"}, Instrument_96);
      FIX::RepurchaseRate RepurchaseRate_96;
      RepurchaseRate_96.setString("61.100000");
set_field(noRelatedSym_0_1_2, RepurchaseRate_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::RepurchaseTerm{447205755}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::RestructuringType{"STRING_MR"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::SecurityDesc{"STRING_1727349536"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::SecurityExchange{"EXCHANGE_1380847057"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::SecurityGroup{"STRING_889020310"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::SecurityID{"STRING_1044365353"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::SecurityIDSource{"STRING_C"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::SecurityStatus{"STRING_1"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::SecuritySubType{"STRING_2017222890"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::SecurityType{"STRING_RVLV"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::Seniority{"STRING_SD"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::SettlMethod{'P'}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::SettleOnOpenFlag{"STRING_1608468448"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::StateOrProvinceOfIssue{"STRING_831003860"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::StrikeCurrency{"EUR"}, Instrument_96);
      FIX::StrikeMultiplier StrikeMultiplier_96;
      StrikeMultiplier_96.setString("2630575");
set_field(noRelatedSym_0_1_2, StrikeMultiplier_96, Instrument_96);
      FIX::StrikePrice StrikePrice_96;
      StrikePrice_96.setString("15387922");
set_field(noRelatedSym_0_1_2, StrikePrice_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::StrikePriceBoundaryMethod{4}, Instrument_96);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_96;
      StrikePriceBoundaryPrecision_96.setString("76.990000");
set_field(noRelatedSym_0_1_2, StrikePriceBoundaryPrecision_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::StrikePriceDeterminationMethod{4}, Instrument_96);
      FIX::StrikeValue StrikeValue_96;
      StrikeValue_96.setString("11207600");
set_field(noRelatedSym_0_1_2, StrikeValue_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::Symbol{"STRING_1558136834"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::SymbolSfx{"STRING_CD"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::TimeUnit{"STRING_Wk"}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::UnitOfMeasure{"STRING_Bcf"}, Instrument_96);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_96;
      UnitOfMeasureQty_96.setString("7039822");
set_field(noRelatedSym_0_1_2, UnitOfMeasureQty_96, Instrument_96);
      set_field(noRelatedSym_0_1_2, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_96);
      all_values.push_back(Instrument_96);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_196;
        set_field(noComplexEvents_0_2_2_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_196);
        FIX::ComplexEventPrice ComplexEventPrice_196;
        ComplexEventPrice_196.setString("12216650");
set_field(noComplexEvents_0_2_2_0, ComplexEventPrice_196, ComplexEvents_NoComplexEvents_196);
        set_field(noComplexEvents_0_2_2_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_196);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_196;
        ComplexEventPriceBoundaryPrecision_196.setString("42.720000");
set_field(noComplexEvents_0_2_2_0, ComplexEventPriceBoundaryPrecision_196, ComplexEvents_NoComplexEvents_196);
        set_field(noComplexEvents_0_2_2_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_196);
        set_field(noComplexEvents_0_2_2_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_196);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_196;
        ComplexOptPayoutAmount_196.setString("9330859");
set_field(noComplexEvents_0_2_2_0, ComplexOptPayoutAmount_196, ComplexEvents_NoComplexEvents_196);
        all_values.push_back(ComplexEvents_NoComplexEvents_196);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_398;
          set_field(noComplexEventDates_0_2_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 15, 58, 13, 12, 2005)}, ComplexEventDates_NoComplexEventDates_398);
          set_field(noComplexEventDates_0_2_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 28, 40, 3, 9, 2013)}, ComplexEventDates_NoComplexEventDates_398);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_398);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_799;
            set_field(noComplexEventTimes_0_2_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 50, 14)}, ComplexEventTimes_NoComplexEventTimes_799);
            set_field(noComplexEventTimes_0_2_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 43, 19)}, ComplexEventTimes_NoComplexEventTimes_799);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_799);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_800;
            set_field(noComplexEventTimes_0_2_0_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 3, 17)}, ComplexEventTimes_NoComplexEventTimes_800);
            set_field(noComplexEventTimes_0_2_0_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 14, 0)}, ComplexEventTimes_NoComplexEventTimes_800);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_800);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_1);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_399;
          set_field(noComplexEventDates_0_2_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 7, 25, 27, 7, 2006)}, ComplexEventDates_NoComplexEventDates_399);
          set_field(noComplexEventDates_0_2_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 4, 45, 21, 5, 2016)}, ComplexEventDates_NoComplexEventDates_399);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_399);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_801;
            set_field(noComplexEventTimes_0_2_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 7, 25)}, ComplexEventTimes_NoComplexEventTimes_801);
            set_field(noComplexEventTimes_0_2_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 9, 49)}, ComplexEventTimes_NoComplexEventTimes_801);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_801);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_802;
            set_field(noComplexEventTimes_0_2_0_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 44, 32)}, ComplexEventTimes_NoComplexEventTimes_802);
            set_field(noComplexEventTimes_0_2_0_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 39, 54)}, ComplexEventTimes_NoComplexEventTimes_802);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_802);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_1);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_803;
            set_field(noComplexEventTimes_0_2_0_1_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 53, 34)}, ComplexEventTimes_NoComplexEventTimes_803);
            set_field(noComplexEventTimes_0_2_0_1_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 2, 9)}, ComplexEventTimes_NoComplexEventTimes_803);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_803);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_2);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_400;
          set_field(noComplexEventDates_0_2_0_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 46, 59, 23, 7, 2004)}, ComplexEventDates_NoComplexEventDates_400);
          set_field(noComplexEventDates_0_2_0_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 15, 31, 27, 3, 2002)}, ComplexEventDates_NoComplexEventDates_400);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_400);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_804;
            set_field(noComplexEventTimes_0_2_0_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 24, 22)}, ComplexEventTimes_NoComplexEventTimes_804);
            set_field(noComplexEventTimes_0_2_0_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 1, 34)}, ComplexEventTimes_NoComplexEventTimes_804);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_804);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_2.addGroup(noComplexEventTimes_0_2_0_2_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_805;
            set_field(noComplexEventTimes_0_2_0_2_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 28, 26)}, ComplexEventTimes_NoComplexEventTimes_805);
            set_field(noComplexEventTimes_0_2_0_2_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 28, 3)}, ComplexEventTimes_NoComplexEventTimes_805);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_805);
            all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_2.addGroup(noComplexEventTimes_0_2_0_2_4_1);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_2);
        }
        noRelatedSym_0_1_2.addGroup(noComplexEvents_0_2_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_187;
        set_field(noEvents_0_2_2_0, FIX::EventDate{"LOCALMKTDATE_1068354566"}, EvntGrp_NoEvents_187);
        FIX::EventPx EventPx_187;
        EventPx_187.setString("13438696");
set_field(noEvents_0_2_2_0, EventPx_187, EvntGrp_NoEvents_187);
        set_field(noEvents_0_2_2_0, FIX::EventText{"STRING_261835217"}, EvntGrp_NoEvents_187);
        set_field(noEvents_0_2_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(8, 33, 27, 9, 6, 2009)}, EvntGrp_NoEvents_187);
        set_field(noEvents_0_2_2_0, FIX::EventType{9}, EvntGrp_NoEvents_187);
        all_values.push_back(EvntGrp_NoEvents_187);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_2.addGroup(noEvents_0_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_2_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_188;
        set_field(noEvents_0_2_2_1, FIX::EventDate{"LOCALMKTDATE_1769047291"}, EvntGrp_NoEvents_188);
        FIX::EventPx EventPx_188;
        EventPx_188.setString("3092080");
set_field(noEvents_0_2_2_1, EventPx_188, EvntGrp_NoEvents_188);
        set_field(noEvents_0_2_2_1, FIX::EventText{"STRING_119246120"}, EvntGrp_NoEvents_188);
        set_field(noEvents_0_2_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(9, 44, 44, 9, 12, 2001)}, EvntGrp_NoEvents_188);
        set_field(noEvents_0_2_2_1, FIX::EventType{16}, EvntGrp_NoEvents_188);
        all_values.push_back(EvntGrp_NoEvents_188);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoEvents");

        noRelatedSym_0_1_2.addGroup(noEvents_0_2_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_184;
        set_field(noInstrumentParties_0_2_2_0, FIX::InstrumentPartyID{"STRING_345411396"}, InstrumentParties_NoInstrumentParties_184);
        set_field(noInstrumentParties_0_2_2_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_184);
        set_field(noInstrumentParties_0_2_2_0, FIX::InstrumentPartyRole{1790766773}, InstrumentParties_NoInstrumentParties_184);
        all_values.push_back(InstrumentParties_NoInstrumentParties_184);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368;
          set_field(noInstrumentPartySubIDs_0_2_0_3_0, FIX::InstrumentPartySubID{"STRING_1617676111"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368);
          set_field(noInstrumentPartySubIDs_0_2_0_3_0, FIX::InstrumentPartySubIDType{623415313}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_368);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369;
          set_field(noInstrumentPartySubIDs_0_2_0_3_1, FIX::InstrumentPartySubID{"STRING_1561711062"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369);
          set_field(noInstrumentPartySubIDs_0_2_0_3_1, FIX::InstrumentPartySubIDType{670617228}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_369);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370;
          set_field(noInstrumentPartySubIDs_0_2_0_3_2, FIX::InstrumentPartySubID{"STRING_1691769880"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370);
          set_field(noInstrumentPartySubIDs_0_2_0_3_2, FIX::InstrumentPartySubIDType{758097083}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_370);
          all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_2);
        }
        noRelatedSym_0_1_2.addGroup(noInstrumentParties_0_2_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_192;
        set_field(noSecurityAltID_0_2_2_0, FIX::SecurityAltID{"STRING_300685133"}, SecAltIDGrp_NoSecurityAltID_192);
        set_field(noSecurityAltID_0_2_2_0, FIX::SecurityAltIDSource{"STRING_568505099"}, SecAltIDGrp_NoSecurityAltID_192);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_192);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_2.addGroup(noSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_2_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_193;
        set_field(noSecurityAltID_0_2_2_1, FIX::SecurityAltID{"STRING_655993651"}, SecAltIDGrp_NoSecurityAltID_193);
        set_field(noSecurityAltID_0_2_2_1, FIX::SecurityAltIDSource{"STRING_1660570341"}, SecAltIDGrp_NoSecurityAltID_193);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_193);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_2.addGroup(noSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_2_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_194;
        set_field(noSecurityAltID_0_2_2_2, FIX::SecurityAltID{"STRING_966343976"}, SecAltIDGrp_NoSecurityAltID_194);
        set_field(noSecurityAltID_0_2_2_2, FIX::SecurityAltIDSource{"STRING_1619584512"}, SecAltIDGrp_NoSecurityAltID_194);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_194);
        all_compo_names.insert("...NoAsgnReqs...NoRelatedSym....NoSecurityAltID");

        noRelatedSym_0_1_2.addGroup(noSecurityAltID_0_2_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_192;
      set_field(noRelatedSym_0_1_2, FIX::SecurityXML{"XMLDATA_410420524"}, SecurityXML_192);
      set_field(noRelatedSym_0_1_2, FIX::SecurityXMLLen{1913734484}, SecurityXML_192);
      set_field(noRelatedSym_0_1_2, FIX::SecurityXMLSchema{"STRING_1241148155"}, SecurityXML_192);
      all_values.push_back(SecurityXML_192);
      all_compo_names.insert("...NoAsgnReqs...NoRelatedSym..");

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_2);
    }
    msg.addGroup(noAsgnReqs_0_0);
  }
  // header
  multiset<string> header_95;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_9"}, header_95);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_2032980604"}, header_95);
  set_header_field(msg.getHeader(), FIX::BodyLength{1476976497}, header_95);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_329781380"}, header_95);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1414534481"}, header_95);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_120516273"}, header_95);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1747106109"}, header_95);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1019014388}, header_95);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_95);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{182988857}, header_95);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_2075532576"}, header_95);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_670801006"}, header_95);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_212708512"}, header_95);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(13, 23, 27, 11, 5, 2013)}, header_95);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_95);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_95);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_39718732"}, header_95);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{445149074}, header_95);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1941964300"}, header_95);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1700289073"}, header_95);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1411493050"}, header_95);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(5, 47, 12, 5, 8, 2015)}, header_95);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1012635949"}, header_95);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_330291676"}, header_95);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_2105222442"}, header_95);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_612258411"}, header_95);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1349306065}, header_95);
  all_values.push_back(header_95);
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
