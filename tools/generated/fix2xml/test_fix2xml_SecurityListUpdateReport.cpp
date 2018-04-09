#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::SecurityListUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityListUpdateReport_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_287027285"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::CorporateAction{"MULTIPLECHARVALUE_I"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::EncodedSecurityListDesc{"DATA_2131243084"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::EncodedSecurityListDescLen{778758182}, SecurityListUpdateReport_0);
  set_field(msg, FIX::LastFragment{false}, SecurityListUpdateReport_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1399632054"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_1955066124"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityListDesc{"STRING_747548872"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityListID{"STRING_2005913015"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityListRefID{"STRING_653155284"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityListType{2}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityListTypeSource{3}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityReportID{1348665835}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityReqID{"STRING_1714640045"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityRequestResult{4}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_1048142029"}, SecurityListUpdateReport_0);
  set_field(msg, FIX::SecurityUpdateAction{'D'}, SecurityListUpdateReport_0);
  set_field(msg, FIX::TotNoRelatedSym{873228374}, SecurityListUpdateReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(10, 24, 32, 27, 6, 2002)}, SecurityListUpdateReport_0);
  all_values.push_back(SecurityListUpdateReport_0);

  all_compo_names.insert("SecurityListUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_15;
  set_field(msg, FIX::ApplID{"STRING_839864393"}, ApplicationSequenceControl_15);
  set_field(msg, FIX::ApplLastSeqNum{806252260}, ApplicationSequenceControl_15);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_15);
  set_field(msg, FIX::ApplSeqNum{1900189101}, ApplicationSequenceControl_15);
  all_values.push_back(ApplicationSequenceControl_15);
  all_compo_names.insert(".");

  // SecLstUpdRelSymGrp
  // Group SecLstUpdRelSymGrp.NoRelatedSym
  {
    FIX50SP2::SecurityListUpdateReport::NoRelatedSym noRelatedSym_0_0;
    // SecLstUpdRelSymGrp.NoRelatedSym
    multiset<string> SecLstUpdRelSymGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::Currency{"USD"}, SecLstUpdRelSymGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedText{"DATA_903516444"}, SecLstUpdRelSymGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedTextLen{1169725491}, SecLstUpdRelSymGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::ListUpdateAction{'8'}, SecLstUpdRelSymGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(1, 37, 26, 24, 2, 2003)}, SecLstUpdRelSymGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Text{"STRING_1963500448"}, SecLstUpdRelSymGrp_NoRelatedSym_0);
    all_values.push_back(SecLstUpdRelSymGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_27;
    set_field(noRelatedSym_0_0, FIX::AgreementCurrency{"EUR"}, FinancingDetails_27);
    set_field(noRelatedSym_0_0, FIX::AgreementDate{"LOCALMKTDATE_239395386"}, FinancingDetails_27);
    set_field(noRelatedSym_0_0, FIX::AgreementDesc{"STRING_1528552897"}, FinancingDetails_27);
    set_field(noRelatedSym_0_0, FIX::AgreementID{"STRING_2114922434"}, FinancingDetails_27);
    set_field(noRelatedSym_0_0, FIX::DeliveryType{0}, FinancingDetails_27);
    set_field(noRelatedSym_0_0, FIX::EndDate{"LOCALMKTDATE_651996307"}, FinancingDetails_27);
    FIX::MarginRatio MarginRatio_27;
    MarginRatio_27.setString("65.490000");
set_field(noRelatedSym_0_0, MarginRatio_27, FinancingDetails_27);
    set_field(noRelatedSym_0_0, FIX::StartDate{"LOCALMKTDATE_783379897"}, FinancingDetails_27);
    set_field(noRelatedSym_0_0, FIX::TerminationType{1}, FinancingDetails_27);
    all_values.push_back(FinancingDetails_27);
    all_compo_names.insert("...NoRelatedSym.");

    // Instrument
    multiset<string> Instrument_84;
    FIX::AttachmentPoint AttachmentPoint_84;
    AttachmentPoint_84.setString("80.880000");
set_field(noRelatedSym_0_0, AttachmentPoint_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_2104737246"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::CPProgram{2}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_741418833"}, Instrument_84);
    FIX::CapPrice CapPrice_84;
    CapPrice_84.setString("7635058");
set_field(noRelatedSym_0_0, CapPrice_84, Instrument_84);
    FIX::ContractMultiplier ContractMultiplier_84;
    ContractMultiplier_84.setString("18009485");
set_field(noRelatedSym_0_0, ContractMultiplier_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{1}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1482419947"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_839430957"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_533857025"}, Instrument_84);
    FIX::CouponRate CouponRate_84;
    CouponRate_84.setString("27.440000");
set_field(noRelatedSym_0_0, CouponRate_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_2009156448"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_1352347945"}, Instrument_84);
    FIX::DetachmentPoint DetachmentPoint_84;
    DetachmentPoint_84.setString("51.460000");
set_field(noRelatedSym_0_0, DetachmentPoint_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_283546697"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{1978421342}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_1758202772"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{563849962}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{1}, Instrument_84);
    FIX::Factor Factor_84;
    Factor_84.setString("12349021");
set_field(noRelatedSym_0_0, Factor_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{false}, Instrument_84);
    FIX::FloorPrice FloorPrice_84;
    FloorPrice_84.setString("2787579");
set_field(noRelatedSym_0_0, FloorPrice_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{3}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_971646492"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'2'}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1731885908"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_1623642800"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_2036863328"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_858112672"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1938417768"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_325035756"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_1259068784"}, Instrument_84);
    FIX::MinPriceIncrement MinPriceIncrement_84;
    MinPriceIncrement_84.setString("5323529");
set_field(noRelatedSym_0_0, MinPriceIncrement_84, Instrument_84);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_84;
    MinPriceIncrementAmount_84.setString("10885416");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{912533687}, Instrument_84);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_84;
    NotionalPercentageOutstanding_84.setString("72.390000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'4'}, Instrument_84);
    FIX::OptPayoutAmount OptPayoutAmount_84;
    OptPayoutAmount_84.setString("17519646");
set_field(noRelatedSym_0_0, OptPayoutAmount_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{2}, Instrument_84);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_84;
    OriginalNotionalPercentageOutstanding_84.setString("6.580000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_1613637445"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{765198562}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_1897184142"}, Instrument_84);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_84;
    PriceUnitOfMeasureQty_84.setString("5961362");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::Product{5}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_313550456"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{0}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_1058363463"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_693417218"}, Instrument_84);
    FIX::RepurchaseRate RepurchaseRate_84;
    RepurchaseRate_84.setString("62.270000");
set_field(noRelatedSym_0_0, RepurchaseRate_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{1337121456}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MM"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_2121042720"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_1583318235"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_897081627"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_1597201872"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_8"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_307830896"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_CORP"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SR"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'C'}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_1795984988"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_530957507"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"CAN"}, Instrument_84);
    FIX::StrikeMultiplier StrikeMultiplier_84;
    StrikeMultiplier_84.setString("9544354");
set_field(noRelatedSym_0_0, StrikeMultiplier_84, Instrument_84);
    FIX::StrikePrice StrikePrice_84;
    StrikePrice_84.setString("20839143");
set_field(noRelatedSym_0_0, StrikePrice_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{2}, Instrument_84);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_84;
    StrikePriceBoundaryPrecision_84.setString("60.790000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{1}, Instrument_84);
    FIX::StrikeValue StrikeValue_84;
    StrikeValue_84.setString("8530277");
set_field(noRelatedSym_0_0, StrikeValue_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_1829108235"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Wk"}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_84);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_84;
    UnitOfMeasureQty_84.setString("10079829");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_84, Instrument_84);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_84);
    all_values.push_back(Instrument_84);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_173;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_173);
      FIX::ComplexEventPrice ComplexEventPrice_173;
      ComplexEventPrice_173.setString("19005707");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_173, ComplexEvents_NoComplexEvents_173);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_173);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_173;
      ComplexEventPriceBoundaryPrecision_173.setString("82.980000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_173, ComplexEvents_NoComplexEvents_173);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_173);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_173);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_173;
      ComplexOptPayoutAmount_173.setString("15806565");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_173, ComplexEvents_NoComplexEvents_173);
      all_values.push_back(ComplexEvents_NoComplexEvents_173);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_348;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 55, 44, 14, 8, 2007)}, ComplexEventDates_NoComplexEventDates_348);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 24, 4, 3, 4, 2011)}, ComplexEventDates_NoComplexEventDates_348);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_348);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_706;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 27, 17)}, ComplexEventTimes_NoComplexEventTimes_706);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 28, 17)}, ComplexEventTimes_NoComplexEventTimes_706);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_706);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_707;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 58, 34)}, ComplexEventTimes_NoComplexEventTimes_707);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 48, 52)}, ComplexEventTimes_NoComplexEventTimes_707);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_707);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_174;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_174);
      FIX::ComplexEventPrice ComplexEventPrice_174;
      ComplexEventPrice_174.setString("5192951");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_174, ComplexEvents_NoComplexEvents_174);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_174);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_174;
      ComplexEventPriceBoundaryPrecision_174.setString("34.940000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_174, ComplexEvents_NoComplexEvents_174);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_174);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_174);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_174;
      ComplexOptPayoutAmount_174.setString("10297070");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_174, ComplexEvents_NoComplexEvents_174);
      all_values.push_back(ComplexEvents_NoComplexEvents_174);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_349;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 45, 57, 13, 3, 2016)}, ComplexEventDates_NoComplexEventDates_349);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 26, 57, 26, 1, 2011)}, ComplexEventDates_NoComplexEventDates_349);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_349);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_708;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 53, 14)}, ComplexEventTimes_NoComplexEventTimes_708);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 54, 0)}, ComplexEventTimes_NoComplexEventTimes_708);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_708);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_350;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 32, 54, 8, 1, 2004)}, ComplexEventDates_NoComplexEventDates_350);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 38, 58, 4, 4, 2011)}, ComplexEventDates_NoComplexEventDates_350);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_350);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_709;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 12, 45)}, ComplexEventTimes_NoComplexEventTimes_709);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 2, 41)}, ComplexEventTimes_NoComplexEventTimes_709);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_709);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_165;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_85564870"}, EvntGrp_NoEvents_165);
      FIX::EventPx EventPx_165;
      EventPx_165.setString("7334659");
set_field(noEvents_0_1_0, EventPx_165, EvntGrp_NoEvents_165);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1675491502"}, EvntGrp_NoEvents_165);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(13, 8, 11, 2, 1, 2001)}, EvntGrp_NoEvents_165);
      set_field(noEvents_0_1_0, FIX::EventType{13}, EvntGrp_NoEvents_165);
      all_values.push_back(EvntGrp_NoEvents_165);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_166;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_1780864172"}, EvntGrp_NoEvents_166);
      FIX::EventPx EventPx_166;
      EventPx_166.setString("9520927");
set_field(noEvents_0_1_1, EventPx_166, EvntGrp_NoEvents_166);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_1647016036"}, EvntGrp_NoEvents_166);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(6, 54, 36, 10, 3, 2011)}, EvntGrp_NoEvents_166);
      set_field(noEvents_0_1_1, FIX::EventType{1}, EvntGrp_NoEvents_166);
      all_values.push_back(EvntGrp_NoEvents_166);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_156;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_279344540"}, InstrumentParties_NoInstrumentParties_156);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_156);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1245137674}, InstrumentParties_NoInstrumentParties_156);
      all_values.push_back(InstrumentParties_NoInstrumentParties_156);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_660464601"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1087044029}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_157;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_2097518507"}, InstrumentParties_NoInstrumentParties_157);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_157);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{1172608899}, InstrumentParties_NoInstrumentParties_157);
      all_values.push_back(InstrumentParties_NoInstrumentParties_157);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_2130738292"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{2077085998}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319;
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubID{"STRING_1011497259"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319);
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubIDType{22779533}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_168;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_1722637985"}, SecAltIDGrp_NoSecurityAltID_168);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1093116593"}, SecAltIDGrp_NoSecurityAltID_168);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_168);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_169;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_330620076"}, SecAltIDGrp_NoSecurityAltID_169);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_239379189"}, SecAltIDGrp_NoSecurityAltID_169);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_169);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_168;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_726497118"}, SecurityXML_168);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{1282712832}, SecurityXML_168);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_1886395226"}, SecurityXML_168);
    all_values.push_back(SecurityXML_168);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_13;
    set_field(noRelatedSym_0_0, FIX::DeliveryForm{2}, InstrumentExtension_13);
    FIX::PctAtRisk PctAtRisk_13;
    PctAtRisk_13.setString("46.940000");
set_field(noRelatedSym_0_0, PctAtRisk_13, InstrumentExtension_13);
    all_values.push_back(InstrumentExtension_13);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_26;
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribType{2}, AttrbGrp_NoInstrAttrib_26);
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribValue{"STRING_1046237852"}, AttrbGrp_NoInstrAttrib_26);
      all_values.push_back(AttrbGrp_NoInstrAttrib_26);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    // SecLstUpdRelSymsLegGrp
    // Group SecLstUpdRelSymsLegGrp.NoLegs
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_0;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_0;
      set_field(noLegs_0_1_0, FIX::LegSettlType{'7'}, SecLstUpdRelSymsLegGrp_NoLegs_0);
      set_field(noLegs_0_1_0, FIX::LegSwapType{1}, SecLstUpdRelSymsLegGrp_NoLegs_0);
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_0);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_127;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_425762396"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{1026510801}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_1616036277"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{1670900070}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_535390219"}, InstrumentLeg_127);
      FIX::LegContractMultiplier LegContractMultiplier_127;
      LegContractMultiplier_127.setString("1290172");
set_field(noLegs_0_1_0, LegContractMultiplier_127, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{610460451}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_485425078"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_584264021"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1783069351"}, InstrumentLeg_127);
      FIX::LegCouponRate LegCouponRate_127;
      LegCouponRate_127.setString("58.910000");
set_field(noLegs_0_1_0, LegCouponRate_127, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_567518665"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"USD"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_590298198"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{307569434}, InstrumentLeg_127);
      FIX::LegFactor LegFactor_127;
      LegFactor_127.setString("17555774");
set_field(noLegs_0_1_0, LegFactor_127, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{1683414792}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_638189510"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1994956677"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_262428262"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_1920902342"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_1733868255"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_504917477"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1766753388"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1104045799"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'8'}, InstrumentLeg_127);
      FIX::LegOptionRatio LegOptionRatio_127;
      LegOptionRatio_127.setString("6655075");
set_field(noLegs_0_1_0, LegOptionRatio_127, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_1269250346"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_1641544969"}, InstrumentLeg_127);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_127;
      LegPriceUnitOfMeasureQty_127.setString("8802706");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_127, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegProduct{1695012742}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{520572122}, InstrumentLeg_127);
      FIX::LegRatioQty LegRatioQty_127;
      LegRatioQty_127.setString("3488232");
set_field(noLegs_0_1_0, LegRatioQty_127, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1218429164"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_1055962341"}, InstrumentLeg_127);
      FIX::LegRepurchaseRate LegRepurchaseRate_127;
      LegRepurchaseRate_127.setString("4.970000");
set_field(noLegs_0_1_0, LegRepurchaseRate_127, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{1828889616}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_1541387419"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_1062104518"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_1464475319"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_562829663"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_1629623184"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_1029663372"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegSide{'5'}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_72437734"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_127);
      FIX::LegStrikePrice LegStrikePrice_127;
      LegStrikePrice_127.setString("17558525");
set_field(noLegs_0_1_0, LegStrikePrice_127, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_1975422316"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_51336034"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_2018280788"}, InstrumentLeg_127);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_1748841011"}, InstrumentLeg_127);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_127;
      LegUnitOfMeasureQty_127.setString("17852042");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_127, InstrumentLeg_127);
      all_values.push_back(InstrumentLeg_127);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_254;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_1368110751"}, LegSecAltIDGrp_NoLegSecurityAltID_254);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_741766440"}, LegSecAltIDGrp_NoLegSecurityAltID_254);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_254);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_16;
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveCurrency{"JPY"}, LegBenchmarkCurveData_16);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveName{"STRING_2011016786"}, LegBenchmarkCurveData_16);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurvePoint{"STRING_764154648"}, LegBenchmarkCurveData_16);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_16;
      LegBenchmarkPrice_16.setString("7664053");
set_field(noLegs_0_1_0, LegBenchmarkPrice_16, LegBenchmarkCurveData_16);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkPriceType{1558545880}, LegBenchmarkCurveData_16);
      all_values.push_back(LegBenchmarkCurveData_16);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_51;
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationType{"STRING_1115228599"}, LegStipulations_NoLegStipulations_51);
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationValue{"STRING_629491397"}, LegStipulations_NoLegStipulations_51);
        all_values.push_back(LegStipulations_NoLegStipulations_51);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_12;
    set_field(noRelatedSym_0_0, FIX::ExpirationCycle{1}, BaseTradingRules_12);
    set_field(noRelatedSym_0_0, FIX::ImpliedMarketIndicator{1}, BaseTradingRules_12);
    FIX::MaxPriceVariation MaxPriceVariation_12;
    MaxPriceVariation_12.setString("3108973");
set_field(noRelatedSym_0_0, MaxPriceVariation_12, BaseTradingRules_12);
    FIX::MaxTradeVol MaxTradeVol_12;
    MaxTradeVol_12.setString("17345928");
set_field(noRelatedSym_0_0, MaxTradeVol_12, BaseTradingRules_12);
    FIX::MinTradeVol MinTradeVol_12;
    MinTradeVol_12.setString("5076899");
set_field(noRelatedSym_0_0, MinTradeVol_12, BaseTradingRules_12);
    set_field(noRelatedSym_0_0, FIX::MultilegModel{2}, BaseTradingRules_12);
    set_field(noRelatedSym_0_0, FIX::MultilegPriceMethod{3}, BaseTradingRules_12);
    set_field(noRelatedSym_0_0, FIX::PriceType{10}, BaseTradingRules_12);
    FIX::RoundLot RoundLot_12;
    RoundLot_12.setString("6575524");
set_field(noRelatedSym_0_0, RoundLot_12, BaseTradingRules_12);
    set_field(noRelatedSym_0_0, FIX::TradingCurrency{"USD"}, BaseTradingRules_12);
    all_values.push_back(BaseTradingRules_12);
    all_compo_names.insert("...NoRelatedSym..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_26;
      set_field(noLotTypeRules_0_1_0, FIX::LotType{'2'}, LotTypeRules_NoLotTypeRules_26);
      FIX::MinLotSize MinLotSize_26;
      MinLotSize_26.setString("18181197");
set_field(noLotTypeRules_0_1_0, MinLotSize_26, LotTypeRules_NoLotTypeRules_26);
      all_values.push_back(LotTypeRules_NoLotTypeRules_26);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_27;
      set_field(noLotTypeRules_0_1_1, FIX::LotType{'3'}, LotTypeRules_NoLotTypeRules_27);
      FIX::MinLotSize MinLotSize_27;
      MinLotSize_27.setString("10009071");
set_field(noLotTypeRules_0_1_1, MinLotSize_27, LotTypeRules_NoLotTypeRules_27);
      all_values.push_back(LotTypeRules_NoLotTypeRules_27);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_28;
      set_field(noLotTypeRules_0_1_2, FIX::LotType{'2'}, LotTypeRules_NoLotTypeRules_28);
      FIX::MinLotSize MinLotSize_28;
      MinLotSize_28.setString("14240812");
set_field(noLotTypeRules_0_1_2, MinLotSize_28, LotTypeRules_NoLotTypeRules_28);
      all_values.push_back(LotTypeRules_NoLotTypeRules_28);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_12;
    FIX::HighLimitPrice HighLimitPrice_12;
    HighLimitPrice_12.setString("6386277");
set_field(noRelatedSym_0_0, HighLimitPrice_12, PriceLimits_12);
    FIX::LowLimitPrice LowLimitPrice_12;
    LowLimitPrice_12.setString("20646315");
set_field(noRelatedSym_0_0, LowLimitPrice_12, PriceLimits_12);
    set_field(noRelatedSym_0_0, FIX::PriceLimitType{0}, PriceLimits_12);
    FIX::TradingReferencePrice TradingReferencePrice_12;
    TradingReferencePrice_12.setString("13803941");
set_field(noRelatedSym_0_0, TradingReferencePrice_12, PriceLimits_12);
    all_values.push_back(PriceLimits_12);
    all_compo_names.insert("...NoRelatedSym...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_21;
      FIX::EndTickPriceRange EndTickPriceRange_21;
      EndTickPriceRange_21.setString("5308430");
set_field(noTickRules_0_1_0, EndTickPriceRange_21, TickRules_NoTickRules_21);
      FIX::StartTickPriceRange StartTickPriceRange_21;
      StartTickPriceRange_21.setString("12439273");
set_field(noTickRules_0_1_0, StartTickPriceRange_21, TickRules_NoTickRules_21);
      FIX::TickIncrement TickIncrement_21;
      TickIncrement_21.setString("19513958");
set_field(noTickRules_0_1_0, TickIncrement_21, TickRules_NoTickRules_21);
      set_field(noTickRules_0_1_0, FIX::TickRuleType{3}, TickRules_NoTickRules_21);
      all_values.push_back(TickRules_NoTickRules_21);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_22;
      FIX::EndTickPriceRange EndTickPriceRange_22;
      EndTickPriceRange_22.setString("6549895");
set_field(noTickRules_0_1_1, EndTickPriceRange_22, TickRules_NoTickRules_22);
      FIX::StartTickPriceRange StartTickPriceRange_22;
      StartTickPriceRange_22.setString("10886389");
set_field(noTickRules_0_1_1, StartTickPriceRange_22, TickRules_NoTickRules_22);
      FIX::TickIncrement TickIncrement_22;
      TickIncrement_22.setString("2649933");
set_field(noTickRules_0_1_1, TickIncrement_22, TickRules_NoTickRules_22);
      set_field(noTickRules_0_1_1, FIX::TickRuleType{3}, TickRules_NoTickRules_22);
      all_values.push_back(TickRules_NoTickRules_22);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_0.addGroup(noTickRules_0_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_24;
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribType{1858062426}, NestedInstrumentAttribute_NoNestedInstrAttrib_24);
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribValue{"STRING_1595378318"}, NestedInstrumentAttribute_NoNestedInstrAttrib_24);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_24);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_25;
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribType{868953674}, NestedInstrumentAttribute_NoNestedInstrAttrib_25);
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribValue{"STRING_218268746"}, NestedInstrumentAttribute_NoNestedInstrAttrib_25);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_25);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_22;
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_22);
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionSubID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_22);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_22);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_43;
        set_field(noExecInstRules_0_0_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_43);
        all_values.push_back(ExecInstRules_NoExecInstRules_43);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_44;
        set_field(noExecInstRules_0_0_2_1, FIX::ExecInstValue{'2'}, ExecInstRules_NoExecInstRules_44);
        all_values.push_back(ExecInstRules_NoExecInstRules_44);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_45;
        set_field(noExecInstRules_0_0_2_2, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_45);
        all_values.push_back(ExecInstRules_NoExecInstRules_45);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_47;
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_47);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDFeedType{"STRING_1403361562"}, MarketDataFeedTypes_NoMDFeedTypes_47);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MarketDepth{1567595162}, MarketDataFeedTypes_NoMDFeedTypes_47);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_47);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_48;
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_48);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDFeedType{"STRING_679959160"}, MarketDataFeedTypes_NoMDFeedTypes_48);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MarketDepth{58739259}, MarketDataFeedTypes_NoMDFeedTypes_48);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_48);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_49;
        set_field(noMDFeedTypes_0_0_2_2, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_49);
        set_field(noMDFeedTypes_0_0_2_2, FIX::MDFeedType{"STRING_1324667509"}, MarketDataFeedTypes_NoMDFeedTypes_49);
        set_field(noMDFeedTypes_0_0_2_2, FIX::MarketDepth{1439133444}, MarketDataFeedTypes_NoMDFeedTypes_49);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_49);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_48;
        set_field(noMatchRules_0_0_2_0, FIX::MatchAlgorithm{"STRING_1855510554"}, MatchRules_NoMatchRules_48);
        set_field(noMatchRules_0_0_2_0, FIX::MatchType{"STRING_MT"}, MatchRules_NoMatchRules_48);
        all_values.push_back(MatchRules_NoMatchRules_48);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_49;
        set_field(noMatchRules_0_0_2_1, FIX::MatchAlgorithm{"STRING_390736140"}, MatchRules_NoMatchRules_49);
        set_field(noMatchRules_0_0_2_1, FIX::MatchType{"STRING_1"}, MatchRules_NoMatchRules_49);
        all_values.push_back(MatchRules_NoMatchRules_49);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_46;
        set_field(noOrdTypeRules_0_0_2_0, FIX::OrdType{'J'}, OrdTypeRules_NoOrdTypeRules_46);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_46);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_47;
        set_field(noOrdTypeRules_0_0_2_1, FIX::OrdType{'M'}, OrdTypeRules_NoOrdTypeRules_47);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_47);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_43;
        set_field(noTimeInForceRules_0_0_2_0, FIX::TimeInForce{'4'}, TimeInForceRules_NoTimeInForceRules_43);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_43);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_44;
        set_field(noTimeInForceRules_0_0_2_1, FIX::TimeInForce{'2'}, TimeInForceRules_NoTimeInForceRules_44);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_44);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_23;
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionID{"STRING_1"}, TradingSessionRulesGrp_NoTradingSessionRules_23);
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionSubID{"STRING_7"}, TradingSessionRulesGrp_NoTradingSessionRules_23);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_23);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_46;
        set_field(noExecInstRules_0_1_2_0, FIX::ExecInstValue{'9'}, ExecInstRules_NoExecInstRules_46);
        all_values.push_back(ExecInstRules_NoExecInstRules_46);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_47;
        set_field(noExecInstRules_0_1_2_1, FIX::ExecInstValue{'3'}, ExecInstRules_NoExecInstRules_47);
        all_values.push_back(ExecInstRules_NoExecInstRules_47);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_50;
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_50);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDFeedType{"STRING_2118699140"}, MarketDataFeedTypes_NoMDFeedTypes_50);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MarketDepth{1677579875}, MarketDataFeedTypes_NoMDFeedTypes_50);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_50);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_51;
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_51);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDFeedType{"STRING_537903551"}, MarketDataFeedTypes_NoMDFeedTypes_51);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MarketDepth{1618581479}, MarketDataFeedTypes_NoMDFeedTypes_51);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_51);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_50;
        set_field(noMatchRules_0_1_2_0, FIX::MatchAlgorithm{"STRING_2105498714"}, MatchRules_NoMatchRules_50);
        set_field(noMatchRules_0_1_2_0, FIX::MatchType{"STRING_M3"}, MatchRules_NoMatchRules_50);
        all_values.push_back(MatchRules_NoMatchRules_50);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_51;
        set_field(noMatchRules_0_1_2_1, FIX::MatchAlgorithm{"STRING_248536873"}, MatchRules_NoMatchRules_51);
        set_field(noMatchRules_0_1_2_1, FIX::MatchType{"STRING_4"}, MatchRules_NoMatchRules_51);
        all_values.push_back(MatchRules_NoMatchRules_51);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_52;
        set_field(noMatchRules_0_1_2_2, FIX::MatchAlgorithm{"STRING_500599076"}, MatchRules_NoMatchRules_52);
        set_field(noMatchRules_0_1_2_2, FIX::MatchType{"STRING_S5"}, MatchRules_NoMatchRules_52);
        all_values.push_back(MatchRules_NoMatchRules_52);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_48;
        set_field(noOrdTypeRules_0_1_2_0, FIX::OrdType{'7'}, OrdTypeRules_NoOrdTypeRules_48);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_48);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_45;
        set_field(noTimeInForceRules_0_1_2_0, FIX::TimeInForce{'8'}, TimeInForceRules_NoTimeInForceRules_45);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_45);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_24;
      set_field(noTradingSessionRules_0_1_2, FIX::TradingSessionID{"STRING_1"}, TradingSessionRulesGrp_NoTradingSessionRules_24);
      set_field(noTradingSessionRules_0_1_2, FIX::TradingSessionSubID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_24);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_24);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_48;
        set_field(noExecInstRules_0_2_2_0, FIX::ExecInstValue{'8'}, ExecInstRules_NoExecInstRules_48);
        all_values.push_back(ExecInstRules_NoExecInstRules_48);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_49;
        set_field(noExecInstRules_0_2_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_49);
        all_values.push_back(ExecInstRules_NoExecInstRules_49);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_52;
        set_field(noMDFeedTypes_0_2_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_52);
        set_field(noMDFeedTypes_0_2_2_0, FIX::MDFeedType{"STRING_242655281"}, MarketDataFeedTypes_NoMDFeedTypes_52);
        set_field(noMDFeedTypes_0_2_2_0, FIX::MarketDepth{1137570547}, MarketDataFeedTypes_NoMDFeedTypes_52);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_52);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_53;
        set_field(noMDFeedTypes_0_2_2_1, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_53);
        set_field(noMDFeedTypes_0_2_2_1, FIX::MDFeedType{"STRING_1441771419"}, MarketDataFeedTypes_NoMDFeedTypes_53);
        set_field(noMDFeedTypes_0_2_2_1, FIX::MarketDepth{2136296551}, MarketDataFeedTypes_NoMDFeedTypes_53);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_53);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_54;
        set_field(noMDFeedTypes_0_2_2_2, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_54);
        set_field(noMDFeedTypes_0_2_2_2, FIX::MDFeedType{"STRING_701502159"}, MarketDataFeedTypes_NoMDFeedTypes_54);
        set_field(noMDFeedTypes_0_2_2_2, FIX::MarketDepth{720875022}, MarketDataFeedTypes_NoMDFeedTypes_54);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_54);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_53;
        set_field(noMatchRules_0_2_2_0, FIX::MatchAlgorithm{"STRING_231598386"}, MatchRules_NoMatchRules_53);
        set_field(noMatchRules_0_2_2_0, FIX::MatchType{"STRING_S1"}, MatchRules_NoMatchRules_53);
        all_values.push_back(MatchRules_NoMatchRules_53);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_54;
        set_field(noMatchRules_0_2_2_1, FIX::MatchAlgorithm{"STRING_1622210001"}, MatchRules_NoMatchRules_54);
        set_field(noMatchRules_0_2_2_1, FIX::MatchType{"STRING_2"}, MatchRules_NoMatchRules_54);
        all_values.push_back(MatchRules_NoMatchRules_54);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_49;
        set_field(noOrdTypeRules_0_2_2_0, FIX::OrdType{'4'}, OrdTypeRules_NoOrdTypeRules_49);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_49);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_46;
        set_field(noTimeInForceRules_0_2_2_0, FIX::TimeInForce{'6'}, TimeInForceRules_NoTimeInForceRules_46);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_46);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_47;
        set_field(noTimeInForceRules_0_2_2_1, FIX::TimeInForce{'2'}, TimeInForceRules_NoTimeInForceRules_47);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_47);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_48;
        set_field(noTimeInForceRules_0_2_2_2, FIX::TimeInForce{'3'}, TimeInForceRules_NoTimeInForceRules_48);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_48);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_34;
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_34);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveName{"STRING_Treasury"}, SpreadOrBenchmarkCurveData_34);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurvePoint{"STRING_1557641428"}, SpreadOrBenchmarkCurveData_34);
    FIX::BenchmarkPrice BenchmarkPrice_34;
    BenchmarkPrice_34.setString("7493647");
set_field(noRelatedSym_0_0, BenchmarkPrice_34, SpreadOrBenchmarkCurveData_34);
    set_field(noRelatedSym_0_0, FIX::BenchmarkPriceType{1722410153}, SpreadOrBenchmarkCurveData_34);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityID{"STRING_1696664352"}, SpreadOrBenchmarkCurveData_34);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityIDSource{"STRING_1783912670"}, SpreadOrBenchmarkCurveData_34);
    FIX::Spread Spread_34;
    Spread_34.setString("3849771");
set_field(noRelatedSym_0_0, Spread_34, SpreadOrBenchmarkCurveData_34);
    all_values.push_back(SpreadOrBenchmarkCurveData_34);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_61;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_SECTYPE"}, Stipulations_NoStipulations_61);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_1808763650"}, Stipulations_NoStipulations_61);
      all_values.push_back(Stipulations_NoStipulations_61);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_62;
      set_field(noStipulations_0_1_1, FIX::StipulationType{"STRING_BGNCON"}, Stipulations_NoStipulations_62);
      set_field(noStipulations_0_1_1, FIX::StipulationValue{"STRING_2136111465"}, Stipulations_NoStipulations_62);
      all_values.push_back(Stipulations_NoStipulations_62);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_22;
      FIX::EndStrikePxRange EndStrikePxRange_22;
      EndStrikePxRange_22.setString("4954152");
set_field(noStrikeRules_0_1_0, EndStrikePxRange_22, StrikeRules_NoStrikeRules_22);
      FIX::StartStrikePxRange StartStrikePxRange_22;
      StartStrikePxRange_22.setString("21249243");
set_field(noStrikeRules_0_1_0, StartStrikePxRange_22, StrikeRules_NoStrikeRules_22);
      set_field(noStrikeRules_0_1_0, FIX::StrikeExerciseStyle{1533363414}, StrikeRules_NoStrikeRules_22);
      FIX::StrikeIncrement StrikeIncrement_22;
      StrikeIncrement_22.setString("11969174");
set_field(noStrikeRules_0_1_0, StrikeIncrement_22, StrikeRules_NoStrikeRules_22);
      set_field(noStrikeRules_0_1_0, FIX::StrikeRuleID{"STRING_698315743"}, StrikeRules_NoStrikeRules_22);
      all_values.push_back(StrikeRules_NoStrikeRules_22);
      all_compo_names.insert("...NoRelatedSym...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_48;
        set_field(noMaturityRules_0_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1428515840"}, MaturityRules_NoMaturityRules_48);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_48);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrement{2092396218}, MaturityRules_NoMaturityRules_48);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_48);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityRuleID{"STRING_186559449"}, MaturityRules_NoMaturityRules_48);
        set_field(noMaturityRules_0_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1525137637"}, MaturityRules_NoMaturityRules_48);
        all_values.push_back(MaturityRules_NoMaturityRules_48);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_49;
        set_field(noMaturityRules_0_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_1934924614"}, MaturityRules_NoMaturityRules_49);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_49);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrement{974633382}, MaturityRules_NoMaturityRules_49);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_49);
        set_field(noMaturityRules_0_0_2_1, FIX::MaturityRuleID{"STRING_1313658996"}, MaturityRules_NoMaturityRules_49);
        set_field(noMaturityRules_0_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1880016895"}, MaturityRules_NoMaturityRules_49);
        all_values.push_back(MaturityRules_NoMaturityRules_49);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_50;
        set_field(noMaturityRules_0_0_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_1336003598"}, MaturityRules_NoMaturityRules_50);
        set_field(noMaturityRules_0_0_2_2, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_50);
        set_field(noMaturityRules_0_0_2_2, FIX::MaturityMonthYearIncrement{481898001}, MaturityRules_NoMaturityRules_50);
        set_field(noMaturityRules_0_0_2_2, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_50);
        set_field(noMaturityRules_0_0_2_2, FIX::MaturityRuleID{"STRING_272997481"}, MaturityRules_NoMaturityRules_50);
        set_field(noMaturityRules_0_0_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_118327023"}, MaturityRules_NoMaturityRules_50);
        all_values.push_back(MaturityRules_NoMaturityRules_50);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_129;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1231469723"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{1116867942}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_957187232"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{285113598}, UnderlyingInstrument_129);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_129;
      UnderlyingAdjustedQuantity_129.setString("11054957");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_129, UnderlyingInstrument_129);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_129;
      UnderlyingAllocationPercent_129.setString("96.890000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_129, UnderlyingInstrument_129);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_129;
      UnderlyingAttachmentPoint_129.setString("88.930000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_1082936480"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_763339455"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_1977446347"}, UnderlyingInstrument_129);
      FIX::UnderlyingCapValue UnderlyingCapValue_129;
      UnderlyingCapValue_129.setString("17812522");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_129, UnderlyingInstrument_129);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_129;
      UnderlyingCashAmount_129.setString("12335256");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_129);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_129;
      UnderlyingContractMultiplier_129.setString("13656591");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{1178438242}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_242206948"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1552218588"}, UnderlyingInstrument_129);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_129;
      UnderlyingCouponRate_129.setString("22.310000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_29647914"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_129);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_129;
      UnderlyingCurrentValue_129.setString("11214005");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_129, UnderlyingInstrument_129);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_129;
      UnderlyingDetachmentPoint_129.setString("27.910000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_129, UnderlyingInstrument_129);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_129;
      UnderlyingDirtyPrice_129.setString("12632588");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_129, UnderlyingInstrument_129);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_129;
      UnderlyingEndPrice_129.setString("3099204");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_129, UnderlyingInstrument_129);
      FIX::UnderlyingEndValue UnderlyingEndValue_129;
      UnderlyingEndValue_129.setString("3319759");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{1745156862}, UnderlyingInstrument_129);
      FIX::UnderlyingFXRate UnderlyingFXRate_129;
      UnderlyingFXRate_129.setString("12208505");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_129);
      FIX::UnderlyingFactor UnderlyingFactor_129;
      UnderlyingFactor_129.setString("18634838");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{369274148}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_1836443124"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_832868180"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_1326461380"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_2121556722"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1938363939"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_556437421"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_754601968"}, UnderlyingInstrument_129);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_129;
      UnderlyingNotionalPercentageOutstanding_129.setString("67.720000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_129);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_129;
      UnderlyingOriginalNotionalPercentageOutstanding_129.setString("46.670000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_507585347"}, UnderlyingInstrument_129);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_129;
      UnderlyingPriceUnitOfMeasureQty_129.setString("4058189");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{1843043207}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{1873244486}, UnderlyingInstrument_129);
      FIX::UnderlyingPx UnderlyingPx_129;
      UnderlyingPx_129.setString("15842571");
set_field(noUnderlyings_0_1_0, UnderlyingPx_129, UnderlyingInstrument_129);
      FIX::UnderlyingQty UnderlyingQty_129;
      UnderlyingQty_129.setString("20852501");
set_field(noUnderlyings_0_1_0, UnderlyingQty_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1277979426"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2140349374"}, UnderlyingInstrument_129);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_129;
      UnderlyingRepurchaseRate_129.setString("80.700000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{1719963222}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_1523591340"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_1088814935"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1328122365"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_639366553"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_1398735399"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_1660098285"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_237039767"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_472102318"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_117588038"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_129);
      FIX::UnderlyingStartValue UnderlyingStartValue_129;
      UnderlyingStartValue_129.setString("8413764");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1954031162"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_129);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_129;
      UnderlyingStrikePrice_129.setString("19281042");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_129, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_576788477"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_576791620"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_535222557"}, UnderlyingInstrument_129);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1450605249"}, UnderlyingInstrument_129);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_129;
      UnderlyingUnitOfMeasureQty_129.setString("18965684");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_129, UnderlyingInstrument_129);
      all_values.push_back(UnderlyingInstrument_129);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_269;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1958190596"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_269);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_154903750"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_269);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_269);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_260;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_1683951435"}, UnderlyingStipulations_NoUnderlyingStips_260);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_1739160893"}, UnderlyingStipulations_NoUnderlyingStips_260);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_260);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_273;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_814447213"}, UndlyInstrumentParties_NoUndlyInstrumentParties_273);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_273);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{720527713}, UndlyInstrumentParties_NoUndlyInstrumentParties_273);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_273);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1108134312"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1809342648}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_547);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1715049153"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1747500865}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_548);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1060594399"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{1227663790}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_549);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_274;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1984540632"}, UndlyInstrumentParties_NoUndlyInstrumentParties_274);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_274);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{1345251829}, UndlyInstrumentParties_NoUndlyInstrumentParties_274);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_274);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_226589536"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1151799343}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_550);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_576005175"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{246943735}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_551);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_932419932"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{1152793652}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_552);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_275;
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_823735355"}, UndlyInstrumentParties_NoUndlyInstrumentParties_275);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_275);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyRole{455915253}, UndlyInstrumentParties_NoUndlyInstrumentParties_275);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_275);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_439946066"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{266622202}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_553);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_727723955"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{1255292849}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_554);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_130;
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1950573637"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuerLen{319401201}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_2008406140"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDescLen{617537202}, UnderlyingInstrument_130);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_130;
      UnderlyingAdjustedQuantity_130.setString("20514278");
set_field(noUnderlyings_0_1_1, UnderlyingAdjustedQuantity_130, UnderlyingInstrument_130);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_130;
      UnderlyingAllocationPercent_130.setString("2.050000");
set_field(noUnderlyings_0_1_1, UnderlyingAllocationPercent_130, UnderlyingInstrument_130);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_130;
      UnderlyingAttachmentPoint_130.setString("39.900000");
set_field(noUnderlyings_0_1_1, UnderlyingAttachmentPoint_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCFICode{"STRING_1012078485"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPProgram{"STRING_243309206"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPRegType{"STRING_572029495"}, UnderlyingInstrument_130);
      FIX::UnderlyingCapValue UnderlyingCapValue_130;
      UnderlyingCapValue_130.setString("6120957");
set_field(noUnderlyings_0_1_1, UnderlyingCapValue_130, UnderlyingInstrument_130);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_130;
      UnderlyingCashAmount_130.setString("13039036");
set_field(noUnderlyings_0_1_1, UnderlyingCashAmount_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_130);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_130;
      UnderlyingContractMultiplier_130.setString("4491526");
set_field(noUnderlyings_0_1_1, UnderlyingContractMultiplier_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingContractMultiplierUnit{689116675}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_997461466"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_239249676"}, UnderlyingInstrument_130);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_130;
      UnderlyingCouponRate_130.setString("62.110000");
set_field(noUnderlyings_0_1_1, UnderlyingCouponRate_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCreditRating{"STRING_1777162"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_130);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_130;
      UnderlyingCurrentValue_130.setString("9341970");
set_field(noUnderlyings_0_1_1, UnderlyingCurrentValue_130, UnderlyingInstrument_130);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_130;
      UnderlyingDetachmentPoint_130.setString("85.040000");
set_field(noUnderlyings_0_1_1, UnderlyingDetachmentPoint_130, UnderlyingInstrument_130);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_130;
      UnderlyingDirtyPrice_130.setString("19863853");
set_field(noUnderlyings_0_1_1, UnderlyingDirtyPrice_130, UnderlyingInstrument_130);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_130;
      UnderlyingEndPrice_130.setString("2543559");
set_field(noUnderlyings_0_1_1, UnderlyingEndPrice_130, UnderlyingInstrument_130);
      FIX::UnderlyingEndValue UnderlyingEndValue_130;
      UnderlyingEndValue_130.setString("2764801");
set_field(noUnderlyings_0_1_1, UnderlyingEndValue_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingExerciseStyle{411721858}, UnderlyingInstrument_130);
      FIX::UnderlyingFXRate UnderlyingFXRate_130;
      UnderlyingFXRate_130.setString("6943020");
set_field(noUnderlyings_0_1_1, UnderlyingFXRate_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_130);
      FIX::UnderlyingFactor UnderlyingFactor_130;
      UnderlyingFactor_130.setString("11394458");
set_field(noUnderlyings_0_1_1, UnderlyingFactor_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFlowScheduleType{1949594851}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingInstrRegistry{"STRING_346192301"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1458847015"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssuer{"STRING_1810517344"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_963729503"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1362791188"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_244483901"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1968193493"}, UnderlyingInstrument_130);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_130;
      UnderlyingNotionalPercentageOutstanding_130.setString("60.250000");
set_field(noUnderlyings_0_1_1, UnderlyingNotionalPercentageOutstanding_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_130);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_130;
      UnderlyingOriginalNotionalPercentageOutstanding_130.setString("93.400000");
set_field(noUnderlyings_0_1_1, UnderlyingOriginalNotionalPercentageOutstanding_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_839481727"}, UnderlyingInstrument_130);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_130;
      UnderlyingPriceUnitOfMeasureQty_130.setString("17916967");
set_field(noUnderlyings_0_1_1, UnderlyingPriceUnitOfMeasureQty_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingProduct{44948978}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPutOrCall{1288634413}, UnderlyingInstrument_130);
      FIX::UnderlyingPx UnderlyingPx_130;
      UnderlyingPx_130.setString("3333297");
set_field(noUnderlyings_0_1_1, UnderlyingPx_130, UnderlyingInstrument_130);
      FIX::UnderlyingQty UnderlyingQty_130;
      UnderlyingQty_130.setString("10424104");
set_field(noUnderlyings_0_1_1, UnderlyingQty_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1527884090"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1249035951"}, UnderlyingInstrument_130);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_130;
      UnderlyingRepurchaseRate_130.setString("76.060000");
set_field(noUnderlyings_0_1_1, UnderlyingRepurchaseRate_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepurchaseTerm{195655294}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRestructuringType{"STRING_264202249"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityDesc{"STRING_1978384701"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_16220150"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityID{"STRING_103103902"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityIDSource{"STRING_85256989"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecuritySubType{"STRING_292700260"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityType{"STRING_514825761"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSeniority{"STRING_779558991"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlMethod{"STRING_835802572"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_130);
      FIX::UnderlyingStartValue UnderlyingStartValue_130;
      UnderlyingStartValue_130.setString("5816701");
set_field(noUnderlyings_0_1_1, UnderlyingStartValue_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1181994873"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_130);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_130;
      UnderlyingStrikePrice_130.setString("21457243");
set_field(noUnderlyings_0_1_1, UnderlyingStrikePrice_130, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbol{"STRING_180942482"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbolSfx{"STRING_489187792"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingTimeUnit{"STRING_1966434222"}, UnderlyingInstrument_130);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_408328507"}, UnderlyingInstrument_130);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_130;
      UnderlyingUnitOfMeasureQty_130.setString("9769808");
set_field(noUnderlyings_0_1_1, UnderlyingUnitOfMeasureQty_130, UnderlyingInstrument_130);
      all_values.push_back(UnderlyingInstrument_130);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_270;
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_1247810234"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_270);
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_621193964"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_270);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_270);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_261;
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipType{"STRING_388960999"}, UnderlyingStipulations_NoUnderlyingStips_261);
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipValue{"STRING_954523704"}, UnderlyingStipulations_NoUnderlyingStips_261);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_261);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_262;
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipType{"STRING_1299049337"}, UnderlyingStipulations_NoUnderlyingStips_262);
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipValue{"STRING_1916845089"}, UnderlyingStipulations_NoUnderlyingStips_262);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_262);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_263;
        set_field(noUnderlyingStips_0_1_2_2, FIX::UnderlyingStipType{"STRING_56076007"}, UnderlyingStipulations_NoUnderlyingStips_263);
        set_field(noUnderlyingStips_0_1_2_2, FIX::UnderlyingStipValue{"STRING_195753296"}, UnderlyingStipulations_NoUnderlyingStips_263);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_263);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_276;
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_320278256"}, UndlyInstrumentParties_NoUndlyInstrumentParties_276);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_276);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyRole{2128720534}, UndlyInstrumentParties_NoUndlyInstrumentParties_276);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_276);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_111911338"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{273937146}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_555);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_938207920"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{891470329}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_556);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_277;
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1109739719"}, UndlyInstrumentParties_NoUndlyInstrumentParties_277);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_277);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyRole{1473140523}, UndlyInstrumentParties_NoUndlyInstrumentParties_277);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_277);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1410630789"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1717844414}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_557);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    // YieldData
    multiset<string> YieldData_29;
    FIX::Yield Yield_29;
    Yield_29.setString("16.730000");
set_field(noRelatedSym_0_0, Yield_29, YieldData_29);
    set_field(noRelatedSym_0_0, FIX::YieldCalcDate{"LOCALMKTDATE_1591573271"}, YieldData_29);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionDate{"LOCALMKTDATE_59548558"}, YieldData_29);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_29;
    YieldRedemptionPrice_29.setString("21089258");
set_field(noRelatedSym_0_0, YieldRedemptionPrice_29, YieldData_29);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionPriceType{1999901778}, YieldData_29);
    set_field(noRelatedSym_0_0, FIX::YieldType{"STRING_LASTYEAR"}, YieldData_29);
    all_values.push_back(YieldData_29);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::SecurityListUpdateReport::NoRelatedSym noRelatedSym_0_1;
    // SecLstUpdRelSymGrp.NoRelatedSym
    multiset<string> SecLstUpdRelSymGrp_NoRelatedSym_1;
    set_field(noRelatedSym_0_1, FIX::Currency{"USD"}, SecLstUpdRelSymGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::EncodedText{"DATA_1657723422"}, SecLstUpdRelSymGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::EncodedTextLen{429771056}, SecLstUpdRelSymGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::ListUpdateAction{'1'}, SecLstUpdRelSymGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(1, 45, 6, 17, 9, 2008)}, SecLstUpdRelSymGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::Text{"STRING_1951228038"}, SecLstUpdRelSymGrp_NoRelatedSym_1);
    all_values.push_back(SecLstUpdRelSymGrp_NoRelatedSym_1);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_28;
    set_field(noRelatedSym_0_1, FIX::AgreementCurrency{"CHF"}, FinancingDetails_28);
    set_field(noRelatedSym_0_1, FIX::AgreementDate{"LOCALMKTDATE_2063139376"}, FinancingDetails_28);
    set_field(noRelatedSym_0_1, FIX::AgreementDesc{"STRING_1478741573"}, FinancingDetails_28);
    set_field(noRelatedSym_0_1, FIX::AgreementID{"STRING_55224173"}, FinancingDetails_28);
    set_field(noRelatedSym_0_1, FIX::DeliveryType{1}, FinancingDetails_28);
    set_field(noRelatedSym_0_1, FIX::EndDate{"LOCALMKTDATE_440997644"}, FinancingDetails_28);
    FIX::MarginRatio MarginRatio_28;
    MarginRatio_28.setString("0.200000");
set_field(noRelatedSym_0_1, MarginRatio_28, FinancingDetails_28);
    set_field(noRelatedSym_0_1, FIX::StartDate{"LOCALMKTDATE_132782933"}, FinancingDetails_28);
    set_field(noRelatedSym_0_1, FIX::TerminationType{1}, FinancingDetails_28);
    all_values.push_back(FinancingDetails_28);
    all_compo_names.insert("...NoRelatedSym.");

    // Instrument
    multiset<string> Instrument_85;
    FIX::AttachmentPoint AttachmentPoint_85;
    AttachmentPoint_85.setString("8.090000");
set_field(noRelatedSym_0_1, AttachmentPoint_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_1850627347"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::CPProgram{2}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_1354940432"}, Instrument_85);
    FIX::CapPrice CapPrice_85;
    CapPrice_85.setString("19101759");
set_field(noRelatedSym_0_1, CapPrice_85, Instrument_85);
    FIX::ContractMultiplier ContractMultiplier_85;
    ContractMultiplier_85.setString("6891825");
set_field(noRelatedSym_0_1, ContractMultiplier_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{0}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_799221714"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_862314673"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_160103278"}, Instrument_85);
    FIX::CouponRate CouponRate_85;
    CouponRate_85.setString("14.880000");
set_field(noRelatedSym_0_1, CouponRate_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_1292085729"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_1649292642"}, Instrument_85);
    FIX::DetachmentPoint DetachmentPoint_85;
    DetachmentPoint_85.setString("49.670000");
set_field(noRelatedSym_0_1, DetachmentPoint_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_873422474"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{760359799}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_1295064453"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{650512516}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{0}, Instrument_85);
    FIX::Factor Factor_85;
    Factor_85.setString("21361821");
set_field(noRelatedSym_0_1, Factor_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{true}, Instrument_85);
    FIX::FloorPrice FloorPrice_85;
    FloorPrice_85.setString("12531984");
set_field(noRelatedSym_0_1, FloorPrice_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{0}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_372506043"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_1177038692"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_813503687"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_1808642643"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::ListMethod{1}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_1398752275"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_1572009804"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_1012965324"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_2126492537"}, Instrument_85);
    FIX::MinPriceIncrement MinPriceIncrement_85;
    MinPriceIncrement_85.setString("7794665");
set_field(noRelatedSym_0_1, MinPriceIncrement_85, Instrument_85);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_85;
    MinPriceIncrementAmount_85.setString("7756575");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{668191399}, Instrument_85);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_85;
    NotionalPercentageOutstanding_85.setString("51.510000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'1'}, Instrument_85);
    FIX::OptPayoutAmount OptPayoutAmount_85;
    OptPayoutAmount_85.setString("15305060");
set_field(noRelatedSym_0_1, OptPayoutAmount_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{1}, Instrument_85);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_85;
    OriginalNotionalPercentageOutstanding_85.setString("7.840000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_675108153"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{1648737424}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_1548530628"}, Instrument_85);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_85;
    PriceUnitOfMeasureQty_85.setString("2616135");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::Product{7}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_51559496"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{0}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_1794845104"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_505816402"}, Instrument_85);
    FIX::RepurchaseRate RepurchaseRate_85;
    RepurchaseRate_85.setString("53.840000");
set_field(noRelatedSym_0_1, RepurchaseRate_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{900559905}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_MR"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_1511811427"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_61498879"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_2052767730"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_177831466"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_J"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_2"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_1576583742"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_FXSWAP"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SR"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'P'}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_2074134268"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_856244965"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"CHF"}, Instrument_85);
    FIX::StrikeMultiplier StrikeMultiplier_85;
    StrikeMultiplier_85.setString("2836406");
set_field(noRelatedSym_0_1, StrikeMultiplier_85, Instrument_85);
    FIX::StrikePrice StrikePrice_85;
    StrikePrice_85.setString("16068064");
set_field(noRelatedSym_0_1, StrikePrice_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{4}, Instrument_85);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_85;
    StrikePriceBoundaryPrecision_85.setString("77.500000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{2}, Instrument_85);
    FIX::StrikeValue StrikeValue_85;
    StrikeValue_85.setString("14141743");
set_field(noRelatedSym_0_1, StrikeValue_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_531579853"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_WI"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_H"}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_USD"}, Instrument_85);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_85;
    UnitOfMeasureQty_85.setString("17738451");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_85, Instrument_85);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_FUT"}, Instrument_85);
    all_values.push_back(Instrument_85);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_175;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_175);
      FIX::ComplexEventPrice ComplexEventPrice_175;
      ComplexEventPrice_175.setString("7381641");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_175, ComplexEvents_NoComplexEvents_175);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_175);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_175;
      ComplexEventPriceBoundaryPrecision_175.setString("46.870000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_175, ComplexEvents_NoComplexEvents_175);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_175);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_175);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_175;
      ComplexOptPayoutAmount_175.setString("3078261");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_175, ComplexEvents_NoComplexEvents_175);
      all_values.push_back(ComplexEvents_NoComplexEvents_175);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_351;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 36, 2, 15, 9, 2010)}, ComplexEventDates_NoComplexEventDates_351);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 1, 49, 5, 12, 2008)}, ComplexEventDates_NoComplexEventDates_351);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_351);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_710;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 3, 7)}, ComplexEventTimes_NoComplexEventTimes_710);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 45, 8)}, ComplexEventTimes_NoComplexEventTimes_710);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_710);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_711;
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 5, 20)}, ComplexEventTimes_NoComplexEventTimes_711);
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 14, 39)}, ComplexEventTimes_NoComplexEventTimes_711);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_711);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_176;
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_176);
      FIX::ComplexEventPrice ComplexEventPrice_176;
      ComplexEventPrice_176.setString("6368386");
set_field(noComplexEvents_1_1_1, ComplexEventPrice_176, ComplexEvents_NoComplexEvents_176);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_176);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_176;
      ComplexEventPriceBoundaryPrecision_176.setString("75.050000");
set_field(noComplexEvents_1_1_1, ComplexEventPriceBoundaryPrecision_176, ComplexEvents_NoComplexEvents_176);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_176);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_176);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_176;
      ComplexOptPayoutAmount_176.setString("7147952");
set_field(noComplexEvents_1_1_1, ComplexOptPayoutAmount_176, ComplexEvents_NoComplexEvents_176);
      all_values.push_back(ComplexEvents_NoComplexEvents_176);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_352;
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 4, 12, 6, 11, 2016)}, ComplexEventDates_NoComplexEventDates_352);
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 53, 6, 18, 8, 2003)}, ComplexEventDates_NoComplexEventDates_352);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_352);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_712;
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 31, 33)}, ComplexEventTimes_NoComplexEventTimes_712);
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 47, 57)}, ComplexEventTimes_NoComplexEventTimes_712);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_712);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_713;
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 4, 19)}, ComplexEventTimes_NoComplexEventTimes_713);
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 4, 28)}, ComplexEventTimes_NoComplexEventTimes_713);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_713);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_353;
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 24, 23, 20, 11, 2007)}, ComplexEventDates_NoComplexEventDates_353);
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 7, 45, 23, 7, 2004)}, ComplexEventDates_NoComplexEventDates_353);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_353);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_714;
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 37, 53)}, ComplexEventTimes_NoComplexEventTimes_714);
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 32, 26)}, ComplexEventTimes_NoComplexEventTimes_714);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_714);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_715;
          set_field(noComplexEventTimes_1_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 22, 45)}, ComplexEventTimes_NoComplexEventTimes_715);
          set_field(noComplexEventTimes_1_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 49, 35)}, ComplexEventTimes_NoComplexEventTimes_715);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_715);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_354;
        set_field(noComplexEventDates_1_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 51, 40, 16, 6, 2012)}, ComplexEventDates_NoComplexEventDates_354);
        set_field(noComplexEventDates_1_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 1, 5, 5, 8, 2014)}, ComplexEventDates_NoComplexEventDates_354);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_354);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_716;
          set_field(noComplexEventTimes_1_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 35, 12)}, ComplexEventTimes_NoComplexEventTimes_716);
          set_field(noComplexEventTimes_1_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 44, 8)}, ComplexEventTimes_NoComplexEventTimes_716);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_716);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_717;
          set_field(noComplexEventTimes_1_1_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 31, 4)}, ComplexEventTimes_NoComplexEventTimes_717);
          set_field(noComplexEventTimes_1_1_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 45, 4)}, ComplexEventTimes_NoComplexEventTimes_717);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_717);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_177;
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_177);
      FIX::ComplexEventPrice ComplexEventPrice_177;
      ComplexEventPrice_177.setString("966508");
set_field(noComplexEvents_1_1_2, ComplexEventPrice_177, ComplexEvents_NoComplexEvents_177);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_177);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_177;
      ComplexEventPriceBoundaryPrecision_177.setString("45.470000");
set_field(noComplexEvents_1_1_2, ComplexEventPriceBoundaryPrecision_177, ComplexEvents_NoComplexEvents_177);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_177);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_177);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_177;
      ComplexOptPayoutAmount_177.setString("20634910");
set_field(noComplexEvents_1_1_2, ComplexOptPayoutAmount_177, ComplexEvents_NoComplexEvents_177);
      all_values.push_back(ComplexEvents_NoComplexEvents_177);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_355;
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 31, 39, 22, 2, 2008)}, ComplexEventDates_NoComplexEventDates_355);
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 5, 37, 21, 6, 2001)}, ComplexEventDates_NoComplexEventDates_355);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_355);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_718;
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 41, 28)}, ComplexEventTimes_NoComplexEventTimes_718);
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 5, 8)}, ComplexEventTimes_NoComplexEventTimes_718);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_718);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_356;
        set_field(noComplexEventDates_1_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 55, 17, 1, 1, 2000)}, ComplexEventDates_NoComplexEventDates_356);
        set_field(noComplexEventDates_1_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 37, 10, 26, 8, 2010)}, ComplexEventDates_NoComplexEventDates_356);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_356);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_719;
          set_field(noComplexEventTimes_1_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 37, 53)}, ComplexEventTimes_NoComplexEventTimes_719);
          set_field(noComplexEventTimes_1_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 58, 22)}, ComplexEventTimes_NoComplexEventTimes_719);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_719);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_720;
          set_field(noComplexEventTimes_1_2_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 55, 19)}, ComplexEventTimes_NoComplexEventTimes_720);
          set_field(noComplexEventTimes_1_2_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 24, 55)}, ComplexEventTimes_NoComplexEventTimes_720);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_720);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_721;
          set_field(noComplexEventTimes_1_2_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 50, 56)}, ComplexEventTimes_NoComplexEventTimes_721);
          set_field(noComplexEventTimes_1_2_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 19, 31)}, ComplexEventTimes_NoComplexEventTimes_721);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_721);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_2);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_357;
        set_field(noComplexEventDates_1_2_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 34, 35, 23, 3, 2001)}, ComplexEventDates_NoComplexEventDates_357);
        set_field(noComplexEventDates_1_2_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 36, 24, 25, 12, 2010)}, ComplexEventDates_NoComplexEventDates_357);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_357);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_722;
          set_field(noComplexEventTimes_1_2_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 51, 13)}, ComplexEventTimes_NoComplexEventTimes_722);
          set_field(noComplexEventTimes_1_2_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 38, 38)}, ComplexEventTimes_NoComplexEventTimes_722);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_722);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_723;
          set_field(noComplexEventTimes_1_2_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 20, 25)}, ComplexEventTimes_NoComplexEventTimes_723);
          set_field(noComplexEventTimes_1_2_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 36, 17)}, ComplexEventTimes_NoComplexEventTimes_723);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_723);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_724;
          set_field(noComplexEventTimes_1_2_2_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 51, 39)}, ComplexEventTimes_NoComplexEventTimes_724);
          set_field(noComplexEventTimes_1_2_2_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 46, 34)}, ComplexEventTimes_NoComplexEventTimes_724);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_724);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_2);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_167;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_409771514"}, EvntGrp_NoEvents_167);
      FIX::EventPx EventPx_167;
      EventPx_167.setString("20572325");
set_field(noEvents_1_1_0, EventPx_167, EvntGrp_NoEvents_167);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_1013643732"}, EvntGrp_NoEvents_167);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(1, 8, 28, 5, 12, 2006)}, EvntGrp_NoEvents_167);
      set_field(noEvents_1_1_0, FIX::EventType{13}, EvntGrp_NoEvents_167);
      all_values.push_back(EvntGrp_NoEvents_167);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_168;
      set_field(noEvents_1_1_1, FIX::EventDate{"LOCALMKTDATE_692180681"}, EvntGrp_NoEvents_168);
      FIX::EventPx EventPx_168;
      EventPx_168.setString("17997975");
set_field(noEvents_1_1_1, EventPx_168, EvntGrp_NoEvents_168);
      set_field(noEvents_1_1_1, FIX::EventText{"STRING_1211037022"}, EvntGrp_NoEvents_168);
      set_field(noEvents_1_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(1, 35, 27, 7, 7, 2004)}, EvntGrp_NoEvents_168);
      set_field(noEvents_1_1_1, FIX::EventType{18}, EvntGrp_NoEvents_168);
      all_values.push_back(EvntGrp_NoEvents_168);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_169;
      set_field(noEvents_1_1_2, FIX::EventDate{"LOCALMKTDATE_1019969350"}, EvntGrp_NoEvents_169);
      FIX::EventPx EventPx_169;
      EventPx_169.setString("8139036");
set_field(noEvents_1_1_2, EventPx_169, EvntGrp_NoEvents_169);
      set_field(noEvents_1_1_2, FIX::EventText{"STRING_548832540"}, EvntGrp_NoEvents_169);
      set_field(noEvents_1_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(8, 10, 27, 18, 5, 2017)}, EvntGrp_NoEvents_169);
      set_field(noEvents_1_1_2, FIX::EventType{6}, EvntGrp_NoEvents_169);
      all_values.push_back(EvntGrp_NoEvents_169);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_158;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_1039741079"}, InstrumentParties_NoInstrumentParties_158);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_158);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{671507212}, InstrumentParties_NoInstrumentParties_158);
      all_values.push_back(InstrumentParties_NoInstrumentParties_158);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_1254043547"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{332364044}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321;
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubID{"STRING_542954634"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321);
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubIDType{419245652}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322;
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubID{"STRING_1024544725"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322);
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubIDType{195268498}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_159;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_1630282674"}, InstrumentParties_NoInstrumentParties_159);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_159);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{1660264211}, InstrumentParties_NoInstrumentParties_159);
      all_values.push_back(InstrumentParties_NoInstrumentParties_159);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_712456254"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{2145034631}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_170;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_227357750"}, SecAltIDGrp_NoSecurityAltID_170);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_1036648520"}, SecAltIDGrp_NoSecurityAltID_170);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_170);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_170;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_415697189"}, SecurityXML_170);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{1041261371}, SecurityXML_170);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_1585481060"}, SecurityXML_170);
    all_values.push_back(SecurityXML_170);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_14;
    set_field(noRelatedSym_0_1, FIX::DeliveryForm{1}, InstrumentExtension_14);
    FIX::PctAtRisk PctAtRisk_14;
    PctAtRisk_14.setString("17.790000");
set_field(noRelatedSym_0_1, PctAtRisk_14, InstrumentExtension_14);
    all_values.push_back(InstrumentExtension_14);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_27;
      set_field(noInstrAttrib_1_1_0, FIX::InstrAttribType{8}, AttrbGrp_NoInstrAttrib_27);
      set_field(noInstrAttrib_1_1_0, FIX::InstrAttribValue{"STRING_60679665"}, AttrbGrp_NoInstrAttrib_27);
      all_values.push_back(AttrbGrp_NoInstrAttrib_27);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_28;
      set_field(noInstrAttrib_1_1_1, FIX::InstrAttribType{4}, AttrbGrp_NoInstrAttrib_28);
      set_field(noInstrAttrib_1_1_1, FIX::InstrAttribValue{"STRING_1066483391"}, AttrbGrp_NoInstrAttrib_28);
      all_values.push_back(AttrbGrp_NoInstrAttrib_28);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_1);
    }
    // SecLstUpdRelSymsLegGrp
    // Group SecLstUpdRelSymsLegGrp.NoLegs
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_0;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_1;
      set_field(noLegs_1_1_0, FIX::LegSettlType{'5'}, SecLstUpdRelSymsLegGrp_NoLegs_1);
      set_field(noLegs_1_1_0, FIX::LegSwapType{4}, SecLstUpdRelSymsLegGrp_NoLegs_1);
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_1);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_128;
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuer{"DATA_1292393508"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuerLen{1226294380}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDesc{"DATA_675046522"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDescLen{398953408}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegCFICode{"STRING_1558658424"}, InstrumentLeg_128);
      FIX::LegContractMultiplier LegContractMultiplier_128;
      LegContractMultiplier_128.setString("12180011");
set_field(noLegs_1_1_0, LegContractMultiplier_128, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegContractMultiplierUnit{818199060}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_435719501"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegCountryOfIssue{"COUNTRY_1413269654"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_300998086"}, InstrumentLeg_128);
      FIX::LegCouponRate LegCouponRate_128;
      LegCouponRate_128.setString("58.280000");
set_field(noLegs_1_1_0, LegCouponRate_128, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegCreditRating{"STRING_926050218"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegDatedDate{"LOCALMKTDATE_923601201"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegExerciseStyle{2138553095}, InstrumentLeg_128);
      FIX::LegFactor LegFactor_128;
      LegFactor_128.setString("13376498");
set_field(noLegs_1_1_0, LegFactor_128, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegFlowScheduleType{1960249721}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegInstrRegistry{"STRING_406766637"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_231427556"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1398247133"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegIssuer{"STRING_220541347"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegLocaleOfIssue{"STRING_1905499335"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_2096784976"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1529526465"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1966179000"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_128);
      FIX::LegOptionRatio LegOptionRatio_128;
      LegOptionRatio_128.setString("4485262");
set_field(noLegs_1_1_0, LegOptionRatio_128, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegPool{"STRING_323215443"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegPriceUnitOfMeasure{"STRING_1697670958"}, InstrumentLeg_128);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_128;
      LegPriceUnitOfMeasureQty_128.setString("4072670");
set_field(noLegs_1_1_0, LegPriceUnitOfMeasureQty_128, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegProduct{1615608951}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegPutOrCall{776481690}, InstrumentLeg_128);
      FIX::LegRatioQty LegRatioQty_128;
      LegRatioQty_128.setString("10823135");
set_field(noLegs_1_1_0, LegRatioQty_128, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_2014562359"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegRepoCollateralSecurityType{"STRING_187656466"}, InstrumentLeg_128);
      FIX::LegRepurchaseRate LegRepurchaseRate_128;
      LegRepurchaseRate_128.setString("10.610000");
set_field(noLegs_1_1_0, LegRepurchaseRate_128, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegRepurchaseTerm{685277771}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegSecurityDesc{"STRING_623375967"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegSecurityExchange{"EXCHANGE_1566100716"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegSecurityID{"STRING_986275858"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegSecurityIDSource{"STRING_1021211795"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegSecuritySubType{"STRING_344667286"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegSecurityType{"STRING_1581617466"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegSide{'2'}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_1268268487"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_128);
      FIX::LegStrikePrice LegStrikePrice_128;
      LegStrikePrice_128.setString("10810345");
set_field(noLegs_1_1_0, LegStrikePrice_128, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegSymbol{"STRING_1979453550"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegSymbolSfx{"STRING_1553097619"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegTimeUnit{"STRING_331798045"}, InstrumentLeg_128);
      set_field(noLegs_1_1_0, FIX::LegUnitOfMeasure{"STRING_52511250"}, InstrumentLeg_128);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_128;
      LegUnitOfMeasureQty_128.setString("13111133");
set_field(noLegs_1_1_0, LegUnitOfMeasureQty_128, InstrumentLeg_128);
      all_values.push_back(InstrumentLeg_128);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_255;
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltID{"STRING_1582037715"}, LegSecAltIDGrp_NoLegSecurityAltID_255);
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltIDSource{"STRING_1129808658"}, LegSecAltIDGrp_NoLegSecurityAltID_255);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_255);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_17;
      set_field(noLegs_1_1_0, FIX::LegBenchmarkCurveCurrency{"CHF"}, LegBenchmarkCurveData_17);
      set_field(noLegs_1_1_0, FIX::LegBenchmarkCurveName{"STRING_1453024101"}, LegBenchmarkCurveData_17);
      set_field(noLegs_1_1_0, FIX::LegBenchmarkCurvePoint{"STRING_974170475"}, LegBenchmarkCurveData_17);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_17;
      LegBenchmarkPrice_17.setString("2903473");
set_field(noLegs_1_1_0, LegBenchmarkPrice_17, LegBenchmarkCurveData_17);
      set_field(noLegs_1_1_0, FIX::LegBenchmarkPriceType{921149405}, LegBenchmarkCurveData_17);
      all_values.push_back(LegBenchmarkCurveData_17);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_52;
        set_field(noLegStipulations_1_0_2_0, FIX::LegStipulationType{"STRING_1372660858"}, LegStipulations_NoLegStipulations_52);
        set_field(noLegStipulations_1_0_2_0, FIX::LegStipulationValue{"STRING_788228116"}, LegStipulations_NoLegStipulations_52);
        all_values.push_back(LegStipulations_NoLegStipulations_52);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_53;
        set_field(noLegStipulations_1_0_2_1, FIX::LegStipulationType{"STRING_1938308632"}, LegStipulations_NoLegStipulations_53);
        set_field(noLegStipulations_1_0_2_1, FIX::LegStipulationValue{"STRING_1525491920"}, LegStipulations_NoLegStipulations_53);
        all_values.push_back(LegStipulations_NoLegStipulations_53);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_54;
        set_field(noLegStipulations_1_0_2_2, FIX::LegStipulationType{"STRING_1473505888"}, LegStipulations_NoLegStipulations_54);
        set_field(noLegStipulations_1_0_2_2, FIX::LegStipulationValue{"STRING_414200951"}, LegStipulations_NoLegStipulations_54);
        all_values.push_back(LegStipulations_NoLegStipulations_54);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_1;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_2;
      set_field(noLegs_1_1_1, FIX::LegSettlType{'9'}, SecLstUpdRelSymsLegGrp_NoLegs_2);
      set_field(noLegs_1_1_1, FIX::LegSwapType{4}, SecLstUpdRelSymsLegGrp_NoLegs_2);
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_2);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_129;
      set_field(noLegs_1_1_1, FIX::EncodedLegIssuer{"DATA_1435412747"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::EncodedLegIssuerLen{1288776274}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::EncodedLegSecurityDesc{"DATA_1893915564"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::EncodedLegSecurityDescLen{1419432977}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegCFICode{"STRING_409561113"}, InstrumentLeg_129);
      FIX::LegContractMultiplier LegContractMultiplier_129;
      LegContractMultiplier_129.setString("13191188");
set_field(noLegs_1_1_1, LegContractMultiplier_129, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegContractMultiplierUnit{593619392}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_1490595673"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegCountryOfIssue{"COUNTRY_1151088732"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2146717011"}, InstrumentLeg_129);
      FIX::LegCouponRate LegCouponRate_129;
      LegCouponRate_129.setString("37.180000");
set_field(noLegs_1_1_1, LegCouponRate_129, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegCreditRating{"STRING_1203599982"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegCurrency{"USD"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegDatedDate{"LOCALMKTDATE_638154049"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegExerciseStyle{292671679}, InstrumentLeg_129);
      FIX::LegFactor LegFactor_129;
      LegFactor_129.setString("13799926");
set_field(noLegs_1_1_1, LegFactor_129, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegFlowScheduleType{521234324}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegInstrRegistry{"STRING_1745695781"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_206679435"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegIssueDate{"LOCALMKTDATE_811581629"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegIssuer{"STRING_519361538"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegLocaleOfIssue{"STRING_1957331601"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_36758840"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1307589654"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegMaturityTime{"TZTIMEONLY_1748156585"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_129);
      FIX::LegOptionRatio LegOptionRatio_129;
      LegOptionRatio_129.setString("6336118");
set_field(noLegs_1_1_1, LegOptionRatio_129, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegPool{"STRING_14873888"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegPriceUnitOfMeasure{"STRING_358876100"}, InstrumentLeg_129);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_129;
      LegPriceUnitOfMeasureQty_129.setString("9459099");
set_field(noLegs_1_1_1, LegPriceUnitOfMeasureQty_129, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegProduct{1450286635}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegPutOrCall{1647652374}, InstrumentLeg_129);
      FIX::LegRatioQty LegRatioQty_129;
      LegRatioQty_129.setString("6923419");
set_field(noLegs_1_1_1, LegRatioQty_129, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_722235964"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegRepoCollateralSecurityType{"STRING_2057213487"}, InstrumentLeg_129);
      FIX::LegRepurchaseRate LegRepurchaseRate_129;
      LegRepurchaseRate_129.setString("7.380000");
set_field(noLegs_1_1_1, LegRepurchaseRate_129, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegRepurchaseTerm{1315855356}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegSecurityDesc{"STRING_1400325512"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegSecurityExchange{"EXCHANGE_1015065822"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegSecurityID{"STRING_1315088719"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegSecurityIDSource{"STRING_1075235582"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegSecuritySubType{"STRING_71182156"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegSecurityType{"STRING_477951740"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegSide{'1'}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_709336205"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_129);
      FIX::LegStrikePrice LegStrikePrice_129;
      LegStrikePrice_129.setString("12305705");
set_field(noLegs_1_1_1, LegStrikePrice_129, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegSymbol{"STRING_368835553"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegSymbolSfx{"STRING_470433422"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegTimeUnit{"STRING_2042152158"}, InstrumentLeg_129);
      set_field(noLegs_1_1_1, FIX::LegUnitOfMeasure{"STRING_888197091"}, InstrumentLeg_129);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_129;
      LegUnitOfMeasureQty_129.setString("2802813");
set_field(noLegs_1_1_1, LegUnitOfMeasureQty_129, InstrumentLeg_129);
      all_values.push_back(InstrumentLeg_129);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_256;
        set_field(noLegSecurityAltID_1_1_2_0, FIX::LegSecurityAltID{"STRING_48303097"}, LegSecAltIDGrp_NoLegSecurityAltID_256);
        set_field(noLegSecurityAltID_1_1_2_0, FIX::LegSecurityAltIDSource{"STRING_2028437960"}, LegSecAltIDGrp_NoLegSecurityAltID_256);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_256);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_257;
        set_field(noLegSecurityAltID_1_1_2_1, FIX::LegSecurityAltID{"STRING_1493678110"}, LegSecAltIDGrp_NoLegSecurityAltID_257);
        set_field(noLegSecurityAltID_1_1_2_1, FIX::LegSecurityAltIDSource{"STRING_681914992"}, LegSecAltIDGrp_NoLegSecurityAltID_257);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_257);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_258;
        set_field(noLegSecurityAltID_1_1_2_2, FIX::LegSecurityAltID{"STRING_2043311849"}, LegSecAltIDGrp_NoLegSecurityAltID_258);
        set_field(noLegSecurityAltID_1_1_2_2, FIX::LegSecurityAltIDSource{"STRING_1852554210"}, LegSecAltIDGrp_NoLegSecurityAltID_258);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_258);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_18;
      set_field(noLegs_1_1_1, FIX::LegBenchmarkCurveCurrency{"JPY"}, LegBenchmarkCurveData_18);
      set_field(noLegs_1_1_1, FIX::LegBenchmarkCurveName{"STRING_1352722936"}, LegBenchmarkCurveData_18);
      set_field(noLegs_1_1_1, FIX::LegBenchmarkCurvePoint{"STRING_172683245"}, LegBenchmarkCurveData_18);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_18;
      LegBenchmarkPrice_18.setString("20683508");
set_field(noLegs_1_1_1, LegBenchmarkPrice_18, LegBenchmarkCurveData_18);
      set_field(noLegs_1_1_1, FIX::LegBenchmarkPriceType{1262452775}, LegBenchmarkCurveData_18);
      all_values.push_back(LegBenchmarkCurveData_18);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_55;
        set_field(noLegStipulations_1_1_2_0, FIX::LegStipulationType{"STRING_1236722509"}, LegStipulations_NoLegStipulations_55);
        set_field(noLegStipulations_1_1_2_0, FIX::LegStipulationValue{"STRING_515294639"}, LegStipulations_NoLegStipulations_55);
        all_values.push_back(LegStipulations_NoLegStipulations_55);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_56;
        set_field(noLegStipulations_1_1_2_1, FIX::LegStipulationType{"STRING_1051726157"}, LegStipulations_NoLegStipulations_56);
        set_field(noLegStipulations_1_1_2_1, FIX::LegStipulationValue{"STRING_404327581"}, LegStipulations_NoLegStipulations_56);
        all_values.push_back(LegStipulations_NoLegStipulations_56);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_57;
        set_field(noLegStipulations_1_1_2_2, FIX::LegStipulationType{"STRING_1590530222"}, LegStipulations_NoLegStipulations_57);
        set_field(noLegStipulations_1_1_2_2, FIX::LegStipulationValue{"STRING_1122908313"}, LegStipulations_NoLegStipulations_57);
        all_values.push_back(LegStipulations_NoLegStipulations_57);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_13;
    set_field(noRelatedSym_0_1, FIX::ExpirationCycle{0}, BaseTradingRules_13);
    set_field(noRelatedSym_0_1, FIX::ImpliedMarketIndicator{0}, BaseTradingRules_13);
    FIX::MaxPriceVariation MaxPriceVariation_13;
    MaxPriceVariation_13.setString("18322445");
set_field(noRelatedSym_0_1, MaxPriceVariation_13, BaseTradingRules_13);
    FIX::MaxTradeVol MaxTradeVol_13;
    MaxTradeVol_13.setString("16529027");
set_field(noRelatedSym_0_1, MaxTradeVol_13, BaseTradingRules_13);
    FIX::MinTradeVol MinTradeVol_13;
    MinTradeVol_13.setString("7380455");
set_field(noRelatedSym_0_1, MinTradeVol_13, BaseTradingRules_13);
    set_field(noRelatedSym_0_1, FIX::MultilegModel{1}, BaseTradingRules_13);
    set_field(noRelatedSym_0_1, FIX::MultilegPriceMethod{2}, BaseTradingRules_13);
    set_field(noRelatedSym_0_1, FIX::PriceType{16}, BaseTradingRules_13);
    FIX::RoundLot RoundLot_13;
    RoundLot_13.setString("8099999");
set_field(noRelatedSym_0_1, RoundLot_13, BaseTradingRules_13);
    set_field(noRelatedSym_0_1, FIX::TradingCurrency{"CAN"}, BaseTradingRules_13);
    all_values.push_back(BaseTradingRules_13);
    all_compo_names.insert("...NoRelatedSym..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_29;
      set_field(noLotTypeRules_1_1_0, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_29);
      FIX::MinLotSize MinLotSize_29;
      MinLotSize_29.setString("13697146");
set_field(noLotTypeRules_1_1_0, MinLotSize_29, LotTypeRules_NoLotTypeRules_29);
      all_values.push_back(LotTypeRules_NoLotTypeRules_29);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_13;
    FIX::HighLimitPrice HighLimitPrice_13;
    HighLimitPrice_13.setString("876217");
set_field(noRelatedSym_0_1, HighLimitPrice_13, PriceLimits_13);
    FIX::LowLimitPrice LowLimitPrice_13;
    LowLimitPrice_13.setString("14926698");
set_field(noRelatedSym_0_1, LowLimitPrice_13, PriceLimits_13);
    set_field(noRelatedSym_0_1, FIX::PriceLimitType{0}, PriceLimits_13);
    FIX::TradingReferencePrice TradingReferencePrice_13;
    TradingReferencePrice_13.setString("19401759");
set_field(noRelatedSym_0_1, TradingReferencePrice_13, PriceLimits_13);
    all_values.push_back(PriceLimits_13);
    all_compo_names.insert("...NoRelatedSym...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_23;
      FIX::EndTickPriceRange EndTickPriceRange_23;
      EndTickPriceRange_23.setString("4641740");
set_field(noTickRules_1_1_0, EndTickPriceRange_23, TickRules_NoTickRules_23);
      FIX::StartTickPriceRange StartTickPriceRange_23;
      StartTickPriceRange_23.setString("11454152");
set_field(noTickRules_1_1_0, StartTickPriceRange_23, TickRules_NoTickRules_23);
      FIX::TickIncrement TickIncrement_23;
      TickIncrement_23.setString("11456944");
set_field(noTickRules_1_1_0, TickIncrement_23, TickRules_NoTickRules_23);
      set_field(noTickRules_1_1_0, FIX::TickRuleType{0}, TickRules_NoTickRules_23);
      all_values.push_back(TickRules_NoTickRules_23);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_24;
      FIX::EndTickPriceRange EndTickPriceRange_24;
      EndTickPriceRange_24.setString("2603843");
set_field(noTickRules_1_1_1, EndTickPriceRange_24, TickRules_NoTickRules_24);
      FIX::StartTickPriceRange StartTickPriceRange_24;
      StartTickPriceRange_24.setString("11823547");
set_field(noTickRules_1_1_1, StartTickPriceRange_24, TickRules_NoTickRules_24);
      FIX::TickIncrement TickIncrement_24;
      TickIncrement_24.setString("16217637");
set_field(noTickRules_1_1_1, TickIncrement_24, TickRules_NoTickRules_24);
      set_field(noTickRules_1_1_1, FIX::TickRuleType{3}, TickRules_NoTickRules_24);
      all_values.push_back(TickRules_NoTickRules_24);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_1.addGroup(noTickRules_1_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_26;
      set_field(noNestedInstrAttrib_1_1_0, FIX::NestedInstrAttribType{2026091331}, NestedInstrumentAttribute_NoNestedInstrAttrib_26);
      set_field(noNestedInstrAttrib_1_1_0, FIX::NestedInstrAttribValue{"STRING_218725562"}, NestedInstrumentAttribute_NoNestedInstrAttrib_26);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_26);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_27;
      set_field(noNestedInstrAttrib_1_1_1, FIX::NestedInstrAttribType{1209505565}, NestedInstrumentAttribute_NoNestedInstrAttrib_27);
      set_field(noNestedInstrAttrib_1_1_1, FIX::NestedInstrAttribValue{"STRING_760887004"}, NestedInstrumentAttribute_NoNestedInstrAttrib_27);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_27);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_1_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_28;
      set_field(noNestedInstrAttrib_1_1_2, FIX::NestedInstrAttribType{693017163}, NestedInstrumentAttribute_NoNestedInstrAttrib_28);
      set_field(noNestedInstrAttrib_1_1_2, FIX::NestedInstrAttribValue{"STRING_894266435"}, NestedInstrumentAttribute_NoNestedInstrAttrib_28);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_28);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_1.addGroup(noNestedInstrAttrib_1_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_25;
      set_field(noTradingSessionRules_1_1_0, FIX::TradingSessionID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_25);
      set_field(noTradingSessionRules_1_1_0, FIX::TradingSessionSubID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_25);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_25);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_50;
        set_field(noExecInstRules_1_0_2_0, FIX::ExecInstValue{'4'}, ExecInstRules_NoExecInstRules_50);
        all_values.push_back(ExecInstRules_NoExecInstRules_50);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_51;
        set_field(noExecInstRules_1_0_2_1, FIX::ExecInstValue{'4'}, ExecInstRules_NoExecInstRules_51);
        all_values.push_back(ExecInstRules_NoExecInstRules_51);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_55;
        set_field(noMDFeedTypes_1_0_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_55);
        set_field(noMDFeedTypes_1_0_2_0, FIX::MDFeedType{"STRING_1213541356"}, MarketDataFeedTypes_NoMDFeedTypes_55);
        set_field(noMDFeedTypes_1_0_2_0, FIX::MarketDepth{1713767317}, MarketDataFeedTypes_NoMDFeedTypes_55);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_55);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_56;
        set_field(noMDFeedTypes_1_0_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_56);
        set_field(noMDFeedTypes_1_0_2_1, FIX::MDFeedType{"STRING_1301163078"}, MarketDataFeedTypes_NoMDFeedTypes_56);
        set_field(noMDFeedTypes_1_0_2_1, FIX::MarketDepth{1058953496}, MarketDataFeedTypes_NoMDFeedTypes_56);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_56);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_57;
        set_field(noMDFeedTypes_1_0_2_2, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_57);
        set_field(noMDFeedTypes_1_0_2_2, FIX::MDFeedType{"STRING_1093855363"}, MarketDataFeedTypes_NoMDFeedTypes_57);
        set_field(noMDFeedTypes_1_0_2_2, FIX::MarketDepth{2031964659}, MarketDataFeedTypes_NoMDFeedTypes_57);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_57);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_55;
        set_field(noMatchRules_1_0_2_0, FIX::MatchAlgorithm{"STRING_91786937"}, MatchRules_NoMatchRules_55);
        set_field(noMatchRules_1_0_2_0, FIX::MatchType{"STRING_A3"}, MatchRules_NoMatchRules_55);
        all_values.push_back(MatchRules_NoMatchRules_55);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_50;
        set_field(noOrdTypeRules_1_0_2_0, FIX::OrdType{'F'}, OrdTypeRules_NoOrdTypeRules_50);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_50);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_51;
        set_field(noOrdTypeRules_1_0_2_1, FIX::OrdType{'C'}, OrdTypeRules_NoOrdTypeRules_51);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_51);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_49;
        set_field(noTimeInForceRules_1_0_2_0, FIX::TimeInForce{'4'}, TimeInForceRules_NoTimeInForceRules_49);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_49);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_50;
        set_field(noTimeInForceRules_1_0_2_1, FIX::TimeInForce{'8'}, TimeInForceRules_NoTimeInForceRules_50);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_50);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_26;
      set_field(noTradingSessionRules_1_1_1, FIX::TradingSessionID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_26);
      set_field(noTradingSessionRules_1_1_1, FIX::TradingSessionSubID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_26);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_26);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_52;
        set_field(noExecInstRules_1_1_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_52);
        all_values.push_back(ExecInstRules_NoExecInstRules_52);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_53;
        set_field(noExecInstRules_1_1_2_1, FIX::ExecInstValue{'2'}, ExecInstRules_NoExecInstRules_53);
        all_values.push_back(ExecInstRules_NoExecInstRules_53);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_58;
        set_field(noMDFeedTypes_1_1_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_58);
        set_field(noMDFeedTypes_1_1_2_0, FIX::MDFeedType{"STRING_1323172102"}, MarketDataFeedTypes_NoMDFeedTypes_58);
        set_field(noMDFeedTypes_1_1_2_0, FIX::MarketDepth{1917529955}, MarketDataFeedTypes_NoMDFeedTypes_58);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_58);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_59;
        set_field(noMDFeedTypes_1_1_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_59);
        set_field(noMDFeedTypes_1_1_2_1, FIX::MDFeedType{"STRING_1815230215"}, MarketDataFeedTypes_NoMDFeedTypes_59);
        set_field(noMDFeedTypes_1_1_2_1, FIX::MarketDepth{242160403}, MarketDataFeedTypes_NoMDFeedTypes_59);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_59);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_60;
        set_field(noMDFeedTypes_1_1_2_2, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_60);
        set_field(noMDFeedTypes_1_1_2_2, FIX::MDFeedType{"STRING_1648565065"}, MarketDataFeedTypes_NoMDFeedTypes_60);
        set_field(noMDFeedTypes_1_1_2_2, FIX::MarketDepth{1455701759}, MarketDataFeedTypes_NoMDFeedTypes_60);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_60);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_56;
        set_field(noMatchRules_1_1_2_0, FIX::MatchAlgorithm{"STRING_704130965"}, MatchRules_NoMatchRules_56);
        set_field(noMatchRules_1_1_2_0, FIX::MatchType{"STRING_3"}, MatchRules_NoMatchRules_56);
        all_values.push_back(MatchRules_NoMatchRules_56);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_57;
        set_field(noMatchRules_1_1_2_1, FIX::MatchAlgorithm{"STRING_1071731758"}, MatchRules_NoMatchRules_57);
        set_field(noMatchRules_1_1_2_1, FIX::MatchType{"STRING_A5"}, MatchRules_NoMatchRules_57);
        all_values.push_back(MatchRules_NoMatchRules_57);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_58;
        set_field(noMatchRules_1_1_2_2, FIX::MatchAlgorithm{"STRING_1703236553"}, MatchRules_NoMatchRules_58);
        set_field(noMatchRules_1_1_2_2, FIX::MatchType{"STRING_6"}, MatchRules_NoMatchRules_58);
        all_values.push_back(MatchRules_NoMatchRules_58);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_52;
        set_field(noOrdTypeRules_1_1_2_0, FIX::OrdType{'B'}, OrdTypeRules_NoOrdTypeRules_52);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_52);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_51;
        set_field(noTimeInForceRules_1_1_2_0, FIX::TimeInForce{'9'}, TimeInForceRules_NoTimeInForceRules_51);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_51);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_52;
        set_field(noTimeInForceRules_1_1_2_1, FIX::TimeInForce{'6'}, TimeInForceRules_NoTimeInForceRules_52);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_52);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_35;
    set_field(noRelatedSym_0_1, FIX::BenchmarkCurveCurrency{"USD"}, SpreadOrBenchmarkCurveData_35);
    set_field(noRelatedSym_0_1, FIX::BenchmarkCurveName{"STRING_FutureSWAP"}, SpreadOrBenchmarkCurveData_35);
    set_field(noRelatedSym_0_1, FIX::BenchmarkCurvePoint{"STRING_55594825"}, SpreadOrBenchmarkCurveData_35);
    FIX::BenchmarkPrice BenchmarkPrice_35;
    BenchmarkPrice_35.setString("20011792");
set_field(noRelatedSym_0_1, BenchmarkPrice_35, SpreadOrBenchmarkCurveData_35);
    set_field(noRelatedSym_0_1, FIX::BenchmarkPriceType{326653592}, SpreadOrBenchmarkCurveData_35);
    set_field(noRelatedSym_0_1, FIX::BenchmarkSecurityID{"STRING_1416744158"}, SpreadOrBenchmarkCurveData_35);
    set_field(noRelatedSym_0_1, FIX::BenchmarkSecurityIDSource{"STRING_1137794539"}, SpreadOrBenchmarkCurveData_35);
    FIX::Spread Spread_35;
    Spread_35.setString("2187629");
set_field(noRelatedSym_0_1, Spread_35, SpreadOrBenchmarkCurveData_35);
    all_values.push_back(SpreadOrBenchmarkCurveData_35);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_63;
      set_field(noStipulations_1_1_0, FIX::StipulationType{"STRING_PRIMARY"}, Stipulations_NoStipulations_63);
      set_field(noStipulations_1_1_0, FIX::StipulationValue{"STRING_1541935046"}, Stipulations_NoStipulations_63);
      all_values.push_back(Stipulations_NoStipulations_63);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_1.addGroup(noStipulations_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_1_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_64;
      set_field(noStipulations_1_1_1, FIX::StipulationType{"STRING_PPT"}, Stipulations_NoStipulations_64);
      set_field(noStipulations_1_1_1, FIX::StipulationValue{"STRING_84198016"}, Stipulations_NoStipulations_64);
      all_values.push_back(Stipulations_NoStipulations_64);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_1.addGroup(noStipulations_1_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_23;
      FIX::EndStrikePxRange EndStrikePxRange_23;
      EndStrikePxRange_23.setString("15368829");
set_field(noStrikeRules_1_1_0, EndStrikePxRange_23, StrikeRules_NoStrikeRules_23);
      FIX::StartStrikePxRange StartStrikePxRange_23;
      StartStrikePxRange_23.setString("5306926");
set_field(noStrikeRules_1_1_0, StartStrikePxRange_23, StrikeRules_NoStrikeRules_23);
      set_field(noStrikeRules_1_1_0, FIX::StrikeExerciseStyle{710763030}, StrikeRules_NoStrikeRules_23);
      FIX::StrikeIncrement StrikeIncrement_23;
      StrikeIncrement_23.setString("8451011");
set_field(noStrikeRules_1_1_0, StrikeIncrement_23, StrikeRules_NoStrikeRules_23);
      set_field(noStrikeRules_1_1_0, FIX::StrikeRuleID{"STRING_543470871"}, StrikeRules_NoStrikeRules_23);
      all_values.push_back(StrikeRules_NoStrikeRules_23);
      all_compo_names.insert("...NoRelatedSym...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_51;
        set_field(noMaturityRules_1_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1454482292"}, MaturityRules_NoMaturityRules_51);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_51);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearIncrement{292650111}, MaturityRules_NoMaturityRules_51);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_51);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityRuleID{"STRING_423931751"}, MaturityRules_NoMaturityRules_51);
        set_field(noMaturityRules_1_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_2103172762"}, MaturityRules_NoMaturityRules_51);
        all_values.push_back(MaturityRules_NoMaturityRules_51);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_52;
        set_field(noMaturityRules_1_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_657775040"}, MaturityRules_NoMaturityRules_52);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_52);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityMonthYearIncrement{789052243}, MaturityRules_NoMaturityRules_52);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityMonthYearIncrementUnits{0}, MaturityRules_NoMaturityRules_52);
        set_field(noMaturityRules_1_0_2_1, FIX::MaturityRuleID{"STRING_166787349"}, MaturityRules_NoMaturityRules_52);
        set_field(noMaturityRules_1_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_119535954"}, MaturityRules_NoMaturityRules_52);
        all_values.push_back(MaturityRules_NoMaturityRules_52);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_53;
        set_field(noMaturityRules_1_0_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_1785047571"}, MaturityRules_NoMaturityRules_53);
        set_field(noMaturityRules_1_0_2_2, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_53);
        set_field(noMaturityRules_1_0_2_2, FIX::MaturityMonthYearIncrement{2120715224}, MaturityRules_NoMaturityRules_53);
        set_field(noMaturityRules_1_0_2_2, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_53);
        set_field(noMaturityRules_1_0_2_2, FIX::MaturityRuleID{"STRING_1639126333"}, MaturityRules_NoMaturityRules_53);
        set_field(noMaturityRules_1_0_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_1111026115"}, MaturityRules_NoMaturityRules_53);
        all_values.push_back(MaturityRules_NoMaturityRules_53);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noStrikeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_1_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_24;
      FIX::EndStrikePxRange EndStrikePxRange_24;
      EndStrikePxRange_24.setString("1829804");
set_field(noStrikeRules_1_1_1, EndStrikePxRange_24, StrikeRules_NoStrikeRules_24);
      FIX::StartStrikePxRange StartStrikePxRange_24;
      StartStrikePxRange_24.setString("10163189");
set_field(noStrikeRules_1_1_1, StartStrikePxRange_24, StrikeRules_NoStrikeRules_24);
      set_field(noStrikeRules_1_1_1, FIX::StrikeExerciseStyle{1651742021}, StrikeRules_NoStrikeRules_24);
      FIX::StrikeIncrement StrikeIncrement_24;
      StrikeIncrement_24.setString("17249155");
set_field(noStrikeRules_1_1_1, StrikeIncrement_24, StrikeRules_NoStrikeRules_24);
      set_field(noStrikeRules_1_1_1, FIX::StrikeRuleID{"STRING_163557903"}, StrikeRules_NoStrikeRules_24);
      all_values.push_back(StrikeRules_NoStrikeRules_24);
      all_compo_names.insert("...NoRelatedSym...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_54;
        set_field(noMaturityRules_1_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_787113471"}, MaturityRules_NoMaturityRules_54);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_54);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearIncrement{119148999}, MaturityRules_NoMaturityRules_54);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_54);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityRuleID{"STRING_398058348"}, MaturityRules_NoMaturityRules_54);
        set_field(noMaturityRules_1_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_662619870"}, MaturityRules_NoMaturityRules_54);
        all_values.push_back(MaturityRules_NoMaturityRules_54);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noStrikeRules_1_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_131;
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1852540640"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuerLen{130338852}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1057936961"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDescLen{715292189}, UnderlyingInstrument_131);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_131;
      UnderlyingAdjustedQuantity_131.setString("5542706");
set_field(noUnderlyings_1_1_0, UnderlyingAdjustedQuantity_131, UnderlyingInstrument_131);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_131;
      UnderlyingAllocationPercent_131.setString("60.750000");
set_field(noUnderlyings_1_1_0, UnderlyingAllocationPercent_131, UnderlyingInstrument_131);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_131;
      UnderlyingAttachmentPoint_131.setString("72.290000");
set_field(noUnderlyings_1_1_0, UnderlyingAttachmentPoint_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCFICode{"STRING_817106895"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPProgram{"STRING_1802678318"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPRegType{"STRING_2030553398"}, UnderlyingInstrument_131);
      FIX::UnderlyingCapValue UnderlyingCapValue_131;
      UnderlyingCapValue_131.setString("9838942");
set_field(noUnderlyings_1_1_0, UnderlyingCapValue_131, UnderlyingInstrument_131);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_131;
      UnderlyingCashAmount_131.setString("19222142");
set_field(noUnderlyings_1_1_0, UnderlyingCashAmount_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_131);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_131;
      UnderlyingContractMultiplier_131.setString("12062764");
set_field(noUnderlyings_1_1_0, UnderlyingContractMultiplier_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingContractMultiplierUnit{1895445849}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1632334837"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_697919104"}, UnderlyingInstrument_131);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_131;
      UnderlyingCouponRate_131.setString("83.160000");
set_field(noUnderlyings_1_1_0, UnderlyingCouponRate_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCreditRating{"STRING_1815315296"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_131);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_131;
      UnderlyingCurrentValue_131.setString("13927471");
set_field(noUnderlyings_1_1_0, UnderlyingCurrentValue_131, UnderlyingInstrument_131);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_131;
      UnderlyingDetachmentPoint_131.setString("59.720000");
set_field(noUnderlyings_1_1_0, UnderlyingDetachmentPoint_131, UnderlyingInstrument_131);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_131;
      UnderlyingDirtyPrice_131.setString("20991867");
set_field(noUnderlyings_1_1_0, UnderlyingDirtyPrice_131, UnderlyingInstrument_131);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_131;
      UnderlyingEndPrice_131.setString("323769");
set_field(noUnderlyings_1_1_0, UnderlyingEndPrice_131, UnderlyingInstrument_131);
      FIX::UnderlyingEndValue UnderlyingEndValue_131;
      UnderlyingEndValue_131.setString("14307532");
set_field(noUnderlyings_1_1_0, UnderlyingEndValue_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingExerciseStyle{70852078}, UnderlyingInstrument_131);
      FIX::UnderlyingFXRate UnderlyingFXRate_131;
      UnderlyingFXRate_131.setString("15302534");
set_field(noUnderlyings_1_1_0, UnderlyingFXRate_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_131);
      FIX::UnderlyingFactor UnderlyingFactor_131;
      UnderlyingFactor_131.setString("7334719");
set_field(noUnderlyings_1_1_0, UnderlyingFactor_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFlowScheduleType{148056681}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingInstrRegistry{"STRING_1533868558"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_863810800"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssuer{"STRING_1205993642"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_101677100"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1418081403"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_72136069"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1474744329"}, UnderlyingInstrument_131);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_131;
      UnderlyingNotionalPercentageOutstanding_131.setString("46.510000");
set_field(noUnderlyings_1_1_0, UnderlyingNotionalPercentageOutstanding_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_131);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_131;
      UnderlyingOriginalNotionalPercentageOutstanding_131.setString("40.790000");
set_field(noUnderlyings_1_1_0, UnderlyingOriginalNotionalPercentageOutstanding_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1071598896"}, UnderlyingInstrument_131);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_131;
      UnderlyingPriceUnitOfMeasureQty_131.setString("16495450");
set_field(noUnderlyings_1_1_0, UnderlyingPriceUnitOfMeasureQty_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingProduct{878447753}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPutOrCall{130391667}, UnderlyingInstrument_131);
      FIX::UnderlyingPx UnderlyingPx_131;
      UnderlyingPx_131.setString("13975072");
set_field(noUnderlyings_1_1_0, UnderlyingPx_131, UnderlyingInstrument_131);
      FIX::UnderlyingQty UnderlyingQty_131;
      UnderlyingQty_131.setString("3632989");
set_field(noUnderlyings_1_1_0, UnderlyingQty_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_828310772"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_109011882"}, UnderlyingInstrument_131);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_131;
      UnderlyingRepurchaseRate_131.setString("5.900000");
set_field(noUnderlyings_1_1_0, UnderlyingRepurchaseRate_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepurchaseTerm{395065193}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRestructuringType{"STRING_472258571"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityDesc{"STRING_1423877745"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_125377517"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityID{"STRING_423961650"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityIDSource{"STRING_1456254723"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecuritySubType{"STRING_1556130736"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityType{"STRING_494813728"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSeniority{"STRING_839024555"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlMethod{"STRING_1237458654"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_131);
      FIX::UnderlyingStartValue UnderlyingStartValue_131;
      UnderlyingStartValue_131.setString("9870812");
set_field(noUnderlyings_1_1_0, UnderlyingStartValue_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_623843565"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_131);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_131;
      UnderlyingStrikePrice_131.setString("7255206");
set_field(noUnderlyings_1_1_0, UnderlyingStrikePrice_131, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbol{"STRING_1362694233"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbolSfx{"STRING_117727300"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingTimeUnit{"STRING_52781346"}, UnderlyingInstrument_131);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1450398884"}, UnderlyingInstrument_131);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_131;
      UnderlyingUnitOfMeasureQty_131.setString("19925416");
set_field(noUnderlyings_1_1_0, UnderlyingUnitOfMeasureQty_131, UnderlyingInstrument_131);
      all_values.push_back(UnderlyingInstrument_131);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_271;
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_374514132"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_271);
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1494603053"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_271);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_271);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_272;
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_141559531"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_272);
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_504905799"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_272);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_272);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_264;
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipType{"STRING_504858473"}, UnderlyingStipulations_NoUnderlyingStips_264);
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipValue{"STRING_1333216571"}, UnderlyingStipulations_NoUnderlyingStips_264);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_264);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_265;
        set_field(noUnderlyingStips_1_0_2_1, FIX::UnderlyingStipType{"STRING_853638500"}, UnderlyingStipulations_NoUnderlyingStips_265);
        set_field(noUnderlyingStips_1_0_2_1, FIX::UnderlyingStipValue{"STRING_535989063"}, UnderlyingStipulations_NoUnderlyingStips_265);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_265);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_266;
        set_field(noUnderlyingStips_1_0_2_2, FIX::UnderlyingStipType{"STRING_1728281764"}, UnderlyingStipulations_NoUnderlyingStips_266);
        set_field(noUnderlyingStips_1_0_2_2, FIX::UnderlyingStipValue{"STRING_1325897072"}, UnderlyingStipulations_NoUnderlyingStips_266);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_266);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_278;
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1853659282"}, UndlyInstrumentParties_NoUndlyInstrumentParties_278);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_278);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyRole{1268637883}, UndlyInstrumentParties_NoUndlyInstrumentParties_278);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_278);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_97188803"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{2107662438}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_558);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_132;
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuer{"DATA_352281376"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuerLen{1325474480}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_947260027"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDescLen{976124941}, UnderlyingInstrument_132);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_132;
      UnderlyingAdjustedQuantity_132.setString("12700873");
set_field(noUnderlyings_1_1_1, UnderlyingAdjustedQuantity_132, UnderlyingInstrument_132);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_132;
      UnderlyingAllocationPercent_132.setString("12.580000");
set_field(noUnderlyings_1_1_1, UnderlyingAllocationPercent_132, UnderlyingInstrument_132);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_132;
      UnderlyingAttachmentPoint_132.setString("56.060000");
set_field(noUnderlyings_1_1_1, UnderlyingAttachmentPoint_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCFICode{"STRING_485297894"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPProgram{"STRING_1110578558"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPRegType{"STRING_1754426953"}, UnderlyingInstrument_132);
      FIX::UnderlyingCapValue UnderlyingCapValue_132;
      UnderlyingCapValue_132.setString("19356967");
set_field(noUnderlyings_1_1_1, UnderlyingCapValue_132, UnderlyingInstrument_132);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_132;
      UnderlyingCashAmount_132.setString("9556365");
set_field(noUnderlyings_1_1_1, UnderlyingCashAmount_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_132);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_132;
      UnderlyingContractMultiplier_132.setString("1627272");
set_field(noUnderlyings_1_1_1, UnderlyingContractMultiplier_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingContractMultiplierUnit{302756004}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1159098262"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_667633062"}, UnderlyingInstrument_132);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_132;
      UnderlyingCouponRate_132.setString("26.220000");
set_field(noUnderlyings_1_1_1, UnderlyingCouponRate_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCreditRating{"STRING_1663956735"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_132);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_132;
      UnderlyingCurrentValue_132.setString("524621");
set_field(noUnderlyings_1_1_1, UnderlyingCurrentValue_132, UnderlyingInstrument_132);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_132;
      UnderlyingDetachmentPoint_132.setString("77.500000");
set_field(noUnderlyings_1_1_1, UnderlyingDetachmentPoint_132, UnderlyingInstrument_132);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_132;
      UnderlyingDirtyPrice_132.setString("10794345");
set_field(noUnderlyings_1_1_1, UnderlyingDirtyPrice_132, UnderlyingInstrument_132);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_132;
      UnderlyingEndPrice_132.setString("20123289");
set_field(noUnderlyings_1_1_1, UnderlyingEndPrice_132, UnderlyingInstrument_132);
      FIX::UnderlyingEndValue UnderlyingEndValue_132;
      UnderlyingEndValue_132.setString("12878233");
set_field(noUnderlyings_1_1_1, UnderlyingEndValue_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingExerciseStyle{681809621}, UnderlyingInstrument_132);
      FIX::UnderlyingFXRate UnderlyingFXRate_132;
      UnderlyingFXRate_132.setString("11334831");
set_field(noUnderlyings_1_1_1, UnderlyingFXRate_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_132);
      FIX::UnderlyingFactor UnderlyingFactor_132;
      UnderlyingFactor_132.setString("7789984");
set_field(noUnderlyings_1_1_1, UnderlyingFactor_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFlowScheduleType{1093661985}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingInstrRegistry{"STRING_754927482"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2104472904"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssuer{"STRING_2040922012"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_1731052424"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1227076566"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_886289622"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1285214382"}, UnderlyingInstrument_132);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_132;
      UnderlyingNotionalPercentageOutstanding_132.setString("44.600000");
set_field(noUnderlyings_1_1_1, UnderlyingNotionalPercentageOutstanding_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_132);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_132;
      UnderlyingOriginalNotionalPercentageOutstanding_132.setString("76.870000");
set_field(noUnderlyings_1_1_1, UnderlyingOriginalNotionalPercentageOutstanding_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1500587591"}, UnderlyingInstrument_132);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_132;
      UnderlyingPriceUnitOfMeasureQty_132.setString("8050211");
set_field(noUnderlyings_1_1_1, UnderlyingPriceUnitOfMeasureQty_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingProduct{1909696418}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPutOrCall{1663314853}, UnderlyingInstrument_132);
      FIX::UnderlyingPx UnderlyingPx_132;
      UnderlyingPx_132.setString("11077771");
set_field(noUnderlyings_1_1_1, UnderlyingPx_132, UnderlyingInstrument_132);
      FIX::UnderlyingQty UnderlyingQty_132;
      UnderlyingQty_132.setString("9213110");
set_field(noUnderlyings_1_1_1, UnderlyingQty_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_183464267"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_7676110"}, UnderlyingInstrument_132);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_132;
      UnderlyingRepurchaseRate_132.setString("41.190000");
set_field(noUnderlyings_1_1_1, UnderlyingRepurchaseRate_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepurchaseTerm{36830253}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRestructuringType{"STRING_1908697233"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityDesc{"STRING_490246270"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1618478003"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityID{"STRING_840648132"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityIDSource{"STRING_355091581"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecuritySubType{"STRING_758817739"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityType{"STRING_1522457753"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSeniority{"STRING_1488574775"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlMethod{"STRING_1161463845"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_132);
      FIX::UnderlyingStartValue UnderlyingStartValue_132;
      UnderlyingStartValue_132.setString("4347531");
set_field(noUnderlyings_1_1_1, UnderlyingStartValue_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1916391327"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_132);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_132;
      UnderlyingStrikePrice_132.setString("14999601");
set_field(noUnderlyings_1_1_1, UnderlyingStrikePrice_132, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbol{"STRING_1338038352"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbolSfx{"STRING_1214481098"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingTimeUnit{"STRING_637690838"}, UnderlyingInstrument_132);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_902929165"}, UnderlyingInstrument_132);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_132;
      UnderlyingUnitOfMeasureQty_132.setString("10638656");
set_field(noUnderlyings_1_1_1, UnderlyingUnitOfMeasureQty_132, UnderlyingInstrument_132);
      all_values.push_back(UnderlyingInstrument_132);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_273;
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_256033108"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_273);
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1868886762"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_273);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_273);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_274;
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_1292061296"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_274);
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1919347961"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_274);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_274);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_267;
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipType{"STRING_65888680"}, UnderlyingStipulations_NoUnderlyingStips_267);
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipValue{"STRING_2102812229"}, UnderlyingStipulations_NoUnderlyingStips_267);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_267);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_268;
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipType{"STRING_836856360"}, UnderlyingStipulations_NoUnderlyingStips_268);
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipValue{"STRING_503672800"}, UnderlyingStipulations_NoUnderlyingStips_268);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_268);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_269;
        set_field(noUnderlyingStips_1_1_2_2, FIX::UnderlyingStipType{"STRING_2139642482"}, UnderlyingStipulations_NoUnderlyingStips_269);
        set_field(noUnderlyingStips_1_1_2_2, FIX::UnderlyingStipValue{"STRING_598069945"}, UnderlyingStipulations_NoUnderlyingStips_269);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_269);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_279;
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1610636837"}, UndlyInstrumentParties_NoUndlyInstrumentParties_279);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_279);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyRole{1349010651}, UndlyInstrumentParties_NoUndlyInstrumentParties_279);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_279);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_813692182"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{690101778}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_559);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1383434773"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{967664712}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_560);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_280;
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1124854891"}, UndlyInstrumentParties_NoUndlyInstrumentParties_280);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_280);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyRole{1078626499}, UndlyInstrumentParties_NoUndlyInstrumentParties_280);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_280);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_504818908"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{269181203}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_561);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_281;
        set_field(noUndlyInstrumentParties_1_1_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_520043818"}, UndlyInstrumentParties_NoUndlyInstrumentParties_281);
        set_field(noUndlyInstrumentParties_1_1_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_281);
        set_field(noUndlyInstrumentParties_1_1_2_2, FIX::UnderlyingInstrumentPartyRole{1172110368}, UndlyInstrumentParties_NoUndlyInstrumentParties_281);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_281);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562;
          set_field(noUndlyInstrumentPartySubIDs_1_1_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_524874623"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562);
          set_field(noUndlyInstrumentPartySubIDs_1_1_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1428143476}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_562);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563;
          set_field(noUndlyInstrumentPartySubIDs_1_1_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1305312563"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563);
          set_field(noUndlyInstrumentPartySubIDs_1_1_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{1816935919}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_563);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    // YieldData
    multiset<string> YieldData_30;
    FIX::Yield Yield_30;
    Yield_30.setString("77.900000");
set_field(noRelatedSym_0_1, Yield_30, YieldData_30);
    set_field(noRelatedSym_0_1, FIX::YieldCalcDate{"LOCALMKTDATE_2134492813"}, YieldData_30);
    set_field(noRelatedSym_0_1, FIX::YieldRedemptionDate{"LOCALMKTDATE_1882824600"}, YieldData_30);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_30;
    YieldRedemptionPrice_30.setString("11553363");
set_field(noRelatedSym_0_1, YieldRedemptionPrice_30, YieldData_30);
    set_field(noRelatedSym_0_1, FIX::YieldRedemptionPriceType{823865525}, YieldData_30);
    set_field(noRelatedSym_0_1, FIX::YieldType{"STRING_COMPOUND"}, YieldData_30);
    all_values.push_back(YieldData_30);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::SecurityListUpdateReport::NoRelatedSym noRelatedSym_0_2;
    // SecLstUpdRelSymGrp.NoRelatedSym
    multiset<string> SecLstUpdRelSymGrp_NoRelatedSym_2;
    set_field(noRelatedSym_0_2, FIX::Currency{"USD"}, SecLstUpdRelSymGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::EncodedText{"DATA_1232932822"}, SecLstUpdRelSymGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::EncodedTextLen{610648394}, SecLstUpdRelSymGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::ListUpdateAction{'7'}, SecLstUpdRelSymGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(18, 22, 23, 15, 3, 2016)}, SecLstUpdRelSymGrp_NoRelatedSym_2);
    set_field(noRelatedSym_0_2, FIX::Text{"STRING_1220912899"}, SecLstUpdRelSymGrp_NoRelatedSym_2);
    all_values.push_back(SecLstUpdRelSymGrp_NoRelatedSym_2);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_29;
    set_field(noRelatedSym_0_2, FIX::AgreementCurrency{"GBP"}, FinancingDetails_29);
    set_field(noRelatedSym_0_2, FIX::AgreementDate{"LOCALMKTDATE_1725731807"}, FinancingDetails_29);
    set_field(noRelatedSym_0_2, FIX::AgreementDesc{"STRING_1694850849"}, FinancingDetails_29);
    set_field(noRelatedSym_0_2, FIX::AgreementID{"STRING_2075023032"}, FinancingDetails_29);
    set_field(noRelatedSym_0_2, FIX::DeliveryType{1}, FinancingDetails_29);
    set_field(noRelatedSym_0_2, FIX::EndDate{"LOCALMKTDATE_719477569"}, FinancingDetails_29);
    FIX::MarginRatio MarginRatio_29;
    MarginRatio_29.setString("88.330000");
set_field(noRelatedSym_0_2, MarginRatio_29, FinancingDetails_29);
    set_field(noRelatedSym_0_2, FIX::StartDate{"LOCALMKTDATE_1245632529"}, FinancingDetails_29);
    set_field(noRelatedSym_0_2, FIX::TerminationType{3}, FinancingDetails_29);
    all_values.push_back(FinancingDetails_29);
    all_compo_names.insert("...NoRelatedSym.");

    // Instrument
    multiset<string> Instrument_86;
    FIX::AttachmentPoint AttachmentPoint_86;
    AttachmentPoint_86.setString("77.480000");
set_field(noRelatedSym_0_2, AttachmentPoint_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::CFICode{"STRING_915084800"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::CPProgram{1}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::CPRegType{"STRING_656286914"}, Instrument_86);
    FIX::CapPrice CapPrice_86;
    CapPrice_86.setString("6504257");
set_field(noRelatedSym_0_2, CapPrice_86, Instrument_86);
    FIX::ContractMultiplier ContractMultiplier_86;
    ContractMultiplier_86.setString("2079979");
set_field(noRelatedSym_0_2, ContractMultiplier_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::ContractMultiplierUnit{1}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::ContractSettlMonth{"MONTHYEAR_889439504"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::CountryOfIssue{"COUNTRY_1355493116"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::CouponPaymentDate{"LOCALMKTDATE_754604262"}, Instrument_86);
    FIX::CouponRate CouponRate_86;
    CouponRate_86.setString("23.260000");
set_field(noRelatedSym_0_2, CouponRate_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::CreditRating{"STRING_1966141510"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::DatedDate{"LOCALMKTDATE_1467774161"}, Instrument_86);
    FIX::DetachmentPoint DetachmentPoint_86;
    DetachmentPoint_86.setString("85.030000");
set_field(noRelatedSym_0_2, DetachmentPoint_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::EncodedIssuer{"DATA_651277184"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::EncodedIssuerLen{847152595}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::EncodedSecurityDesc{"DATA_1533910107"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::EncodedSecurityDescLen{719847631}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::ExerciseStyle{1}, Instrument_86);
    FIX::Factor Factor_86;
    Factor_86.setString("16358429");
set_field(noRelatedSym_0_2, Factor_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::FlexProductEligibilityIndicator{true}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::FlexibleIndicator{false}, Instrument_86);
    FIX::FloorPrice FloorPrice_86;
    FloorPrice_86.setString("10433385");
set_field(noRelatedSym_0_2, FloorPrice_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::FlowScheduleType{0}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::InstrRegistry{"STRING_19748940"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::InstrmtAssignmentMethod{'9'}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::InterestAccrualDate{"LOCALMKTDATE_92282947"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::IssueDate{"LOCALMKTDATE_739226510"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::Issuer{"STRING_334843088"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::ListMethod{0}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::LocaleOfIssue{"STRING_739363908"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::MaturityDate{"LOCALMKTDATE_1004120837"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::MaturityMonthYear{"MONTHYEAR_105516629"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::MaturityTime{"TZTIMEONLY_1939509096"}, Instrument_86);
    FIX::MinPriceIncrement MinPriceIncrement_86;
    MinPriceIncrement_86.setString("16604077");
set_field(noRelatedSym_0_2, MinPriceIncrement_86, Instrument_86);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_86;
    MinPriceIncrementAmount_86.setString("7559423");
set_field(noRelatedSym_0_2, MinPriceIncrementAmount_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::NTPositionLimit{23359}, Instrument_86);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_86;
    NotionalPercentageOutstanding_86.setString("65.420000");
set_field(noRelatedSym_0_2, NotionalPercentageOutstanding_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::OptAttribute{'1'}, Instrument_86);
    FIX::OptPayoutAmount OptPayoutAmount_86;
    OptPayoutAmount_86.setString("13555164");
set_field(noRelatedSym_0_2, OptPayoutAmount_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::OptPayoutType{1}, Instrument_86);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_86;
    OriginalNotionalPercentageOutstanding_86.setString("5.640000");
set_field(noRelatedSym_0_2, OriginalNotionalPercentageOutstanding_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::Pool{"STRING_1174174337"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::PositionLimit{1067971318}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::PriceUnitOfMeasure{"STRING_1825451521"}, Instrument_86);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_86;
    PriceUnitOfMeasureQty_86.setString("19151239");
set_field(noRelatedSym_0_2, PriceUnitOfMeasureQty_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::Product{1}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::ProductComplex{"STRING_397815504"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::PutOrCall{1}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::RedemptionDate{"LOCALMKTDATE_904404832"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::RepoCollateralSecurityType{"STRING_191092386"}, Instrument_86);
    FIX::RepurchaseRate RepurchaseRate_86;
    RepurchaseRate_86.setString("77.470000");
set_field(noRelatedSym_0_2, RepurchaseRate_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::RepurchaseTerm{1947743352}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::RestructuringType{"STRING_FR"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::SecurityDesc{"STRING_1453966687"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::SecurityExchange{"EXCHANGE_771137607"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::SecurityGroup{"STRING_1802384024"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::SecurityID{"STRING_45709549"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::SecurityIDSource{"STRING_J"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::SecurityStatus{"STRING_1"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::SecuritySubType{"STRING_785073457"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::SecurityType{"STRING_TERM"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::Seniority{"STRING_SD"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::SettlMethod{'P'}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::SettleOnOpenFlag{"STRING_1623025636"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::StateOrProvinceOfIssue{"STRING_1854274863"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::StrikeCurrency{"GBP"}, Instrument_86);
    FIX::StrikeMultiplier StrikeMultiplier_86;
    StrikeMultiplier_86.setString("13521731");
set_field(noRelatedSym_0_2, StrikeMultiplier_86, Instrument_86);
    FIX::StrikePrice StrikePrice_86;
    StrikePrice_86.setString("19326387");
set_field(noRelatedSym_0_2, StrikePrice_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::StrikePriceBoundaryMethod{3}, Instrument_86);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_86;
    StrikePriceBoundaryPrecision_86.setString("0.170000");
set_field(noRelatedSym_0_2, StrikePriceBoundaryPrecision_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::StrikePriceDeterminationMethod{1}, Instrument_86);
    FIX::StrikeValue StrikeValue_86;
    StrikeValue_86.setString("11367870");
set_field(noRelatedSym_0_2, StrikeValue_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::Symbol{"STRING_707095437"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::SymbolSfx{"STRING_WI"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::TimeUnit{"STRING_Mo"}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_86);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_86;
    UnitOfMeasureQty_86.setString("18662632");
set_field(noRelatedSym_0_2, UnitOfMeasureQty_86, Instrument_86);
    set_field(noRelatedSym_0_2, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_86);
    all_values.push_back(Instrument_86);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_178;
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_178);
      FIX::ComplexEventPrice ComplexEventPrice_178;
      ComplexEventPrice_178.setString("6803218");
set_field(noComplexEvents_2_1_0, ComplexEventPrice_178, ComplexEvents_NoComplexEvents_178);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_178);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_178;
      ComplexEventPriceBoundaryPrecision_178.setString("4.160000");
set_field(noComplexEvents_2_1_0, ComplexEventPriceBoundaryPrecision_178, ComplexEvents_NoComplexEvents_178);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_178);
      set_field(noComplexEvents_2_1_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_178);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_178;
      ComplexOptPayoutAmount_178.setString("5051899");
set_field(noComplexEvents_2_1_0, ComplexOptPayoutAmount_178, ComplexEvents_NoComplexEvents_178);
      all_values.push_back(ComplexEvents_NoComplexEvents_178);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_358;
        set_field(noComplexEventDates_2_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 13, 22, 21, 6, 2017)}, ComplexEventDates_NoComplexEventDates_358);
        set_field(noComplexEventDates_2_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 38, 17, 7, 9, 2011)}, ComplexEventDates_NoComplexEventDates_358);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_358);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_725;
          set_field(noComplexEventTimes_2_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 6, 42)}, ComplexEventTimes_NoComplexEventTimes_725);
          set_field(noComplexEventTimes_2_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 11, 56)}, ComplexEventTimes_NoComplexEventTimes_725);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_725);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_359;
        set_field(noComplexEventDates_2_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 29, 50, 0, 10, 2012)}, ComplexEventDates_NoComplexEventDates_359);
        set_field(noComplexEventDates_2_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 51, 10, 9, 1, 2002)}, ComplexEventDates_NoComplexEventDates_359);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_359);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_726;
          set_field(noComplexEventTimes_2_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 5, 15)}, ComplexEventTimes_NoComplexEventTimes_726);
          set_field(noComplexEventTimes_2_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 12, 19)}, ComplexEventTimes_NoComplexEventTimes_726);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_726);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_727;
          set_field(noComplexEventTimes_2_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 25, 52)}, ComplexEventTimes_NoComplexEventTimes_727);
          set_field(noComplexEventTimes_2_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 55, 32)}, ComplexEventTimes_NoComplexEventTimes_727);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_727);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_728;
          set_field(noComplexEventTimes_2_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 53, 57)}, ComplexEventTimes_NoComplexEventTimes_728);
          set_field(noComplexEventTimes_2_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 25, 57)}, ComplexEventTimes_NoComplexEventTimes_728);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_728);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_170;
      set_field(noEvents_2_1_0, FIX::EventDate{"LOCALMKTDATE_201969069"}, EvntGrp_NoEvents_170);
      FIX::EventPx EventPx_170;
      EventPx_170.setString("12300028");
set_field(noEvents_2_1_0, EventPx_170, EvntGrp_NoEvents_170);
      set_field(noEvents_2_1_0, FIX::EventText{"STRING_2026881814"}, EvntGrp_NoEvents_170);
      set_field(noEvents_2_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(3, 53, 11, 3, 3, 2002)}, EvntGrp_NoEvents_170);
      set_field(noEvents_2_1_0, FIX::EventType{19}, EvntGrp_NoEvents_170);
      all_values.push_back(EvntGrp_NoEvents_170);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_171;
      set_field(noEvents_2_1_1, FIX::EventDate{"LOCALMKTDATE_545865835"}, EvntGrp_NoEvents_171);
      FIX::EventPx EventPx_171;
      EventPx_171.setString("19173504");
set_field(noEvents_2_1_1, EventPx_171, EvntGrp_NoEvents_171);
      set_field(noEvents_2_1_1, FIX::EventText{"STRING_795097417"}, EvntGrp_NoEvents_171);
      set_field(noEvents_2_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(6, 3, 50, 18, 2, 2013)}, EvntGrp_NoEvents_171);
      set_field(noEvents_2_1_1, FIX::EventType{12}, EvntGrp_NoEvents_171);
      all_values.push_back(EvntGrp_NoEvents_171);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_2.addGroup(noEvents_2_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_160;
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyID{"STRING_1576128189"}, InstrumentParties_NoInstrumentParties_160);
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_160);
      set_field(noInstrumentParties_2_1_0, FIX::InstrumentPartyRole{301585222}, InstrumentParties_NoInstrumentParties_160);
      all_values.push_back(InstrumentParties_NoInstrumentParties_160);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324;
        set_field(noInstrumentPartySubIDs_2_0_2_0, FIX::InstrumentPartySubID{"STRING_1630731115"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324);
        set_field(noInstrumentPartySubIDs_2_0_2_0, FIX::InstrumentPartySubIDType{1392529547}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325;
        set_field(noInstrumentPartySubIDs_2_0_2_1, FIX::InstrumentPartySubID{"STRING_1343260138"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325);
        set_field(noInstrumentPartySubIDs_2_0_2_1, FIX::InstrumentPartySubIDType{956007313}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_161;
      set_field(noInstrumentParties_2_1_1, FIX::InstrumentPartyID{"STRING_1594498616"}, InstrumentParties_NoInstrumentParties_161);
      set_field(noInstrumentParties_2_1_1, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_161);
      set_field(noInstrumentParties_2_1_1, FIX::InstrumentPartyRole{835405479}, InstrumentParties_NoInstrumentParties_161);
      all_values.push_back(InstrumentParties_NoInstrumentParties_161);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326;
        set_field(noInstrumentPartySubIDs_2_1_2_0, FIX::InstrumentPartySubID{"STRING_1809886837"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326);
        set_field(noInstrumentPartySubIDs_2_1_2_0, FIX::InstrumentPartySubIDType{1363104512}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327;
        set_field(noInstrumentPartySubIDs_2_1_2_1, FIX::InstrumentPartySubID{"STRING_935631621"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327);
        set_field(noInstrumentPartySubIDs_2_1_2_1, FIX::InstrumentPartySubIDType{1517350132}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_1);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_162;
      set_field(noInstrumentParties_2_1_2, FIX::InstrumentPartyID{"STRING_1837972762"}, InstrumentParties_NoInstrumentParties_162);
      set_field(noInstrumentParties_2_1_2, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_162);
      set_field(noInstrumentParties_2_1_2, FIX::InstrumentPartyRole{2081203511}, InstrumentParties_NoInstrumentParties_162);
      all_values.push_back(InstrumentParties_NoInstrumentParties_162);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328;
        set_field(noInstrumentPartySubIDs_2_2_2_0, FIX::InstrumentPartySubID{"STRING_223819331"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328);
        set_field(noInstrumentPartySubIDs_2_2_2_0, FIX::InstrumentPartySubIDType{728817280}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_0);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_171;
      set_field(noSecurityAltID_2_1_0, FIX::SecurityAltID{"STRING_1924014761"}, SecAltIDGrp_NoSecurityAltID_171);
      set_field(noSecurityAltID_2_1_0, FIX::SecurityAltIDSource{"STRING_2034439963"}, SecAltIDGrp_NoSecurityAltID_171);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_171);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_172;
    set_field(noRelatedSym_0_2, FIX::SecurityXML{"XMLDATA_545464617"}, SecurityXML_172);
    set_field(noRelatedSym_0_2, FIX::SecurityXMLLen{1825983460}, SecurityXML_172);
    set_field(noRelatedSym_0_2, FIX::SecurityXMLSchema{"STRING_1701165120"}, SecurityXML_172);
    all_values.push_back(SecurityXML_172);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_15;
    set_field(noRelatedSym_0_2, FIX::DeliveryForm{1}, InstrumentExtension_15);
    FIX::PctAtRisk PctAtRisk_15;
    PctAtRisk_15.setString("25.430000");
set_field(noRelatedSym_0_2, PctAtRisk_15, InstrumentExtension_15);
    all_values.push_back(InstrumentExtension_15);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_2_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_29;
      set_field(noInstrAttrib_2_1_0, FIX::InstrAttribType{6}, AttrbGrp_NoInstrAttrib_29);
      set_field(noInstrAttrib_2_1_0, FIX::InstrAttribValue{"STRING_2047048099"}, AttrbGrp_NoInstrAttrib_29);
      all_values.push_back(AttrbGrp_NoInstrAttrib_29);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_2.addGroup(noInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_2_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_30;
      set_field(noInstrAttrib_2_1_1, FIX::InstrAttribType{18}, AttrbGrp_NoInstrAttrib_30);
      set_field(noInstrAttrib_2_1_1, FIX::InstrAttribValue{"STRING_502339176"}, AttrbGrp_NoInstrAttrib_30);
      all_values.push_back(AttrbGrp_NoInstrAttrib_30);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_2.addGroup(noInstrAttrib_2_1_1);
    }
    // SecLstUpdRelSymsLegGrp
    // Group SecLstUpdRelSymsLegGrp.NoLegs
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_2_1_0;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_3;
      set_field(noLegs_2_1_0, FIX::LegSettlType{'4'}, SecLstUpdRelSymsLegGrp_NoLegs_3);
      set_field(noLegs_2_1_0, FIX::LegSwapType{4}, SecLstUpdRelSymsLegGrp_NoLegs_3);
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_3);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_130;
      set_field(noLegs_2_1_0, FIX::EncodedLegIssuer{"DATA_338819232"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::EncodedLegIssuerLen{2021180723}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::EncodedLegSecurityDesc{"DATA_123895044"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::EncodedLegSecurityDescLen{1174224711}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegCFICode{"STRING_501068185"}, InstrumentLeg_130);
      FIX::LegContractMultiplier LegContractMultiplier_130;
      LegContractMultiplier_130.setString("19337818");
set_field(noLegs_2_1_0, LegContractMultiplier_130, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegContractMultiplierUnit{389845576}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1436699806"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegCountryOfIssue{"COUNTRY_1303648365"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_80334690"}, InstrumentLeg_130);
      FIX::LegCouponRate LegCouponRate_130;
      LegCouponRate_130.setString("23.460000");
set_field(noLegs_2_1_0, LegCouponRate_130, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegCreditRating{"STRING_1237368228"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1966185509"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegExerciseStyle{2000831815}, InstrumentLeg_130);
      FIX::LegFactor LegFactor_130;
      LegFactor_130.setString("18910027");
set_field(noLegs_2_1_0, LegFactor_130, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegFlowScheduleType{1853141824}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegInstrRegistry{"STRING_398812784"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1569502603"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1406823297"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegIssuer{"STRING_1053261978"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegLocaleOfIssue{"STRING_1144361498"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_139390634"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1136355714"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1043925949"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_130);
      FIX::LegOptionRatio LegOptionRatio_130;
      LegOptionRatio_130.setString("16386948");
set_field(noLegs_2_1_0, LegOptionRatio_130, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegPool{"STRING_426737868"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegPriceUnitOfMeasure{"STRING_1747708947"}, InstrumentLeg_130);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_130;
      LegPriceUnitOfMeasureQty_130.setString("13368105");
set_field(noLegs_2_1_0, LegPriceUnitOfMeasureQty_130, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegProduct{765557100}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegPutOrCall{1621406022}, InstrumentLeg_130);
      FIX::LegRatioQty LegRatioQty_130;
      LegRatioQty_130.setString("14607056");
set_field(noLegs_2_1_0, LegRatioQty_130, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1939781812"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegRepoCollateralSecurityType{"STRING_2122474207"}, InstrumentLeg_130);
      FIX::LegRepurchaseRate LegRepurchaseRate_130;
      LegRepurchaseRate_130.setString("38.340000");
set_field(noLegs_2_1_0, LegRepurchaseRate_130, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegRepurchaseTerm{182143740}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegSecurityDesc{"STRING_1411690366"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegSecurityExchange{"EXCHANGE_403168551"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegSecurityID{"STRING_262478430"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegSecurityIDSource{"STRING_1154859064"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegSecuritySubType{"STRING_1640536780"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegSecurityType{"STRING_579168070"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegSide{'1'}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_1459238641"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_130);
      FIX::LegStrikePrice LegStrikePrice_130;
      LegStrikePrice_130.setString("11648968");
set_field(noLegs_2_1_0, LegStrikePrice_130, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegSymbol{"STRING_831329021"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegSymbolSfx{"STRING_287385192"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegTimeUnit{"STRING_424236466"}, InstrumentLeg_130);
      set_field(noLegs_2_1_0, FIX::LegUnitOfMeasure{"STRING_1884591000"}, InstrumentLeg_130);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_130;
      LegUnitOfMeasureQty_130.setString("14317466");
set_field(noLegs_2_1_0, LegUnitOfMeasureQty_130, InstrumentLeg_130);
      all_values.push_back(InstrumentLeg_130);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_259;
        set_field(noLegSecurityAltID_2_0_2_0, FIX::LegSecurityAltID{"STRING_873463066"}, LegSecAltIDGrp_NoLegSecurityAltID_259);
        set_field(noLegSecurityAltID_2_0_2_0, FIX::LegSecurityAltIDSource{"STRING_328188991"}, LegSecAltIDGrp_NoLegSecurityAltID_259);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_259);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_19;
      set_field(noLegs_2_1_0, FIX::LegBenchmarkCurveCurrency{"GBP"}, LegBenchmarkCurveData_19);
      set_field(noLegs_2_1_0, FIX::LegBenchmarkCurveName{"STRING_754926860"}, LegBenchmarkCurveData_19);
      set_field(noLegs_2_1_0, FIX::LegBenchmarkCurvePoint{"STRING_1484879241"}, LegBenchmarkCurveData_19);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_19;
      LegBenchmarkPrice_19.setString("17014848");
set_field(noLegs_2_1_0, LegBenchmarkPrice_19, LegBenchmarkCurveData_19);
      set_field(noLegs_2_1_0, FIX::LegBenchmarkPriceType{1520483960}, LegBenchmarkCurveData_19);
      all_values.push_back(LegBenchmarkCurveData_19);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_58;
        set_field(noLegStipulations_2_0_2_0, FIX::LegStipulationType{"STRING_1014706818"}, LegStipulations_NoLegStipulations_58);
        set_field(noLegStipulations_2_0_2_0, FIX::LegStipulationValue{"STRING_1312782124"}, LegStipulations_NoLegStipulations_58);
        all_values.push_back(LegStipulations_NoLegStipulations_58);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_2_1_0.addGroup(noLegStipulations_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_59;
        set_field(noLegStipulations_2_0_2_1, FIX::LegStipulationType{"STRING_933792175"}, LegStipulations_NoLegStipulations_59);
        set_field(noLegStipulations_2_0_2_1, FIX::LegStipulationValue{"STRING_114227004"}, LegStipulations_NoLegStipulations_59);
        all_values.push_back(LegStipulations_NoLegStipulations_59);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_2_1_0.addGroup(noLegStipulations_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_2_1_1;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_4;
      set_field(noLegs_2_1_1, FIX::LegSettlType{'1'}, SecLstUpdRelSymsLegGrp_NoLegs_4);
      set_field(noLegs_2_1_1, FIX::LegSwapType{2}, SecLstUpdRelSymsLegGrp_NoLegs_4);
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_4);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_131;
      set_field(noLegs_2_1_1, FIX::EncodedLegIssuer{"DATA_517395556"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::EncodedLegIssuerLen{1757404295}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::EncodedLegSecurityDesc{"DATA_1352857957"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::EncodedLegSecurityDescLen{10448688}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegCFICode{"STRING_189088717"}, InstrumentLeg_131);
      FIX::LegContractMultiplier LegContractMultiplier_131;
      LegContractMultiplier_131.setString("3272214");
set_field(noLegs_2_1_1, LegContractMultiplier_131, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegContractMultiplierUnit{1469687329}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_621604955"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegCountryOfIssue{"COUNTRY_1192587640"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_487100498"}, InstrumentLeg_131);
      FIX::LegCouponRate LegCouponRate_131;
      LegCouponRate_131.setString("39.760000");
set_field(noLegs_2_1_1, LegCouponRate_131, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegCreditRating{"STRING_1479972832"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegCurrency{"GBP"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegDatedDate{"LOCALMKTDATE_764235874"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegExerciseStyle{1474964065}, InstrumentLeg_131);
      FIX::LegFactor LegFactor_131;
      LegFactor_131.setString("20635043");
set_field(noLegs_2_1_1, LegFactor_131, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegFlowScheduleType{1092424866}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegInstrRegistry{"STRING_1212134359"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_280695055"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegIssueDate{"LOCALMKTDATE_1847351726"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegIssuer{"STRING_549529952"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegLocaleOfIssue{"STRING_1982179920"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_1220352038"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1508331567"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegMaturityTime{"TZTIMEONLY_849403091"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegOptAttribute{'3'}, InstrumentLeg_131);
      FIX::LegOptionRatio LegOptionRatio_131;
      LegOptionRatio_131.setString("2946400");
set_field(noLegs_2_1_1, LegOptionRatio_131, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegPool{"STRING_963630095"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegPriceUnitOfMeasure{"STRING_1880576379"}, InstrumentLeg_131);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_131;
      LegPriceUnitOfMeasureQty_131.setString("4926389");
set_field(noLegs_2_1_1, LegPriceUnitOfMeasureQty_131, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegProduct{1481025651}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegPutOrCall{1490497026}, InstrumentLeg_131);
      FIX::LegRatioQty LegRatioQty_131;
      LegRatioQty_131.setString("18454969");
set_field(noLegs_2_1_1, LegRatioQty_131, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1491474339"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegRepoCollateralSecurityType{"STRING_1679585744"}, InstrumentLeg_131);
      FIX::LegRepurchaseRate LegRepurchaseRate_131;
      LegRepurchaseRate_131.setString("47.000000");
set_field(noLegs_2_1_1, LegRepurchaseRate_131, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegRepurchaseTerm{813678020}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegSecurityDesc{"STRING_153707051"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegSecurityExchange{"EXCHANGE_1217822341"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegSecurityID{"STRING_1300778519"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegSecurityIDSource{"STRING_1606641027"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegSecuritySubType{"STRING_550311525"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegSecurityType{"STRING_64631836"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegSide{'6'}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_1314547400"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_131);
      FIX::LegStrikePrice LegStrikePrice_131;
      LegStrikePrice_131.setString("2594886");
set_field(noLegs_2_1_1, LegStrikePrice_131, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegSymbol{"STRING_604246612"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegSymbolSfx{"STRING_845914509"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegTimeUnit{"STRING_2106840344"}, InstrumentLeg_131);
      set_field(noLegs_2_1_1, FIX::LegUnitOfMeasure{"STRING_1153776564"}, InstrumentLeg_131);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_131;
      LegUnitOfMeasureQty_131.setString("6806107");
set_field(noLegs_2_1_1, LegUnitOfMeasureQty_131, InstrumentLeg_131);
      all_values.push_back(InstrumentLeg_131);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_260;
        set_field(noLegSecurityAltID_2_1_2_0, FIX::LegSecurityAltID{"STRING_514624484"}, LegSecAltIDGrp_NoLegSecurityAltID_260);
        set_field(noLegSecurityAltID_2_1_2_0, FIX::LegSecurityAltIDSource{"STRING_1530013873"}, LegSecAltIDGrp_NoLegSecurityAltID_260);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_260);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_261;
        set_field(noLegSecurityAltID_2_1_2_1, FIX::LegSecurityAltID{"STRING_1565359249"}, LegSecAltIDGrp_NoLegSecurityAltID_261);
        set_field(noLegSecurityAltID_2_1_2_1, FIX::LegSecurityAltIDSource{"STRING_809264578"}, LegSecAltIDGrp_NoLegSecurityAltID_261);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_261);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_262;
        set_field(noLegSecurityAltID_2_1_2_2, FIX::LegSecurityAltID{"STRING_346160320"}, LegSecAltIDGrp_NoLegSecurityAltID_262);
        set_field(noLegSecurityAltID_2_1_2_2, FIX::LegSecurityAltIDSource{"STRING_1298451981"}, LegSecAltIDGrp_NoLegSecurityAltID_262);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_262);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_20;
      set_field(noLegs_2_1_1, FIX::LegBenchmarkCurveCurrency{"GBP"}, LegBenchmarkCurveData_20);
      set_field(noLegs_2_1_1, FIX::LegBenchmarkCurveName{"STRING_641465359"}, LegBenchmarkCurveData_20);
      set_field(noLegs_2_1_1, FIX::LegBenchmarkCurvePoint{"STRING_999916863"}, LegBenchmarkCurveData_20);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_20;
      LegBenchmarkPrice_20.setString("11711766");
set_field(noLegs_2_1_1, LegBenchmarkPrice_20, LegBenchmarkCurveData_20);
      set_field(noLegs_2_1_1, FIX::LegBenchmarkPriceType{173567455}, LegBenchmarkCurveData_20);
      all_values.push_back(LegBenchmarkCurveData_20);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_60;
        set_field(noLegStipulations_2_1_2_0, FIX::LegStipulationType{"STRING_1984854684"}, LegStipulations_NoLegStipulations_60);
        set_field(noLegStipulations_2_1_2_0, FIX::LegStipulationValue{"STRING_327274506"}, LegStipulations_NoLegStipulations_60);
        all_values.push_back(LegStipulations_NoLegStipulations_60);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_2_1_1.addGroup(noLegStipulations_2_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_61;
        set_field(noLegStipulations_2_1_2_1, FIX::LegStipulationType{"STRING_95490256"}, LegStipulations_NoLegStipulations_61);
        set_field(noLegStipulations_2_1_2_1, FIX::LegStipulationValue{"STRING_1138149555"}, LegStipulations_NoLegStipulations_61);
        all_values.push_back(LegStipulations_NoLegStipulations_61);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_2_1_1.addGroup(noLegStipulations_2_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_1_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_62;
        set_field(noLegStipulations_2_1_2_2, FIX::LegStipulationType{"STRING_1933915534"}, LegStipulations_NoLegStipulations_62);
        set_field(noLegStipulations_2_1_2_2, FIX::LegStipulationValue{"STRING_645801782"}, LegStipulations_NoLegStipulations_62);
        all_values.push_back(LegStipulations_NoLegStipulations_62);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_2_1_1.addGroup(noLegStipulations_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_1);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_14;
    set_field(noRelatedSym_0_2, FIX::ExpirationCycle{1}, BaseTradingRules_14);
    set_field(noRelatedSym_0_2, FIX::ImpliedMarketIndicator{2}, BaseTradingRules_14);
    FIX::MaxPriceVariation MaxPriceVariation_14;
    MaxPriceVariation_14.setString("19603491");
set_field(noRelatedSym_0_2, MaxPriceVariation_14, BaseTradingRules_14);
    FIX::MaxTradeVol MaxTradeVol_14;
    MaxTradeVol_14.setString("5948936");
set_field(noRelatedSym_0_2, MaxTradeVol_14, BaseTradingRules_14);
    FIX::MinTradeVol MinTradeVol_14;
    MinTradeVol_14.setString("10008500");
set_field(noRelatedSym_0_2, MinTradeVol_14, BaseTradingRules_14);
    set_field(noRelatedSym_0_2, FIX::MultilegModel{2}, BaseTradingRules_14);
    set_field(noRelatedSym_0_2, FIX::MultilegPriceMethod{3}, BaseTradingRules_14);
    set_field(noRelatedSym_0_2, FIX::PriceType{1}, BaseTradingRules_14);
    FIX::RoundLot RoundLot_14;
    RoundLot_14.setString("317108");
set_field(noRelatedSym_0_2, RoundLot_14, BaseTradingRules_14);
    set_field(noRelatedSym_0_2, FIX::TradingCurrency{"USD"}, BaseTradingRules_14);
    all_values.push_back(BaseTradingRules_14);
    all_compo_names.insert("...NoRelatedSym..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_2_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_30;
      set_field(noLotTypeRules_2_1_0, FIX::LotType{'2'}, LotTypeRules_NoLotTypeRules_30);
      FIX::MinLotSize MinLotSize_30;
      MinLotSize_30.setString("19099055");
set_field(noLotTypeRules_2_1_0, MinLotSize_30, LotTypeRules_NoLotTypeRules_30);
      all_values.push_back(LotTypeRules_NoLotTypeRules_30);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_2.addGroup(noLotTypeRules_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_2_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_31;
      set_field(noLotTypeRules_2_1_1, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_31);
      FIX::MinLotSize MinLotSize_31;
      MinLotSize_31.setString("15293222");
set_field(noLotTypeRules_2_1_1, MinLotSize_31, LotTypeRules_NoLotTypeRules_31);
      all_values.push_back(LotTypeRules_NoLotTypeRules_31);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_2.addGroup(noLotTypeRules_2_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_14;
    FIX::HighLimitPrice HighLimitPrice_14;
    HighLimitPrice_14.setString("1085822");
set_field(noRelatedSym_0_2, HighLimitPrice_14, PriceLimits_14);
    FIX::LowLimitPrice LowLimitPrice_14;
    LowLimitPrice_14.setString("19277471");
set_field(noRelatedSym_0_2, LowLimitPrice_14, PriceLimits_14);
    set_field(noRelatedSym_0_2, FIX::PriceLimitType{1}, PriceLimits_14);
    FIX::TradingReferencePrice TradingReferencePrice_14;
    TradingReferencePrice_14.setString("19357682");
set_field(noRelatedSym_0_2, TradingReferencePrice_14, PriceLimits_14);
    all_values.push_back(PriceLimits_14);
    all_compo_names.insert("...NoRelatedSym...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_2_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_25;
      FIX::EndTickPriceRange EndTickPriceRange_25;
      EndTickPriceRange_25.setString("16836590");
set_field(noTickRules_2_1_0, EndTickPriceRange_25, TickRules_NoTickRules_25);
      FIX::StartTickPriceRange StartTickPriceRange_25;
      StartTickPriceRange_25.setString("9594612");
set_field(noTickRules_2_1_0, StartTickPriceRange_25, TickRules_NoTickRules_25);
      FIX::TickIncrement TickIncrement_25;
      TickIncrement_25.setString("5952963");
set_field(noTickRules_2_1_0, TickIncrement_25, TickRules_NoTickRules_25);
      set_field(noTickRules_2_1_0, FIX::TickRuleType{2}, TickRules_NoTickRules_25);
      all_values.push_back(TickRules_NoTickRules_25);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_2.addGroup(noTickRules_2_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_2_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_29;
      set_field(noNestedInstrAttrib_2_1_0, FIX::NestedInstrAttribType{922570838}, NestedInstrumentAttribute_NoNestedInstrAttrib_29);
      set_field(noNestedInstrAttrib_2_1_0, FIX::NestedInstrAttribValue{"STRING_656817189"}, NestedInstrumentAttribute_NoNestedInstrAttrib_29);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_29);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_2.addGroup(noNestedInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_2_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_30;
      set_field(noNestedInstrAttrib_2_1_1, FIX::NestedInstrAttribType{1934981816}, NestedInstrumentAttribute_NoNestedInstrAttrib_30);
      set_field(noNestedInstrAttrib_2_1_1, FIX::NestedInstrAttribValue{"STRING_709002724"}, NestedInstrumentAttribute_NoNestedInstrAttrib_30);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_30);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_2.addGroup(noNestedInstrAttrib_2_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_2_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_31;
      set_field(noNestedInstrAttrib_2_1_2, FIX::NestedInstrAttribType{1302618971}, NestedInstrumentAttribute_NoNestedInstrAttrib_31);
      set_field(noNestedInstrAttrib_2_1_2, FIX::NestedInstrAttribValue{"STRING_990279559"}, NestedInstrumentAttribute_NoNestedInstrAttrib_31);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_31);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_2.addGroup(noNestedInstrAttrib_2_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_2_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_27;
      set_field(noTradingSessionRules_2_1_0, FIX::TradingSessionID{"STRING_2"}, TradingSessionRulesGrp_NoTradingSessionRules_27);
      set_field(noTradingSessionRules_2_1_0, FIX::TradingSessionSubID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_27);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_27);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_54;
        set_field(noExecInstRules_2_0_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_54);
        all_values.push_back(ExecInstRules_NoExecInstRules_54);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_55;
        set_field(noExecInstRules_2_0_2_1, FIX::ExecInstValue{'6'}, ExecInstRules_NoExecInstRules_55);
        all_values.push_back(ExecInstRules_NoExecInstRules_55);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_61;
        set_field(noMDFeedTypes_2_0_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_61);
        set_field(noMDFeedTypes_2_0_2_0, FIX::MDFeedType{"STRING_842262986"}, MarketDataFeedTypes_NoMDFeedTypes_61);
        set_field(noMDFeedTypes_2_0_2_0, FIX::MarketDepth{77172321}, MarketDataFeedTypes_NoMDFeedTypes_61);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_61);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_62;
        set_field(noMDFeedTypes_2_0_2_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_62);
        set_field(noMDFeedTypes_2_0_2_1, FIX::MDFeedType{"STRING_1562320643"}, MarketDataFeedTypes_NoMDFeedTypes_62);
        set_field(noMDFeedTypes_2_0_2_1, FIX::MarketDepth{1987077886}, MarketDataFeedTypes_NoMDFeedTypes_62);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_62);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_63;
        set_field(noMDFeedTypes_2_0_2_2, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_63);
        set_field(noMDFeedTypes_2_0_2_2, FIX::MDFeedType{"STRING_944159231"}, MarketDataFeedTypes_NoMDFeedTypes_63);
        set_field(noMDFeedTypes_2_0_2_2, FIX::MarketDepth{2095660123}, MarketDataFeedTypes_NoMDFeedTypes_63);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_63);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_59;
        set_field(noMatchRules_2_0_2_0, FIX::MatchAlgorithm{"STRING_1627901385"}, MatchRules_NoMatchRules_59);
        set_field(noMatchRules_2_0_2_0, FIX::MatchType{"STRING_MT"}, MatchRules_NoMatchRules_59);
        all_values.push_back(MatchRules_NoMatchRules_59);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_60;
        set_field(noMatchRules_2_0_2_1, FIX::MatchAlgorithm{"STRING_1114773017"}, MatchRules_NoMatchRules_60);
        set_field(noMatchRules_2_0_2_1, FIX::MatchType{"STRING_S5"}, MatchRules_NoMatchRules_60);
        all_values.push_back(MatchRules_NoMatchRules_60);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_53;
        set_field(noOrdTypeRules_2_0_2_0, FIX::OrdType{'E'}, OrdTypeRules_NoOrdTypeRules_53);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_53);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_54;
        set_field(noOrdTypeRules_2_0_2_1, FIX::OrdType{'8'}, OrdTypeRules_NoOrdTypeRules_54);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_54);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_53;
        set_field(noTimeInForceRules_2_0_2_0, FIX::TimeInForce{'9'}, TimeInForceRules_NoTimeInForceRules_53);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_53);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noTradingSessionRules_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_2_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_28;
      set_field(noTradingSessionRules_2_1_1, FIX::TradingSessionID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_28);
      set_field(noTradingSessionRules_2_1_1, FIX::TradingSessionSubID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_28);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_28);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_56;
        set_field(noExecInstRules_2_1_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_56);
        all_values.push_back(ExecInstRules_NoExecInstRules_56);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_64;
        set_field(noMDFeedTypes_2_1_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_64);
        set_field(noMDFeedTypes_2_1_2_0, FIX::MDFeedType{"STRING_505357056"}, MarketDataFeedTypes_NoMDFeedTypes_64);
        set_field(noMDFeedTypes_2_1_2_0, FIX::MarketDepth{1708221805}, MarketDataFeedTypes_NoMDFeedTypes_64);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_64);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_65;
        set_field(noMDFeedTypes_2_1_2_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_65);
        set_field(noMDFeedTypes_2_1_2_1, FIX::MDFeedType{"STRING_1693195713"}, MarketDataFeedTypes_NoMDFeedTypes_65);
        set_field(noMDFeedTypes_2_1_2_1, FIX::MarketDepth{197567970}, MarketDataFeedTypes_NoMDFeedTypes_65);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_65);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_66;
        set_field(noMDFeedTypes_2_1_2_2, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_66);
        set_field(noMDFeedTypes_2_1_2_2, FIX::MDFeedType{"STRING_765261570"}, MarketDataFeedTypes_NoMDFeedTypes_66);
        set_field(noMDFeedTypes_2_1_2_2, FIX::MarketDepth{1039830956}, MarketDataFeedTypes_NoMDFeedTypes_66);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_66);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_61;
        set_field(noMatchRules_2_1_2_0, FIX::MatchAlgorithm{"STRING_1048747009"}, MatchRules_NoMatchRules_61);
        set_field(noMatchRules_2_1_2_0, FIX::MatchType{"STRING_M1"}, MatchRules_NoMatchRules_61);
        all_values.push_back(MatchRules_NoMatchRules_61);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_55;
        set_field(noOrdTypeRules_2_1_2_0, FIX::OrdType{'2'}, OrdTypeRules_NoOrdTypeRules_55);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_55);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_56;
        set_field(noOrdTypeRules_2_1_2_1, FIX::OrdType{'Q'}, OrdTypeRules_NoOrdTypeRules_56);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_56);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_57;
        set_field(noOrdTypeRules_2_1_2_2, FIX::OrdType{'6'}, OrdTypeRules_NoOrdTypeRules_57);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_57);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_54;
        set_field(noTimeInForceRules_2_1_2_0, FIX::TimeInForce{'0'}, TimeInForceRules_NoTimeInForceRules_54);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_54);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_0);
      }
      noRelatedSym_0_2.addGroup(noTradingSessionRules_2_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_36;
    set_field(noRelatedSym_0_2, FIX::BenchmarkCurveCurrency{"GBP"}, SpreadOrBenchmarkCurveData_36);
    set_field(noRelatedSym_0_2, FIX::BenchmarkCurveName{"STRING_FutureSWAP"}, SpreadOrBenchmarkCurveData_36);
    set_field(noRelatedSym_0_2, FIX::BenchmarkCurvePoint{"STRING_183915616"}, SpreadOrBenchmarkCurveData_36);
    FIX::BenchmarkPrice BenchmarkPrice_36;
    BenchmarkPrice_36.setString("11844468");
set_field(noRelatedSym_0_2, BenchmarkPrice_36, SpreadOrBenchmarkCurveData_36);
    set_field(noRelatedSym_0_2, FIX::BenchmarkPriceType{1621241714}, SpreadOrBenchmarkCurveData_36);
    set_field(noRelatedSym_0_2, FIX::BenchmarkSecurityID{"STRING_1676670139"}, SpreadOrBenchmarkCurveData_36);
    set_field(noRelatedSym_0_2, FIX::BenchmarkSecurityIDSource{"STRING_1669603383"}, SpreadOrBenchmarkCurveData_36);
    FIX::Spread Spread_36;
    Spread_36.setString("18559789");
set_field(noRelatedSym_0_2, Spread_36, SpreadOrBenchmarkCurveData_36);
    all_values.push_back(SpreadOrBenchmarkCurveData_36);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_2_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_65;
      set_field(noStipulations_2_1_0, FIX::StipulationType{"STRING_STRUCT"}, Stipulations_NoStipulations_65);
      set_field(noStipulations_2_1_0, FIX::StipulationValue{"STRING_1245851493"}, Stipulations_NoStipulations_65);
      all_values.push_back(Stipulations_NoStipulations_65);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_2.addGroup(noStipulations_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_2_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_66;
      set_field(noStipulations_2_1_1, FIX::StipulationType{"STRING_PMAX"}, Stipulations_NoStipulations_66);
      set_field(noStipulations_2_1_1, FIX::StipulationValue{"STRING_907587933"}, Stipulations_NoStipulations_66);
      all_values.push_back(Stipulations_NoStipulations_66);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_2.addGroup(noStipulations_2_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_2_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_67;
      set_field(noStipulations_2_1_2, FIX::StipulationType{"STRING_YTM"}, Stipulations_NoStipulations_67);
      set_field(noStipulations_2_1_2, FIX::StipulationValue{"STRING_493225941"}, Stipulations_NoStipulations_67);
      all_values.push_back(Stipulations_NoStipulations_67);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_2.addGroup(noStipulations_2_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_2_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_25;
      FIX::EndStrikePxRange EndStrikePxRange_25;
      EndStrikePxRange_25.setString("12969206");
set_field(noStrikeRules_2_1_0, EndStrikePxRange_25, StrikeRules_NoStrikeRules_25);
      FIX::StartStrikePxRange StartStrikePxRange_25;
      StartStrikePxRange_25.setString("6907939");
set_field(noStrikeRules_2_1_0, StartStrikePxRange_25, StrikeRules_NoStrikeRules_25);
      set_field(noStrikeRules_2_1_0, FIX::StrikeExerciseStyle{983485869}, StrikeRules_NoStrikeRules_25);
      FIX::StrikeIncrement StrikeIncrement_25;
      StrikeIncrement_25.setString("20621821");
set_field(noStrikeRules_2_1_0, StrikeIncrement_25, StrikeRules_NoStrikeRules_25);
      set_field(noStrikeRules_2_1_0, FIX::StrikeRuleID{"STRING_1730624867"}, StrikeRules_NoStrikeRules_25);
      all_values.push_back(StrikeRules_NoStrikeRules_25);
      all_compo_names.insert("...NoRelatedSym...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_55;
        set_field(noMaturityRules_2_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_963445545"}, MaturityRules_NoMaturityRules_55);
        set_field(noMaturityRules_2_0_2_0, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_55);
        set_field(noMaturityRules_2_0_2_0, FIX::MaturityMonthYearIncrement{750603314}, MaturityRules_NoMaturityRules_55);
        set_field(noMaturityRules_2_0_2_0, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_55);
        set_field(noMaturityRules_2_0_2_0, FIX::MaturityRuleID{"STRING_1436636354"}, MaturityRules_NoMaturityRules_55);
        set_field(noMaturityRules_2_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_502135631"}, MaturityRules_NoMaturityRules_55);
        all_values.push_back(MaturityRules_NoMaturityRules_55);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_56;
        set_field(noMaturityRules_2_0_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_1284577656"}, MaturityRules_NoMaturityRules_56);
        set_field(noMaturityRules_2_0_2_1, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_56);
        set_field(noMaturityRules_2_0_2_1, FIX::MaturityMonthYearIncrement{2137612633}, MaturityRules_NoMaturityRules_56);
        set_field(noMaturityRules_2_0_2_1, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_56);
        set_field(noMaturityRules_2_0_2_1, FIX::MaturityRuleID{"STRING_64235653"}, MaturityRules_NoMaturityRules_56);
        set_field(noMaturityRules_2_0_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_174044601"}, MaturityRules_NoMaturityRules_56);
        all_values.push_back(MaturityRules_NoMaturityRules_56);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_57;
        set_field(noMaturityRules_2_0_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_1943401994"}, MaturityRules_NoMaturityRules_57);
        set_field(noMaturityRules_2_0_2_2, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_57);
        set_field(noMaturityRules_2_0_2_2, FIX::MaturityMonthYearIncrement{1850714740}, MaturityRules_NoMaturityRules_57);
        set_field(noMaturityRules_2_0_2_2, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_57);
        set_field(noMaturityRules_2_0_2_2, FIX::MaturityRuleID{"STRING_1393972661"}, MaturityRules_NoMaturityRules_57);
        set_field(noMaturityRules_2_0_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_512670274"}, MaturityRules_NoMaturityRules_57);
        all_values.push_back(MaturityRules_NoMaturityRules_57);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noStrikeRules_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_2_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_26;
      FIX::EndStrikePxRange EndStrikePxRange_26;
      EndStrikePxRange_26.setString("343170");
set_field(noStrikeRules_2_1_1, EndStrikePxRange_26, StrikeRules_NoStrikeRules_26);
      FIX::StartStrikePxRange StartStrikePxRange_26;
      StartStrikePxRange_26.setString("4923405");
set_field(noStrikeRules_2_1_1, StartStrikePxRange_26, StrikeRules_NoStrikeRules_26);
      set_field(noStrikeRules_2_1_1, FIX::StrikeExerciseStyle{1445158058}, StrikeRules_NoStrikeRules_26);
      FIX::StrikeIncrement StrikeIncrement_26;
      StrikeIncrement_26.setString("9419050");
set_field(noStrikeRules_2_1_1, StrikeIncrement_26, StrikeRules_NoStrikeRules_26);
      set_field(noStrikeRules_2_1_1, FIX::StrikeRuleID{"STRING_96065407"}, StrikeRules_NoStrikeRules_26);
      all_values.push_back(StrikeRules_NoStrikeRules_26);
      all_compo_names.insert("...NoRelatedSym...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_58;
        set_field(noMaturityRules_2_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_2038801600"}, MaturityRules_NoMaturityRules_58);
        set_field(noMaturityRules_2_1_2_0, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_58);
        set_field(noMaturityRules_2_1_2_0, FIX::MaturityMonthYearIncrement{481694263}, MaturityRules_NoMaturityRules_58);
        set_field(noMaturityRules_2_1_2_0, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_58);
        set_field(noMaturityRules_2_1_2_0, FIX::MaturityRuleID{"STRING_1307684557"}, MaturityRules_NoMaturityRules_58);
        set_field(noMaturityRules_2_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_64835483"}, MaturityRules_NoMaturityRules_58);
        all_values.push_back(MaturityRules_NoMaturityRules_58);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_0);
      }
      noRelatedSym_0_2.addGroup(noStrikeRules_2_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_2_1_2;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_27;
      FIX::EndStrikePxRange EndStrikePxRange_27;
      EndStrikePxRange_27.setString("18220512");
set_field(noStrikeRules_2_1_2, EndStrikePxRange_27, StrikeRules_NoStrikeRules_27);
      FIX::StartStrikePxRange StartStrikePxRange_27;
      StartStrikePxRange_27.setString("1236464");
set_field(noStrikeRules_2_1_2, StartStrikePxRange_27, StrikeRules_NoStrikeRules_27);
      set_field(noStrikeRules_2_1_2, FIX::StrikeExerciseStyle{102644654}, StrikeRules_NoStrikeRules_27);
      FIX::StrikeIncrement StrikeIncrement_27;
      StrikeIncrement_27.setString("4251709");
set_field(noStrikeRules_2_1_2, StrikeIncrement_27, StrikeRules_NoStrikeRules_27);
      set_field(noStrikeRules_2_1_2, FIX::StrikeRuleID{"STRING_901135985"}, StrikeRules_NoStrikeRules_27);
      all_values.push_back(StrikeRules_NoStrikeRules_27);
      all_compo_names.insert("...NoRelatedSym...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_2_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_59;
        set_field(noMaturityRules_2_2_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_927306593"}, MaturityRules_NoMaturityRules_59);
        set_field(noMaturityRules_2_2_2_0, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_59);
        set_field(noMaturityRules_2_2_2_0, FIX::MaturityMonthYearIncrement{1707678634}, MaturityRules_NoMaturityRules_59);
        set_field(noMaturityRules_2_2_2_0, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_59);
        set_field(noMaturityRules_2_2_2_0, FIX::MaturityRuleID{"STRING_797185144"}, MaturityRules_NoMaturityRules_59);
        set_field(noMaturityRules_2_2_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1771914288"}, MaturityRules_NoMaturityRules_59);
        all_values.push_back(MaturityRules_NoMaturityRules_59);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_2.addGroup(noMaturityRules_2_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_2_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_60;
        set_field(noMaturityRules_2_2_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_1091480180"}, MaturityRules_NoMaturityRules_60);
        set_field(noMaturityRules_2_2_2_1, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_60);
        set_field(noMaturityRules_2_2_2_1, FIX::MaturityMonthYearIncrement{1309908007}, MaturityRules_NoMaturityRules_60);
        set_field(noMaturityRules_2_2_2_1, FIX::MaturityMonthYearIncrementUnits{0}, MaturityRules_NoMaturityRules_60);
        set_field(noMaturityRules_2_2_2_1, FIX::MaturityRuleID{"STRING_2058625219"}, MaturityRules_NoMaturityRules_60);
        set_field(noMaturityRules_2_2_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_556397021"}, MaturityRules_NoMaturityRules_60);
        all_values.push_back(MaturityRules_NoMaturityRules_60);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_2_1_2.addGroup(noMaturityRules_2_2_2_1);
      }
      noRelatedSym_0_2.addGroup(noStrikeRules_2_1_2);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_2_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_133;
      set_field(noUnderlyings_2_1_0, FIX::EncodedUnderlyingIssuer{"DATA_2092942299"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::EncodedUnderlyingIssuerLen{1048737527}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_605055957"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::EncodedUnderlyingSecurityDescLen{887363664}, UnderlyingInstrument_133);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_133;
      UnderlyingAdjustedQuantity_133.setString("11448029");
set_field(noUnderlyings_2_1_0, UnderlyingAdjustedQuantity_133, UnderlyingInstrument_133);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_133;
      UnderlyingAllocationPercent_133.setString("63.090000");
set_field(noUnderlyings_2_1_0, UnderlyingAllocationPercent_133, UnderlyingInstrument_133);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_133;
      UnderlyingAttachmentPoint_133.setString("16.170000");
set_field(noUnderlyings_2_1_0, UnderlyingAttachmentPoint_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCFICode{"STRING_390305308"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCPProgram{"STRING_877650573"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCPRegType{"STRING_1653485439"}, UnderlyingInstrument_133);
      FIX::UnderlyingCapValue UnderlyingCapValue_133;
      UnderlyingCapValue_133.setString("16979898");
set_field(noUnderlyings_2_1_0, UnderlyingCapValue_133, UnderlyingInstrument_133);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_133;
      UnderlyingCashAmount_133.setString("9424860");
set_field(noUnderlyings_2_1_0, UnderlyingCashAmount_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_133);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_133;
      UnderlyingContractMultiplier_133.setString("18216363");
set_field(noUnderlyings_2_1_0, UnderlyingContractMultiplier_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingContractMultiplierUnit{1045130710}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1753224047"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_575288658"}, UnderlyingInstrument_133);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_133;
      UnderlyingCouponRate_133.setString("80.700000");
set_field(noUnderlyings_2_1_0, UnderlyingCouponRate_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCreditRating{"STRING_533046992"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_133);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_133;
      UnderlyingCurrentValue_133.setString("14504825");
set_field(noUnderlyings_2_1_0, UnderlyingCurrentValue_133, UnderlyingInstrument_133);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_133;
      UnderlyingDetachmentPoint_133.setString("37.960000");
set_field(noUnderlyings_2_1_0, UnderlyingDetachmentPoint_133, UnderlyingInstrument_133);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_133;
      UnderlyingDirtyPrice_133.setString("17690373");
set_field(noUnderlyings_2_1_0, UnderlyingDirtyPrice_133, UnderlyingInstrument_133);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_133;
      UnderlyingEndPrice_133.setString("3944791");
set_field(noUnderlyings_2_1_0, UnderlyingEndPrice_133, UnderlyingInstrument_133);
      FIX::UnderlyingEndValue UnderlyingEndValue_133;
      UnderlyingEndValue_133.setString("20038072");
set_field(noUnderlyings_2_1_0, UnderlyingEndValue_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingExerciseStyle{931461704}, UnderlyingInstrument_133);
      FIX::UnderlyingFXRate UnderlyingFXRate_133;
      UnderlyingFXRate_133.setString("11891903");
set_field(noUnderlyings_2_1_0, UnderlyingFXRate_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_133);
      FIX::UnderlyingFactor UnderlyingFactor_133;
      UnderlyingFactor_133.setString("14878587");
set_field(noUnderlyings_2_1_0, UnderlyingFactor_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingFlowScheduleType{349088274}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingInstrRegistry{"STRING_1860407508"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_389112604"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingIssuer{"STRING_954144232"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_600287524"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1533915539"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1350100541"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1378969141"}, UnderlyingInstrument_133);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_133;
      UnderlyingNotionalPercentageOutstanding_133.setString("8.480000");
set_field(noUnderlyings_2_1_0, UnderlyingNotionalPercentageOutstanding_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_133);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_133;
      UnderlyingOriginalNotionalPercentageOutstanding_133.setString("9.320000");
set_field(noUnderlyings_2_1_0, UnderlyingOriginalNotionalPercentageOutstanding_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1474727066"}, UnderlyingInstrument_133);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_133;
      UnderlyingPriceUnitOfMeasureQty_133.setString("10227535");
set_field(noUnderlyings_2_1_0, UnderlyingPriceUnitOfMeasureQty_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingProduct{65540370}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingPutOrCall{1148879739}, UnderlyingInstrument_133);
      FIX::UnderlyingPx UnderlyingPx_133;
      UnderlyingPx_133.setString("20678842");
set_field(noUnderlyings_2_1_0, UnderlyingPx_133, UnderlyingInstrument_133);
      FIX::UnderlyingQty UnderlyingQty_133;
      UnderlyingQty_133.setString("18187644");
set_field(noUnderlyings_2_1_0, UnderlyingQty_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1724168397"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_357328654"}, UnderlyingInstrument_133);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_133;
      UnderlyingRepurchaseRate_133.setString("77.620000");
set_field(noUnderlyings_2_1_0, UnderlyingRepurchaseRate_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingRepurchaseTerm{190203401}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingRestructuringType{"STRING_354451711"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSecurityDesc{"STRING_1654810333"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1600907197"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSecurityID{"STRING_2123489055"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSecurityIDSource{"STRING_2049289436"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSecuritySubType{"STRING_1457230835"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSecurityType{"STRING_907467111"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSeniority{"STRING_1090996164"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSettlMethod{"STRING_1224696044"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_133);
      FIX::UnderlyingStartValue UnderlyingStartValue_133;
      UnderlyingStartValue_133.setString("14400844");
set_field(noUnderlyings_2_1_0, UnderlyingStartValue_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_937619904"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_133);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_133;
      UnderlyingStrikePrice_133.setString("15379074");
set_field(noUnderlyings_2_1_0, UnderlyingStrikePrice_133, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSymbol{"STRING_23386684"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingSymbolSfx{"STRING_1596845564"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingTimeUnit{"STRING_769392922"}, UnderlyingInstrument_133);
      set_field(noUnderlyings_2_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1947607532"}, UnderlyingInstrument_133);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_133;
      UnderlyingUnitOfMeasureQty_133.setString("16771130");
set_field(noUnderlyings_2_1_0, UnderlyingUnitOfMeasureQty_133, UnderlyingInstrument_133);
      all_values.push_back(UnderlyingInstrument_133);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_275;
        set_field(noUnderlyingSecurityAltID_2_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1274850950"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_275);
        set_field(noUnderlyingSecurityAltID_2_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_552382905"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_275);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_275);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_276;
        set_field(noUnderlyingSecurityAltID_2_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_1719904225"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_276);
        set_field(noUnderlyingSecurityAltID_2_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_276247041"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_276);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_276);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_270;
        set_field(noUnderlyingStips_2_0_2_0, FIX::UnderlyingStipType{"STRING_1391184995"}, UnderlyingStipulations_NoUnderlyingStips_270);
        set_field(noUnderlyingStips_2_0_2_0, FIX::UnderlyingStipValue{"STRING_2000415439"}, UnderlyingStipulations_NoUnderlyingStips_270);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_270);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_271;
        set_field(noUnderlyingStips_2_0_2_1, FIX::UnderlyingStipType{"STRING_830112144"}, UnderlyingStipulations_NoUnderlyingStips_271);
        set_field(noUnderlyingStips_2_0_2_1, FIX::UnderlyingStipValue{"STRING_1595512758"}, UnderlyingStipulations_NoUnderlyingStips_271);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_271);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_282;
        set_field(noUndlyInstrumentParties_2_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1184563855"}, UndlyInstrumentParties_NoUndlyInstrumentParties_282);
        set_field(noUndlyInstrumentParties_2_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_282);
        set_field(noUndlyInstrumentParties_2_0_2_0, FIX::UnderlyingInstrumentPartyRole{1644042390}, UndlyInstrumentParties_NoUndlyInstrumentParties_282);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_282);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564;
          set_field(noUndlyInstrumentPartySubIDs_2_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1004645232"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564);
          set_field(noUndlyInstrumentPartySubIDs_2_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{953789577}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_564);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565;
          set_field(noUndlyInstrumentPartySubIDs_2_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2068036374"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565);
          set_field(noUndlyInstrumentPartySubIDs_2_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{2095641396}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_565);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566;
          set_field(noUndlyInstrumentPartySubIDs_2_0_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_31001974"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566);
          set_field(noUndlyInstrumentPartySubIDs_2_0_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{168394914}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_566);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_2);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_283;
        set_field(noUndlyInstrumentParties_2_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1388242186"}, UndlyInstrumentParties_NoUndlyInstrumentParties_283);
        set_field(noUndlyInstrumentParties_2_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_283);
        set_field(noUndlyInstrumentParties_2_0_2_1, FIX::UnderlyingInstrumentPartyRole{805349707}, UndlyInstrumentParties_NoUndlyInstrumentParties_283);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_283);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567;
          set_field(noUndlyInstrumentPartySubIDs_2_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_359045659"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567);
          set_field(noUndlyInstrumentPartySubIDs_2_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{828736392}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_567);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568;
          set_field(noUndlyInstrumentPartySubIDs_2_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1084349125"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568);
          set_field(noUndlyInstrumentPartySubIDs_2_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{1128438582}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_568);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_2_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_2_0_1_3_1);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noUnderlyings_2_1_0);
    }
    // YieldData
    multiset<string> YieldData_31;
    FIX::Yield Yield_31;
    Yield_31.setString("2.760000");
set_field(noRelatedSym_0_2, Yield_31, YieldData_31);
    set_field(noRelatedSym_0_2, FIX::YieldCalcDate{"LOCALMKTDATE_613978507"}, YieldData_31);
    set_field(noRelatedSym_0_2, FIX::YieldRedemptionDate{"LOCALMKTDATE_635318789"}, YieldData_31);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_31;
    YieldRedemptionPrice_31.setString("19037112");
set_field(noRelatedSym_0_2, YieldRedemptionPrice_31, YieldData_31);
    set_field(noRelatedSym_0_2, FIX::YieldRedemptionPriceType{1166361412}, YieldData_31);
    set_field(noRelatedSym_0_2, FIX::YieldType{"STRING_INFLATION"}, YieldData_31);
    all_values.push_back(YieldData_31);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_2);
  }
  // header
  multiset<string> header_85;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_0"}, header_85);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1639144902"}, header_85);
  set_header_field(msg.getHeader(), FIX::BodyLength{1598924362}, header_85);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_2032890059"}, header_85);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_321773398"}, header_85);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1046953472"}, header_85);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_2076025252"}, header_85);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1506337253}, header_85);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_85);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1572583994}, header_85);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_519422867"}, header_85);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1006954499"}, header_85);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_378889923"}, header_85);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(15, 37, 28, 6, 1, 2017)}, header_85);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_85);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_85);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_94972959"}, header_85);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{767723472}, header_85);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_718514369"}, header_85);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_723833236"}, header_85);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1381701979"}, header_85);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(23, 4, 45, 27, 11, 2005)}, header_85);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_397941847"}, header_85);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_214014396"}, header_85);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_2059966711"}, header_85);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_326483451"}, header_85);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1720351649}, header_85);
  all_values.push_back(header_85);
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
