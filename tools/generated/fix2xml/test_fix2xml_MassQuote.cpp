#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::MassQuote msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MassQuote_0;
  set_field(msg, FIX::Account{"STRING_690852066"}, MassQuote_0);
  set_field(msg, FIX::AccountType{8}, MassQuote_0);
  set_field(msg, FIX::AcctIDSource{4}, MassQuote_0);
  FIX::DefBidSize DefBidSize_0;
  DefBidSize_0.setString("10349044");
set_field(msg, DefBidSize_0, MassQuote_0);
  FIX::DefOfferSize DefOfferSize_0;
  DefOfferSize_0.setString("2819247");
set_field(msg, DefOfferSize_0, MassQuote_0);
  set_field(msg, FIX::QuoteID{"STRING_1580600636"}, MassQuote_0);
  set_field(msg, FIX::QuoteReqID{"STRING_882134746"}, MassQuote_0);
  set_field(msg, FIX::QuoteResponseLevel{0}, MassQuote_0);
  set_field(msg, FIX::QuoteType{1}, MassQuote_0);
  all_values.push_back(MassQuote_0);

  all_compo_names.insert("MassQuote");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MassQuote::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_69;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_2099477699"}, Parties_NoPartyIDs_69);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_69);
    set_field(noPartyIDs_0_0, FIX::PartyRole{80}, Parties_NoPartyIDs_69);
    all_values.push_back(Parties_NoPartyIDs_69);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_140;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1596156149"}, PtysSubGrp_NoPartySubIDs_140);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_140);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_140);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // QuotSetGrp
  // Group QuotSetGrp.NoQuoteSets
  {
    FIX50SP2::MassQuote::NoQuoteSets noQuoteSets_0_0;
    // QuotSetGrp.NoQuoteSets
    multiset<string> QuotSetGrp_NoQuoteSets_0;
    set_field(noQuoteSets_0_0, FIX::LastFragment{false}, QuotSetGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::QuoteSetID{"STRING_565002731"}, QuotSetGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::QuoteSetValidUntilTime{FIX::UTCTIMESTAMP(14, 43, 59, 27, 1, 2001)}, QuotSetGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::TotNoQuoteEntries{1745470319}, QuotSetGrp_NoQuoteSets_0);
    all_values.push_back(QuotSetGrp_NoQuoteSets_0);
    all_compo_names.insert("...NoQuoteSets");

    // QuotEntryGrp
    // Group QuotEntryGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_0;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_0;
      FIX::BidForwardPoints BidForwardPoints_0;
      BidForwardPoints_0.setString("8070345");
set_field(noQuoteEntries_0_1_0, BidForwardPoints_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::BidForwardPoints2 BidForwardPoints2_0;
      BidForwardPoints2_0.setString("12752287");
set_field(noQuoteEntries_0_1_0, BidForwardPoints2_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::BidPx BidPx_0;
      BidPx_0.setString("1240114");
set_field(noQuoteEntries_0_1_0, BidPx_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::BidSize BidSize_0;
      BidSize_0.setString("14978866");
set_field(noQuoteEntries_0_1_0, BidSize_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::BidSpotRate BidSpotRate_0;
      BidSpotRate_0.setString("20278108");
set_field(noQuoteEntries_0_1_0, BidSpotRate_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::BidYield BidYield_0;
      BidYield_0.setString("8.420000");
set_field(noQuoteEntries_0_1_0, BidYield_0, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::BookingType{1}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::Currency{"USD"}, QuotEntryGrp_NoQuoteEntries_0);
      FIX::MidPx MidPx_0;
      MidPx_0.setString("12674421");
set_field(noQuoteEntries_0_1_0, MidPx_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::MidYield MidYield_0;
      MidYield_0.setString("30.640000");
set_field(noQuoteEntries_0_1_0, MidYield_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OfferForwardPoints OfferForwardPoints_0;
      OfferForwardPoints_0.setString("5699149");
set_field(noQuoteEntries_0_1_0, OfferForwardPoints_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OfferForwardPoints2 OfferForwardPoints2_0;
      OfferForwardPoints2_0.setString("6474568");
set_field(noQuoteEntries_0_1_0, OfferForwardPoints2_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OfferPx OfferPx_0;
      OfferPx_0.setString("17825371");
set_field(noQuoteEntries_0_1_0, OfferPx_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OfferSize OfferSize_0;
      OfferSize_0.setString("16899442");
set_field(noQuoteEntries_0_1_0, OfferSize_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OfferSpotRate OfferSpotRate_0;
      OfferSpotRate_0.setString("13835460");
set_field(noQuoteEntries_0_1_0, OfferSpotRate_0, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OfferYield OfferYield_0;
      OfferYield_0.setString("51.640000");
set_field(noQuoteEntries_0_1_0, OfferYield_0, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::OrdType{'4'}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::OrderCapacity{'G'}, QuotEntryGrp_NoQuoteEntries_0);
      FIX::OrderQty2 OrderQty2_1;
      OrderQty2_1.setString("9223680");
set_field(noQuoteEntries_0_1_0, OrderQty2_1, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_6"}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::QuoteEntryID{"STRING_814670340"}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::SettlDate{"LOCALMKTDATE_929783686"}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::SettlDate2{"LOCALMKTDATE_1643096785"}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::TradingSessionID{"STRING_2"}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::TradingSessionSubID{"STRING_6"}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::TransactTime{FIX::UTCTIMESTAMP(20, 26, 23, 1, 12, 2004)}, QuotEntryGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(6, 22, 25, 21, 11, 2005)}, QuotEntryGrp_NoQuoteEntries_0);
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_0);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_55;
        set_field(noLegs_0_0_2_0, FIX::EncodedLegIssuer{"DATA_34538215"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::EncodedLegIssuerLen{1366656063}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::EncodedLegSecurityDesc{"DATA_1304710046"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::EncodedLegSecurityDescLen{1817075331}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegCFICode{"STRING_909116701"}, InstrumentLeg_55);
        FIX::LegContractMultiplier LegContractMultiplier_55;
        LegContractMultiplier_55.setString("5407724");
set_field(noLegs_0_0_2_0, LegContractMultiplier_55, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegContractMultiplierUnit{918756847}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_2047733489"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegCountryOfIssue{"COUNTRY_790440077"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1841124916"}, InstrumentLeg_55);
        FIX::LegCouponRate LegCouponRate_55;
        LegCouponRate_55.setString("28.360000");
set_field(noLegs_0_0_2_0, LegCouponRate_55, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegCreditRating{"STRING_1605110417"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegDatedDate{"LOCALMKTDATE_290422673"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegExerciseStyle{880445191}, InstrumentLeg_55);
        FIX::LegFactor LegFactor_55;
        LegFactor_55.setString("695402");
set_field(noLegs_0_0_2_0, LegFactor_55, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegFlowScheduleType{155995253}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegInstrRegistry{"STRING_1874995017"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1250694780"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegIssueDate{"LOCALMKTDATE_1026926238"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegIssuer{"STRING_1529095740"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegLocaleOfIssue{"STRING_1559594476"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_2021868681"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_533599427"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegMaturityTime{"TZTIMEONLY_1748821358"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_55);
        FIX::LegOptionRatio LegOptionRatio_55;
        LegOptionRatio_55.setString("20708941");
set_field(noLegs_0_0_2_0, LegOptionRatio_55, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegPool{"STRING_2100300156"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegPriceUnitOfMeasure{"STRING_1850409433"}, InstrumentLeg_55);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_55;
        LegPriceUnitOfMeasureQty_55.setString("5806636");
set_field(noLegs_0_0_2_0, LegPriceUnitOfMeasureQty_55, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegProduct{2134838371}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegPutOrCall{1069581849}, InstrumentLeg_55);
        FIX::LegRatioQty LegRatioQty_55;
        LegRatioQty_55.setString("18853737");
set_field(noLegs_0_0_2_0, LegRatioQty_55, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1804430054"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegRepoCollateralSecurityType{"STRING_1978698550"}, InstrumentLeg_55);
        FIX::LegRepurchaseRate LegRepurchaseRate_55;
        LegRepurchaseRate_55.setString("25.620000");
set_field(noLegs_0_0_2_0, LegRepurchaseRate_55, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegRepurchaseTerm{575703253}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityDesc{"STRING_1878948391"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityExchange{"EXCHANGE_1069102639"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityID{"STRING_269344522"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityIDSource{"STRING_869707579"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegSecuritySubType{"STRING_526729408"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityType{"STRING_892769476"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegSide{'1'}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_817152081"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_55);
        FIX::LegStrikePrice LegStrikePrice_55;
        LegStrikePrice_55.setString("9731473");
set_field(noLegs_0_0_2_0, LegStrikePrice_55, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegSymbol{"STRING_1500726037"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegSymbolSfx{"STRING_676314901"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegTimeUnit{"STRING_2000073573"}, InstrumentLeg_55);
        set_field(noLegs_0_0_2_0, FIX::LegUnitOfMeasure{"STRING_882338130"}, InstrumentLeg_55);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_55;
        LegUnitOfMeasureQty_55.setString("884257");
set_field(noLegs_0_0_2_0, LegUnitOfMeasureQty_55, InstrumentLeg_55);
        all_values.push_back(InstrumentLeg_55);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_109;
          set_field(noLegSecurityAltID_0_0_0_3_0, FIX::LegSecurityAltID{"STRING_1415937557"}, LegSecAltIDGrp_NoLegSecurityAltID_109);
          set_field(noLegSecurityAltID_0_0_0_3_0, FIX::LegSecurityAltIDSource{"STRING_1837247087"}, LegSecAltIDGrp_NoLegSecurityAltID_109);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_109);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_110;
          set_field(noLegSecurityAltID_0_0_0_3_1, FIX::LegSecurityAltID{"STRING_780643276"}, LegSecAltIDGrp_NoLegSecurityAltID_110);
          set_field(noLegSecurityAltID_0_0_0_3_1, FIX::LegSecurityAltIDSource{"STRING_1339348053"}, LegSecAltIDGrp_NoLegSecurityAltID_110);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_110);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_56;
        set_field(noLegs_0_0_2_1, FIX::EncodedLegIssuer{"DATA_1790063596"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::EncodedLegIssuerLen{483569061}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::EncodedLegSecurityDesc{"DATA_1920011749"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::EncodedLegSecurityDescLen{1777418319}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegCFICode{"STRING_1553150910"}, InstrumentLeg_56);
        FIX::LegContractMultiplier LegContractMultiplier_56;
        LegContractMultiplier_56.setString("16579018");
set_field(noLegs_0_0_2_1, LegContractMultiplier_56, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegContractMultiplierUnit{1434364726}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegContractSettlMonth{"MONTHYEAR_1384365813"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegCountryOfIssue{"COUNTRY_1936564405"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2010067979"}, InstrumentLeg_56);
        FIX::LegCouponRate LegCouponRate_56;
        LegCouponRate_56.setString("5.560000");
set_field(noLegs_0_0_2_1, LegCouponRate_56, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegCreditRating{"STRING_858183396"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegDatedDate{"LOCALMKTDATE_1384912804"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegExerciseStyle{1024698330}, InstrumentLeg_56);
        FIX::LegFactor LegFactor_56;
        LegFactor_56.setString("13416180");
set_field(noLegs_0_0_2_1, LegFactor_56, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegFlowScheduleType{54581238}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegInstrRegistry{"STRING_650429350"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_767238162"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegIssueDate{"LOCALMKTDATE_1027728572"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegIssuer{"STRING_3671739"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegLocaleOfIssue{"STRING_1443553063"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegMaturityDate{"LOCALMKTDATE_880318497"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegMaturityMonthYear{"MONTHYEAR_886009869"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegMaturityTime{"TZTIMEONLY_1531978793"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegOptAttribute{'6'}, InstrumentLeg_56);
        FIX::LegOptionRatio LegOptionRatio_56;
        LegOptionRatio_56.setString("1544637");
set_field(noLegs_0_0_2_1, LegOptionRatio_56, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegPool{"STRING_1221742232"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegPriceUnitOfMeasure{"STRING_1387936731"}, InstrumentLeg_56);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_56;
        LegPriceUnitOfMeasureQty_56.setString("14938118");
set_field(noLegs_0_0_2_1, LegPriceUnitOfMeasureQty_56, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegProduct{864322180}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegPutOrCall{1871505793}, InstrumentLeg_56);
        FIX::LegRatioQty LegRatioQty_56;
        LegRatioQty_56.setString("12663399");
set_field(noLegs_0_0_2_1, LegRatioQty_56, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegRedemptionDate{"LOCALMKTDATE_494256852"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegRepoCollateralSecurityType{"STRING_1277173055"}, InstrumentLeg_56);
        FIX::LegRepurchaseRate LegRepurchaseRate_56;
        LegRepurchaseRate_56.setString("81.280000");
set_field(noLegs_0_0_2_1, LegRepurchaseRate_56, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegRepurchaseTerm{1928621578}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityDesc{"STRING_514055220"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityExchange{"EXCHANGE_565838885"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityID{"STRING_1791205909"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityIDSource{"STRING_1629885777"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegSecuritySubType{"STRING_1424022281"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegSecurityType{"STRING_1923134763"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegSide{'1'}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegStateOrProvinceOfIssue{"STRING_661451437"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_56);
        FIX::LegStrikePrice LegStrikePrice_56;
        LegStrikePrice_56.setString("7160326");
set_field(noLegs_0_0_2_1, LegStrikePrice_56, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegSymbol{"STRING_1450778795"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegSymbolSfx{"STRING_1429312819"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegTimeUnit{"STRING_1743761248"}, InstrumentLeg_56);
        set_field(noLegs_0_0_2_1, FIX::LegUnitOfMeasure{"STRING_1454450534"}, InstrumentLeg_56);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_56;
        LegUnitOfMeasureQty_56.setString("7253822");
set_field(noLegs_0_0_2_1, LegUnitOfMeasureQty_56, InstrumentLeg_56);
        all_values.push_back(InstrumentLeg_56);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_111;
          set_field(noLegSecurityAltID_0_0_1_3_0, FIX::LegSecurityAltID{"STRING_192976756"}, LegSecAltIDGrp_NoLegSecurityAltID_111);
          set_field(noLegSecurityAltID_0_0_1_3_0, FIX::LegSecurityAltIDSource{"STRING_109877380"}, LegSecAltIDGrp_NoLegSecurityAltID_111);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_111);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_112;
          set_field(noLegSecurityAltID_0_0_1_3_1, FIX::LegSecurityAltID{"STRING_1083889553"}, LegSecAltIDGrp_NoLegSecurityAltID_112);
          set_field(noLegSecurityAltID_0_0_1_3_1, FIX::LegSecurityAltIDSource{"STRING_347440534"}, LegSecAltIDGrp_NoLegSecurityAltID_112);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_112);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_113;
          set_field(noLegSecurityAltID_0_0_1_3_2, FIX::LegSecurityAltID{"STRING_1331619612"}, LegSecAltIDGrp_NoLegSecurityAltID_113);
          set_field(noLegSecurityAltID_0_0_1_3_2, FIX::LegSecurityAltIDSource{"STRING_324342636"}, LegSecAltIDGrp_NoLegSecurityAltID_113);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_113);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_57;
        set_field(noLegs_0_0_2_2, FIX::EncodedLegIssuer{"DATA_1841252366"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::EncodedLegIssuerLen{48458145}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::EncodedLegSecurityDesc{"DATA_48364781"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::EncodedLegSecurityDescLen{960108651}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegCFICode{"STRING_542714997"}, InstrumentLeg_57);
        FIX::LegContractMultiplier LegContractMultiplier_57;
        LegContractMultiplier_57.setString("13255378");
set_field(noLegs_0_0_2_2, LegContractMultiplier_57, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegContractMultiplierUnit{1736866779}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegContractSettlMonth{"MONTHYEAR_323852927"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegCountryOfIssue{"COUNTRY_1839593057"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_155222016"}, InstrumentLeg_57);
        FIX::LegCouponRate LegCouponRate_57;
        LegCouponRate_57.setString("88.360000");
set_field(noLegs_0_0_2_2, LegCouponRate_57, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegCreditRating{"STRING_1321995186"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegCurrency{"EUR"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegDatedDate{"LOCALMKTDATE_642451803"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegExerciseStyle{93212087}, InstrumentLeg_57);
        FIX::LegFactor LegFactor_57;
        LegFactor_57.setString("5435757");
set_field(noLegs_0_0_2_2, LegFactor_57, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegFlowScheduleType{1304526461}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegInstrRegistry{"STRING_809244762"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1994354543"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegIssueDate{"LOCALMKTDATE_586355632"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegIssuer{"STRING_405522362"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegLocaleOfIssue{"STRING_1301321430"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegMaturityDate{"LOCALMKTDATE_1311737867"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegMaturityMonthYear{"MONTHYEAR_882118460"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegMaturityTime{"TZTIMEONLY_1494298186"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_57);
        FIX::LegOptionRatio LegOptionRatio_57;
        LegOptionRatio_57.setString("19660080");
set_field(noLegs_0_0_2_2, LegOptionRatio_57, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegPool{"STRING_1841738720"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegPriceUnitOfMeasure{"STRING_605751212"}, InstrumentLeg_57);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_57;
        LegPriceUnitOfMeasureQty_57.setString("1428670");
set_field(noLegs_0_0_2_2, LegPriceUnitOfMeasureQty_57, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegProduct{1535507439}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegPutOrCall{654209357}, InstrumentLeg_57);
        FIX::LegRatioQty LegRatioQty_57;
        LegRatioQty_57.setString("1912317");
set_field(noLegs_0_0_2_2, LegRatioQty_57, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegRedemptionDate{"LOCALMKTDATE_348132442"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegRepoCollateralSecurityType{"STRING_1196924354"}, InstrumentLeg_57);
        FIX::LegRepurchaseRate LegRepurchaseRate_57;
        LegRepurchaseRate_57.setString("96.200000");
set_field(noLegs_0_0_2_2, LegRepurchaseRate_57, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegRepurchaseTerm{2084999222}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegSecurityDesc{"STRING_1520777281"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegSecurityExchange{"EXCHANGE_1208879029"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegSecurityID{"STRING_92737590"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegSecurityIDSource{"STRING_1488352469"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegSecuritySubType{"STRING_383390568"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegSecurityType{"STRING_1671981888"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegSide{'1'}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegStateOrProvinceOfIssue{"STRING_1025842371"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_57);
        FIX::LegStrikePrice LegStrikePrice_57;
        LegStrikePrice_57.setString("1828851");
set_field(noLegs_0_0_2_2, LegStrikePrice_57, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegSymbol{"STRING_426955089"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegSymbolSfx{"STRING_1622025417"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegTimeUnit{"STRING_769240817"}, InstrumentLeg_57);
        set_field(noLegs_0_0_2_2, FIX::LegUnitOfMeasure{"STRING_832477452"}, InstrumentLeg_57);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_57;
        LegUnitOfMeasureQty_57.setString("7758631");
set_field(noLegs_0_0_2_2, LegUnitOfMeasureQty_57, InstrumentLeg_57);
        all_values.push_back(InstrumentLeg_57);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_114;
          set_field(noLegSecurityAltID_0_0_2_3_0, FIX::LegSecurityAltID{"STRING_1714595912"}, LegSecAltIDGrp_NoLegSecurityAltID_114);
          set_field(noLegSecurityAltID_0_0_2_3_0, FIX::LegSecurityAltIDSource{"STRING_122677737"}, LegSecAltIDGrp_NoLegSecurityAltID_114);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_114);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_2.addGroup(noLegSecurityAltID_0_0_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_115;
          set_field(noLegSecurityAltID_0_0_2_3_1, FIX::LegSecurityAltID{"STRING_1355110284"}, LegSecAltIDGrp_NoLegSecurityAltID_115);
          set_field(noLegSecurityAltID_0_0_2_3_1, FIX::LegSecurityAltIDSource{"STRING_1533120277"}, LegSecAltIDGrp_NoLegSecurityAltID_115);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_115);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_2.addGroup(noLegSecurityAltID_0_0_2_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_2);
      }
      // Instrument
      multiset<string> Instrument_35;
      FIX::AttachmentPoint AttachmentPoint_35;
      AttachmentPoint_35.setString("64.570000");
set_field(noQuoteEntries_0_1_0, AttachmentPoint_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::CFICode{"STRING_1960861496"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::CPProgram{1}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::CPRegType{"STRING_1352440248"}, Instrument_35);
      FIX::CapPrice CapPrice_35;
      CapPrice_35.setString("4675872");
set_field(noQuoteEntries_0_1_0, CapPrice_35, Instrument_35);
      FIX::ContractMultiplier ContractMultiplier_35;
      ContractMultiplier_35.setString("18672190");
set_field(noQuoteEntries_0_1_0, ContractMultiplier_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::ContractMultiplierUnit{2}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::ContractSettlMonth{"MONTHYEAR_1664511559"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::CountryOfIssue{"COUNTRY_1236505033"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1638088265"}, Instrument_35);
      FIX::CouponRate CouponRate_35;
      CouponRate_35.setString("51.920000");
set_field(noQuoteEntries_0_1_0, CouponRate_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::CreditRating{"STRING_297900415"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::DatedDate{"LOCALMKTDATE_1730825855"}, Instrument_35);
      FIX::DetachmentPoint DetachmentPoint_35;
      DetachmentPoint_35.setString("40.130000");
set_field(noQuoteEntries_0_1_0, DetachmentPoint_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedIssuer{"DATA_681290983"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedIssuerLen{1255324095}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedSecurityDesc{"DATA_1610252786"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedSecurityDescLen{1707133354}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::ExerciseStyle{0}, Instrument_35);
      FIX::Factor Factor_35;
      Factor_35.setString("12379236");
set_field(noQuoteEntries_0_1_0, Factor_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::FlexProductEligibilityIndicator{false}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::FlexibleIndicator{true}, Instrument_35);
      FIX::FloorPrice FloorPrice_35;
      FloorPrice_35.setString("7124654");
set_field(noQuoteEntries_0_1_0, FloorPrice_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::FlowScheduleType{3}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::InstrRegistry{"STRING_2132466964"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::InterestAccrualDate{"LOCALMKTDATE_445270744"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::IssueDate{"LOCALMKTDATE_1699579228"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::Issuer{"STRING_1611006365"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::ListMethod{0}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::LocaleOfIssue{"STRING_1085215857"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::MaturityDate{"LOCALMKTDATE_1427939174"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::MaturityMonthYear{"MONTHYEAR_1613758876"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::MaturityTime{"TZTIMEONLY_613719487"}, Instrument_35);
      FIX::MinPriceIncrement MinPriceIncrement_35;
      MinPriceIncrement_35.setString("6328957");
set_field(noQuoteEntries_0_1_0, MinPriceIncrement_35, Instrument_35);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_35;
      MinPriceIncrementAmount_35.setString("20813460");
set_field(noQuoteEntries_0_1_0, MinPriceIncrementAmount_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::NTPositionLimit{333454901}, Instrument_35);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_35;
      NotionalPercentageOutstanding_35.setString("48.180000");
set_field(noQuoteEntries_0_1_0, NotionalPercentageOutstanding_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::OptAttribute{'1'}, Instrument_35);
      FIX::OptPayoutAmount OptPayoutAmount_35;
      OptPayoutAmount_35.setString("15699599");
set_field(noQuoteEntries_0_1_0, OptPayoutAmount_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::OptPayoutType{1}, Instrument_35);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_35;
      OriginalNotionalPercentageOutstanding_35.setString("55.360000");
set_field(noQuoteEntries_0_1_0, OriginalNotionalPercentageOutstanding_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::Pool{"STRING_1867860349"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::PositionLimit{1407415290}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::PriceUnitOfMeasure{"STRING_401667684"}, Instrument_35);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_35;
      PriceUnitOfMeasureQty_35.setString("5152557");
set_field(noQuoteEntries_0_1_0, PriceUnitOfMeasureQty_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::Product{10}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::ProductComplex{"STRING_2108801039"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::PutOrCall{0}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::RedemptionDate{"LOCALMKTDATE_1568062348"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::RepoCollateralSecurityType{"STRING_1851335930"}, Instrument_35);
      FIX::RepurchaseRate RepurchaseRate_35;
      RepurchaseRate_35.setString("60.240000");
set_field(noQuoteEntries_0_1_0, RepurchaseRate_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::RepurchaseTerm{133044129}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::RestructuringType{"STRING_MM"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityDesc{"STRING_525779340"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityExchange{"EXCHANGE_1621372757"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityGroup{"STRING_660898734"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityID{"STRING_77874920"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityIDSource{"STRING_F"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityStatus{"STRING_2"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::SecuritySubType{"STRING_1163090777"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityType{"STRING_MF"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::Seniority{"STRING_SR"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::SettlMethod{'P'}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::SettleOnOpenFlag{"STRING_998246776"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::StateOrProvinceOfIssue{"STRING_1861417425"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::StrikeCurrency{"GBP"}, Instrument_35);
      FIX::StrikeMultiplier StrikeMultiplier_35;
      StrikeMultiplier_35.setString("13123077");
set_field(noQuoteEntries_0_1_0, StrikeMultiplier_35, Instrument_35);
      FIX::StrikePrice StrikePrice_35;
      StrikePrice_35.setString("15327414");
set_field(noQuoteEntries_0_1_0, StrikePrice_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_35);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_35;
      StrikePriceBoundaryPrecision_35.setString("33.060000");
set_field(noQuoteEntries_0_1_0, StrikePriceBoundaryPrecision_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::StrikePriceDeterminationMethod{3}, Instrument_35);
      FIX::StrikeValue StrikeValue_35;
      StrikeValue_35.setString("1207526");
set_field(noQuoteEntries_0_1_0, StrikeValue_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::Symbol{"STRING_520889208"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::TimeUnit{"STRING_Min"}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::UnitOfMeasure{"STRING_Bcf"}, Instrument_35);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_35;
      UnitOfMeasureQty_35.setString("20242985");
set_field(noQuoteEntries_0_1_0, UnitOfMeasureQty_35, Instrument_35);
      set_field(noQuoteEntries_0_1_0, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_35);
      all_values.push_back(Instrument_35);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_69;
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_69);
        FIX::ComplexEventPrice ComplexEventPrice_69;
        ComplexEventPrice_69.setString("4046507");
set_field(noComplexEvents_0_0_2_0, ComplexEventPrice_69, ComplexEvents_NoComplexEvents_69);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_69);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_69;
        ComplexEventPriceBoundaryPrecision_69.setString("2.870000");
set_field(noComplexEvents_0_0_2_0, ComplexEventPriceBoundaryPrecision_69, ComplexEvents_NoComplexEvents_69);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_69);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_69);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_69;
        ComplexOptPayoutAmount_69.setString("10212652");
set_field(noComplexEvents_0_0_2_0, ComplexOptPayoutAmount_69, ComplexEvents_NoComplexEvents_69);
        all_values.push_back(ComplexEvents_NoComplexEvents_69);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_140;
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 31, 46, 18, 4, 2013)}, ComplexEventDates_NoComplexEventDates_140);
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 33, 4, 2, 12, 2000)}, ComplexEventDates_NoComplexEventDates_140);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_140);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_286;
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 35, 7)}, ComplexEventTimes_NoComplexEventTimes_286);
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 44, 34)}, ComplexEventTimes_NoComplexEventTimes_286);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_286);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_287;
            set_field(noComplexEventTimes_0_0_0_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 55, 51)}, ComplexEventTimes_NoComplexEventTimes_287);
            set_field(noComplexEventTimes_0_0_0_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 30, 37)}, ComplexEventTimes_NoComplexEventTimes_287);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_287);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_288;
            set_field(noComplexEventTimes_0_0_0_0_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 1, 5)}, ComplexEventTimes_NoComplexEventTimes_288);
            set_field(noComplexEventTimes_0_0_0_0_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 28, 53)}, ComplexEventTimes_NoComplexEventTimes_288);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_288);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_141;
          set_field(noComplexEventDates_0_0_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 58, 20, 24, 5, 2016)}, ComplexEventDates_NoComplexEventDates_141);
          set_field(noComplexEventDates_0_0_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 22, 11, 24, 8, 2007)}, ComplexEventDates_NoComplexEventDates_141);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_141);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_289;
            set_field(noComplexEventTimes_0_0_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 13, 18)}, ComplexEventTimes_NoComplexEventTimes_289);
            set_field(noComplexEventTimes_0_0_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 49, 15)}, ComplexEventTimes_NoComplexEventTimes_289);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_289);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_290;
            set_field(noComplexEventTimes_0_0_0_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 16, 32)}, ComplexEventTimes_NoComplexEventTimes_290);
            set_field(noComplexEventTimes_0_0_0_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 53, 43)}, ComplexEventTimes_NoComplexEventTimes_290);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_290);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_291;
            set_field(noComplexEventTimes_0_0_0_1_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 33, 35)}, ComplexEventTimes_NoComplexEventTimes_291);
            set_field(noComplexEventTimes_0_0_0_1_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 21, 54)}, ComplexEventTimes_NoComplexEventTimes_291);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_291);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_70;
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_70);
        FIX::ComplexEventPrice ComplexEventPrice_70;
        ComplexEventPrice_70.setString("20677952");
set_field(noComplexEvents_0_0_2_1, ComplexEventPrice_70, ComplexEvents_NoComplexEvents_70);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_70);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_70;
        ComplexEventPriceBoundaryPrecision_70.setString("77.670000");
set_field(noComplexEvents_0_0_2_1, ComplexEventPriceBoundaryPrecision_70, ComplexEvents_NoComplexEvents_70);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_70);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_70);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_70;
        ComplexOptPayoutAmount_70.setString("17704556");
set_field(noComplexEvents_0_0_2_1, ComplexOptPayoutAmount_70, ComplexEvents_NoComplexEvents_70);
        all_values.push_back(ComplexEvents_NoComplexEvents_70);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_142;
          set_field(noComplexEventDates_0_0_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 41, 41, 0, 11, 2014)}, ComplexEventDates_NoComplexEventDates_142);
          set_field(noComplexEventDates_0_0_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 12, 52, 8, 1, 2003)}, ComplexEventDates_NoComplexEventDates_142);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_142);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_292;
            set_field(noComplexEventTimes_0_0_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 21, 42)}, ComplexEventTimes_NoComplexEventTimes_292);
            set_field(noComplexEventTimes_0_0_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 3, 9)}, ComplexEventTimes_NoComplexEventTimes_292);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_292);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_143;
          set_field(noComplexEventDates_0_0_1_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 6, 18, 18, 8, 2004)}, ComplexEventDates_NoComplexEventDates_143);
          set_field(noComplexEventDates_0_0_1_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 55, 21, 24, 8, 2001)}, ComplexEventDates_NoComplexEventDates_143);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_143);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_293;
            set_field(noComplexEventTimes_0_0_1_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 28, 6)}, ComplexEventTimes_NoComplexEventTimes_293);
            set_field(noComplexEventTimes_0_0_1_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 43, 58)}, ComplexEventTimes_NoComplexEventTimes_293);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_293);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_1.addGroup(noComplexEventTimes_0_0_1_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_294;
            set_field(noComplexEventTimes_0_0_1_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 12, 9)}, ComplexEventTimes_NoComplexEventTimes_294);
            set_field(noComplexEventTimes_0_0_1_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 5, 30)}, ComplexEventTimes_NoComplexEventTimes_294);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_294);
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
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_76;
        set_field(noEvents_0_0_2_0, FIX::EventDate{"LOCALMKTDATE_8192616"}, EvntGrp_NoEvents_76);
        FIX::EventPx EventPx_76;
        EventPx_76.setString("20777561");
set_field(noEvents_0_0_2_0, EventPx_76, EvntGrp_NoEvents_76);
        set_field(noEvents_0_0_2_0, FIX::EventText{"STRING_1133867721"}, EvntGrp_NoEvents_76);
        set_field(noEvents_0_0_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(0, 17, 42, 11, 1, 2016)}, EvntGrp_NoEvents_76);
        set_field(noEvents_0_0_2_0, FIX::EventType{99}, EvntGrp_NoEvents_76);
        all_values.push_back(EvntGrp_NoEvents_76);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_77;
        set_field(noEvents_0_0_2_1, FIX::EventDate{"LOCALMKTDATE_1124341027"}, EvntGrp_NoEvents_77);
        FIX::EventPx EventPx_77;
        EventPx_77.setString("10838472");
set_field(noEvents_0_0_2_1, EventPx_77, EvntGrp_NoEvents_77);
        set_field(noEvents_0_0_2_1, FIX::EventText{"STRING_996259355"}, EvntGrp_NoEvents_77);
        set_field(noEvents_0_0_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(1, 55, 28, 0, 9, 2003)}, EvntGrp_NoEvents_77);
        set_field(noEvents_0_0_2_1, FIX::EventType{19}, EvntGrp_NoEvents_77);
        all_values.push_back(EvntGrp_NoEvents_77);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_65;
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyID{"STRING_971185810"}, InstrumentParties_NoInstrumentParties_65);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_65);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyRole{1865655817}, InstrumentParties_NoInstrumentParties_65);
        all_values.push_back(InstrumentParties_NoInstrumentParties_65);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129;
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubID{"STRING_526122250"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129);
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubIDType{775316014}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130;
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubID{"STRING_943842902"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130);
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubIDType{1845540920}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131;
          set_field(noInstrumentPartySubIDs_0_0_0_3_2, FIX::InstrumentPartySubID{"STRING_783508630"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131);
          set_field(noInstrumentPartySubIDs_0_0_0_3_2, FIX::InstrumentPartySubIDType{874115431}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_66;
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyID{"STRING_831924993"}, InstrumentParties_NoInstrumentParties_66);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_66);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyRole{1041368624}, InstrumentParties_NoInstrumentParties_66);
        all_values.push_back(InstrumentParties_NoInstrumentParties_66);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132;
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubID{"STRING_1830171294"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132);
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubIDType{475077215}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133;
          set_field(noInstrumentPartySubIDs_0_0_1_3_1, FIX::InstrumentPartySubID{"STRING_126523314"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133);
          set_field(noInstrumentPartySubIDs_0_0_1_3_1, FIX::InstrumentPartySubIDType{796037450}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134;
          set_field(noInstrumentPartySubIDs_0_0_1_3_2, FIX::InstrumentPartySubID{"STRING_1446180235"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134);
          set_field(noInstrumentPartySubIDs_0_0_1_3_2, FIX::InstrumentPartySubIDType{1250864341}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_67;
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyID{"STRING_1879884750"}, InstrumentParties_NoInstrumentParties_67);
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_67);
        set_field(noInstrumentParties_0_0_2_2, FIX::InstrumentPartyRole{2037883343}, InstrumentParties_NoInstrumentParties_67);
        all_values.push_back(InstrumentParties_NoInstrumentParties_67);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135;
          set_field(noInstrumentPartySubIDs_0_0_2_3_0, FIX::InstrumentPartySubID{"STRING_1062519558"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135);
          set_field(noInstrumentPartySubIDs_0_0_2_3_0, FIX::InstrumentPartySubIDType{1857790183}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136;
          set_field(noInstrumentPartySubIDs_0_0_2_3_1, FIX::InstrumentPartySubID{"STRING_1946056487"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136);
          set_field(noInstrumentPartySubIDs_0_0_2_3_1, FIX::InstrumentPartySubIDType{1384583006}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137;
          set_field(noInstrumentPartySubIDs_0_0_2_3_2, FIX::InstrumentPartySubID{"STRING_404667158"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137);
          set_field(noInstrumentPartySubIDs_0_0_2_3_2, FIX::InstrumentPartySubIDType{218005278}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_71;
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltID{"STRING_1375852969"}, SecAltIDGrp_NoSecurityAltID_71);
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltIDSource{"STRING_903963788"}, SecAltIDGrp_NoSecurityAltID_71);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_71);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_72;
        set_field(noSecurityAltID_0_0_2_1, FIX::SecurityAltID{"STRING_942004342"}, SecAltIDGrp_NoSecurityAltID_72);
        set_field(noSecurityAltID_0_0_2_1, FIX::SecurityAltIDSource{"STRING_1941568401"}, SecAltIDGrp_NoSecurityAltID_72);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_72);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_73;
        set_field(noSecurityAltID_0_0_2_2, FIX::SecurityAltID{"STRING_1430086038"}, SecAltIDGrp_NoSecurityAltID_73);
        set_field(noSecurityAltID_0_0_2_2, FIX::SecurityAltIDSource{"STRING_1717320356"}, SecAltIDGrp_NoSecurityAltID_73);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_73);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_70;
      set_field(noQuoteEntries_0_1_0, FIX::SecurityXML{"XMLDATA_737927655"}, SecurityXML_70);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityXMLLen{1128143311}, SecurityXML_70);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityXMLSchema{"STRING_353345338"}, SecurityXML_70);
      all_values.push_back(SecurityXML_70);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_1;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_1;
      FIX::BidForwardPoints BidForwardPoints_1;
      BidForwardPoints_1.setString("16120430");
set_field(noQuoteEntries_0_1_1, BidForwardPoints_1, QuotEntryGrp_NoQuoteEntries_1);
      FIX::BidForwardPoints2 BidForwardPoints2_1;
      BidForwardPoints2_1.setString("19600683");
set_field(noQuoteEntries_0_1_1, BidForwardPoints2_1, QuotEntryGrp_NoQuoteEntries_1);
      FIX::BidPx BidPx_1;
      BidPx_1.setString("19784130");
set_field(noQuoteEntries_0_1_1, BidPx_1, QuotEntryGrp_NoQuoteEntries_1);
      FIX::BidSize BidSize_1;
      BidSize_1.setString("5059280");
set_field(noQuoteEntries_0_1_1, BidSize_1, QuotEntryGrp_NoQuoteEntries_1);
      FIX::BidSpotRate BidSpotRate_1;
      BidSpotRate_1.setString("12157984");
set_field(noQuoteEntries_0_1_1, BidSpotRate_1, QuotEntryGrp_NoQuoteEntries_1);
      FIX::BidYield BidYield_1;
      BidYield_1.setString("6.570000");
set_field(noQuoteEntries_0_1_1, BidYield_1, QuotEntryGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::BookingType{1}, QuotEntryGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::Currency{"CHF"}, QuotEntryGrp_NoQuoteEntries_1);
      FIX::MidPx MidPx_1;
      MidPx_1.setString("2797018");
set_field(noQuoteEntries_0_1_1, MidPx_1, QuotEntryGrp_NoQuoteEntries_1);
      FIX::MidYield MidYield_1;
      MidYield_1.setString("24.150000");
set_field(noQuoteEntries_0_1_1, MidYield_1, QuotEntryGrp_NoQuoteEntries_1);
      FIX::OfferForwardPoints OfferForwardPoints_1;
      OfferForwardPoints_1.setString("420555");
set_field(noQuoteEntries_0_1_1, OfferForwardPoints_1, QuotEntryGrp_NoQuoteEntries_1);
      FIX::OfferForwardPoints2 OfferForwardPoints2_1;
      OfferForwardPoints2_1.setString("5746578");
set_field(noQuoteEntries_0_1_1, OfferForwardPoints2_1, QuotEntryGrp_NoQuoteEntries_1);
      FIX::OfferPx OfferPx_1;
      OfferPx_1.setString("3361021");
set_field(noQuoteEntries_0_1_1, OfferPx_1, QuotEntryGrp_NoQuoteEntries_1);
      FIX::OfferSize OfferSize_1;
      OfferSize_1.setString("5384356");
set_field(noQuoteEntries_0_1_1, OfferSize_1, QuotEntryGrp_NoQuoteEntries_1);
      FIX::OfferSpotRate OfferSpotRate_1;
      OfferSpotRate_1.setString("16371773");
set_field(noQuoteEntries_0_1_1, OfferSpotRate_1, QuotEntryGrp_NoQuoteEntries_1);
      FIX::OfferYield OfferYield_1;
      OfferYield_1.setString("86.450000");
set_field(noQuoteEntries_0_1_1, OfferYield_1, QuotEntryGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::OrdType{'H'}, QuotEntryGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::OrderCapacity{'I'}, QuotEntryGrp_NoQuoteEntries_1);
      FIX::OrderQty2 OrderQty2_2;
      OrderQty2_2.setString("4510758");
set_field(noQuoteEntries_0_1_1, OrderQty2_2, QuotEntryGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_E"}, QuotEntryGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::QuoteEntryID{"STRING_2098108897"}, QuotEntryGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::SettlDate{"LOCALMKTDATE_1826928772"}, QuotEntryGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::SettlDate2{"LOCALMKTDATE_1458977587"}, QuotEntryGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::TradingSessionID{"STRING_5"}, QuotEntryGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::TradingSessionSubID{"STRING_6"}, QuotEntryGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::TransactTime{FIX::UTCTIMESTAMP(4, 13, 48, 27, 1, 2009)}, QuotEntryGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(3, 24, 30, 21, 6, 2016)}, QuotEntryGrp_NoQuoteEntries_1);
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_1);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_58;
        set_field(noLegs_0_1_2_0, FIX::EncodedLegIssuer{"DATA_391163192"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::EncodedLegIssuerLen{512068031}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::EncodedLegSecurityDesc{"DATA_2017309987"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::EncodedLegSecurityDescLen{727265302}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegCFICode{"STRING_1050503712"}, InstrumentLeg_58);
        FIX::LegContractMultiplier LegContractMultiplier_58;
        LegContractMultiplier_58.setString("15070037");
set_field(noLegs_0_1_2_0, LegContractMultiplier_58, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegContractMultiplierUnit{773673947}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_1387512233"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegCountryOfIssue{"COUNTRY_233796781"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1224749751"}, InstrumentLeg_58);
        FIX::LegCouponRate LegCouponRate_58;
        LegCouponRate_58.setString("60.310000");
set_field(noLegs_0_1_2_0, LegCouponRate_58, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegCreditRating{"STRING_184422030"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegDatedDate{"LOCALMKTDATE_1077051622"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegExerciseStyle{377724753}, InstrumentLeg_58);
        FIX::LegFactor LegFactor_58;
        LegFactor_58.setString("19955999");
set_field(noLegs_0_1_2_0, LegFactor_58, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegFlowScheduleType{1539517923}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegInstrRegistry{"STRING_589182286"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1717839588"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegIssueDate{"LOCALMKTDATE_207845914"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegIssuer{"STRING_265199258"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegLocaleOfIssue{"STRING_1252663885"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_854586915"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_447144293"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegMaturityTime{"TZTIMEONLY_2003286589"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_58);
        FIX::LegOptionRatio LegOptionRatio_58;
        LegOptionRatio_58.setString("16100946");
set_field(noLegs_0_1_2_0, LegOptionRatio_58, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegPool{"STRING_1948747367"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegPriceUnitOfMeasure{"STRING_1484957396"}, InstrumentLeg_58);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_58;
        LegPriceUnitOfMeasureQty_58.setString("9052631");
set_field(noLegs_0_1_2_0, LegPriceUnitOfMeasureQty_58, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegProduct{192426911}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegPutOrCall{1997025427}, InstrumentLeg_58);
        FIX::LegRatioQty LegRatioQty_58;
        LegRatioQty_58.setString("7750894");
set_field(noLegs_0_1_2_0, LegRatioQty_58, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_919692214"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegRepoCollateralSecurityType{"STRING_900045492"}, InstrumentLeg_58);
        FIX::LegRepurchaseRate LegRepurchaseRate_58;
        LegRepurchaseRate_58.setString("95.330000");
set_field(noLegs_0_1_2_0, LegRepurchaseRate_58, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegRepurchaseTerm{1693366161}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityDesc{"STRING_140074077"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityExchange{"EXCHANGE_368406314"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityID{"STRING_770632264"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityIDSource{"STRING_2082600108"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegSecuritySubType{"STRING_552828345"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityType{"STRING_1674827140"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegSide{'1'}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_1629879967"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_58);
        FIX::LegStrikePrice LegStrikePrice_58;
        LegStrikePrice_58.setString("10219142");
set_field(noLegs_0_1_2_0, LegStrikePrice_58, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegSymbol{"STRING_494250531"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegSymbolSfx{"STRING_607608671"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegTimeUnit{"STRING_1229760156"}, InstrumentLeg_58);
        set_field(noLegs_0_1_2_0, FIX::LegUnitOfMeasure{"STRING_759449789"}, InstrumentLeg_58);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_58;
        LegUnitOfMeasureQty_58.setString("18602725");
set_field(noLegs_0_1_2_0, LegUnitOfMeasureQty_58, InstrumentLeg_58);
        all_values.push_back(InstrumentLeg_58);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_116;
          set_field(noLegSecurityAltID_0_1_0_3_0, FIX::LegSecurityAltID{"STRING_1206594082"}, LegSecAltIDGrp_NoLegSecurityAltID_116);
          set_field(noLegSecurityAltID_0_1_0_3_0, FIX::LegSecurityAltIDSource{"STRING_1716075498"}, LegSecAltIDGrp_NoLegSecurityAltID_116);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_116);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_117;
          set_field(noLegSecurityAltID_0_1_0_3_1, FIX::LegSecurityAltID{"STRING_951808350"}, LegSecAltIDGrp_NoLegSecurityAltID_117);
          set_field(noLegSecurityAltID_0_1_0_3_1, FIX::LegSecurityAltIDSource{"STRING_669205040"}, LegSecAltIDGrp_NoLegSecurityAltID_117);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_117);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_59;
        set_field(noLegs_0_1_2_1, FIX::EncodedLegIssuer{"DATA_1517339217"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::EncodedLegIssuerLen{289282098}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::EncodedLegSecurityDesc{"DATA_1574468178"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::EncodedLegSecurityDescLen{1709766129}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegCFICode{"STRING_138823877"}, InstrumentLeg_59);
        FIX::LegContractMultiplier LegContractMultiplier_59;
        LegContractMultiplier_59.setString("2020740");
set_field(noLegs_0_1_2_1, LegContractMultiplier_59, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegContractMultiplierUnit{481974695}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegContractSettlMonth{"MONTHYEAR_1038869369"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegCountryOfIssue{"COUNTRY_336683540"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_27857208"}, InstrumentLeg_59);
        FIX::LegCouponRate LegCouponRate_59;
        LegCouponRate_59.setString("34.460000");
set_field(noLegs_0_1_2_1, LegCouponRate_59, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegCreditRating{"STRING_705089854"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegDatedDate{"LOCALMKTDATE_1257918199"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegExerciseStyle{325832965}, InstrumentLeg_59);
        FIX::LegFactor LegFactor_59;
        LegFactor_59.setString("1557126");
set_field(noLegs_0_1_2_1, LegFactor_59, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegFlowScheduleType{740314519}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegInstrRegistry{"STRING_230901210"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1192965421"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegIssueDate{"LOCALMKTDATE_1762228761"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegIssuer{"STRING_725151741"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegLocaleOfIssue{"STRING_1800574092"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegMaturityDate{"LOCALMKTDATE_844505270"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1484601530"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegMaturityTime{"TZTIMEONLY_1513363001"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegOptAttribute{'7'}, InstrumentLeg_59);
        FIX::LegOptionRatio LegOptionRatio_59;
        LegOptionRatio_59.setString("5437119");
set_field(noLegs_0_1_2_1, LegOptionRatio_59, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegPool{"STRING_1081954852"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegPriceUnitOfMeasure{"STRING_1733177044"}, InstrumentLeg_59);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_59;
        LegPriceUnitOfMeasureQty_59.setString("12129170");
set_field(noLegs_0_1_2_1, LegPriceUnitOfMeasureQty_59, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegProduct{451810421}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegPutOrCall{2022459142}, InstrumentLeg_59);
        FIX::LegRatioQty LegRatioQty_59;
        LegRatioQty_59.setString("6399015");
set_field(noLegs_0_1_2_1, LegRatioQty_59, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegRedemptionDate{"LOCALMKTDATE_14092902"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegRepoCollateralSecurityType{"STRING_13799371"}, InstrumentLeg_59);
        FIX::LegRepurchaseRate LegRepurchaseRate_59;
        LegRepurchaseRate_59.setString("55.410000");
set_field(noLegs_0_1_2_1, LegRepurchaseRate_59, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegRepurchaseTerm{496067597}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegSecurityDesc{"STRING_1052668741"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegSecurityExchange{"EXCHANGE_1178659081"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegSecurityID{"STRING_523924806"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegSecurityIDSource{"STRING_84128539"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegSecuritySubType{"STRING_1883748935"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegSecurityType{"STRING_1322414279"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegSide{'1'}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegStateOrProvinceOfIssue{"STRING_994183487"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_59);
        FIX::LegStrikePrice LegStrikePrice_59;
        LegStrikePrice_59.setString("17344980");
set_field(noLegs_0_1_2_1, LegStrikePrice_59, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegSymbol{"STRING_1879148454"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegSymbolSfx{"STRING_399382909"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegTimeUnit{"STRING_1349243119"}, InstrumentLeg_59);
        set_field(noLegs_0_1_2_1, FIX::LegUnitOfMeasure{"STRING_456816547"}, InstrumentLeg_59);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_59;
        LegUnitOfMeasureQty_59.setString("524733");
set_field(noLegs_0_1_2_1, LegUnitOfMeasureQty_59, InstrumentLeg_59);
        all_values.push_back(InstrumentLeg_59);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_118;
          set_field(noLegSecurityAltID_0_1_1_3_0, FIX::LegSecurityAltID{"STRING_1941418077"}, LegSecAltIDGrp_NoLegSecurityAltID_118);
          set_field(noLegSecurityAltID_0_1_1_3_0, FIX::LegSecurityAltIDSource{"STRING_1565836355"}, LegSecAltIDGrp_NoLegSecurityAltID_118);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_118);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_1.addGroup(noLegSecurityAltID_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_119;
          set_field(noLegSecurityAltID_0_1_1_3_1, FIX::LegSecurityAltID{"STRING_827633435"}, LegSecAltIDGrp_NoLegSecurityAltID_119);
          set_field(noLegSecurityAltID_0_1_1_3_1, FIX::LegSecurityAltIDSource{"STRING_337646393"}, LegSecAltIDGrp_NoLegSecurityAltID_119);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_119);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_1.addGroup(noLegSecurityAltID_0_1_1_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_60;
        set_field(noLegs_0_1_2_2, FIX::EncodedLegIssuer{"DATA_500307559"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::EncodedLegIssuerLen{413326831}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::EncodedLegSecurityDesc{"DATA_1550563397"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::EncodedLegSecurityDescLen{952117981}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegCFICode{"STRING_288302325"}, InstrumentLeg_60);
        FIX::LegContractMultiplier LegContractMultiplier_60;
        LegContractMultiplier_60.setString("429812");
set_field(noLegs_0_1_2_2, LegContractMultiplier_60, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegContractMultiplierUnit{966210883}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegContractSettlMonth{"MONTHYEAR_302101697"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegCountryOfIssue{"COUNTRY_884956825"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1462278481"}, InstrumentLeg_60);
        FIX::LegCouponRate LegCouponRate_60;
        LegCouponRate_60.setString("4.380000");
set_field(noLegs_0_1_2_2, LegCouponRate_60, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegCreditRating{"STRING_2063615906"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegCurrency{"EUR"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegDatedDate{"LOCALMKTDATE_1799881193"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegExerciseStyle{1161133918}, InstrumentLeg_60);
        FIX::LegFactor LegFactor_60;
        LegFactor_60.setString("4896037");
set_field(noLegs_0_1_2_2, LegFactor_60, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegFlowScheduleType{646581032}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegInstrRegistry{"STRING_661897514"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1843504912"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegIssueDate{"LOCALMKTDATE_233595390"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegIssuer{"STRING_393562320"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegLocaleOfIssue{"STRING_95404174"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegMaturityDate{"LOCALMKTDATE_1582838510"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegMaturityMonthYear{"MONTHYEAR_850378867"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegMaturityTime{"TZTIMEONLY_147877528"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_60);
        FIX::LegOptionRatio LegOptionRatio_60;
        LegOptionRatio_60.setString("6443132");
set_field(noLegs_0_1_2_2, LegOptionRatio_60, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegPool{"STRING_1713713883"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegPriceUnitOfMeasure{"STRING_309253039"}, InstrumentLeg_60);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_60;
        LegPriceUnitOfMeasureQty_60.setString("9819596");
set_field(noLegs_0_1_2_2, LegPriceUnitOfMeasureQty_60, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegProduct{66537795}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegPutOrCall{722579870}, InstrumentLeg_60);
        FIX::LegRatioQty LegRatioQty_60;
        LegRatioQty_60.setString("3850394");
set_field(noLegs_0_1_2_2, LegRatioQty_60, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1018655776"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegRepoCollateralSecurityType{"STRING_1010882196"}, InstrumentLeg_60);
        FIX::LegRepurchaseRate LegRepurchaseRate_60;
        LegRepurchaseRate_60.setString("7.220000");
set_field(noLegs_0_1_2_2, LegRepurchaseRate_60, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegRepurchaseTerm{1984866659}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegSecurityDesc{"STRING_1312983893"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegSecurityExchange{"EXCHANGE_1312977547"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegSecurityID{"STRING_1299661492"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegSecurityIDSource{"STRING_520270683"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegSecuritySubType{"STRING_1229109805"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegSecurityType{"STRING_1138381131"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegSide{'1'}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegStateOrProvinceOfIssue{"STRING_881507351"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_60);
        FIX::LegStrikePrice LegStrikePrice_60;
        LegStrikePrice_60.setString("15280883");
set_field(noLegs_0_1_2_2, LegStrikePrice_60, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegSymbol{"STRING_813928915"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegSymbolSfx{"STRING_2144794701"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegTimeUnit{"STRING_1761683774"}, InstrumentLeg_60);
        set_field(noLegs_0_1_2_2, FIX::LegUnitOfMeasure{"STRING_1207491235"}, InstrumentLeg_60);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_60;
        LegUnitOfMeasureQty_60.setString("927152");
set_field(noLegs_0_1_2_2, LegUnitOfMeasureQty_60, InstrumentLeg_60);
        all_values.push_back(InstrumentLeg_60);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_120;
          set_field(noLegSecurityAltID_0_1_2_3_0, FIX::LegSecurityAltID{"STRING_2057870102"}, LegSecAltIDGrp_NoLegSecurityAltID_120);
          set_field(noLegSecurityAltID_0_1_2_3_0, FIX::LegSecurityAltIDSource{"STRING_240592755"}, LegSecAltIDGrp_NoLegSecurityAltID_120);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_120);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_2.addGroup(noLegSecurityAltID_0_1_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_121;
          set_field(noLegSecurityAltID_0_1_2_3_1, FIX::LegSecurityAltID{"STRING_678658239"}, LegSecAltIDGrp_NoLegSecurityAltID_121);
          set_field(noLegSecurityAltID_0_1_2_3_1, FIX::LegSecurityAltIDSource{"STRING_554699750"}, LegSecAltIDGrp_NoLegSecurityAltID_121);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_121);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_2.addGroup(noLegSecurityAltID_0_1_2_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_122;
          set_field(noLegSecurityAltID_0_1_2_3_2, FIX::LegSecurityAltID{"STRING_1954306638"}, LegSecAltIDGrp_NoLegSecurityAltID_122);
          set_field(noLegSecurityAltID_0_1_2_3_2, FIX::LegSecurityAltIDSource{"STRING_987911278"}, LegSecAltIDGrp_NoLegSecurityAltID_122);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_122);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_2.addGroup(noLegSecurityAltID_0_1_2_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_2);
      }
      // Instrument
      multiset<string> Instrument_36;
      FIX::AttachmentPoint AttachmentPoint_36;
      AttachmentPoint_36.setString("94.390000");
set_field(noQuoteEntries_0_1_1, AttachmentPoint_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::CFICode{"STRING_2020844433"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::CPProgram{2}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::CPRegType{"STRING_1921698878"}, Instrument_36);
      FIX::CapPrice CapPrice_36;
      CapPrice_36.setString("8920165");
set_field(noQuoteEntries_0_1_1, CapPrice_36, Instrument_36);
      FIX::ContractMultiplier ContractMultiplier_36;
      ContractMultiplier_36.setString("5738896");
set_field(noQuoteEntries_0_1_1, ContractMultiplier_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::ContractMultiplierUnit{0}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::ContractSettlMonth{"MONTHYEAR_729399573"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::CountryOfIssue{"COUNTRY_1886873590"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1515213500"}, Instrument_36);
      FIX::CouponRate CouponRate_36;
      CouponRate_36.setString("10.650000");
set_field(noQuoteEntries_0_1_1, CouponRate_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::CreditRating{"STRING_259660625"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::DatedDate{"LOCALMKTDATE_596839657"}, Instrument_36);
      FIX::DetachmentPoint DetachmentPoint_36;
      DetachmentPoint_36.setString("85.490000");
set_field(noQuoteEntries_0_1_1, DetachmentPoint_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::EncodedIssuer{"DATA_71346637"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::EncodedIssuerLen{1478347008}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::EncodedSecurityDesc{"DATA_1171989950"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::EncodedSecurityDescLen{372636426}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::ExerciseStyle{0}, Instrument_36);
      FIX::Factor Factor_36;
      Factor_36.setString("19859188");
set_field(noQuoteEntries_0_1_1, Factor_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::FlexibleIndicator{true}, Instrument_36);
      FIX::FloorPrice FloorPrice_36;
      FloorPrice_36.setString("10459264");
set_field(noQuoteEntries_0_1_1, FloorPrice_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::FlowScheduleType{1}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::InstrRegistry{"STRING_1670190506"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::InstrmtAssignmentMethod{'9'}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::InterestAccrualDate{"LOCALMKTDATE_703255461"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::IssueDate{"LOCALMKTDATE_201365097"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::Issuer{"STRING_1511012658"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::ListMethod{1}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::LocaleOfIssue{"STRING_1189276376"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::MaturityDate{"LOCALMKTDATE_900188450"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::MaturityMonthYear{"MONTHYEAR_383439237"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::MaturityTime{"TZTIMEONLY_752283877"}, Instrument_36);
      FIX::MinPriceIncrement MinPriceIncrement_36;
      MinPriceIncrement_36.setString("6744036");
set_field(noQuoteEntries_0_1_1, MinPriceIncrement_36, Instrument_36);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_36;
      MinPriceIncrementAmount_36.setString("12754557");
set_field(noQuoteEntries_0_1_1, MinPriceIncrementAmount_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::NTPositionLimit{1326173574}, Instrument_36);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_36;
      NotionalPercentageOutstanding_36.setString("96.320000");
set_field(noQuoteEntries_0_1_1, NotionalPercentageOutstanding_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::OptAttribute{'2'}, Instrument_36);
      FIX::OptPayoutAmount OptPayoutAmount_36;
      OptPayoutAmount_36.setString("10655635");
set_field(noQuoteEntries_0_1_1, OptPayoutAmount_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::OptPayoutType{3}, Instrument_36);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_36;
      OriginalNotionalPercentageOutstanding_36.setString("27.890000");
set_field(noQuoteEntries_0_1_1, OriginalNotionalPercentageOutstanding_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::Pool{"STRING_1325224141"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::PositionLimit{841209142}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::PriceUnitOfMeasure{"STRING_1396570778"}, Instrument_36);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_36;
      PriceUnitOfMeasureQty_36.setString("1720725");
set_field(noQuoteEntries_0_1_1, PriceUnitOfMeasureQty_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::Product{10}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::ProductComplex{"STRING_1769207204"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::PutOrCall{0}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::RedemptionDate{"LOCALMKTDATE_1769332858"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::RepoCollateralSecurityType{"STRING_2139154683"}, Instrument_36);
      FIX::RepurchaseRate RepurchaseRate_36;
      RepurchaseRate_36.setString("61.160000");
set_field(noQuoteEntries_0_1_1, RepurchaseRate_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::RepurchaseTerm{667775664}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::RestructuringType{"STRING_MR"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityDesc{"STRING_1026882974"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityExchange{"EXCHANGE_1624088572"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityGroup{"STRING_1157589202"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityID{"STRING_1228248072"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityIDSource{"STRING_7"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityStatus{"STRING_1"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::SecuritySubType{"STRING_270040800"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityType{"STRING_OOC"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::Seniority{"STRING_SD"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::SettlMethod{'P'}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::SettleOnOpenFlag{"STRING_414726064"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::StateOrProvinceOfIssue{"STRING_1179079041"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::StrikeCurrency{"EUR"}, Instrument_36);
      FIX::StrikeMultiplier StrikeMultiplier_36;
      StrikeMultiplier_36.setString("10364507");
set_field(noQuoteEntries_0_1_1, StrikeMultiplier_36, Instrument_36);
      FIX::StrikePrice StrikePrice_36;
      StrikePrice_36.setString("12665781");
set_field(noQuoteEntries_0_1_1, StrikePrice_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::StrikePriceBoundaryMethod{2}, Instrument_36);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_36;
      StrikePriceBoundaryPrecision_36.setString("99.060000");
set_field(noQuoteEntries_0_1_1, StrikePriceBoundaryPrecision_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::StrikePriceDeterminationMethod{1}, Instrument_36);
      FIX::StrikeValue StrikeValue_36;
      StrikeValue_36.setString("2294606");
set_field(noQuoteEntries_0_1_1, StrikeValue_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::Symbol{"STRING_1534307596"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::TimeUnit{"STRING_Wk"}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_36);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_36;
      UnitOfMeasureQty_36.setString("14325574");
set_field(noQuoteEntries_0_1_1, UnitOfMeasureQty_36, Instrument_36);
      set_field(noQuoteEntries_0_1_1, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_36);
      all_values.push_back(Instrument_36);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_71;
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_71);
        FIX::ComplexEventPrice ComplexEventPrice_71;
        ComplexEventPrice_71.setString("16073464");
set_field(noComplexEvents_0_1_2_0, ComplexEventPrice_71, ComplexEvents_NoComplexEvents_71);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_71);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_71;
        ComplexEventPriceBoundaryPrecision_71.setString("28.670000");
set_field(noComplexEvents_0_1_2_0, ComplexEventPriceBoundaryPrecision_71, ComplexEvents_NoComplexEvents_71);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_71);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_71);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_71;
        ComplexOptPayoutAmount_71.setString("8968972");
set_field(noComplexEvents_0_1_2_0, ComplexOptPayoutAmount_71, ComplexEvents_NoComplexEvents_71);
        all_values.push_back(ComplexEvents_NoComplexEvents_71);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_144;
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 14, 7, 12, 11, 2017)}, ComplexEventDates_NoComplexEventDates_144);
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 46, 22, 1, 9, 2010)}, ComplexEventDates_NoComplexEventDates_144);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_144);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_295;
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 14, 8)}, ComplexEventTimes_NoComplexEventTimes_295);
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 19, 50)}, ComplexEventTimes_NoComplexEventTimes_295);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_295);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_145;
          set_field(noComplexEventDates_0_1_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 6, 3, 17, 10, 2015)}, ComplexEventDates_NoComplexEventDates_145);
          set_field(noComplexEventDates_0_1_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 18, 49, 13, 12, 2017)}, ComplexEventDates_NoComplexEventDates_145);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_145);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_296;
            set_field(noComplexEventTimes_0_1_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 24, 17)}, ComplexEventTimes_NoComplexEventTimes_296);
            set_field(noComplexEventTimes_0_1_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 43, 16)}, ComplexEventTimes_NoComplexEventTimes_296);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_296);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_297;
            set_field(noComplexEventTimes_0_1_0_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 23, 28)}, ComplexEventTimes_NoComplexEventTimes_297);
            set_field(noComplexEventTimes_0_1_0_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 48, 19)}, ComplexEventTimes_NoComplexEventTimes_297);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_297);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_298;
            set_field(noComplexEventTimes_0_1_0_1_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 25, 25)}, ComplexEventTimes_NoComplexEventTimes_298);
            set_field(noComplexEventTimes_0_1_0_1_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 40, 39)}, ComplexEventTimes_NoComplexEventTimes_298);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_298);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_2);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_146;
          set_field(noComplexEventDates_0_1_0_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 20, 21, 22, 8, 2017)}, ComplexEventDates_NoComplexEventDates_146);
          set_field(noComplexEventDates_0_1_0_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 15, 1, 14, 4, 2007)}, ComplexEventDates_NoComplexEventDates_146);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_146);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_299;
            set_field(noComplexEventTimes_0_1_0_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 2, 51)}, ComplexEventTimes_NoComplexEventTimes_299);
            set_field(noComplexEventTimes_0_1_0_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 31, 9)}, ComplexEventTimes_NoComplexEventTimes_299);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_299);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_2.addGroup(noComplexEventTimes_0_1_0_2_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_72;
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_72);
        FIX::ComplexEventPrice ComplexEventPrice_72;
        ComplexEventPrice_72.setString("8599153");
set_field(noComplexEvents_0_1_2_1, ComplexEventPrice_72, ComplexEvents_NoComplexEvents_72);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_72);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_72;
        ComplexEventPriceBoundaryPrecision_72.setString("94.230000");
set_field(noComplexEvents_0_1_2_1, ComplexEventPriceBoundaryPrecision_72, ComplexEvents_NoComplexEvents_72);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_72);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_72);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_72;
        ComplexOptPayoutAmount_72.setString("19329083");
set_field(noComplexEvents_0_1_2_1, ComplexOptPayoutAmount_72, ComplexEvents_NoComplexEvents_72);
        all_values.push_back(ComplexEvents_NoComplexEvents_72);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_147;
          set_field(noComplexEventDates_0_1_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 53, 2, 17, 5, 2011)}, ComplexEventDates_NoComplexEventDates_147);
          set_field(noComplexEventDates_0_1_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 0, 59, 13, 8, 2016)}, ComplexEventDates_NoComplexEventDates_147);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_147);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_300;
            set_field(noComplexEventTimes_0_1_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 58, 1)}, ComplexEventTimes_NoComplexEventTimes_300);
            set_field(noComplexEventTimes_0_1_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 25, 4)}, ComplexEventTimes_NoComplexEventTimes_300);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_300);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_301;
            set_field(noComplexEventTimes_0_1_1_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 31, 32)}, ComplexEventTimes_NoComplexEventTimes_301);
            set_field(noComplexEventTimes_0_1_1_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 20, 50)}, ComplexEventTimes_NoComplexEventTimes_301);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_301);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_1);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_78;
        set_field(noEvents_0_1_2_0, FIX::EventDate{"LOCALMKTDATE_1108060439"}, EvntGrp_NoEvents_78);
        FIX::EventPx EventPx_78;
        EventPx_78.setString("7480562");
set_field(noEvents_0_1_2_0, EventPx_78, EvntGrp_NoEvents_78);
        set_field(noEvents_0_1_2_0, FIX::EventText{"STRING_2128528475"}, EvntGrp_NoEvents_78);
        set_field(noEvents_0_1_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(15, 20, 17, 14, 1, 2002)}, EvntGrp_NoEvents_78);
        set_field(noEvents_0_1_2_0, FIX::EventType{13}, EvntGrp_NoEvents_78);
        all_values.push_back(EvntGrp_NoEvents_78);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_68;
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyID{"STRING_1586488176"}, InstrumentParties_NoInstrumentParties_68);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_68);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyRole{676779189}, InstrumentParties_NoInstrumentParties_68);
        all_values.push_back(InstrumentParties_NoInstrumentParties_68);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138;
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubID{"STRING_1060433027"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138);
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubIDType{650410142}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_138);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139;
          set_field(noInstrumentPartySubIDs_0_1_0_3_1, FIX::InstrumentPartySubID{"STRING_1590991641"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139);
          set_field(noInstrumentPartySubIDs_0_1_0_3_1, FIX::InstrumentPartySubIDType{2025711553}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_139);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_69;
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyID{"STRING_1937003187"}, InstrumentParties_NoInstrumentParties_69);
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_69);
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyRole{580944622}, InstrumentParties_NoInstrumentParties_69);
        all_values.push_back(InstrumentParties_NoInstrumentParties_69);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140;
          set_field(noInstrumentPartySubIDs_0_1_1_3_0, FIX::InstrumentPartySubID{"STRING_1042022201"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140);
          set_field(noInstrumentPartySubIDs_0_1_1_3_0, FIX::InstrumentPartySubIDType{1104027114}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_140);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141;
          set_field(noInstrumentPartySubIDs_0_1_1_3_1, FIX::InstrumentPartySubID{"STRING_1420861267"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141);
          set_field(noInstrumentPartySubIDs_0_1_1_3_1, FIX::InstrumentPartySubIDType{91058373}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_141);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142;
          set_field(noInstrumentPartySubIDs_0_1_1_3_2, FIX::InstrumentPartySubID{"STRING_1412534354"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142);
          set_field(noInstrumentPartySubIDs_0_1_1_3_2, FIX::InstrumentPartySubIDType{167905009}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_142);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_70;
        set_field(noInstrumentParties_0_1_2_2, FIX::InstrumentPartyID{"STRING_162446466"}, InstrumentParties_NoInstrumentParties_70);
        set_field(noInstrumentParties_0_1_2_2, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_70);
        set_field(noInstrumentParties_0_1_2_2, FIX::InstrumentPartyRole{915961284}, InstrumentParties_NoInstrumentParties_70);
        all_values.push_back(InstrumentParties_NoInstrumentParties_70);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143;
          set_field(noInstrumentPartySubIDs_0_1_2_3_0, FIX::InstrumentPartySubID{"STRING_90734537"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143);
          set_field(noInstrumentPartySubIDs_0_1_2_3_0, FIX::InstrumentPartySubIDType{855431516}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_2.addGroup(noInstrumentPartySubIDs_0_1_2_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_74;
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltID{"STRING_1856540254"}, SecAltIDGrp_NoSecurityAltID_74);
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltIDSource{"STRING_1588750522"}, SecAltIDGrp_NoSecurityAltID_74);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_74);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_72;
      set_field(noQuoteEntries_0_1_1, FIX::SecurityXML{"XMLDATA_1316581677"}, SecurityXML_72);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityXMLLen{1214743595}, SecurityXML_72);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityXMLSchema{"STRING_1299202926"}, SecurityXML_72);
      all_values.push_back(SecurityXML_72);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_1);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_56;
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1780727156"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingIssuerLen{653748123}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_34102127"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingSecurityDescLen{310022697}, UnderlyingInstrument_56);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_56;
    UnderlyingAdjustedQuantity_56.setString("5158236");
set_field(noQuoteSets_0_0, UnderlyingAdjustedQuantity_56, UnderlyingInstrument_56);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_56;
    UnderlyingAllocationPercent_56.setString("51.540000");
set_field(noQuoteSets_0_0, UnderlyingAllocationPercent_56, UnderlyingInstrument_56);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_56;
    UnderlyingAttachmentPoint_56.setString("28.390000");
set_field(noQuoteSets_0_0, UnderlyingAttachmentPoint_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCFICode{"STRING_2106815271"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCPProgram{"STRING_972763059"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCPRegType{"STRING_749952379"}, UnderlyingInstrument_56);
    FIX::UnderlyingCapValue UnderlyingCapValue_56;
    UnderlyingCapValue_56.setString("15227184");
set_field(noQuoteSets_0_0, UnderlyingCapValue_56, UnderlyingInstrument_56);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_56;
    UnderlyingCashAmount_56.setString("15537076");
set_field(noQuoteSets_0_0, UnderlyingCashAmount_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_56);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_56;
    UnderlyingContractMultiplier_56.setString("4172570");
set_field(noQuoteSets_0_0, UnderlyingContractMultiplier_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingContractMultiplierUnit{510251147}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1959357969"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_508315387"}, UnderlyingInstrument_56);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_56;
    UnderlyingCouponRate_56.setString("55.010000");
set_field(noQuoteSets_0_0, UnderlyingCouponRate_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCreditRating{"STRING_2127262978"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_56);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_56;
    UnderlyingCurrentValue_56.setString("8957406");
set_field(noQuoteSets_0_0, UnderlyingCurrentValue_56, UnderlyingInstrument_56);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_56;
    UnderlyingDetachmentPoint_56.setString("31.460000");
set_field(noQuoteSets_0_0, UnderlyingDetachmentPoint_56, UnderlyingInstrument_56);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_56;
    UnderlyingDirtyPrice_56.setString("2391475");
set_field(noQuoteSets_0_0, UnderlyingDirtyPrice_56, UnderlyingInstrument_56);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_56;
    UnderlyingEndPrice_56.setString("17511721");
set_field(noQuoteSets_0_0, UnderlyingEndPrice_56, UnderlyingInstrument_56);
    FIX::UnderlyingEndValue UnderlyingEndValue_56;
    UnderlyingEndValue_56.setString("8401977");
set_field(noQuoteSets_0_0, UnderlyingEndValue_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingExerciseStyle{2095687790}, UnderlyingInstrument_56);
    FIX::UnderlyingFXRate UnderlyingFXRate_56;
    UnderlyingFXRate_56.setString("11924390");
set_field(noQuoteSets_0_0, UnderlyingFXRate_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_56);
    FIX::UnderlyingFactor UnderlyingFactor_56;
    UnderlyingFactor_56.setString("11629477");
set_field(noQuoteSets_0_0, UnderlyingFactor_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingFlowScheduleType{344158284}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingInstrRegistry{"STRING_1790022916"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1816695860"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingIssuer{"STRING_378260411"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_2100045613"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_185035842"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1472795565"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_912994804"}, UnderlyingInstrument_56);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_56;
    UnderlyingNotionalPercentageOutstanding_56.setString("74.650000");
set_field(noQuoteSets_0_0, UnderlyingNotionalPercentageOutstanding_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_56);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_56;
    UnderlyingOriginalNotionalPercentageOutstanding_56.setString("71.830000");
set_field(noQuoteSets_0_0, UnderlyingOriginalNotionalPercentageOutstanding_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1667085926"}, UnderlyingInstrument_56);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_56;
    UnderlyingPriceUnitOfMeasureQty_56.setString("18517826");
set_field(noQuoteSets_0_0, UnderlyingPriceUnitOfMeasureQty_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingProduct{53960237}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingPutOrCall{2084342940}, UnderlyingInstrument_56);
    FIX::UnderlyingPx UnderlyingPx_56;
    UnderlyingPx_56.setString("2145501");
set_field(noQuoteSets_0_0, UnderlyingPx_56, UnderlyingInstrument_56);
    FIX::UnderlyingQty UnderlyingQty_56;
    UnderlyingQty_56.setString("20133182");
set_field(noQuoteSets_0_0, UnderlyingQty_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_445174679"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2137335659"}, UnderlyingInstrument_56);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_56;
    UnderlyingRepurchaseRate_56.setString("75.360000");
set_field(noQuoteSets_0_0, UnderlyingRepurchaseRate_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRepurchaseTerm{1115936532}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRestructuringType{"STRING_138265009"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityDesc{"STRING_741354503"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1930189678"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityID{"STRING_377412545"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityIDSource{"STRING_345042986"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecuritySubType{"STRING_622903761"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityType{"STRING_325616687"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSeniority{"STRING_1537481992"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSettlMethod{"STRING_632199521"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_56);
    FIX::UnderlyingStartValue UnderlyingStartValue_56;
    UnderlyingStartValue_56.setString("18816402");
set_field(noQuoteSets_0_0, UnderlyingStartValue_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_274738789"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_56);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_56;
    UnderlyingStrikePrice_56.setString("2273007");
set_field(noQuoteSets_0_0, UnderlyingStrikePrice_56, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSymbol{"STRING_1342812478"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSymbolSfx{"STRING_1585212604"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingTimeUnit{"STRING_1140295558"}, UnderlyingInstrument_56);
    set_field(noQuoteSets_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1487179943"}, UnderlyingInstrument_56);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_56;
    UnderlyingUnitOfMeasureQty_56.setString("18832875");
set_field(noQuoteSets_0_0, UnderlyingUnitOfMeasureQty_56, UnderlyingInstrument_56);
    all_values.push_back(UnderlyingInstrument_56);
    all_compo_names.insert("...NoQuoteSets.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_116;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1006782221"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_116);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1587586590"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_116);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_116);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_117;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_709719331"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_117);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_943641513"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_117);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_117);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_118;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1802136748"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_118);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_575553889"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_118);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_118);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_110;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1791988759"}, UnderlyingStipulations_NoUnderlyingStips_110);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_421167777"}, UnderlyingStipulations_NoUnderlyingStips_110);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_110);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_111;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_357269076"}, UnderlyingStipulations_NoUnderlyingStips_111);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1930253768"}, UnderlyingStipulations_NoUnderlyingStips_111);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_111);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_112;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1162522281"}, UnderlyingStipulations_NoUnderlyingStips_112);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_139975106"}, UnderlyingStipulations_NoUnderlyingStips_112);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_112);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_121;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1507565267"}, UndlyInstrumentParties_NoUndlyInstrumentParties_121);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_121);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{485799352}, UndlyInstrumentParties_NoUndlyInstrumentParties_121);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_121);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1395078388"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1974363776}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_631720239"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1669817177}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_122;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_984656765"}, UndlyInstrumentParties_NoUndlyInstrumentParties_122);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_122);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1897117931}, UndlyInstrumentParties_NoUndlyInstrumentParties_122);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_122);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_181866234"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{889929842}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1667165539"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{2065153815}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_123;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1545688936"}, UndlyInstrumentParties_NoUndlyInstrumentParties_123);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_123);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1505256757}, UndlyInstrumentParties_NoUndlyInstrumentParties_123);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_123);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1470105626"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1159909857}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noQuoteSets_0_0);
  }
  {
    FIX50SP2::MassQuote::NoQuoteSets noQuoteSets_0_1;
    // QuotSetGrp.NoQuoteSets
    multiset<string> QuotSetGrp_NoQuoteSets_1;
    set_field(noQuoteSets_0_1, FIX::LastFragment{true}, QuotSetGrp_NoQuoteSets_1);
    set_field(noQuoteSets_0_1, FIX::QuoteSetID{"STRING_711438170"}, QuotSetGrp_NoQuoteSets_1);
    set_field(noQuoteSets_0_1, FIX::QuoteSetValidUntilTime{FIX::UTCTIMESTAMP(13, 27, 9, 10, 6, 2014)}, QuotSetGrp_NoQuoteSets_1);
    set_field(noQuoteSets_0_1, FIX::TotNoQuoteEntries{1627250186}, QuotSetGrp_NoQuoteSets_1);
    all_values.push_back(QuotSetGrp_NoQuoteSets_1);
    all_compo_names.insert("...NoQuoteSets");

    // QuotEntryGrp
    // Group QuotEntryGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_0;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_2;
      FIX::BidForwardPoints BidForwardPoints_2;
      BidForwardPoints_2.setString("12331671");
set_field(noQuoteEntries_1_1_0, BidForwardPoints_2, QuotEntryGrp_NoQuoteEntries_2);
      FIX::BidForwardPoints2 BidForwardPoints2_2;
      BidForwardPoints2_2.setString("3773301");
set_field(noQuoteEntries_1_1_0, BidForwardPoints2_2, QuotEntryGrp_NoQuoteEntries_2);
      FIX::BidPx BidPx_2;
      BidPx_2.setString("12191559");
set_field(noQuoteEntries_1_1_0, BidPx_2, QuotEntryGrp_NoQuoteEntries_2);
      FIX::BidSize BidSize_2;
      BidSize_2.setString("10600472");
set_field(noQuoteEntries_1_1_0, BidSize_2, QuotEntryGrp_NoQuoteEntries_2);
      FIX::BidSpotRate BidSpotRate_2;
      BidSpotRate_2.setString("10090503");
set_field(noQuoteEntries_1_1_0, BidSpotRate_2, QuotEntryGrp_NoQuoteEntries_2);
      FIX::BidYield BidYield_2;
      BidYield_2.setString("94.910000");
set_field(noQuoteEntries_1_1_0, BidYield_2, QuotEntryGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::BookingType{0}, QuotEntryGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::Currency{"GBP"}, QuotEntryGrp_NoQuoteEntries_2);
      FIX::MidPx MidPx_2;
      MidPx_2.setString("772059");
set_field(noQuoteEntries_1_1_0, MidPx_2, QuotEntryGrp_NoQuoteEntries_2);
      FIX::MidYield MidYield_2;
      MidYield_2.setString("39.020000");
set_field(noQuoteEntries_1_1_0, MidYield_2, QuotEntryGrp_NoQuoteEntries_2);
      FIX::OfferForwardPoints OfferForwardPoints_2;
      OfferForwardPoints_2.setString("13810536");
set_field(noQuoteEntries_1_1_0, OfferForwardPoints_2, QuotEntryGrp_NoQuoteEntries_2);
      FIX::OfferForwardPoints2 OfferForwardPoints2_2;
      OfferForwardPoints2_2.setString("17443714");
set_field(noQuoteEntries_1_1_0, OfferForwardPoints2_2, QuotEntryGrp_NoQuoteEntries_2);
      FIX::OfferPx OfferPx_2;
      OfferPx_2.setString("18527240");
set_field(noQuoteEntries_1_1_0, OfferPx_2, QuotEntryGrp_NoQuoteEntries_2);
      FIX::OfferSize OfferSize_2;
      OfferSize_2.setString("7792589");
set_field(noQuoteEntries_1_1_0, OfferSize_2, QuotEntryGrp_NoQuoteEntries_2);
      FIX::OfferSpotRate OfferSpotRate_2;
      OfferSpotRate_2.setString("1233519");
set_field(noQuoteEntries_1_1_0, OfferSpotRate_2, QuotEntryGrp_NoQuoteEntries_2);
      FIX::OfferYield OfferYield_2;
      OfferYield_2.setString("71.780000");
set_field(noQuoteEntries_1_1_0, OfferYield_2, QuotEntryGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::OrdType{'4'}, QuotEntryGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::OrderCapacity{'W'}, QuotEntryGrp_NoQuoteEntries_2);
      FIX::OrderQty2 OrderQty2_3;
      OrderQty2_3.setString("2229233");
set_field(noQuoteEntries_1_1_0, OrderQty2_3, QuotEntryGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_2"}, QuotEntryGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::QuoteEntryID{"STRING_157412100"}, QuotEntryGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::SettlDate{"LOCALMKTDATE_1027338356"}, QuotEntryGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::SettlDate2{"LOCALMKTDATE_527824669"}, QuotEntryGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::TradingSessionID{"STRING_4"}, QuotEntryGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::TradingSessionSubID{"STRING_4"}, QuotEntryGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::TransactTime{FIX::UTCTIMESTAMP(12, 12, 45, 5, 8, 2017)}, QuotEntryGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_1_1_0, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(6, 4, 58, 15, 12, 2004)}, QuotEntryGrp_NoQuoteEntries_2);
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_2);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_61;
        set_field(noLegs_1_0_2_0, FIX::EncodedLegIssuer{"DATA_906930937"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::EncodedLegIssuerLen{1796734821}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::EncodedLegSecurityDesc{"DATA_2078936034"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::EncodedLegSecurityDescLen{612171358}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegCFICode{"STRING_428510077"}, InstrumentLeg_61);
        FIX::LegContractMultiplier LegContractMultiplier_61;
        LegContractMultiplier_61.setString("548043");
set_field(noLegs_1_0_2_0, LegContractMultiplier_61, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegContractMultiplierUnit{1822668537}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_1315693601"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegCountryOfIssue{"COUNTRY_1648261915"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2045591925"}, InstrumentLeg_61);
        FIX::LegCouponRate LegCouponRate_61;
        LegCouponRate_61.setString("19.840000");
set_field(noLegs_1_0_2_0, LegCouponRate_61, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegCreditRating{"STRING_1805674015"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegDatedDate{"LOCALMKTDATE_884309714"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegExerciseStyle{392486431}, InstrumentLeg_61);
        FIX::LegFactor LegFactor_61;
        LegFactor_61.setString("19142062");
set_field(noLegs_1_0_2_0, LegFactor_61, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegFlowScheduleType{1171627766}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegInstrRegistry{"STRING_606893983"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2041482366"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegIssueDate{"LOCALMKTDATE_1283023392"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegIssuer{"STRING_2054468642"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegLocaleOfIssue{"STRING_398604993"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_466091331"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_267123240"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegMaturityTime{"TZTIMEONLY_1912261657"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegOptAttribute{'3'}, InstrumentLeg_61);
        FIX::LegOptionRatio LegOptionRatio_61;
        LegOptionRatio_61.setString("5244818");
set_field(noLegs_1_0_2_0, LegOptionRatio_61, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegPool{"STRING_884138693"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegPriceUnitOfMeasure{"STRING_806329965"}, InstrumentLeg_61);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_61;
        LegPriceUnitOfMeasureQty_61.setString("8590463");
set_field(noLegs_1_0_2_0, LegPriceUnitOfMeasureQty_61, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegProduct{1791069630}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegPutOrCall{455581138}, InstrumentLeg_61);
        FIX::LegRatioQty LegRatioQty_61;
        LegRatioQty_61.setString("7904987");
set_field(noLegs_1_0_2_0, LegRatioQty_61, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_255757341"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegRepoCollateralSecurityType{"STRING_884091216"}, InstrumentLeg_61);
        FIX::LegRepurchaseRate LegRepurchaseRate_61;
        LegRepurchaseRate_61.setString("31.100000");
set_field(noLegs_1_0_2_0, LegRepurchaseRate_61, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegRepurchaseTerm{2078425878}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegSecurityDesc{"STRING_52301169"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegSecurityExchange{"EXCHANGE_346081377"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegSecurityID{"STRING_1976534155"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegSecurityIDSource{"STRING_791173153"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegSecuritySubType{"STRING_4271744"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegSecurityType{"STRING_754497140"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegSide{'2'}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_888581458"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_61);
        FIX::LegStrikePrice LegStrikePrice_61;
        LegStrikePrice_61.setString("20602092");
set_field(noLegs_1_0_2_0, LegStrikePrice_61, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegSymbol{"STRING_1753877554"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegSymbolSfx{"STRING_1718591118"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegTimeUnit{"STRING_1195748968"}, InstrumentLeg_61);
        set_field(noLegs_1_0_2_0, FIX::LegUnitOfMeasure{"STRING_1660862548"}, InstrumentLeg_61);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_61;
        LegUnitOfMeasureQty_61.setString("21171961");
set_field(noLegs_1_0_2_0, LegUnitOfMeasureQty_61, InstrumentLeg_61);
        all_values.push_back(InstrumentLeg_61);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_123;
          set_field(noLegSecurityAltID_1_0_0_3_0, FIX::LegSecurityAltID{"STRING_1927985789"}, LegSecAltIDGrp_NoLegSecurityAltID_123);
          set_field(noLegSecurityAltID_1_0_0_3_0, FIX::LegSecurityAltIDSource{"STRING_1881974121"}, LegSecAltIDGrp_NoLegSecurityAltID_123);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_123);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_124;
          set_field(noLegSecurityAltID_1_0_0_3_1, FIX::LegSecurityAltID{"STRING_2052489060"}, LegSecAltIDGrp_NoLegSecurityAltID_124);
          set_field(noLegSecurityAltID_1_0_0_3_1, FIX::LegSecurityAltIDSource{"STRING_304983980"}, LegSecAltIDGrp_NoLegSecurityAltID_124);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_124);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_62;
        set_field(noLegs_1_0_2_1, FIX::EncodedLegIssuer{"DATA_618629166"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::EncodedLegIssuerLen{711335378}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::EncodedLegSecurityDesc{"DATA_1164030367"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::EncodedLegSecurityDescLen{262215149}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegCFICode{"STRING_1166916516"}, InstrumentLeg_62);
        FIX::LegContractMultiplier LegContractMultiplier_62;
        LegContractMultiplier_62.setString("19545291");
set_field(noLegs_1_0_2_1, LegContractMultiplier_62, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegContractMultiplierUnit{517972490}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegContractSettlMonth{"MONTHYEAR_2051007732"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegCountryOfIssue{"COUNTRY_652348601"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_448914720"}, InstrumentLeg_62);
        FIX::LegCouponRate LegCouponRate_62;
        LegCouponRate_62.setString("89.010000");
set_field(noLegs_1_0_2_1, LegCouponRate_62, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegCreditRating{"STRING_998429978"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegCurrency{"CHF"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegDatedDate{"LOCALMKTDATE_1002701722"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegExerciseStyle{1032462367}, InstrumentLeg_62);
        FIX::LegFactor LegFactor_62;
        LegFactor_62.setString("6573845");
set_field(noLegs_1_0_2_1, LegFactor_62, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegFlowScheduleType{1891283180}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegInstrRegistry{"STRING_31962291"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_334493318"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegIssueDate{"LOCALMKTDATE_1804008757"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegIssuer{"STRING_1785839845"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegLocaleOfIssue{"STRING_2053084436"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegMaturityDate{"LOCALMKTDATE_852274077"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1299218746"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegMaturityTime{"TZTIMEONLY_2022796900"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegOptAttribute{'3'}, InstrumentLeg_62);
        FIX::LegOptionRatio LegOptionRatio_62;
        LegOptionRatio_62.setString("10797208");
set_field(noLegs_1_0_2_1, LegOptionRatio_62, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegPool{"STRING_1757287374"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegPriceUnitOfMeasure{"STRING_271636141"}, InstrumentLeg_62);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_62;
        LegPriceUnitOfMeasureQty_62.setString("13847048");
set_field(noLegs_1_0_2_1, LegPriceUnitOfMeasureQty_62, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegProduct{228432892}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegPutOrCall{982971519}, InstrumentLeg_62);
        FIX::LegRatioQty LegRatioQty_62;
        LegRatioQty_62.setString("4012515");
set_field(noLegs_1_0_2_1, LegRatioQty_62, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegRedemptionDate{"LOCALMKTDATE_490648041"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegRepoCollateralSecurityType{"STRING_2404388"}, InstrumentLeg_62);
        FIX::LegRepurchaseRate LegRepurchaseRate_62;
        LegRepurchaseRate_62.setString("70.780000");
set_field(noLegs_1_0_2_1, LegRepurchaseRate_62, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegRepurchaseTerm{1008620531}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegSecurityDesc{"STRING_2053412120"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegSecurityExchange{"EXCHANGE_860645679"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegSecurityID{"STRING_1457535251"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegSecurityIDSource{"STRING_2009237374"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegSecuritySubType{"STRING_1859075658"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegSecurityType{"STRING_1735500478"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegSide{'6'}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegStateOrProvinceOfIssue{"STRING_714293732"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_62);
        FIX::LegStrikePrice LegStrikePrice_62;
        LegStrikePrice_62.setString("4580932");
set_field(noLegs_1_0_2_1, LegStrikePrice_62, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegSymbol{"STRING_652441489"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegSymbolSfx{"STRING_1600630017"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegTimeUnit{"STRING_114618374"}, InstrumentLeg_62);
        set_field(noLegs_1_0_2_1, FIX::LegUnitOfMeasure{"STRING_290797686"}, InstrumentLeg_62);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_62;
        LegUnitOfMeasureQty_62.setString("15062308");
set_field(noLegs_1_0_2_1, LegUnitOfMeasureQty_62, InstrumentLeg_62);
        all_values.push_back(InstrumentLeg_62);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_125;
          set_field(noLegSecurityAltID_1_0_1_3_0, FIX::LegSecurityAltID{"STRING_1590016432"}, LegSecAltIDGrp_NoLegSecurityAltID_125);
          set_field(noLegSecurityAltID_1_0_1_3_0, FIX::LegSecurityAltIDSource{"STRING_1381544058"}, LegSecAltIDGrp_NoLegSecurityAltID_125);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_125);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_0_2_1.addGroup(noLegSecurityAltID_1_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_126;
          set_field(noLegSecurityAltID_1_0_1_3_1, FIX::LegSecurityAltID{"STRING_1333523180"}, LegSecAltIDGrp_NoLegSecurityAltID_126);
          set_field(noLegSecurityAltID_1_0_1_3_1, FIX::LegSecurityAltIDSource{"STRING_522253671"}, LegSecAltIDGrp_NoLegSecurityAltID_126);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_126);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_0_2_1.addGroup(noLegSecurityAltID_1_0_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_1_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_127;
          set_field(noLegSecurityAltID_1_0_1_3_2, FIX::LegSecurityAltID{"STRING_991347784"}, LegSecAltIDGrp_NoLegSecurityAltID_127);
          set_field(noLegSecurityAltID_1_0_1_3_2, FIX::LegSecurityAltIDSource{"STRING_1605159322"}, LegSecAltIDGrp_NoLegSecurityAltID_127);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_127);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_0_2_1.addGroup(noLegSecurityAltID_1_0_1_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_63;
        set_field(noLegs_1_0_2_2, FIX::EncodedLegIssuer{"DATA_1906958539"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::EncodedLegIssuerLen{1219780676}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::EncodedLegSecurityDesc{"DATA_440647193"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::EncodedLegSecurityDescLen{160726477}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegCFICode{"STRING_1710428718"}, InstrumentLeg_63);
        FIX::LegContractMultiplier LegContractMultiplier_63;
        LegContractMultiplier_63.setString("4430515");
set_field(noLegs_1_0_2_2, LegContractMultiplier_63, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegContractMultiplierUnit{369023555}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegContractSettlMonth{"MONTHYEAR_571565601"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegCountryOfIssue{"COUNTRY_348980054"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1229669235"}, InstrumentLeg_63);
        FIX::LegCouponRate LegCouponRate_63;
        LegCouponRate_63.setString("8.530000");
set_field(noLegs_1_0_2_2, LegCouponRate_63, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegCreditRating{"STRING_210733780"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegCurrency{"CAN"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegDatedDate{"LOCALMKTDATE_819485913"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegExerciseStyle{1655554977}, InstrumentLeg_63);
        FIX::LegFactor LegFactor_63;
        LegFactor_63.setString("901132");
set_field(noLegs_1_0_2_2, LegFactor_63, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegFlowScheduleType{2085622612}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegInstrRegistry{"STRING_2113648242"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_742554722"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegIssueDate{"LOCALMKTDATE_1538768981"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegIssuer{"STRING_80782968"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegLocaleOfIssue{"STRING_1033352409"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegMaturityDate{"LOCALMKTDATE_897516138"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1047675420"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegMaturityTime{"TZTIMEONLY_475885193"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_63);
        FIX::LegOptionRatio LegOptionRatio_63;
        LegOptionRatio_63.setString("2337149");
set_field(noLegs_1_0_2_2, LegOptionRatio_63, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegPool{"STRING_998138865"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegPriceUnitOfMeasure{"STRING_1122924332"}, InstrumentLeg_63);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_63;
        LegPriceUnitOfMeasureQty_63.setString("18388742");
set_field(noLegs_1_0_2_2, LegPriceUnitOfMeasureQty_63, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegProduct{757613756}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegPutOrCall{195221361}, InstrumentLeg_63);
        FIX::LegRatioQty LegRatioQty_63;
        LegRatioQty_63.setString("1320378");
set_field(noLegs_1_0_2_2, LegRatioQty_63, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegRedemptionDate{"LOCALMKTDATE_918340233"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegRepoCollateralSecurityType{"STRING_1905650079"}, InstrumentLeg_63);
        FIX::LegRepurchaseRate LegRepurchaseRate_63;
        LegRepurchaseRate_63.setString("94.010000");
set_field(noLegs_1_0_2_2, LegRepurchaseRate_63, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegRepurchaseTerm{1287363789}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegSecurityDesc{"STRING_329732032"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegSecurityExchange{"EXCHANGE_924069455"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegSecurityID{"STRING_369549376"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegSecurityIDSource{"STRING_211349237"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegSecuritySubType{"STRING_1134803235"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegSecurityType{"STRING_1310810621"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegSide{'1'}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegStateOrProvinceOfIssue{"STRING_1954289148"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_63);
        FIX::LegStrikePrice LegStrikePrice_63;
        LegStrikePrice_63.setString("18924281");
set_field(noLegs_1_0_2_2, LegStrikePrice_63, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegSymbol{"STRING_785046545"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegSymbolSfx{"STRING_513651229"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegTimeUnit{"STRING_1283713445"}, InstrumentLeg_63);
        set_field(noLegs_1_0_2_2, FIX::LegUnitOfMeasure{"STRING_865829513"}, InstrumentLeg_63);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_63;
        LegUnitOfMeasureQty_63.setString("15470036");
set_field(noLegs_1_0_2_2, LegUnitOfMeasureQty_63, InstrumentLeg_63);
        all_values.push_back(InstrumentLeg_63);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_128;
          set_field(noLegSecurityAltID_1_0_2_3_0, FIX::LegSecurityAltID{"STRING_1913504933"}, LegSecAltIDGrp_NoLegSecurityAltID_128);
          set_field(noLegSecurityAltID_1_0_2_3_0, FIX::LegSecurityAltIDSource{"STRING_2022888831"}, LegSecAltIDGrp_NoLegSecurityAltID_128);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_128);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_0_2_2.addGroup(noLegSecurityAltID_1_0_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_129;
          set_field(noLegSecurityAltID_1_0_2_3_1, FIX::LegSecurityAltID{"STRING_165322484"}, LegSecAltIDGrp_NoLegSecurityAltID_129);
          set_field(noLegSecurityAltID_1_0_2_3_1, FIX::LegSecurityAltIDSource{"STRING_2147219886"}, LegSecAltIDGrp_NoLegSecurityAltID_129);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_129);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_0_2_2.addGroup(noLegSecurityAltID_1_0_2_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_2);
      }
      // Instrument
      multiset<string> Instrument_37;
      FIX::AttachmentPoint AttachmentPoint_37;
      AttachmentPoint_37.setString("40.480000");
set_field(noQuoteEntries_1_1_0, AttachmentPoint_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::CFICode{"STRING_1288246817"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::CPProgram{99}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::CPRegType{"STRING_1631157804"}, Instrument_37);
      FIX::CapPrice CapPrice_37;
      CapPrice_37.setString("14834681");
set_field(noQuoteEntries_1_1_0, CapPrice_37, Instrument_37);
      FIX::ContractMultiplier ContractMultiplier_37;
      ContractMultiplier_37.setString("19706483");
set_field(noQuoteEntries_1_1_0, ContractMultiplier_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::ContractMultiplierUnit{2}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::ContractSettlMonth{"MONTHYEAR_1241634609"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::CountryOfIssue{"COUNTRY_398254086"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1689378179"}, Instrument_37);
      FIX::CouponRate CouponRate_37;
      CouponRate_37.setString("66.410000");
set_field(noQuoteEntries_1_1_0, CouponRate_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::CreditRating{"STRING_1322323541"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::DatedDate{"LOCALMKTDATE_2058927555"}, Instrument_37);
      FIX::DetachmentPoint DetachmentPoint_37;
      DetachmentPoint_37.setString("58.790000");
set_field(noQuoteEntries_1_1_0, DetachmentPoint_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::EncodedIssuer{"DATA_309643129"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::EncodedIssuerLen{1222254528}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::EncodedSecurityDesc{"DATA_1463699152"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::EncodedSecurityDescLen{116448629}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::ExerciseStyle{0}, Instrument_37);
      FIX::Factor Factor_37;
      Factor_37.setString("12347956");
set_field(noQuoteEntries_1_1_0, Factor_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::FlexibleIndicator{false}, Instrument_37);
      FIX::FloorPrice FloorPrice_37;
      FloorPrice_37.setString("17484468");
set_field(noQuoteEntries_1_1_0, FloorPrice_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::FlowScheduleType{4}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::InstrRegistry{"STRING_1544528889"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1178852475"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::IssueDate{"LOCALMKTDATE_1310550174"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::Issuer{"STRING_1023372061"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::ListMethod{0}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::LocaleOfIssue{"STRING_1310286412"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::MaturityDate{"LOCALMKTDATE_1896916109"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::MaturityMonthYear{"MONTHYEAR_484938129"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::MaturityTime{"TZTIMEONLY_1001413277"}, Instrument_37);
      FIX::MinPriceIncrement MinPriceIncrement_37;
      MinPriceIncrement_37.setString("13805902");
set_field(noQuoteEntries_1_1_0, MinPriceIncrement_37, Instrument_37);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_37;
      MinPriceIncrementAmount_37.setString("19684063");
set_field(noQuoteEntries_1_1_0, MinPriceIncrementAmount_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::NTPositionLimit{824577961}, Instrument_37);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_37;
      NotionalPercentageOutstanding_37.setString("46.560000");
set_field(noQuoteEntries_1_1_0, NotionalPercentageOutstanding_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::OptAttribute{'1'}, Instrument_37);
      FIX::OptPayoutAmount OptPayoutAmount_37;
      OptPayoutAmount_37.setString("12228320");
set_field(noQuoteEntries_1_1_0, OptPayoutAmount_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::OptPayoutType{1}, Instrument_37);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_37;
      OriginalNotionalPercentageOutstanding_37.setString("2.610000");
set_field(noQuoteEntries_1_1_0, OriginalNotionalPercentageOutstanding_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::Pool{"STRING_397671941"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::PositionLimit{1235943094}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::PriceUnitOfMeasure{"STRING_707315070"}, Instrument_37);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_37;
      PriceUnitOfMeasureQty_37.setString("3107139");
set_field(noQuoteEntries_1_1_0, PriceUnitOfMeasureQty_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::Product{13}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::ProductComplex{"STRING_823763699"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::PutOrCall{0}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::RedemptionDate{"LOCALMKTDATE_672683655"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::RepoCollateralSecurityType{"STRING_685156793"}, Instrument_37);
      FIX::RepurchaseRate RepurchaseRate_37;
      RepurchaseRate_37.setString("61.800000");
set_field(noQuoteEntries_1_1_0, RepurchaseRate_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::RepurchaseTerm{273646894}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::RestructuringType{"STRING_MR"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityDesc{"STRING_280111421"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityExchange{"EXCHANGE_1421613772"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityGroup{"STRING_861632160"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityID{"STRING_1590661595"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityIDSource{"STRING_E"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityStatus{"STRING_1"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::SecuritySubType{"STRING_753464360"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityType{"STRING_FORWARD"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::Seniority{"STRING_SR"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::SettlMethod{'P'}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::SettleOnOpenFlag{"STRING_1427524912"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::StateOrProvinceOfIssue{"STRING_364184260"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::StrikeCurrency{"GBP"}, Instrument_37);
      FIX::StrikeMultiplier StrikeMultiplier_37;
      StrikeMultiplier_37.setString("14267415");
set_field(noQuoteEntries_1_1_0, StrikeMultiplier_37, Instrument_37);
      FIX::StrikePrice StrikePrice_37;
      StrikePrice_37.setString("16548039");
set_field(noQuoteEntries_1_1_0, StrikePrice_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_37);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_37;
      StrikePriceBoundaryPrecision_37.setString("17.900000");
set_field(noQuoteEntries_1_1_0, StrikePriceBoundaryPrecision_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::StrikePriceDeterminationMethod{4}, Instrument_37);
      FIX::StrikeValue StrikeValue_37;
      StrikeValue_37.setString("14756045");
set_field(noQuoteEntries_1_1_0, StrikeValue_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::Symbol{"STRING_2034854282"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::TimeUnit{"STRING_H"}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::UnitOfMeasure{"STRING_oz_tr"}, Instrument_37);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_37;
      UnitOfMeasureQty_37.setString("19906853");
set_field(noQuoteEntries_1_1_0, UnitOfMeasureQty_37, Instrument_37);
      set_field(noQuoteEntries_1_1_0, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_37);
      all_values.push_back(Instrument_37);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_73;
        set_field(noComplexEvents_1_0_2_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_73);
        FIX::ComplexEventPrice ComplexEventPrice_73;
        ComplexEventPrice_73.setString("2715891");
set_field(noComplexEvents_1_0_2_0, ComplexEventPrice_73, ComplexEvents_NoComplexEvents_73);
        set_field(noComplexEvents_1_0_2_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_73);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_73;
        ComplexEventPriceBoundaryPrecision_73.setString("92.850000");
set_field(noComplexEvents_1_0_2_0, ComplexEventPriceBoundaryPrecision_73, ComplexEvents_NoComplexEvents_73);
        set_field(noComplexEvents_1_0_2_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_73);
        set_field(noComplexEvents_1_0_2_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_73);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_73;
        ComplexOptPayoutAmount_73.setString("4495572");
set_field(noComplexEvents_1_0_2_0, ComplexOptPayoutAmount_73, ComplexEvents_NoComplexEvents_73);
        all_values.push_back(ComplexEvents_NoComplexEvents_73);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_148;
          set_field(noComplexEventDates_1_0_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 4, 5, 17, 1, 2004)}, ComplexEventDates_NoComplexEventDates_148);
          set_field(noComplexEventDates_1_0_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 6, 22, 20, 9, 2015)}, ComplexEventDates_NoComplexEventDates_148);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_148);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_302;
            set_field(noComplexEventTimes_1_0_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 13, 42)}, ComplexEventTimes_NoComplexEventTimes_302);
            set_field(noComplexEventTimes_1_0_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 28, 12)}, ComplexEventTimes_NoComplexEventTimes_302);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_302);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_0);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noComplexEvents_1_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_74;
        set_field(noComplexEvents_1_0_2_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_74);
        FIX::ComplexEventPrice ComplexEventPrice_74;
        ComplexEventPrice_74.setString("110421");
set_field(noComplexEvents_1_0_2_1, ComplexEventPrice_74, ComplexEvents_NoComplexEvents_74);
        set_field(noComplexEvents_1_0_2_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_74);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_74;
        ComplexEventPriceBoundaryPrecision_74.setString("93.980000");
set_field(noComplexEvents_1_0_2_1, ComplexEventPriceBoundaryPrecision_74, ComplexEvents_NoComplexEvents_74);
        set_field(noComplexEvents_1_0_2_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_74);
        set_field(noComplexEvents_1_0_2_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_74);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_74;
        ComplexOptPayoutAmount_74.setString("14648666");
set_field(noComplexEvents_1_0_2_1, ComplexOptPayoutAmount_74, ComplexEvents_NoComplexEvents_74);
        all_values.push_back(ComplexEvents_NoComplexEvents_74);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_149;
          set_field(noComplexEventDates_1_0_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 38, 36, 9, 8, 2010)}, ComplexEventDates_NoComplexEventDates_149);
          set_field(noComplexEventDates_1_0_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 21, 3, 0, 6, 2006)}, ComplexEventDates_NoComplexEventDates_149);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_149);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_303;
            set_field(noComplexEventTimes_1_0_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 52, 6)}, ComplexEventTimes_NoComplexEventTimes_303);
            set_field(noComplexEventTimes_1_0_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 26, 41)}, ComplexEventTimes_NoComplexEventTimes_303);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_303);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_0_1_3_0.addGroup(noComplexEventTimes_1_0_1_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_304;
            set_field(noComplexEventTimes_1_0_1_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 56, 13)}, ComplexEventTimes_NoComplexEventTimes_304);
            set_field(noComplexEventTimes_1_0_1_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 56, 34)}, ComplexEventTimes_NoComplexEventTimes_304);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_304);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_0_1_3_0.addGroup(noComplexEventTimes_1_0_1_0_4_1);
          }
          noComplexEvents_1_0_2_1.addGroup(noComplexEventDates_1_0_1_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noComplexEvents_1_0_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_79;
        set_field(noEvents_1_0_2_0, FIX::EventDate{"LOCALMKTDATE_697943792"}, EvntGrp_NoEvents_79);
        FIX::EventPx EventPx_79;
        EventPx_79.setString("11838874");
set_field(noEvents_1_0_2_0, EventPx_79, EvntGrp_NoEvents_79);
        set_field(noEvents_1_0_2_0, FIX::EventText{"STRING_162759639"}, EvntGrp_NoEvents_79);
        set_field(noEvents_1_0_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(0, 1, 2, 24, 3, 2005)}, EvntGrp_NoEvents_79);
        set_field(noEvents_1_0_2_0, FIX::EventType{17}, EvntGrp_NoEvents_79);
        all_values.push_back(EvntGrp_NoEvents_79);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_80;
        set_field(noEvents_1_0_2_1, FIX::EventDate{"LOCALMKTDATE_985601084"}, EvntGrp_NoEvents_80);
        FIX::EventPx EventPx_80;
        EventPx_80.setString("11650847");
set_field(noEvents_1_0_2_1, EventPx_80, EvntGrp_NoEvents_80);
        set_field(noEvents_1_0_2_1, FIX::EventText{"STRING_764365815"}, EvntGrp_NoEvents_80);
        set_field(noEvents_1_0_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(15, 7, 15, 15, 1, 2005)}, EvntGrp_NoEvents_80);
        set_field(noEvents_1_0_2_1, FIX::EventType{9}, EvntGrp_NoEvents_80);
        all_values.push_back(EvntGrp_NoEvents_80);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_71;
        set_field(noInstrumentParties_1_0_2_0, FIX::InstrumentPartyID{"STRING_595172080"}, InstrumentParties_NoInstrumentParties_71);
        set_field(noInstrumentParties_1_0_2_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_71);
        set_field(noInstrumentParties_1_0_2_0, FIX::InstrumentPartyRole{1858540077}, InstrumentParties_NoInstrumentParties_71);
        all_values.push_back(InstrumentParties_NoInstrumentParties_71);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144;
          set_field(noInstrumentPartySubIDs_1_0_0_3_0, FIX::InstrumentPartySubID{"STRING_62088808"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144);
          set_field(noInstrumentPartySubIDs_1_0_0_3_0, FIX::InstrumentPartySubIDType{2036079293}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145;
          set_field(noInstrumentPartySubIDs_1_0_0_3_1, FIX::InstrumentPartySubID{"STRING_687718559"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145);
          set_field(noInstrumentPartySubIDs_1_0_0_3_1, FIX::InstrumentPartySubIDType{2119575999}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_145);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146;
          set_field(noInstrumentPartySubIDs_1_0_0_3_2, FIX::InstrumentPartySubID{"STRING_586539437"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146);
          set_field(noInstrumentPartySubIDs_1_0_0_3_2, FIX::InstrumentPartySubIDType{1871605984}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_146);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_72;
        set_field(noInstrumentParties_1_0_2_1, FIX::InstrumentPartyID{"STRING_134851990"}, InstrumentParties_NoInstrumentParties_72);
        set_field(noInstrumentParties_1_0_2_1, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_72);
        set_field(noInstrumentParties_1_0_2_1, FIX::InstrumentPartyRole{1515829880}, InstrumentParties_NoInstrumentParties_72);
        all_values.push_back(InstrumentParties_NoInstrumentParties_72);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147;
          set_field(noInstrumentPartySubIDs_1_0_1_3_0, FIX::InstrumentPartySubID{"STRING_774824080"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147);
          set_field(noInstrumentPartySubIDs_1_0_1_3_0, FIX::InstrumentPartySubIDType{2000717216}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_147);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148;
          set_field(noInstrumentPartySubIDs_1_0_1_3_1, FIX::InstrumentPartySubID{"STRING_2138631686"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148);
          set_field(noInstrumentPartySubIDs_1_0_1_3_1, FIX::InstrumentPartySubIDType{109776697}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_148);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149;
          set_field(noInstrumentPartySubIDs_1_0_1_3_2, FIX::InstrumentPartySubID{"STRING_1651289124"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149);
          set_field(noInstrumentPartySubIDs_1_0_1_3_2, FIX::InstrumentPartySubIDType{976749122}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_149);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_75;
        set_field(noSecurityAltID_1_0_2_0, FIX::SecurityAltID{"STRING_268171291"}, SecAltIDGrp_NoSecurityAltID_75);
        set_field(noSecurityAltID_1_0_2_0, FIX::SecurityAltIDSource{"STRING_1112381110"}, SecAltIDGrp_NoSecurityAltID_75);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_75);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_76;
        set_field(noSecurityAltID_1_0_2_1, FIX::SecurityAltID{"STRING_1242118457"}, SecAltIDGrp_NoSecurityAltID_76);
        set_field(noSecurityAltID_1_0_2_1, FIX::SecurityAltIDSource{"STRING_1585791578"}, SecAltIDGrp_NoSecurityAltID_76);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_76);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_74;
      set_field(noQuoteEntries_1_1_0, FIX::SecurityXML{"XMLDATA_139554677"}, SecurityXML_74);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityXMLLen{567142785}, SecurityXML_74);
      set_field(noQuoteEntries_1_1_0, FIX::SecurityXMLSchema{"STRING_591844939"}, SecurityXML_74);
      all_values.push_back(SecurityXML_74);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_1;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_3;
      FIX::BidForwardPoints BidForwardPoints_3;
      BidForwardPoints_3.setString("20926900");
set_field(noQuoteEntries_1_1_1, BidForwardPoints_3, QuotEntryGrp_NoQuoteEntries_3);
      FIX::BidForwardPoints2 BidForwardPoints2_3;
      BidForwardPoints2_3.setString("19267571");
set_field(noQuoteEntries_1_1_1, BidForwardPoints2_3, QuotEntryGrp_NoQuoteEntries_3);
      FIX::BidPx BidPx_3;
      BidPx_3.setString("15902287");
set_field(noQuoteEntries_1_1_1, BidPx_3, QuotEntryGrp_NoQuoteEntries_3);
      FIX::BidSize BidSize_3;
      BidSize_3.setString("5403785");
set_field(noQuoteEntries_1_1_1, BidSize_3, QuotEntryGrp_NoQuoteEntries_3);
      FIX::BidSpotRate BidSpotRate_3;
      BidSpotRate_3.setString("12118574");
set_field(noQuoteEntries_1_1_1, BidSpotRate_3, QuotEntryGrp_NoQuoteEntries_3);
      FIX::BidYield BidYield_3;
      BidYield_3.setString("52.110000");
set_field(noQuoteEntries_1_1_1, BidYield_3, QuotEntryGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::BookingType{1}, QuotEntryGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::Currency{"EUR"}, QuotEntryGrp_NoQuoteEntries_3);
      FIX::MidPx MidPx_3;
      MidPx_3.setString("220672");
set_field(noQuoteEntries_1_1_1, MidPx_3, QuotEntryGrp_NoQuoteEntries_3);
      FIX::MidYield MidYield_3;
      MidYield_3.setString("85.900000");
set_field(noQuoteEntries_1_1_1, MidYield_3, QuotEntryGrp_NoQuoteEntries_3);
      FIX::OfferForwardPoints OfferForwardPoints_3;
      OfferForwardPoints_3.setString("17764202");
set_field(noQuoteEntries_1_1_1, OfferForwardPoints_3, QuotEntryGrp_NoQuoteEntries_3);
      FIX::OfferForwardPoints2 OfferForwardPoints2_3;
      OfferForwardPoints2_3.setString("18936732");
set_field(noQuoteEntries_1_1_1, OfferForwardPoints2_3, QuotEntryGrp_NoQuoteEntries_3);
      FIX::OfferPx OfferPx_3;
      OfferPx_3.setString("13808905");
set_field(noQuoteEntries_1_1_1, OfferPx_3, QuotEntryGrp_NoQuoteEntries_3);
      FIX::OfferSize OfferSize_3;
      OfferSize_3.setString("967563");
set_field(noQuoteEntries_1_1_1, OfferSize_3, QuotEntryGrp_NoQuoteEntries_3);
      FIX::OfferSpotRate OfferSpotRate_3;
      OfferSpotRate_3.setString("12620194");
set_field(noQuoteEntries_1_1_1, OfferSpotRate_3, QuotEntryGrp_NoQuoteEntries_3);
      FIX::OfferYield OfferYield_3;
      OfferYield_3.setString("0.430000");
set_field(noQuoteEntries_1_1_1, OfferYield_3, QuotEntryGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::OrdType{'I'}, QuotEntryGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::OrderCapacity{'W'}, QuotEntryGrp_NoQuoteEntries_3);
      FIX::OrderQty2 OrderQty2_4;
      OrderQty2_4.setString("12588480");
set_field(noQuoteEntries_1_1_1, OrderQty2_4, QuotEntryGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_E"}, QuotEntryGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::QuoteEntryID{"STRING_619058535"}, QuotEntryGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::SettlDate{"LOCALMKTDATE_88113555"}, QuotEntryGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::SettlDate2{"LOCALMKTDATE_108734925"}, QuotEntryGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::TradingSessionID{"STRING_6"}, QuotEntryGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::TradingSessionSubID{"STRING_1"}, QuotEntryGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::TransactTime{FIX::UTCTIMESTAMP(5, 43, 48, 20, 11, 2015)}, QuotEntryGrp_NoQuoteEntries_3);
      set_field(noQuoteEntries_1_1_1, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(6, 16, 22, 10, 12, 2009)}, QuotEntryGrp_NoQuoteEntries_3);
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_3);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_64;
        set_field(noLegs_1_1_2_0, FIX::EncodedLegIssuer{"DATA_1134144677"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::EncodedLegIssuerLen{332746898}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::EncodedLegSecurityDesc{"DATA_928239888"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::EncodedLegSecurityDescLen{367551609}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegCFICode{"STRING_429503283"}, InstrumentLeg_64);
        FIX::LegContractMultiplier LegContractMultiplier_64;
        LegContractMultiplier_64.setString("427757");
set_field(noLegs_1_1_2_0, LegContractMultiplier_64, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegContractMultiplierUnit{1635251652}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_1301083748"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegCountryOfIssue{"COUNTRY_1158028790"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_746616086"}, InstrumentLeg_64);
        FIX::LegCouponRate LegCouponRate_64;
        LegCouponRate_64.setString("72.630000");
set_field(noLegs_1_1_2_0, LegCouponRate_64, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegCreditRating{"STRING_1777087325"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegDatedDate{"LOCALMKTDATE_516833504"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegExerciseStyle{2035224307}, InstrumentLeg_64);
        FIX::LegFactor LegFactor_64;
        LegFactor_64.setString("15945455");
set_field(noLegs_1_1_2_0, LegFactor_64, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegFlowScheduleType{842371262}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegInstrRegistry{"STRING_1227790003"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1365058092"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegIssueDate{"LOCALMKTDATE_1759753958"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegIssuer{"STRING_365562129"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegLocaleOfIssue{"STRING_914844157"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_2119881789"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_43712767"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegMaturityTime{"TZTIMEONLY_1676487653"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_64);
        FIX::LegOptionRatio LegOptionRatio_64;
        LegOptionRatio_64.setString("12036957");
set_field(noLegs_1_1_2_0, LegOptionRatio_64, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegPool{"STRING_1564593740"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegPriceUnitOfMeasure{"STRING_190137787"}, InstrumentLeg_64);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_64;
        LegPriceUnitOfMeasureQty_64.setString("2382623");
set_field(noLegs_1_1_2_0, LegPriceUnitOfMeasureQty_64, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegProduct{551254769}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegPutOrCall{522884685}, InstrumentLeg_64);
        FIX::LegRatioQty LegRatioQty_64;
        LegRatioQty_64.setString("11665022");
set_field(noLegs_1_1_2_0, LegRatioQty_64, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_918806378"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegRepoCollateralSecurityType{"STRING_952387968"}, InstrumentLeg_64);
        FIX::LegRepurchaseRate LegRepurchaseRate_64;
        LegRepurchaseRate_64.setString("80.170000");
set_field(noLegs_1_1_2_0, LegRepurchaseRate_64, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegRepurchaseTerm{406574383}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegSecurityDesc{"STRING_105988069"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegSecurityExchange{"EXCHANGE_219823159"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegSecurityID{"STRING_1153190469"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegSecurityIDSource{"STRING_240945332"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegSecuritySubType{"STRING_1996910485"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegSecurityType{"STRING_1987920110"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegSide{'4'}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_366260341"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_64);
        FIX::LegStrikePrice LegStrikePrice_64;
        LegStrikePrice_64.setString("12086316");
set_field(noLegs_1_1_2_0, LegStrikePrice_64, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegSymbol{"STRING_955967125"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegSymbolSfx{"STRING_1296757537"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegTimeUnit{"STRING_820901914"}, InstrumentLeg_64);
        set_field(noLegs_1_1_2_0, FIX::LegUnitOfMeasure{"STRING_1321529254"}, InstrumentLeg_64);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_64;
        LegUnitOfMeasureQty_64.setString("641180");
set_field(noLegs_1_1_2_0, LegUnitOfMeasureQty_64, InstrumentLeg_64);
        all_values.push_back(InstrumentLeg_64);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_130;
          set_field(noLegSecurityAltID_1_1_0_3_0, FIX::LegSecurityAltID{"STRING_1365242022"}, LegSecAltIDGrp_NoLegSecurityAltID_130);
          set_field(noLegSecurityAltID_1_1_0_3_0, FIX::LegSecurityAltIDSource{"STRING_1740605700"}, LegSecAltIDGrp_NoLegSecurityAltID_130);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_130);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_131;
          set_field(noLegSecurityAltID_1_1_0_3_1, FIX::LegSecurityAltID{"STRING_279627591"}, LegSecAltIDGrp_NoLegSecurityAltID_131);
          set_field(noLegSecurityAltID_1_1_0_3_1, FIX::LegSecurityAltIDSource{"STRING_421454143"}, LegSecAltIDGrp_NoLegSecurityAltID_131);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_131);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_132;
          set_field(noLegSecurityAltID_1_1_0_3_2, FIX::LegSecurityAltID{"STRING_1157715793"}, LegSecAltIDGrp_NoLegSecurityAltID_132);
          set_field(noLegSecurityAltID_1_1_0_3_2, FIX::LegSecurityAltIDSource{"STRING_469765379"}, LegSecAltIDGrp_NoLegSecurityAltID_132);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_132);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_2);
        }
        noQuoteEntries_1_1_1.addGroup(noLegs_1_1_2_0);
      }
      // Instrument
      multiset<string> Instrument_38;
      FIX::AttachmentPoint AttachmentPoint_38;
      AttachmentPoint_38.setString("65.420000");
set_field(noQuoteEntries_1_1_1, AttachmentPoint_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::CFICode{"STRING_1708970562"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::CPProgram{99}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::CPRegType{"STRING_1826218828"}, Instrument_38);
      FIX::CapPrice CapPrice_38;
      CapPrice_38.setString("4802932");
set_field(noQuoteEntries_1_1_1, CapPrice_38, Instrument_38);
      FIX::ContractMultiplier ContractMultiplier_38;
      ContractMultiplier_38.setString("19450380");
set_field(noQuoteEntries_1_1_1, ContractMultiplier_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::ContractMultiplierUnit{1}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::ContractSettlMonth{"MONTHYEAR_886867676"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::CountryOfIssue{"COUNTRY_2051026102"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1107836357"}, Instrument_38);
      FIX::CouponRate CouponRate_38;
      CouponRate_38.setString("81.450000");
set_field(noQuoteEntries_1_1_1, CouponRate_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::CreditRating{"STRING_144487786"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::DatedDate{"LOCALMKTDATE_957263194"}, Instrument_38);
      FIX::DetachmentPoint DetachmentPoint_38;
      DetachmentPoint_38.setString("46.070000");
set_field(noQuoteEntries_1_1_1, DetachmentPoint_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::EncodedIssuer{"DATA_629125308"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::EncodedIssuerLen{1323523536}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::EncodedSecurityDesc{"DATA_1608671729"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::EncodedSecurityDescLen{560824753}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::ExerciseStyle{1}, Instrument_38);
      FIX::Factor Factor_38;
      Factor_38.setString("4171552");
set_field(noQuoteEntries_1_1_1, Factor_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::FlexibleIndicator{false}, Instrument_38);
      FIX::FloorPrice FloorPrice_38;
      FloorPrice_38.setString("17386844");
set_field(noQuoteEntries_1_1_1, FloorPrice_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::FlowScheduleType{3}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::InstrRegistry{"STRING_1998873461"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::InstrmtAssignmentMethod{'9'}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::InterestAccrualDate{"LOCALMKTDATE_1514822390"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::IssueDate{"LOCALMKTDATE_131017404"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::Issuer{"STRING_1377896978"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::ListMethod{1}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::LocaleOfIssue{"STRING_600782783"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::MaturityDate{"LOCALMKTDATE_2037613520"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::MaturityMonthYear{"MONTHYEAR_86541450"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::MaturityTime{"TZTIMEONLY_1593432848"}, Instrument_38);
      FIX::MinPriceIncrement MinPriceIncrement_38;
      MinPriceIncrement_38.setString("17163487");
set_field(noQuoteEntries_1_1_1, MinPriceIncrement_38, Instrument_38);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_38;
      MinPriceIncrementAmount_38.setString("5668347");
set_field(noQuoteEntries_1_1_1, MinPriceIncrementAmount_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::NTPositionLimit{1390987233}, Instrument_38);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_38;
      NotionalPercentageOutstanding_38.setString("82.510000");
set_field(noQuoteEntries_1_1_1, NotionalPercentageOutstanding_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::OptAttribute{'1'}, Instrument_38);
      FIX::OptPayoutAmount OptPayoutAmount_38;
      OptPayoutAmount_38.setString("12945296");
set_field(noQuoteEntries_1_1_1, OptPayoutAmount_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::OptPayoutType{1}, Instrument_38);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_38;
      OriginalNotionalPercentageOutstanding_38.setString("69.160000");
set_field(noQuoteEntries_1_1_1, OriginalNotionalPercentageOutstanding_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::Pool{"STRING_1439017473"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::PositionLimit{374494155}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::PriceUnitOfMeasure{"STRING_2068142781"}, Instrument_38);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_38;
      PriceUnitOfMeasureQty_38.setString("16980176");
set_field(noQuoteEntries_1_1_1, PriceUnitOfMeasureQty_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::Product{9}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::ProductComplex{"STRING_481483887"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::PutOrCall{0}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::RedemptionDate{"LOCALMKTDATE_957631163"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::RepoCollateralSecurityType{"STRING_191582530"}, Instrument_38);
      FIX::RepurchaseRate RepurchaseRate_38;
      RepurchaseRate_38.setString("89.400000");
set_field(noQuoteEntries_1_1_1, RepurchaseRate_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::RepurchaseTerm{548831976}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::RestructuringType{"STRING_FR"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityDesc{"STRING_992168753"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityExchange{"EXCHANGE_1505274811"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityGroup{"STRING_1480621610"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityID{"STRING_1123186157"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityIDSource{"STRING_3"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityStatus{"STRING_1"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::SecuritySubType{"STRING_1723968941"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityType{"STRING_BA"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::Seniority{"STRING_SR"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::SettlMethod{'P'}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::SettleOnOpenFlag{"STRING_194683067"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::StateOrProvinceOfIssue{"STRING_511568691"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::StrikeCurrency{"USD"}, Instrument_38);
      FIX::StrikeMultiplier StrikeMultiplier_38;
      StrikeMultiplier_38.setString("19652711");
set_field(noQuoteEntries_1_1_1, StrikeMultiplier_38, Instrument_38);
      FIX::StrikePrice StrikePrice_38;
      StrikePrice_38.setString("17079514");
set_field(noQuoteEntries_1_1_1, StrikePrice_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::StrikePriceBoundaryMethod{5}, Instrument_38);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_38;
      StrikePriceBoundaryPrecision_38.setString("43.780000");
set_field(noQuoteEntries_1_1_1, StrikePriceBoundaryPrecision_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::StrikePriceDeterminationMethod{3}, Instrument_38);
      FIX::StrikeValue StrikeValue_38;
      StrikeValue_38.setString("4432864");
set_field(noQuoteEntries_1_1_1, StrikeValue_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::Symbol{"STRING_95868605"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::TimeUnit{"STRING_S"}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_38);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_38;
      UnitOfMeasureQty_38.setString("20765096");
set_field(noQuoteEntries_1_1_1, UnitOfMeasureQty_38, Instrument_38);
      set_field(noQuoteEntries_1_1_1, FIX::ValuationMethod{"STRING_FUT"}, Instrument_38);
      all_values.push_back(Instrument_38);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_75;
        set_field(noComplexEvents_1_1_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_75);
        FIX::ComplexEventPrice ComplexEventPrice_75;
        ComplexEventPrice_75.setString("21428077");
set_field(noComplexEvents_1_1_2_0, ComplexEventPrice_75, ComplexEvents_NoComplexEvents_75);
        set_field(noComplexEvents_1_1_2_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_75);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_75;
        ComplexEventPriceBoundaryPrecision_75.setString("37.040000");
set_field(noComplexEvents_1_1_2_0, ComplexEventPriceBoundaryPrecision_75, ComplexEvents_NoComplexEvents_75);
        set_field(noComplexEvents_1_1_2_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_75);
        set_field(noComplexEvents_1_1_2_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_75);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_75;
        ComplexOptPayoutAmount_75.setString("10376762");
set_field(noComplexEvents_1_1_2_0, ComplexOptPayoutAmount_75, ComplexEvents_NoComplexEvents_75);
        all_values.push_back(ComplexEvents_NoComplexEvents_75);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_150;
          set_field(noComplexEventDates_1_1_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 14, 37, 8, 3, 2004)}, ComplexEventDates_NoComplexEventDates_150);
          set_field(noComplexEventDates_1_1_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 50, 39, 23, 5, 2013)}, ComplexEventDates_NoComplexEventDates_150);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_150);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_305;
            set_field(noComplexEventTimes_1_1_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 30, 28)}, ComplexEventTimes_NoComplexEventTimes_305);
            set_field(noComplexEventTimes_1_1_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 26, 13)}, ComplexEventTimes_NoComplexEventTimes_305);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_305);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_0);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_0);
        }
        noQuoteEntries_1_1_1.addGroup(noComplexEvents_1_1_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_81;
        set_field(noEvents_1_1_2_0, FIX::EventDate{"LOCALMKTDATE_215040601"}, EvntGrp_NoEvents_81);
        FIX::EventPx EventPx_81;
        EventPx_81.setString("17889968");
set_field(noEvents_1_1_2_0, EventPx_81, EvntGrp_NoEvents_81);
        set_field(noEvents_1_1_2_0, FIX::EventText{"STRING_832602322"}, EvntGrp_NoEvents_81);
        set_field(noEvents_1_1_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(18, 56, 7, 27, 8, 2001)}, EvntGrp_NoEvents_81);
        set_field(noEvents_1_1_2_0, FIX::EventType{14}, EvntGrp_NoEvents_81);
        all_values.push_back(EvntGrp_NoEvents_81);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_1_1_1.addGroup(noEvents_1_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_82;
        set_field(noEvents_1_1_2_1, FIX::EventDate{"LOCALMKTDATE_2121036043"}, EvntGrp_NoEvents_82);
        FIX::EventPx EventPx_82;
        EventPx_82.setString("12808849");
set_field(noEvents_1_1_2_1, EventPx_82, EvntGrp_NoEvents_82);
        set_field(noEvents_1_1_2_1, FIX::EventText{"STRING_1038235533"}, EvntGrp_NoEvents_82);
        set_field(noEvents_1_1_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(4, 24, 0, 3, 5, 2017)}, EvntGrp_NoEvents_82);
        set_field(noEvents_1_1_2_1, FIX::EventType{6}, EvntGrp_NoEvents_82);
        all_values.push_back(EvntGrp_NoEvents_82);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_1_1_1.addGroup(noEvents_1_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_1_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_83;
        set_field(noEvents_1_1_2_2, FIX::EventDate{"LOCALMKTDATE_93073662"}, EvntGrp_NoEvents_83);
        FIX::EventPx EventPx_83;
        EventPx_83.setString("17741414");
set_field(noEvents_1_1_2_2, EventPx_83, EvntGrp_NoEvents_83);
        set_field(noEvents_1_1_2_2, FIX::EventText{"STRING_21183627"}, EvntGrp_NoEvents_83);
        set_field(noEvents_1_1_2_2, FIX::EventTime{FIX::UTCTIMESTAMP(19, 9, 37, 13, 8, 2014)}, EvntGrp_NoEvents_83);
        set_field(noEvents_1_1_2_2, FIX::EventType{16}, EvntGrp_NoEvents_83);
        all_values.push_back(EvntGrp_NoEvents_83);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_1_1_1.addGroup(noEvents_1_1_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_73;
        set_field(noInstrumentParties_1_1_2_0, FIX::InstrumentPartyID{"STRING_869211097"}, InstrumentParties_NoInstrumentParties_73);
        set_field(noInstrumentParties_1_1_2_0, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_73);
        set_field(noInstrumentParties_1_1_2_0, FIX::InstrumentPartyRole{1343000417}, InstrumentParties_NoInstrumentParties_73);
        all_values.push_back(InstrumentParties_NoInstrumentParties_73);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150;
          set_field(noInstrumentPartySubIDs_1_1_0_3_0, FIX::InstrumentPartySubID{"STRING_2100080417"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150);
          set_field(noInstrumentPartySubIDs_1_1_0_3_0, FIX::InstrumentPartySubIDType{1679956812}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_150);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_0.addGroup(noInstrumentPartySubIDs_1_1_0_3_0);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_74;
        set_field(noInstrumentParties_1_1_2_1, FIX::InstrumentPartyID{"STRING_897750830"}, InstrumentParties_NoInstrumentParties_74);
        set_field(noInstrumentParties_1_1_2_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_74);
        set_field(noInstrumentParties_1_1_2_1, FIX::InstrumentPartyRole{1653509207}, InstrumentParties_NoInstrumentParties_74);
        all_values.push_back(InstrumentParties_NoInstrumentParties_74);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151;
          set_field(noInstrumentPartySubIDs_1_1_1_3_0, FIX::InstrumentPartySubID{"STRING_822424727"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151);
          set_field(noInstrumentPartySubIDs_1_1_1_3_0, FIX::InstrumentPartySubIDType{1677079328}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_151);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_1.addGroup(noInstrumentPartySubIDs_1_1_1_3_0);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_75;
        set_field(noInstrumentParties_1_1_2_2, FIX::InstrumentPartyID{"STRING_725419285"}, InstrumentParties_NoInstrumentParties_75);
        set_field(noInstrumentParties_1_1_2_2, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_75);
        set_field(noInstrumentParties_1_1_2_2, FIX::InstrumentPartyRole{1311134940}, InstrumentParties_NoInstrumentParties_75);
        all_values.push_back(InstrumentParties_NoInstrumentParties_75);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152;
          set_field(noInstrumentPartySubIDs_1_1_2_3_0, FIX::InstrumentPartySubID{"STRING_693800940"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152);
          set_field(noInstrumentPartySubIDs_1_1_2_3_0, FIX::InstrumentPartySubIDType{1555161281}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_152);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153;
          set_field(noInstrumentPartySubIDs_1_1_2_3_1, FIX::InstrumentPartySubID{"STRING_1003763110"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153);
          set_field(noInstrumentPartySubIDs_1_1_2_3_1, FIX::InstrumentPartySubIDType{786874602}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_153);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154;
          set_field(noInstrumentPartySubIDs_1_1_2_3_2, FIX::InstrumentPartySubID{"STRING_1181819076"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154);
          set_field(noInstrumentPartySubIDs_1_1_2_3_2, FIX::InstrumentPartySubIDType{1024946737}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_154);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_2);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_77;
        set_field(noSecurityAltID_1_1_2_0, FIX::SecurityAltID{"STRING_1592736584"}, SecAltIDGrp_NoSecurityAltID_77);
        set_field(noSecurityAltID_1_1_2_0, FIX::SecurityAltIDSource{"STRING_894437679"}, SecAltIDGrp_NoSecurityAltID_77);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_77);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_78;
        set_field(noSecurityAltID_1_1_2_1, FIX::SecurityAltID{"STRING_591703763"}, SecAltIDGrp_NoSecurityAltID_78);
        set_field(noSecurityAltID_1_1_2_1, FIX::SecurityAltIDSource{"STRING_86157297"}, SecAltIDGrp_NoSecurityAltID_78);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_78);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_79;
        set_field(noSecurityAltID_1_1_2_2, FIX::SecurityAltID{"STRING_1682040886"}, SecAltIDGrp_NoSecurityAltID_79);
        set_field(noSecurityAltID_1_1_2_2, FIX::SecurityAltIDSource{"STRING_1892759041"}, SecAltIDGrp_NoSecurityAltID_79);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_79);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_76;
      set_field(noQuoteEntries_1_1_1, FIX::SecurityXML{"XMLDATA_368574872"}, SecurityXML_76);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityXMLLen{1154762767}, SecurityXML_76);
      set_field(noQuoteEntries_1_1_1, FIX::SecurityXMLSchema{"STRING_614486491"}, SecurityXML_76);
      all_values.push_back(SecurityXML_76);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_2;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_4;
      FIX::BidForwardPoints BidForwardPoints_4;
      BidForwardPoints_4.setString("11846536");
set_field(noQuoteEntries_1_1_2, BidForwardPoints_4, QuotEntryGrp_NoQuoteEntries_4);
      FIX::BidForwardPoints2 BidForwardPoints2_4;
      BidForwardPoints2_4.setString("3502795");
set_field(noQuoteEntries_1_1_2, BidForwardPoints2_4, QuotEntryGrp_NoQuoteEntries_4);
      FIX::BidPx BidPx_4;
      BidPx_4.setString("11406567");
set_field(noQuoteEntries_1_1_2, BidPx_4, QuotEntryGrp_NoQuoteEntries_4);
      FIX::BidSize BidSize_4;
      BidSize_4.setString("11372504");
set_field(noQuoteEntries_1_1_2, BidSize_4, QuotEntryGrp_NoQuoteEntries_4);
      FIX::BidSpotRate BidSpotRate_4;
      BidSpotRate_4.setString("20302363");
set_field(noQuoteEntries_1_1_2, BidSpotRate_4, QuotEntryGrp_NoQuoteEntries_4);
      FIX::BidYield BidYield_4;
      BidYield_4.setString("75.970000");
set_field(noQuoteEntries_1_1_2, BidYield_4, QuotEntryGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_1_1_2, FIX::BookingType{1}, QuotEntryGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_1_1_2, FIX::Currency{"EUR"}, QuotEntryGrp_NoQuoteEntries_4);
      FIX::MidPx MidPx_4;
      MidPx_4.setString("17438643");
set_field(noQuoteEntries_1_1_2, MidPx_4, QuotEntryGrp_NoQuoteEntries_4);
      FIX::MidYield MidYield_4;
      MidYield_4.setString("75.870000");
set_field(noQuoteEntries_1_1_2, MidYield_4, QuotEntryGrp_NoQuoteEntries_4);
      FIX::OfferForwardPoints OfferForwardPoints_4;
      OfferForwardPoints_4.setString("6474954");
set_field(noQuoteEntries_1_1_2, OfferForwardPoints_4, QuotEntryGrp_NoQuoteEntries_4);
      FIX::OfferForwardPoints2 OfferForwardPoints2_4;
      OfferForwardPoints2_4.setString("3339878");
set_field(noQuoteEntries_1_1_2, OfferForwardPoints2_4, QuotEntryGrp_NoQuoteEntries_4);
      FIX::OfferPx OfferPx_4;
      OfferPx_4.setString("2295088");
set_field(noQuoteEntries_1_1_2, OfferPx_4, QuotEntryGrp_NoQuoteEntries_4);
      FIX::OfferSize OfferSize_4;
      OfferSize_4.setString("15493561");
set_field(noQuoteEntries_1_1_2, OfferSize_4, QuotEntryGrp_NoQuoteEntries_4);
      FIX::OfferSpotRate OfferSpotRate_4;
      OfferSpotRate_4.setString("10277888");
set_field(noQuoteEntries_1_1_2, OfferSpotRate_4, QuotEntryGrp_NoQuoteEntries_4);
      FIX::OfferYield OfferYield_4;
      OfferYield_4.setString("1.600000");
set_field(noQuoteEntries_1_1_2, OfferYield_4, QuotEntryGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_1_1_2, FIX::OrdType{'K'}, QuotEntryGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_1_1_2, FIX::OrderCapacity{'I'}, QuotEntryGrp_NoQuoteEntries_4);
      FIX::OrderQty2 OrderQty2_5;
      OrderQty2_5.setString("8190055");
set_field(noQuoteEntries_1_1_2, OrderQty2_5, QuotEntryGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_1_1_2, FIX::OrderRestrictions{"MULTIPLECHARVALUE_D"}, QuotEntryGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_1_1_2, FIX::QuoteEntryID{"STRING_1320352488"}, QuotEntryGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_1_1_2, FIX::SettlDate{"LOCALMKTDATE_264258525"}, QuotEntryGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_1_1_2, FIX::SettlDate2{"LOCALMKTDATE_177536428"}, QuotEntryGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_1_1_2, FIX::TradingSessionID{"STRING_6"}, QuotEntryGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_1_1_2, FIX::TradingSessionSubID{"STRING_2"}, QuotEntryGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_1_1_2, FIX::TransactTime{FIX::UTCTIMESTAMP(4, 14, 13, 11, 5, 2017)}, QuotEntryGrp_NoQuoteEntries_4);
      set_field(noQuoteEntries_1_1_2, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(19, 49, 24, 20, 1, 2005)}, QuotEntryGrp_NoQuoteEntries_4);
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_4);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_2_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_65;
        set_field(noLegs_1_2_2_0, FIX::EncodedLegIssuer{"DATA_1554524515"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::EncodedLegIssuerLen{1725486744}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::EncodedLegSecurityDesc{"DATA_1745219217"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::EncodedLegSecurityDescLen{1784033394}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegCFICode{"STRING_1127359293"}, InstrumentLeg_65);
        FIX::LegContractMultiplier LegContractMultiplier_65;
        LegContractMultiplier_65.setString("6255243");
set_field(noLegs_1_2_2_0, LegContractMultiplier_65, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegContractMultiplierUnit{1421219906}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_1532994953"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegCountryOfIssue{"COUNTRY_292704123"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_92741847"}, InstrumentLeg_65);
        FIX::LegCouponRate LegCouponRate_65;
        LegCouponRate_65.setString("37.020000");
set_field(noLegs_1_2_2_0, LegCouponRate_65, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegCreditRating{"STRING_1613056611"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegDatedDate{"LOCALMKTDATE_1377629214"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegExerciseStyle{707416194}, InstrumentLeg_65);
        FIX::LegFactor LegFactor_65;
        LegFactor_65.setString("7057237");
set_field(noLegs_1_2_2_0, LegFactor_65, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegFlowScheduleType{887477211}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegInstrRegistry{"STRING_1426406889"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1572580229"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegIssueDate{"LOCALMKTDATE_1011811698"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegIssuer{"STRING_1182567569"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegLocaleOfIssue{"STRING_642232550"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_129319305"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_2075978653"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegMaturityTime{"TZTIMEONLY_1742121219"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_65);
        FIX::LegOptionRatio LegOptionRatio_65;
        LegOptionRatio_65.setString("17433456");
set_field(noLegs_1_2_2_0, LegOptionRatio_65, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegPool{"STRING_83304499"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegPriceUnitOfMeasure{"STRING_215742193"}, InstrumentLeg_65);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_65;
        LegPriceUnitOfMeasureQty_65.setString("10070933");
set_field(noLegs_1_2_2_0, LegPriceUnitOfMeasureQty_65, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegProduct{1637829014}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegPutOrCall{1941228937}, InstrumentLeg_65);
        FIX::LegRatioQty LegRatioQty_65;
        LegRatioQty_65.setString("6048289");
set_field(noLegs_1_2_2_0, LegRatioQty_65, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1274378760"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegRepoCollateralSecurityType{"STRING_921104583"}, InstrumentLeg_65);
        FIX::LegRepurchaseRate LegRepurchaseRate_65;
        LegRepurchaseRate_65.setString("33.320000");
set_field(noLegs_1_2_2_0, LegRepurchaseRate_65, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegRepurchaseTerm{548115018}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegSecurityDesc{"STRING_306615888"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegSecurityExchange{"EXCHANGE_1523057456"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegSecurityID{"STRING_640856866"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegSecurityIDSource{"STRING_1122709590"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegSecuritySubType{"STRING_988630419"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegSecurityType{"STRING_997857238"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegSide{'2'}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_218775986"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_65);
        FIX::LegStrikePrice LegStrikePrice_65;
        LegStrikePrice_65.setString("11062531");
set_field(noLegs_1_2_2_0, LegStrikePrice_65, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegSymbol{"STRING_984196674"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegSymbolSfx{"STRING_99676449"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegTimeUnit{"STRING_2118064895"}, InstrumentLeg_65);
        set_field(noLegs_1_2_2_0, FIX::LegUnitOfMeasure{"STRING_19280595"}, InstrumentLeg_65);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_65;
        LegUnitOfMeasureQty_65.setString("7419089");
set_field(noLegs_1_2_2_0, LegUnitOfMeasureQty_65, InstrumentLeg_65);
        all_values.push_back(InstrumentLeg_65);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_133;
          set_field(noLegSecurityAltID_1_2_0_3_0, FIX::LegSecurityAltID{"STRING_2095259248"}, LegSecAltIDGrp_NoLegSecurityAltID_133);
          set_field(noLegSecurityAltID_1_2_0_3_0, FIX::LegSecurityAltIDSource{"STRING_336546570"}, LegSecAltIDGrp_NoLegSecurityAltID_133);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_133);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_2_2_0.addGroup(noLegSecurityAltID_1_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_134;
          set_field(noLegSecurityAltID_1_2_0_3_1, FIX::LegSecurityAltID{"STRING_1385135063"}, LegSecAltIDGrp_NoLegSecurityAltID_134);
          set_field(noLegSecurityAltID_1_2_0_3_1, FIX::LegSecurityAltIDSource{"STRING_1691121286"}, LegSecAltIDGrp_NoLegSecurityAltID_134);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_134);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_2_2_0.addGroup(noLegSecurityAltID_1_2_0_3_1);
        }
        noQuoteEntries_1_1_2.addGroup(noLegs_1_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_2_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_66;
        set_field(noLegs_1_2_2_1, FIX::EncodedLegIssuer{"DATA_419851069"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::EncodedLegIssuerLen{1600877256}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::EncodedLegSecurityDesc{"DATA_550731032"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::EncodedLegSecurityDescLen{2057680083}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegCFICode{"STRING_1394622546"}, InstrumentLeg_66);
        FIX::LegContractMultiplier LegContractMultiplier_66;
        LegContractMultiplier_66.setString("11555599");
set_field(noLegs_1_2_2_1, LegContractMultiplier_66, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegContractMultiplierUnit{1184575195}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegContractSettlMonth{"MONTHYEAR_168243481"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegCountryOfIssue{"COUNTRY_238429680"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1732690213"}, InstrumentLeg_66);
        FIX::LegCouponRate LegCouponRate_66;
        LegCouponRate_66.setString("93.690000");
set_field(noLegs_1_2_2_1, LegCouponRate_66, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegCreditRating{"STRING_1761487136"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegDatedDate{"LOCALMKTDATE_602633908"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegExerciseStyle{1223920670}, InstrumentLeg_66);
        FIX::LegFactor LegFactor_66;
        LegFactor_66.setString("15664250");
set_field(noLegs_1_2_2_1, LegFactor_66, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegFlowScheduleType{821409894}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegInstrRegistry{"STRING_781710455"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_93521251"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegIssueDate{"LOCALMKTDATE_1927663091"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegIssuer{"STRING_1765907129"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegLocaleOfIssue{"STRING_193197700"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegMaturityDate{"LOCALMKTDATE_1898244338"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1785187724"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegMaturityTime{"TZTIMEONLY_935106699"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_66);
        FIX::LegOptionRatio LegOptionRatio_66;
        LegOptionRatio_66.setString("17329633");
set_field(noLegs_1_2_2_1, LegOptionRatio_66, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegPool{"STRING_1271653269"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegPriceUnitOfMeasure{"STRING_1235796306"}, InstrumentLeg_66);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_66;
        LegPriceUnitOfMeasureQty_66.setString("12766009");
set_field(noLegs_1_2_2_1, LegPriceUnitOfMeasureQty_66, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegProduct{1691504338}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegPutOrCall{689189915}, InstrumentLeg_66);
        FIX::LegRatioQty LegRatioQty_66;
        LegRatioQty_66.setString("18273319");
set_field(noLegs_1_2_2_1, LegRatioQty_66, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1601700773"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegRepoCollateralSecurityType{"STRING_2083812461"}, InstrumentLeg_66);
        FIX::LegRepurchaseRate LegRepurchaseRate_66;
        LegRepurchaseRate_66.setString("83.430000");
set_field(noLegs_1_2_2_1, LegRepurchaseRate_66, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegRepurchaseTerm{638792320}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegSecurityDesc{"STRING_104572294"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegSecurityExchange{"EXCHANGE_1073838024"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegSecurityID{"STRING_223998885"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegSecurityIDSource{"STRING_579431663"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegSecuritySubType{"STRING_687841512"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegSecurityType{"STRING_450062317"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegSide{'2'}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegStateOrProvinceOfIssue{"STRING_1290475420"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_66);
        FIX::LegStrikePrice LegStrikePrice_66;
        LegStrikePrice_66.setString("21118853");
set_field(noLegs_1_2_2_1, LegStrikePrice_66, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegSymbol{"STRING_308209794"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegSymbolSfx{"STRING_1689463256"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegTimeUnit{"STRING_1892064757"}, InstrumentLeg_66);
        set_field(noLegs_1_2_2_1, FIX::LegUnitOfMeasure{"STRING_2074116923"}, InstrumentLeg_66);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_66;
        LegUnitOfMeasureQty_66.setString("18826609");
set_field(noLegs_1_2_2_1, LegUnitOfMeasureQty_66, InstrumentLeg_66);
        all_values.push_back(InstrumentLeg_66);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_135;
          set_field(noLegSecurityAltID_1_2_1_3_0, FIX::LegSecurityAltID{"STRING_1711820999"}, LegSecAltIDGrp_NoLegSecurityAltID_135);
          set_field(noLegSecurityAltID_1_2_1_3_0, FIX::LegSecurityAltIDSource{"STRING_670284007"}, LegSecAltIDGrp_NoLegSecurityAltID_135);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_135);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_2_2_1.addGroup(noLegSecurityAltID_1_2_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_136;
          set_field(noLegSecurityAltID_1_2_1_3_1, FIX::LegSecurityAltID{"STRING_1493486691"}, LegSecAltIDGrp_NoLegSecurityAltID_136);
          set_field(noLegSecurityAltID_1_2_1_3_1, FIX::LegSecurityAltIDSource{"STRING_1297300676"}, LegSecAltIDGrp_NoLegSecurityAltID_136);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_136);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_2_2_1.addGroup(noLegSecurityAltID_1_2_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_1_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_137;
          set_field(noLegSecurityAltID_1_2_1_3_2, FIX::LegSecurityAltID{"STRING_1941937276"}, LegSecAltIDGrp_NoLegSecurityAltID_137);
          set_field(noLegSecurityAltID_1_2_1_3_2, FIX::LegSecurityAltIDSource{"STRING_581799350"}, LegSecAltIDGrp_NoLegSecurityAltID_137);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_137);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_1_2_2_1.addGroup(noLegSecurityAltID_1_2_1_3_2);
        }
        noQuoteEntries_1_1_2.addGroup(noLegs_1_2_2_1);
      }
      // Instrument
      multiset<string> Instrument_39;
      FIX::AttachmentPoint AttachmentPoint_39;
      AttachmentPoint_39.setString("79.910000");
set_field(noQuoteEntries_1_1_2, AttachmentPoint_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::CFICode{"STRING_1485957966"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::CPProgram{2}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::CPRegType{"STRING_106266339"}, Instrument_39);
      FIX::CapPrice CapPrice_39;
      CapPrice_39.setString("9401750");
set_field(noQuoteEntries_1_1_2, CapPrice_39, Instrument_39);
      FIX::ContractMultiplier ContractMultiplier_39;
      ContractMultiplier_39.setString("12073180");
set_field(noQuoteEntries_1_1_2, ContractMultiplier_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::ContractMultiplierUnit{2}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::ContractSettlMonth{"MONTHYEAR_1578967411"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::CountryOfIssue{"COUNTRY_1311890372"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::CouponPaymentDate{"LOCALMKTDATE_2015512706"}, Instrument_39);
      FIX::CouponRate CouponRate_39;
      CouponRate_39.setString("62.960000");
set_field(noQuoteEntries_1_1_2, CouponRate_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::CreditRating{"STRING_1891322035"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::DatedDate{"LOCALMKTDATE_555870571"}, Instrument_39);
      FIX::DetachmentPoint DetachmentPoint_39;
      DetachmentPoint_39.setString("49.650000");
set_field(noQuoteEntries_1_1_2, DetachmentPoint_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::EncodedIssuer{"DATA_1920839009"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::EncodedIssuerLen{1846345991}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::EncodedSecurityDesc{"DATA_1779527952"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::EncodedSecurityDescLen{1369297366}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::ExerciseStyle{2}, Instrument_39);
      FIX::Factor Factor_39;
      Factor_39.setString("20877377");
set_field(noQuoteEntries_1_1_2, Factor_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::FlexProductEligibilityIndicator{true}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::FlexibleIndicator{false}, Instrument_39);
      FIX::FloorPrice FloorPrice_39;
      FloorPrice_39.setString("20143710");
set_field(noQuoteEntries_1_1_2, FloorPrice_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::FlowScheduleType{2}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::InstrRegistry{"STRING_1050670567"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::InstrmtAssignmentMethod{'1'}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::InterestAccrualDate{"LOCALMKTDATE_1316738289"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::IssueDate{"LOCALMKTDATE_396673611"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::Issuer{"STRING_728525401"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::ListMethod{1}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::LocaleOfIssue{"STRING_978472961"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::MaturityDate{"LOCALMKTDATE_1154943393"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::MaturityMonthYear{"MONTHYEAR_449666235"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::MaturityTime{"TZTIMEONLY_101978578"}, Instrument_39);
      FIX::MinPriceIncrement MinPriceIncrement_39;
      MinPriceIncrement_39.setString("12612097");
set_field(noQuoteEntries_1_1_2, MinPriceIncrement_39, Instrument_39);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_39;
      MinPriceIncrementAmount_39.setString("13898413");
set_field(noQuoteEntries_1_1_2, MinPriceIncrementAmount_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::NTPositionLimit{1309296656}, Instrument_39);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_39;
      NotionalPercentageOutstanding_39.setString("7.660000");
set_field(noQuoteEntries_1_1_2, NotionalPercentageOutstanding_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::OptAttribute{'8'}, Instrument_39);
      FIX::OptPayoutAmount OptPayoutAmount_39;
      OptPayoutAmount_39.setString("4737033");
set_field(noQuoteEntries_1_1_2, OptPayoutAmount_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::OptPayoutType{1}, Instrument_39);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_39;
      OriginalNotionalPercentageOutstanding_39.setString("77.370000");
set_field(noQuoteEntries_1_1_2, OriginalNotionalPercentageOutstanding_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::Pool{"STRING_217541767"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::PositionLimit{479300396}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::PriceUnitOfMeasure{"STRING_2138380776"}, Instrument_39);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_39;
      PriceUnitOfMeasureQty_39.setString("1781627");
set_field(noQuoteEntries_1_1_2, PriceUnitOfMeasureQty_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::Product{7}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::ProductComplex{"STRING_1360194494"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::PutOrCall{1}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::RedemptionDate{"LOCALMKTDATE_154651106"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::RepoCollateralSecurityType{"STRING_123987820"}, Instrument_39);
      FIX::RepurchaseRate RepurchaseRate_39;
      RepurchaseRate_39.setString("55.170000");
set_field(noQuoteEntries_1_1_2, RepurchaseRate_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::RepurchaseTerm{21538479}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::RestructuringType{"STRING_MM"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::SecurityDesc{"STRING_299942436"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::SecurityExchange{"EXCHANGE_1600246852"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::SecurityGroup{"STRING_2087180391"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::SecurityID{"STRING_696616047"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::SecurityIDSource{"STRING_5"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::SecurityStatus{"STRING_1"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::SecuritySubType{"STRING_1675089008"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::SecurityType{"STRING_FXSWAP"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::Seniority{"STRING_SD"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::SettlMethod{'C'}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::SettleOnOpenFlag{"STRING_449958083"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::StateOrProvinceOfIssue{"STRING_742912573"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::StrikeCurrency{"CAN"}, Instrument_39);
      FIX::StrikeMultiplier StrikeMultiplier_39;
      StrikeMultiplier_39.setString("15642376");
set_field(noQuoteEntries_1_1_2, StrikeMultiplier_39, Instrument_39);
      FIX::StrikePrice StrikePrice_39;
      StrikePrice_39.setString("14125839");
set_field(noQuoteEntries_1_1_2, StrikePrice_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::StrikePriceBoundaryMethod{5}, Instrument_39);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_39;
      StrikePriceBoundaryPrecision_39.setString("53.990000");
set_field(noQuoteEntries_1_1_2, StrikePriceBoundaryPrecision_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::StrikePriceDeterminationMethod{2}, Instrument_39);
      FIX::StrikeValue StrikeValue_39;
      StrikeValue_39.setString("9080890");
set_field(noQuoteEntries_1_1_2, StrikeValue_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::Symbol{"STRING_475914454"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::SymbolSfx{"STRING_WI"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::TimeUnit{"STRING_H"}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::UnitOfMeasure{"STRING_t"}, Instrument_39);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_39;
      UnitOfMeasureQty_39.setString("9276785");
set_field(noQuoteEntries_1_1_2, UnitOfMeasureQty_39, Instrument_39);
      set_field(noQuoteEntries_1_1_2, FIX::ValuationMethod{"STRING_CDS"}, Instrument_39);
      all_values.push_back(Instrument_39);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_76;
        set_field(noComplexEvents_1_2_2_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_76);
        FIX::ComplexEventPrice ComplexEventPrice_76;
        ComplexEventPrice_76.setString("8665010");
set_field(noComplexEvents_1_2_2_0, ComplexEventPrice_76, ComplexEvents_NoComplexEvents_76);
        set_field(noComplexEvents_1_2_2_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_76);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_76;
        ComplexEventPriceBoundaryPrecision_76.setString("28.650000");
set_field(noComplexEvents_1_2_2_0, ComplexEventPriceBoundaryPrecision_76, ComplexEvents_NoComplexEvents_76);
        set_field(noComplexEvents_1_2_2_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_76);
        set_field(noComplexEvents_1_2_2_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_76);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_76;
        ComplexOptPayoutAmount_76.setString("11735089");
set_field(noComplexEvents_1_2_2_0, ComplexOptPayoutAmount_76, ComplexEvents_NoComplexEvents_76);
        all_values.push_back(ComplexEvents_NoComplexEvents_76);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_151;
          set_field(noComplexEventDates_1_2_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 57, 7, 11, 1, 2012)}, ComplexEventDates_NoComplexEventDates_151);
          set_field(noComplexEventDates_1_2_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 46, 52, 20, 7, 2006)}, ComplexEventDates_NoComplexEventDates_151);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_151);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_306;
            set_field(noComplexEventTimes_1_2_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 8, 34)}, ComplexEventTimes_NoComplexEventTimes_306);
            set_field(noComplexEventTimes_1_2_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 2, 18)}, ComplexEventTimes_NoComplexEventTimes_306);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_306);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_0_3_0.addGroup(noComplexEventTimes_1_2_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_307;
            set_field(noComplexEventTimes_1_2_0_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 28, 33)}, ComplexEventTimes_NoComplexEventTimes_307);
            set_field(noComplexEventTimes_1_2_0_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 26, 32)}, ComplexEventTimes_NoComplexEventTimes_307);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_307);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_0_3_0.addGroup(noComplexEventTimes_1_2_0_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_308;
            set_field(noComplexEventTimes_1_2_0_0_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 21, 12)}, ComplexEventTimes_NoComplexEventTimes_308);
            set_field(noComplexEventTimes_1_2_0_0_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 25, 48)}, ComplexEventTimes_NoComplexEventTimes_308);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_308);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_0_3_0.addGroup(noComplexEventTimes_1_2_0_0_4_2);
          }
          noComplexEvents_1_2_2_0.addGroup(noComplexEventDates_1_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_152;
          set_field(noComplexEventDates_1_2_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 33, 42, 5, 4, 2007)}, ComplexEventDates_NoComplexEventDates_152);
          set_field(noComplexEventDates_1_2_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 9, 8, 21, 6, 2003)}, ComplexEventDates_NoComplexEventDates_152);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_152);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_309;
            set_field(noComplexEventTimes_1_2_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 56, 11)}, ComplexEventTimes_NoComplexEventTimes_309);
            set_field(noComplexEventTimes_1_2_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 29, 23)}, ComplexEventTimes_NoComplexEventTimes_309);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_309);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_0_3_1.addGroup(noComplexEventTimes_1_2_0_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_310;
            set_field(noComplexEventTimes_1_2_0_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 36, 34)}, ComplexEventTimes_NoComplexEventTimes_310);
            set_field(noComplexEventTimes_1_2_0_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 51, 23)}, ComplexEventTimes_NoComplexEventTimes_310);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_310);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_0_3_1.addGroup(noComplexEventTimes_1_2_0_1_4_1);
          }
          noComplexEvents_1_2_2_0.addGroup(noComplexEventDates_1_2_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_153;
          set_field(noComplexEventDates_1_2_0_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 56, 50, 4, 12, 2003)}, ComplexEventDates_NoComplexEventDates_153);
          set_field(noComplexEventDates_1_2_0_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 52, 38, 27, 3, 2015)}, ComplexEventDates_NoComplexEventDates_153);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_153);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_311;
            set_field(noComplexEventTimes_1_2_0_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 27, 55)}, ComplexEventTimes_NoComplexEventTimes_311);
            set_field(noComplexEventTimes_1_2_0_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 17, 44)}, ComplexEventTimes_NoComplexEventTimes_311);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_311);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_0_3_2.addGroup(noComplexEventTimes_1_2_0_2_4_0);
          }
          noComplexEvents_1_2_2_0.addGroup(noComplexEventDates_1_2_0_3_2);
        }
        noQuoteEntries_1_1_2.addGroup(noComplexEvents_1_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_2_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_77;
        set_field(noComplexEvents_1_2_2_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_77);
        FIX::ComplexEventPrice ComplexEventPrice_77;
        ComplexEventPrice_77.setString("12453015");
set_field(noComplexEvents_1_2_2_1, ComplexEventPrice_77, ComplexEvents_NoComplexEvents_77);
        set_field(noComplexEvents_1_2_2_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_77);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_77;
        ComplexEventPriceBoundaryPrecision_77.setString("43.950000");
set_field(noComplexEvents_1_2_2_1, ComplexEventPriceBoundaryPrecision_77, ComplexEvents_NoComplexEvents_77);
        set_field(noComplexEvents_1_2_2_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_77);
        set_field(noComplexEvents_1_2_2_1, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_77);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_77;
        ComplexOptPayoutAmount_77.setString("4484533");
set_field(noComplexEvents_1_2_2_1, ComplexOptPayoutAmount_77, ComplexEvents_NoComplexEvents_77);
        all_values.push_back(ComplexEvents_NoComplexEvents_77);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_154;
          set_field(noComplexEventDates_1_2_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 44, 3, 17, 9, 2004)}, ComplexEventDates_NoComplexEventDates_154);
          set_field(noComplexEventDates_1_2_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 38, 49, 25, 5, 2017)}, ComplexEventDates_NoComplexEventDates_154);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_154);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_312;
            set_field(noComplexEventTimes_1_2_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 16, 24)}, ComplexEventTimes_NoComplexEventTimes_312);
            set_field(noComplexEventTimes_1_2_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 41, 51)}, ComplexEventTimes_NoComplexEventTimes_312);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_312);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_0.addGroup(noComplexEventTimes_1_2_1_0_4_0);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_155;
          set_field(noComplexEventDates_1_2_1_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 56, 41, 11, 10, 2004)}, ComplexEventDates_NoComplexEventDates_155);
          set_field(noComplexEventDates_1_2_1_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 33, 35, 1, 3, 2011)}, ComplexEventDates_NoComplexEventDates_155);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_155);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_313;
            set_field(noComplexEventTimes_1_2_1_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 42, 6)}, ComplexEventTimes_NoComplexEventTimes_313);
            set_field(noComplexEventTimes_1_2_1_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 21, 16)}, ComplexEventTimes_NoComplexEventTimes_313);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_313);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_1.addGroup(noComplexEventTimes_1_2_1_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_314;
            set_field(noComplexEventTimes_1_2_1_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 32, 19)}, ComplexEventTimes_NoComplexEventTimes_314);
            set_field(noComplexEventTimes_1_2_1_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 52, 5)}, ComplexEventTimes_NoComplexEventTimes_314);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_314);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_1.addGroup(noComplexEventTimes_1_2_1_1_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_315;
            set_field(noComplexEventTimes_1_2_1_1_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 1, 32)}, ComplexEventTimes_NoComplexEventTimes_315);
            set_field(noComplexEventTimes_1_2_1_1_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 4, 16)}, ComplexEventTimes_NoComplexEventTimes_315);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_315);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_1.addGroup(noComplexEventTimes_1_2_1_1_4_2);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_156;
          set_field(noComplexEventDates_1_2_1_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 44, 43, 3, 8, 2010)}, ComplexEventDates_NoComplexEventDates_156);
          set_field(noComplexEventDates_1_2_1_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 20, 59, 24, 12, 2006)}, ComplexEventDates_NoComplexEventDates_156);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_156);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_316;
            set_field(noComplexEventTimes_1_2_1_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 32, 53)}, ComplexEventTimes_NoComplexEventTimes_316);
            set_field(noComplexEventTimes_1_2_1_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 45, 39)}, ComplexEventTimes_NoComplexEventTimes_316);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_316);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_2.addGroup(noComplexEventTimes_1_2_1_2_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_317;
            set_field(noComplexEventTimes_1_2_1_2_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 32, 57)}, ComplexEventTimes_NoComplexEventTimes_317);
            set_field(noComplexEventTimes_1_2_1_2_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 1, 25)}, ComplexEventTimes_NoComplexEventTimes_317);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_317);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_2.addGroup(noComplexEventTimes_1_2_1_2_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_2_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_318;
            set_field(noComplexEventTimes_1_2_1_2_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 9, 28)}, ComplexEventTimes_NoComplexEventTimes_318);
            set_field(noComplexEventTimes_1_2_1_2_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 6, 59)}, ComplexEventTimes_NoComplexEventTimes_318);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_318);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_2.addGroup(noComplexEventTimes_1_2_1_2_4_2);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_2);
        }
        noQuoteEntries_1_1_2.addGroup(noComplexEvents_1_2_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_2_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_78;
        set_field(noComplexEvents_1_2_2_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_78);
        FIX::ComplexEventPrice ComplexEventPrice_78;
        ComplexEventPrice_78.setString("7553243");
set_field(noComplexEvents_1_2_2_2, ComplexEventPrice_78, ComplexEvents_NoComplexEvents_78);
        set_field(noComplexEvents_1_2_2_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_78);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_78;
        ComplexEventPriceBoundaryPrecision_78.setString("23.100000");
set_field(noComplexEvents_1_2_2_2, ComplexEventPriceBoundaryPrecision_78, ComplexEvents_NoComplexEvents_78);
        set_field(noComplexEvents_1_2_2_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_78);
        set_field(noComplexEvents_1_2_2_2, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_78);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_78;
        ComplexOptPayoutAmount_78.setString("3915211");
set_field(noComplexEvents_1_2_2_2, ComplexOptPayoutAmount_78, ComplexEvents_NoComplexEvents_78);
        all_values.push_back(ComplexEvents_NoComplexEvents_78);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_157;
          set_field(noComplexEventDates_1_2_2_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 33, 55, 4, 11, 2002)}, ComplexEventDates_NoComplexEventDates_157);
          set_field(noComplexEventDates_1_2_2_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 59, 33, 14, 3, 2017)}, ComplexEventDates_NoComplexEventDates_157);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_157);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_319;
            set_field(noComplexEventTimes_1_2_2_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 53, 39)}, ComplexEventTimes_NoComplexEventTimes_319);
            set_field(noComplexEventTimes_1_2_2_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 38, 47)}, ComplexEventTimes_NoComplexEventTimes_319);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_319);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_2_3_0.addGroup(noComplexEventTimes_1_2_2_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_320;
            set_field(noComplexEventTimes_1_2_2_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 37, 14)}, ComplexEventTimes_NoComplexEventTimes_320);
            set_field(noComplexEventTimes_1_2_2_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 4, 51)}, ComplexEventTimes_NoComplexEventTimes_320);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_320);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_1_2_2_3_0.addGroup(noComplexEventTimes_1_2_2_0_4_1);
          }
          noComplexEvents_1_2_2_2.addGroup(noComplexEventDates_1_2_2_3_0);
        }
        noQuoteEntries_1_1_2.addGroup(noComplexEvents_1_2_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_84;
        set_field(noEvents_1_2_2_0, FIX::EventDate{"LOCALMKTDATE_1418400867"}, EvntGrp_NoEvents_84);
        FIX::EventPx EventPx_84;
        EventPx_84.setString("13503865");
set_field(noEvents_1_2_2_0, EventPx_84, EvntGrp_NoEvents_84);
        set_field(noEvents_1_2_2_0, FIX::EventText{"STRING_702447633"}, EvntGrp_NoEvents_84);
        set_field(noEvents_1_2_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(10, 0, 7, 3, 4, 2017)}, EvntGrp_NoEvents_84);
        set_field(noEvents_1_2_2_0, FIX::EventType{15}, EvntGrp_NoEvents_84);
        all_values.push_back(EvntGrp_NoEvents_84);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_1_1_2.addGroup(noEvents_1_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_2_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_85;
        set_field(noEvents_1_2_2_1, FIX::EventDate{"LOCALMKTDATE_1928268317"}, EvntGrp_NoEvents_85);
        FIX::EventPx EventPx_85;
        EventPx_85.setString("14055010");
set_field(noEvents_1_2_2_1, EventPx_85, EvntGrp_NoEvents_85);
        set_field(noEvents_1_2_2_1, FIX::EventText{"STRING_905769218"}, EvntGrp_NoEvents_85);
        set_field(noEvents_1_2_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(2, 31, 0, 18, 11, 2006)}, EvntGrp_NoEvents_85);
        set_field(noEvents_1_2_2_1, FIX::EventType{11}, EvntGrp_NoEvents_85);
        all_values.push_back(EvntGrp_NoEvents_85);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_1_1_2.addGroup(noEvents_1_2_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_76;
        set_field(noInstrumentParties_1_2_2_0, FIX::InstrumentPartyID{"STRING_1186401575"}, InstrumentParties_NoInstrumentParties_76);
        set_field(noInstrumentParties_1_2_2_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_76);
        set_field(noInstrumentParties_1_2_2_0, FIX::InstrumentPartyRole{2007787477}, InstrumentParties_NoInstrumentParties_76);
        all_values.push_back(InstrumentParties_NoInstrumentParties_76);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155;
          set_field(noInstrumentPartySubIDs_1_2_0_3_0, FIX::InstrumentPartySubID{"STRING_1143664731"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155);
          set_field(noInstrumentPartySubIDs_1_2_0_3_0, FIX::InstrumentPartySubIDType{814974393}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_155);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_2_2_0.addGroup(noInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156;
          set_field(noInstrumentPartySubIDs_1_2_0_3_1, FIX::InstrumentPartySubID{"STRING_261473669"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156);
          set_field(noInstrumentPartySubIDs_1_2_0_3_1, FIX::InstrumentPartySubIDType{1945562437}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_156);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_2_2_0.addGroup(noInstrumentPartySubIDs_1_2_0_3_1);
        }
        noQuoteEntries_1_1_2.addGroup(noInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_2_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_77;
        set_field(noInstrumentParties_1_2_2_1, FIX::InstrumentPartyID{"STRING_85891612"}, InstrumentParties_NoInstrumentParties_77);
        set_field(noInstrumentParties_1_2_2_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_77);
        set_field(noInstrumentParties_1_2_2_1, FIX::InstrumentPartyRole{500526423}, InstrumentParties_NoInstrumentParties_77);
        all_values.push_back(InstrumentParties_NoInstrumentParties_77);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157;
          set_field(noInstrumentPartySubIDs_1_2_1_3_0, FIX::InstrumentPartySubID{"STRING_1610402839"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157);
          set_field(noInstrumentPartySubIDs_1_2_1_3_0, FIX::InstrumentPartySubIDType{63502255}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_157);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_2_2_1.addGroup(noInstrumentPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158;
          set_field(noInstrumentPartySubIDs_1_2_1_3_1, FIX::InstrumentPartySubID{"STRING_650613991"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158);
          set_field(noInstrumentPartySubIDs_1_2_1_3_1, FIX::InstrumentPartySubIDType{975988487}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_2_2_1.addGroup(noInstrumentPartySubIDs_1_2_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159;
          set_field(noInstrumentPartySubIDs_1_2_1_3_2, FIX::InstrumentPartySubID{"STRING_1086793366"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159);
          set_field(noInstrumentPartySubIDs_1_2_1_3_2, FIX::InstrumentPartySubIDType{836043312}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_1_2_2_1.addGroup(noInstrumentPartySubIDs_1_2_1_3_2);
        }
        noQuoteEntries_1_1_2.addGroup(noInstrumentParties_1_2_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_80;
        set_field(noSecurityAltID_1_2_2_0, FIX::SecurityAltID{"STRING_867578035"}, SecAltIDGrp_NoSecurityAltID_80);
        set_field(noSecurityAltID_1_2_2_0, FIX::SecurityAltIDSource{"STRING_94060700"}, SecAltIDGrp_NoSecurityAltID_80);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_80);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_1_1_2.addGroup(noSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_2_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_81;
        set_field(noSecurityAltID_1_2_2_1, FIX::SecurityAltID{"STRING_886783571"}, SecAltIDGrp_NoSecurityAltID_81);
        set_field(noSecurityAltID_1_2_2_1, FIX::SecurityAltIDSource{"STRING_1150588756"}, SecAltIDGrp_NoSecurityAltID_81);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_81);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_1_1_2.addGroup(noSecurityAltID_1_2_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_2_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_82;
        set_field(noSecurityAltID_1_2_2_2, FIX::SecurityAltID{"STRING_86654246"}, SecAltIDGrp_NoSecurityAltID_82);
        set_field(noSecurityAltID_1_2_2_2, FIX::SecurityAltIDSource{"STRING_190339474"}, SecAltIDGrp_NoSecurityAltID_82);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_82);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_1_1_2.addGroup(noSecurityAltID_1_2_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_78;
      set_field(noQuoteEntries_1_1_2, FIX::SecurityXML{"XMLDATA_1135435629"}, SecurityXML_78);
      set_field(noQuoteEntries_1_1_2, FIX::SecurityXMLLen{567536848}, SecurityXML_78);
      set_field(noQuoteEntries_1_1_2, FIX::SecurityXMLSchema{"STRING_1923940472"}, SecurityXML_78);
      all_values.push_back(SecurityXML_78);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_2);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_57;
    set_field(noQuoteSets_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1343397699"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::EncodedUnderlyingIssuerLen{1352197458}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1221094907"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::EncodedUnderlyingSecurityDescLen{382315627}, UnderlyingInstrument_57);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_57;
    UnderlyingAdjustedQuantity_57.setString("15519764");
set_field(noQuoteSets_0_1, UnderlyingAdjustedQuantity_57, UnderlyingInstrument_57);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_57;
    UnderlyingAllocationPercent_57.setString("87.360000");
set_field(noQuoteSets_0_1, UnderlyingAllocationPercent_57, UnderlyingInstrument_57);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_57;
    UnderlyingAttachmentPoint_57.setString("88.050000");
set_field(noQuoteSets_0_1, UnderlyingAttachmentPoint_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCFICode{"STRING_548157561"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCPProgram{"STRING_1896373129"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCPRegType{"STRING_503372475"}, UnderlyingInstrument_57);
    FIX::UnderlyingCapValue UnderlyingCapValue_57;
    UnderlyingCapValue_57.setString("3462363");
set_field(noQuoteSets_0_1, UnderlyingCapValue_57, UnderlyingInstrument_57);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_57;
    UnderlyingCashAmount_57.setString("19822647");
set_field(noQuoteSets_0_1, UnderlyingCashAmount_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_57);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_57;
    UnderlyingContractMultiplier_57.setString("8467627");
set_field(noQuoteSets_0_1, UnderlyingContractMultiplier_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingContractMultiplierUnit{404021457}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1578151880"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_910265029"}, UnderlyingInstrument_57);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_57;
    UnderlyingCouponRate_57.setString("54.480000");
set_field(noQuoteSets_0_1, UnderlyingCouponRate_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCreditRating{"STRING_406656719"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_57);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_57;
    UnderlyingCurrentValue_57.setString("3876710");
set_field(noQuoteSets_0_1, UnderlyingCurrentValue_57, UnderlyingInstrument_57);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_57;
    UnderlyingDetachmentPoint_57.setString("27.820000");
set_field(noQuoteSets_0_1, UnderlyingDetachmentPoint_57, UnderlyingInstrument_57);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_57;
    UnderlyingDirtyPrice_57.setString("19847394");
set_field(noQuoteSets_0_1, UnderlyingDirtyPrice_57, UnderlyingInstrument_57);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_57;
    UnderlyingEndPrice_57.setString("12744546");
set_field(noQuoteSets_0_1, UnderlyingEndPrice_57, UnderlyingInstrument_57);
    FIX::UnderlyingEndValue UnderlyingEndValue_57;
    UnderlyingEndValue_57.setString("18677415");
set_field(noQuoteSets_0_1, UnderlyingEndValue_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingExerciseStyle{2071393706}, UnderlyingInstrument_57);
    FIX::UnderlyingFXRate UnderlyingFXRate_57;
    UnderlyingFXRate_57.setString("14647941");
set_field(noQuoteSets_0_1, UnderlyingFXRate_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_57);
    FIX::UnderlyingFactor UnderlyingFactor_57;
    UnderlyingFactor_57.setString("4914469");
set_field(noQuoteSets_0_1, UnderlyingFactor_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingFlowScheduleType{1241250942}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingInstrRegistry{"STRING_51607571"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1843644365"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingIssuer{"STRING_314862201"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_433923198"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1248137195"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1396260937"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_675822004"}, UnderlyingInstrument_57);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_57;
    UnderlyingNotionalPercentageOutstanding_57.setString("47.570000");
set_field(noQuoteSets_0_1, UnderlyingNotionalPercentageOutstanding_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_57);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_57;
    UnderlyingOriginalNotionalPercentageOutstanding_57.setString("44.790000");
set_field(noQuoteSets_0_1, UnderlyingOriginalNotionalPercentageOutstanding_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2142531108"}, UnderlyingInstrument_57);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_57;
    UnderlyingPriceUnitOfMeasureQty_57.setString("9799315");
set_field(noQuoteSets_0_1, UnderlyingPriceUnitOfMeasureQty_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingProduct{1146943519}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingPutOrCall{841810234}, UnderlyingInstrument_57);
    FIX::UnderlyingPx UnderlyingPx_57;
    UnderlyingPx_57.setString("13839529");
set_field(noQuoteSets_0_1, UnderlyingPx_57, UnderlyingInstrument_57);
    FIX::UnderlyingQty UnderlyingQty_57;
    UnderlyingQty_57.setString("5776117");
set_field(noQuoteSets_0_1, UnderlyingQty_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1752075263"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_291104770"}, UnderlyingInstrument_57);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_57;
    UnderlyingRepurchaseRate_57.setString("84.700000");
set_field(noQuoteSets_0_1, UnderlyingRepurchaseRate_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingRepurchaseTerm{1601650010}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingRestructuringType{"STRING_34299883"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSecurityDesc{"STRING_1371939542"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_171319144"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSecurityID{"STRING_2019039343"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSecurityIDSource{"STRING_498910537"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSecuritySubType{"STRING_2039060683"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSecurityType{"STRING_1942949402"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSeniority{"STRING_1963704655"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSettlMethod{"STRING_747270555"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_57);
    FIX::UnderlyingStartValue UnderlyingStartValue_57;
    UnderlyingStartValue_57.setString("10574719");
set_field(noQuoteSets_0_1, UnderlyingStartValue_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_798878127"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_57);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_57;
    UnderlyingStrikePrice_57.setString("12328013");
set_field(noQuoteSets_0_1, UnderlyingStrikePrice_57, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSymbol{"STRING_1231210574"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingSymbolSfx{"STRING_621111439"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingTimeUnit{"STRING_1908623329"}, UnderlyingInstrument_57);
    set_field(noQuoteSets_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_880021683"}, UnderlyingInstrument_57);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_57;
    UnderlyingUnitOfMeasureQty_57.setString("17662618");
set_field(noQuoteSets_0_1, UnderlyingUnitOfMeasureQty_57, UnderlyingInstrument_57);
    all_values.push_back(UnderlyingInstrument_57);
    all_compo_names.insert("...NoQuoteSets.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_119;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_875069143"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_119);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_598709722"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_119);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_119);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_113;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1716879377"}, UnderlyingStipulations_NoUnderlyingStips_113);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1982662692"}, UnderlyingStipulations_NoUnderlyingStips_113);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_113);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_114;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_517405783"}, UnderlyingStipulations_NoUnderlyingStips_114);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1321470992"}, UnderlyingStipulations_NoUnderlyingStips_114);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_114);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_115;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_126283814"}, UnderlyingStipulations_NoUnderlyingStips_115);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_1501674254"}, UnderlyingStipulations_NoUnderlyingStips_115);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_115);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_124;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_160583697"}, UndlyInstrumentParties_NoUndlyInstrumentParties_124);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_124);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{946956498}, UndlyInstrumentParties_NoUndlyInstrumentParties_124);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_124);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1225040686"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{838533534}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_242);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_125;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1975088795"}, UndlyInstrumentParties_NoUndlyInstrumentParties_125);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_125);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1585804089}, UndlyInstrumentParties_NoUndlyInstrumentParties_125);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_125);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2098733642"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{237198568}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_243);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_97591186"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1323584144}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_244);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1469999894"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1328801760}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_245);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_126;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1944695583"}, UndlyInstrumentParties_NoUndlyInstrumentParties_126);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_126);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{61339795}, UndlyInstrumentParties_NoUndlyInstrumentParties_126);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_126);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_23990088"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{936408938}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_246);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_14699866"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{2111267768}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_247);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_505804667"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{1997362558}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_248);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noQuoteSets_0_1);
  }
  {
    FIX50SP2::MassQuote::NoQuoteSets noQuoteSets_0_2;
    // QuotSetGrp.NoQuoteSets
    multiset<string> QuotSetGrp_NoQuoteSets_2;
    set_field(noQuoteSets_0_2, FIX::LastFragment{false}, QuotSetGrp_NoQuoteSets_2);
    set_field(noQuoteSets_0_2, FIX::QuoteSetID{"STRING_1827275659"}, QuotSetGrp_NoQuoteSets_2);
    set_field(noQuoteSets_0_2, FIX::QuoteSetValidUntilTime{FIX::UTCTIMESTAMP(21, 25, 2, 2, 9, 2005)}, QuotSetGrp_NoQuoteSets_2);
    set_field(noQuoteSets_0_2, FIX::TotNoQuoteEntries{1786551344}, QuotSetGrp_NoQuoteSets_2);
    all_values.push_back(QuotSetGrp_NoQuoteSets_2);
    all_compo_names.insert("...NoQuoteSets");

    // QuotEntryGrp
    // Group QuotEntryGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_2_1_0;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_5;
      FIX::BidForwardPoints BidForwardPoints_5;
      BidForwardPoints_5.setString("21439746");
set_field(noQuoteEntries_2_1_0, BidForwardPoints_5, QuotEntryGrp_NoQuoteEntries_5);
      FIX::BidForwardPoints2 BidForwardPoints2_5;
      BidForwardPoints2_5.setString("6803293");
set_field(noQuoteEntries_2_1_0, BidForwardPoints2_5, QuotEntryGrp_NoQuoteEntries_5);
      FIX::BidPx BidPx_5;
      BidPx_5.setString("16792398");
set_field(noQuoteEntries_2_1_0, BidPx_5, QuotEntryGrp_NoQuoteEntries_5);
      FIX::BidSize BidSize_5;
      BidSize_5.setString("1110087");
set_field(noQuoteEntries_2_1_0, BidSize_5, QuotEntryGrp_NoQuoteEntries_5);
      FIX::BidSpotRate BidSpotRate_5;
      BidSpotRate_5.setString("6315793");
set_field(noQuoteEntries_2_1_0, BidSpotRate_5, QuotEntryGrp_NoQuoteEntries_5);
      FIX::BidYield BidYield_5;
      BidYield_5.setString("84.080000");
set_field(noQuoteEntries_2_1_0, BidYield_5, QuotEntryGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_0, FIX::BookingType{0}, QuotEntryGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_0, FIX::Currency{"GBP"}, QuotEntryGrp_NoQuoteEntries_5);
      FIX::MidPx MidPx_5;
      MidPx_5.setString("15374017");
set_field(noQuoteEntries_2_1_0, MidPx_5, QuotEntryGrp_NoQuoteEntries_5);
      FIX::MidYield MidYield_5;
      MidYield_5.setString("54.620000");
set_field(noQuoteEntries_2_1_0, MidYield_5, QuotEntryGrp_NoQuoteEntries_5);
      FIX::OfferForwardPoints OfferForwardPoints_5;
      OfferForwardPoints_5.setString("3226105");
set_field(noQuoteEntries_2_1_0, OfferForwardPoints_5, QuotEntryGrp_NoQuoteEntries_5);
      FIX::OfferForwardPoints2 OfferForwardPoints2_5;
      OfferForwardPoints2_5.setString("15987415");
set_field(noQuoteEntries_2_1_0, OfferForwardPoints2_5, QuotEntryGrp_NoQuoteEntries_5);
      FIX::OfferPx OfferPx_5;
      OfferPx_5.setString("11683656");
set_field(noQuoteEntries_2_1_0, OfferPx_5, QuotEntryGrp_NoQuoteEntries_5);
      FIX::OfferSize OfferSize_5;
      OfferSize_5.setString("3466006");
set_field(noQuoteEntries_2_1_0, OfferSize_5, QuotEntryGrp_NoQuoteEntries_5);
      FIX::OfferSpotRate OfferSpotRate_5;
      OfferSpotRate_5.setString("3876668");
set_field(noQuoteEntries_2_1_0, OfferSpotRate_5, QuotEntryGrp_NoQuoteEntries_5);
      FIX::OfferYield OfferYield_5;
      OfferYield_5.setString("54.730000");
set_field(noQuoteEntries_2_1_0, OfferYield_5, QuotEntryGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_0, FIX::OrdType{'E'}, QuotEntryGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_0, FIX::OrderCapacity{'W'}, QuotEntryGrp_NoQuoteEntries_5);
      FIX::OrderQty2 OrderQty2_6;
      OrderQty2_6.setString("10329443");
set_field(noQuoteEntries_2_1_0, OrderQty2_6, QuotEntryGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_4"}, QuotEntryGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_0, FIX::QuoteEntryID{"STRING_573263482"}, QuotEntryGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_0, FIX::SettlDate{"LOCALMKTDATE_1009107108"}, QuotEntryGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_0, FIX::SettlDate2{"LOCALMKTDATE_626955202"}, QuotEntryGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_0, FIX::TradingSessionID{"STRING_1"}, QuotEntryGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_0, FIX::TradingSessionSubID{"STRING_5"}, QuotEntryGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_0, FIX::TransactTime{FIX::UTCTIMESTAMP(0, 26, 56, 6, 6, 2011)}, QuotEntryGrp_NoQuoteEntries_5);
      set_field(noQuoteEntries_2_1_0, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(15, 8, 33, 8, 12, 2015)}, QuotEntryGrp_NoQuoteEntries_5);
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_5);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_2_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_67;
        set_field(noLegs_2_0_2_0, FIX::EncodedLegIssuer{"DATA_1552014021"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::EncodedLegIssuerLen{1239307001}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::EncodedLegSecurityDesc{"DATA_472014971"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::EncodedLegSecurityDescLen{572895980}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegCFICode{"STRING_1585907670"}, InstrumentLeg_67);
        FIX::LegContractMultiplier LegContractMultiplier_67;
        LegContractMultiplier_67.setString("8596817");
set_field(noLegs_2_0_2_0, LegContractMultiplier_67, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegContractMultiplierUnit{1755961453}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_1896292460"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegCountryOfIssue{"COUNTRY_1753153245"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_641422188"}, InstrumentLeg_67);
        FIX::LegCouponRate LegCouponRate_67;
        LegCouponRate_67.setString("35.050000");
set_field(noLegs_2_0_2_0, LegCouponRate_67, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegCreditRating{"STRING_178933080"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegDatedDate{"LOCALMKTDATE_1207625928"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegExerciseStyle{648899180}, InstrumentLeg_67);
        FIX::LegFactor LegFactor_67;
        LegFactor_67.setString("2083209");
set_field(noLegs_2_0_2_0, LegFactor_67, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegFlowScheduleType{1491220992}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegInstrRegistry{"STRING_1963638526"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1035854476"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegIssueDate{"LOCALMKTDATE_1868251806"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegIssuer{"STRING_1127385187"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegLocaleOfIssue{"STRING_396233774"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_1777038811"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_402140619"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegMaturityTime{"TZTIMEONLY_388192454"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_67);
        FIX::LegOptionRatio LegOptionRatio_67;
        LegOptionRatio_67.setString("20329796");
set_field(noLegs_2_0_2_0, LegOptionRatio_67, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegPool{"STRING_187831014"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegPriceUnitOfMeasure{"STRING_223993348"}, InstrumentLeg_67);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_67;
        LegPriceUnitOfMeasureQty_67.setString("9062531");
set_field(noLegs_2_0_2_0, LegPriceUnitOfMeasureQty_67, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegProduct{1739845035}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegPutOrCall{1463300349}, InstrumentLeg_67);
        FIX::LegRatioQty LegRatioQty_67;
        LegRatioQty_67.setString("13782680");
set_field(noLegs_2_0_2_0, LegRatioQty_67, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_165257367"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegRepoCollateralSecurityType{"STRING_901724372"}, InstrumentLeg_67);
        FIX::LegRepurchaseRate LegRepurchaseRate_67;
        LegRepurchaseRate_67.setString("62.110000");
set_field(noLegs_2_0_2_0, LegRepurchaseRate_67, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegRepurchaseTerm{1921218820}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegSecurityDesc{"STRING_650533184"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegSecurityExchange{"EXCHANGE_1843619456"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegSecurityID{"STRING_415157361"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegSecurityIDSource{"STRING_1190916689"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegSecuritySubType{"STRING_2022552536"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegSecurityType{"STRING_2065686658"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegSide{'2'}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_1082694816"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_67);
        FIX::LegStrikePrice LegStrikePrice_67;
        LegStrikePrice_67.setString("4264321");
set_field(noLegs_2_0_2_0, LegStrikePrice_67, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegSymbol{"STRING_383257068"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegSymbolSfx{"STRING_1454947145"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegTimeUnit{"STRING_147200318"}, InstrumentLeg_67);
        set_field(noLegs_2_0_2_0, FIX::LegUnitOfMeasure{"STRING_1510642256"}, InstrumentLeg_67);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_67;
        LegUnitOfMeasureQty_67.setString("18511809");
set_field(noLegs_2_0_2_0, LegUnitOfMeasureQty_67, InstrumentLeg_67);
        all_values.push_back(InstrumentLeg_67);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_138;
          set_field(noLegSecurityAltID_2_0_0_3_0, FIX::LegSecurityAltID{"STRING_1912782875"}, LegSecAltIDGrp_NoLegSecurityAltID_138);
          set_field(noLegSecurityAltID_2_0_0_3_0, FIX::LegSecurityAltIDSource{"STRING_91889725"}, LegSecAltIDGrp_NoLegSecurityAltID_138);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_138);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_2_0_2_0.addGroup(noLegSecurityAltID_2_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_139;
          set_field(noLegSecurityAltID_2_0_0_3_1, FIX::LegSecurityAltID{"STRING_1231536059"}, LegSecAltIDGrp_NoLegSecurityAltID_139);
          set_field(noLegSecurityAltID_2_0_0_3_1, FIX::LegSecurityAltIDSource{"STRING_1798278882"}, LegSecAltIDGrp_NoLegSecurityAltID_139);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_139);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_2_0_2_0.addGroup(noLegSecurityAltID_2_0_0_3_1);
        }
        noQuoteEntries_2_1_0.addGroup(noLegs_2_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_2_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_68;
        set_field(noLegs_2_0_2_1, FIX::EncodedLegIssuer{"DATA_279720739"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::EncodedLegIssuerLen{1455529407}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::EncodedLegSecurityDesc{"DATA_557048348"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::EncodedLegSecurityDescLen{2019565775}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegCFICode{"STRING_771346109"}, InstrumentLeg_68);
        FIX::LegContractMultiplier LegContractMultiplier_68;
        LegContractMultiplier_68.setString("19353164");
set_field(noLegs_2_0_2_1, LegContractMultiplier_68, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegContractMultiplierUnit{37339494}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegContractSettlMonth{"MONTHYEAR_1673070481"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegCountryOfIssue{"COUNTRY_2025782643"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1958558315"}, InstrumentLeg_68);
        FIX::LegCouponRate LegCouponRate_68;
        LegCouponRate_68.setString("0.170000");
set_field(noLegs_2_0_2_1, LegCouponRate_68, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegCreditRating{"STRING_1721918452"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegCurrency{"USD"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegDatedDate{"LOCALMKTDATE_1596987340"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegExerciseStyle{144435038}, InstrumentLeg_68);
        FIX::LegFactor LegFactor_68;
        LegFactor_68.setString("15778084");
set_field(noLegs_2_0_2_1, LegFactor_68, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegFlowScheduleType{532198509}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegInstrRegistry{"STRING_711537228"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1996901123"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegIssueDate{"LOCALMKTDATE_958630669"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegIssuer{"STRING_1094794296"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegLocaleOfIssue{"STRING_1304364620"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegMaturityDate{"LOCALMKTDATE_1105830988"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegMaturityMonthYear{"MONTHYEAR_457952904"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegMaturityTime{"TZTIMEONLY_1008061891"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegOptAttribute{'8'}, InstrumentLeg_68);
        FIX::LegOptionRatio LegOptionRatio_68;
        LegOptionRatio_68.setString("2232521");
set_field(noLegs_2_0_2_1, LegOptionRatio_68, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegPool{"STRING_1099951616"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegPriceUnitOfMeasure{"STRING_2114122529"}, InstrumentLeg_68);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_68;
        LegPriceUnitOfMeasureQty_68.setString("20215310");
set_field(noLegs_2_0_2_1, LegPriceUnitOfMeasureQty_68, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegProduct{1379672356}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegPutOrCall{1422168288}, InstrumentLeg_68);
        FIX::LegRatioQty LegRatioQty_68;
        LegRatioQty_68.setString("4310957");
set_field(noLegs_2_0_2_1, LegRatioQty_68, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1251754483"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegRepoCollateralSecurityType{"STRING_46030749"}, InstrumentLeg_68);
        FIX::LegRepurchaseRate LegRepurchaseRate_68;
        LegRepurchaseRate_68.setString("84.980000");
set_field(noLegs_2_0_2_1, LegRepurchaseRate_68, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegRepurchaseTerm{1289093977}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegSecurityDesc{"STRING_1719101230"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegSecurityExchange{"EXCHANGE_97227494"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegSecurityID{"STRING_1100168644"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegSecurityIDSource{"STRING_1895221247"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegSecuritySubType{"STRING_1819145946"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegSecurityType{"STRING_1326400672"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegSide{'1'}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegStateOrProvinceOfIssue{"STRING_1268649638"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_68);
        FIX::LegStrikePrice LegStrikePrice_68;
        LegStrikePrice_68.setString("18008481");
set_field(noLegs_2_0_2_1, LegStrikePrice_68, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegSymbol{"STRING_34889290"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegSymbolSfx{"STRING_394516587"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegTimeUnit{"STRING_611995169"}, InstrumentLeg_68);
        set_field(noLegs_2_0_2_1, FIX::LegUnitOfMeasure{"STRING_1129683587"}, InstrumentLeg_68);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_68;
        LegUnitOfMeasureQty_68.setString("16988812");
set_field(noLegs_2_0_2_1, LegUnitOfMeasureQty_68, InstrumentLeg_68);
        all_values.push_back(InstrumentLeg_68);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_140;
          set_field(noLegSecurityAltID_2_0_1_3_0, FIX::LegSecurityAltID{"STRING_1587636491"}, LegSecAltIDGrp_NoLegSecurityAltID_140);
          set_field(noLegSecurityAltID_2_0_1_3_0, FIX::LegSecurityAltIDSource{"STRING_559459450"}, LegSecAltIDGrp_NoLegSecurityAltID_140);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_140);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_2_0_2_1.addGroup(noLegSecurityAltID_2_0_1_3_0);
        }
        noQuoteEntries_2_1_0.addGroup(noLegs_2_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_2_0_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_69;
        set_field(noLegs_2_0_2_2, FIX::EncodedLegIssuer{"DATA_452928979"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::EncodedLegIssuerLen{1810888623}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::EncodedLegSecurityDesc{"DATA_1659411066"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::EncodedLegSecurityDescLen{419567860}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegCFICode{"STRING_1684935989"}, InstrumentLeg_69);
        FIX::LegContractMultiplier LegContractMultiplier_69;
        LegContractMultiplier_69.setString("8915997");
set_field(noLegs_2_0_2_2, LegContractMultiplier_69, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegContractMultiplierUnit{1841736148}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegContractSettlMonth{"MONTHYEAR_2116031703"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegCountryOfIssue{"COUNTRY_2143354257"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1887766898"}, InstrumentLeg_69);
        FIX::LegCouponRate LegCouponRate_69;
        LegCouponRate_69.setString("65.530000");
set_field(noLegs_2_0_2_2, LegCouponRate_69, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegCreditRating{"STRING_1284964587"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegCurrency{"CHF"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegDatedDate{"LOCALMKTDATE_237649583"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegExerciseStyle{1207122080}, InstrumentLeg_69);
        FIX::LegFactor LegFactor_69;
        LegFactor_69.setString("21038499");
set_field(noLegs_2_0_2_2, LegFactor_69, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegFlowScheduleType{1564050256}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegInstrRegistry{"STRING_174412737"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1225015984"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegIssueDate{"LOCALMKTDATE_887402318"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegIssuer{"STRING_719511849"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegLocaleOfIssue{"STRING_878380483"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegMaturityDate{"LOCALMKTDATE_922291609"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1114028436"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegMaturityTime{"TZTIMEONLY_1490375652"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegOptAttribute{'2'}, InstrumentLeg_69);
        FIX::LegOptionRatio LegOptionRatio_69;
        LegOptionRatio_69.setString("6654259");
set_field(noLegs_2_0_2_2, LegOptionRatio_69, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegPool{"STRING_1060718161"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegPriceUnitOfMeasure{"STRING_1492128039"}, InstrumentLeg_69);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_69;
        LegPriceUnitOfMeasureQty_69.setString("12248854");
set_field(noLegs_2_0_2_2, LegPriceUnitOfMeasureQty_69, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegProduct{1513647140}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegPutOrCall{1155533014}, InstrumentLeg_69);
        FIX::LegRatioQty LegRatioQty_69;
        LegRatioQty_69.setString("7368128");
set_field(noLegs_2_0_2_2, LegRatioQty_69, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1933215000"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegRepoCollateralSecurityType{"STRING_692985355"}, InstrumentLeg_69);
        FIX::LegRepurchaseRate LegRepurchaseRate_69;
        LegRepurchaseRate_69.setString("26.380000");
set_field(noLegs_2_0_2_2, LegRepurchaseRate_69, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegRepurchaseTerm{1627467501}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegSecurityDesc{"STRING_661533410"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegSecurityExchange{"EXCHANGE_1624283248"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegSecurityID{"STRING_1367750751"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegSecurityIDSource{"STRING_849009964"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegSecuritySubType{"STRING_761764187"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegSecurityType{"STRING_679651583"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegSide{'1'}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegStateOrProvinceOfIssue{"STRING_999413770"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_69);
        FIX::LegStrikePrice LegStrikePrice_69;
        LegStrikePrice_69.setString("4159803");
set_field(noLegs_2_0_2_2, LegStrikePrice_69, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegSymbol{"STRING_2061186401"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegSymbolSfx{"STRING_167612693"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegTimeUnit{"STRING_1303382697"}, InstrumentLeg_69);
        set_field(noLegs_2_0_2_2, FIX::LegUnitOfMeasure{"STRING_633214602"}, InstrumentLeg_69);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_69;
        LegUnitOfMeasureQty_69.setString("10459931");
set_field(noLegs_2_0_2_2, LegUnitOfMeasureQty_69, InstrumentLeg_69);
        all_values.push_back(InstrumentLeg_69);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_141;
          set_field(noLegSecurityAltID_2_0_2_3_0, FIX::LegSecurityAltID{"STRING_1747243039"}, LegSecAltIDGrp_NoLegSecurityAltID_141);
          set_field(noLegSecurityAltID_2_0_2_3_0, FIX::LegSecurityAltIDSource{"STRING_388885181"}, LegSecAltIDGrp_NoLegSecurityAltID_141);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_141);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_2_0_2_2.addGroup(noLegSecurityAltID_2_0_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_142;
          set_field(noLegSecurityAltID_2_0_2_3_1, FIX::LegSecurityAltID{"STRING_2130165854"}, LegSecAltIDGrp_NoLegSecurityAltID_142);
          set_field(noLegSecurityAltID_2_0_2_3_1, FIX::LegSecurityAltIDSource{"STRING_265185386"}, LegSecAltIDGrp_NoLegSecurityAltID_142);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_142);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_2_0_2_2.addGroup(noLegSecurityAltID_2_0_2_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_143;
          set_field(noLegSecurityAltID_2_0_2_3_2, FIX::LegSecurityAltID{"STRING_1449603342"}, LegSecAltIDGrp_NoLegSecurityAltID_143);
          set_field(noLegSecurityAltID_2_0_2_3_2, FIX::LegSecurityAltIDSource{"STRING_1474810245"}, LegSecAltIDGrp_NoLegSecurityAltID_143);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_143);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_2_0_2_2.addGroup(noLegSecurityAltID_2_0_2_3_2);
        }
        noQuoteEntries_2_1_0.addGroup(noLegs_2_0_2_2);
      }
      // Instrument
      multiset<string> Instrument_40;
      FIX::AttachmentPoint AttachmentPoint_40;
      AttachmentPoint_40.setString("8.320000");
set_field(noQuoteEntries_2_1_0, AttachmentPoint_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::CFICode{"STRING_815766835"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::CPProgram{1}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::CPRegType{"STRING_79400048"}, Instrument_40);
      FIX::CapPrice CapPrice_40;
      CapPrice_40.setString("6014981");
set_field(noQuoteEntries_2_1_0, CapPrice_40, Instrument_40);
      FIX::ContractMultiplier ContractMultiplier_40;
      ContractMultiplier_40.setString("11758449");
set_field(noQuoteEntries_2_1_0, ContractMultiplier_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::ContractMultiplierUnit{1}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::ContractSettlMonth{"MONTHYEAR_81482040"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::CountryOfIssue{"COUNTRY_1837378378"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1184612286"}, Instrument_40);
      FIX::CouponRate CouponRate_40;
      CouponRate_40.setString("27.910000");
set_field(noQuoteEntries_2_1_0, CouponRate_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::CreditRating{"STRING_538904694"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::DatedDate{"LOCALMKTDATE_1946376473"}, Instrument_40);
      FIX::DetachmentPoint DetachmentPoint_40;
      DetachmentPoint_40.setString("43.750000");
set_field(noQuoteEntries_2_1_0, DetachmentPoint_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::EncodedIssuer{"DATA_1672618705"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::EncodedIssuerLen{798306596}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::EncodedSecurityDesc{"DATA_1868174390"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::EncodedSecurityDescLen{615215414}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::ExerciseStyle{2}, Instrument_40);
      FIX::Factor Factor_40;
      Factor_40.setString("17818771");
set_field(noQuoteEntries_2_1_0, Factor_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::FlexProductEligibilityIndicator{false}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::FlexibleIndicator{false}, Instrument_40);
      FIX::FloorPrice FloorPrice_40;
      FloorPrice_40.setString("2676080");
set_field(noQuoteEntries_2_1_0, FloorPrice_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::FlowScheduleType{4}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::InstrRegistry{"STRING_448376681"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::InstrmtAssignmentMethod{'2'}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::InterestAccrualDate{"LOCALMKTDATE_70222817"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::IssueDate{"LOCALMKTDATE_431058887"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::Issuer{"STRING_132552875"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::ListMethod{1}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::LocaleOfIssue{"STRING_1905869133"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::MaturityDate{"LOCALMKTDATE_1622623707"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::MaturityMonthYear{"MONTHYEAR_188109346"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::MaturityTime{"TZTIMEONLY_241245097"}, Instrument_40);
      FIX::MinPriceIncrement MinPriceIncrement_40;
      MinPriceIncrement_40.setString("17020237");
set_field(noQuoteEntries_2_1_0, MinPriceIncrement_40, Instrument_40);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_40;
      MinPriceIncrementAmount_40.setString("7896075");
set_field(noQuoteEntries_2_1_0, MinPriceIncrementAmount_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::NTPositionLimit{1417090064}, Instrument_40);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_40;
      NotionalPercentageOutstanding_40.setString("27.940000");
set_field(noQuoteEntries_2_1_0, NotionalPercentageOutstanding_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::OptAttribute{'8'}, Instrument_40);
      FIX::OptPayoutAmount OptPayoutAmount_40;
      OptPayoutAmount_40.setString("11069847");
set_field(noQuoteEntries_2_1_0, OptPayoutAmount_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::OptPayoutType{1}, Instrument_40);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_40;
      OriginalNotionalPercentageOutstanding_40.setString("87.180000");
set_field(noQuoteEntries_2_1_0, OriginalNotionalPercentageOutstanding_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::Pool{"STRING_1645889488"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::PositionLimit{98374258}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::PriceUnitOfMeasure{"STRING_1171024546"}, Instrument_40);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_40;
      PriceUnitOfMeasureQty_40.setString("8966808");
set_field(noQuoteEntries_2_1_0, PriceUnitOfMeasureQty_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::Product{1}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::ProductComplex{"STRING_1786239960"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::PutOrCall{0}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::RedemptionDate{"LOCALMKTDATE_1656807331"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::RepoCollateralSecurityType{"STRING_421584420"}, Instrument_40);
      FIX::RepurchaseRate RepurchaseRate_40;
      RepurchaseRate_40.setString("2.040000");
set_field(noQuoteEntries_2_1_0, RepurchaseRate_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::RepurchaseTerm{1924415429}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::RestructuringType{"STRING_FR"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityDesc{"STRING_782046885"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityExchange{"EXCHANGE_1791782918"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityGroup{"STRING_173144873"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityID{"STRING_1213105773"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityIDSource{"STRING_I"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityStatus{"STRING_1"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::SecuritySubType{"STRING_971491258"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityType{"STRING_SPCLT"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::Seniority{"STRING_SD"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::SettlMethod{'P'}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::SettleOnOpenFlag{"STRING_954015960"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::StateOrProvinceOfIssue{"STRING_523204265"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::StrikeCurrency{"USD"}, Instrument_40);
      FIX::StrikeMultiplier StrikeMultiplier_40;
      StrikeMultiplier_40.setString("13942938");
set_field(noQuoteEntries_2_1_0, StrikeMultiplier_40, Instrument_40);
      FIX::StrikePrice StrikePrice_40;
      StrikePrice_40.setString("15893275");
set_field(noQuoteEntries_2_1_0, StrikePrice_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_40);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_40;
      StrikePriceBoundaryPrecision_40.setString("25.570000");
set_field(noQuoteEntries_2_1_0, StrikePriceBoundaryPrecision_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::StrikePriceDeterminationMethod{3}, Instrument_40);
      FIX::StrikeValue StrikeValue_40;
      StrikeValue_40.setString("4667407");
set_field(noQuoteEntries_2_1_0, StrikeValue_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::Symbol{"STRING_1721372002"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::TimeUnit{"STRING_Wk"}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::UnitOfMeasure{"STRING_tn"}, Instrument_40);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_40;
      UnitOfMeasureQty_40.setString("13269058");
set_field(noQuoteEntries_2_1_0, UnitOfMeasureQty_40, Instrument_40);
      set_field(noQuoteEntries_2_1_0, FIX::ValuationMethod{"STRING_CDS"}, Instrument_40);
      all_values.push_back(Instrument_40);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_79;
        set_field(noComplexEvents_2_0_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_79);
        FIX::ComplexEventPrice ComplexEventPrice_79;
        ComplexEventPrice_79.setString("8825576");
set_field(noComplexEvents_2_0_2_0, ComplexEventPrice_79, ComplexEvents_NoComplexEvents_79);
        set_field(noComplexEvents_2_0_2_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_79);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_79;
        ComplexEventPriceBoundaryPrecision_79.setString("92.730000");
set_field(noComplexEvents_2_0_2_0, ComplexEventPriceBoundaryPrecision_79, ComplexEvents_NoComplexEvents_79);
        set_field(noComplexEvents_2_0_2_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_79);
        set_field(noComplexEvents_2_0_2_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_79);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_79;
        ComplexOptPayoutAmount_79.setString("15082450");
set_field(noComplexEvents_2_0_2_0, ComplexOptPayoutAmount_79, ComplexEvents_NoComplexEvents_79);
        all_values.push_back(ComplexEvents_NoComplexEvents_79);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_158;
          set_field(noComplexEventDates_2_0_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 22, 29, 27, 4, 2008)}, ComplexEventDates_NoComplexEventDates_158);
          set_field(noComplexEventDates_2_0_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 6, 40, 4, 8, 2015)}, ComplexEventDates_NoComplexEventDates_158);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_158);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_321;
            set_field(noComplexEventTimes_2_0_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 0, 32)}, ComplexEventTimes_NoComplexEventTimes_321);
            set_field(noComplexEventTimes_2_0_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 25, 37)}, ComplexEventTimes_NoComplexEventTimes_321);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_321);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_0_0_3_0.addGroup(noComplexEventTimes_2_0_0_0_4_0);
          }
          noComplexEvents_2_0_2_0.addGroup(noComplexEventDates_2_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_159;
          set_field(noComplexEventDates_2_0_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 50, 12, 23, 9, 2000)}, ComplexEventDates_NoComplexEventDates_159);
          set_field(noComplexEventDates_2_0_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 46, 19, 12, 6, 2016)}, ComplexEventDates_NoComplexEventDates_159);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_159);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_322;
            set_field(noComplexEventTimes_2_0_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 33, 56)}, ComplexEventTimes_NoComplexEventTimes_322);
            set_field(noComplexEventTimes_2_0_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 35, 25)}, ComplexEventTimes_NoComplexEventTimes_322);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_322);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_0_0_3_1.addGroup(noComplexEventTimes_2_0_0_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_323;
            set_field(noComplexEventTimes_2_0_0_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 18, 2)}, ComplexEventTimes_NoComplexEventTimes_323);
            set_field(noComplexEventTimes_2_0_0_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 27, 37)}, ComplexEventTimes_NoComplexEventTimes_323);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_323);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_0_0_3_1.addGroup(noComplexEventTimes_2_0_0_1_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_324;
            set_field(noComplexEventTimes_2_0_0_1_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 19, 46)}, ComplexEventTimes_NoComplexEventTimes_324);
            set_field(noComplexEventTimes_2_0_0_1_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 16, 10)}, ComplexEventTimes_NoComplexEventTimes_324);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_324);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_0_0_3_1.addGroup(noComplexEventTimes_2_0_0_1_4_2);
          }
          noComplexEvents_2_0_2_0.addGroup(noComplexEventDates_2_0_0_3_1);
        }
        noQuoteEntries_2_1_0.addGroup(noComplexEvents_2_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_80;
        set_field(noComplexEvents_2_0_2_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_80);
        FIX::ComplexEventPrice ComplexEventPrice_80;
        ComplexEventPrice_80.setString("14291450");
set_field(noComplexEvents_2_0_2_1, ComplexEventPrice_80, ComplexEvents_NoComplexEvents_80);
        set_field(noComplexEvents_2_0_2_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_80);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_80;
        ComplexEventPriceBoundaryPrecision_80.setString("92.230000");
set_field(noComplexEvents_2_0_2_1, ComplexEventPriceBoundaryPrecision_80, ComplexEvents_NoComplexEvents_80);
        set_field(noComplexEvents_2_0_2_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_80);
        set_field(noComplexEvents_2_0_2_1, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_80);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_80;
        ComplexOptPayoutAmount_80.setString("3157458");
set_field(noComplexEvents_2_0_2_1, ComplexOptPayoutAmount_80, ComplexEvents_NoComplexEvents_80);
        all_values.push_back(ComplexEvents_NoComplexEvents_80);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_160;
          set_field(noComplexEventDates_2_0_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 37, 18, 24, 1, 2006)}, ComplexEventDates_NoComplexEventDates_160);
          set_field(noComplexEventDates_2_0_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 54, 57, 7, 5, 2016)}, ComplexEventDates_NoComplexEventDates_160);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_160);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_325;
            set_field(noComplexEventTimes_2_0_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 51, 35)}, ComplexEventTimes_NoComplexEventTimes_325);
            set_field(noComplexEventTimes_2_0_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 44, 30)}, ComplexEventTimes_NoComplexEventTimes_325);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_325);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_0_1_3_0.addGroup(noComplexEventTimes_2_0_1_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_326;
            set_field(noComplexEventTimes_2_0_1_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 51, 50)}, ComplexEventTimes_NoComplexEventTimes_326);
            set_field(noComplexEventTimes_2_0_1_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 20, 28)}, ComplexEventTimes_NoComplexEventTimes_326);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_326);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_0_1_3_0.addGroup(noComplexEventTimes_2_0_1_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_327;
            set_field(noComplexEventTimes_2_0_1_0_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 5, 55)}, ComplexEventTimes_NoComplexEventTimes_327);
            set_field(noComplexEventTimes_2_0_1_0_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 23, 34)}, ComplexEventTimes_NoComplexEventTimes_327);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_327);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_2_0_1_3_0.addGroup(noComplexEventTimes_2_0_1_0_4_2);
          }
          noComplexEvents_2_0_2_1.addGroup(noComplexEventDates_2_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_161;
          set_field(noComplexEventDates_2_0_1_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 31, 8, 9, 1, 2004)}, ComplexEventDates_NoComplexEventDates_161);
          set_field(noComplexEventDates_2_0_1_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 23, 58, 19, 12, 2016)}, ComplexEventDates_NoComplexEventDates_161);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_161);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_328;
            set_field(noComplexEventTimes_2_0_1_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 21, 59)}, ComplexEventTimes_NoComplexEventTimes_328);
            set_field(noComplexEventTimes_2_0_1_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 20, 21)}, ComplexEventTimes_NoComplexEventTimes_328);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_328);
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
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_2_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_86;
        set_field(noEvents_2_0_2_0, FIX::EventDate{"LOCALMKTDATE_581490876"}, EvntGrp_NoEvents_86);
        FIX::EventPx EventPx_86;
        EventPx_86.setString("12559066");
set_field(noEvents_2_0_2_0, EventPx_86, EvntGrp_NoEvents_86);
        set_field(noEvents_2_0_2_0, FIX::EventText{"STRING_815405672"}, EvntGrp_NoEvents_86);
        set_field(noEvents_2_0_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(7, 56, 50, 4, 2, 2008)}, EvntGrp_NoEvents_86);
        set_field(noEvents_2_0_2_0, FIX::EventType{13}, EvntGrp_NoEvents_86);
        all_values.push_back(EvntGrp_NoEvents_86);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_2_1_0.addGroup(noEvents_2_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_78;
        set_field(noInstrumentParties_2_0_2_0, FIX::InstrumentPartyID{"STRING_1993820942"}, InstrumentParties_NoInstrumentParties_78);
        set_field(noInstrumentParties_2_0_2_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_78);
        set_field(noInstrumentParties_2_0_2_0, FIX::InstrumentPartyRole{1894462022}, InstrumentParties_NoInstrumentParties_78);
        all_values.push_back(InstrumentParties_NoInstrumentParties_78);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160;
          set_field(noInstrumentPartySubIDs_2_0_0_3_0, FIX::InstrumentPartySubID{"STRING_947848768"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160);
          set_field(noInstrumentPartySubIDs_2_0_0_3_0, FIX::InstrumentPartySubIDType{1520613832}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_2_0_2_0.addGroup(noInstrumentPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161;
          set_field(noInstrumentPartySubIDs_2_0_0_3_1, FIX::InstrumentPartySubID{"STRING_1560554156"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161);
          set_field(noInstrumentPartySubIDs_2_0_0_3_1, FIX::InstrumentPartySubIDType{373659823}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_2_0_2_0.addGroup(noInstrumentPartySubIDs_2_0_0_3_1);
        }
        noQuoteEntries_2_1_0.addGroup(noInstrumentParties_2_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_83;
        set_field(noSecurityAltID_2_0_2_0, FIX::SecurityAltID{"STRING_1691411726"}, SecAltIDGrp_NoSecurityAltID_83);
        set_field(noSecurityAltID_2_0_2_0, FIX::SecurityAltIDSource{"STRING_844682992"}, SecAltIDGrp_NoSecurityAltID_83);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_83);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_2_1_0.addGroup(noSecurityAltID_2_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_80;
      set_field(noQuoteEntries_2_1_0, FIX::SecurityXML{"XMLDATA_46991364"}, SecurityXML_80);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityXMLLen{112534120}, SecurityXML_80);
      set_field(noQuoteEntries_2_1_0, FIX::SecurityXMLSchema{"STRING_1542193852"}, SecurityXML_80);
      all_values.push_back(SecurityXML_80);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_2.addGroup(noQuoteEntries_2_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_58;
    set_field(noQuoteSets_0_2, FIX::EncodedUnderlyingIssuer{"DATA_513328217"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::EncodedUnderlyingIssuerLen{564542928}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_634454584"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::EncodedUnderlyingSecurityDescLen{1983710018}, UnderlyingInstrument_58);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_58;
    UnderlyingAdjustedQuantity_58.setString("17475155");
set_field(noQuoteSets_0_2, UnderlyingAdjustedQuantity_58, UnderlyingInstrument_58);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_58;
    UnderlyingAllocationPercent_58.setString("54.600000");
set_field(noQuoteSets_0_2, UnderlyingAllocationPercent_58, UnderlyingInstrument_58);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_58;
    UnderlyingAttachmentPoint_58.setString("30.080000");
set_field(noQuoteSets_0_2, UnderlyingAttachmentPoint_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCFICode{"STRING_415437537"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCPProgram{"STRING_1633859696"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCPRegType{"STRING_1381314608"}, UnderlyingInstrument_58);
    FIX::UnderlyingCapValue UnderlyingCapValue_58;
    UnderlyingCapValue_58.setString("13798472");
set_field(noQuoteSets_0_2, UnderlyingCapValue_58, UnderlyingInstrument_58);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_58;
    UnderlyingCashAmount_58.setString("4208721");
set_field(noQuoteSets_0_2, UnderlyingCashAmount_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_58);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_58;
    UnderlyingContractMultiplier_58.setString("9596138");
set_field(noQuoteSets_0_2, UnderlyingContractMultiplier_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingContractMultiplierUnit{676726852}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1256083565"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1822393298"}, UnderlyingInstrument_58);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_58;
    UnderlyingCouponRate_58.setString("41.460000");
set_field(noQuoteSets_0_2, UnderlyingCouponRate_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCreditRating{"STRING_1231590429"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_58);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_58;
    UnderlyingCurrentValue_58.setString("319555");
set_field(noQuoteSets_0_2, UnderlyingCurrentValue_58, UnderlyingInstrument_58);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_58;
    UnderlyingDetachmentPoint_58.setString("18.560000");
set_field(noQuoteSets_0_2, UnderlyingDetachmentPoint_58, UnderlyingInstrument_58);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_58;
    UnderlyingDirtyPrice_58.setString("10337461");
set_field(noQuoteSets_0_2, UnderlyingDirtyPrice_58, UnderlyingInstrument_58);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_58;
    UnderlyingEndPrice_58.setString("4056153");
set_field(noQuoteSets_0_2, UnderlyingEndPrice_58, UnderlyingInstrument_58);
    FIX::UnderlyingEndValue UnderlyingEndValue_58;
    UnderlyingEndValue_58.setString("6550825");
set_field(noQuoteSets_0_2, UnderlyingEndValue_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingExerciseStyle{577674222}, UnderlyingInstrument_58);
    FIX::UnderlyingFXRate UnderlyingFXRate_58;
    UnderlyingFXRate_58.setString("12502983");
set_field(noQuoteSets_0_2, UnderlyingFXRate_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_58);
    FIX::UnderlyingFactor UnderlyingFactor_58;
    UnderlyingFactor_58.setString("6902083");
set_field(noQuoteSets_0_2, UnderlyingFactor_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingFlowScheduleType{645008569}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingInstrRegistry{"STRING_1215402137"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1254751270"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingIssuer{"STRING_1279463153"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_1051628508"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_854783135"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_347924965"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2143761516"}, UnderlyingInstrument_58);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_58;
    UnderlyingNotionalPercentageOutstanding_58.setString("6.730000");
set_field(noQuoteSets_0_2, UnderlyingNotionalPercentageOutstanding_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_58);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_58;
    UnderlyingOriginalNotionalPercentageOutstanding_58.setString("24.760000");
set_field(noQuoteSets_0_2, UnderlyingOriginalNotionalPercentageOutstanding_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_502584258"}, UnderlyingInstrument_58);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_58;
    UnderlyingPriceUnitOfMeasureQty_58.setString("2551732");
set_field(noQuoteSets_0_2, UnderlyingPriceUnitOfMeasureQty_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingProduct{168600121}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingPutOrCall{1462198157}, UnderlyingInstrument_58);
    FIX::UnderlyingPx UnderlyingPx_58;
    UnderlyingPx_58.setString("9319000");
set_field(noQuoteSets_0_2, UnderlyingPx_58, UnderlyingInstrument_58);
    FIX::UnderlyingQty UnderlyingQty_58;
    UnderlyingQty_58.setString("14246836");
set_field(noQuoteSets_0_2, UnderlyingQty_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1137107807"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1454964210"}, UnderlyingInstrument_58);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_58;
    UnderlyingRepurchaseRate_58.setString("4.670000");
set_field(noQuoteSets_0_2, UnderlyingRepurchaseRate_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingRepurchaseTerm{558995831}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingRestructuringType{"STRING_928156198"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSecurityDesc{"STRING_540746017"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1501497688"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSecurityID{"STRING_1961902342"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSecurityIDSource{"STRING_946361389"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSecuritySubType{"STRING_9096595"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSecurityType{"STRING_392092916"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSeniority{"STRING_49176106"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSettlMethod{"STRING_711170515"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_58);
    FIX::UnderlyingStartValue UnderlyingStartValue_58;
    UnderlyingStartValue_58.setString("6941846");
set_field(noQuoteSets_0_2, UnderlyingStartValue_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1926572653"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_58);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_58;
    UnderlyingStrikePrice_58.setString("8307175");
set_field(noQuoteSets_0_2, UnderlyingStrikePrice_58, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSymbol{"STRING_1044352017"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingSymbolSfx{"STRING_174089145"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingTimeUnit{"STRING_826995381"}, UnderlyingInstrument_58);
    set_field(noQuoteSets_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_167089042"}, UnderlyingInstrument_58);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_58;
    UnderlyingUnitOfMeasureQty_58.setString("83901");
set_field(noQuoteSets_0_2, UnderlyingUnitOfMeasureQty_58, UnderlyingInstrument_58);
    all_values.push_back(UnderlyingInstrument_58);
    all_compo_names.insert("...NoQuoteSets.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_120;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_669673300"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_120);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_263563370"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_120);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_120);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_121;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_225704331"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_121);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_2131871458"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_121);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_121);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_122;
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltID{"STRING_1195463434"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_122);
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1650388017"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_122);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_122);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_116;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_502943996"}, UnderlyingStipulations_NoUnderlyingStips_116);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_11694836"}, UnderlyingStipulations_NoUnderlyingStips_116);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_116);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_117;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_1680491449"}, UnderlyingStipulations_NoUnderlyingStips_117);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_1431100194"}, UnderlyingStipulations_NoUnderlyingStips_117);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_117);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_127;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1034505489"}, UndlyInstrumentParties_NoUndlyInstrumentParties_127);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_127);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{1498802243}, UndlyInstrumentParties_NoUndlyInstrumentParties_127);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_127);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1637611805"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1547978349}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_249);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1754772600"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{572429416}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_250);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noQuoteSets_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noQuoteSets_0_2);
  }
  // header
  multiset<string> header_46;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_46);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1533861605"}, header_46);
  set_header_field(msg.getHeader(), FIX::BodyLength{761998297}, header_46);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_2068327205"}, header_46);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_217095470"}, header_46);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1806350314"}, header_46);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_94932703"}, header_46);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1044090851}, header_46);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_46);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{103322861}, header_46);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1101195061"}, header_46);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_495629009"}, header_46);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_366886231"}, header_46);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(19, 5, 41, 20, 3, 2002)}, header_46);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_46);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_46);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1393939451"}, header_46);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{21542078}, header_46);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_446945449"}, header_46);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_745258046"}, header_46);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1065144163"}, header_46);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(4, 35, 2, 17, 9, 2003)}, header_46);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_161275682"}, header_46);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_275906542"}, header_46);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_930367986"}, header_46);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_256208385"}, header_46);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1319997393}, header_46);
  all_values.push_back(header_46);
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
