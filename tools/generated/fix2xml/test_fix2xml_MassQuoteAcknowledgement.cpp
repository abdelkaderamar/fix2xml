#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MassQuoteAcknowledgement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MassQuoteAcknowledgement, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::MassQuoteAcknowledgement msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MassQuoteAcknowledgement_0;
  set_field(msg, FIX::Account{"STRING_756323694"}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::AccountType{7}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::AcctIDSource{4}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::EncodedText{"DATA_1251952703"}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::EncodedTextLen{726417478}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteCancelType{8}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteID{"STRING_1731969522"}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteRejectReason{5}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteReqID{"STRING_282928313"}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteResponseLevel{3}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteStatus{14}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteType{3}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::Text{"STRING_173034900"}, MassQuoteAcknowledgement_0);
  all_values.push_back(MassQuoteAcknowledgement_0);

  all_compo_names.insert("MassQuoteAcknowledgement");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_70;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_370882714"}, Parties_NoPartyIDs_70);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_70);
    set_field(noPartyIDs_0_0, FIX::PartyRole{16}, Parties_NoPartyIDs_70);
    all_values.push_back(Parties_NoPartyIDs_70);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_141;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1259721142"}, PtysSubGrp_NoPartySubIDs_141);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_141);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_141);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_142;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1261893509"}, PtysSubGrp_NoPartySubIDs_142);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_142);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_142);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_71;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_154042147"}, Parties_NoPartyIDs_71);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_71);
    set_field(noPartyIDs_0_1, FIX::PartyRole{18}, Parties_NoPartyIDs_71);
    all_values.push_back(Parties_NoPartyIDs_71);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_143;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1663601316"}, PtysSubGrp_NoPartySubIDs_143);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_143);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_143);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_144;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_208427805"}, PtysSubGrp_NoPartySubIDs_144);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{20}, PtysSubGrp_NoPartySubIDs_144);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_144);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_145;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_1439385616"}, PtysSubGrp_NoPartySubIDs_145);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_145);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_145);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_72;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_131857301"}, Parties_NoPartyIDs_72);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_72);
    set_field(noPartyIDs_0_2, FIX::PartyRole{20}, Parties_NoPartyIDs_72);
    all_values.push_back(Parties_NoPartyIDs_72);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_146;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1166218975"}, PtysSubGrp_NoPartySubIDs_146);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_146);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_146);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // QuotSetAckGrp
  // Group QuotSetAckGrp.NoQuoteSets
  {
    FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets noQuoteSets_0_0;
    // QuotSetAckGrp.NoQuoteSets
    multiset<string> QuotSetAckGrp_NoQuoteSets_0;
    set_field(noQuoteSets_0_0, FIX::LastFragment{true}, QuotSetAckGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::QuoteSetID{"STRING_839704740"}, QuotSetAckGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::QuoteSetValidUntilTime{FIX::UTCTIMESTAMP(23, 1, 56, 25, 5, 2003)}, QuotSetAckGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::TotNoAccQuotes{1913114026}, QuotSetAckGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::TotNoCxldQuotes{319554114}, QuotSetAckGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::TotNoQuoteEntries{1818660149}, QuotSetAckGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::TotNoRejQuotes{1027523887}, QuotSetAckGrp_NoQuoteSets_0);
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_0);
    all_compo_names.insert("...NoQuoteSets");

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_0;
      FIX::BidForwardPoints BidForwardPoints_6;
      BidForwardPoints_6.setString("19727022");
set_field(noQuoteEntries_0_1_0, BidForwardPoints_6, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::BidForwardPoints2 BidForwardPoints2_6;
      BidForwardPoints2_6.setString("3823658");
set_field(noQuoteEntries_0_1_0, BidForwardPoints2_6, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::BidPx BidPx_6;
      BidPx_6.setString("20951900");
set_field(noQuoteEntries_0_1_0, BidPx_6, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::BidSize BidSize_6;
      BidSize_6.setString("12507621");
set_field(noQuoteEntries_0_1_0, BidSize_6, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::BidSpotRate BidSpotRate_6;
      BidSpotRate_6.setString("20459671");
set_field(noQuoteEntries_0_1_0, BidSpotRate_6, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::BidYield BidYield_6;
      BidYield_6.setString("46.270000");
set_field(noQuoteEntries_0_1_0, BidYield_6, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::BookingType{0}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::Currency{"CHF"}, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::MidPx MidPx_6;
      MidPx_6.setString("2764577");
set_field(noQuoteEntries_0_1_0, MidPx_6, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::MidYield MidYield_6;
      MidYield_6.setString("5.450000");
set_field(noQuoteEntries_0_1_0, MidYield_6, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OfferForwardPoints OfferForwardPoints_6;
      OfferForwardPoints_6.setString("10720910");
set_field(noQuoteEntries_0_1_0, OfferForwardPoints_6, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OfferForwardPoints2 OfferForwardPoints2_6;
      OfferForwardPoints2_6.setString("3456783");
set_field(noQuoteEntries_0_1_0, OfferForwardPoints2_6, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OfferPx OfferPx_6;
      OfferPx_6.setString("6609416");
set_field(noQuoteEntries_0_1_0, OfferPx_6, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OfferSize OfferSize_6;
      OfferSize_6.setString("908263");
set_field(noQuoteEntries_0_1_0, OfferSize_6, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OfferSpotRate OfferSpotRate_6;
      OfferSpotRate_6.setString("21468684");
set_field(noQuoteEntries_0_1_0, OfferSpotRate_6, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OfferYield OfferYield_6;
      OfferYield_6.setString("99.520000");
set_field(noQuoteEntries_0_1_0, OfferYield_6, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::OrdType{'3'}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::OrderCapacity{'P'}, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OrderQty2 OrderQty2_7;
      OrderQty2_7.setString("5716680");
set_field(noQuoteEntries_0_1_0, OrderQty2_7, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_B"}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::QuoteEntryID{"STRING_1851829138"}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::QuoteEntryRejectReason{890839945}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::QuoteEntryStatus{16}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::SettlDate{"LOCALMKTDATE_911662110"}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::SettlDate2{"LOCALMKTDATE_917477321"}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::TradingSessionID{"STRING_6"}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::TradingSessionSubID{"STRING_1"}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::TransactTime{FIX::UTCTIMESTAMP(12, 7, 30, 14, 12, 2004)}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(10, 38, 40, 1, 11, 2013)}, QuotEntryAckGrp_NoQuoteEntries_0);
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_0);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_70;
        set_field(noLegs_0_0_2_0, FIX::EncodedLegIssuer{"DATA_1598476957"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::EncodedLegIssuerLen{1823975653}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::EncodedLegSecurityDesc{"DATA_1872155938"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::EncodedLegSecurityDescLen{1597861714}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegCFICode{"STRING_1336991957"}, InstrumentLeg_70);
        FIX::LegContractMultiplier LegContractMultiplier_70;
        LegContractMultiplier_70.setString("12646459");
set_field(noLegs_0_0_2_0, LegContractMultiplier_70, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegContractMultiplierUnit{289467563}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_1908660047"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegCountryOfIssue{"COUNTRY_1083226461"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2141296701"}, InstrumentLeg_70);
        FIX::LegCouponRate LegCouponRate_70;
        LegCouponRate_70.setString("63.440000");
set_field(noLegs_0_0_2_0, LegCouponRate_70, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegCreditRating{"STRING_1698780264"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegDatedDate{"LOCALMKTDATE_2079964445"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegExerciseStyle{2136691387}, InstrumentLeg_70);
        FIX::LegFactor LegFactor_70;
        LegFactor_70.setString("106638");
set_field(noLegs_0_0_2_0, LegFactor_70, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegFlowScheduleType{1341188865}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegInstrRegistry{"STRING_1324648686"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_424536310"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegIssueDate{"LOCALMKTDATE_984779159"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegIssuer{"STRING_460312389"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegLocaleOfIssue{"STRING_2089170896"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_526852995"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1810554367"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegMaturityTime{"TZTIMEONLY_918028106"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_70);
        FIX::LegOptionRatio LegOptionRatio_70;
        LegOptionRatio_70.setString("3723092");
set_field(noLegs_0_0_2_0, LegOptionRatio_70, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegPool{"STRING_23343089"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegPriceUnitOfMeasure{"STRING_902770404"}, InstrumentLeg_70);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_70;
        LegPriceUnitOfMeasureQty_70.setString("61552");
set_field(noLegs_0_0_2_0, LegPriceUnitOfMeasureQty_70, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegProduct{1621820046}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegPutOrCall{579262410}, InstrumentLeg_70);
        FIX::LegRatioQty LegRatioQty_70;
        LegRatioQty_70.setString("18783111");
set_field(noLegs_0_0_2_0, LegRatioQty_70, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1072198112"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegRepoCollateralSecurityType{"STRING_1916254367"}, InstrumentLeg_70);
        FIX::LegRepurchaseRate LegRepurchaseRate_70;
        LegRepurchaseRate_70.setString("34.520000");
set_field(noLegs_0_0_2_0, LegRepurchaseRate_70, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegRepurchaseTerm{1361665675}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityDesc{"STRING_1677430766"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityExchange{"EXCHANGE_2078699913"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityID{"STRING_1355478728"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityIDSource{"STRING_181963463"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegSecuritySubType{"STRING_1629996529"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityType{"STRING_113470243"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegSide{'1'}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_1562477326"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_70);
        FIX::LegStrikePrice LegStrikePrice_70;
        LegStrikePrice_70.setString("7561825");
set_field(noLegs_0_0_2_0, LegStrikePrice_70, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegSymbol{"STRING_1427326668"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegSymbolSfx{"STRING_39173630"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegTimeUnit{"STRING_1740961703"}, InstrumentLeg_70);
        set_field(noLegs_0_0_2_0, FIX::LegUnitOfMeasure{"STRING_1887639057"}, InstrumentLeg_70);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_70;
        LegUnitOfMeasureQty_70.setString("21283445");
set_field(noLegs_0_0_2_0, LegUnitOfMeasureQty_70, InstrumentLeg_70);
        all_values.push_back(InstrumentLeg_70);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_144;
          set_field(noLegSecurityAltID_0_0_0_3_0, FIX::LegSecurityAltID{"STRING_1550709776"}, LegSecAltIDGrp_NoLegSecurityAltID_144);
          set_field(noLegSecurityAltID_0_0_0_3_0, FIX::LegSecurityAltIDSource{"STRING_898888984"}, LegSecAltIDGrp_NoLegSecurityAltID_144);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_144);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_145;
          set_field(noLegSecurityAltID_0_0_0_3_1, FIX::LegSecurityAltID{"STRING_2007551126"}, LegSecAltIDGrp_NoLegSecurityAltID_145);
          set_field(noLegSecurityAltID_0_0_0_3_1, FIX::LegSecurityAltIDSource{"STRING_1923019069"}, LegSecAltIDGrp_NoLegSecurityAltID_145);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_145);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_71;
        set_field(noLegs_0_0_2_1, FIX::EncodedLegIssuer{"DATA_922232073"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::EncodedLegIssuerLen{762837883}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::EncodedLegSecurityDesc{"DATA_1929174306"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::EncodedLegSecurityDescLen{396568472}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegCFICode{"STRING_1342100293"}, InstrumentLeg_71);
        FIX::LegContractMultiplier LegContractMultiplier_71;
        LegContractMultiplier_71.setString("16600018");
set_field(noLegs_0_0_2_1, LegContractMultiplier_71, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegContractMultiplierUnit{1468766584}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegContractSettlMonth{"MONTHYEAR_1110871012"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegCountryOfIssue{"COUNTRY_507991637"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_682948612"}, InstrumentLeg_71);
        FIX::LegCouponRate LegCouponRate_71;
        LegCouponRate_71.setString("81.310000");
set_field(noLegs_0_0_2_1, LegCouponRate_71, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegCreditRating{"STRING_439207903"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegDatedDate{"LOCALMKTDATE_2069204432"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegExerciseStyle{4413936}, InstrumentLeg_71);
        FIX::LegFactor LegFactor_71;
        LegFactor_71.setString("4267550");
set_field(noLegs_0_0_2_1, LegFactor_71, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegFlowScheduleType{1484198111}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegInstrRegistry{"STRING_107091918"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_41392394"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegIssueDate{"LOCALMKTDATE_92897007"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegIssuer{"STRING_1534418587"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegLocaleOfIssue{"STRING_80566024"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegMaturityDate{"LOCALMKTDATE_1833858710"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1274573996"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegMaturityTime{"TZTIMEONLY_61426902"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_71);
        FIX::LegOptionRatio LegOptionRatio_71;
        LegOptionRatio_71.setString("6778001");
set_field(noLegs_0_0_2_1, LegOptionRatio_71, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegPool{"STRING_960315887"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegPriceUnitOfMeasure{"STRING_1814257240"}, InstrumentLeg_71);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_71;
        LegPriceUnitOfMeasureQty_71.setString("4533355");
set_field(noLegs_0_0_2_1, LegPriceUnitOfMeasureQty_71, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegProduct{1882547960}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegPutOrCall{429611475}, InstrumentLeg_71);
        FIX::LegRatioQty LegRatioQty_71;
        LegRatioQty_71.setString("2350262");
set_field(noLegs_0_0_2_1, LegRatioQty_71, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegRedemptionDate{"LOCALMKTDATE_131632784"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegRepoCollateralSecurityType{"STRING_1771711768"}, InstrumentLeg_71);
        FIX::LegRepurchaseRate LegRepurchaseRate_71;
        LegRepurchaseRate_71.setString("80.370000");
set_field(noLegs_0_0_2_1, LegRepurchaseRate_71, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegRepurchaseTerm{1600399369}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityDesc{"STRING_735099132"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityExchange{"EXCHANGE_255536027"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityID{"STRING_135864333"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityIDSource{"STRING_1375917263"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegSecuritySubType{"STRING_694743930"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityType{"STRING_26808025"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegSide{'5'}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegStateOrProvinceOfIssue{"STRING_616464714"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_71);
        FIX::LegStrikePrice LegStrikePrice_71;
        LegStrikePrice_71.setString("21006628");
set_field(noLegs_0_0_2_1, LegStrikePrice_71, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegSymbol{"STRING_138313880"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegSymbolSfx{"STRING_519362678"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegTimeUnit{"STRING_46076184"}, InstrumentLeg_71);
        set_field(noLegs_0_0_2_1, FIX::LegUnitOfMeasure{"STRING_1672732467"}, InstrumentLeg_71);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_71;
        LegUnitOfMeasureQty_71.setString("5999287");
set_field(noLegs_0_0_2_1, LegUnitOfMeasureQty_71, InstrumentLeg_71);
        all_values.push_back(InstrumentLeg_71);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_146;
          set_field(noLegSecurityAltID_0_0_1_3_0, FIX::LegSecurityAltID{"STRING_799822815"}, LegSecAltIDGrp_NoLegSecurityAltID_146);
          set_field(noLegSecurityAltID_0_0_1_3_0, FIX::LegSecurityAltIDSource{"STRING_661355605"}, LegSecAltIDGrp_NoLegSecurityAltID_146);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_146);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_72;
        set_field(noLegs_0_0_2_2, FIX::EncodedLegIssuer{"DATA_1686641008"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::EncodedLegIssuerLen{1477622940}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::EncodedLegSecurityDesc{"DATA_1621671492"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::EncodedLegSecurityDescLen{1353414600}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegCFICode{"STRING_1930958486"}, InstrumentLeg_72);
        FIX::LegContractMultiplier LegContractMultiplier_72;
        LegContractMultiplier_72.setString("13567358");
set_field(noLegs_0_0_2_2, LegContractMultiplier_72, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegContractMultiplierUnit{1783026075}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegContractSettlMonth{"MONTHYEAR_18501042"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegCountryOfIssue{"COUNTRY_1488368589"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1407254195"}, InstrumentLeg_72);
        FIX::LegCouponRate LegCouponRate_72;
        LegCouponRate_72.setString("90.800000");
set_field(noLegs_0_0_2_2, LegCouponRate_72, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegCreditRating{"STRING_941284310"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegCurrency{"CAN"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegDatedDate{"LOCALMKTDATE_1077148643"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegExerciseStyle{1370786943}, InstrumentLeg_72);
        FIX::LegFactor LegFactor_72;
        LegFactor_72.setString("7163253");
set_field(noLegs_0_0_2_2, LegFactor_72, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegFlowScheduleType{1103956669}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegInstrRegistry{"STRING_1422002153"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1332790103"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegIssueDate{"LOCALMKTDATE_1135178630"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegIssuer{"STRING_1899972437"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegLocaleOfIssue{"STRING_1285969281"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegMaturityDate{"LOCALMKTDATE_1273492510"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegMaturityMonthYear{"MONTHYEAR_271851467"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegMaturityTime{"TZTIMEONLY_1332045465"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegOptAttribute{'7'}, InstrumentLeg_72);
        FIX::LegOptionRatio LegOptionRatio_72;
        LegOptionRatio_72.setString("8717801");
set_field(noLegs_0_0_2_2, LegOptionRatio_72, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegPool{"STRING_1064496712"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegPriceUnitOfMeasure{"STRING_1598564145"}, InstrumentLeg_72);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_72;
        LegPriceUnitOfMeasureQty_72.setString("15331357");
set_field(noLegs_0_0_2_2, LegPriceUnitOfMeasureQty_72, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegProduct{603654073}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegPutOrCall{928703437}, InstrumentLeg_72);
        FIX::LegRatioQty LegRatioQty_72;
        LegRatioQty_72.setString("10073236");
set_field(noLegs_0_0_2_2, LegRatioQty_72, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1957068673"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegRepoCollateralSecurityType{"STRING_712178276"}, InstrumentLeg_72);
        FIX::LegRepurchaseRate LegRepurchaseRate_72;
        LegRepurchaseRate_72.setString("57.770000");
set_field(noLegs_0_0_2_2, LegRepurchaseRate_72, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegRepurchaseTerm{1592611101}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegSecurityDesc{"STRING_730679318"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegSecurityExchange{"EXCHANGE_1704944367"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegSecurityID{"STRING_852381648"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegSecurityIDSource{"STRING_496724750"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegSecuritySubType{"STRING_498745029"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegSecurityType{"STRING_847251328"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegSide{'5'}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegStateOrProvinceOfIssue{"STRING_1575893673"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_72);
        FIX::LegStrikePrice LegStrikePrice_72;
        LegStrikePrice_72.setString("5323666");
set_field(noLegs_0_0_2_2, LegStrikePrice_72, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegSymbol{"STRING_1492556777"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegSymbolSfx{"STRING_419938054"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegTimeUnit{"STRING_1667545324"}, InstrumentLeg_72);
        set_field(noLegs_0_0_2_2, FIX::LegUnitOfMeasure{"STRING_1245045566"}, InstrumentLeg_72);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_72;
        LegUnitOfMeasureQty_72.setString("17059073");
set_field(noLegs_0_0_2_2, LegUnitOfMeasureQty_72, InstrumentLeg_72);
        all_values.push_back(InstrumentLeg_72);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_147;
          set_field(noLegSecurityAltID_0_0_2_3_0, FIX::LegSecurityAltID{"STRING_1516897033"}, LegSecAltIDGrp_NoLegSecurityAltID_147);
          set_field(noLegSecurityAltID_0_0_2_3_0, FIX::LegSecurityAltIDSource{"STRING_890469152"}, LegSecAltIDGrp_NoLegSecurityAltID_147);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_147);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_2.addGroup(noLegSecurityAltID_0_0_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_148;
          set_field(noLegSecurityAltID_0_0_2_3_1, FIX::LegSecurityAltID{"STRING_1592295516"}, LegSecAltIDGrp_NoLegSecurityAltID_148);
          set_field(noLegSecurityAltID_0_0_2_3_1, FIX::LegSecurityAltIDSource{"STRING_241193556"}, LegSecAltIDGrp_NoLegSecurityAltID_148);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_148);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_2.addGroup(noLegSecurityAltID_0_0_2_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_2);
      }
      // Instrument
      multiset<string> Instrument_41;
      FIX::AttachmentPoint AttachmentPoint_41;
      AttachmentPoint_41.setString("58.650000");
set_field(noQuoteEntries_0_1_0, AttachmentPoint_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::CFICode{"STRING_1043376013"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::CPProgram{99}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::CPRegType{"STRING_411136290"}, Instrument_41);
      FIX::CapPrice CapPrice_41;
      CapPrice_41.setString("19720794");
set_field(noQuoteEntries_0_1_0, CapPrice_41, Instrument_41);
      FIX::ContractMultiplier ContractMultiplier_41;
      ContractMultiplier_41.setString("6341693");
set_field(noQuoteEntries_0_1_0, ContractMultiplier_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::ContractMultiplierUnit{2}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::ContractSettlMonth{"MONTHYEAR_536774079"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::CountryOfIssue{"COUNTRY_850745082"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1813332416"}, Instrument_41);
      FIX::CouponRate CouponRate_41;
      CouponRate_41.setString("33.970000");
set_field(noQuoteEntries_0_1_0, CouponRate_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::CreditRating{"STRING_408205801"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::DatedDate{"LOCALMKTDATE_518230417"}, Instrument_41);
      FIX::DetachmentPoint DetachmentPoint_41;
      DetachmentPoint_41.setString("81.480000");
set_field(noQuoteEntries_0_1_0, DetachmentPoint_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedIssuer{"DATA_906950830"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedIssuerLen{1365481745}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedSecurityDesc{"DATA_135000709"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedSecurityDescLen{335360855}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::ExerciseStyle{2}, Instrument_41);
      FIX::Factor Factor_41;
      Factor_41.setString("13696323");
set_field(noQuoteEntries_0_1_0, Factor_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::FlexProductEligibilityIndicator{false}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::FlexibleIndicator{true}, Instrument_41);
      FIX::FloorPrice FloorPrice_41;
      FloorPrice_41.setString("17895703");
set_field(noQuoteEntries_0_1_0, FloorPrice_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::FlowScheduleType{1}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::InstrRegistry{"STRING_2026155064"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1181343413"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::IssueDate{"LOCALMKTDATE_1395568450"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::Issuer{"STRING_90979553"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::ListMethod{1}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::LocaleOfIssue{"STRING_1636762006"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::MaturityDate{"LOCALMKTDATE_2045945418"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::MaturityMonthYear{"MONTHYEAR_1669531295"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::MaturityTime{"TZTIMEONLY_1263607690"}, Instrument_41);
      FIX::MinPriceIncrement MinPriceIncrement_41;
      MinPriceIncrement_41.setString("3095980");
set_field(noQuoteEntries_0_1_0, MinPriceIncrement_41, Instrument_41);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_41;
      MinPriceIncrementAmount_41.setString("14941270");
set_field(noQuoteEntries_0_1_0, MinPriceIncrementAmount_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::NTPositionLimit{1897776994}, Instrument_41);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_41;
      NotionalPercentageOutstanding_41.setString("93.760000");
set_field(noQuoteEntries_0_1_0, NotionalPercentageOutstanding_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::OptAttribute{'2'}, Instrument_41);
      FIX::OptPayoutAmount OptPayoutAmount_41;
      OptPayoutAmount_41.setString("6010384");
set_field(noQuoteEntries_0_1_0, OptPayoutAmount_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::OptPayoutType{2}, Instrument_41);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_41;
      OriginalNotionalPercentageOutstanding_41.setString("9.260000");
set_field(noQuoteEntries_0_1_0, OriginalNotionalPercentageOutstanding_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::Pool{"STRING_1009244229"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::PositionLimit{714398561}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::PriceUnitOfMeasure{"STRING_1916195060"}, Instrument_41);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_41;
      PriceUnitOfMeasureQty_41.setString("20798803");
set_field(noQuoteEntries_0_1_0, PriceUnitOfMeasureQty_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::Product{5}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::ProductComplex{"STRING_104072267"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::PutOrCall{0}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::RedemptionDate{"LOCALMKTDATE_124714796"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::RepoCollateralSecurityType{"STRING_971799817"}, Instrument_41);
      FIX::RepurchaseRate RepurchaseRate_41;
      RepurchaseRate_41.setString("88.790000");
set_field(noQuoteEntries_0_1_0, RepurchaseRate_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::RepurchaseTerm{1914285158}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::RestructuringType{"STRING_XR"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityDesc{"STRING_2028213943"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityExchange{"EXCHANGE_1114795559"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityGroup{"STRING_393448808"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityID{"STRING_1276298745"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityIDSource{"STRING_F"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityStatus{"STRING_2"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::SecuritySubType{"STRING_765577103"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityType{"STRING_CMB"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::Seniority{"STRING_SB"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::SettlMethod{'P'}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::SettleOnOpenFlag{"STRING_1413834943"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::StateOrProvinceOfIssue{"STRING_2035778834"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::StrikeCurrency{"CAN"}, Instrument_41);
      FIX::StrikeMultiplier StrikeMultiplier_41;
      StrikeMultiplier_41.setString("19191963");
set_field(noQuoteEntries_0_1_0, StrikeMultiplier_41, Instrument_41);
      FIX::StrikePrice StrikePrice_41;
      StrikePrice_41.setString("2330329");
set_field(noQuoteEntries_0_1_0, StrikePrice_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_41);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_41;
      StrikePriceBoundaryPrecision_41.setString("36.420000");
set_field(noQuoteEntries_0_1_0, StrikePriceBoundaryPrecision_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::StrikePriceDeterminationMethod{3}, Instrument_41);
      FIX::StrikeValue StrikeValue_41;
      StrikeValue_41.setString("7072373");
set_field(noQuoteEntries_0_1_0, StrikeValue_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::Symbol{"STRING_1690149068"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::TimeUnit{"STRING_Yr"}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_41);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_41;
      UnitOfMeasureQty_41.setString("20080670");
set_field(noQuoteEntries_0_1_0, UnitOfMeasureQty_41, Instrument_41);
      set_field(noQuoteEntries_0_1_0, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_41);
      all_values.push_back(Instrument_41);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_81;
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_81);
        FIX::ComplexEventPrice ComplexEventPrice_81;
        ComplexEventPrice_81.setString("3367478");
set_field(noComplexEvents_0_0_2_0, ComplexEventPrice_81, ComplexEvents_NoComplexEvents_81);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_81);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_81;
        ComplexEventPriceBoundaryPrecision_81.setString("62.390000");
set_field(noComplexEvents_0_0_2_0, ComplexEventPriceBoundaryPrecision_81, ComplexEvents_NoComplexEvents_81);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_81);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_81);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_81;
        ComplexOptPayoutAmount_81.setString("10196713");
set_field(noComplexEvents_0_0_2_0, ComplexOptPayoutAmount_81, ComplexEvents_NoComplexEvents_81);
        all_values.push_back(ComplexEvents_NoComplexEvents_81);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_162;
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 9, 27, 22, 9, 2016)}, ComplexEventDates_NoComplexEventDates_162);
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 29, 58, 16, 8, 2006)}, ComplexEventDates_NoComplexEventDates_162);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_162);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_329;
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 26, 28)}, ComplexEventTimes_NoComplexEventTimes_329);
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 13, 2)}, ComplexEventTimes_NoComplexEventTimes_329);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_329);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_82;
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_82);
        FIX::ComplexEventPrice ComplexEventPrice_82;
        ComplexEventPrice_82.setString("4358861");
set_field(noComplexEvents_0_0_2_1, ComplexEventPrice_82, ComplexEvents_NoComplexEvents_82);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_82);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_82;
        ComplexEventPriceBoundaryPrecision_82.setString("22.700000");
set_field(noComplexEvents_0_0_2_1, ComplexEventPriceBoundaryPrecision_82, ComplexEvents_NoComplexEvents_82);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_82);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_82);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_82;
        ComplexOptPayoutAmount_82.setString("3555899");
set_field(noComplexEvents_0_0_2_1, ComplexOptPayoutAmount_82, ComplexEvents_NoComplexEvents_82);
        all_values.push_back(ComplexEvents_NoComplexEvents_82);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_163;
          set_field(noComplexEventDates_0_0_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 4, 56, 14, 5, 2006)}, ComplexEventDates_NoComplexEventDates_163);
          set_field(noComplexEventDates_0_0_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 51, 38, 8, 4, 2003)}, ComplexEventDates_NoComplexEventDates_163);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_163);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_330;
            set_field(noComplexEventTimes_0_0_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 8, 7)}, ComplexEventTimes_NoComplexEventTimes_330);
            set_field(noComplexEventTimes_0_0_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 20, 20)}, ComplexEventTimes_NoComplexEventTimes_330);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_330);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_331;
            set_field(noComplexEventTimes_0_0_1_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 16, 24)}, ComplexEventTimes_NoComplexEventTimes_331);
            set_field(noComplexEventTimes_0_0_1_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 36, 40)}, ComplexEventTimes_NoComplexEventTimes_331);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_331);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_332;
            set_field(noComplexEventTimes_0_0_1_0_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 36, 38)}, ComplexEventTimes_NoComplexEventTimes_332);
            set_field(noComplexEventTimes_0_0_1_0_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 0, 6)}, ComplexEventTimes_NoComplexEventTimes_332);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_332);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_2);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_164;
          set_field(noComplexEventDates_0_0_1_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 44, 5, 26, 12, 2001)}, ComplexEventDates_NoComplexEventDates_164);
          set_field(noComplexEventDates_0_0_1_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 55, 53, 2, 3, 2017)}, ComplexEventDates_NoComplexEventDates_164);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_164);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_333;
            set_field(noComplexEventTimes_0_0_1_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 54, 9)}, ComplexEventTimes_NoComplexEventTimes_333);
            set_field(noComplexEventTimes_0_0_1_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 45, 18)}, ComplexEventTimes_NoComplexEventTimes_333);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_333);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_1.addGroup(noComplexEventTimes_0_0_1_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_334;
            set_field(noComplexEventTimes_0_0_1_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 46, 20)}, ComplexEventTimes_NoComplexEventTimes_334);
            set_field(noComplexEventTimes_0_0_1_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 20, 37)}, ComplexEventTimes_NoComplexEventTimes_334);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_334);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_1.addGroup(noComplexEventTimes_0_0_1_1_4_1);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_87;
        set_field(noEvents_0_0_2_0, FIX::EventDate{"LOCALMKTDATE_663236583"}, EvntGrp_NoEvents_87);
        FIX::EventPx EventPx_87;
        EventPx_87.setString("21112488");
set_field(noEvents_0_0_2_0, EventPx_87, EvntGrp_NoEvents_87);
        set_field(noEvents_0_0_2_0, FIX::EventText{"STRING_1709417965"}, EvntGrp_NoEvents_87);
        set_field(noEvents_0_0_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(1, 13, 47, 14, 9, 2016)}, EvntGrp_NoEvents_87);
        set_field(noEvents_0_0_2_0, FIX::EventType{13}, EvntGrp_NoEvents_87);
        all_values.push_back(EvntGrp_NoEvents_87);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_88;
        set_field(noEvents_0_0_2_1, FIX::EventDate{"LOCALMKTDATE_1261241259"}, EvntGrp_NoEvents_88);
        FIX::EventPx EventPx_88;
        EventPx_88.setString("1253989");
set_field(noEvents_0_0_2_1, EventPx_88, EvntGrp_NoEvents_88);
        set_field(noEvents_0_0_2_1, FIX::EventText{"STRING_1190417391"}, EvntGrp_NoEvents_88);
        set_field(noEvents_0_0_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(15, 45, 24, 10, 10, 2015)}, EvntGrp_NoEvents_88);
        set_field(noEvents_0_0_2_1, FIX::EventType{9}, EvntGrp_NoEvents_88);
        all_values.push_back(EvntGrp_NoEvents_88);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_89;
        set_field(noEvents_0_0_2_2, FIX::EventDate{"LOCALMKTDATE_764809707"}, EvntGrp_NoEvents_89);
        FIX::EventPx EventPx_89;
        EventPx_89.setString("12639580");
set_field(noEvents_0_0_2_2, EventPx_89, EvntGrp_NoEvents_89);
        set_field(noEvents_0_0_2_2, FIX::EventText{"STRING_663120727"}, EvntGrp_NoEvents_89);
        set_field(noEvents_0_0_2_2, FIX::EventTime{FIX::UTCTIMESTAMP(13, 2, 59, 2, 11, 2009)}, EvntGrp_NoEvents_89);
        set_field(noEvents_0_0_2_2, FIX::EventType{9}, EvntGrp_NoEvents_89);
        all_values.push_back(EvntGrp_NoEvents_89);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_79;
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyID{"STRING_1204980965"}, InstrumentParties_NoInstrumentParties_79);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_79);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyRole{852936764}, InstrumentParties_NoInstrumentParties_79);
        all_values.push_back(InstrumentParties_NoInstrumentParties_79);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162;
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubID{"STRING_1913948623"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162);
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubIDType{684981705}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163;
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubID{"STRING_1708946545"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163);
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubIDType{1162541687}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_84;
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltID{"STRING_1834345503"}, SecAltIDGrp_NoSecurityAltID_84);
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltIDSource{"STRING_205475430"}, SecAltIDGrp_NoSecurityAltID_84);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_84);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_82;
      set_field(noQuoteEntries_0_1_0, FIX::SecurityXML{"XMLDATA_706967859"}, SecurityXML_82);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityXMLLen{1398573334}, SecurityXML_82);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityXMLSchema{"STRING_202299008"}, SecurityXML_82);
      all_values.push_back(SecurityXML_82);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_1;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_1;
      FIX::BidForwardPoints BidForwardPoints_7;
      BidForwardPoints_7.setString("9633769");
set_field(noQuoteEntries_0_1_1, BidForwardPoints_7, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::BidForwardPoints2 BidForwardPoints2_7;
      BidForwardPoints2_7.setString("15035737");
set_field(noQuoteEntries_0_1_1, BidForwardPoints2_7, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::BidPx BidPx_7;
      BidPx_7.setString("15536884");
set_field(noQuoteEntries_0_1_1, BidPx_7, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::BidSize BidSize_7;
      BidSize_7.setString("6247497");
set_field(noQuoteEntries_0_1_1, BidSize_7, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::BidSpotRate BidSpotRate_7;
      BidSpotRate_7.setString("13535876");
set_field(noQuoteEntries_0_1_1, BidSpotRate_7, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::BidYield BidYield_7;
      BidYield_7.setString("44.730000");
set_field(noQuoteEntries_0_1_1, BidYield_7, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::BookingType{2}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::Currency{"USD"}, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::MidPx MidPx_7;
      MidPx_7.setString("232425");
set_field(noQuoteEntries_0_1_1, MidPx_7, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::MidYield MidYield_7;
      MidYield_7.setString("40.060000");
set_field(noQuoteEntries_0_1_1, MidYield_7, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OfferForwardPoints OfferForwardPoints_7;
      OfferForwardPoints_7.setString("20250079");
set_field(noQuoteEntries_0_1_1, OfferForwardPoints_7, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OfferForwardPoints2 OfferForwardPoints2_7;
      OfferForwardPoints2_7.setString("18455283");
set_field(noQuoteEntries_0_1_1, OfferForwardPoints2_7, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OfferPx OfferPx_7;
      OfferPx_7.setString("8307956");
set_field(noQuoteEntries_0_1_1, OfferPx_7, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OfferSize OfferSize_7;
      OfferSize_7.setString("10983371");
set_field(noQuoteEntries_0_1_1, OfferSize_7, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OfferSpotRate OfferSpotRate_7;
      OfferSpotRate_7.setString("14840956");
set_field(noQuoteEntries_0_1_1, OfferSpotRate_7, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OfferYield OfferYield_7;
      OfferYield_7.setString("15.110000");
set_field(noQuoteEntries_0_1_1, OfferYield_7, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::OrdType{'5'}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::OrderCapacity{'G'}, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OrderQty2 OrderQty2_8;
      OrderQty2_8.setString("12136082");
set_field(noQuoteEntries_0_1_1, OrderQty2_8, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_F"}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::QuoteEntryID{"STRING_99419688"}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::QuoteEntryRejectReason{1898589981}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::QuoteEntryStatus{5}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::SettlDate{"LOCALMKTDATE_1261961375"}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::SettlDate2{"LOCALMKTDATE_1697329297"}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::TradingSessionID{"STRING_3"}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::TradingSessionSubID{"STRING_4"}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::TransactTime{FIX::UTCTIMESTAMP(11, 14, 12, 11, 12, 2006)}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(12, 30, 8, 17, 8, 2014)}, QuotEntryAckGrp_NoQuoteEntries_1);
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_1);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_73;
        set_field(noLegs_0_1_2_0, FIX::EncodedLegIssuer{"DATA_1307451495"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::EncodedLegIssuerLen{588179606}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::EncodedLegSecurityDesc{"DATA_1542764632"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::EncodedLegSecurityDescLen{644063491}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegCFICode{"STRING_948851118"}, InstrumentLeg_73);
        FIX::LegContractMultiplier LegContractMultiplier_73;
        LegContractMultiplier_73.setString("16985990");
set_field(noLegs_0_1_2_0, LegContractMultiplier_73, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegContractMultiplierUnit{977018204}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_14975746"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegCountryOfIssue{"COUNTRY_1514812160"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1076437892"}, InstrumentLeg_73);
        FIX::LegCouponRate LegCouponRate_73;
        LegCouponRate_73.setString("57.270000");
set_field(noLegs_0_1_2_0, LegCouponRate_73, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegCreditRating{"STRING_892488134"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegCurrency{"USD"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegDatedDate{"LOCALMKTDATE_2104509610"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegExerciseStyle{1658352426}, InstrumentLeg_73);
        FIX::LegFactor LegFactor_73;
        LegFactor_73.setString("17202248");
set_field(noLegs_0_1_2_0, LegFactor_73, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegFlowScheduleType{420137125}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegInstrRegistry{"STRING_1180604592"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_792931669"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegIssueDate{"LOCALMKTDATE_239338405"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegIssuer{"STRING_109061523"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegLocaleOfIssue{"STRING_490388159"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_1412127329"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1356016576"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegMaturityTime{"TZTIMEONLY_2076552449"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegOptAttribute{'3'}, InstrumentLeg_73);
        FIX::LegOptionRatio LegOptionRatio_73;
        LegOptionRatio_73.setString("19229197");
set_field(noLegs_0_1_2_0, LegOptionRatio_73, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegPool{"STRING_1538475640"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegPriceUnitOfMeasure{"STRING_64041336"}, InstrumentLeg_73);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_73;
        LegPriceUnitOfMeasureQty_73.setString("2198635");
set_field(noLegs_0_1_2_0, LegPriceUnitOfMeasureQty_73, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegProduct{698443488}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegPutOrCall{652220943}, InstrumentLeg_73);
        FIX::LegRatioQty LegRatioQty_73;
        LegRatioQty_73.setString("17626282");
set_field(noLegs_0_1_2_0, LegRatioQty_73, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1342506979"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegRepoCollateralSecurityType{"STRING_1601072061"}, InstrumentLeg_73);
        FIX::LegRepurchaseRate LegRepurchaseRate_73;
        LegRepurchaseRate_73.setString("36.580000");
set_field(noLegs_0_1_2_0, LegRepurchaseRate_73, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegRepurchaseTerm{172041536}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityDesc{"STRING_1616047807"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityExchange{"EXCHANGE_681072170"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityID{"STRING_1248479428"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityIDSource{"STRING_1382129886"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegSecuritySubType{"STRING_1573560304"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityType{"STRING_1439395048"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegSide{'6'}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_1530586267"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_73);
        FIX::LegStrikePrice LegStrikePrice_73;
        LegStrikePrice_73.setString("19507233");
set_field(noLegs_0_1_2_0, LegStrikePrice_73, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegSymbol{"STRING_2130868418"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegSymbolSfx{"STRING_1063730519"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegTimeUnit{"STRING_42578149"}, InstrumentLeg_73);
        set_field(noLegs_0_1_2_0, FIX::LegUnitOfMeasure{"STRING_92446294"}, InstrumentLeg_73);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_73;
        LegUnitOfMeasureQty_73.setString("15541186");
set_field(noLegs_0_1_2_0, LegUnitOfMeasureQty_73, InstrumentLeg_73);
        all_values.push_back(InstrumentLeg_73);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_149;
          set_field(noLegSecurityAltID_0_1_0_3_0, FIX::LegSecurityAltID{"STRING_1448462870"}, LegSecAltIDGrp_NoLegSecurityAltID_149);
          set_field(noLegSecurityAltID_0_1_0_3_0, FIX::LegSecurityAltIDSource{"STRING_1483187479"}, LegSecAltIDGrp_NoLegSecurityAltID_149);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_149);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_150;
          set_field(noLegSecurityAltID_0_1_0_3_1, FIX::LegSecurityAltID{"STRING_1761362809"}, LegSecAltIDGrp_NoLegSecurityAltID_150);
          set_field(noLegSecurityAltID_0_1_0_3_1, FIX::LegSecurityAltIDSource{"STRING_1223898963"}, LegSecAltIDGrp_NoLegSecurityAltID_150);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_150);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_0);
      }
      // Instrument
      multiset<string> Instrument_42;
      FIX::AttachmentPoint AttachmentPoint_42;
      AttachmentPoint_42.setString("94.720000");
set_field(noQuoteEntries_0_1_1, AttachmentPoint_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::CFICode{"STRING_1825404145"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::CPProgram{2}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::CPRegType{"STRING_1572622960"}, Instrument_42);
      FIX::CapPrice CapPrice_42;
      CapPrice_42.setString("3301414");
set_field(noQuoteEntries_0_1_1, CapPrice_42, Instrument_42);
      FIX::ContractMultiplier ContractMultiplier_42;
      ContractMultiplier_42.setString("10589071");
set_field(noQuoteEntries_0_1_1, ContractMultiplier_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::ContractMultiplierUnit{0}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::ContractSettlMonth{"MONTHYEAR_1931213501"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::CountryOfIssue{"COUNTRY_225167137"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::CouponPaymentDate{"LOCALMKTDATE_939687827"}, Instrument_42);
      FIX::CouponRate CouponRate_42;
      CouponRate_42.setString("76.600000");
set_field(noQuoteEntries_0_1_1, CouponRate_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::CreditRating{"STRING_906239307"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::DatedDate{"LOCALMKTDATE_40683608"}, Instrument_42);
      FIX::DetachmentPoint DetachmentPoint_42;
      DetachmentPoint_42.setString("38.980000");
set_field(noQuoteEntries_0_1_1, DetachmentPoint_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::EncodedIssuer{"DATA_332315964"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::EncodedIssuerLen{1480078656}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::EncodedSecurityDesc{"DATA_1332481512"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::EncodedSecurityDescLen{1862902231}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::ExerciseStyle{1}, Instrument_42);
      FIX::Factor Factor_42;
      Factor_42.setString("16032803");
set_field(noQuoteEntries_0_1_1, Factor_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::FlexibleIndicator{false}, Instrument_42);
      FIX::FloorPrice FloorPrice_42;
      FloorPrice_42.setString("5195272");
set_field(noQuoteEntries_0_1_1, FloorPrice_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::FlowScheduleType{0}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::InstrRegistry{"STRING_358689899"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::InstrmtAssignmentMethod{'2'}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::InterestAccrualDate{"LOCALMKTDATE_1015941956"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::IssueDate{"LOCALMKTDATE_1807152769"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::Issuer{"STRING_1409349744"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::ListMethod{1}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::LocaleOfIssue{"STRING_883568084"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::MaturityDate{"LOCALMKTDATE_136045568"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::MaturityMonthYear{"MONTHYEAR_307741614"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::MaturityTime{"TZTIMEONLY_179846989"}, Instrument_42);
      FIX::MinPriceIncrement MinPriceIncrement_42;
      MinPriceIncrement_42.setString("17086685");
set_field(noQuoteEntries_0_1_1, MinPriceIncrement_42, Instrument_42);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_42;
      MinPriceIncrementAmount_42.setString("6378830");
set_field(noQuoteEntries_0_1_1, MinPriceIncrementAmount_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::NTPositionLimit{1238754116}, Instrument_42);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_42;
      NotionalPercentageOutstanding_42.setString("11.720000");
set_field(noQuoteEntries_0_1_1, NotionalPercentageOutstanding_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::OptAttribute{'4'}, Instrument_42);
      FIX::OptPayoutAmount OptPayoutAmount_42;
      OptPayoutAmount_42.setString("14639212");
set_field(noQuoteEntries_0_1_1, OptPayoutAmount_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::OptPayoutType{2}, Instrument_42);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_42;
      OriginalNotionalPercentageOutstanding_42.setString("5.690000");
set_field(noQuoteEntries_0_1_1, OriginalNotionalPercentageOutstanding_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::Pool{"STRING_222676913"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::PositionLimit{1309202607}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::PriceUnitOfMeasure{"STRING_554992877"}, Instrument_42);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_42;
      PriceUnitOfMeasureQty_42.setString("6417976");
set_field(noQuoteEntries_0_1_1, PriceUnitOfMeasureQty_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::Product{4}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::ProductComplex{"STRING_270411460"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::PutOrCall{1}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::RedemptionDate{"LOCALMKTDATE_1096609047"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::RepoCollateralSecurityType{"STRING_1936553435"}, Instrument_42);
      FIX::RepurchaseRate RepurchaseRate_42;
      RepurchaseRate_42.setString("0.560000");
set_field(noQuoteEntries_0_1_1, RepurchaseRate_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::RepurchaseTerm{1616136281}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::RestructuringType{"STRING_FR"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityDesc{"STRING_1549589956"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityExchange{"EXCHANGE_1542298546"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityGroup{"STRING_366248220"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityID{"STRING_1209259077"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityIDSource{"STRING_8"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityStatus{"STRING_2"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::SecuritySubType{"STRING_2092827162"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityType{"STRING_FOR"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::Seniority{"STRING_SB"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::SettlMethod{'P'}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::SettleOnOpenFlag{"STRING_501395092"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::StateOrProvinceOfIssue{"STRING_1941694007"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::StrikeCurrency{"USD"}, Instrument_42);
      FIX::StrikeMultiplier StrikeMultiplier_42;
      StrikeMultiplier_42.setString("2158232");
set_field(noQuoteEntries_0_1_1, StrikeMultiplier_42, Instrument_42);
      FIX::StrikePrice StrikePrice_42;
      StrikePrice_42.setString("6803822");
set_field(noQuoteEntries_0_1_1, StrikePrice_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::StrikePriceBoundaryMethod{4}, Instrument_42);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_42;
      StrikePriceBoundaryPrecision_42.setString("38.360000");
set_field(noQuoteEntries_0_1_1, StrikePriceBoundaryPrecision_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::StrikePriceDeterminationMethod{3}, Instrument_42);
      FIX::StrikeValue StrikeValue_42;
      StrikeValue_42.setString("12604642");
set_field(noQuoteEntries_0_1_1, StrikeValue_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::Symbol{"STRING_198061008"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::SymbolSfx{"STRING_WI"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::TimeUnit{"STRING_S"}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::UnitOfMeasure{"STRING_USD"}, Instrument_42);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_42;
      UnitOfMeasureQty_42.setString("6794346");
set_field(noQuoteEntries_0_1_1, UnitOfMeasureQty_42, Instrument_42);
      set_field(noQuoteEntries_0_1_1, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_42);
      all_values.push_back(Instrument_42);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_83;
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_83);
        FIX::ComplexEventPrice ComplexEventPrice_83;
        ComplexEventPrice_83.setString("2566513");
set_field(noComplexEvents_0_1_2_0, ComplexEventPrice_83, ComplexEvents_NoComplexEvents_83);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_83);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_83;
        ComplexEventPriceBoundaryPrecision_83.setString("10.060000");
set_field(noComplexEvents_0_1_2_0, ComplexEventPriceBoundaryPrecision_83, ComplexEvents_NoComplexEvents_83);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_83);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_83);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_83;
        ComplexOptPayoutAmount_83.setString("3342164");
set_field(noComplexEvents_0_1_2_0, ComplexOptPayoutAmount_83, ComplexEvents_NoComplexEvents_83);
        all_values.push_back(ComplexEvents_NoComplexEvents_83);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_165;
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 45, 9, 9, 2, 2012)}, ComplexEventDates_NoComplexEventDates_165);
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 16, 51, 5, 5, 2017)}, ComplexEventDates_NoComplexEventDates_165);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_165);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_335;
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 23, 44)}, ComplexEventTimes_NoComplexEventTimes_335);
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 3, 47)}, ComplexEventTimes_NoComplexEventTimes_335);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_335);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_336;
            set_field(noComplexEventTimes_0_1_0_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 47, 54)}, ComplexEventTimes_NoComplexEventTimes_336);
            set_field(noComplexEventTimes_0_1_0_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 50, 53)}, ComplexEventTimes_NoComplexEventTimes_336);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_336);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_337;
            set_field(noComplexEventTimes_0_1_0_0_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 38, 34)}, ComplexEventTimes_NoComplexEventTimes_337);
            set_field(noComplexEventTimes_0_1_0_0_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 22, 19)}, ComplexEventTimes_NoComplexEventTimes_337);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_337);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_2);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_166;
          set_field(noComplexEventDates_0_1_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 10, 22, 7, 8, 2012)}, ComplexEventDates_NoComplexEventDates_166);
          set_field(noComplexEventDates_0_1_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 9, 56, 13, 7, 2009)}, ComplexEventDates_NoComplexEventDates_166);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_166);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_338;
            set_field(noComplexEventTimes_0_1_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 59, 40)}, ComplexEventTimes_NoComplexEventTimes_338);
            set_field(noComplexEventTimes_0_1_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 30, 51)}, ComplexEventTimes_NoComplexEventTimes_338);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_338);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_90;
        set_field(noEvents_0_1_2_0, FIX::EventDate{"LOCALMKTDATE_1233917802"}, EvntGrp_NoEvents_90);
        FIX::EventPx EventPx_90;
        EventPx_90.setString("1925637");
set_field(noEvents_0_1_2_0, EventPx_90, EvntGrp_NoEvents_90);
        set_field(noEvents_0_1_2_0, FIX::EventText{"STRING_1297903785"}, EvntGrp_NoEvents_90);
        set_field(noEvents_0_1_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(6, 59, 58, 7, 11, 2006)}, EvntGrp_NoEvents_90);
        set_field(noEvents_0_1_2_0, FIX::EventType{7}, EvntGrp_NoEvents_90);
        all_values.push_back(EvntGrp_NoEvents_90);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_91;
        set_field(noEvents_0_1_2_1, FIX::EventDate{"LOCALMKTDATE_851410189"}, EvntGrp_NoEvents_91);
        FIX::EventPx EventPx_91;
        EventPx_91.setString("16844685");
set_field(noEvents_0_1_2_1, EventPx_91, EvntGrp_NoEvents_91);
        set_field(noEvents_0_1_2_1, FIX::EventText{"STRING_1498976252"}, EvntGrp_NoEvents_91);
        set_field(noEvents_0_1_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(0, 34, 56, 25, 9, 2016)}, EvntGrp_NoEvents_91);
        set_field(noEvents_0_1_2_1, FIX::EventType{11}, EvntGrp_NoEvents_91);
        all_values.push_back(EvntGrp_NoEvents_91);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_92;
        set_field(noEvents_0_1_2_2, FIX::EventDate{"LOCALMKTDATE_1602148886"}, EvntGrp_NoEvents_92);
        FIX::EventPx EventPx_92;
        EventPx_92.setString("11170017");
set_field(noEvents_0_1_2_2, EventPx_92, EvntGrp_NoEvents_92);
        set_field(noEvents_0_1_2_2, FIX::EventText{"STRING_1147004441"}, EvntGrp_NoEvents_92);
        set_field(noEvents_0_1_2_2, FIX::EventTime{FIX::UTCTIMESTAMP(18, 28, 28, 13, 8, 2008)}, EvntGrp_NoEvents_92);
        set_field(noEvents_0_1_2_2, FIX::EventType{4}, EvntGrp_NoEvents_92);
        all_values.push_back(EvntGrp_NoEvents_92);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_80;
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyID{"STRING_1699642250"}, InstrumentParties_NoInstrumentParties_80);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_80);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyRole{683643667}, InstrumentParties_NoInstrumentParties_80);
        all_values.push_back(InstrumentParties_NoInstrumentParties_80);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164;
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubID{"STRING_1157414709"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164);
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubIDType{1076708129}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165;
          set_field(noInstrumentPartySubIDs_0_1_0_3_1, FIX::InstrumentPartySubID{"STRING_909067661"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165);
          set_field(noInstrumentPartySubIDs_0_1_0_3_1, FIX::InstrumentPartySubIDType{575394407}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_81;
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyID{"STRING_1928118318"}, InstrumentParties_NoInstrumentParties_81);
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_81);
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyRole{2074370659}, InstrumentParties_NoInstrumentParties_81);
        all_values.push_back(InstrumentParties_NoInstrumentParties_81);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166;
          set_field(noInstrumentPartySubIDs_0_1_1_3_0, FIX::InstrumentPartySubID{"STRING_1570485677"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166);
          set_field(noInstrumentPartySubIDs_0_1_1_3_0, FIX::InstrumentPartySubIDType{758375385}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167;
          set_field(noInstrumentPartySubIDs_0_1_1_3_1, FIX::InstrumentPartySubID{"STRING_2044667827"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167);
          set_field(noInstrumentPartySubIDs_0_1_1_3_1, FIX::InstrumentPartySubIDType{83600567}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168;
          set_field(noInstrumentPartySubIDs_0_1_1_3_2, FIX::InstrumentPartySubID{"STRING_1000809738"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168);
          set_field(noInstrumentPartySubIDs_0_1_1_3_2, FIX::InstrumentPartySubIDType{154236399}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_85;
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltID{"STRING_455474976"}, SecAltIDGrp_NoSecurityAltID_85);
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltIDSource{"STRING_1271238179"}, SecAltIDGrp_NoSecurityAltID_85);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_85);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_86;
        set_field(noSecurityAltID_0_1_2_1, FIX::SecurityAltID{"STRING_893619610"}, SecAltIDGrp_NoSecurityAltID_86);
        set_field(noSecurityAltID_0_1_2_1, FIX::SecurityAltIDSource{"STRING_196097015"}, SecAltIDGrp_NoSecurityAltID_86);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_86);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_84;
      set_field(noQuoteEntries_0_1_1, FIX::SecurityXML{"XMLDATA_825037509"}, SecurityXML_84);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityXMLLen{797824470}, SecurityXML_84);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityXMLSchema{"STRING_1630618203"}, SecurityXML_84);
      all_values.push_back(SecurityXML_84);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_1);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_59;
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1143080590"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingIssuerLen{1110081061}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_4089898"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingSecurityDescLen{1653687454}, UnderlyingInstrument_59);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_59;
    UnderlyingAdjustedQuantity_59.setString("5727577");
set_field(noQuoteSets_0_0, UnderlyingAdjustedQuantity_59, UnderlyingInstrument_59);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_59;
    UnderlyingAllocationPercent_59.setString("21.480000");
set_field(noQuoteSets_0_0, UnderlyingAllocationPercent_59, UnderlyingInstrument_59);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_59;
    UnderlyingAttachmentPoint_59.setString("6.990000");
set_field(noQuoteSets_0_0, UnderlyingAttachmentPoint_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCFICode{"STRING_1256401457"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCPProgram{"STRING_2000558188"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCPRegType{"STRING_544861760"}, UnderlyingInstrument_59);
    FIX::UnderlyingCapValue UnderlyingCapValue_59;
    UnderlyingCapValue_59.setString("1856259");
set_field(noQuoteSets_0_0, UnderlyingCapValue_59, UnderlyingInstrument_59);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_59;
    UnderlyingCashAmount_59.setString("7621422");
set_field(noQuoteSets_0_0, UnderlyingCashAmount_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_59);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_59;
    UnderlyingContractMultiplier_59.setString("21137442");
set_field(noQuoteSets_0_0, UnderlyingContractMultiplier_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingContractMultiplierUnit{1208194806}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1047143179"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_393476760"}, UnderlyingInstrument_59);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_59;
    UnderlyingCouponRate_59.setString("68.360000");
set_field(noQuoteSets_0_0, UnderlyingCouponRate_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCreditRating{"STRING_1805518564"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_59);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_59;
    UnderlyingCurrentValue_59.setString("6588446");
set_field(noQuoteSets_0_0, UnderlyingCurrentValue_59, UnderlyingInstrument_59);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_59;
    UnderlyingDetachmentPoint_59.setString("73.390000");
set_field(noQuoteSets_0_0, UnderlyingDetachmentPoint_59, UnderlyingInstrument_59);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_59;
    UnderlyingDirtyPrice_59.setString("4614125");
set_field(noQuoteSets_0_0, UnderlyingDirtyPrice_59, UnderlyingInstrument_59);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_59;
    UnderlyingEndPrice_59.setString("11143196");
set_field(noQuoteSets_0_0, UnderlyingEndPrice_59, UnderlyingInstrument_59);
    FIX::UnderlyingEndValue UnderlyingEndValue_59;
    UnderlyingEndValue_59.setString("17161355");
set_field(noQuoteSets_0_0, UnderlyingEndValue_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingExerciseStyle{1355032182}, UnderlyingInstrument_59);
    FIX::UnderlyingFXRate UnderlyingFXRate_59;
    UnderlyingFXRate_59.setString("13104166");
set_field(noQuoteSets_0_0, UnderlyingFXRate_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_59);
    FIX::UnderlyingFactor UnderlyingFactor_59;
    UnderlyingFactor_59.setString("53730");
set_field(noQuoteSets_0_0, UnderlyingFactor_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingFlowScheduleType{793551201}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingInstrRegistry{"STRING_1536769969"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1115454066"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingIssuer{"STRING_797641099"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1042973775"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1688211856"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_353889599"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_430420827"}, UnderlyingInstrument_59);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_59;
    UnderlyingNotionalPercentageOutstanding_59.setString("96.650000");
set_field(noQuoteSets_0_0, UnderlyingNotionalPercentageOutstanding_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_59);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_59;
    UnderlyingOriginalNotionalPercentageOutstanding_59.setString("25.870000");
set_field(noQuoteSets_0_0, UnderlyingOriginalNotionalPercentageOutstanding_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_982755603"}, UnderlyingInstrument_59);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_59;
    UnderlyingPriceUnitOfMeasureQty_59.setString("9691063");
set_field(noQuoteSets_0_0, UnderlyingPriceUnitOfMeasureQty_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingProduct{2095538755}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingPutOrCall{949016212}, UnderlyingInstrument_59);
    FIX::UnderlyingPx UnderlyingPx_59;
    UnderlyingPx_59.setString("298175");
set_field(noQuoteSets_0_0, UnderlyingPx_59, UnderlyingInstrument_59);
    FIX::UnderlyingQty UnderlyingQty_59;
    UnderlyingQty_59.setString("9951982");
set_field(noQuoteSets_0_0, UnderlyingQty_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1342492972"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_661014336"}, UnderlyingInstrument_59);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_59;
    UnderlyingRepurchaseRate_59.setString("32.020000");
set_field(noQuoteSets_0_0, UnderlyingRepurchaseRate_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRepurchaseTerm{1633153912}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRestructuringType{"STRING_1375811739"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityDesc{"STRING_1312077857"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_2078051251"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityID{"STRING_1837224311"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityIDSource{"STRING_278913840"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecuritySubType{"STRING_1646703121"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityType{"STRING_1044772845"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSeniority{"STRING_1589330486"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSettlMethod{"STRING_2040392500"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_59);
    FIX::UnderlyingStartValue UnderlyingStartValue_59;
    UnderlyingStartValue_59.setString("2353980");
set_field(noQuoteSets_0_0, UnderlyingStartValue_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1429678821"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_59);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_59;
    UnderlyingStrikePrice_59.setString("3251689");
set_field(noQuoteSets_0_0, UnderlyingStrikePrice_59, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSymbol{"STRING_1706328125"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSymbolSfx{"STRING_1386928738"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingTimeUnit{"STRING_755589776"}, UnderlyingInstrument_59);
    set_field(noQuoteSets_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_355974142"}, UnderlyingInstrument_59);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_59;
    UnderlyingUnitOfMeasureQty_59.setString("15938928");
set_field(noQuoteSets_0_0, UnderlyingUnitOfMeasureQty_59, UnderlyingInstrument_59);
    all_values.push_back(UnderlyingInstrument_59);
    all_compo_names.insert("...NoQuoteSets.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_123;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1338729745"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_123);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_415515572"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_123);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_123);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_124;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1678927470"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_124);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_140262310"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_124);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_124);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_118;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_526642108"}, UnderlyingStipulations_NoUnderlyingStips_118);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1482755282"}, UnderlyingStipulations_NoUnderlyingStips_118);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_118);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_119;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1106347408"}, UnderlyingStipulations_NoUnderlyingStips_119);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1179875311"}, UnderlyingStipulations_NoUnderlyingStips_119);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_119);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_128;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_334675499"}, UndlyInstrumentParties_NoUndlyInstrumentParties_128);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_128);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{898993149}, UndlyInstrumentParties_NoUndlyInstrumentParties_128);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_128);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_623383360"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{398212622}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_251);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1069189007"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{65230198}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_252);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_291121474"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{2119334858}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_253);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_129;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_300628237"}, UndlyInstrumentParties_NoUndlyInstrumentParties_129);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_129);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{2137451127}, UndlyInstrumentParties_NoUndlyInstrumentParties_129);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_129);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2045969245"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1696295604}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_254);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noQuoteSets_0_0);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets noQuoteSets_0_1;
    // QuotSetAckGrp.NoQuoteSets
    multiset<string> QuotSetAckGrp_NoQuoteSets_1;
    set_field(noQuoteSets_0_1, FIX::LastFragment{false}, QuotSetAckGrp_NoQuoteSets_1);
    set_field(noQuoteSets_0_1, FIX::QuoteSetID{"STRING_654075373"}, QuotSetAckGrp_NoQuoteSets_1);
    set_field(noQuoteSets_0_1, FIX::QuoteSetValidUntilTime{FIX::UTCTIMESTAMP(1, 48, 3, 9, 8, 2001)}, QuotSetAckGrp_NoQuoteSets_1);
    set_field(noQuoteSets_0_1, FIX::TotNoAccQuotes{880370341}, QuotSetAckGrp_NoQuoteSets_1);
    set_field(noQuoteSets_0_1, FIX::TotNoCxldQuotes{295550019}, QuotSetAckGrp_NoQuoteSets_1);
    set_field(noQuoteSets_0_1, FIX::TotNoQuoteEntries{719049788}, QuotSetAckGrp_NoQuoteSets_1);
    set_field(noQuoteSets_0_1, FIX::TotNoRejQuotes{1986717749}, QuotSetAckGrp_NoQuoteSets_1);
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_1);
    all_compo_names.insert("...NoQuoteSets");

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_2;
      FIX::BidForwardPoints BidForwardPoints_8;
      BidForwardPoints_8.setString("16874753");
set_field(noQuoteEntries_1_1_0, BidForwardPoints_8, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::BidForwardPoints2 BidForwardPoints2_8;
      BidForwardPoints2_8.setString("1739096");
set_field(noQuoteEntries_1_1_0, BidForwardPoints2_8, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::BidPx BidPx_8;
      BidPx_8.setString("18198948");
set_field(noQuoteEntries_1_1_0, BidPx_8, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::BidSize BidSize_8;
      BidSize_8.setString("4389848");
set_field(noQuoteEntries_1_1_0, BidSize_8, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::BidSpotRate BidSpotRate_8;
      BidSpotRate_8.setString("1983257");
set_field(noQuoteEntries_1_1_0, BidSpotRate_8, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::BidYield BidYield_8;
      BidYield_8.setString("45.620000");
set_field(noQuoteEntries_1_1_0, BidYield_8, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::BookingType{1}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::Currency{"GBP"}, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::MidPx MidPx_8;
      MidPx_8.setString("11283189");
set_field(noQuoteEntries_1_1_0, MidPx_8, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::MidYield MidYield_8;
      MidYield_8.setString("59.800000");
set_field(noQuoteEntries_1_1_0, MidYield_8, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OfferForwardPoints OfferForwardPoints_8;
      OfferForwardPoints_8.setString("6616529");
set_field(noQuoteEntries_1_1_0, OfferForwardPoints_8, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OfferForwardPoints2 OfferForwardPoints2_8;
      OfferForwardPoints2_8.setString("7016355");
set_field(noQuoteEntries_1_1_0, OfferForwardPoints2_8, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OfferPx OfferPx_8;
      OfferPx_8.setString("12293334");
set_field(noQuoteEntries_1_1_0, OfferPx_8, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OfferSize OfferSize_8;
      OfferSize_8.setString("19953203");
set_field(noQuoteEntries_1_1_0, OfferSize_8, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OfferSpotRate OfferSpotRate_8;
      OfferSpotRate_8.setString("6001211");
set_field(noQuoteEntries_1_1_0, OfferSpotRate_8, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OfferYield OfferYield_8;
      OfferYield_8.setString("54.150000");
set_field(noQuoteEntries_1_1_0, OfferYield_8, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::OrdType{'I'}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::OrderCapacity{'P'}, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OrderQty2 OrderQty2_9;
      OrderQty2_9.setString("6829315");
set_field(noQuoteEntries_1_1_0, OrderQty2_9, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_2"}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::QuoteEntryID{"STRING_1491660639"}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::QuoteEntryRejectReason{1926447356}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::QuoteEntryStatus{12}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::SettlDate{"LOCALMKTDATE_1260568550"}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::SettlDate2{"LOCALMKTDATE_1162741862"}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::TradingSessionID{"STRING_1"}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::TradingSessionSubID{"STRING_7"}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::TransactTime{FIX::UTCTIMESTAMP(3, 32, 56, 12, 4, 2010)}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(1, 43, 48, 14, 5, 2014)}, QuotEntryAckGrp_NoQuoteEntries_2);
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_2);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_74;
        set_field(noLegs_1_0_2_0, FIX::EncodedLegIssuer{"DATA_232952849"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::EncodedLegIssuerLen{1408594879}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::EncodedLegSecurityDesc{"DATA_1722780502"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::EncodedLegSecurityDescLen{833074027}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegCFICode{"STRING_39256646"}, InstrumentLeg_74);
        FIX::LegContractMultiplier LegContractMultiplier_74;
        LegContractMultiplier_74.setString("21437296");
set_field(noLegs_1_0_2_0, LegContractMultiplier_74, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegContractMultiplierUnit{2087270578}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_722188159"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegCountryOfIssue{"COUNTRY_436716939"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1431447569"}, InstrumentLeg_74);
        FIX::LegCouponRate LegCouponRate_74;
        LegCouponRate_74.setString("18.680000");
set_field(noLegs_1_0_2_0, LegCouponRate_74, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegCreditRating{"STRING_1312225099"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegDatedDate{"LOCALMKTDATE_920619953"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegExerciseStyle{2100651042}, InstrumentLeg_74);
        FIX::LegFactor LegFactor_74;
        LegFactor_74.setString("13982017");
set_field(noLegs_1_0_2_0, LegFactor_74, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegFlowScheduleType{368248909}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegInstrRegistry{"STRING_837227646"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_672501420"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegIssueDate{"LOCALMKTDATE_2137271113"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegIssuer{"STRING_1393699101"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegLocaleOfIssue{"STRING_385785945"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_1957135431"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_98481471"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegMaturityTime{"TZTIMEONLY_936267928"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegOptAttribute{'8'}, InstrumentLeg_74);
        FIX::LegOptionRatio LegOptionRatio_74;
        LegOptionRatio_74.setString("13117722");
set_field(noLegs_1_0_2_0, LegOptionRatio_74, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegPool{"STRING_467585196"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegPriceUnitOfMeasure{"STRING_1076292292"}, InstrumentLeg_74);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_74;
        LegPriceUnitOfMeasureQty_74.setString("10392323");
set_field(noLegs_1_0_2_0, LegPriceUnitOfMeasureQty_74, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegProduct{700538045}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegPutOrCall{337403524}, InstrumentLeg_74);
        FIX::LegRatioQty LegRatioQty_74;
        LegRatioQty_74.setString("6145292");
set_field(noLegs_1_0_2_0, LegRatioQty_74, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1533612072"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegRepoCollateralSecurityType{"STRING_376660170"}, InstrumentLeg_74);
        FIX::LegRepurchaseRate LegRepurchaseRate_74;
        LegRepurchaseRate_74.setString("52.790000");
set_field(noLegs_1_0_2_0, LegRepurchaseRate_74, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegRepurchaseTerm{1473399002}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegSecurityDesc{"STRING_1098848330"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegSecurityExchange{"EXCHANGE_1047492218"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegSecurityID{"STRING_757362923"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegSecurityIDSource{"STRING_1600000198"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegSecuritySubType{"STRING_212233670"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegSecurityType{"STRING_1301895395"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegSide{'1'}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_1132853623"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_74);
        FIX::LegStrikePrice LegStrikePrice_74;
        LegStrikePrice_74.setString("15011025");
set_field(noLegs_1_0_2_0, LegStrikePrice_74, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegSymbol{"STRING_2092290436"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegSymbolSfx{"STRING_1039629784"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegTimeUnit{"STRING_1490889997"}, InstrumentLeg_74);
        set_field(noLegs_1_0_2_0, FIX::LegUnitOfMeasure{"STRING_1338505889"}, InstrumentLeg_74);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_74;
        LegUnitOfMeasureQty_74.setString("14254157");
set_field(noLegs_1_0_2_0, LegUnitOfMeasureQty_74, InstrumentLeg_74);
        all_values.push_back(InstrumentLeg_74);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_151;
          set_field(noLegSecurityAltID_1_0_0_3_0, FIX::LegSecurityAltID{"STRING_1436987360"}, LegSecAltIDGrp_NoLegSecurityAltID_151);
          set_field(noLegSecurityAltID_1_0_0_3_0, FIX::LegSecurityAltIDSource{"STRING_214200009"}, LegSecAltIDGrp_NoLegSecurityAltID_151);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_151);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_75;
        set_field(noLegs_1_0_2_1, FIX::EncodedLegIssuer{"DATA_50089005"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::EncodedLegIssuerLen{601275961}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::EncodedLegSecurityDesc{"DATA_681785205"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::EncodedLegSecurityDescLen{1126381297}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegCFICode{"STRING_1640508338"}, InstrumentLeg_75);
        FIX::LegContractMultiplier LegContractMultiplier_75;
        LegContractMultiplier_75.setString("13823232");
set_field(noLegs_1_0_2_1, LegContractMultiplier_75, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegContractMultiplierUnit{1463784821}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegContractSettlMonth{"MONTHYEAR_107553922"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegCountryOfIssue{"COUNTRY_768451674"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1840444992"}, InstrumentLeg_75);
        FIX::LegCouponRate LegCouponRate_75;
        LegCouponRate_75.setString("92.010000");
set_field(noLegs_1_0_2_1, LegCouponRate_75, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegCreditRating{"STRING_94367028"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegCurrency{"USD"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegDatedDate{"LOCALMKTDATE_851729952"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegExerciseStyle{244326224}, InstrumentLeg_75);
        FIX::LegFactor LegFactor_75;
        LegFactor_75.setString("19780550");
set_field(noLegs_1_0_2_1, LegFactor_75, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegFlowScheduleType{6141699}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegInstrRegistry{"STRING_1360736504"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_963425065"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegIssueDate{"LOCALMKTDATE_1261204489"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegIssuer{"STRING_1727864868"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegLocaleOfIssue{"STRING_317043950"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegMaturityDate{"LOCALMKTDATE_1206011277"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegMaturityMonthYear{"MONTHYEAR_620011004"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegMaturityTime{"TZTIMEONLY_1807933947"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegOptAttribute{'3'}, InstrumentLeg_75);
        FIX::LegOptionRatio LegOptionRatio_75;
        LegOptionRatio_75.setString("20454267");
set_field(noLegs_1_0_2_1, LegOptionRatio_75, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegPool{"STRING_960992080"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegPriceUnitOfMeasure{"STRING_1834020879"}, InstrumentLeg_75);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_75;
        LegPriceUnitOfMeasureQty_75.setString("1121430");
set_field(noLegs_1_0_2_1, LegPriceUnitOfMeasureQty_75, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegProduct{1011081085}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegPutOrCall{287813192}, InstrumentLeg_75);
        FIX::LegRatioQty LegRatioQty_75;
        LegRatioQty_75.setString("7939283");
set_field(noLegs_1_0_2_1, LegRatioQty_75, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegRedemptionDate{"LOCALMKTDATE_2137462383"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegRepoCollateralSecurityType{"STRING_1928321531"}, InstrumentLeg_75);
        FIX::LegRepurchaseRate LegRepurchaseRate_75;
        LegRepurchaseRate_75.setString("79.030000");
set_field(noLegs_1_0_2_1, LegRepurchaseRate_75, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegRepurchaseTerm{1453763556}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegSecurityDesc{"STRING_2035875453"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegSecurityExchange{"EXCHANGE_797219578"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegSecurityID{"STRING_1146724900"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegSecurityIDSource{"STRING_606721006"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegSecuritySubType{"STRING_891586606"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegSecurityType{"STRING_1938534574"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegSide{'2'}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegStateOrProvinceOfIssue{"STRING_1743316558"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_75);
        FIX::LegStrikePrice LegStrikePrice_75;
        LegStrikePrice_75.setString("17494582");
set_field(noLegs_1_0_2_1, LegStrikePrice_75, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegSymbol{"STRING_1396113654"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegSymbolSfx{"STRING_1019055286"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegTimeUnit{"STRING_863179099"}, InstrumentLeg_75);
        set_field(noLegs_1_0_2_1, FIX::LegUnitOfMeasure{"STRING_976494874"}, InstrumentLeg_75);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_75;
        LegUnitOfMeasureQty_75.setString("13360992");
set_field(noLegs_1_0_2_1, LegUnitOfMeasureQty_75, InstrumentLeg_75);
        all_values.push_back(InstrumentLeg_75);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_152;
          set_field(noLegSecurityAltID_1_0_1_3_0, FIX::LegSecurityAltID{"STRING_1596505879"}, LegSecAltIDGrp_NoLegSecurityAltID_152);
          set_field(noLegSecurityAltID_1_0_1_3_0, FIX::LegSecurityAltIDSource{"STRING_996549535"}, LegSecAltIDGrp_NoLegSecurityAltID_152);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_152);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_0_2_1.addGroup(noLegSecurityAltID_1_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_153;
          set_field(noLegSecurityAltID_1_0_1_3_1, FIX::LegSecurityAltID{"STRING_318740246"}, LegSecAltIDGrp_NoLegSecurityAltID_153);
          set_field(noLegSecurityAltID_1_0_1_3_1, FIX::LegSecurityAltIDSource{"STRING_1494448965"}, LegSecAltIDGrp_NoLegSecurityAltID_153);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_153);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_0_2_1.addGroup(noLegSecurityAltID_1_0_1_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_76;
        set_field(noLegs_1_0_2_2, FIX::EncodedLegIssuer{"DATA_1957541616"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::EncodedLegIssuerLen{5277477}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::EncodedLegSecurityDesc{"DATA_1606592060"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::EncodedLegSecurityDescLen{821139053}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegCFICode{"STRING_293090670"}, InstrumentLeg_76);
        FIX::LegContractMultiplier LegContractMultiplier_76;
        LegContractMultiplier_76.setString("2530367");
set_field(noLegs_1_0_2_2, LegContractMultiplier_76, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegContractMultiplierUnit{811117788}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegContractSettlMonth{"MONTHYEAR_73928553"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegCountryOfIssue{"COUNTRY_281804617"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_117397697"}, InstrumentLeg_76);
        FIX::LegCouponRate LegCouponRate_76;
        LegCouponRate_76.setString("40.060000");
set_field(noLegs_1_0_2_2, LegCouponRate_76, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegCreditRating{"STRING_1079024195"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegCurrency{"GBP"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegDatedDate{"LOCALMKTDATE_1970610801"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegExerciseStyle{1055173524}, InstrumentLeg_76);
        FIX::LegFactor LegFactor_76;
        LegFactor_76.setString("7941001");
set_field(noLegs_1_0_2_2, LegFactor_76, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegFlowScheduleType{1566443712}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegInstrRegistry{"STRING_1090550674"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_849730363"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegIssueDate{"LOCALMKTDATE_1168418322"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegIssuer{"STRING_339180681"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegLocaleOfIssue{"STRING_1868785649"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegMaturityDate{"LOCALMKTDATE_2031597421"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1315675555"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegMaturityTime{"TZTIMEONLY_1057401237"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_76);
        FIX::LegOptionRatio LegOptionRatio_76;
        LegOptionRatio_76.setString("7646977");
set_field(noLegs_1_0_2_2, LegOptionRatio_76, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegPool{"STRING_2053950773"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegPriceUnitOfMeasure{"STRING_124560747"}, InstrumentLeg_76);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_76;
        LegPriceUnitOfMeasureQty_76.setString("1116631");
set_field(noLegs_1_0_2_2, LegPriceUnitOfMeasureQty_76, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegProduct{1864008741}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegPutOrCall{129838225}, InstrumentLeg_76);
        FIX::LegRatioQty LegRatioQty_76;
        LegRatioQty_76.setString("17182551");
set_field(noLegs_1_0_2_2, LegRatioQty_76, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegRedemptionDate{"LOCALMKTDATE_537664146"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegRepoCollateralSecurityType{"STRING_422928895"}, InstrumentLeg_76);
        FIX::LegRepurchaseRate LegRepurchaseRate_76;
        LegRepurchaseRate_76.setString("18.770000");
set_field(noLegs_1_0_2_2, LegRepurchaseRate_76, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegRepurchaseTerm{1348781935}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegSecurityDesc{"STRING_496857448"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegSecurityExchange{"EXCHANGE_105612846"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegSecurityID{"STRING_1466179632"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegSecurityIDSource{"STRING_459177806"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegSecuritySubType{"STRING_1184637041"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegSecurityType{"STRING_582818581"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegSide{'1'}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegStateOrProvinceOfIssue{"STRING_1007764195"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_76);
        FIX::LegStrikePrice LegStrikePrice_76;
        LegStrikePrice_76.setString("4267242");
set_field(noLegs_1_0_2_2, LegStrikePrice_76, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegSymbol{"STRING_581059132"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegSymbolSfx{"STRING_524566029"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegTimeUnit{"STRING_1595142581"}, InstrumentLeg_76);
        set_field(noLegs_1_0_2_2, FIX::LegUnitOfMeasure{"STRING_920239813"}, InstrumentLeg_76);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_76;
        LegUnitOfMeasureQty_76.setString("2458680");
set_field(noLegs_1_0_2_2, LegUnitOfMeasureQty_76, InstrumentLeg_76);
        all_values.push_back(InstrumentLeg_76);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_154;
          set_field(noLegSecurityAltID_1_0_2_3_0, FIX::LegSecurityAltID{"STRING_88431720"}, LegSecAltIDGrp_NoLegSecurityAltID_154);
          set_field(noLegSecurityAltID_1_0_2_3_0, FIX::LegSecurityAltIDSource{"STRING_1303269268"}, LegSecAltIDGrp_NoLegSecurityAltID_154);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_154);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_0_2_2.addGroup(noLegSecurityAltID_1_0_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_155;
          set_field(noLegSecurityAltID_1_0_2_3_1, FIX::LegSecurityAltID{"STRING_1285076855"}, LegSecAltIDGrp_NoLegSecurityAltID_155);
          set_field(noLegSecurityAltID_1_0_2_3_1, FIX::LegSecurityAltIDSource{"STRING_853129507"}, LegSecAltIDGrp_NoLegSecurityAltID_155);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_155);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_0_2_2.addGroup(noLegSecurityAltID_1_0_2_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_2);
      }
      // Instrument
      multiset<string> Instrument_43;
      FIX::AttachmentPoint AttachmentPoint_43;
      AttachmentPoint_43.setString("63.930000");
set_field(noQuoteEntries_1_1_0, AttachmentPoint_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::CFICode{"STRING_1409637602"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::CPProgram{99}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::CPRegType{"STRING_926261486"}, Instrument_43);
      FIX::CapPrice CapPrice_43;
      CapPrice_43.setString("15394758");
set_field(noQuoteEntries_1_1_0, CapPrice_43, Instrument_43);
      FIX::ContractMultiplier ContractMultiplier_43;
      ContractMultiplier_43.setString("5355641");
set_field(noQuoteEntries_1_1_0, ContractMultiplier_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::ContractMultiplierUnit{2}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::ContractSettlMonth{"MONTHYEAR_1962404722"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::CountryOfIssue{"COUNTRY_359372356"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::CouponPaymentDate{"LOCALMKTDATE_665223919"}, Instrument_43);
      FIX::CouponRate CouponRate_43;
      CouponRate_43.setString("85.220000");
set_field(noQuoteEntries_1_1_0, CouponRate_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::CreditRating{"STRING_464985202"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::DatedDate{"LOCALMKTDATE_2131403551"}, Instrument_43);
      FIX::DetachmentPoint DetachmentPoint_43;
      DetachmentPoint_43.setString("63.280000");
set_field(noQuoteEntries_1_1_0, DetachmentPoint_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::EncodedIssuer{"DATA_1649622244"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::EncodedIssuerLen{566738485}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::EncodedSecurityDesc{"DATA_1799175499"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::EncodedSecurityDescLen{509902791}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::ExerciseStyle{0}, Instrument_43);
      FIX::Factor Factor_43;
      Factor_43.setString("14740111");
set_field(noQuoteEntries_1_1_0, Factor_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::FlexibleIndicator{true}, Instrument_43);
      FIX::FloorPrice FloorPrice_43;
      FloorPrice_43.setString("19985771");
set_field(noQuoteEntries_1_1_0, FloorPrice_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::FlowScheduleType{3}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::InstrRegistry{"STRING_1558545887"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::InstrmtAssignmentMethod{'9'}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1863542337"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::IssueDate{"LOCALMKTDATE_1646977608"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::Issuer{"STRING_1400230844"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::ListMethod{0}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::LocaleOfIssue{"STRING_352623467"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::MaturityDate{"LOCALMKTDATE_462483589"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::MaturityMonthYear{"MONTHYEAR_263289498"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::MaturityTime{"TZTIMEONLY_1317416077"}, Instrument_43);
      FIX::MinPriceIncrement MinPriceIncrement_43;
      MinPriceIncrement_43.setString("13887450");
set_field(noQuoteEntries_1_1_0, MinPriceIncrement_43, Instrument_43);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_43;
      MinPriceIncrementAmount_43.setString("18027653");
set_field(noQuoteEntries_1_1_0, MinPriceIncrementAmount_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::NTPositionLimit{1852980204}, Instrument_43);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_43;
      NotionalPercentageOutstanding_43.setString("70.590000");
set_field(noQuoteEntries_1_1_0, NotionalPercentageOutstanding_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::OptAttribute{'1'}, Instrument_43);
      FIX::OptPayoutAmount OptPayoutAmount_43;
      OptPayoutAmount_43.setString("648689");
set_field(noQuoteEntries_1_1_0, OptPayoutAmount_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::OptPayoutType{3}, Instrument_43);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_43;
      OriginalNotionalPercentageOutstanding_43.setString("49.230000");
set_field(noQuoteEntries_1_1_0, OriginalNotionalPercentageOutstanding_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::Pool{"STRING_529854114"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::PositionLimit{1354330882}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::PriceUnitOfMeasure{"STRING_31992710"}, Instrument_43);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_43;
      PriceUnitOfMeasureQty_43.setString("19210693");
set_field(noQuoteEntries_1_1_0, PriceUnitOfMeasureQty_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::Product{4}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::ProductComplex{"STRING_541895501"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::PutOrCall{0}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::RedemptionDate{"LOCALMKTDATE_1678640619"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::RepoCollateralSecurityType{"STRING_1478522551"}, Instrument_43);
      FIX::RepurchaseRate RepurchaseRate_43;
      RepurchaseRate_43.setString("87.360000");
set_field(noQuoteEntries_1_1_0, RepurchaseRate_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::RepurchaseTerm{1529734164}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::RestructuringType{"STRING_MM"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityDesc{"STRING_2027684624"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityExchange{"EXCHANGE_1626695740"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityGroup{"STRING_1578867223"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityID{"STRING_1527178584"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityIDSource{"STRING_L"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityStatus{"STRING_2"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::SecuritySubType{"STRING_1879802051"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityType{"STRING_CMB"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::Seniority{"STRING_SD"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::SettlMethod{'C'}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::SettleOnOpenFlag{"STRING_583187952"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::StateOrProvinceOfIssue{"STRING_351090296"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::StrikeCurrency{"JPY"}, Instrument_43);
      FIX::StrikeMultiplier StrikeMultiplier_43;
      StrikeMultiplier_43.setString("19687766");
set_field(noQuoteEntries_1_1_0, StrikeMultiplier_43, Instrument_43);
      FIX::StrikePrice StrikePrice_43;
      StrikePrice_43.setString("8200999");
set_field(noQuoteEntries_1_1_0, StrikePrice_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::StrikePriceBoundaryMethod{4}, Instrument_43);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_43;
      StrikePriceBoundaryPrecision_43.setString("79.710000");
set_field(noQuoteEntries_1_1_0, StrikePriceBoundaryPrecision_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::StrikePriceDeterminationMethod{4}, Instrument_43);
      FIX::StrikeValue StrikeValue_43;
      StrikeValue_43.setString("18656332");
set_field(noQuoteEntries_1_1_0, StrikeValue_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::Symbol{"STRING_156211927"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::TimeUnit{"STRING_H"}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_43);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_43;
      UnitOfMeasureQty_43.setString("14700516");
set_field(noQuoteEntries_1_1_0, UnitOfMeasureQty_43, Instrument_43);
      set_field(noQuoteEntries_1_1_0, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_43);
      all_values.push_back(Instrument_43);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_84;
        set_field(noComplexEvents_1_0_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_84);
        FIX::ComplexEventPrice ComplexEventPrice_84;
        ComplexEventPrice_84.setString("14217325");
set_field(noComplexEvents_1_0_2_0, ComplexEventPrice_84, ComplexEvents_NoComplexEvents_84);
        set_field(noComplexEvents_1_0_2_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_84);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_84;
        ComplexEventPriceBoundaryPrecision_84.setString("13.190000");
set_field(noComplexEvents_1_0_2_0, ComplexEventPriceBoundaryPrecision_84, ComplexEvents_NoComplexEvents_84);
        set_field(noComplexEvents_1_0_2_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_84);
        set_field(noComplexEvents_1_0_2_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_84);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_84;
        ComplexOptPayoutAmount_84.setString("11990862");
set_field(noComplexEvents_1_0_2_0, ComplexOptPayoutAmount_84, ComplexEvents_NoComplexEvents_84);
        all_values.push_back(ComplexEvents_NoComplexEvents_84);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_167;
          set_field(noComplexEventDates_1_0_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 43, 58, 7, 9, 2006)}, ComplexEventDates_NoComplexEventDates_167);
          set_field(noComplexEventDates_1_0_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 42, 56, 3, 7, 2005)}, ComplexEventDates_NoComplexEventDates_167);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_167);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_339;
            set_field(noComplexEventTimes_1_0_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 57, 14)}, ComplexEventTimes_NoComplexEventTimes_339);
            set_field(noComplexEventTimes_1_0_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 47, 22)}, ComplexEventTimes_NoComplexEventTimes_339);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_339);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_340;
            set_field(noComplexEventTimes_1_0_0_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 27, 31)}, ComplexEventTimes_NoComplexEventTimes_340);
            set_field(noComplexEventTimes_1_0_0_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 19, 43)}, ComplexEventTimes_NoComplexEventTimes_340);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_340);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_341;
            set_field(noComplexEventTimes_1_0_0_0_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 19, 29)}, ComplexEventTimes_NoComplexEventTimes_341);
            set_field(noComplexEventTimes_1_0_0_0_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 15, 16)}, ComplexEventTimes_NoComplexEventTimes_341);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_341);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_2);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_168;
          set_field(noComplexEventDates_1_0_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 4, 10, 0, 4, 2010)}, ComplexEventDates_NoComplexEventDates_168);
          set_field(noComplexEventDates_1_0_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 20, 15, 7, 5, 2012)}, ComplexEventDates_NoComplexEventDates_168);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_168);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_342;
            set_field(noComplexEventTimes_1_0_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 16, 40)}, ComplexEventTimes_NoComplexEventTimes_342);
            set_field(noComplexEventTimes_1_0_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 59, 3)}, ComplexEventTimes_NoComplexEventTimes_342);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_342);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_1.addGroup(noComplexEventTimes_1_0_0_1_4_0);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noComplexEvents_1_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_93;
        set_field(noEvents_1_0_2_0, FIX::EventDate{"LOCALMKTDATE_1096153928"}, EvntGrp_NoEvents_93);
        FIX::EventPx EventPx_93;
        EventPx_93.setString("20725286");
set_field(noEvents_1_0_2_0, EventPx_93, EvntGrp_NoEvents_93);
        set_field(noEvents_1_0_2_0, FIX::EventText{"STRING_885095896"}, EvntGrp_NoEvents_93);
        set_field(noEvents_1_0_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(17, 32, 5, 12, 11, 2001)}, EvntGrp_NoEvents_93);
        set_field(noEvents_1_0_2_0, FIX::EventType{19}, EvntGrp_NoEvents_93);
        all_values.push_back(EvntGrp_NoEvents_93);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_94;
        set_field(noEvents_1_0_2_1, FIX::EventDate{"LOCALMKTDATE_1454920278"}, EvntGrp_NoEvents_94);
        FIX::EventPx EventPx_94;
        EventPx_94.setString("2365278");
set_field(noEvents_1_0_2_1, EventPx_94, EvntGrp_NoEvents_94);
        set_field(noEvents_1_0_2_1, FIX::EventText{"STRING_118015113"}, EvntGrp_NoEvents_94);
        set_field(noEvents_1_0_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(3, 53, 26, 6, 10, 2001)}, EvntGrp_NoEvents_94);
        set_field(noEvents_1_0_2_1, FIX::EventType{16}, EvntGrp_NoEvents_94);
        all_values.push_back(EvntGrp_NoEvents_94);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_95;
        set_field(noEvents_1_0_2_2, FIX::EventDate{"LOCALMKTDATE_1749823698"}, EvntGrp_NoEvents_95);
        FIX::EventPx EventPx_95;
        EventPx_95.setString("15084514");
set_field(noEvents_1_0_2_2, EventPx_95, EvntGrp_NoEvents_95);
        set_field(noEvents_1_0_2_2, FIX::EventText{"STRING_27882543"}, EvntGrp_NoEvents_95);
        set_field(noEvents_1_0_2_2, FIX::EventTime{FIX::UTCTIMESTAMP(7, 19, 41, 27, 11, 2007)}, EvntGrp_NoEvents_95);
        set_field(noEvents_1_0_2_2, FIX::EventType{6}, EvntGrp_NoEvents_95);
        all_values.push_back(EvntGrp_NoEvents_95);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_82;
        set_field(noInstrumentParties_1_0_2_0, FIX::InstrumentPartyID{"STRING_2078475518"}, InstrumentParties_NoInstrumentParties_82);
        set_field(noInstrumentParties_1_0_2_0, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_82);
        set_field(noInstrumentParties_1_0_2_0, FIX::InstrumentPartyRole{2048195146}, InstrumentParties_NoInstrumentParties_82);
        all_values.push_back(InstrumentParties_NoInstrumentParties_82);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169;
          set_field(noInstrumentPartySubIDs_1_0_0_3_0, FIX::InstrumentPartySubID{"STRING_1039020875"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169);
          set_field(noInstrumentPartySubIDs_1_0_0_3_0, FIX::InstrumentPartySubIDType{443701260}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170;
          set_field(noInstrumentPartySubIDs_1_0_0_3_1, FIX::InstrumentPartySubID{"STRING_413655988"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170);
          set_field(noInstrumentPartySubIDs_1_0_0_3_1, FIX::InstrumentPartySubIDType{706430566}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171;
          set_field(noInstrumentPartySubIDs_1_0_0_3_2, FIX::InstrumentPartySubID{"STRING_1898621538"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171);
          set_field(noInstrumentPartySubIDs_1_0_0_3_2, FIX::InstrumentPartySubIDType{650183856}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_83;
        set_field(noInstrumentParties_1_0_2_1, FIX::InstrumentPartyID{"STRING_824445679"}, InstrumentParties_NoInstrumentParties_83);
        set_field(noInstrumentParties_1_0_2_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_83);
        set_field(noInstrumentParties_1_0_2_1, FIX::InstrumentPartyRole{217420028}, InstrumentParties_NoInstrumentParties_83);
        all_values.push_back(InstrumentParties_NoInstrumentParties_83);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172;
          set_field(noInstrumentPartySubIDs_1_0_1_3_0, FIX::InstrumentPartySubID{"STRING_867341028"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172);
          set_field(noInstrumentPartySubIDs_1_0_1_3_0, FIX::InstrumentPartySubIDType{885126794}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_84;
        set_field(noInstrumentParties_1_0_2_2, FIX::InstrumentPartyID{"STRING_1267764313"}, InstrumentParties_NoInstrumentParties_84);
        set_field(noInstrumentParties_1_0_2_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_84);
        set_field(noInstrumentParties_1_0_2_2, FIX::InstrumentPartyRole{1382980330}, InstrumentParties_NoInstrumentParties_84);
        all_values.push_back(InstrumentParties_NoInstrumentParties_84);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173;
          set_field(noInstrumentPartySubIDs_1_0_2_3_0, FIX::InstrumentPartySubID{"STRING_1279363108"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173);
          set_field(noInstrumentPartySubIDs_1_0_2_3_0, FIX::InstrumentPartySubIDType{1410862873}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_2.addGroup(noInstrumentPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174;
          set_field(noInstrumentPartySubIDs_1_0_2_3_1, FIX::InstrumentPartySubID{"STRING_1973946253"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174);
          set_field(noInstrumentPartySubIDs_1_0_2_3_1, FIX::InstrumentPartySubIDType{840064636}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_2.addGroup(noInstrumentPartySubIDs_1_0_2_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175;
          set_field(noInstrumentPartySubIDs_1_0_2_3_2, FIX::InstrumentPartySubID{"STRING_1070246304"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175);
          set_field(noInstrumentPartySubIDs_1_0_2_3_2, FIX::InstrumentPartySubIDType{689688226}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_2.addGroup(noInstrumentPartySubIDs_1_0_2_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_87;
        set_field(noSecurityAltID_1_0_2_0, FIX::SecurityAltID{"STRING_1296711262"}, SecAltIDGrp_NoSecurityAltID_87);
        set_field(noSecurityAltID_1_0_2_0, FIX::SecurityAltIDSource{"STRING_501584128"}, SecAltIDGrp_NoSecurityAltID_87);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_87);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_88;
        set_field(noSecurityAltID_1_0_2_1, FIX::SecurityAltID{"STRING_1183944664"}, SecAltIDGrp_NoSecurityAltID_88);
        set_field(noSecurityAltID_1_0_2_1, FIX::SecurityAltIDSource{"STRING_260788469"}, SecAltIDGrp_NoSecurityAltID_88);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_88);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_86;
      set_field(noQuoteEntries_1_1_0, FIX::SecurityXML{"XMLDATA_432575998"}, SecurityXML_86);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityXMLLen{2077799611}, SecurityXML_86);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityXMLSchema{"STRING_161499967"}, SecurityXML_86);
      all_values.push_back(SecurityXML_86);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_1;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_3;
      FIX::BidForwardPoints BidForwardPoints_9;
      BidForwardPoints_9.setString("944924");
set_field(noQuoteEntries_1_1_1, BidForwardPoints_9, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::BidForwardPoints2 BidForwardPoints2_9;
      BidForwardPoints2_9.setString("9693368");
set_field(noQuoteEntries_1_1_1, BidForwardPoints2_9, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::BidPx BidPx_9;
      BidPx_9.setString("6052012");
set_field(noQuoteEntries_1_1_1, BidPx_9, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::BidSize BidSize_9;
      BidSize_9.setString("5081483");
set_field(noQuoteEntries_1_1_1, BidSize_9, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::BidSpotRate BidSpotRate_9;
      BidSpotRate_9.setString("16757674");
set_field(noQuoteEntries_1_1_1, BidSpotRate_9, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::BidYield BidYield_9;
      BidYield_9.setString("91.180000");
set_field(noQuoteEntries_1_1_1, BidYield_9, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::BookingType{1}, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::Currency{"USD"}, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::MidPx MidPx_9;
      MidPx_9.setString("13757522");
set_field(noQuoteEntries_1_1_1, MidPx_9, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::MidYield MidYield_9;
      MidYield_9.setString("89.600000");
set_field(noQuoteEntries_1_1_1, MidYield_9, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::OfferForwardPoints OfferForwardPoints_9;
      OfferForwardPoints_9.setString("5084885");
set_field(noQuoteEntries_1_1_1, OfferForwardPoints_9, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::OfferForwardPoints2 OfferForwardPoints2_9;
      OfferForwardPoints2_9.setString("1133954");
set_field(noQuoteEntries_1_1_1, OfferForwardPoints2_9, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::OfferPx OfferPx_9;
      OfferPx_9.setString("12861732");
set_field(noQuoteEntries_1_1_1, OfferPx_9, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::OfferSize OfferSize_9;
      OfferSize_9.setString("2794001");
set_field(noQuoteEntries_1_1_1, OfferSize_9, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::OfferSpotRate OfferSpotRate_9;
      OfferSpotRate_9.setString("14963757");
set_field(noQuoteEntries_1_1_1, OfferSpotRate_9, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::OfferYield OfferYield_9;
      OfferYield_9.setString("39.890000");
set_field(noQuoteEntries_1_1_1, OfferYield_9, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::OrdType{'E'}, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::OrderCapacity{'G'}, QuotEntryAckGrp_NoQuoteEntries_3);
      FIX::OrderQty2 OrderQty2_10;
      OrderQty2_10.setString("19827402");
set_field(noQuoteEntries_1_1_1, OrderQty2_10, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_D"}, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::QuoteEntryID{"STRING_1830001285"}, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::QuoteEntryRejectReason{524944821}, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::QuoteEntryStatus{13}, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::SettlDate{"LOCALMKTDATE_979228900"}, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::SettlDate2{"LOCALMKTDATE_1026528949"}, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::TradingSessionID{"STRING_2"}, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::TradingSessionSubID{"STRING_4"}, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::TransactTime{FIX::UTCTIMESTAMP(12, 16, 13, 3, 1, 2008)}, QuotEntryAckGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(11, 31, 48, 23, 3, 2006)}, QuotEntryAckGrp_NoQuoteEntries_3);
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_3);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_77;
        set_field(noLegs_1_1_2_0, FIX::EncodedLegIssuer{"DATA_414258407"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::EncodedLegIssuerLen{1348793822}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::EncodedLegSecurityDesc{"DATA_644610184"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::EncodedLegSecurityDescLen{1910634163}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegCFICode{"STRING_1357587811"}, InstrumentLeg_77);
        FIX::LegContractMultiplier LegContractMultiplier_77;
        LegContractMultiplier_77.setString("558898");
set_field(noLegs_1_1_2_0, LegContractMultiplier_77, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegContractMultiplierUnit{522905496}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_1192844405"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegCountryOfIssue{"COUNTRY_307234063"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_205423133"}, InstrumentLeg_77);
        FIX::LegCouponRate LegCouponRate_77;
        LegCouponRate_77.setString("92.260000");
set_field(noLegs_1_1_2_0, LegCouponRate_77, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegCreditRating{"STRING_534318639"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegDatedDate{"LOCALMKTDATE_1945347880"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegExerciseStyle{277185754}, InstrumentLeg_77);
        FIX::LegFactor LegFactor_77;
        LegFactor_77.setString("20559394");
set_field(noLegs_1_1_2_0, LegFactor_77, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegFlowScheduleType{1139209437}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegInstrRegistry{"STRING_1678703091"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1462053180"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegIssueDate{"LOCALMKTDATE_1302407832"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegIssuer{"STRING_1537938007"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegLocaleOfIssue{"STRING_1376315280"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_993889985"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1753512042"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegMaturityTime{"TZTIMEONLY_301425983"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_77);
        FIX::LegOptionRatio LegOptionRatio_77;
        LegOptionRatio_77.setString("16102335");
set_field(noLegs_1_1_2_0, LegOptionRatio_77, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegPool{"STRING_602288965"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegPriceUnitOfMeasure{"STRING_1100722122"}, InstrumentLeg_77);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_77;
        LegPriceUnitOfMeasureQty_77.setString("19754435");
set_field(noLegs_1_1_2_0, LegPriceUnitOfMeasureQty_77, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegProduct{1016547373}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegPutOrCall{302032296}, InstrumentLeg_77);
        FIX::LegRatioQty LegRatioQty_77;
        LegRatioQty_77.setString("4725701");
set_field(noLegs_1_1_2_0, LegRatioQty_77, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_779697888"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegRepoCollateralSecurityType{"STRING_1659620107"}, InstrumentLeg_77);
        FIX::LegRepurchaseRate LegRepurchaseRate_77;
        LegRepurchaseRate_77.setString("99.220000");
set_field(noLegs_1_1_2_0, LegRepurchaseRate_77, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegRepurchaseTerm{1302603384}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegSecurityDesc{"STRING_704980864"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegSecurityExchange{"EXCHANGE_835693985"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegSecurityID{"STRING_1508026517"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegSecurityIDSource{"STRING_275286443"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegSecuritySubType{"STRING_1370012624"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegSecurityType{"STRING_545194903"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegSide{'8'}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_1167876857"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_77);
        FIX::LegStrikePrice LegStrikePrice_77;
        LegStrikePrice_77.setString("1596026");
set_field(noLegs_1_1_2_0, LegStrikePrice_77, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegSymbol{"STRING_353600100"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegSymbolSfx{"STRING_95146330"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegTimeUnit{"STRING_1462010478"}, InstrumentLeg_77);
        set_field(noLegs_1_1_2_0, FIX::LegUnitOfMeasure{"STRING_1891538108"}, InstrumentLeg_77);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_77;
        LegUnitOfMeasureQty_77.setString("14714616");
set_field(noLegs_1_1_2_0, LegUnitOfMeasureQty_77, InstrumentLeg_77);
        all_values.push_back(InstrumentLeg_77);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_156;
          set_field(noLegSecurityAltID_1_1_0_3_0, FIX::LegSecurityAltID{"STRING_1497566502"}, LegSecAltIDGrp_NoLegSecurityAltID_156);
          set_field(noLegSecurityAltID_1_1_0_3_0, FIX::LegSecurityAltIDSource{"STRING_1772887594"}, LegSecAltIDGrp_NoLegSecurityAltID_156);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_156);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_0);
        }
        noQuoteEntries_1_1_1.addGroup(noLegs_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_1_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_78;
        set_field(noLegs_1_1_2_1, FIX::EncodedLegIssuer{"DATA_1346518389"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::EncodedLegIssuerLen{960316412}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::EncodedLegSecurityDesc{"DATA_227692911"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::EncodedLegSecurityDescLen{299756863}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegCFICode{"STRING_788276344"}, InstrumentLeg_78);
        FIX::LegContractMultiplier LegContractMultiplier_78;
        LegContractMultiplier_78.setString("12442402");
set_field(noLegs_1_1_2_1, LegContractMultiplier_78, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegContractMultiplierUnit{601789159}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegContractSettlMonth{"MONTHYEAR_1260846461"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegCountryOfIssue{"COUNTRY_2023938172"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_113925618"}, InstrumentLeg_78);
        FIX::LegCouponRate LegCouponRate_78;
        LegCouponRate_78.setString("63.830000");
set_field(noLegs_1_1_2_1, LegCouponRate_78, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegCreditRating{"STRING_1179057908"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegCurrency{"USD"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegDatedDate{"LOCALMKTDATE_539600778"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegExerciseStyle{1094192925}, InstrumentLeg_78);
        FIX::LegFactor LegFactor_78;
        LegFactor_78.setString("18475293");
set_field(noLegs_1_1_2_1, LegFactor_78, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegFlowScheduleType{1084795681}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegInstrRegistry{"STRING_1966313896"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_867922553"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegIssueDate{"LOCALMKTDATE_1907176338"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegIssuer{"STRING_599407045"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegLocaleOfIssue{"STRING_1027525199"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegMaturityDate{"LOCALMKTDATE_113292791"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegMaturityMonthYear{"MONTHYEAR_694553375"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegMaturityTime{"TZTIMEONLY_342052030"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegOptAttribute{'2'}, InstrumentLeg_78);
        FIX::LegOptionRatio LegOptionRatio_78;
        LegOptionRatio_78.setString("185313");
set_field(noLegs_1_1_2_1, LegOptionRatio_78, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegPool{"STRING_650468845"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegPriceUnitOfMeasure{"STRING_1354913753"}, InstrumentLeg_78);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_78;
        LegPriceUnitOfMeasureQty_78.setString("17914189");
set_field(noLegs_1_1_2_1, LegPriceUnitOfMeasureQty_78, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegProduct{1996987234}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegPutOrCall{167746517}, InstrumentLeg_78);
        FIX::LegRatioQty LegRatioQty_78;
        LegRatioQty_78.setString("20191118");
set_field(noLegs_1_1_2_1, LegRatioQty_78, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegRedemptionDate{"LOCALMKTDATE_149260449"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegRepoCollateralSecurityType{"STRING_956022862"}, InstrumentLeg_78);
        FIX::LegRepurchaseRate LegRepurchaseRate_78;
        LegRepurchaseRate_78.setString("84.800000");
set_field(noLegs_1_1_2_1, LegRepurchaseRate_78, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegRepurchaseTerm{751049608}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegSecurityDesc{"STRING_69385675"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegSecurityExchange{"EXCHANGE_992323004"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegSecurityID{"STRING_864975226"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegSecurityIDSource{"STRING_1858692058"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegSecuritySubType{"STRING_23897265"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegSecurityType{"STRING_1683881709"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegSide{'1'}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegStateOrProvinceOfIssue{"STRING_563498043"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_78);
        FIX::LegStrikePrice LegStrikePrice_78;
        LegStrikePrice_78.setString("16482937");
set_field(noLegs_1_1_2_1, LegStrikePrice_78, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegSymbol{"STRING_449421234"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegSymbolSfx{"STRING_756693380"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegTimeUnit{"STRING_1407986414"}, InstrumentLeg_78);
        set_field(noLegs_1_1_2_1, FIX::LegUnitOfMeasure{"STRING_1048828280"}, InstrumentLeg_78);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_78;
        LegUnitOfMeasureQty_78.setString("17842185");
set_field(noLegs_1_1_2_1, LegUnitOfMeasureQty_78, InstrumentLeg_78);
        all_values.push_back(InstrumentLeg_78);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_157;
          set_field(noLegSecurityAltID_1_1_1_3_0, FIX::LegSecurityAltID{"STRING_1743381655"}, LegSecAltIDGrp_NoLegSecurityAltID_157);
          set_field(noLegSecurityAltID_1_1_1_3_0, FIX::LegSecurityAltIDSource{"STRING_2126270609"}, LegSecAltIDGrp_NoLegSecurityAltID_157);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_157);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_1_2_1.addGroup(noLegSecurityAltID_1_1_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_158;
          set_field(noLegSecurityAltID_1_1_1_3_1, FIX::LegSecurityAltID{"STRING_1378626456"}, LegSecAltIDGrp_NoLegSecurityAltID_158);
          set_field(noLegSecurityAltID_1_1_1_3_1, FIX::LegSecurityAltIDSource{"STRING_1761912993"}, LegSecAltIDGrp_NoLegSecurityAltID_158);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_158);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_1_2_1.addGroup(noLegSecurityAltID_1_1_1_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noLegs_1_1_2_1);
      }
      // Instrument
      multiset<string> Instrument_44;
      FIX::AttachmentPoint AttachmentPoint_44;
      AttachmentPoint_44.setString("58.070000");
set_field(noQuoteEntries_1_1_1, AttachmentPoint_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::CFICode{"STRING_586056562"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::CPProgram{2}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::CPRegType{"STRING_478759393"}, Instrument_44);
      FIX::CapPrice CapPrice_44;
      CapPrice_44.setString("7538030");
set_field(noQuoteEntries_1_1_1, CapPrice_44, Instrument_44);
      FIX::ContractMultiplier ContractMultiplier_44;
      ContractMultiplier_44.setString("12774764");
set_field(noQuoteEntries_1_1_1, ContractMultiplier_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::ContractMultiplierUnit{2}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::ContractSettlMonth{"MONTHYEAR_1709825941"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::CountryOfIssue{"COUNTRY_245861305"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1379069451"}, Instrument_44);
      FIX::CouponRate CouponRate_44;
      CouponRate_44.setString("16.160000");
set_field(noQuoteEntries_1_1_1, CouponRate_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::CreditRating{"STRING_1238184309"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::DatedDate{"LOCALMKTDATE_96561030"}, Instrument_44);
      FIX::DetachmentPoint DetachmentPoint_44;
      DetachmentPoint_44.setString("0.260000");
set_field(noQuoteEntries_1_1_1, DetachmentPoint_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::EncodedIssuer{"DATA_1262081574"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::EncodedIssuerLen{1780442739}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::EncodedSecurityDesc{"DATA_1679145156"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::EncodedSecurityDescLen{1825579617}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::ExerciseStyle{2}, Instrument_44);
      FIX::Factor Factor_44;
      Factor_44.setString("15679159");
set_field(noQuoteEntries_1_1_1, Factor_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::FlexibleIndicator{true}, Instrument_44);
      FIX::FloorPrice FloorPrice_44;
      FloorPrice_44.setString("1771257");
set_field(noQuoteEntries_1_1_1, FloorPrice_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::FlowScheduleType{0}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::InstrRegistry{"STRING_1761799592"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::InterestAccrualDate{"LOCALMKTDATE_2108171665"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::IssueDate{"LOCALMKTDATE_1357697599"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::Issuer{"STRING_1940131256"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::ListMethod{0}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::LocaleOfIssue{"STRING_972126945"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::MaturityDate{"LOCALMKTDATE_421903415"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::MaturityMonthYear{"MONTHYEAR_1925371036"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::MaturityTime{"TZTIMEONLY_230491574"}, Instrument_44);
      FIX::MinPriceIncrement MinPriceIncrement_44;
      MinPriceIncrement_44.setString("9006628");
set_field(noQuoteEntries_1_1_1, MinPriceIncrement_44, Instrument_44);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_44;
      MinPriceIncrementAmount_44.setString("5316904");
set_field(noQuoteEntries_1_1_1, MinPriceIncrementAmount_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::NTPositionLimit{1507968047}, Instrument_44);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_44;
      NotionalPercentageOutstanding_44.setString("26.510000");
set_field(noQuoteEntries_1_1_1, NotionalPercentageOutstanding_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::OptAttribute{'9'}, Instrument_44);
      FIX::OptPayoutAmount OptPayoutAmount_44;
      OptPayoutAmount_44.setString("17538293");
set_field(noQuoteEntries_1_1_1, OptPayoutAmount_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::OptPayoutType{2}, Instrument_44);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_44;
      OriginalNotionalPercentageOutstanding_44.setString("43.770000");
set_field(noQuoteEntries_1_1_1, OriginalNotionalPercentageOutstanding_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::Pool{"STRING_844530014"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::PositionLimit{856829485}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::PriceUnitOfMeasure{"STRING_2106611588"}, Instrument_44);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_44;
      PriceUnitOfMeasureQty_44.setString("4897885");
set_field(noQuoteEntries_1_1_1, PriceUnitOfMeasureQty_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::Product{1}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::ProductComplex{"STRING_1784707558"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::PutOrCall{1}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::RedemptionDate{"LOCALMKTDATE_168274599"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::RepoCollateralSecurityType{"STRING_963613603"}, Instrument_44);
      FIX::RepurchaseRate RepurchaseRate_44;
      RepurchaseRate_44.setString("99.650000");
set_field(noQuoteEntries_1_1_1, RepurchaseRate_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::RepurchaseTerm{345400314}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::RestructuringType{"STRING_XR"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityDesc{"STRING_1080625909"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityExchange{"EXCHANGE_159260961"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityGroup{"STRING_1511194081"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityID{"STRING_290839861"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityIDSource{"STRING_M"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityStatus{"STRING_2"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::SecuritySubType{"STRING_1262966806"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityType{"STRING_OPT"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::Seniority{"STRING_SR"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::SettlMethod{'C'}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::SettleOnOpenFlag{"STRING_1274474792"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::StateOrProvinceOfIssue{"STRING_1012602762"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::StrikeCurrency{"USD"}, Instrument_44);
      FIX::StrikeMultiplier StrikeMultiplier_44;
      StrikeMultiplier_44.setString("11066355");
set_field(noQuoteEntries_1_1_1, StrikeMultiplier_44, Instrument_44);
      FIX::StrikePrice StrikePrice_44;
      StrikePrice_44.setString("4602884");
set_field(noQuoteEntries_1_1_1, StrikePrice_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::StrikePriceBoundaryMethod{2}, Instrument_44);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_44;
      StrikePriceBoundaryPrecision_44.setString("62.530000");
set_field(noQuoteEntries_1_1_1, StrikePriceBoundaryPrecision_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::StrikePriceDeterminationMethod{3}, Instrument_44);
      FIX::StrikeValue StrikeValue_44;
      StrikeValue_44.setString("1252880");
set_field(noQuoteEntries_1_1_1, StrikeValue_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::Symbol{"STRING_2048577009"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::SymbolSfx{"STRING_WI"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::TimeUnit{"STRING_Yr"}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_44);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_44;
      UnitOfMeasureQty_44.setString("13684153");
set_field(noQuoteEntries_1_1_1, UnitOfMeasureQty_44, Instrument_44);
      set_field(noQuoteEntries_1_1_1, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_44);
      all_values.push_back(Instrument_44);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_85;
        set_field(noComplexEvents_1_1_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_85);
        FIX::ComplexEventPrice ComplexEventPrice_85;
        ComplexEventPrice_85.setString("11626105");
set_field(noComplexEvents_1_1_2_0, ComplexEventPrice_85, ComplexEvents_NoComplexEvents_85);
        set_field(noComplexEvents_1_1_2_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_85);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_85;
        ComplexEventPriceBoundaryPrecision_85.setString("75.440000");
set_field(noComplexEvents_1_1_2_0, ComplexEventPriceBoundaryPrecision_85, ComplexEvents_NoComplexEvents_85);
        set_field(noComplexEvents_1_1_2_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_85);
        set_field(noComplexEvents_1_1_2_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_85);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_85;
        ComplexOptPayoutAmount_85.setString("20587074");
set_field(noComplexEvents_1_1_2_0, ComplexOptPayoutAmount_85, ComplexEvents_NoComplexEvents_85);
        all_values.push_back(ComplexEvents_NoComplexEvents_85);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_169;
          set_field(noComplexEventDates_1_1_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 33, 43, 0, 11, 2011)}, ComplexEventDates_NoComplexEventDates_169);
          set_field(noComplexEventDates_1_1_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 41, 0, 13, 3, 2009)}, ComplexEventDates_NoComplexEventDates_169);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_169);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_343;
            set_field(noComplexEventTimes_1_1_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 29, 12)}, ComplexEventTimes_NoComplexEventTimes_343);
            set_field(noComplexEventTimes_1_1_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 37, 55)}, ComplexEventTimes_NoComplexEventTimes_343);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_343);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_0);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_170;
          set_field(noComplexEventDates_1_1_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 3, 30, 5, 9, 2003)}, ComplexEventDates_NoComplexEventDates_170);
          set_field(noComplexEventDates_1_1_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 11, 36, 7, 4, 2016)}, ComplexEventDates_NoComplexEventDates_170);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_170);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_344;
            set_field(noComplexEventTimes_1_1_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 10, 47)}, ComplexEventTimes_NoComplexEventTimes_344);
            set_field(noComplexEventTimes_1_1_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 30, 34)}, ComplexEventTimes_NoComplexEventTimes_344);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_344);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_345;
            set_field(noComplexEventTimes_1_1_0_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 3, 7)}, ComplexEventTimes_NoComplexEventTimes_345);
            set_field(noComplexEventTimes_1_1_0_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 37, 31)}, ComplexEventTimes_NoComplexEventTimes_345);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_345);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_346;
            set_field(noComplexEventTimes_1_1_0_1_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 34, 9)}, ComplexEventTimes_NoComplexEventTimes_346);
            set_field(noComplexEventTimes_1_1_0_1_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 37, 50)}, ComplexEventTimes_NoComplexEventTimes_346);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_346);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_2);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noComplexEvents_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_86;
        set_field(noComplexEvents_1_1_2_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_86);
        FIX::ComplexEventPrice ComplexEventPrice_86;
        ComplexEventPrice_86.setString("11388016");
set_field(noComplexEvents_1_1_2_1, ComplexEventPrice_86, ComplexEvents_NoComplexEvents_86);
        set_field(noComplexEvents_1_1_2_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_86);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_86;
        ComplexEventPriceBoundaryPrecision_86.setString("30.590000");
set_field(noComplexEvents_1_1_2_1, ComplexEventPriceBoundaryPrecision_86, ComplexEvents_NoComplexEvents_86);
        set_field(noComplexEvents_1_1_2_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_86);
        set_field(noComplexEvents_1_1_2_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_86);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_86;
        ComplexOptPayoutAmount_86.setString("15139189");
set_field(noComplexEvents_1_1_2_1, ComplexOptPayoutAmount_86, ComplexEvents_NoComplexEvents_86);
        all_values.push_back(ComplexEvents_NoComplexEvents_86);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_171;
          set_field(noComplexEventDates_1_1_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 45, 43, 14, 5, 2006)}, ComplexEventDates_NoComplexEventDates_171);
          set_field(noComplexEventDates_1_1_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 13, 12, 4, 4, 2005)}, ComplexEventDates_NoComplexEventDates_171);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_171);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_347;
            set_field(noComplexEventTimes_1_1_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 1, 16)}, ComplexEventTimes_NoComplexEventTimes_347);
            set_field(noComplexEventTimes_1_1_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 45, 29)}, ComplexEventTimes_NoComplexEventTimes_347);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_347);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_1_1_3_0.addGroup(noComplexEventTimes_1_1_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_348;
            set_field(noComplexEventTimes_1_1_1_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 48, 35)}, ComplexEventTimes_NoComplexEventTimes_348);
            set_field(noComplexEventTimes_1_1_1_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 23, 34)}, ComplexEventTimes_NoComplexEventTimes_348);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_348);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_1_1_3_0.addGroup(noComplexEventTimes_1_1_1_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_349;
            set_field(noComplexEventTimes_1_1_1_0_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 20, 55)}, ComplexEventTimes_NoComplexEventTimes_349);
            set_field(noComplexEventTimes_1_1_1_0_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 5, 28)}, ComplexEventTimes_NoComplexEventTimes_349);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_349);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_1_1_3_0.addGroup(noComplexEventTimes_1_1_1_0_4_2);
          }
          noComplexEvents_1_1_2_1.addGroup(noComplexEventDates_1_1_1_3_0);
        }
        noQuoteEntries_1_1_1.addGroup(noComplexEvents_1_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_87;
        set_field(noComplexEvents_1_1_2_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_87);
        FIX::ComplexEventPrice ComplexEventPrice_87;
        ComplexEventPrice_87.setString("17644598");
set_field(noComplexEvents_1_1_2_2, ComplexEventPrice_87, ComplexEvents_NoComplexEvents_87);
        set_field(noComplexEvents_1_1_2_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_87);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_87;
        ComplexEventPriceBoundaryPrecision_87.setString("88.400000");
set_field(noComplexEvents_1_1_2_2, ComplexEventPriceBoundaryPrecision_87, ComplexEvents_NoComplexEvents_87);
        set_field(noComplexEvents_1_1_2_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_87);
        set_field(noComplexEvents_1_1_2_2, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_87);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_87;
        ComplexOptPayoutAmount_87.setString("20620511");
set_field(noComplexEvents_1_1_2_2, ComplexOptPayoutAmount_87, ComplexEvents_NoComplexEvents_87);
        all_values.push_back(ComplexEvents_NoComplexEvents_87);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_172;
          set_field(noComplexEventDates_1_1_2_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 54, 52, 1, 8, 2014)}, ComplexEventDates_NoComplexEventDates_172);
          set_field(noComplexEventDates_1_1_2_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 2, 44, 5, 5, 2001)}, ComplexEventDates_NoComplexEventDates_172);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_172);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_350;
            set_field(noComplexEventTimes_1_1_2_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 20, 44)}, ComplexEventTimes_NoComplexEventTimes_350);
            set_field(noComplexEventTimes_1_1_2_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 49, 39)}, ComplexEventTimes_NoComplexEventTimes_350);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_350);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_0.addGroup(noComplexEventTimes_1_1_2_0_4_0);
          }
          noComplexEvents_1_1_2_2.addGroup(noComplexEventDates_1_1_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_173;
          set_field(noComplexEventDates_1_1_2_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 12, 37, 19, 3, 2010)}, ComplexEventDates_NoComplexEventDates_173);
          set_field(noComplexEventDates_1_1_2_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 33, 54, 0, 8, 2014)}, ComplexEventDates_NoComplexEventDates_173);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_173);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_351;
            set_field(noComplexEventTimes_1_1_2_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 24, 13)}, ComplexEventTimes_NoComplexEventTimes_351);
            set_field(noComplexEventTimes_1_1_2_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 12, 40)}, ComplexEventTimes_NoComplexEventTimes_351);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_351);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_1_2_3_1.addGroup(noComplexEventTimes_1_1_2_1_4_0);
          }
          noComplexEvents_1_1_2_2.addGroup(noComplexEventDates_1_1_2_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noComplexEvents_1_1_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_96;
        set_field(noEvents_1_1_2_0, FIX::EventDate{"LOCALMKTDATE_1730895797"}, EvntGrp_NoEvents_96);
        FIX::EventPx EventPx_96;
        EventPx_96.setString("9384023");
set_field(noEvents_1_1_2_0, EventPx_96, EvntGrp_NoEvents_96);
        set_field(noEvents_1_1_2_0, FIX::EventText{"STRING_340767317"}, EvntGrp_NoEvents_96);
        set_field(noEvents_1_1_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(4, 7, 8, 1, 12, 2002)}, EvntGrp_NoEvents_96);
        set_field(noEvents_1_1_2_0, FIX::EventType{7}, EvntGrp_NoEvents_96);
        all_values.push_back(EvntGrp_NoEvents_96);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_1_1_1.addGroup(noEvents_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_97;
        set_field(noEvents_1_1_2_1, FIX::EventDate{"LOCALMKTDATE_1380375450"}, EvntGrp_NoEvents_97);
        FIX::EventPx EventPx_97;
        EventPx_97.setString("13696084");
set_field(noEvents_1_1_2_1, EventPx_97, EvntGrp_NoEvents_97);
        set_field(noEvents_1_1_2_1, FIX::EventText{"STRING_1542503990"}, EvntGrp_NoEvents_97);
        set_field(noEvents_1_1_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(1, 16, 25, 9, 12, 2009)}, EvntGrp_NoEvents_97);
        set_field(noEvents_1_1_2_1, FIX::EventType{8}, EvntGrp_NoEvents_97);
        all_values.push_back(EvntGrp_NoEvents_97);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_1_1_1.addGroup(noEvents_1_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_1_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_98;
        set_field(noEvents_1_1_2_2, FIX::EventDate{"LOCALMKTDATE_2126557323"}, EvntGrp_NoEvents_98);
        FIX::EventPx EventPx_98;
        EventPx_98.setString("3463245");
set_field(noEvents_1_1_2_2, EventPx_98, EvntGrp_NoEvents_98);
        set_field(noEvents_1_1_2_2, FIX::EventText{"STRING_793194432"}, EvntGrp_NoEvents_98);
        set_field(noEvents_1_1_2_2, FIX::EventTime{FIX::UTCTIMESTAMP(23, 5, 21, 27, 11, 2006)}, EvntGrp_NoEvents_98);
        set_field(noEvents_1_1_2_2, FIX::EventType{13}, EvntGrp_NoEvents_98);
        all_values.push_back(EvntGrp_NoEvents_98);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_1_1_1.addGroup(noEvents_1_1_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_85;
        set_field(noInstrumentParties_1_1_2_0, FIX::InstrumentPartyID{"STRING_1839777298"}, InstrumentParties_NoInstrumentParties_85);
        set_field(noInstrumentParties_1_1_2_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_85);
        set_field(noInstrumentParties_1_1_2_0, FIX::InstrumentPartyRole{112163275}, InstrumentParties_NoInstrumentParties_85);
        all_values.push_back(InstrumentParties_NoInstrumentParties_85);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176;
          set_field(noInstrumentPartySubIDs_1_1_0_3_0, FIX::InstrumentPartySubID{"STRING_595379033"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176);
          set_field(noInstrumentPartySubIDs_1_1_0_3_0, FIX::InstrumentPartySubIDType{1108120854}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_0.addGroup(noInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177;
          set_field(noInstrumentPartySubIDs_1_1_0_3_1, FIX::InstrumentPartySubID{"STRING_1747058118"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177);
          set_field(noInstrumentPartySubIDs_1_1_0_3_1, FIX::InstrumentPartySubIDType{1152640359}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_0.addGroup(noInstrumentPartySubIDs_1_1_0_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_86;
        set_field(noInstrumentParties_1_1_2_1, FIX::InstrumentPartyID{"STRING_341012657"}, InstrumentParties_NoInstrumentParties_86);
        set_field(noInstrumentParties_1_1_2_1, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_86);
        set_field(noInstrumentParties_1_1_2_1, FIX::InstrumentPartyRole{547660702}, InstrumentParties_NoInstrumentParties_86);
        all_values.push_back(InstrumentParties_NoInstrumentParties_86);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178;
          set_field(noInstrumentPartySubIDs_1_1_1_3_0, FIX::InstrumentPartySubID{"STRING_1161807650"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178);
          set_field(noInstrumentPartySubIDs_1_1_1_3_0, FIX::InstrumentPartySubIDType{1372403378}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_1.addGroup(noInstrumentPartySubIDs_1_1_1_3_0);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_87;
        set_field(noInstrumentParties_1_1_2_2, FIX::InstrumentPartyID{"STRING_324483733"}, InstrumentParties_NoInstrumentParties_87);
        set_field(noInstrumentParties_1_1_2_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_87);
        set_field(noInstrumentParties_1_1_2_2, FIX::InstrumentPartyRole{659527085}, InstrumentParties_NoInstrumentParties_87);
        all_values.push_back(InstrumentParties_NoInstrumentParties_87);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179;
          set_field(noInstrumentPartySubIDs_1_1_2_3_0, FIX::InstrumentPartySubID{"STRING_8419547"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179);
          set_field(noInstrumentPartySubIDs_1_1_2_3_0, FIX::InstrumentPartySubIDType{638600760}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180;
          set_field(noInstrumentPartySubIDs_1_1_2_3_1, FIX::InstrumentPartySubID{"STRING_1083646151"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180);
          set_field(noInstrumentPartySubIDs_1_1_2_3_1, FIX::InstrumentPartySubIDType{801613979}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181;
          set_field(noInstrumentPartySubIDs_1_1_2_3_2, FIX::InstrumentPartySubID{"STRING_1645982049"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181);
          set_field(noInstrumentPartySubIDs_1_1_2_3_2, FIX::InstrumentPartySubIDType{2071649638}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_2);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_89;
        set_field(noSecurityAltID_1_1_2_0, FIX::SecurityAltID{"STRING_1491252622"}, SecAltIDGrp_NoSecurityAltID_89);
        set_field(noSecurityAltID_1_1_2_0, FIX::SecurityAltIDSource{"STRING_271776610"}, SecAltIDGrp_NoSecurityAltID_89);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_89);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_90;
        set_field(noSecurityAltID_1_1_2_1, FIX::SecurityAltID{"STRING_1777898202"}, SecAltIDGrp_NoSecurityAltID_90);
        set_field(noSecurityAltID_1_1_2_1, FIX::SecurityAltIDSource{"STRING_919935344"}, SecAltIDGrp_NoSecurityAltID_90);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_90);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_88;
      set_field(noQuoteEntries_1_1_1, FIX::SecurityXML{"XMLDATA_1557789562"}, SecurityXML_88);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityXMLLen{2103928958}, SecurityXML_88);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityXMLSchema{"STRING_612228994"}, SecurityXML_88);
      all_values.push_back(SecurityXML_88);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_1);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_60;
    set_field(noQuoteSets_0_1, FIX::EncodedUnderlyingIssuer{"DATA_519098758"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::EncodedUnderlyingIssuerLen{68608585}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_828393393"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::EncodedUnderlyingSecurityDescLen{1114477792}, UnderlyingInstrument_60);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_60;
    UnderlyingAdjustedQuantity_60.setString("11767294");
set_field(noQuoteSets_0_1, UnderlyingAdjustedQuantity_60, UnderlyingInstrument_60);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_60;
    UnderlyingAllocationPercent_60.setString("78.630000");
set_field(noQuoteSets_0_1, UnderlyingAllocationPercent_60, UnderlyingInstrument_60);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_60;
    UnderlyingAttachmentPoint_60.setString("45.030000");
set_field(noQuoteSets_0_1, UnderlyingAttachmentPoint_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCFICode{"STRING_1517742097"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCPProgram{"STRING_1397150792"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCPRegType{"STRING_667295205"}, UnderlyingInstrument_60);
    FIX::UnderlyingCapValue UnderlyingCapValue_60;
    UnderlyingCapValue_60.setString("17424920");
set_field(noQuoteSets_0_1, UnderlyingCapValue_60, UnderlyingInstrument_60);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_60;
    UnderlyingCashAmount_60.setString("4114747");
set_field(noQuoteSets_0_1, UnderlyingCashAmount_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_60);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_60;
    UnderlyingContractMultiplier_60.setString("20669757");
set_field(noQuoteSets_0_1, UnderlyingContractMultiplier_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingContractMultiplierUnit{1822391061}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_551742020"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_656813795"}, UnderlyingInstrument_60);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_60;
    UnderlyingCouponRate_60.setString("6.080000");
set_field(noQuoteSets_0_1, UnderlyingCouponRate_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCreditRating{"STRING_1190342781"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_60);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_60;
    UnderlyingCurrentValue_60.setString("6888411");
set_field(noQuoteSets_0_1, UnderlyingCurrentValue_60, UnderlyingInstrument_60);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_60;
    UnderlyingDetachmentPoint_60.setString("59.370000");
set_field(noQuoteSets_0_1, UnderlyingDetachmentPoint_60, UnderlyingInstrument_60);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_60;
    UnderlyingDirtyPrice_60.setString("1300920");
set_field(noQuoteSets_0_1, UnderlyingDirtyPrice_60, UnderlyingInstrument_60);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_60;
    UnderlyingEndPrice_60.setString("326101");
set_field(noQuoteSets_0_1, UnderlyingEndPrice_60, UnderlyingInstrument_60);
    FIX::UnderlyingEndValue UnderlyingEndValue_60;
    UnderlyingEndValue_60.setString("19364025");
set_field(noQuoteSets_0_1, UnderlyingEndValue_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingExerciseStyle{1907990258}, UnderlyingInstrument_60);
    FIX::UnderlyingFXRate UnderlyingFXRate_60;
    UnderlyingFXRate_60.setString("9525455");
set_field(noQuoteSets_0_1, UnderlyingFXRate_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_60);
    FIX::UnderlyingFactor UnderlyingFactor_60;
    UnderlyingFactor_60.setString("18644355");
set_field(noQuoteSets_0_1, UnderlyingFactor_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingFlowScheduleType{1564774494}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingInstrRegistry{"STRING_1865807220"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1933044154"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingIssuer{"STRING_245684239"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_832801364"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_962289946"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_673652103"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_952435867"}, UnderlyingInstrument_60);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_60;
    UnderlyingNotionalPercentageOutstanding_60.setString("83.950000");
set_field(noQuoteSets_0_1, UnderlyingNotionalPercentageOutstanding_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_60);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_60;
    UnderlyingOriginalNotionalPercentageOutstanding_60.setString("10.730000");
set_field(noQuoteSets_0_1, UnderlyingOriginalNotionalPercentageOutstanding_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2075040460"}, UnderlyingInstrument_60);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_60;
    UnderlyingPriceUnitOfMeasureQty_60.setString("3347940");
set_field(noQuoteSets_0_1, UnderlyingPriceUnitOfMeasureQty_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingProduct{1511946008}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingPutOrCall{1994532610}, UnderlyingInstrument_60);
    FIX::UnderlyingPx UnderlyingPx_60;
    UnderlyingPx_60.setString("97014");
set_field(noQuoteSets_0_1, UnderlyingPx_60, UnderlyingInstrument_60);
    FIX::UnderlyingQty UnderlyingQty_60;
    UnderlyingQty_60.setString("20636880");
set_field(noQuoteSets_0_1, UnderlyingQty_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_503862758"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1840512063"}, UnderlyingInstrument_60);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_60;
    UnderlyingRepurchaseRate_60.setString("71.620000");
set_field(noQuoteSets_0_1, UnderlyingRepurchaseRate_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingRepurchaseTerm{96839057}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingRestructuringType{"STRING_177969354"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSecurityDesc{"STRING_1795388344"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1761464994"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSecurityID{"STRING_308061410"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1827998500"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSecuritySubType{"STRING_1550383894"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSecurityType{"STRING_68568020"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSeniority{"STRING_633060352"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSettlMethod{"STRING_749608707"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_60);
    FIX::UnderlyingStartValue UnderlyingStartValue_60;
    UnderlyingStartValue_60.setString("503511");
set_field(noQuoteSets_0_1, UnderlyingStartValue_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_467932279"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_60);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_60;
    UnderlyingStrikePrice_60.setString("13007336");
set_field(noQuoteSets_0_1, UnderlyingStrikePrice_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSymbol{"STRING_533370392"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSymbolSfx{"STRING_969687541"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingTimeUnit{"STRING_105685863"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_865918787"}, UnderlyingInstrument_60);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_60;
    UnderlyingUnitOfMeasureQty_60.setString("8930067");
set_field(noQuoteSets_0_1, UnderlyingUnitOfMeasureQty_60, UnderlyingInstrument_60);
    all_values.push_back(UnderlyingInstrument_60);
    all_compo_names.insert("...NoQuoteSets.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_125;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_793475599"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_125);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1227800829"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_125);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_125);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_126;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1089879296"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_126);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_640524562"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_126);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_126);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_127;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1237502283"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_127);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1006083677"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_127);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_127);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_120;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_930530698"}, UnderlyingStipulations_NoUnderlyingStips_120);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_2112630839"}, UnderlyingStipulations_NoUnderlyingStips_120);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_120);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_130;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1108500053"}, UndlyInstrumentParties_NoUndlyInstrumentParties_130);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_130);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{855207723}, UndlyInstrumentParties_NoUndlyInstrumentParties_130);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_130);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1441050387"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{258107969}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_255);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1485129483"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{2074110739}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_131;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1007716677"}, UndlyInstrumentParties_NoUndlyInstrumentParties_131);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_131);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{2124461938}, UndlyInstrumentParties_NoUndlyInstrumentParties_131);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_131);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_841729870"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{273013728}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_257);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_628898952"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1375100262}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_258);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_132;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1242701269"}, UndlyInstrumentParties_NoUndlyInstrumentParties_132);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_132);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{93535402}, UndlyInstrumentParties_NoUndlyInstrumentParties_132);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_132);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_312518103"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{887011001}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_259);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1216025238"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1402397399}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_260);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1527535563"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{306043873}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noQuoteSets_0_1);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets noQuoteSets_0_2;
    // QuotSetAckGrp.NoQuoteSets
    multiset<string> QuotSetAckGrp_NoQuoteSets_2;
    set_field(noQuoteSets_0_2, FIX::LastFragment{false}, QuotSetAckGrp_NoQuoteSets_2);
    set_field(noQuoteSets_0_2, FIX::QuoteSetID{"STRING_524439235"}, QuotSetAckGrp_NoQuoteSets_2);
    set_field(noQuoteSets_0_2, FIX::QuoteSetValidUntilTime{FIX::UTCTIMESTAMP(12, 12, 57, 20, 9, 2010)}, QuotSetAckGrp_NoQuoteSets_2);
    set_field(noQuoteSets_0_2, FIX::TotNoAccQuotes{1280246895}, QuotSetAckGrp_NoQuoteSets_2);
    set_field(noQuoteSets_0_2, FIX::TotNoCxldQuotes{731497657}, QuotSetAckGrp_NoQuoteSets_2);
    set_field(noQuoteSets_0_2, FIX::TotNoQuoteEntries{951798275}, QuotSetAckGrp_NoQuoteSets_2);
    set_field(noQuoteSets_0_2, FIX::TotNoRejQuotes{1206873987}, QuotSetAckGrp_NoQuoteSets_2);
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_2);
    all_compo_names.insert("...NoQuoteSets");

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_2_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_4;
      FIX::BidForwardPoints BidForwardPoints_10;
      BidForwardPoints_10.setString("749640");
set_field(noQuoteEntries_2_1_0, BidForwardPoints_10, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::BidForwardPoints2 BidForwardPoints2_10;
      BidForwardPoints2_10.setString("11838522");
set_field(noQuoteEntries_2_1_0, BidForwardPoints2_10, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::BidPx BidPx_10;
      BidPx_10.setString("10673796");
set_field(noQuoteEntries_2_1_0, BidPx_10, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::BidSize BidSize_10;
      BidSize_10.setString("9166939");
set_field(noQuoteEntries_2_1_0, BidSize_10, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::BidSpotRate BidSpotRate_10;
      BidSpotRate_10.setString("14568660");
set_field(noQuoteEntries_2_1_0, BidSpotRate_10, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::BidYield BidYield_10;
      BidYield_10.setString("85.950000");
set_field(noQuoteEntries_2_1_0, BidYield_10, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::BookingType{2}, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::Currency{"GBP"}, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::MidPx MidPx_10;
      MidPx_10.setString("2378459");
set_field(noQuoteEntries_2_1_0, MidPx_10, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::MidYield MidYield_10;
      MidYield_10.setString("80.350000");
set_field(noQuoteEntries_2_1_0, MidYield_10, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::OfferForwardPoints OfferForwardPoints_10;
      OfferForwardPoints_10.setString("5958978");
set_field(noQuoteEntries_2_1_0, OfferForwardPoints_10, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::OfferForwardPoints2 OfferForwardPoints2_10;
      OfferForwardPoints2_10.setString("11248569");
set_field(noQuoteEntries_2_1_0, OfferForwardPoints2_10, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::OfferPx OfferPx_10;
      OfferPx_10.setString("17563332");
set_field(noQuoteEntries_2_1_0, OfferPx_10, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::OfferSize OfferSize_10;
      OfferSize_10.setString("19982952");
set_field(noQuoteEntries_2_1_0, OfferSize_10, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::OfferSpotRate OfferSpotRate_10;
      OfferSpotRate_10.setString("5049088");
set_field(noQuoteEntries_2_1_0, OfferSpotRate_10, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::OfferYield OfferYield_10;
      OfferYield_10.setString("71.460000");
set_field(noQuoteEntries_2_1_0, OfferYield_10, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::OrdType{'6'}, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::OrderCapacity{'W'}, QuotEntryAckGrp_NoQuoteEntries_4);
      FIX::OrderQty2 OrderQty2_11;
      OrderQty2_11.setString("11514680");
set_field(noQuoteEntries_2_1_0, OrderQty2_11, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_7"}, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::QuoteEntryID{"STRING_647530054"}, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::QuoteEntryRejectReason{1349059047}, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::QuoteEntryStatus{14}, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::SettlDate{"LOCALMKTDATE_1120919742"}, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::SettlDate2{"LOCALMKTDATE_815727839"}, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::TradingSessionID{"STRING_4"}, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::TradingSessionSubID{"STRING_1"}, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::TransactTime{FIX::UTCTIMESTAMP(16, 46, 25, 17, 10, 2011)}, QuotEntryAckGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_2_1_0, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(4, 52, 28, 26, 2, 2005)}, QuotEntryAckGrp_NoQuoteEntries_4);
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_4);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_2_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_79;
        set_field(noLegs_2_0_2_0, FIX::EncodedLegIssuer{"DATA_2118713848"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::EncodedLegIssuerLen{1711263328}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::EncodedLegSecurityDesc{"DATA_642928271"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::EncodedLegSecurityDescLen{476139054}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegCFICode{"STRING_1626156827"}, InstrumentLeg_79);
        FIX::LegContractMultiplier LegContractMultiplier_79;
        LegContractMultiplier_79.setString("7547373");
set_field(noLegs_2_0_2_0, LegContractMultiplier_79, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegContractMultiplierUnit{1505487143}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_630141249"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegCountryOfIssue{"COUNTRY_1092690983"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_5533549"}, InstrumentLeg_79);
        FIX::LegCouponRate LegCouponRate_79;
        LegCouponRate_79.setString("2.970000");
set_field(noLegs_2_0_2_0, LegCouponRate_79, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegCreditRating{"STRING_1269841157"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegDatedDate{"LOCALMKTDATE_579754578"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegExerciseStyle{831387043}, InstrumentLeg_79);
        FIX::LegFactor LegFactor_79;
        LegFactor_79.setString("2674869");
set_field(noLegs_2_0_2_0, LegFactor_79, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegFlowScheduleType{1096541987}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegInstrRegistry{"STRING_128051481"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2109977120"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegIssueDate{"LOCALMKTDATE_649698024"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegIssuer{"STRING_492095562"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegLocaleOfIssue{"STRING_574193909"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_1659720067"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_404934590"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegMaturityTime{"TZTIMEONLY_1330204882"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_79);
        FIX::LegOptionRatio LegOptionRatio_79;
        LegOptionRatio_79.setString("6011533");
set_field(noLegs_2_0_2_0, LegOptionRatio_79, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegPool{"STRING_176578143"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegPriceUnitOfMeasure{"STRING_1029272143"}, InstrumentLeg_79);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_79;
        LegPriceUnitOfMeasureQty_79.setString("13932700");
set_field(noLegs_2_0_2_0, LegPriceUnitOfMeasureQty_79, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegProduct{147808343}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegPutOrCall{593051823}, InstrumentLeg_79);
        FIX::LegRatioQty LegRatioQty_79;
        LegRatioQty_79.setString("20361983");
set_field(noLegs_2_0_2_0, LegRatioQty_79, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_623947397"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegRepoCollateralSecurityType{"STRING_71725002"}, InstrumentLeg_79);
        FIX::LegRepurchaseRate LegRepurchaseRate_79;
        LegRepurchaseRate_79.setString("19.750000");
set_field(noLegs_2_0_2_0, LegRepurchaseRate_79, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegRepurchaseTerm{2129434541}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegSecurityDesc{"STRING_701866252"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegSecurityExchange{"EXCHANGE_1736142958"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegSecurityID{"STRING_2134968090"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegSecurityIDSource{"STRING_533582901"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegSecuritySubType{"STRING_858500467"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegSecurityType{"STRING_1113937734"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegSide{'1'}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_1438255046"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_79);
        FIX::LegStrikePrice LegStrikePrice_79;
        LegStrikePrice_79.setString("3873133");
set_field(noLegs_2_0_2_0, LegStrikePrice_79, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegSymbol{"STRING_2073376258"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegSymbolSfx{"STRING_1411007816"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegTimeUnit{"STRING_1037011409"}, InstrumentLeg_79);
        set_field(noLegs_2_0_2_0, FIX::LegUnitOfMeasure{"STRING_417988172"}, InstrumentLeg_79);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_79;
        LegUnitOfMeasureQty_79.setString("19852017");
set_field(noLegs_2_0_2_0, LegUnitOfMeasureQty_79, InstrumentLeg_79);
        all_values.push_back(InstrumentLeg_79);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_159;
          set_field(noLegSecurityAltID_2_0_0_3_0, FIX::LegSecurityAltID{"STRING_822922762"}, LegSecAltIDGrp_NoLegSecurityAltID_159);
          set_field(noLegSecurityAltID_2_0_0_3_0, FIX::LegSecurityAltIDSource{"STRING_1167922960"}, LegSecAltIDGrp_NoLegSecurityAltID_159);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_159);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_2_0_2_0.addGroup(noLegSecurityAltID_2_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_160;
          set_field(noLegSecurityAltID_2_0_0_3_1, FIX::LegSecurityAltID{"STRING_1623589916"}, LegSecAltIDGrp_NoLegSecurityAltID_160);
          set_field(noLegSecurityAltID_2_0_0_3_1, FIX::LegSecurityAltIDSource{"STRING_1424076142"}, LegSecAltIDGrp_NoLegSecurityAltID_160);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_160);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_2_0_2_0.addGroup(noLegSecurityAltID_2_0_0_3_1);
        }
        noQuoteEntries_2_1_0.addGroup(noLegs_2_0_2_0);
      }
      // Instrument
      multiset<string> Instrument_45;
      FIX::AttachmentPoint AttachmentPoint_45;
      AttachmentPoint_45.setString("11.030000");
set_field(noQuoteEntries_2_1_0, AttachmentPoint_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::CFICode{"STRING_505378411"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::CPProgram{99}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::CPRegType{"STRING_1492309447"}, Instrument_45);
      FIX::CapPrice CapPrice_45;
      CapPrice_45.setString("10984302");
set_field(noQuoteEntries_2_1_0, CapPrice_45, Instrument_45);
      FIX::ContractMultiplier ContractMultiplier_45;
      ContractMultiplier_45.setString("5585771");
set_field(noQuoteEntries_2_1_0, ContractMultiplier_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::ContractMultiplierUnit{0}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::ContractSettlMonth{"MONTHYEAR_1170155237"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::CountryOfIssue{"COUNTRY_1202029163"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::CouponPaymentDate{"LOCALMKTDATE_2098207737"}, Instrument_45);
      FIX::CouponRate CouponRate_45;
      CouponRate_45.setString("14.890000");
set_field(noQuoteEntries_2_1_0, CouponRate_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::CreditRating{"STRING_790688473"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::DatedDate{"LOCALMKTDATE_2085692180"}, Instrument_45);
      FIX::DetachmentPoint DetachmentPoint_45;
      DetachmentPoint_45.setString("7.420000");
set_field(noQuoteEntries_2_1_0, DetachmentPoint_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::EncodedIssuer{"DATA_1649188941"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::EncodedIssuerLen{1052146266}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::EncodedSecurityDesc{"DATA_1439148131"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::EncodedSecurityDescLen{939960339}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::ExerciseStyle{2}, Instrument_45);
      FIX::Factor Factor_45;
      Factor_45.setString("7401788");
set_field(noQuoteEntries_2_1_0, Factor_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::FlexibleIndicator{false}, Instrument_45);
      FIX::FloorPrice FloorPrice_45;
      FloorPrice_45.setString("37029");
set_field(noQuoteEntries_2_1_0, FloorPrice_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::FlowScheduleType{0}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::InstrRegistry{"STRING_1193868177"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::InterestAccrualDate{"LOCALMKTDATE_766049314"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::IssueDate{"LOCALMKTDATE_2016790939"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::Issuer{"STRING_1009344034"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::ListMethod{0}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::LocaleOfIssue{"STRING_1293383433"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::MaturityDate{"LOCALMKTDATE_206361490"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::MaturityMonthYear{"MONTHYEAR_747533993"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::MaturityTime{"TZTIMEONLY_1963245962"}, Instrument_45);
      FIX::MinPriceIncrement MinPriceIncrement_45;
      MinPriceIncrement_45.setString("16986709");
set_field(noQuoteEntries_2_1_0, MinPriceIncrement_45, Instrument_45);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_45;
      MinPriceIncrementAmount_45.setString("18459642");
set_field(noQuoteEntries_2_1_0, MinPriceIncrementAmount_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::NTPositionLimit{374339501}, Instrument_45);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_45;
      NotionalPercentageOutstanding_45.setString("41.330000");
set_field(noQuoteEntries_2_1_0, NotionalPercentageOutstanding_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::OptAttribute{'8'}, Instrument_45);
      FIX::OptPayoutAmount OptPayoutAmount_45;
      OptPayoutAmount_45.setString("15763686");
set_field(noQuoteEntries_2_1_0, OptPayoutAmount_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::OptPayoutType{3}, Instrument_45);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_45;
      OriginalNotionalPercentageOutstanding_45.setString("36.570000");
set_field(noQuoteEntries_2_1_0, OriginalNotionalPercentageOutstanding_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::Pool{"STRING_219573490"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::PositionLimit{1556376755}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::PriceUnitOfMeasure{"STRING_1868762431"}, Instrument_45);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_45;
      PriceUnitOfMeasureQty_45.setString("4610393");
set_field(noQuoteEntries_2_1_0, PriceUnitOfMeasureQty_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::Product{3}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::ProductComplex{"STRING_661239122"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::PutOrCall{0}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::RedemptionDate{"LOCALMKTDATE_883137711"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::RepoCollateralSecurityType{"STRING_1988512846"}, Instrument_45);
      FIX::RepurchaseRate RepurchaseRate_45;
      RepurchaseRate_45.setString("67.730000");
set_field(noQuoteEntries_2_1_0, RepurchaseRate_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::RepurchaseTerm{886840707}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::RestructuringType{"STRING_XR"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityDesc{"STRING_1133291302"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityExchange{"EXCHANGE_728261782"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityGroup{"STRING_823879997"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityID{"STRING_1002598593"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityIDSource{"STRING_D"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityStatus{"STRING_2"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::SecuritySubType{"STRING_148498378"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityType{"STRING_OOC"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::Seniority{"STRING_SB"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::SettlMethod{'C'}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::SettleOnOpenFlag{"STRING_1495154595"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::StateOrProvinceOfIssue{"STRING_1512050152"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::StrikeCurrency{"CAN"}, Instrument_45);
      FIX::StrikeMultiplier StrikeMultiplier_45;
      StrikeMultiplier_45.setString("2332023");
set_field(noQuoteEntries_2_1_0, StrikeMultiplier_45, Instrument_45);
      FIX::StrikePrice StrikePrice_45;
      StrikePrice_45.setString("19149688");
set_field(noQuoteEntries_2_1_0, StrikePrice_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::StrikePriceBoundaryMethod{2}, Instrument_45);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_45;
      StrikePriceBoundaryPrecision_45.setString("59.780000");
set_field(noQuoteEntries_2_1_0, StrikePriceBoundaryPrecision_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::StrikePriceDeterminationMethod{1}, Instrument_45);
      FIX::StrikeValue StrikeValue_45;
      StrikeValue_45.setString("20421764");
set_field(noQuoteEntries_2_1_0, StrikeValue_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::Symbol{"STRING_1677670377"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::TimeUnit{"STRING_Wk"}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::UnitOfMeasure{"STRING_oz_tr"}, Instrument_45);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_45;
      UnitOfMeasureQty_45.setString("16667589");
set_field(noQuoteEntries_2_1_0, UnitOfMeasureQty_45, Instrument_45);
      set_field(noQuoteEntries_2_1_0, FIX::ValuationMethod{"STRING_CDS"}, Instrument_45);
      all_values.push_back(Instrument_45);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_88;
        set_field(noComplexEvents_2_0_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_88);
        FIX::ComplexEventPrice ComplexEventPrice_88;
        ComplexEventPrice_88.setString("14431240");
set_field(noComplexEvents_2_0_2_0, ComplexEventPrice_88, ComplexEvents_NoComplexEvents_88);
        set_field(noComplexEvents_2_0_2_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_88);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_88;
        ComplexEventPriceBoundaryPrecision_88.setString("96.830000");
set_field(noComplexEvents_2_0_2_0, ComplexEventPriceBoundaryPrecision_88, ComplexEvents_NoComplexEvents_88);
        set_field(noComplexEvents_2_0_2_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_88);
        set_field(noComplexEvents_2_0_2_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_88);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_88;
        ComplexOptPayoutAmount_88.setString("15945882");
set_field(noComplexEvents_2_0_2_0, ComplexOptPayoutAmount_88, ComplexEvents_NoComplexEvents_88);
        all_values.push_back(ComplexEvents_NoComplexEvents_88);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_174;
          set_field(noComplexEventDates_2_0_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 20, 48, 26, 4, 2002)}, ComplexEventDates_NoComplexEventDates_174);
          set_field(noComplexEventDates_2_0_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 52, 9, 16, 7, 2013)}, ComplexEventDates_NoComplexEventDates_174);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_174);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_352;
            set_field(noComplexEventTimes_2_0_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 15, 32)}, ComplexEventTimes_NoComplexEventTimes_352);
            set_field(noComplexEventTimes_2_0_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 16, 40)}, ComplexEventTimes_NoComplexEventTimes_352);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_352);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_0_0_3_0.addGroup(noComplexEventTimes_2_0_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_353;
            set_field(noComplexEventTimes_2_0_0_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 59, 15)}, ComplexEventTimes_NoComplexEventTimes_353);
            set_field(noComplexEventTimes_2_0_0_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 31, 57)}, ComplexEventTimes_NoComplexEventTimes_353);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_353);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_0_0_3_0.addGroup(noComplexEventTimes_2_0_0_0_4_1);
          }
          noComplexEvents_2_0_2_0.addGroup(noComplexEventDates_2_0_0_3_0);
        }
        noQuoteEntries_2_1_0.addGroup(noComplexEvents_2_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_89;
        set_field(noComplexEvents_2_0_2_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_89);
        FIX::ComplexEventPrice ComplexEventPrice_89;
        ComplexEventPrice_89.setString("12696731");
set_field(noComplexEvents_2_0_2_1, ComplexEventPrice_89, ComplexEvents_NoComplexEvents_89);
        set_field(noComplexEvents_2_0_2_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_89);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_89;
        ComplexEventPriceBoundaryPrecision_89.setString("34.180000");
set_field(noComplexEvents_2_0_2_1, ComplexEventPriceBoundaryPrecision_89, ComplexEvents_NoComplexEvents_89);
        set_field(noComplexEvents_2_0_2_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_89);
        set_field(noComplexEvents_2_0_2_1, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_89);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_89;
        ComplexOptPayoutAmount_89.setString("316242");
set_field(noComplexEvents_2_0_2_1, ComplexOptPayoutAmount_89, ComplexEvents_NoComplexEvents_89);
        all_values.push_back(ComplexEvents_NoComplexEvents_89);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_175;
          set_field(noComplexEventDates_2_0_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 8, 34, 1, 3, 2005)}, ComplexEventDates_NoComplexEventDates_175);
          set_field(noComplexEventDates_2_0_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 9, 34, 20, 9, 2006)}, ComplexEventDates_NoComplexEventDates_175);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_175);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_354;
            set_field(noComplexEventTimes_2_0_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 3, 8)}, ComplexEventTimes_NoComplexEventTimes_354);
            set_field(noComplexEventTimes_2_0_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 32, 34)}, ComplexEventTimes_NoComplexEventTimes_354);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_354);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_0_1_3_0.addGroup(noComplexEventTimes_2_0_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_355;
            set_field(noComplexEventTimes_2_0_1_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 44, 7)}, ComplexEventTimes_NoComplexEventTimes_355);
            set_field(noComplexEventTimes_2_0_1_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 10, 44)}, ComplexEventTimes_NoComplexEventTimes_355);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_355);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_0_1_3_0.addGroup(noComplexEventTimes_2_0_1_0_4_1);
          }
          noComplexEvents_2_0_2_1.addGroup(noComplexEventDates_2_0_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_176;
          set_field(noComplexEventDates_2_0_1_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 44, 16, 22, 11, 2008)}, ComplexEventDates_NoComplexEventDates_176);
          set_field(noComplexEventDates_2_0_1_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 3, 10, 17, 4, 2016)}, ComplexEventDates_NoComplexEventDates_176);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_176);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_356;
            set_field(noComplexEventTimes_2_0_1_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 41, 9)}, ComplexEventTimes_NoComplexEventTimes_356);
            set_field(noComplexEventTimes_2_0_1_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 33, 48)}, ComplexEventTimes_NoComplexEventTimes_356);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_356);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_0_1_3_1.addGroup(noComplexEventTimes_2_0_1_1_4_0);
          }
          noComplexEvents_2_0_2_1.addGroup(noComplexEventDates_2_0_1_3_1);
        }
        noQuoteEntries_2_1_0.addGroup(noComplexEvents_2_0_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_2_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_99;
        set_field(noEvents_2_0_2_0, FIX::EventDate{"LOCALMKTDATE_350229274"}, EvntGrp_NoEvents_99);
        FIX::EventPx EventPx_99;
        EventPx_99.setString("14773405");
set_field(noEvents_2_0_2_0, EventPx_99, EvntGrp_NoEvents_99);
        set_field(noEvents_2_0_2_0, FIX::EventText{"STRING_216041268"}, EvntGrp_NoEvents_99);
        set_field(noEvents_2_0_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(17, 58, 47, 4, 8, 2014)}, EvntGrp_NoEvents_99);
        set_field(noEvents_2_0_2_0, FIX::EventType{9}, EvntGrp_NoEvents_99);
        all_values.push_back(EvntGrp_NoEvents_99);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_2_1_0.addGroup(noEvents_2_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_88;
        set_field(noInstrumentParties_2_0_2_0, FIX::InstrumentPartyID{"STRING_1037476026"}, InstrumentParties_NoInstrumentParties_88);
        set_field(noInstrumentParties_2_0_2_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_88);
        set_field(noInstrumentParties_2_0_2_0, FIX::InstrumentPartyRole{1257754737}, InstrumentParties_NoInstrumentParties_88);
        all_values.push_back(InstrumentParties_NoInstrumentParties_88);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182;
          set_field(noInstrumentPartySubIDs_2_0_0_3_0, FIX::InstrumentPartySubID{"STRING_1187474605"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182);
          set_field(noInstrumentPartySubIDs_2_0_0_3_0, FIX::InstrumentPartySubIDType{281319239}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_182);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_2_0_2_0.addGroup(noInstrumentPartySubIDs_2_0_0_3_0);
        }
        noQuoteEntries_2_1_0.addGroup(noInstrumentParties_2_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_91;
        set_field(noSecurityAltID_2_0_2_0, FIX::SecurityAltID{"STRING_1539204221"}, SecAltIDGrp_NoSecurityAltID_91);
        set_field(noSecurityAltID_2_0_2_0, FIX::SecurityAltIDSource{"STRING_1803729771"}, SecAltIDGrp_NoSecurityAltID_91);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_91);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_2_1_0.addGroup(noSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_92;
        set_field(noSecurityAltID_2_0_2_1, FIX::SecurityAltID{"STRING_1063956874"}, SecAltIDGrp_NoSecurityAltID_92);
        set_field(noSecurityAltID_2_0_2_1, FIX::SecurityAltIDSource{"STRING_1213364861"}, SecAltIDGrp_NoSecurityAltID_92);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_92);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_2_1_0.addGroup(noSecurityAltID_2_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_0_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_93;
        set_field(noSecurityAltID_2_0_2_2, FIX::SecurityAltID{"STRING_686374228"}, SecAltIDGrp_NoSecurityAltID_93);
        set_field(noSecurityAltID_2_0_2_2, FIX::SecurityAltIDSource{"STRING_179571727"}, SecAltIDGrp_NoSecurityAltID_93);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_93);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_2_1_0.addGroup(noSecurityAltID_2_0_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_90;
      set_field(noQuoteEntries_2_1_0, FIX::SecurityXML{"XMLDATA_289438422"}, SecurityXML_90);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityXMLLen{404477262}, SecurityXML_90);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityXMLSchema{"STRING_2035667606"}, SecurityXML_90);
      all_values.push_back(SecurityXML_90);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_2.addGroup(noQuoteEntries_2_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_2_1_1;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_5;
      FIX::BidForwardPoints BidForwardPoints_11;
      BidForwardPoints_11.setString("4414950");
set_field(noQuoteEntries_2_1_1, BidForwardPoints_11, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::BidForwardPoints2 BidForwardPoints2_11;
      BidForwardPoints2_11.setString("18998042");
set_field(noQuoteEntries_2_1_1, BidForwardPoints2_11, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::BidPx BidPx_11;
      BidPx_11.setString("15029426");
set_field(noQuoteEntries_2_1_1, BidPx_11, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::BidSize BidSize_11;
      BidSize_11.setString("7917243");
set_field(noQuoteEntries_2_1_1, BidSize_11, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::BidSpotRate BidSpotRate_11;
      BidSpotRate_11.setString("12296611");
set_field(noQuoteEntries_2_1_1, BidSpotRate_11, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::BidYield BidYield_11;
      BidYield_11.setString("39.150000");
set_field(noQuoteEntries_2_1_1, BidYield_11, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::BookingType{2}, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::Currency{"CHF"}, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::MidPx MidPx_11;
      MidPx_11.setString("10083448");
set_field(noQuoteEntries_2_1_1, MidPx_11, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::MidYield MidYield_11;
      MidYield_11.setString("60.810000");
set_field(noQuoteEntries_2_1_1, MidYield_11, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::OfferForwardPoints OfferForwardPoints_11;
      OfferForwardPoints_11.setString("16511017");
set_field(noQuoteEntries_2_1_1, OfferForwardPoints_11, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::OfferForwardPoints2 OfferForwardPoints2_11;
      OfferForwardPoints2_11.setString("19966867");
set_field(noQuoteEntries_2_1_1, OfferForwardPoints2_11, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::OfferPx OfferPx_11;
      OfferPx_11.setString("3055240");
set_field(noQuoteEntries_2_1_1, OfferPx_11, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::OfferSize OfferSize_11;
      OfferSize_11.setString("809722");
set_field(noQuoteEntries_2_1_1, OfferSize_11, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::OfferSpotRate OfferSpotRate_11;
      OfferSpotRate_11.setString("8866791");
set_field(noQuoteEntries_2_1_1, OfferSpotRate_11, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::OfferYield OfferYield_11;
      OfferYield_11.setString("78.640000");
set_field(noQuoteEntries_2_1_1, OfferYield_11, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::OrdType{'G'}, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::OrderCapacity{'P'}, QuotEntryAckGrp_NoQuoteEntries_5);
      FIX::OrderQty2 OrderQty2_12;
      OrderQty2_12.setString("161988");
set_field(noQuoteEntries_2_1_1, OrderQty2_12, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_6"}, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::QuoteEntryID{"STRING_473167335"}, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::QuoteEntryRejectReason{1555403042}, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::QuoteEntryStatus{5}, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::SettlDate{"LOCALMKTDATE_1537124209"}, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::SettlDate2{"LOCALMKTDATE_621284256"}, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::TradingSessionID{"STRING_3"}, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::TradingSessionSubID{"STRING_5"}, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::TransactTime{FIX::UTCTIMESTAMP(13, 15, 34, 0, 3, 2012)}, QuotEntryAckGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_1, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(1, 9, 56, 10, 3, 2017)}, QuotEntryAckGrp_NoQuoteEntries_5);
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_5);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_2_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_80;
        set_field(noLegs_2_1_2_0, FIX::EncodedLegIssuer{"DATA_876185875"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::EncodedLegIssuerLen{1504635839}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::EncodedLegSecurityDesc{"DATA_684361451"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::EncodedLegSecurityDescLen{1762864987}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegCFICode{"STRING_333360055"}, InstrumentLeg_80);
        FIX::LegContractMultiplier LegContractMultiplier_80;
        LegContractMultiplier_80.setString("20230884");
set_field(noLegs_2_1_2_0, LegContractMultiplier_80, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegContractMultiplierUnit{996973586}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_349558876"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegCountryOfIssue{"COUNTRY_1495650945"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1470140921"}, InstrumentLeg_80);
        FIX::LegCouponRate LegCouponRate_80;
        LegCouponRate_80.setString("19.190000");
set_field(noLegs_2_1_2_0, LegCouponRate_80, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegCreditRating{"STRING_624459611"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegDatedDate{"LOCALMKTDATE_439642505"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegExerciseStyle{428993771}, InstrumentLeg_80);
        FIX::LegFactor LegFactor_80;
        LegFactor_80.setString("12894852");
set_field(noLegs_2_1_2_0, LegFactor_80, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegFlowScheduleType{659302662}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegInstrRegistry{"STRING_2033873666"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_494219311"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegIssueDate{"LOCALMKTDATE_631283382"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegIssuer{"STRING_846728912"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegLocaleOfIssue{"STRING_490677767"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_1832925210"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1378568073"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegMaturityTime{"TZTIMEONLY_509315697"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegOptAttribute{'5'}, InstrumentLeg_80);
        FIX::LegOptionRatio LegOptionRatio_80;
        LegOptionRatio_80.setString("3308556");
set_field(noLegs_2_1_2_0, LegOptionRatio_80, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegPool{"STRING_1536298487"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegPriceUnitOfMeasure{"STRING_1738179036"}, InstrumentLeg_80);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_80;
        LegPriceUnitOfMeasureQty_80.setString("9342448");
set_field(noLegs_2_1_2_0, LegPriceUnitOfMeasureQty_80, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegProduct{265000715}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegPutOrCall{1095331227}, InstrumentLeg_80);
        FIX::LegRatioQty LegRatioQty_80;
        LegRatioQty_80.setString("16186063");
set_field(noLegs_2_1_2_0, LegRatioQty_80, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_2027865702"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegRepoCollateralSecurityType{"STRING_1428691282"}, InstrumentLeg_80);
        FIX::LegRepurchaseRate LegRepurchaseRate_80;
        LegRepurchaseRate_80.setString("10.550000");
set_field(noLegs_2_1_2_0, LegRepurchaseRate_80, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegRepurchaseTerm{877355640}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegSecurityDesc{"STRING_1778250158"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegSecurityExchange{"EXCHANGE_842378352"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegSecurityID{"STRING_200012913"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegSecurityIDSource{"STRING_1535728429"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegSecuritySubType{"STRING_1466837963"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegSecurityType{"STRING_1059794396"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegSide{'1'}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_1906480469"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_80);
        FIX::LegStrikePrice LegStrikePrice_80;
        LegStrikePrice_80.setString("4182994");
set_field(noLegs_2_1_2_0, LegStrikePrice_80, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegSymbol{"STRING_1375178186"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegSymbolSfx{"STRING_1550711825"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegTimeUnit{"STRING_1049582866"}, InstrumentLeg_80);
        set_field(noLegs_2_1_2_0, FIX::LegUnitOfMeasure{"STRING_74423451"}, InstrumentLeg_80);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_80;
        LegUnitOfMeasureQty_80.setString("20413895");
set_field(noLegs_2_1_2_0, LegUnitOfMeasureQty_80, InstrumentLeg_80);
        all_values.push_back(InstrumentLeg_80);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_161;
          set_field(noLegSecurityAltID_2_1_0_3_0, FIX::LegSecurityAltID{"STRING_1452991524"}, LegSecAltIDGrp_NoLegSecurityAltID_161);
          set_field(noLegSecurityAltID_2_1_0_3_0, FIX::LegSecurityAltIDSource{"STRING_403221642"}, LegSecAltIDGrp_NoLegSecurityAltID_161);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_161);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_2_1_2_0.addGroup(noLegSecurityAltID_2_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_162;
          set_field(noLegSecurityAltID_2_1_0_3_1, FIX::LegSecurityAltID{"STRING_1274091686"}, LegSecAltIDGrp_NoLegSecurityAltID_162);
          set_field(noLegSecurityAltID_2_1_0_3_1, FIX::LegSecurityAltIDSource{"STRING_1783847136"}, LegSecAltIDGrp_NoLegSecurityAltID_162);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_162);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_2_1_2_0.addGroup(noLegSecurityAltID_2_1_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_163;
          set_field(noLegSecurityAltID_2_1_0_3_2, FIX::LegSecurityAltID{"STRING_1939520129"}, LegSecAltIDGrp_NoLegSecurityAltID_163);
          set_field(noLegSecurityAltID_2_1_0_3_2, FIX::LegSecurityAltIDSource{"STRING_864787074"}, LegSecAltIDGrp_NoLegSecurityAltID_163);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_163);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_2_1_2_0.addGroup(noLegSecurityAltID_2_1_0_3_2);
        }
        noQuoteEntries_2_1_1.addGroup(noLegs_2_1_2_0);
      }
      // Instrument
      multiset<string> Instrument_46;
      FIX::AttachmentPoint AttachmentPoint_46;
      AttachmentPoint_46.setString("83.370000");
set_field(noQuoteEntries_2_1_1, AttachmentPoint_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::CFICode{"STRING_57037196"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::CPProgram{1}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::CPRegType{"STRING_41730990"}, Instrument_46);
      FIX::CapPrice CapPrice_46;
      CapPrice_46.setString("20849028");
set_field(noQuoteEntries_2_1_1, CapPrice_46, Instrument_46);
      FIX::ContractMultiplier ContractMultiplier_46;
      ContractMultiplier_46.setString("12413259");
set_field(noQuoteEntries_2_1_1, ContractMultiplier_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::ContractMultiplierUnit{0}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::ContractSettlMonth{"MONTHYEAR_814774890"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::CountryOfIssue{"COUNTRY_872092446"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::CouponPaymentDate{"LOCALMKTDATE_230836750"}, Instrument_46);
      FIX::CouponRate CouponRate_46;
      CouponRate_46.setString("78.040000");
set_field(noQuoteEntries_2_1_1, CouponRate_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::CreditRating{"STRING_260337227"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::DatedDate{"LOCALMKTDATE_1697674714"}, Instrument_46);
      FIX::DetachmentPoint DetachmentPoint_46;
      DetachmentPoint_46.setString("22.000000");
set_field(noQuoteEntries_2_1_1, DetachmentPoint_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::EncodedIssuer{"DATA_27344536"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::EncodedIssuerLen{1456671535}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::EncodedSecurityDesc{"DATA_1415886720"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::EncodedSecurityDescLen{1083837050}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::ExerciseStyle{1}, Instrument_46);
      FIX::Factor Factor_46;
      Factor_46.setString("6435812");
set_field(noQuoteEntries_2_1_1, Factor_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::FlexibleIndicator{true}, Instrument_46);
      FIX::FloorPrice FloorPrice_46;
      FloorPrice_46.setString("7180047");
set_field(noQuoteEntries_2_1_1, FloorPrice_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::FlowScheduleType{2}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::InstrRegistry{"STRING_1512094664"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::InstrmtAssignmentMethod{'2'}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::InterestAccrualDate{"LOCALMKTDATE_784192814"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::IssueDate{"LOCALMKTDATE_638702703"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::Issuer{"STRING_1807359722"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::ListMethod{0}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::LocaleOfIssue{"STRING_1503489777"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::MaturityDate{"LOCALMKTDATE_230484412"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::MaturityMonthYear{"MONTHYEAR_633266492"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::MaturityTime{"TZTIMEONLY_1316124431"}, Instrument_46);
      FIX::MinPriceIncrement MinPriceIncrement_46;
      MinPriceIncrement_46.setString("2722154");
set_field(noQuoteEntries_2_1_1, MinPriceIncrement_46, Instrument_46);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_46;
      MinPriceIncrementAmount_46.setString("5706857");
set_field(noQuoteEntries_2_1_1, MinPriceIncrementAmount_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::NTPositionLimit{409966718}, Instrument_46);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_46;
      NotionalPercentageOutstanding_46.setString("74.480000");
set_field(noQuoteEntries_2_1_1, NotionalPercentageOutstanding_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::OptAttribute{'1'}, Instrument_46);
      FIX::OptPayoutAmount OptPayoutAmount_46;
      OptPayoutAmount_46.setString("12820591");
set_field(noQuoteEntries_2_1_1, OptPayoutAmount_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::OptPayoutType{1}, Instrument_46);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_46;
      OriginalNotionalPercentageOutstanding_46.setString("47.890000");
set_field(noQuoteEntries_2_1_1, OriginalNotionalPercentageOutstanding_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::Pool{"STRING_1542396392"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::PositionLimit{1589185265}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::PriceUnitOfMeasure{"STRING_1569740928"}, Instrument_46);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_46;
      PriceUnitOfMeasureQty_46.setString("8983731");
set_field(noQuoteEntries_2_1_1, PriceUnitOfMeasureQty_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::Product{11}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::ProductComplex{"STRING_506094330"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::PutOrCall{0}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::RedemptionDate{"LOCALMKTDATE_91847673"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::RepoCollateralSecurityType{"STRING_993159557"}, Instrument_46);
      FIX::RepurchaseRate RepurchaseRate_46;
      RepurchaseRate_46.setString("7.590000");
set_field(noQuoteEntries_2_1_1, RepurchaseRate_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::RepurchaseTerm{809852383}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::RestructuringType{"STRING_MM"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::SecurityDesc{"STRING_767541775"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::SecurityExchange{"EXCHANGE_833364970"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::SecurityGroup{"STRING_10839896"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::SecurityID{"STRING_1406244478"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::SecurityIDSource{"STRING_B"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::SecurityStatus{"STRING_1"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::SecuritySubType{"STRING_762250608"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::SecurityType{"STRING_EUCP"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::Seniority{"STRING_SB"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::SettlMethod{'P'}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::SettleOnOpenFlag{"STRING_995940859"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::StateOrProvinceOfIssue{"STRING_1791021428"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::StrikeCurrency{"CHF"}, Instrument_46);
      FIX::StrikeMultiplier StrikeMultiplier_46;
      StrikeMultiplier_46.setString("10289984");
set_field(noQuoteEntries_2_1_1, StrikeMultiplier_46, Instrument_46);
      FIX::StrikePrice StrikePrice_46;
      StrikePrice_46.setString("16229172");
set_field(noQuoteEntries_2_1_1, StrikePrice_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::StrikePriceBoundaryMethod{1}, Instrument_46);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_46;
      StrikePriceBoundaryPrecision_46.setString("32.030000");
set_field(noQuoteEntries_2_1_1, StrikePriceBoundaryPrecision_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::StrikePriceDeterminationMethod{3}, Instrument_46);
      FIX::StrikeValue StrikeValue_46;
      StrikeValue_46.setString("21373104");
set_field(noQuoteEntries_2_1_1, StrikeValue_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::Symbol{"STRING_1461626545"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::TimeUnit{"STRING_S"}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_46);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_46;
      UnitOfMeasureQty_46.setString("15140605");
set_field(noQuoteEntries_2_1_1, UnitOfMeasureQty_46, Instrument_46);
      set_field(noQuoteEntries_2_1_1, FIX::ValuationMethod{"STRING_CDS"}, Instrument_46);
      all_values.push_back(Instrument_46);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_90;
        set_field(noComplexEvents_2_1_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_90);
        FIX::ComplexEventPrice ComplexEventPrice_90;
        ComplexEventPrice_90.setString("18115930");
set_field(noComplexEvents_2_1_2_0, ComplexEventPrice_90, ComplexEvents_NoComplexEvents_90);
        set_field(noComplexEvents_2_1_2_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_90);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_90;
        ComplexEventPriceBoundaryPrecision_90.setString("93.880000");
set_field(noComplexEvents_2_1_2_0, ComplexEventPriceBoundaryPrecision_90, ComplexEvents_NoComplexEvents_90);
        set_field(noComplexEvents_2_1_2_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_90);
        set_field(noComplexEvents_2_1_2_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_90);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_90;
        ComplexOptPayoutAmount_90.setString("7958102");
set_field(noComplexEvents_2_1_2_0, ComplexOptPayoutAmount_90, ComplexEvents_NoComplexEvents_90);
        all_values.push_back(ComplexEvents_NoComplexEvents_90);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_177;
          set_field(noComplexEventDates_2_1_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 59, 13, 26, 11, 2013)}, ComplexEventDates_NoComplexEventDates_177);
          set_field(noComplexEventDates_2_1_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 47, 53, 20, 7, 2017)}, ComplexEventDates_NoComplexEventDates_177);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_177);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_357;
            set_field(noComplexEventTimes_2_1_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 59, 38)}, ComplexEventTimes_NoComplexEventTimes_357);
            set_field(noComplexEventTimes_2_1_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 51, 27)}, ComplexEventTimes_NoComplexEventTimes_357);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_357);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_1_0_3_0.addGroup(noComplexEventTimes_2_1_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_358;
            set_field(noComplexEventTimes_2_1_0_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 6, 7)}, ComplexEventTimes_NoComplexEventTimes_358);
            set_field(noComplexEventTimes_2_1_0_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 46, 33)}, ComplexEventTimes_NoComplexEventTimes_358);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_358);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_1_0_3_0.addGroup(noComplexEventTimes_2_1_0_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_359;
            set_field(noComplexEventTimes_2_1_0_0_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 25, 12)}, ComplexEventTimes_NoComplexEventTimes_359);
            set_field(noComplexEventTimes_2_1_0_0_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 18, 2)}, ComplexEventTimes_NoComplexEventTimes_359);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_359);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_1_0_3_0.addGroup(noComplexEventTimes_2_1_0_0_4_2);
          }
          noComplexEvents_2_1_2_0.addGroup(noComplexEventDates_2_1_0_3_0);
        }
        noQuoteEntries_2_1_1.addGroup(noComplexEvents_2_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_91;
        set_field(noComplexEvents_2_1_2_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_91);
        FIX::ComplexEventPrice ComplexEventPrice_91;
        ComplexEventPrice_91.setString("18443017");
set_field(noComplexEvents_2_1_2_1, ComplexEventPrice_91, ComplexEvents_NoComplexEvents_91);
        set_field(noComplexEvents_2_1_2_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_91);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_91;
        ComplexEventPriceBoundaryPrecision_91.setString("92.980000");
set_field(noComplexEvents_2_1_2_1, ComplexEventPriceBoundaryPrecision_91, ComplexEvents_NoComplexEvents_91);
        set_field(noComplexEvents_2_1_2_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_91);
        set_field(noComplexEvents_2_1_2_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_91);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_91;
        ComplexOptPayoutAmount_91.setString("14536603");
set_field(noComplexEvents_2_1_2_1, ComplexOptPayoutAmount_91, ComplexEvents_NoComplexEvents_91);
        all_values.push_back(ComplexEvents_NoComplexEvents_91);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_178;
          set_field(noComplexEventDates_2_1_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 16, 14, 11, 1, 2005)}, ComplexEventDates_NoComplexEventDates_178);
          set_field(noComplexEventDates_2_1_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 40, 16, 22, 7, 2014)}, ComplexEventDates_NoComplexEventDates_178);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_178);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_360;
            set_field(noComplexEventTimes_2_1_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 1, 26)}, ComplexEventTimes_NoComplexEventTimes_360);
            set_field(noComplexEventTimes_2_1_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 44, 17)}, ComplexEventTimes_NoComplexEventTimes_360);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_360);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_1_1_3_0.addGroup(noComplexEventTimes_2_1_1_0_4_0);
          }
          noComplexEvents_2_1_2_1.addGroup(noComplexEventDates_2_1_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_179;
          set_field(noComplexEventDates_2_1_1_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 5, 56, 16, 5, 2014)}, ComplexEventDates_NoComplexEventDates_179);
          set_field(noComplexEventDates_2_1_1_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 23, 6, 0, 7, 2000)}, ComplexEventDates_NoComplexEventDates_179);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_179);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_361;
            set_field(noComplexEventTimes_2_1_1_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 29, 32)}, ComplexEventTimes_NoComplexEventTimes_361);
            set_field(noComplexEventTimes_2_1_1_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 27, 9)}, ComplexEventTimes_NoComplexEventTimes_361);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_361);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_1_1_3_1.addGroup(noComplexEventTimes_2_1_1_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_362;
            set_field(noComplexEventTimes_2_1_1_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 10, 31)}, ComplexEventTimes_NoComplexEventTimes_362);
            set_field(noComplexEventTimes_2_1_1_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 7, 6)}, ComplexEventTimes_NoComplexEventTimes_362);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_362);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_1_1_3_1.addGroup(noComplexEventTimes_2_1_1_1_4_1);
          }
          noComplexEvents_2_1_2_1.addGroup(noComplexEventDates_2_1_1_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_180;
          set_field(noComplexEventDates_2_1_1_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 11, 12, 4, 8, 2000)}, ComplexEventDates_NoComplexEventDates_180);
          set_field(noComplexEventDates_2_1_1_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 42, 5, 13, 5, 2015)}, ComplexEventDates_NoComplexEventDates_180);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_180);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_363;
            set_field(noComplexEventTimes_2_1_1_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 32, 21)}, ComplexEventTimes_NoComplexEventTimes_363);
            set_field(noComplexEventTimes_2_1_1_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 48, 16)}, ComplexEventTimes_NoComplexEventTimes_363);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_363);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_1_1_3_2.addGroup(noComplexEventTimes_2_1_1_2_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_1_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_364;
            set_field(noComplexEventTimes_2_1_1_2_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 18, 53)}, ComplexEventTimes_NoComplexEventTimes_364);
            set_field(noComplexEventTimes_2_1_1_2_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 0, 1)}, ComplexEventTimes_NoComplexEventTimes_364);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_364);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_1_1_3_2.addGroup(noComplexEventTimes_2_1_1_2_4_1);
          }
          noComplexEvents_2_1_2_1.addGroup(noComplexEventDates_2_1_1_3_2);
        }
        noQuoteEntries_2_1_1.addGroup(noComplexEvents_2_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_1_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_92;
        set_field(noComplexEvents_2_1_2_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_92);
        FIX::ComplexEventPrice ComplexEventPrice_92;
        ComplexEventPrice_92.setString("16111016");
set_field(noComplexEvents_2_1_2_2, ComplexEventPrice_92, ComplexEvents_NoComplexEvents_92);
        set_field(noComplexEvents_2_1_2_2, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_92);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_92;
        ComplexEventPriceBoundaryPrecision_92.setString("0.290000");
set_field(noComplexEvents_2_1_2_2, ComplexEventPriceBoundaryPrecision_92, ComplexEvents_NoComplexEvents_92);
        set_field(noComplexEvents_2_1_2_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_92);
        set_field(noComplexEvents_2_1_2_2, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_92);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_92;
        ComplexOptPayoutAmount_92.setString("5124485");
set_field(noComplexEvents_2_1_2_2, ComplexOptPayoutAmount_92, ComplexEvents_NoComplexEvents_92);
        all_values.push_back(ComplexEvents_NoComplexEvents_92);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_181;
          set_field(noComplexEventDates_2_1_2_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 37, 58, 6, 5, 2002)}, ComplexEventDates_NoComplexEventDates_181);
          set_field(noComplexEventDates_2_1_2_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 40, 52, 5, 9, 2014)}, ComplexEventDates_NoComplexEventDates_181);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_181);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_365;
            set_field(noComplexEventTimes_2_1_2_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 47, 11)}, ComplexEventTimes_NoComplexEventTimes_365);
            set_field(noComplexEventTimes_2_1_2_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 3, 27)}, ComplexEventTimes_NoComplexEventTimes_365);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_365);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_1_2_3_0.addGroup(noComplexEventTimes_2_1_2_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_366;
            set_field(noComplexEventTimes_2_1_2_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 32, 42)}, ComplexEventTimes_NoComplexEventTimes_366);
            set_field(noComplexEventTimes_2_1_2_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 10, 14)}, ComplexEventTimes_NoComplexEventTimes_366);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_366);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_1_2_3_0.addGroup(noComplexEventTimes_2_1_2_0_4_1);
          }
          noComplexEvents_2_1_2_2.addGroup(noComplexEventDates_2_1_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_182;
          set_field(noComplexEventDates_2_1_2_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 51, 7, 7, 12, 2007)}, ComplexEventDates_NoComplexEventDates_182);
          set_field(noComplexEventDates_2_1_2_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 40, 10, 11, 1, 2004)}, ComplexEventDates_NoComplexEventDates_182);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_182);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_367;
            set_field(noComplexEventTimes_2_1_2_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 8, 57)}, ComplexEventTimes_NoComplexEventTimes_367);
            set_field(noComplexEventTimes_2_1_2_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 1, 6)}, ComplexEventTimes_NoComplexEventTimes_367);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_367);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_1_2_3_1.addGroup(noComplexEventTimes_2_1_2_1_4_0);
          }
          noComplexEvents_2_1_2_2.addGroup(noComplexEventDates_2_1_2_3_1);
        }
        noQuoteEntries_2_1_1.addGroup(noComplexEvents_2_1_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_2_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_100;
        set_field(noEvents_2_1_2_0, FIX::EventDate{"LOCALMKTDATE_1764777885"}, EvntGrp_NoEvents_100);
        FIX::EventPx EventPx_100;
        EventPx_100.setString("10120396");
set_field(noEvents_2_1_2_0, EventPx_100, EvntGrp_NoEvents_100);
        set_field(noEvents_2_1_2_0, FIX::EventText{"STRING_1309507372"}, EvntGrp_NoEvents_100);
        set_field(noEvents_2_1_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(22, 54, 17, 15, 8, 2014)}, EvntGrp_NoEvents_100);
        set_field(noEvents_2_1_2_0, FIX::EventType{19}, EvntGrp_NoEvents_100);
        all_values.push_back(EvntGrp_NoEvents_100);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_2_1_1.addGroup(noEvents_2_1_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_89;
        set_field(noInstrumentParties_2_1_2_0, FIX::InstrumentPartyID{"STRING_344760084"}, InstrumentParties_NoInstrumentParties_89);
        set_field(noInstrumentParties_2_1_2_0, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_89);
        set_field(noInstrumentParties_2_1_2_0, FIX::InstrumentPartyRole{1417909992}, InstrumentParties_NoInstrumentParties_89);
        all_values.push_back(InstrumentParties_NoInstrumentParties_89);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183;
          set_field(noInstrumentPartySubIDs_2_1_0_3_0, FIX::InstrumentPartySubID{"STRING_1084205825"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183);
          set_field(noInstrumentPartySubIDs_2_1_0_3_0, FIX::InstrumentPartySubIDType{346976294}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_183);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_2_1_2_0.addGroup(noInstrumentPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184;
          set_field(noInstrumentPartySubIDs_2_1_0_3_1, FIX::InstrumentPartySubID{"STRING_593195925"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184);
          set_field(noInstrumentPartySubIDs_2_1_0_3_1, FIX::InstrumentPartySubIDType{177845974}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_184);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_2_1_2_0.addGroup(noInstrumentPartySubIDs_2_1_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185;
          set_field(noInstrumentPartySubIDs_2_1_0_3_2, FIX::InstrumentPartySubID{"STRING_447653448"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185);
          set_field(noInstrumentPartySubIDs_2_1_0_3_2, FIX::InstrumentPartySubIDType{987541086}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_185);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_2_1_2_0.addGroup(noInstrumentPartySubIDs_2_1_0_3_2);
        }
        noQuoteEntries_2_1_1.addGroup(noInstrumentParties_2_1_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_94;
        set_field(noSecurityAltID_2_1_2_0, FIX::SecurityAltID{"STRING_1422418500"}, SecAltIDGrp_NoSecurityAltID_94);
        set_field(noSecurityAltID_2_1_2_0, FIX::SecurityAltIDSource{"STRING_1654358355"}, SecAltIDGrp_NoSecurityAltID_94);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_94);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_2_1_1.addGroup(noSecurityAltID_2_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_95;
        set_field(noSecurityAltID_2_1_2_1, FIX::SecurityAltID{"STRING_1772665158"}, SecAltIDGrp_NoSecurityAltID_95);
        set_field(noSecurityAltID_2_1_2_1, FIX::SecurityAltIDSource{"STRING_1662708759"}, SecAltIDGrp_NoSecurityAltID_95);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_95);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_2_1_1.addGroup(noSecurityAltID_2_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_1_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_96;
        set_field(noSecurityAltID_2_1_2_2, FIX::SecurityAltID{"STRING_1356133431"}, SecAltIDGrp_NoSecurityAltID_96);
        set_field(noSecurityAltID_2_1_2_2, FIX::SecurityAltIDSource{"STRING_1592487131"}, SecAltIDGrp_NoSecurityAltID_96);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_96);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_2_1_1.addGroup(noSecurityAltID_2_1_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_92;
      set_field(noQuoteEntries_2_1_1, FIX::SecurityXML{"XMLDATA_599179417"}, SecurityXML_92);
      set_field(noQuoteEntries_2_1_1, FIX::SecurityXMLLen{1716434641}, SecurityXML_92);
      set_field(noQuoteEntries_2_1_1, FIX::SecurityXMLSchema{"STRING_1209781368"}, SecurityXML_92);
      all_values.push_back(SecurityXML_92);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_2.addGroup(noQuoteEntries_2_1_1);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_61;
    set_field(noQuoteSets_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1611219067"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::EncodedUnderlyingIssuerLen{878458365}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_2027344860"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::EncodedUnderlyingSecurityDescLen{638927889}, UnderlyingInstrument_61);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_61;
    UnderlyingAdjustedQuantity_61.setString("15021367");
set_field(noQuoteSets_0_2, UnderlyingAdjustedQuantity_61, UnderlyingInstrument_61);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_61;
    UnderlyingAllocationPercent_61.setString("21.490000");
set_field(noQuoteSets_0_2, UnderlyingAllocationPercent_61, UnderlyingInstrument_61);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_61;
    UnderlyingAttachmentPoint_61.setString("54.480000");
set_field(noQuoteSets_0_2, UnderlyingAttachmentPoint_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCFICode{"STRING_1385734118"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCPProgram{"STRING_136339030"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCPRegType{"STRING_104321558"}, UnderlyingInstrument_61);
    FIX::UnderlyingCapValue UnderlyingCapValue_61;
    UnderlyingCapValue_61.setString("9364281");
set_field(noQuoteSets_0_2, UnderlyingCapValue_61, UnderlyingInstrument_61);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_61;
    UnderlyingCashAmount_61.setString("4810991");
set_field(noQuoteSets_0_2, UnderlyingCashAmount_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_61);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_61;
    UnderlyingContractMultiplier_61.setString("2068545");
set_field(noQuoteSets_0_2, UnderlyingContractMultiplier_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingContractMultiplierUnit{351250888}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_2147233209"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_553830822"}, UnderlyingInstrument_61);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_61;
    UnderlyingCouponRate_61.setString("68.130000");
set_field(noQuoteSets_0_2, UnderlyingCouponRate_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCreditRating{"STRING_177595535"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_61);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_61;
    UnderlyingCurrentValue_61.setString("3168093");
set_field(noQuoteSets_0_2, UnderlyingCurrentValue_61, UnderlyingInstrument_61);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_61;
    UnderlyingDetachmentPoint_61.setString("91.230000");
set_field(noQuoteSets_0_2, UnderlyingDetachmentPoint_61, UnderlyingInstrument_61);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_61;
    UnderlyingDirtyPrice_61.setString("14388626");
set_field(noQuoteSets_0_2, UnderlyingDirtyPrice_61, UnderlyingInstrument_61);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_61;
    UnderlyingEndPrice_61.setString("20894745");
set_field(noQuoteSets_0_2, UnderlyingEndPrice_61, UnderlyingInstrument_61);
    FIX::UnderlyingEndValue UnderlyingEndValue_61;
    UnderlyingEndValue_61.setString("19391278");
set_field(noQuoteSets_0_2, UnderlyingEndValue_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingExerciseStyle{647512390}, UnderlyingInstrument_61);
    FIX::UnderlyingFXRate UnderlyingFXRate_61;
    UnderlyingFXRate_61.setString("15344779");
set_field(noQuoteSets_0_2, UnderlyingFXRate_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_61);
    FIX::UnderlyingFactor UnderlyingFactor_61;
    UnderlyingFactor_61.setString("2164633");
set_field(noQuoteSets_0_2, UnderlyingFactor_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingFlowScheduleType{596775717}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingInstrRegistry{"STRING_2002042718"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1094921748"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingIssuer{"STRING_476636929"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_493486959"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_449574860"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_709279078"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_261428759"}, UnderlyingInstrument_61);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_61;
    UnderlyingNotionalPercentageOutstanding_61.setString("89.780000");
set_field(noQuoteSets_0_2, UnderlyingNotionalPercentageOutstanding_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_61);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_61;
    UnderlyingOriginalNotionalPercentageOutstanding_61.setString("3.170000");
set_field(noQuoteSets_0_2, UnderlyingOriginalNotionalPercentageOutstanding_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_624253515"}, UnderlyingInstrument_61);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_61;
    UnderlyingPriceUnitOfMeasureQty_61.setString("13267172");
set_field(noQuoteSets_0_2, UnderlyingPriceUnitOfMeasureQty_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingProduct{1428777700}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingPutOrCall{831108043}, UnderlyingInstrument_61);
    FIX::UnderlyingPx UnderlyingPx_61;
    UnderlyingPx_61.setString("16779681");
set_field(noQuoteSets_0_2, UnderlyingPx_61, UnderlyingInstrument_61);
    FIX::UnderlyingQty UnderlyingQty_61;
    UnderlyingQty_61.setString("14285272");
set_field(noQuoteSets_0_2, UnderlyingQty_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1384938866"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_474931276"}, UnderlyingInstrument_61);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_61;
    UnderlyingRepurchaseRate_61.setString("27.960000");
set_field(noQuoteSets_0_2, UnderlyingRepurchaseRate_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingRepurchaseTerm{238939488}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingRestructuringType{"STRING_259435528"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSecurityDesc{"STRING_1922932152"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_515358611"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSecurityID{"STRING_1698298135"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1864923017"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSecuritySubType{"STRING_307002845"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSecurityType{"STRING_198326877"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSeniority{"STRING_1251917366"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSettlMethod{"STRING_697826496"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_61);
    FIX::UnderlyingStartValue UnderlyingStartValue_61;
    UnderlyingStartValue_61.setString("18486930");
set_field(noQuoteSets_0_2, UnderlyingStartValue_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_552385566"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_61);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_61;
    UnderlyingStrikePrice_61.setString("10458725");
set_field(noQuoteSets_0_2, UnderlyingStrikePrice_61, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSymbol{"STRING_1959286869"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSymbolSfx{"STRING_887125442"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingTimeUnit{"STRING_1307301284"}, UnderlyingInstrument_61);
    set_field(noQuoteSets_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1647112200"}, UnderlyingInstrument_61);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_61;
    UnderlyingUnitOfMeasureQty_61.setString("17327435");
set_field(noQuoteSets_0_2, UnderlyingUnitOfMeasureQty_61, UnderlyingInstrument_61);
    all_values.push_back(UnderlyingInstrument_61);
    all_compo_names.insert("...NoQuoteSets.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_128;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_123882067"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_128);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_911977125"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_128);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_128);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_121;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_954990110"}, UnderlyingStipulations_NoUnderlyingStips_121);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_442461588"}, UnderlyingStipulations_NoUnderlyingStips_121);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_121);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_133;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_192445328"}, UndlyInstrumentParties_NoUndlyInstrumentParties_133);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_133);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{1841512064}, UndlyInstrumentParties_NoUndlyInstrumentParties_133);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_133);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1176828392"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1616960568}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noQuoteSets_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noQuoteSets_0_2);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_0;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_727642879"}, TargetParties_NoTargetPartyIDs_0);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_0);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{1253746274}, TargetParties_NoTargetPartyIDs_0);
    all_values.push_back(TargetParties_NoTargetPartyIDs_0);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_1;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_925969756"}, TargetParties_NoTargetPartyIDs_1);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'4'}, TargetParties_NoTargetPartyIDs_1);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{1951572770}, TargetParties_NoTargetPartyIDs_1);
    all_values.push_back(TargetParties_NoTargetPartyIDs_1);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_2;
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyID{"STRING_1340760017"}, TargetParties_NoTargetPartyIDs_2);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_2);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyRole{356474689}, TargetParties_NoTargetPartyIDs_2);
    all_values.push_back(TargetParties_NoTargetPartyIDs_2);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // header
  multiset<string> header_47;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_9"}, header_47);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_317889454"}, header_47);
  set_header_field(msg.getHeader(), FIX::BodyLength{1402347214}, header_47);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_514791600"}, header_47);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1205014897"}, header_47);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_562164851"}, header_47);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_14420152"}, header_47);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{790274800}, header_47);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_47);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{138302219}, header_47);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1702251925"}, header_47);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1042078458"}, header_47);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1093292330"}, header_47);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(22, 58, 9, 22, 8, 2017)}, header_47);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_47);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_47);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_671610352"}, header_47);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1775372999}, header_47);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1770128530"}, header_47);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1597580109"}, header_47);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_66723007"}, header_47);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(6, 37, 41, 1, 1, 2002)}, header_47);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_2008636458"}, header_47);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1729670449"}, header_47);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1747720759"}, header_47);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_2023056610"}, header_47);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{372461601}, header_47);
  all_values.push_back(header_47);
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
