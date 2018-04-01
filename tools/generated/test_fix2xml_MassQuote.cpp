#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MassQuote.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MassQuote, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MassQuote msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MassQuote_0;
  set_field(msg, FIX::Account{"STRING_1952516784"}, MassQuote_0);
  set_field(msg, FIX::AccountType{4}, MassQuote_0);
  set_field(msg, FIX::AcctIDSource{3}, MassQuote_0);
  FIX::DefBidSize DefBidSize_0;
  DefBidSize_0.setString("9237324");
set_field(msg, DefBidSize_0, MassQuote_0);
  FIX::DefOfferSize DefOfferSize_0;
  DefOfferSize_0.setString("6644600");
set_field(msg, DefOfferSize_0, MassQuote_0);
  set_field(msg, FIX::QuoteID{"STRING_467746799"}, MassQuote_0);
  set_field(msg, FIX::QuoteReqID{"STRING_1880569478"}, MassQuote_0);
  set_field(msg, FIX::QuoteResponseLevel{1}, MassQuote_0);
  set_field(msg, FIX::QuoteType{2}, MassQuote_0);
  all_values.push_back(MassQuote_0);

  all_compo_names.insert("MassQuote");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MassQuote::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_63;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1109724485"}, Parties_NoPartyIDs_63);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_63);
    set_field(noPartyIDs_0_0, FIX::PartyRole{5}, Parties_NoPartyIDs_63);
    all_values.push_back(Parties_NoPartyIDs_63);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_124;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_264341438"}, PtysSubGrp_NoPartySubIDs_124);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_124);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_124);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_125;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1046571175"}, PtysSubGrp_NoPartySubIDs_125);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_125);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_125);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_126;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_2080554041"}, PtysSubGrp_NoPartySubIDs_126);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_126);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_126);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MassQuote::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_64;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_94153133"}, Parties_NoPartyIDs_64);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_64);
    set_field(noPartyIDs_0_1, FIX::PartyRole{67}, Parties_NoPartyIDs_64);
    all_values.push_back(Parties_NoPartyIDs_64);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_127;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_440874141"}, PtysSubGrp_NoPartySubIDs_127);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_127);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_127);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_128;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_631880559"}, PtysSubGrp_NoPartySubIDs_128);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{28}, PtysSubGrp_NoPartySubIDs_128);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_128);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_129;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_1300949891"}, PtysSubGrp_NoPartySubIDs_129);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_129);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_129);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // QuotSetGrp
  // Group QuotSetGrp.NoQuoteSets
  {
    FIX50SP2::MassQuote::NoQuoteSets noQuoteSets_0_0;
    // QuotSetGrp.NoQuoteSets
    multiset<string> QuotSetGrp_NoQuoteSets_0;
    set_field(noQuoteSets_0_0, FIX::LastFragment{false}, QuotSetGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::QuoteSetID{"STRING_1990608583"}, QuotSetGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::QuoteSetValidUntilTime{FIX::UTCTIMESTAMP(20, 18, 2, 26, 4, 2002)}, QuotSetGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::TotNoQuoteEntries{1154422490}, QuotSetGrp_NoQuoteSets_0);
    all_values.push_back(QuotSetGrp_NoQuoteSets_0);
    all_compo_names.insert("...NoQuoteSets");

    // QuotEntryGrp
    // Group QuotEntryGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_0;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_0;
      FIX::BidForwardPoints BidForwardPoints_0;
      BidForwardPoints_0.setString("5619112");
set_field(noQuoteEntries_0_1_0, BidForwardPoints_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::BidForwardPoints2 BidForwardPoints2_0;
      BidForwardPoints2_0.setString("19742031");
set_field(noQuoteEntries_0_1_0, BidForwardPoints2_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::BidPx BidPx_0;
      BidPx_0.setString("2382882");
set_field(noQuoteEntries_0_1_0, BidPx_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::BidSize BidSize_0;
      BidSize_0.setString("8262526");
set_field(noQuoteEntries_0_1_0, BidSize_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::BidSpotRate BidSpotRate_0;
      BidSpotRate_0.setString("3135282");
set_field(noQuoteEntries_0_1_0, BidSpotRate_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::BidYield BidYield_0;
      BidYield_0.setString("94.660000");
set_field(noQuoteEntries_0_1_0, BidYield_0, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::BookingType{2}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::Currency{"USD"}, QuotEntryGrp_NoQuoteEntries_0);
      FIX::MidPx MidPx_0;
      MidPx_0.setString("4549501");
set_field(noQuoteEntries_0_1_0, MidPx_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::MidYield MidYield_0;
      MidYield_0.setString("17.660000");
set_field(noQuoteEntries_0_1_0, MidYield_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OfferForwardPoints OfferForwardPoints_0;
      OfferForwardPoints_0.setString("9999681");
set_field(noQuoteEntries_0_1_0, OfferForwardPoints_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OfferForwardPoints2 OfferForwardPoints2_0;
      OfferForwardPoints2_0.setString("14146876");
set_field(noQuoteEntries_0_1_0, OfferForwardPoints2_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OfferPx OfferPx_0;
      OfferPx_0.setString("2504622");
set_field(noQuoteEntries_0_1_0, OfferPx_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OfferSize OfferSize_0;
      OfferSize_0.setString("10356672");
set_field(noQuoteEntries_0_1_0, OfferSize_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OfferSpotRate OfferSpotRate_0;
      OfferSpotRate_0.setString("20465681");
set_field(noQuoteEntries_0_1_0, OfferSpotRate_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OfferYield OfferYield_0;
      OfferYield_0.setString("53.350000");
set_field(noQuoteEntries_0_1_0, OfferYield_0, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::OrdType{'D'}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::OrderCapacity{'W'}, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OrderQty2 OrderQty2_1;
      OrderQty2_1.setString("5283125");
set_field(noQuoteEntries_0_1_0, OrderQty2_1, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_D"}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::QuoteEntryID{"STRING_357468514"}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::SettlDate{"LOCALMKTDATE_1279895317"}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::SettlDate2{"LOCALMKTDATE_1177348395"}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::TradingSessionID{"STRING_6"}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::TradingSessionSubID{"STRING_4"}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::TransactTime{FIX::UTCTIMESTAMP(0, 39, 24, 21, 8, 2004)}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(6, 23, 14, 24, 3, 2002)}, QuotEntryGrp_NoQuoteEntries_0);
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_0);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_48;
        set_field(noLegs_0_0_2_0, FIX::EncodedLegIssuer{"DATA_2143522956"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::EncodedLegIssuerLen{1900875787}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::EncodedLegSecurityDesc{"DATA_563739462"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::EncodedLegSecurityDescLen{246501568}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegCFICode{"STRING_789059396"}, InstrumentLeg_48);
        FIX::LegContractMultiplier LegContractMultiplier_48;
        LegContractMultiplier_48.setString("4628239");
set_field(noLegs_0_0_2_0, LegContractMultiplier_48, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegContractMultiplierUnit{2023756903}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_978192896"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegCountryOfIssue{"COUNTRY_977167576"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_404585829"}, InstrumentLeg_48);
        FIX::LegCouponRate LegCouponRate_48;
        LegCouponRate_48.setString("57.750000");
set_field(noLegs_0_0_2_0, LegCouponRate_48, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegCreditRating{"STRING_1334636091"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegCurrency{"USD"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegDatedDate{"LOCALMKTDATE_52205916"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegExerciseStyle{2036222357}, InstrumentLeg_48);
        FIX::LegFactor LegFactor_48;
        LegFactor_48.setString("20958402");
set_field(noLegs_0_0_2_0, LegFactor_48, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegFlowScheduleType{262434372}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegInstrRegistry{"STRING_1128846828"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1895445200"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegIssueDate{"LOCALMKTDATE_927562297"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegIssuer{"STRING_783382524"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegLocaleOfIssue{"STRING_1521769595"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_1830978513"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1264170882"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegMaturityTime{"TZTIMEONLY_1461622190"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_48);
        FIX::LegOptionRatio LegOptionRatio_48;
        LegOptionRatio_48.setString("21057562");
set_field(noLegs_0_0_2_0, LegOptionRatio_48, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegPool{"STRING_1648073380"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegPriceUnitOfMeasure{"STRING_625194515"}, InstrumentLeg_48);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_48;
        LegPriceUnitOfMeasureQty_48.setString("12548080");
set_field(noLegs_0_0_2_0, LegPriceUnitOfMeasureQty_48, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegProduct{1644112689}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegPutOrCall{378586654}, InstrumentLeg_48);
        FIX::LegRatioQty LegRatioQty_48;
        LegRatioQty_48.setString("18185475");
set_field(noLegs_0_0_2_0, LegRatioQty_48, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1890614257"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegRepoCollateralSecurityType{"STRING_1167646050"}, InstrumentLeg_48);
        FIX::LegRepurchaseRate LegRepurchaseRate_48;
        LegRepurchaseRate_48.setString("78.880000");
set_field(noLegs_0_0_2_0, LegRepurchaseRate_48, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegRepurchaseTerm{1766887513}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityDesc{"STRING_2145838946"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityExchange{"EXCHANGE_1111055464"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityID{"STRING_23989694"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityIDSource{"STRING_124181073"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegSecuritySubType{"STRING_298207907"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityType{"STRING_1708470841"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegSide{'1'}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_350413823"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_48);
        FIX::LegStrikePrice LegStrikePrice_48;
        LegStrikePrice_48.setString("6128481");
set_field(noLegs_0_0_2_0, LegStrikePrice_48, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegSymbol{"STRING_578572731"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegSymbolSfx{"STRING_1123673413"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegTimeUnit{"STRING_1540410493"}, InstrumentLeg_48);
        set_field(noLegs_0_0_2_0, FIX::LegUnitOfMeasure{"STRING_1361955255"}, InstrumentLeg_48);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_48;
        LegUnitOfMeasureQty_48.setString("4979593");
set_field(noLegs_0_0_2_0, LegUnitOfMeasureQty_48, InstrumentLeg_48);
        all_values.push_back(InstrumentLeg_48);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_102;
          set_field(noLegSecurityAltID_0_0_0_3_0, FIX::LegSecurityAltID{"STRING_478642489"}, LegSecAltIDGrp_NoLegSecurityAltID_102);
          set_field(noLegSecurityAltID_0_0_0_3_0, FIX::LegSecurityAltIDSource{"STRING_1959581550"}, LegSecAltIDGrp_NoLegSecurityAltID_102);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_102);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_49;
        set_field(noLegs_0_0_2_1, FIX::EncodedLegIssuer{"DATA_948192258"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::EncodedLegIssuerLen{436915080}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::EncodedLegSecurityDesc{"DATA_1460171283"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::EncodedLegSecurityDescLen{1573386774}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegCFICode{"STRING_1691723157"}, InstrumentLeg_49);
        FIX::LegContractMultiplier LegContractMultiplier_49;
        LegContractMultiplier_49.setString("9568003");
set_field(noLegs_0_0_2_1, LegContractMultiplier_49, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegContractMultiplierUnit{1951973428}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegContractSettlMonth{"MONTHYEAR_1362787048"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegCountryOfIssue{"COUNTRY_699930933"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_972135831"}, InstrumentLeg_49);
        FIX::LegCouponRate LegCouponRate_49;
        LegCouponRate_49.setString("49.360000");
set_field(noLegs_0_0_2_1, LegCouponRate_49, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegCreditRating{"STRING_319334798"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegCurrency{"USD"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegDatedDate{"LOCALMKTDATE_343324493"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegExerciseStyle{1094672203}, InstrumentLeg_49);
        FIX::LegFactor LegFactor_49;
        LegFactor_49.setString("7584546");
set_field(noLegs_0_0_2_1, LegFactor_49, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegFlowScheduleType{2051795334}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegInstrRegistry{"STRING_374543799"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1108868483"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegIssueDate{"LOCALMKTDATE_1501521236"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegIssuer{"STRING_1750255659"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegLocaleOfIssue{"STRING_1721716679"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegMaturityDate{"LOCALMKTDATE_2080093967"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegMaturityMonthYear{"MONTHYEAR_726445424"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegMaturityTime{"TZTIMEONLY_1114643525"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_49);
        FIX::LegOptionRatio LegOptionRatio_49;
        LegOptionRatio_49.setString("12244047");
set_field(noLegs_0_0_2_1, LegOptionRatio_49, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegPool{"STRING_191065236"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegPriceUnitOfMeasure{"STRING_1773208064"}, InstrumentLeg_49);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_49;
        LegPriceUnitOfMeasureQty_49.setString("10365026");
set_field(noLegs_0_0_2_1, LegPriceUnitOfMeasureQty_49, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegProduct{1139257494}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegPutOrCall{62639496}, InstrumentLeg_49);
        FIX::LegRatioQty LegRatioQty_49;
        LegRatioQty_49.setString("3491903");
set_field(noLegs_0_0_2_1, LegRatioQty_49, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegRedemptionDate{"LOCALMKTDATE_565160620"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegRepoCollateralSecurityType{"STRING_1754362653"}, InstrumentLeg_49);
        FIX::LegRepurchaseRate LegRepurchaseRate_49;
        LegRepurchaseRate_49.setString("6.460000");
set_field(noLegs_0_0_2_1, LegRepurchaseRate_49, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegRepurchaseTerm{369650401}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityDesc{"STRING_969666053"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityExchange{"EXCHANGE_2005921579"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityID{"STRING_1341786232"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityIDSource{"STRING_318857341"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegSecuritySubType{"STRING_177772730"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityType{"STRING_164793713"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegSide{'7'}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegStateOrProvinceOfIssue{"STRING_521097223"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_49);
        FIX::LegStrikePrice LegStrikePrice_49;
        LegStrikePrice_49.setString("4254089");
set_field(noLegs_0_0_2_1, LegStrikePrice_49, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegSymbol{"STRING_1634009715"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegSymbolSfx{"STRING_498943589"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegTimeUnit{"STRING_1926930145"}, InstrumentLeg_49);
        set_field(noLegs_0_0_2_1, FIX::LegUnitOfMeasure{"STRING_1236781727"}, InstrumentLeg_49);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_49;
        LegUnitOfMeasureQty_49.setString("731766");
set_field(noLegs_0_0_2_1, LegUnitOfMeasureQty_49, InstrumentLeg_49);
        all_values.push_back(InstrumentLeg_49);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_103;
          set_field(noLegSecurityAltID_0_0_1_3_0, FIX::LegSecurityAltID{"STRING_1963227151"}, LegSecAltIDGrp_NoLegSecurityAltID_103);
          set_field(noLegSecurityAltID_0_0_1_3_0, FIX::LegSecurityAltIDSource{"STRING_1187820145"}, LegSecAltIDGrp_NoLegSecurityAltID_103);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_103);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_104;
          set_field(noLegSecurityAltID_0_0_1_3_1, FIX::LegSecurityAltID{"STRING_1006622391"}, LegSecAltIDGrp_NoLegSecurityAltID_104);
          set_field(noLegSecurityAltID_0_0_1_3_1, FIX::LegSecurityAltIDSource{"STRING_1040148288"}, LegSecAltIDGrp_NoLegSecurityAltID_104);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_104);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_105;
          set_field(noLegSecurityAltID_0_0_1_3_2, FIX::LegSecurityAltID{"STRING_1378885381"}, LegSecAltIDGrp_NoLegSecurityAltID_105);
          set_field(noLegSecurityAltID_0_0_1_3_2, FIX::LegSecurityAltIDSource{"STRING_632346807"}, LegSecAltIDGrp_NoLegSecurityAltID_105);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_105);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_1);
      }
      // Instrument
      multiset<string> Instrument_32;
      FIX::AttachmentPoint AttachmentPoint_32;
      AttachmentPoint_32.setString("9.750000");
set_field(noQuoteEntries_0_1_0, AttachmentPoint_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::CFICode{"STRING_370659228"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::CPProgram{1}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::CPRegType{"STRING_278357649"}, Instrument_32);
      FIX::CapPrice CapPrice_32;
      CapPrice_32.setString("9358198");
set_field(noQuoteEntries_0_1_0, CapPrice_32, Instrument_32);
      FIX::ContractMultiplier ContractMultiplier_32;
      ContractMultiplier_32.setString("3018653");
set_field(noQuoteEntries_0_1_0, ContractMultiplier_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::ContractMultiplierUnit{1}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::ContractSettlMonth{"MONTHYEAR_1305470249"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::CountryOfIssue{"COUNTRY_1271531361"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1442786226"}, Instrument_32);
      FIX::CouponRate CouponRate_32;
      CouponRate_32.setString("28.330000");
set_field(noQuoteEntries_0_1_0, CouponRate_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::CreditRating{"STRING_1590388702"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::DatedDate{"LOCALMKTDATE_1620558956"}, Instrument_32);
      FIX::DetachmentPoint DetachmentPoint_32;
      DetachmentPoint_32.setString("65.470000");
set_field(noQuoteEntries_0_1_0, DetachmentPoint_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedIssuer{"DATA_222009148"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedIssuerLen{2141656179}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedSecurityDesc{"DATA_1924032463"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedSecurityDescLen{1759567901}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::ExerciseStyle{0}, Instrument_32);
      FIX::Factor Factor_32;
      Factor_32.setString("14105585");
set_field(noQuoteEntries_0_1_0, Factor_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::FlexibleIndicator{true}, Instrument_32);
      FIX::FloorPrice FloorPrice_32;
      FloorPrice_32.setString("4998566");
set_field(noQuoteEntries_0_1_0, FloorPrice_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::FlowScheduleType{3}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::InstrRegistry{"STRING_2058568403"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::InstrmtAssignmentMethod{'3'}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1372024608"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::IssueDate{"LOCALMKTDATE_917707146"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::Issuer{"STRING_1355748401"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::ListMethod{0}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::LocaleOfIssue{"STRING_1550053954"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::MaturityDate{"LOCALMKTDATE_1284915728"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::MaturityMonthYear{"MONTHYEAR_974085570"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::MaturityTime{"TZTIMEONLY_97556609"}, Instrument_32);
      FIX::MinPriceIncrement MinPriceIncrement_32;
      MinPriceIncrement_32.setString("15632733");
set_field(noQuoteEntries_0_1_0, MinPriceIncrement_32, Instrument_32);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_32;
      MinPriceIncrementAmount_32.setString("19099054");
set_field(noQuoteEntries_0_1_0, MinPriceIncrementAmount_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::NTPositionLimit{399421918}, Instrument_32);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_32;
      NotionalPercentageOutstanding_32.setString("80.240000");
set_field(noQuoteEntries_0_1_0, NotionalPercentageOutstanding_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::OptAttribute{'1'}, Instrument_32);
      FIX::OptPayoutAmount OptPayoutAmount_32;
      OptPayoutAmount_32.setString("16709532");
set_field(noQuoteEntries_0_1_0, OptPayoutAmount_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::OptPayoutType{1}, Instrument_32);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_32;
      OriginalNotionalPercentageOutstanding_32.setString("48.530000");
set_field(noQuoteEntries_0_1_0, OriginalNotionalPercentageOutstanding_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::Pool{"STRING_1113858334"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::PositionLimit{1915999559}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::PriceUnitOfMeasure{"STRING_1335867482"}, Instrument_32);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_32;
      PriceUnitOfMeasureQty_32.setString("19101720");
set_field(noQuoteEntries_0_1_0, PriceUnitOfMeasureQty_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::Product{2}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::ProductComplex{"STRING_947951735"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::PutOrCall{1}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::RedemptionDate{"LOCALMKTDATE_1271855099"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::RepoCollateralSecurityType{"STRING_1058979578"}, Instrument_32);
      FIX::RepurchaseRate RepurchaseRate_32;
      RepurchaseRate_32.setString("78.210000");
set_field(noQuoteEntries_0_1_0, RepurchaseRate_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::RepurchaseTerm{1771711709}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::RestructuringType{"STRING_MR"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityDesc{"STRING_292382576"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityExchange{"EXCHANGE_2087311822"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityGroup{"STRING_467725001"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityID{"STRING_1210089723"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityIDSource{"STRING_9"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityStatus{"STRING_2"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::SecuritySubType{"STRING_612660029"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityType{"STRING_TECP"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::Seniority{"STRING_SB"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::SettlMethod{'C'}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::SettleOnOpenFlag{"STRING_1996282034"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::StateOrProvinceOfIssue{"STRING_1807658684"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::StrikeCurrency{"JPY"}, Instrument_32);
      FIX::StrikeMultiplier StrikeMultiplier_32;
      StrikeMultiplier_32.setString("7280670");
set_field(noQuoteEntries_0_1_0, StrikeMultiplier_32, Instrument_32);
      FIX::StrikePrice StrikePrice_32;
      StrikePrice_32.setString("6331081");
set_field(noQuoteEntries_0_1_0, StrikePrice_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::StrikePriceBoundaryMethod{4}, Instrument_32);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_32;
      StrikePriceBoundaryPrecision_32.setString("82.610000");
set_field(noQuoteEntries_0_1_0, StrikePriceBoundaryPrecision_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::StrikePriceDeterminationMethod{3}, Instrument_32);
      FIX::StrikeValue StrikeValue_32;
      StrikeValue_32.setString("9128929");
set_field(noQuoteEntries_0_1_0, StrikeValue_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::Symbol{"STRING_232996014"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::TimeUnit{"STRING_H"}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::UnitOfMeasure{"STRING_oz_tr"}, Instrument_32);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_32;
      UnitOfMeasureQty_32.setString("8578512");
set_field(noQuoteEntries_0_1_0, UnitOfMeasureQty_32, Instrument_32);
      set_field(noQuoteEntries_0_1_0, FIX::ValuationMethod{"STRING_FUT"}, Instrument_32);
      all_values.push_back(Instrument_32);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_64;
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_64);
        FIX::ComplexEventPrice ComplexEventPrice_64;
        ComplexEventPrice_64.setString("9903757");
set_field(noComplexEvents_0_0_2_0, ComplexEventPrice_64, ComplexEvents_NoComplexEvents_64);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_64);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_64;
        ComplexEventPriceBoundaryPrecision_64.setString("16.490000");
set_field(noComplexEvents_0_0_2_0, ComplexEventPriceBoundaryPrecision_64, ComplexEvents_NoComplexEvents_64);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_64);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_64);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_64;
        ComplexOptPayoutAmount_64.setString("5941377");
set_field(noComplexEvents_0_0_2_0, ComplexOptPayoutAmount_64, ComplexEvents_NoComplexEvents_64);
        all_values.push_back(ComplexEvents_NoComplexEvents_64);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_132;
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 21, 25, 20, 4, 2001)}, ComplexEventDates_NoComplexEventDates_132);
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 57, 48, 19, 7, 2010)}, ComplexEventDates_NoComplexEventDates_132);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_132);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_270;
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 16, 6)}, ComplexEventTimes_NoComplexEventTimes_270);
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 7, 35)}, ComplexEventTimes_NoComplexEventTimes_270);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_270);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_65;
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_65);
        FIX::ComplexEventPrice ComplexEventPrice_65;
        ComplexEventPrice_65.setString("2524631");
set_field(noComplexEvents_0_0_2_1, ComplexEventPrice_65, ComplexEvents_NoComplexEvents_65);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_65);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_65;
        ComplexEventPriceBoundaryPrecision_65.setString("26.340000");
set_field(noComplexEvents_0_0_2_1, ComplexEventPriceBoundaryPrecision_65, ComplexEvents_NoComplexEvents_65);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_65);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_65);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_65;
        ComplexOptPayoutAmount_65.setString("17221103");
set_field(noComplexEvents_0_0_2_1, ComplexOptPayoutAmount_65, ComplexEvents_NoComplexEvents_65);
        all_values.push_back(ComplexEvents_NoComplexEvents_65);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_133;
          set_field(noComplexEventDates_0_0_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 43, 22, 20, 11, 2009)}, ComplexEventDates_NoComplexEventDates_133);
          set_field(noComplexEventDates_0_0_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 12, 9, 7, 12, 2001)}, ComplexEventDates_NoComplexEventDates_133);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_133);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_271;
            set_field(noComplexEventTimes_0_0_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 11, 34)}, ComplexEventTimes_NoComplexEventTimes_271);
            set_field(noComplexEventTimes_0_0_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 33, 51)}, ComplexEventTimes_NoComplexEventTimes_271);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_271);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_134;
          set_field(noComplexEventDates_0_0_1_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 53, 29, 9, 8, 2009)}, ComplexEventDates_NoComplexEventDates_134);
          set_field(noComplexEventDates_0_0_1_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 43, 43, 27, 12, 2009)}, ComplexEventDates_NoComplexEventDates_134);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_134);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_272;
            set_field(noComplexEventTimes_0_0_1_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 59, 53)}, ComplexEventTimes_NoComplexEventTimes_272);
            set_field(noComplexEventTimes_0_0_1_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 24, 43)}, ComplexEventTimes_NoComplexEventTimes_272);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_272);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_1.addGroup(noComplexEventTimes_0_0_1_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_273;
            set_field(noComplexEventTimes_0_0_1_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 54, 8)}, ComplexEventTimes_NoComplexEventTimes_273);
            set_field(noComplexEventTimes_0_0_1_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 33, 30)}, ComplexEventTimes_NoComplexEventTimes_273);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_273);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_1.addGroup(noComplexEventTimes_0_0_1_1_4_1);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_66;
        set_field(noComplexEvents_0_0_2_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_66);
        FIX::ComplexEventPrice ComplexEventPrice_66;
        ComplexEventPrice_66.setString("18540774");
set_field(noComplexEvents_0_0_2_2, ComplexEventPrice_66, ComplexEvents_NoComplexEvents_66);
        set_field(noComplexEvents_0_0_2_2, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_66);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_66;
        ComplexEventPriceBoundaryPrecision_66.setString("30.410000");
set_field(noComplexEvents_0_0_2_2, ComplexEventPriceBoundaryPrecision_66, ComplexEvents_NoComplexEvents_66);
        set_field(noComplexEvents_0_0_2_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_66);
        set_field(noComplexEvents_0_0_2_2, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_66);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_66;
        ComplexOptPayoutAmount_66.setString("2244360");
set_field(noComplexEvents_0_0_2_2, ComplexOptPayoutAmount_66, ComplexEvents_NoComplexEvents_66);
        all_values.push_back(ComplexEvents_NoComplexEvents_66);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_135;
          set_field(noComplexEventDates_0_0_2_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 48, 31, 15, 10, 2012)}, ComplexEventDates_NoComplexEventDates_135);
          set_field(noComplexEventDates_0_0_2_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 10, 16, 27, 5, 2003)}, ComplexEventDates_NoComplexEventDates_135);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_135);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_274;
            set_field(noComplexEventTimes_0_0_2_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 53, 50)}, ComplexEventTimes_NoComplexEventTimes_274);
            set_field(noComplexEventTimes_0_0_2_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 24, 12)}, ComplexEventTimes_NoComplexEventTimes_274);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_274);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_0.addGroup(noComplexEventTimes_0_0_2_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_275;
            set_field(noComplexEventTimes_0_0_2_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 35, 15)}, ComplexEventTimes_NoComplexEventTimes_275);
            set_field(noComplexEventTimes_0_0_2_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 48, 55)}, ComplexEventTimes_NoComplexEventTimes_275);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_275);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_0.addGroup(noComplexEventTimes_0_0_2_0_4_1);
          }
          noComplexEvents_0_0_2_2.addGroup(noComplexEventDates_0_0_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_136;
          set_field(noComplexEventDates_0_0_2_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 43, 34, 11, 5, 2008)}, ComplexEventDates_NoComplexEventDates_136);
          set_field(noComplexEventDates_0_0_2_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 46, 59, 23, 4, 2006)}, ComplexEventDates_NoComplexEventDates_136);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_136);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_276;
            set_field(noComplexEventTimes_0_0_2_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 7, 36)}, ComplexEventTimes_NoComplexEventTimes_276);
            set_field(noComplexEventTimes_0_0_2_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 52, 22)}, ComplexEventTimes_NoComplexEventTimes_276);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_276);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_1.addGroup(noComplexEventTimes_0_0_2_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_277;
            set_field(noComplexEventTimes_0_0_2_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 57, 20)}, ComplexEventTimes_NoComplexEventTimes_277);
            set_field(noComplexEventTimes_0_0_2_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 0, 5)}, ComplexEventTimes_NoComplexEventTimes_277);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_277);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_1.addGroup(noComplexEventTimes_0_0_2_1_4_1);
          }
          noComplexEvents_0_0_2_2.addGroup(noComplexEventDates_0_0_2_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_67;
        set_field(noEvents_0_0_2_0, FIX::EventDate{"LOCALMKTDATE_578736468"}, EvntGrp_NoEvents_67);
        FIX::EventPx EventPx_67;
        EventPx_67.setString("14888444");
set_field(noEvents_0_0_2_0, EventPx_67, EvntGrp_NoEvents_67);
        set_field(noEvents_0_0_2_0, FIX::EventText{"STRING_778900836"}, EvntGrp_NoEvents_67);
        set_field(noEvents_0_0_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(9, 13, 58, 16, 12, 2008)}, EvntGrp_NoEvents_67);
        set_field(noEvents_0_0_2_0, FIX::EventType{99}, EvntGrp_NoEvents_67);
        all_values.push_back(EvntGrp_NoEvents_67);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_68;
        set_field(noEvents_0_0_2_1, FIX::EventDate{"LOCALMKTDATE_1014942654"}, EvntGrp_NoEvents_68);
        FIX::EventPx EventPx_68;
        EventPx_68.setString("14953991");
set_field(noEvents_0_0_2_1, EventPx_68, EvntGrp_NoEvents_68);
        set_field(noEvents_0_0_2_1, FIX::EventText{"STRING_113576013"}, EvntGrp_NoEvents_68);
        set_field(noEvents_0_0_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(22, 41, 8, 8, 8, 2004)}, EvntGrp_NoEvents_68);
        set_field(noEvents_0_0_2_1, FIX::EventType{7}, EvntGrp_NoEvents_68);
        all_values.push_back(EvntGrp_NoEvents_68);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_60;
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyID{"STRING_145585632"}, InstrumentParties_NoInstrumentParties_60);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_60);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyRole{1487475895}, InstrumentParties_NoInstrumentParties_60);
        all_values.push_back(InstrumentParties_NoInstrumentParties_60);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120;
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubID{"STRING_394904704"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120);
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubIDType{550259507}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_120);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121;
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubID{"STRING_1659306808"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121);
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubIDType{1372216214}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122;
          set_field(noInstrumentPartySubIDs_0_0_0_3_2, FIX::InstrumentPartySubID{"STRING_1128995975"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122);
          set_field(noInstrumentPartySubIDs_0_0_0_3_2, FIX::InstrumentPartySubIDType{1000667649}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_61;
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyID{"STRING_3633403"}, InstrumentParties_NoInstrumentParties_61);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_61);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyRole{1816405026}, InstrumentParties_NoInstrumentParties_61);
        all_values.push_back(InstrumentParties_NoInstrumentParties_61);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123;
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubID{"STRING_577509093"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123);
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubIDType{813083154}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_123);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124;
          set_field(noInstrumentPartySubIDs_0_0_1_3_1, FIX::InstrumentPartySubID{"STRING_1781557435"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124);
          set_field(noInstrumentPartySubIDs_0_0_1_3_1, FIX::InstrumentPartySubIDType{1779954803}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_124);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125;
          set_field(noInstrumentPartySubIDs_0_0_1_3_2, FIX::InstrumentPartySubID{"STRING_410779206"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125);
          set_field(noInstrumentPartySubIDs_0_0_1_3_2, FIX::InstrumentPartySubIDType{649016442}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_125);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_67;
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltID{"STRING_524355219"}, SecAltIDGrp_NoSecurityAltID_67);
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltIDSource{"STRING_270168314"}, SecAltIDGrp_NoSecurityAltID_67);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_67);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_64;
      set_field(noQuoteEntries_0_1_0, FIX::SecurityXML{"XMLDATA_1323290884"}, SecurityXML_64);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityXMLLen{729072560}, SecurityXML_64);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityXMLSchema{"STRING_1800210922"}, SecurityXML_64);
      all_values.push_back(SecurityXML_64);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_59;
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1717454929"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingIssuerLen{783498291}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_739555326"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingSecurityDescLen{182798807}, UnderlyingInstrument_59);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_59;
    UnderlyingAdjustedQuantity_59.setString("7488525");
set_field(noQuoteSets_0_0, UnderlyingAdjustedQuantity_59, UnderlyingInstrument_59);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_59;
    UnderlyingAllocationPercent_59.setString("9.580000");
set_field(noQuoteSets_0_0, UnderlyingAllocationPercent_59, UnderlyingInstrument_59);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_59;
    UnderlyingAttachmentPoint_59.setString("45.710000");
set_field(noQuoteSets_0_0, UnderlyingAttachmentPoint_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCFICode{"STRING_88844774"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCPProgram{"STRING_1547130401"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCPRegType{"STRING_2143049275"}, UnderlyingInstrument_59);
    FIX::UnderlyingCapValue UnderlyingCapValue_59;
    UnderlyingCapValue_59.setString("6391042");
set_field(noQuoteSets_0_0, UnderlyingCapValue_59, UnderlyingInstrument_59);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_59;
    UnderlyingCashAmount_59.setString("10589535");
set_field(noQuoteSets_0_0, UnderlyingCashAmount_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_59);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_59;
    UnderlyingContractMultiplier_59.setString("17681002");
set_field(noQuoteSets_0_0, UnderlyingContractMultiplier_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingContractMultiplierUnit{2059621211}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1371415245"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_383984592"}, UnderlyingInstrument_59);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_59;
    UnderlyingCouponRate_59.setString("25.890000");
set_field(noQuoteSets_0_0, UnderlyingCouponRate_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCreditRating{"STRING_1710238961"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_59);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_59;
    UnderlyingCurrentValue_59.setString("13443127");
set_field(noQuoteSets_0_0, UnderlyingCurrentValue_59, UnderlyingInstrument_59);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_59;
    UnderlyingDetachmentPoint_59.setString("48.410000");
set_field(noQuoteSets_0_0, UnderlyingDetachmentPoint_59, UnderlyingInstrument_59);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_59;
    UnderlyingDirtyPrice_59.setString("8049213");
set_field(noQuoteSets_0_0, UnderlyingDirtyPrice_59, UnderlyingInstrument_59);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_59;
    UnderlyingEndPrice_59.setString("19933291");
set_field(noQuoteSets_0_0, UnderlyingEndPrice_59, UnderlyingInstrument_59);
    FIX::UnderlyingEndValue UnderlyingEndValue_59;
    UnderlyingEndValue_59.setString("17218351");
set_field(noQuoteSets_0_0, UnderlyingEndValue_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingExerciseStyle{1329276521}, UnderlyingInstrument_59);
    FIX::UnderlyingFXRate UnderlyingFXRate_59;
    UnderlyingFXRate_59.setString("1160138");
set_field(noQuoteSets_0_0, UnderlyingFXRate_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_59);
    FIX::UnderlyingFactor UnderlyingFactor_59;
    UnderlyingFactor_59.setString("20583490");
set_field(noQuoteSets_0_0, UnderlyingFactor_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingFlowScheduleType{1916224778}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingInstrRegistry{"STRING_467613669"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_694363725"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingIssuer{"STRING_508296456"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_650412476"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1443216252"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1393437415"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_251073400"}, UnderlyingInstrument_59);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_59;
    UnderlyingNotionalPercentageOutstanding_59.setString("10.260000");
set_field(noQuoteSets_0_0, UnderlyingNotionalPercentageOutstanding_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingOptAttribute{'7'}, UnderlyingInstrument_59);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_59;
    UnderlyingOriginalNotionalPercentageOutstanding_59.setString("90.270000");
set_field(noQuoteSets_0_0, UnderlyingOriginalNotionalPercentageOutstanding_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_23681660"}, UnderlyingInstrument_59);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_59;
    UnderlyingPriceUnitOfMeasureQty_59.setString("18520377");
set_field(noQuoteSets_0_0, UnderlyingPriceUnitOfMeasureQty_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingProduct{1614420869}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingPutOrCall{1791781918}, UnderlyingInstrument_59);
    FIX::UnderlyingPx UnderlyingPx_59;
    UnderlyingPx_59.setString("17641752");
set_field(noQuoteSets_0_0, UnderlyingPx_59, UnderlyingInstrument_59);
    FIX::UnderlyingQty UnderlyingQty_59;
    UnderlyingQty_59.setString("8383524");
set_field(noQuoteSets_0_0, UnderlyingQty_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_28282862"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1345234234"}, UnderlyingInstrument_59);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_59;
    UnderlyingRepurchaseRate_59.setString("77.790000");
set_field(noQuoteSets_0_0, UnderlyingRepurchaseRate_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRepurchaseTerm{989776548}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRestructuringType{"STRING_1739376330"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityDesc{"STRING_1745420528"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1583741390"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityID{"STRING_396813983"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1591266070"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecuritySubType{"STRING_1158092893"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityType{"STRING_1726090504"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSeniority{"STRING_1707279927"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSettlMethod{"STRING_2055735281"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_59);
    FIX::UnderlyingStartValue UnderlyingStartValue_59;
    UnderlyingStartValue_59.setString("14760210");
set_field(noQuoteSets_0_0, UnderlyingStartValue_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_375865302"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_59);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_59;
    UnderlyingStrikePrice_59.setString("10262777");
set_field(noQuoteSets_0_0, UnderlyingStrikePrice_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSymbol{"STRING_1627052267"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSymbolSfx{"STRING_1230271281"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingTimeUnit{"STRING_1277351179"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1011629645"}, UnderlyingInstrument_59);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_59;
    UnderlyingUnitOfMeasureQty_59.setString("20233554");
set_field(noQuoteSets_0_0, UnderlyingUnitOfMeasureQty_59, UnderlyingInstrument_59);
    all_values.push_back(UnderlyingInstrument_59);
    all_compo_names.insert("...NoQuoteSets.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_125;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1035311306"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_125);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1727909532"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_125);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_125);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_126;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_990927428"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_126);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_679609576"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_126);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_126);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_113;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1829279894"}, UnderlyingStipulations_NoUnderlyingStips_113);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_707892438"}, UnderlyingStipulations_NoUnderlyingStips_113);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_113);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_114;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_542351764"}, UnderlyingStipulations_NoUnderlyingStips_114);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_82904026"}, UnderlyingStipulations_NoUnderlyingStips_114);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_114);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_128;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_134244446"}, UndlyInstrumentParties_NoUndlyInstrumentParties_128);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_128);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1133926729}, UndlyInstrumentParties_NoUndlyInstrumentParties_128);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_128);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1272106976"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{144535974}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_109665286"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{831903255}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_129;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_52787608"}, UndlyInstrumentParties_NoUndlyInstrumentParties_129);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_129);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{160440665}, UndlyInstrumentParties_NoUndlyInstrumentParties_129);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_129);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1930457239"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{2144758179}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1454930689"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1410025858}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noQuoteSets_0_0);
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
