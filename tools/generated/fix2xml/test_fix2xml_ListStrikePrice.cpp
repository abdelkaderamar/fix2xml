#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListStrikePrice.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListStrikePrice, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::ListStrikePrice msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStrikePrice_0;
  set_field(msg, FIX::LastFragment{false}, ListStrikePrice_0);
  set_field(msg, FIX::ListID{"STRING_1803756308"}, ListStrikePrice_0);
  set_field(msg, FIX::TotNoStrikes{1734194797}, ListStrikePrice_0);
  all_values.push_back(ListStrikePrice_0);

  all_compo_names.insert("ListStrikePrice");

  // InstrmtStrkPxGrp
  // Group InstrmtStrkPxGrp.NoStrikes
  {
    FIX50SP2::ListStrikePrice::NoStrikes noStrikes_0_0;
    // InstrmtStrkPxGrp.NoStrikes
    multiset<string> InstrmtStrkPxGrp_NoStrikes_0;
    set_field(noStrikes_0_0, FIX::ClOrdID{"STRING_1990081958"}, InstrmtStrkPxGrp_NoStrikes_0);
    set_field(noStrikes_0_0, FIX::Currency{"CAN"}, InstrmtStrkPxGrp_NoStrikes_0);
    set_field(noStrikes_0_0, FIX::EncodedText{"DATA_266142978"}, InstrmtStrkPxGrp_NoStrikes_0);
    set_field(noStrikes_0_0, FIX::EncodedTextLen{221798326}, InstrmtStrkPxGrp_NoStrikes_0);
    FIX::PrevClosePx PrevClosePx_1;
    PrevClosePx_1.setString("10152298");
set_field(noStrikes_0_0, PrevClosePx_1, InstrmtStrkPxGrp_NoStrikes_0);
    FIX::Price Price_11;
    Price_11.setString("2117005");
set_field(noStrikes_0_0, Price_11, InstrmtStrkPxGrp_NoStrikes_0);
    set_field(noStrikes_0_0, FIX::SecondaryClOrdID{"STRING_1938323457"}, InstrmtStrkPxGrp_NoStrikes_0);
    set_field(noStrikes_0_0, FIX::Side{'8'}, InstrmtStrkPxGrp_NoStrikes_0);
    set_field(noStrikes_0_0, FIX::Text{"STRING_1311885593"}, InstrmtStrkPxGrp_NoStrikes_0);
    all_values.push_back(InstrmtStrkPxGrp_NoStrikes_0);
    all_compo_names.insert("...NoStrikes");

    // Instrument
    multiset<string> Instrument_28;
    FIX::AttachmentPoint AttachmentPoint_28;
    AttachmentPoint_28.setString("51.660000");
set_field(noStrikes_0_0, AttachmentPoint_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::CFICode{"STRING_1521911687"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::CPProgram{2}, Instrument_28);
    set_field(noStrikes_0_0, FIX::CPRegType{"STRING_1721631716"}, Instrument_28);
    FIX::CapPrice CapPrice_28;
    CapPrice_28.setString("2906932");
set_field(noStrikes_0_0, CapPrice_28, Instrument_28);
    FIX::ContractMultiplier ContractMultiplier_28;
    ContractMultiplier_28.setString("15892234");
set_field(noStrikes_0_0, ContractMultiplier_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::ContractMultiplierUnit{1}, Instrument_28);
    set_field(noStrikes_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1262599288"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::CountryOfIssue{"COUNTRY_167520393"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1448363917"}, Instrument_28);
    FIX::CouponRate CouponRate_28;
    CouponRate_28.setString("37.380000");
set_field(noStrikes_0_0, CouponRate_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::CreditRating{"STRING_520468876"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::DatedDate{"LOCALMKTDATE_1476802051"}, Instrument_28);
    FIX::DetachmentPoint DetachmentPoint_28;
    DetachmentPoint_28.setString("91.890000");
set_field(noStrikes_0_0, DetachmentPoint_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::EncodedIssuer{"DATA_705711500"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::EncodedIssuerLen{253623361}, Instrument_28);
    set_field(noStrikes_0_0, FIX::EncodedSecurityDesc{"DATA_1931834733"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::EncodedSecurityDescLen{1487434997}, Instrument_28);
    set_field(noStrikes_0_0, FIX::ExerciseStyle{0}, Instrument_28);
    FIX::Factor Factor_28;
    Factor_28.setString("15185458");
set_field(noStrikes_0_0, Factor_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_28);
    set_field(noStrikes_0_0, FIX::FlexibleIndicator{true}, Instrument_28);
    FIX::FloorPrice FloorPrice_28;
    FloorPrice_28.setString("4520552");
set_field(noStrikes_0_0, FloorPrice_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::FlowScheduleType{1}, Instrument_28);
    set_field(noStrikes_0_0, FIX::InstrRegistry{"STRING_18637310"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::InstrmtAssignmentMethod{'6'}, Instrument_28);
    set_field(noStrikes_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_2045045060"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::IssueDate{"LOCALMKTDATE_230337904"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::Issuer{"STRING_464693403"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::ListMethod{1}, Instrument_28);
    set_field(noStrikes_0_0, FIX::LocaleOfIssue{"STRING_1542223497"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::MaturityDate{"LOCALMKTDATE_438004921"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::MaturityMonthYear{"MONTHYEAR_606276754"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::MaturityTime{"TZTIMEONLY_1590451879"}, Instrument_28);
    FIX::MinPriceIncrement MinPriceIncrement_28;
    MinPriceIncrement_28.setString("121529");
set_field(noStrikes_0_0, MinPriceIncrement_28, Instrument_28);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_28;
    MinPriceIncrementAmount_28.setString("8969700");
set_field(noStrikes_0_0, MinPriceIncrementAmount_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::NTPositionLimit{1032191641}, Instrument_28);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_28;
    NotionalPercentageOutstanding_28.setString("49.600000");
set_field(noStrikes_0_0, NotionalPercentageOutstanding_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::OptAttribute{'1'}, Instrument_28);
    FIX::OptPayoutAmount OptPayoutAmount_28;
    OptPayoutAmount_28.setString("11997120");
set_field(noStrikes_0_0, OptPayoutAmount_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::OptPayoutType{2}, Instrument_28);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_28;
    OriginalNotionalPercentageOutstanding_28.setString("93.840000");
set_field(noStrikes_0_0, OriginalNotionalPercentageOutstanding_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::Pool{"STRING_1720180911"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::PositionLimit{1747357280}, Instrument_28);
    set_field(noStrikes_0_0, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::PriceUnitOfMeasure{"STRING_278408763"}, Instrument_28);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_28;
    PriceUnitOfMeasureQty_28.setString("20009806");
set_field(noStrikes_0_0, PriceUnitOfMeasureQty_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::Product{4}, Instrument_28);
    set_field(noStrikes_0_0, FIX::ProductComplex{"STRING_1765843760"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::PutOrCall{1}, Instrument_28);
    set_field(noStrikes_0_0, FIX::RedemptionDate{"LOCALMKTDATE_1789251892"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::RepoCollateralSecurityType{"STRING_1795506320"}, Instrument_28);
    FIX::RepurchaseRate RepurchaseRate_28;
    RepurchaseRate_28.setString("9.950000");
set_field(noStrikes_0_0, RepurchaseRate_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::RepurchaseTerm{93823512}, Instrument_28);
    set_field(noStrikes_0_0, FIX::RestructuringType{"STRING_MM"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::SecurityDesc{"STRING_1682008305"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::SecurityExchange{"EXCHANGE_767677106"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::SecurityGroup{"STRING_575399286"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::SecurityID{"STRING_1912346209"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::SecurityIDSource{"STRING_8"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::SecuritySubType{"STRING_1307086058"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::SecurityType{"STRING_FXFWD"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::Seniority{"STRING_SD"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::SettlMethod{'C'}, Instrument_28);
    set_field(noStrikes_0_0, FIX::SettleOnOpenFlag{"STRING_1682528420"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::StateOrProvinceOfIssue{"STRING_1163011112"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::StrikeCurrency{"GBP"}, Instrument_28);
    FIX::StrikeMultiplier StrikeMultiplier_28;
    StrikeMultiplier_28.setString("11750967");
set_field(noStrikes_0_0, StrikeMultiplier_28, Instrument_28);
    FIX::StrikePrice StrikePrice_28;
    StrikePrice_28.setString("8344743");
set_field(noStrikes_0_0, StrikePrice_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::StrikePriceBoundaryMethod{3}, Instrument_28);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_28;
    StrikePriceBoundaryPrecision_28.setString("24.940000");
set_field(noStrikes_0_0, StrikePriceBoundaryPrecision_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::StrikePriceDeterminationMethod{3}, Instrument_28);
    FIX::StrikeValue StrikeValue_28;
    StrikeValue_28.setString("3751485");
set_field(noStrikes_0_0, StrikeValue_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::Symbol{"STRING_826417419"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::TimeUnit{"STRING_D"}, Instrument_28);
    set_field(noStrikes_0_0, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_28);
    set_field(noStrikes_0_0, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_28);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_28;
    UnitOfMeasureQty_28.setString("21395222");
set_field(noStrikes_0_0, UnitOfMeasureQty_28, Instrument_28);
    set_field(noStrikes_0_0, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_28);
    all_values.push_back(Instrument_28);
    all_compo_names.insert("...NoStrikes.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_51;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_51);
      FIX::ComplexEventPrice ComplexEventPrice_51;
      ComplexEventPrice_51.setString("8327151");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_51, ComplexEvents_NoComplexEvents_51);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_51);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_51;
      ComplexEventPriceBoundaryPrecision_51.setString("42.550000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_51, ComplexEvents_NoComplexEvents_51);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_51);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_51);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_51;
      ComplexOptPayoutAmount_51.setString("9547968");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_51, ComplexEvents_NoComplexEvents_51);
      all_values.push_back(ComplexEvents_NoComplexEvents_51);
      all_compo_names.insert("...NoStrikes....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_101;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 37, 50, 25, 10, 2003)}, ComplexEventDates_NoComplexEventDates_101);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 13, 39, 19, 5, 2017)}, ComplexEventDates_NoComplexEventDates_101);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_101);
        all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_214;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 6, 29)}, ComplexEventTimes_NoComplexEventTimes_214);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 35, 27)}, ComplexEventTimes_NoComplexEventTimes_214);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_214);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_102;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 52, 26, 10, 3, 2013)}, ComplexEventDates_NoComplexEventDates_102);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 31, 38, 4, 9, 2015)}, ComplexEventDates_NoComplexEventDates_102);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_102);
        all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_215;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 49, 1)}, ComplexEventTimes_NoComplexEventTimes_215);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 34, 42)}, ComplexEventTimes_NoComplexEventTimes_215);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_215);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_216;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 40, 29)}, ComplexEventTimes_NoComplexEventTimes_216);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 4, 30)}, ComplexEventTimes_NoComplexEventTimes_216);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_216);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_217;
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 22, 6)}, ComplexEventTimes_NoComplexEventTimes_217);
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 42, 45)}, ComplexEventTimes_NoComplexEventTimes_217);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_217);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_103;
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 23, 27, 5, 7, 2002)}, ComplexEventDates_NoComplexEventDates_103);
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 43, 28, 27, 5, 2006)}, ComplexEventDates_NoComplexEventDates_103);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_103);
        all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_218;
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 1, 22)}, ComplexEventTimes_NoComplexEventTimes_218);
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 19, 32)}, ComplexEventTimes_NoComplexEventTimes_218);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_218);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_219;
          set_field(noComplexEventTimes_0_0_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 46, 20)}, ComplexEventTimes_NoComplexEventTimes_219);
          set_field(noComplexEventTimes_0_0_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 54, 47)}, ComplexEventTimes_NoComplexEventTimes_219);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_219);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_220;
          set_field(noComplexEventTimes_0_0_2_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 10, 40)}, ComplexEventTimes_NoComplexEventTimes_220);
          set_field(noComplexEventTimes_0_0_2_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 43, 40)}, ComplexEventTimes_NoComplexEventTimes_220);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_220);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noStrikes_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_52;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_52);
      FIX::ComplexEventPrice ComplexEventPrice_52;
      ComplexEventPrice_52.setString("5577201");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_52, ComplexEvents_NoComplexEvents_52);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_52);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_52;
      ComplexEventPriceBoundaryPrecision_52.setString("23.350000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_52, ComplexEvents_NoComplexEvents_52);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_52);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_52);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_52;
      ComplexOptPayoutAmount_52.setString("17015445");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_52, ComplexEvents_NoComplexEvents_52);
      all_values.push_back(ComplexEvents_NoComplexEvents_52);
      all_compo_names.insert("...NoStrikes....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_104;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 10, 41, 3, 6, 2013)}, ComplexEventDates_NoComplexEventDates_104);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 52, 33, 16, 8, 2002)}, ComplexEventDates_NoComplexEventDates_104);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_104);
        all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_221;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 45, 53)}, ComplexEventTimes_NoComplexEventTimes_221);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 28, 4)}, ComplexEventTimes_NoComplexEventTimes_221);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_221);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_222;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 56, 25)}, ComplexEventTimes_NoComplexEventTimes_222);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 41, 45)}, ComplexEventTimes_NoComplexEventTimes_222);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_222);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_105;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 48, 54, 5, 6, 2000)}, ComplexEventDates_NoComplexEventDates_105);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 52, 36, 4, 4, 2014)}, ComplexEventDates_NoComplexEventDates_105);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_105);
        all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_223;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 4, 56)}, ComplexEventTimes_NoComplexEventTimes_223);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 24, 36)}, ComplexEventTimes_NoComplexEventTimes_223);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_223);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_106;
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 25, 15, 8, 1, 2014)}, ComplexEventDates_NoComplexEventDates_106);
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 55, 18, 0, 9, 2003)}, ComplexEventDates_NoComplexEventDates_106);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_106);
        all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_224;
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 44, 31)}, ComplexEventTimes_NoComplexEventTimes_224);
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 19, 42)}, ComplexEventTimes_NoComplexEventTimes_224);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_224);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noStrikes_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_53;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_53);
      FIX::ComplexEventPrice ComplexEventPrice_53;
      ComplexEventPrice_53.setString("20864325");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_53, ComplexEvents_NoComplexEvents_53);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_53);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_53;
      ComplexEventPriceBoundaryPrecision_53.setString("39.390000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_53, ComplexEvents_NoComplexEvents_53);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_53);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_53);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_53;
      ComplexOptPayoutAmount_53.setString("19473134");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_53, ComplexEvents_NoComplexEvents_53);
      all_values.push_back(ComplexEvents_NoComplexEvents_53);
      all_compo_names.insert("...NoStrikes....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_107;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 0, 10, 27, 5, 2013)}, ComplexEventDates_NoComplexEventDates_107);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 54, 11, 5, 3, 2014)}, ComplexEventDates_NoComplexEventDates_107);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_107);
        all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_225;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 33, 48)}, ComplexEventTimes_NoComplexEventTimes_225);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 7, 52)}, ComplexEventTimes_NoComplexEventTimes_225);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_225);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_226;
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 39, 42)}, ComplexEventTimes_NoComplexEventTimes_226);
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 17, 7)}, ComplexEventTimes_NoComplexEventTimes_226);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_226);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_108;
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 7, 43, 15, 12, 2014)}, ComplexEventDates_NoComplexEventDates_108);
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 36, 23, 26, 7, 2017)}, ComplexEventDates_NoComplexEventDates_108);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_108);
        all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_227;
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 1, 20)}, ComplexEventTimes_NoComplexEventTimes_227);
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 20, 57)}, ComplexEventTimes_NoComplexEventTimes_227);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_227);
          all_compo_names.insert("...NoStrikes....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      noStrikes_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_62;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_170992846"}, EvntGrp_NoEvents_62);
      FIX::EventPx EventPx_62;
      EventPx_62.setString("5477523");
set_field(noEvents_0_1_0, EventPx_62, EvntGrp_NoEvents_62);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_2042058411"}, EvntGrp_NoEvents_62);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(17, 0, 26, 1, 1, 2009)}, EvntGrp_NoEvents_62);
      set_field(noEvents_0_1_0, FIX::EventType{1}, EvntGrp_NoEvents_62);
      all_values.push_back(EvntGrp_NoEvents_62);
      all_compo_names.insert("...NoStrikes....NoEvents");

      noStrikes_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_52;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_979526785"}, InstrumentParties_NoInstrumentParties_52);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_52);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{93546191}, InstrumentParties_NoInstrumentParties_52);
      all_values.push_back(InstrumentParties_NoInstrumentParties_52);
      all_compo_names.insert("...NoStrikes....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_618673838"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1875791374}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_106);
        all_compo_names.insert("...NoStrikes....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_726702960"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{747402465}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_107);
        all_compo_names.insert("...NoStrikes....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108;
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubID{"STRING_742456400"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108);
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubIDType{1841838036}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_108);
        all_compo_names.insert("...NoStrikes....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noStrikes_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_53;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_1505019737"}, InstrumentParties_NoInstrumentParties_53);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_53);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{508932930}, InstrumentParties_NoInstrumentParties_53);
      all_values.push_back(InstrumentParties_NoInstrumentParties_53);
      all_compo_names.insert("...NoStrikes....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_1090264752"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{1430777364}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_109);
        all_compo_names.insert("...NoStrikes....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110;
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubID{"STRING_1537542589"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110);
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubIDType{1984186989}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110);
        all_compo_names.insert("...NoStrikes....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111;
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubID{"STRING_1627389993"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111);
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubIDType{1708535435}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111);
        all_compo_names.insert("...NoStrikes....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noStrikes_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_59;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_1521964756"}, SecAltIDGrp_NoSecurityAltID_59);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_122501386"}, SecAltIDGrp_NoSecurityAltID_59);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_59);
      all_compo_names.insert("...NoStrikes....NoSecurityAltID");

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_60;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_886270594"}, SecAltIDGrp_NoSecurityAltID_60);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_914331488"}, SecAltIDGrp_NoSecurityAltID_60);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_60);
      all_compo_names.insert("...NoStrikes....NoSecurityAltID");

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_61;
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltID{"STRING_982962552"}, SecAltIDGrp_NoSecurityAltID_61);
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltIDSource{"STRING_1096348212"}, SecAltIDGrp_NoSecurityAltID_61);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_61);
      all_compo_names.insert("...NoStrikes....NoSecurityAltID");

      noStrikes_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_56;
    set_field(noStrikes_0_0, FIX::SecurityXML{"XMLDATA_1954587657"}, SecurityXML_56);
    set_field(noStrikes_0_0, FIX::SecurityXMLLen{717076297}, SecurityXML_56);
    set_field(noStrikes_0_0, FIX::SecurityXMLSchema{"STRING_1367944412"}, SecurityXML_56);
    all_values.push_back(SecurityXML_56);
    all_compo_names.insert("...NoStrikes..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_38;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1696603082"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{1205035475}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1574153348"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{1979536396}, UnderlyingInstrument_38);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_38;
      UnderlyingAdjustedQuantity_38.setString("18237093");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_38, UnderlyingInstrument_38);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_38;
      UnderlyingAllocationPercent_38.setString("10.740000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_38, UnderlyingInstrument_38);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_38;
      UnderlyingAttachmentPoint_38.setString("57.090000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_423628130"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_2044917474"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_253110097"}, UnderlyingInstrument_38);
      FIX::UnderlyingCapValue UnderlyingCapValue_38;
      UnderlyingCapValue_38.setString("19286478");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_38, UnderlyingInstrument_38);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_38;
      UnderlyingCashAmount_38.setString("2500904");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_38);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_38;
      UnderlyingContractMultiplier_38.setString("5146899");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{1340355246}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_45336743"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2052232578"}, UnderlyingInstrument_38);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_38;
      UnderlyingCouponRate_38.setString("85.880000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_1672726736"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_38);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_38;
      UnderlyingCurrentValue_38.setString("10472078");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_38, UnderlyingInstrument_38);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_38;
      UnderlyingDetachmentPoint_38.setString("57.520000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_38, UnderlyingInstrument_38);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_38;
      UnderlyingDirtyPrice_38.setString("3003012");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_38, UnderlyingInstrument_38);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_38;
      UnderlyingEndPrice_38.setString("19615393");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_38, UnderlyingInstrument_38);
      FIX::UnderlyingEndValue UnderlyingEndValue_38;
      UnderlyingEndValue_38.setString("5712646");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{1396649476}, UnderlyingInstrument_38);
      FIX::UnderlyingFXRate UnderlyingFXRate_38;
      UnderlyingFXRate_38.setString("17686433");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_38);
      FIX::UnderlyingFactor UnderlyingFactor_38;
      UnderlyingFactor_38.setString("6171102");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{1101766850}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_837460388"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1822145715"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_528436550"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_669513136"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1498371381"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1830897625"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1228268845"}, UnderlyingInstrument_38);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_38;
      UnderlyingNotionalPercentageOutstanding_38.setString("95.110000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_38);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_38;
      UnderlyingOriginalNotionalPercentageOutstanding_38.setString("89.430000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1703163731"}, UnderlyingInstrument_38);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_38;
      UnderlyingPriceUnitOfMeasureQty_38.setString("19784219");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{95938322}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{70370072}, UnderlyingInstrument_38);
      FIX::UnderlyingPx UnderlyingPx_38;
      UnderlyingPx_38.setString("11712935");
set_field(noUnderlyings_0_1_0, UnderlyingPx_38, UnderlyingInstrument_38);
      FIX::UnderlyingQty UnderlyingQty_38;
      UnderlyingQty_38.setString("1412750");
set_field(noUnderlyings_0_1_0, UnderlyingQty_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2122602650"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_200868484"}, UnderlyingInstrument_38);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_38;
      UnderlyingRepurchaseRate_38.setString("18.020000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{1588403368}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_1762382801"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_713725999"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1176705472"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_2062684065"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_527781684"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_1747970128"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_1311849893"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_148941378"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_888827434"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_38);
      FIX::UnderlyingStartValue UnderlyingStartValue_38;
      UnderlyingStartValue_38.setString("12507082");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1726287822"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_38);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_38;
      UnderlyingStrikePrice_38.setString("2483173");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_38, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_954509934"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_1462558756"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_1476586156"}, UnderlyingInstrument_38);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_729025798"}, UnderlyingInstrument_38);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_38;
      UnderlyingUnitOfMeasureQty_38.setString("10434065");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_38, UnderlyingInstrument_38);
      all_values.push_back(UnderlyingInstrument_38);
      all_compo_names.insert("...NoStrikes...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_78;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_284705881"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_78);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_874344857"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_78);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_78);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_79;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_906419773"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_79);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_355075953"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_79);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_79);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_80;
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_2045638401"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_80);
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1047694839"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_80);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_80);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_71;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_99023237"}, UnderlyingStipulations_NoUnderlyingStips_71);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_714212994"}, UnderlyingStipulations_NoUnderlyingStips_71);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_71);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_82;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1861406038"}, UndlyInstrumentParties_NoUndlyInstrumentParties_82);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_82);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{947820148}, UndlyInstrumentParties_NoUndlyInstrumentParties_82);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_82);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1955720677"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{548306629}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_154);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_83;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_940972701"}, UndlyInstrumentParties_NoUndlyInstrumentParties_83);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_83);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{1437134063}, UndlyInstrumentParties_NoUndlyInstrumentParties_83);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_83);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1207886635"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1015938237}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_155);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_178587741"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{839547766}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_156);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1264255547"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{1133097675}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_157);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_84;
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_154622874"}, UndlyInstrumentParties_NoUndlyInstrumentParties_84);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_84);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyRole{1862123473}, UndlyInstrumentParties_NoUndlyInstrumentParties_84);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_84);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1403839506"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{2146829354}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_158);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2072374291"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{162775632}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_159);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_354421659"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_2, FIX::UnderlyingInstrumentPartySubIDType{1970529044}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_160);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_39;
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1210470471"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuerLen{684616615}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_2069552281"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDescLen{1924683465}, UnderlyingInstrument_39);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_39;
      UnderlyingAdjustedQuantity_39.setString("4557312");
set_field(noUnderlyings_0_1_1, UnderlyingAdjustedQuantity_39, UnderlyingInstrument_39);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_39;
      UnderlyingAllocationPercent_39.setString("46.710000");
set_field(noUnderlyings_0_1_1, UnderlyingAllocationPercent_39, UnderlyingInstrument_39);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_39;
      UnderlyingAttachmentPoint_39.setString("88.100000");
set_field(noUnderlyings_0_1_1, UnderlyingAttachmentPoint_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCFICode{"STRING_1403551439"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPProgram{"STRING_1412597479"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPRegType{"STRING_1013375839"}, UnderlyingInstrument_39);
      FIX::UnderlyingCapValue UnderlyingCapValue_39;
      UnderlyingCapValue_39.setString("19518580");
set_field(noUnderlyings_0_1_1, UnderlyingCapValue_39, UnderlyingInstrument_39);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_39;
      UnderlyingCashAmount_39.setString("2060865");
set_field(noUnderlyings_0_1_1, UnderlyingCashAmount_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_39);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_39;
      UnderlyingContractMultiplier_39.setString("12415084");
set_field(noUnderlyings_0_1_1, UnderlyingContractMultiplier_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingContractMultiplierUnit{928535720}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_30957234"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_109963072"}, UnderlyingInstrument_39);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_39;
      UnderlyingCouponRate_39.setString("34.610000");
set_field(noUnderlyings_0_1_1, UnderlyingCouponRate_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCreditRating{"STRING_870505000"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_39);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_39;
      UnderlyingCurrentValue_39.setString("10251278");
set_field(noUnderlyings_0_1_1, UnderlyingCurrentValue_39, UnderlyingInstrument_39);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_39;
      UnderlyingDetachmentPoint_39.setString("66.750000");
set_field(noUnderlyings_0_1_1, UnderlyingDetachmentPoint_39, UnderlyingInstrument_39);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_39;
      UnderlyingDirtyPrice_39.setString("19548609");
set_field(noUnderlyings_0_1_1, UnderlyingDirtyPrice_39, UnderlyingInstrument_39);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_39;
      UnderlyingEndPrice_39.setString("756736");
set_field(noUnderlyings_0_1_1, UnderlyingEndPrice_39, UnderlyingInstrument_39);
      FIX::UnderlyingEndValue UnderlyingEndValue_39;
      UnderlyingEndValue_39.setString("12239325");
set_field(noUnderlyings_0_1_1, UnderlyingEndValue_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingExerciseStyle{1954206669}, UnderlyingInstrument_39);
      FIX::UnderlyingFXRate UnderlyingFXRate_39;
      UnderlyingFXRate_39.setString("5643");
set_field(noUnderlyings_0_1_1, UnderlyingFXRate_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_39);
      FIX::UnderlyingFactor UnderlyingFactor_39;
      UnderlyingFactor_39.setString("1611446");
set_field(noUnderlyings_0_1_1, UnderlyingFactor_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFlowScheduleType{1971093348}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingInstrRegistry{"STRING_449694989"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_845761295"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssuer{"STRING_1893161981"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_226894807"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1301492586"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1529153004"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1432033617"}, UnderlyingInstrument_39);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_39;
      UnderlyingNotionalPercentageOutstanding_39.setString("3.780000");
set_field(noUnderlyings_0_1_1, UnderlyingNotionalPercentageOutstanding_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingOptAttribute{'7'}, UnderlyingInstrument_39);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_39;
      UnderlyingOriginalNotionalPercentageOutstanding_39.setString("58.090000");
set_field(noUnderlyings_0_1_1, UnderlyingOriginalNotionalPercentageOutstanding_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_361934798"}, UnderlyingInstrument_39);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_39;
      UnderlyingPriceUnitOfMeasureQty_39.setString("10003533");
set_field(noUnderlyings_0_1_1, UnderlyingPriceUnitOfMeasureQty_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingProduct{1268480055}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPutOrCall{1603443282}, UnderlyingInstrument_39);
      FIX::UnderlyingPx UnderlyingPx_39;
      UnderlyingPx_39.setString("19288890");
set_field(noUnderlyings_0_1_1, UnderlyingPx_39, UnderlyingInstrument_39);
      FIX::UnderlyingQty UnderlyingQty_39;
      UnderlyingQty_39.setString("12994372");
set_field(noUnderlyings_0_1_1, UnderlyingQty_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1713406354"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_888528903"}, UnderlyingInstrument_39);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_39;
      UnderlyingRepurchaseRate_39.setString("86.420000");
set_field(noUnderlyings_0_1_1, UnderlyingRepurchaseRate_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepurchaseTerm{940141326}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRestructuringType{"STRING_981266392"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityDesc{"STRING_1047586517"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_760234354"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityID{"STRING_788643706"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityIDSource{"STRING_1123260178"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecuritySubType{"STRING_1984166888"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityType{"STRING_595366727"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSeniority{"STRING_1123824482"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlMethod{"STRING_1223391406"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_39);
      FIX::UnderlyingStartValue UnderlyingStartValue_39;
      UnderlyingStartValue_39.setString("9474341");
set_field(noUnderlyings_0_1_1, UnderlyingStartValue_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1673086395"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_39);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_39;
      UnderlyingStrikePrice_39.setString("18999812");
set_field(noUnderlyings_0_1_1, UnderlyingStrikePrice_39, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbol{"STRING_756281642"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbolSfx{"STRING_74781871"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingTimeUnit{"STRING_1184531172"}, UnderlyingInstrument_39);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_1313842020"}, UnderlyingInstrument_39);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_39;
      UnderlyingUnitOfMeasureQty_39.setString("8690487");
set_field(noUnderlyings_0_1_1, UnderlyingUnitOfMeasureQty_39, UnderlyingInstrument_39);
      all_values.push_back(UnderlyingInstrument_39);
      all_compo_names.insert("...NoStrikes...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_81;
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_1675776818"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_81);
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1869402076"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_81);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_81);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_72;
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipType{"STRING_1131736452"}, UnderlyingStipulations_NoUnderlyingStips_72);
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipValue{"STRING_1650807518"}, UnderlyingStipulations_NoUnderlyingStips_72);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_72);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_73;
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipType{"STRING_1902890678"}, UnderlyingStipulations_NoUnderlyingStips_73);
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipValue{"STRING_697659159"}, UnderlyingStipulations_NoUnderlyingStips_73);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_73);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_85;
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1925349320"}, UndlyInstrumentParties_NoUndlyInstrumentParties_85);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_85);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyRole{1373119165}, UndlyInstrumentParties_NoUndlyInstrumentParties_85);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_85);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_250551191"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{14279223}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_161);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1948712367"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{87234431}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_162);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_609645951"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{925053201}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_163);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_40;
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuer{"DATA_1310625837"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuerLen{1366157359}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1872487383"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDescLen{836228585}, UnderlyingInstrument_40);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_40;
      UnderlyingAdjustedQuantity_40.setString("8209464");
set_field(noUnderlyings_0_1_2, UnderlyingAdjustedQuantity_40, UnderlyingInstrument_40);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_40;
      UnderlyingAllocationPercent_40.setString("62.500000");
set_field(noUnderlyings_0_1_2, UnderlyingAllocationPercent_40, UnderlyingInstrument_40);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_40;
      UnderlyingAttachmentPoint_40.setString("61.390000");
set_field(noUnderlyings_0_1_2, UnderlyingAttachmentPoint_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCFICode{"STRING_1577228056"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPProgram{"STRING_492898121"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPRegType{"STRING_1773257311"}, UnderlyingInstrument_40);
      FIX::UnderlyingCapValue UnderlyingCapValue_40;
      UnderlyingCapValue_40.setString("7435864");
set_field(noUnderlyings_0_1_2, UnderlyingCapValue_40, UnderlyingInstrument_40);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_40;
      UnderlyingCashAmount_40.setString("13619468");
set_field(noUnderlyings_0_1_2, UnderlyingCashAmount_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_40);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_40;
      UnderlyingContractMultiplier_40.setString("2718795");
set_field(noUnderlyings_0_1_2, UnderlyingContractMultiplier_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingContractMultiplierUnit{1083865257}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1711684033"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1403616051"}, UnderlyingInstrument_40);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_40;
      UnderlyingCouponRate_40.setString("91.270000");
set_field(noUnderlyings_0_1_2, UnderlyingCouponRate_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCreditRating{"STRING_1467091063"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_40);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_40;
      UnderlyingCurrentValue_40.setString("12449567");
set_field(noUnderlyings_0_1_2, UnderlyingCurrentValue_40, UnderlyingInstrument_40);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_40;
      UnderlyingDetachmentPoint_40.setString("20.480000");
set_field(noUnderlyings_0_1_2, UnderlyingDetachmentPoint_40, UnderlyingInstrument_40);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_40;
      UnderlyingDirtyPrice_40.setString("2046774");
set_field(noUnderlyings_0_1_2, UnderlyingDirtyPrice_40, UnderlyingInstrument_40);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_40;
      UnderlyingEndPrice_40.setString("20704089");
set_field(noUnderlyings_0_1_2, UnderlyingEndPrice_40, UnderlyingInstrument_40);
      FIX::UnderlyingEndValue UnderlyingEndValue_40;
      UnderlyingEndValue_40.setString("18421432");
set_field(noUnderlyings_0_1_2, UnderlyingEndValue_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingExerciseStyle{218956641}, UnderlyingInstrument_40);
      FIX::UnderlyingFXRate UnderlyingFXRate_40;
      UnderlyingFXRate_40.setString("18716376");
set_field(noUnderlyings_0_1_2, UnderlyingFXRate_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_40);
      FIX::UnderlyingFactor UnderlyingFactor_40;
      UnderlyingFactor_40.setString("8286025");
set_field(noUnderlyings_0_1_2, UnderlyingFactor_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFlowScheduleType{649207196}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingInstrRegistry{"STRING_1092519860"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_47276303"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssuer{"STRING_374210931"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_1928748445"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_868222717"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_792327181"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_369990937"}, UnderlyingInstrument_40);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_40;
      UnderlyingNotionalPercentageOutstanding_40.setString("71.260000");
set_field(noUnderlyings_0_1_2, UnderlyingNotionalPercentageOutstanding_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_40);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_40;
      UnderlyingOriginalNotionalPercentageOutstanding_40.setString("82.480000");
set_field(noUnderlyings_0_1_2, UnderlyingOriginalNotionalPercentageOutstanding_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1041553554"}, UnderlyingInstrument_40);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_40;
      UnderlyingPriceUnitOfMeasureQty_40.setString("4996884");
set_field(noUnderlyings_0_1_2, UnderlyingPriceUnitOfMeasureQty_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingProduct{1103995245}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPutOrCall{1313433153}, UnderlyingInstrument_40);
      FIX::UnderlyingPx UnderlyingPx_40;
      UnderlyingPx_40.setString("15835537");
set_field(noUnderlyings_0_1_2, UnderlyingPx_40, UnderlyingInstrument_40);
      FIX::UnderlyingQty UnderlyingQty_40;
      UnderlyingQty_40.setString("6681956");
set_field(noUnderlyings_0_1_2, UnderlyingQty_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_569565557"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_23259220"}, UnderlyingInstrument_40);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_40;
      UnderlyingRepurchaseRate_40.setString("66.930000");
set_field(noUnderlyings_0_1_2, UnderlyingRepurchaseRate_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepurchaseTerm{523357119}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRestructuringType{"STRING_1002301121"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityDesc{"STRING_1232759780"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_2114949167"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityID{"STRING_1206978538"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityIDSource{"STRING_1155685056"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecuritySubType{"STRING_1809608759"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityType{"STRING_1425935179"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSeniority{"STRING_879839051"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlMethod{"STRING_1591502782"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_40);
      FIX::UnderlyingStartValue UnderlyingStartValue_40;
      UnderlyingStartValue_40.setString("15290462");
set_field(noUnderlyings_0_1_2, UnderlyingStartValue_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_536538994"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_40);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_40;
      UnderlyingStrikePrice_40.setString("3178037");
set_field(noUnderlyings_0_1_2, UnderlyingStrikePrice_40, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbol{"STRING_1022553144"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbolSfx{"STRING_548100711"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingTimeUnit{"STRING_687794729"}, UnderlyingInstrument_40);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_1320520270"}, UnderlyingInstrument_40);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_40;
      UnderlyingUnitOfMeasureQty_40.setString("18333260");
set_field(noUnderlyings_0_1_2, UnderlyingUnitOfMeasureQty_40, UnderlyingInstrument_40);
      all_values.push_back(UnderlyingInstrument_40);
      all_compo_names.insert("...NoStrikes...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_82;
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_214590176"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_82);
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_185530849"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_82);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_82);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_83;
        set_field(noUnderlyingSecurityAltID_0_2_2_1, FIX::UnderlyingSecurityAltID{"STRING_1787554574"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_83);
        set_field(noUnderlyingSecurityAltID_0_2_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1528023330"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_83);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_83);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_84;
        set_field(noUnderlyingSecurityAltID_0_2_2_2, FIX::UnderlyingSecurityAltID{"STRING_1769084590"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_84);
        set_field(noUnderlyingSecurityAltID_0_2_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_308266556"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_84);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_84);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_74;
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipType{"STRING_1792343810"}, UnderlyingStipulations_NoUnderlyingStips_74);
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipValue{"STRING_296069601"}, UnderlyingStipulations_NoUnderlyingStips_74);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_74);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_75;
        set_field(noUnderlyingStips_0_2_2_1, FIX::UnderlyingStipType{"STRING_473462358"}, UnderlyingStipulations_NoUnderlyingStips_75);
        set_field(noUnderlyingStips_0_2_2_1, FIX::UnderlyingStipValue{"STRING_647161283"}, UnderlyingStipulations_NoUnderlyingStips_75);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_75);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_1);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_76;
        set_field(noUnderlyingStips_0_2_2_2, FIX::UnderlyingStipType{"STRING_1528829381"}, UnderlyingStipulations_NoUnderlyingStips_76);
        set_field(noUnderlyingStips_0_2_2_2, FIX::UnderlyingStipValue{"STRING_440927878"}, UnderlyingStipulations_NoUnderlyingStips_76);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_76);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_86;
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_537030789"}, UndlyInstrumentParties_NoUndlyInstrumentParties_86);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_86);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyRole{1132591353}, UndlyInstrumentParties_NoUndlyInstrumentParties_86);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_86);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1694555771"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1239645477}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_164);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_798432439"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{83611117}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_165);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1393975903"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{554205969}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_166);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_2);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_87;
        set_field(noUndlyInstrumentParties_0_2_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_401414909"}, UndlyInstrumentParties_NoUndlyInstrumentParties_87);
        set_field(noUndlyInstrumentParties_0_2_2_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_87);
        set_field(noUndlyInstrumentParties_0_2_2_1, FIX::UnderlyingInstrumentPartyRole{1102306680}, UndlyInstrumentParties_NoUndlyInstrumentParties_87);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_87);
        all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167;
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1589565669"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167);
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{788149046}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_167);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::ListStrikePrice::NoStrikes::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168;
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1772768968"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168);
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{1804155846}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_168);
          all_compo_names.insert("...NoStrikes...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_1);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_1);
      }
      noStrikes_0_0.addGroup(noUnderlyings_0_1_2);
    }
    msg.addGroup(noStrikes_0_0);
  }
  // header
  multiset<string> header_38;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_5"}, header_38);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1412839894"}, header_38);
  set_header_field(msg.getHeader(), FIX::BodyLength{1184695528}, header_38);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_595280837"}, header_38);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1721106451"}, header_38);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1134800767"}, header_38);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_240140999"}, header_38);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{2017176052}, header_38);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_38);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{887302283}, header_38);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1398521786"}, header_38);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2049191003"}, header_38);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_593958457"}, header_38);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(16, 10, 48, 7, 12, 2007)}, header_38);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_38);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_38);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_410093529"}, header_38);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{36858494}, header_38);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_334249294"}, header_38);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1512400209"}, header_38);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1126068133"}, header_38);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(15, 33, 42, 22, 12, 2008)}, header_38);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1722026339"}, header_38);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1737816150"}, header_38);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1752499809"}, header_38);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1962167339"}, header_38);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1607508555}, header_38);
  all_values.push_back(header_38);
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
