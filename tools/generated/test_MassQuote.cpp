#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

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
  FIX::Account Account_10("STRING_539512042");
  msg.set(Account_10);
  MassQuote_0.insert(Account_10.getString());
  FIX::AccountType AccountType_9(6);
  msg.set(AccountType_9);
  MassQuote_0.insert(AccountType_9.getString());
  FIX::AcctIDSource AcctIDSource_3(5);
  msg.set(AcctIDSource_3);
  MassQuote_0.insert(AcctIDSource_3.getString());
  FIX::DefBidSize DefBidSize_0;
  DefBidSize_0.setString("19733404");
  msg.set(DefBidSize_0);
  MassQuote_0.insert(DefBidSize_0.getString());
  FIX::DefOfferSize DefOfferSize_0;
  DefOfferSize_0.setString("16249180");
  msg.set(DefOfferSize_0);
  MassQuote_0.insert(DefOfferSize_0.getString());
  FIX::QuoteID QuoteID_1("STRING_411576970");
  msg.set(QuoteID_1);
  MassQuote_0.insert(QuoteID_1.getString());
  FIX::QuoteReqID QuoteReqID_0("STRING_1149961490");
  msg.set(QuoteReqID_0);
  MassQuote_0.insert(QuoteReqID_0.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_0(3);
  msg.set(QuoteResponseLevel_0);
  MassQuote_0.insert(QuoteResponseLevel_0.getString());
  FIX::QuoteType QuoteType_1(0);
  msg.set(QuoteType_1);
  MassQuote_0.insert(QuoteType_1.getString());
  all_values.push_back(MassQuote_0);

  all_compo_names.insert("MassQuote");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MassQuote::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_26;
    FIX::PartyID PartyID_26("STRING_864926400");
    noPartyIDs_0_0.set(PartyID_26);
    Parties_NoPartyIDs_26.insert(PartyID_26.getString());
    FIX::PartyIDSource PartyIDSource_26('C');
    noPartyIDs_0_0.set(PartyIDSource_26);
    Parties_NoPartyIDs_26.insert(PartyIDSource_26.getString());
    FIX::PartyRole PartyRole_26(73);
    noPartyIDs_0_0.set(PartyRole_26);
    Parties_NoPartyIDs_26.insert(PartyRole_26.getString());
    all_values.push_back(Parties_NoPartyIDs_26);
    all_compo_names.insert("..NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_26;
      FIX::PartySubID PartySubID_26("STRING_331310176");
      noPartySubIDs_0_1_0.set(PartySubID_26);
      PtysSubGrp_NoPartySubIDs_26.insert(PartySubID_26.getString());
      FIX::PartySubIDType PartySubIDType_26(12);
      noPartySubIDs_0_1_0.set(PartySubIDType_26);
      PtysSubGrp_NoPartySubIDs_26.insert(PartySubIDType_26.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_26);
      all_compo_names.insert("..NoPartyIDs..NoPartySubIDs");

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
    FIX::LastFragment LastFragment_8(true);
    noQuoteSets_0_0.set(LastFragment_8);
    QuotSetGrp_NoQuoteSets_0.insert(LastFragment_8.getString());
    FIX::QuoteSetID QuoteSetID_0("STRING_417457802");
    noQuoteSets_0_0.set(QuoteSetID_0);
    QuotSetGrp_NoQuoteSets_0.insert(QuoteSetID_0.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_0(FIX::UTCTIMESTAMP(18, 50, 23, 13, 9, 2012));
    noQuoteSets_0_0.set(QuoteSetValidUntilTime_0);
    QuotSetGrp_NoQuoteSets_0.insert(QuoteSetValidUntilTime_0.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_0(49648221);
    noQuoteSets_0_0.set(TotNoQuoteEntries_0);
    QuotSetGrp_NoQuoteSets_0.insert(TotNoQuoteEntries_0.getString());
    all_values.push_back(QuotSetGrp_NoQuoteSets_0);
    all_compo_names.insert("..NoQuoteSets");

    // QuotEntryGrp
    // Group QuotEntryGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_0;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_0;
      FIX::BidForwardPoints BidForwardPoints_0;
      BidForwardPoints_0.setString("1080215");
      noQuoteEntries_0_1_0.set(BidForwardPoints_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidForwardPoints_0.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_0;
      BidForwardPoints2_0.setString("4444546");
      noQuoteEntries_0_1_0.set(BidForwardPoints2_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidForwardPoints2_0.getString());
      FIX::BidPx BidPx_0;
      BidPx_0.setString("3512016");
      noQuoteEntries_0_1_0.set(BidPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidPx_0.getString());
      FIX::BidSize BidSize_0;
      BidSize_0.setString("6475336");
      noQuoteEntries_0_1_0.set(BidSize_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidSize_0.getString());
      FIX::BidSpotRate BidSpotRate_0;
      BidSpotRate_0.setString("17566995");
      noQuoteEntries_0_1_0.set(BidSpotRate_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidSpotRate_0.getString());
      FIX::BidYield BidYield_0;
      BidYield_0.setString("40.690000");
      noQuoteEntries_0_1_0.set(BidYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidYield_0.getString());
      FIX::BookingType BookingType_5(2);
      noQuoteEntries_0_1_0.set(BookingType_5);
      QuotEntryGrp_NoQuoteEntries_0.insert(BookingType_5.getString());
      FIX::Currency Currency_25("CAN");
      noQuoteEntries_0_1_0.set(Currency_25);
      QuotEntryGrp_NoQuoteEntries_0.insert(Currency_25.getString());
      FIX::MidPx MidPx_0;
      MidPx_0.setString("16233519");
      noQuoteEntries_0_1_0.set(MidPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(MidPx_0.getString());
      FIX::MidYield MidYield_0;
      MidYield_0.setString("2.130000");
      noQuoteEntries_0_1_0.set(MidYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(MidYield_0.getString());
      FIX::OfferForwardPoints OfferForwardPoints_0;
      OfferForwardPoints_0.setString("19608761");
      noQuoteEntries_0_1_0.set(OfferForwardPoints_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferForwardPoints_0.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_0;
      OfferForwardPoints2_0.setString("2507537");
      noQuoteEntries_0_1_0.set(OfferForwardPoints2_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferForwardPoints2_0.getString());
      FIX::OfferPx OfferPx_0;
      OfferPx_0.setString("16204766");
      noQuoteEntries_0_1_0.set(OfferPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferPx_0.getString());
      FIX::OfferSize OfferSize_0;
      OfferSize_0.setString("5149011");
      noQuoteEntries_0_1_0.set(OfferSize_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferSize_0.getString());
      FIX::OfferSpotRate OfferSpotRate_0;
      OfferSpotRate_0.setString("4123592");
      noQuoteEntries_0_1_0.set(OfferSpotRate_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferSpotRate_0.getString());
      FIX::OfferYield OfferYield_0;
      OfferYield_0.setString("32.830000");
      noQuoteEntries_0_1_0.set(OfferYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferYield_0.getString());
      FIX::OrdType OrdType_8('9');
      noQuoteEntries_0_1_0.set(OrdType_8);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrdType_8.getString());
      FIX::OrderCapacity OrderCapacity_5('G');
      noQuoteEntries_0_1_0.set(OrderCapacity_5);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderCapacity_5.getString());
      FIX::OrderQty2 OrderQty2_1;
      OrderQty2_1.setString("9567715");
      noQuoteEntries_0_1_0.set(OrderQty2_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderQty2_1.getString());
      FIX::OrderRestrictions OrderRestrictions_3("MULTIPLECHARVALUE_A");
      noQuoteEntries_0_1_0.set(OrderRestrictions_3);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderRestrictions_3.getString());
      FIX::QuoteEntryID QuoteEntryID_2("STRING_932125161");
      noQuoteEntries_0_1_0.set(QuoteEntryID_2);
      QuotEntryGrp_NoQuoteEntries_0.insert(QuoteEntryID_2.getString());
      FIX::SettlDate SettlDate_17("LOCALMKTDATE_1833830442");
      noQuoteEntries_0_1_0.set(SettlDate_17);
      QuotEntryGrp_NoQuoteEntries_0.insert(SettlDate_17.getString());
      FIX::SettlDate2 SettlDate2_1("LOCALMKTDATE_1661976643");
      noQuoteEntries_0_1_0.set(SettlDate2_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(SettlDate2_1.getString());
      FIX::TradingSessionID TradingSessionID_19("STRING_6");
      noQuoteEntries_0_1_0.set(TradingSessionID_19);
      QuotEntryGrp_NoQuoteEntries_0.insert(TradingSessionID_19.getString());
      FIX::TradingSessionSubID TradingSessionSubID_19("STRING_5");
      noQuoteEntries_0_1_0.set(TradingSessionSubID_19);
      QuotEntryGrp_NoQuoteEntries_0.insert(TradingSessionSubID_19.getString());
      FIX::TransactTime TransactTime_26(FIX::UTCTIMESTAMP(20, 49, 29, 22, 6, 2006));
      noQuoteEntries_0_1_0.set(TransactTime_26);
      QuotEntryGrp_NoQuoteEntries_0.insert(TransactTime_26.getString());
      FIX::ValidUntilTime ValidUntilTime_1(FIX::UTCTIMESTAMP(20, 8, 6, 12, 11, 2005));
      noQuoteEntries_0_1_0.set(ValidUntilTime_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(ValidUntilTime_1.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_0);
      all_compo_names.insert("..NoQuoteSets..NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_24;
        FIX::EncodedLegIssuer EncodedLegIssuer_24("DATA_1828771231");
        noLegs_0_0_2_0.set(EncodedLegIssuer_24);
        InstrumentLeg_24.insert(EncodedLegIssuer_24.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_24(1271560281);
        noLegs_0_0_2_0.set(EncodedLegIssuerLen_24);
        InstrumentLeg_24.insert(EncodedLegIssuerLen_24.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_24("DATA_1725885914");
        noLegs_0_0_2_0.set(EncodedLegSecurityDesc_24);
        InstrumentLeg_24.insert(EncodedLegSecurityDesc_24.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_24(1301764196);
        noLegs_0_0_2_0.set(EncodedLegSecurityDescLen_24);
        InstrumentLeg_24.insert(EncodedLegSecurityDescLen_24.getString());
        FIX::LegCFICode LegCFICode_24("STRING_1786461409");
        noLegs_0_0_2_0.set(LegCFICode_24);
        InstrumentLeg_24.insert(LegCFICode_24.getString());
        FIX::LegContractMultiplier LegContractMultiplier_24;
        LegContractMultiplier_24.setString("21382452");
        noLegs_0_0_2_0.set(LegContractMultiplier_24);
        InstrumentLeg_24.insert(LegContractMultiplier_24.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_24(328563831);
        noLegs_0_0_2_0.set(LegContractMultiplierUnit_24);
        InstrumentLeg_24.insert(LegContractMultiplierUnit_24.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_24("MONTHYEAR_485189065");
        noLegs_0_0_2_0.set(LegContractSettlMonth_24);
        InstrumentLeg_24.insert(LegContractSettlMonth_24.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_24("COUNTRY_505428921");
        noLegs_0_0_2_0.set(LegCountryOfIssue_24);
        InstrumentLeg_24.insert(LegCountryOfIssue_24.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_24("LOCALMKTDATE_1285335415");
        noLegs_0_0_2_0.set(LegCouponPaymentDate_24);
        InstrumentLeg_24.insert(LegCouponPaymentDate_24.getString());
        FIX::LegCouponRate LegCouponRate_24;
        LegCouponRate_24.setString("7.700000");
        noLegs_0_0_2_0.set(LegCouponRate_24);
        InstrumentLeg_24.insert(LegCouponRate_24.getString());
        FIX::LegCreditRating LegCreditRating_24("STRING_1437554083");
        noLegs_0_0_2_0.set(LegCreditRating_24);
        InstrumentLeg_24.insert(LegCreditRating_24.getString());
        FIX::LegCurrency LegCurrency_24("EUR");
        noLegs_0_0_2_0.set(LegCurrency_24);
        InstrumentLeg_24.insert(LegCurrency_24.getString());
        FIX::LegDatedDate LegDatedDate_24("LOCALMKTDATE_234193066");
        noLegs_0_0_2_0.set(LegDatedDate_24);
        InstrumentLeg_24.insert(LegDatedDate_24.getString());
        FIX::LegExerciseStyle LegExerciseStyle_24(564617238);
        noLegs_0_0_2_0.set(LegExerciseStyle_24);
        InstrumentLeg_24.insert(LegExerciseStyle_24.getString());
        FIX::LegFactor LegFactor_24;
        LegFactor_24.setString("13546419");
        noLegs_0_0_2_0.set(LegFactor_24);
        InstrumentLeg_24.insert(LegFactor_24.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_24(1557637590);
        noLegs_0_0_2_0.set(LegFlowScheduleType_24);
        InstrumentLeg_24.insert(LegFlowScheduleType_24.getString());
        FIX::LegInstrRegistry LegInstrRegistry_24("STRING_1334935447");
        noLegs_0_0_2_0.set(LegInstrRegistry_24);
        InstrumentLeg_24.insert(LegInstrRegistry_24.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_24("LOCALMKTDATE_1140058306");
        noLegs_0_0_2_0.set(LegInterestAccrualDate_24);
        InstrumentLeg_24.insert(LegInterestAccrualDate_24.getString());
        FIX::LegIssueDate LegIssueDate_24("LOCALMKTDATE_1570878589");
        noLegs_0_0_2_0.set(LegIssueDate_24);
        InstrumentLeg_24.insert(LegIssueDate_24.getString());
        FIX::LegIssuer LegIssuer_24("STRING_65791589");
        noLegs_0_0_2_0.set(LegIssuer_24);
        InstrumentLeg_24.insert(LegIssuer_24.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_24("STRING_1369929383");
        noLegs_0_0_2_0.set(LegLocaleOfIssue_24);
        InstrumentLeg_24.insert(LegLocaleOfIssue_24.getString());
        FIX::LegMaturityDate LegMaturityDate_24("LOCALMKTDATE_1935321246");
        noLegs_0_0_2_0.set(LegMaturityDate_24);
        InstrumentLeg_24.insert(LegMaturityDate_24.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_24("MONTHYEAR_1591665001");
        noLegs_0_0_2_0.set(LegMaturityMonthYear_24);
        InstrumentLeg_24.insert(LegMaturityMonthYear_24.getString());
        FIX::LegMaturityTime LegMaturityTime_24("TZTIMEONLY_1209016403");
        noLegs_0_0_2_0.set(LegMaturityTime_24);
        InstrumentLeg_24.insert(LegMaturityTime_24.getString());
        FIX::LegOptAttribute LegOptAttribute_24('4');
        noLegs_0_0_2_0.set(LegOptAttribute_24);
        InstrumentLeg_24.insert(LegOptAttribute_24.getString());
        FIX::LegOptionRatio LegOptionRatio_24;
        LegOptionRatio_24.setString("14434452");
        noLegs_0_0_2_0.set(LegOptionRatio_24);
        InstrumentLeg_24.insert(LegOptionRatio_24.getString());
        FIX::LegPool LegPool_24("STRING_134753773");
        noLegs_0_0_2_0.set(LegPool_24);
        InstrumentLeg_24.insert(LegPool_24.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_24("STRING_1951522090");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasure_24);
        InstrumentLeg_24.insert(LegPriceUnitOfMeasure_24.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_24;
        LegPriceUnitOfMeasureQty_24.setString("7710937");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasureQty_24);
        InstrumentLeg_24.insert(LegPriceUnitOfMeasureQty_24.getString());
        FIX::LegProduct LegProduct_24(1963525004);
        noLegs_0_0_2_0.set(LegProduct_24);
        InstrumentLeg_24.insert(LegProduct_24.getString());
        FIX::LegPutOrCall LegPutOrCall_24(1075598723);
        noLegs_0_0_2_0.set(LegPutOrCall_24);
        InstrumentLeg_24.insert(LegPutOrCall_24.getString());
        FIX::LegRatioQty LegRatioQty_24;
        LegRatioQty_24.setString("3494960");
        noLegs_0_0_2_0.set(LegRatioQty_24);
        InstrumentLeg_24.insert(LegRatioQty_24.getString());
        FIX::LegRedemptionDate LegRedemptionDate_24("LOCALMKTDATE_1117805552");
        noLegs_0_0_2_0.set(LegRedemptionDate_24);
        InstrumentLeg_24.insert(LegRedemptionDate_24.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_24("STRING_714576484");
        noLegs_0_0_2_0.set(LegRepoCollateralSecurityType_24);
        InstrumentLeg_24.insert(LegRepoCollateralSecurityType_24.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_24;
        LegRepurchaseRate_24.setString("76.040000");
        noLegs_0_0_2_0.set(LegRepurchaseRate_24);
        InstrumentLeg_24.insert(LegRepurchaseRate_24.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_24(1446369383);
        noLegs_0_0_2_0.set(LegRepurchaseTerm_24);
        InstrumentLeg_24.insert(LegRepurchaseTerm_24.getString());
        FIX::LegSecurityDesc LegSecurityDesc_24("STRING_1199765550");
        noLegs_0_0_2_0.set(LegSecurityDesc_24);
        InstrumentLeg_24.insert(LegSecurityDesc_24.getString());
        FIX::LegSecurityExchange LegSecurityExchange_24("EXCHANGE_845686525");
        noLegs_0_0_2_0.set(LegSecurityExchange_24);
        InstrumentLeg_24.insert(LegSecurityExchange_24.getString());
        FIX::LegSecurityID LegSecurityID_24("STRING_584221150");
        noLegs_0_0_2_0.set(LegSecurityID_24);
        InstrumentLeg_24.insert(LegSecurityID_24.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_24("STRING_1156662672");
        noLegs_0_0_2_0.set(LegSecurityIDSource_24);
        InstrumentLeg_24.insert(LegSecurityIDSource_24.getString());
        FIX::LegSecuritySubType LegSecuritySubType_24("STRING_135756960");
        noLegs_0_0_2_0.set(LegSecuritySubType_24);
        InstrumentLeg_24.insert(LegSecuritySubType_24.getString());
        FIX::LegSecurityType LegSecurityType_24("STRING_1555903359");
        noLegs_0_0_2_0.set(LegSecurityType_24);
        InstrumentLeg_24.insert(LegSecurityType_24.getString());
        FIX::LegSide LegSide_24('6');
        noLegs_0_0_2_0.set(LegSide_24);
        InstrumentLeg_24.insert(LegSide_24.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_24("STRING_369950027");
        noLegs_0_0_2_0.set(LegStateOrProvinceOfIssue_24);
        InstrumentLeg_24.insert(LegStateOrProvinceOfIssue_24.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_24("USD");
        noLegs_0_0_2_0.set(LegStrikeCurrency_24);
        InstrumentLeg_24.insert(LegStrikeCurrency_24.getString());
        FIX::LegStrikePrice LegStrikePrice_24;
        LegStrikePrice_24.setString("19275876");
        noLegs_0_0_2_0.set(LegStrikePrice_24);
        InstrumentLeg_24.insert(LegStrikePrice_24.getString());
        FIX::LegSymbol LegSymbol_24("STRING_1307972397");
        noLegs_0_0_2_0.set(LegSymbol_24);
        InstrumentLeg_24.insert(LegSymbol_24.getString());
        FIX::LegSymbolSfx LegSymbolSfx_24("STRING_975269372");
        noLegs_0_0_2_0.set(LegSymbolSfx_24);
        InstrumentLeg_24.insert(LegSymbolSfx_24.getString());
        FIX::LegTimeUnit LegTimeUnit_24("STRING_1350982558");
        noLegs_0_0_2_0.set(LegTimeUnit_24);
        InstrumentLeg_24.insert(LegTimeUnit_24.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_24("STRING_1373763986");
        noLegs_0_0_2_0.set(LegUnitOfMeasure_24);
        InstrumentLeg_24.insert(LegUnitOfMeasure_24.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_24;
        LegUnitOfMeasureQty_24.setString("1977151");
        noLegs_0_0_2_0.set(LegUnitOfMeasureQty_24);
        InstrumentLeg_24.insert(LegUnitOfMeasureQty_24.getString());
        all_values.push_back(InstrumentLeg_24);
        all_compo_names.insert("..NoQuoteSets..NoQuoteEntries..NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_24;
          FIX::LegSecurityAltID LegSecurityAltID_24("STRING_817945339");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltID_24);
          LegSecAltIDGrp_NoLegSecurityAltID_24.insert(LegSecurityAltID_24.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_24("STRING_1406731510");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltIDSource_24);
          LegSecAltIDGrp_NoLegSecurityAltID_24.insert(LegSecurityAltIDSource_24.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_24);
          all_compo_names.insert("..NoQuoteSets..NoQuoteEntries..NoLegs...NoLegSecurityAltID");

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      // Instrument
      multiset<string> Instrument_27;
      FIX::AttachmentPoint AttachmentPoint_27;
      AttachmentPoint_27.setString("44.820000");
      noQuoteEntries_0_1_0.set(AttachmentPoint_27);
      Instrument_27.insert(AttachmentPoint_27.getString());
      FIX::CFICode CFICode_27("STRING_113906924");
      noQuoteEntries_0_1_0.set(CFICode_27);
      Instrument_27.insert(CFICode_27.getString());
      FIX::CPProgram CPProgram_27(99);
      noQuoteEntries_0_1_0.set(CPProgram_27);
      Instrument_27.insert(CPProgram_27.getString());
      FIX::CPRegType CPRegType_27("STRING_1436212924");
      noQuoteEntries_0_1_0.set(CPRegType_27);
      Instrument_27.insert(CPRegType_27.getString());
      FIX::CapPrice CapPrice_27;
      CapPrice_27.setString("8850006");
      noQuoteEntries_0_1_0.set(CapPrice_27);
      Instrument_27.insert(CapPrice_27.getString());
      FIX::ContractMultiplier ContractMultiplier_27;
      ContractMultiplier_27.setString("13575266");
      noQuoteEntries_0_1_0.set(ContractMultiplier_27);
      Instrument_27.insert(ContractMultiplier_27.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_27(2);
      noQuoteEntries_0_1_0.set(ContractMultiplierUnit_27);
      Instrument_27.insert(ContractMultiplierUnit_27.getString());
      FIX::ContractSettlMonth ContractSettlMonth_27("MONTHYEAR_1234496740");
      noQuoteEntries_0_1_0.set(ContractSettlMonth_27);
      Instrument_27.insert(ContractSettlMonth_27.getString());
      FIX::CountryOfIssue CountryOfIssue_27("COUNTRY_327848543");
      noQuoteEntries_0_1_0.set(CountryOfIssue_27);
      Instrument_27.insert(CountryOfIssue_27.getString());
      FIX::CouponPaymentDate CouponPaymentDate_27("LOCALMKTDATE_1078904484");
      noQuoteEntries_0_1_0.set(CouponPaymentDate_27);
      Instrument_27.insert(CouponPaymentDate_27.getString());
      FIX::CouponRate CouponRate_27;
      CouponRate_27.setString("43.440000");
      noQuoteEntries_0_1_0.set(CouponRate_27);
      Instrument_27.insert(CouponRate_27.getString());
      FIX::CreditRating CreditRating_27("STRING_1774217927");
      noQuoteEntries_0_1_0.set(CreditRating_27);
      Instrument_27.insert(CreditRating_27.getString());
      FIX::DatedDate DatedDate_27("LOCALMKTDATE_131186386");
      noQuoteEntries_0_1_0.set(DatedDate_27);
      Instrument_27.insert(DatedDate_27.getString());
      FIX::DetachmentPoint DetachmentPoint_27;
      DetachmentPoint_27.setString("72.220000");
      noQuoteEntries_0_1_0.set(DetachmentPoint_27);
      Instrument_27.insert(DetachmentPoint_27.getString());
      FIX::EncodedIssuer EncodedIssuer_27("DATA_210955429");
      noQuoteEntries_0_1_0.set(EncodedIssuer_27);
      Instrument_27.insert(EncodedIssuer_27.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_27(1287849058);
      noQuoteEntries_0_1_0.set(EncodedIssuerLen_27);
      Instrument_27.insert(EncodedIssuerLen_27.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_27("DATA_408714182");
      noQuoteEntries_0_1_0.set(EncodedSecurityDesc_27);
      Instrument_27.insert(EncodedSecurityDesc_27.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_27(1766858789);
      noQuoteEntries_0_1_0.set(EncodedSecurityDescLen_27);
      Instrument_27.insert(EncodedSecurityDescLen_27.getString());
      FIX::ExerciseStyle ExerciseStyle_27(0);
      noQuoteEntries_0_1_0.set(ExerciseStyle_27);
      Instrument_27.insert(ExerciseStyle_27.getString());
      FIX::Factor Factor_27;
      Factor_27.setString("7786642");
      noQuoteEntries_0_1_0.set(Factor_27);
      Instrument_27.insert(Factor_27.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_27(true);
      noQuoteEntries_0_1_0.set(FlexProductEligibilityIndicator_27);
      Instrument_27.insert(FlexProductEligibilityIndicator_27.getString());
      FIX::FlexibleIndicator FlexibleIndicator_27(false);
      noQuoteEntries_0_1_0.set(FlexibleIndicator_27);
      Instrument_27.insert(FlexibleIndicator_27.getString());
      FIX::FloorPrice FloorPrice_27;
      FloorPrice_27.setString("5587681");
      noQuoteEntries_0_1_0.set(FloorPrice_27);
      Instrument_27.insert(FloorPrice_27.getString());
      FIX::FlowScheduleType FlowScheduleType_27(2);
      noQuoteEntries_0_1_0.set(FlowScheduleType_27);
      Instrument_27.insert(FlowScheduleType_27.getString());
      FIX::InstrRegistry InstrRegistry_27("STRING_578898638");
      noQuoteEntries_0_1_0.set(InstrRegistry_27);
      Instrument_27.insert(InstrRegistry_27.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_27('1');
      noQuoteEntries_0_1_0.set(InstrmtAssignmentMethod_27);
      Instrument_27.insert(InstrmtAssignmentMethod_27.getString());
      FIX::InterestAccrualDate InterestAccrualDate_27("LOCALMKTDATE_126664825");
      noQuoteEntries_0_1_0.set(InterestAccrualDate_27);
      Instrument_27.insert(InterestAccrualDate_27.getString());
      FIX::IssueDate IssueDate_27("LOCALMKTDATE_776613745");
      noQuoteEntries_0_1_0.set(IssueDate_27);
      Instrument_27.insert(IssueDate_27.getString());
      FIX::Issuer Issuer_27("STRING_901087246");
      noQuoteEntries_0_1_0.set(Issuer_27);
      Instrument_27.insert(Issuer_27.getString());
      FIX::ListMethod ListMethod_27(0);
      noQuoteEntries_0_1_0.set(ListMethod_27);
      Instrument_27.insert(ListMethod_27.getString());
      FIX::LocaleOfIssue LocaleOfIssue_27("STRING_35861608");
      noQuoteEntries_0_1_0.set(LocaleOfIssue_27);
      Instrument_27.insert(LocaleOfIssue_27.getString());
      FIX::MaturityDate MaturityDate_27("LOCALMKTDATE_385778080");
      noQuoteEntries_0_1_0.set(MaturityDate_27);
      Instrument_27.insert(MaturityDate_27.getString());
      FIX::MaturityMonthYear MaturityMonthYear_27("MONTHYEAR_1058517088");
      noQuoteEntries_0_1_0.set(MaturityMonthYear_27);
      Instrument_27.insert(MaturityMonthYear_27.getString());
      FIX::MaturityTime MaturityTime_27("TZTIMEONLY_1577346891");
      noQuoteEntries_0_1_0.set(MaturityTime_27);
      Instrument_27.insert(MaturityTime_27.getString());
      FIX::MinPriceIncrement MinPriceIncrement_27;
      MinPriceIncrement_27.setString("18219910");
      noQuoteEntries_0_1_0.set(MinPriceIncrement_27);
      Instrument_27.insert(MinPriceIncrement_27.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_27;
      MinPriceIncrementAmount_27.setString("19435177");
      noQuoteEntries_0_1_0.set(MinPriceIncrementAmount_27);
      Instrument_27.insert(MinPriceIncrementAmount_27.getString());
      FIX::NTPositionLimit NTPositionLimit_27(787389883);
      noQuoteEntries_0_1_0.set(NTPositionLimit_27);
      Instrument_27.insert(NTPositionLimit_27.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_27;
      NotionalPercentageOutstanding_27.setString("53.570000");
      noQuoteEntries_0_1_0.set(NotionalPercentageOutstanding_27);
      Instrument_27.insert(NotionalPercentageOutstanding_27.getString());
      FIX::OptAttribute OptAttribute_27('1');
      noQuoteEntries_0_1_0.set(OptAttribute_27);
      Instrument_27.insert(OptAttribute_27.getString());
      FIX::OptPayoutAmount OptPayoutAmount_27;
      OptPayoutAmount_27.setString("11152384");
      noQuoteEntries_0_1_0.set(OptPayoutAmount_27);
      Instrument_27.insert(OptPayoutAmount_27.getString());
      FIX::OptPayoutType OptPayoutType_27(1);
      noQuoteEntries_0_1_0.set(OptPayoutType_27);
      Instrument_27.insert(OptPayoutType_27.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_27;
      OriginalNotionalPercentageOutstanding_27.setString("15.760000");
      noQuoteEntries_0_1_0.set(OriginalNotionalPercentageOutstanding_27);
      Instrument_27.insert(OriginalNotionalPercentageOutstanding_27.getString());
      FIX::Pool Pool_27("STRING_741972705");
      noQuoteEntries_0_1_0.set(Pool_27);
      Instrument_27.insert(Pool_27.getString());
      FIX::PositionLimit PositionLimit_27(1248926228);
      noQuoteEntries_0_1_0.set(PositionLimit_27);
      Instrument_27.insert(PositionLimit_27.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_27("STRING_INT");
      noQuoteEntries_0_1_0.set(PriceQuoteMethod_27);
      Instrument_27.insert(PriceQuoteMethod_27.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_27("STRING_952928135");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasure_27);
      Instrument_27.insert(PriceUnitOfMeasure_27.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_27;
      PriceUnitOfMeasureQty_27.setString("3892916");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasureQty_27);
      Instrument_27.insert(PriceUnitOfMeasureQty_27.getString());
      FIX::Product Product_29(11);
      noQuoteEntries_0_1_0.set(Product_29);
      Instrument_27.insert(Product_29.getString());
      FIX::ProductComplex ProductComplex_27("STRING_572303276");
      noQuoteEntries_0_1_0.set(ProductComplex_27);
      Instrument_27.insert(ProductComplex_27.getString());
      FIX::PutOrCall PutOrCall_27(0);
      noQuoteEntries_0_1_0.set(PutOrCall_27);
      Instrument_27.insert(PutOrCall_27.getString());
      FIX::RedemptionDate RedemptionDate_27("LOCALMKTDATE_1918137190");
      noQuoteEntries_0_1_0.set(RedemptionDate_27);
      Instrument_27.insert(RedemptionDate_27.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_27("STRING_164715366");
      noQuoteEntries_0_1_0.set(RepoCollateralSecurityType_27);
      Instrument_27.insert(RepoCollateralSecurityType_27.getString());
      FIX::RepurchaseRate RepurchaseRate_27;
      RepurchaseRate_27.setString("27.510000");
      noQuoteEntries_0_1_0.set(RepurchaseRate_27);
      Instrument_27.insert(RepurchaseRate_27.getString());
      FIX::RepurchaseTerm RepurchaseTerm_27(329421721);
      noQuoteEntries_0_1_0.set(RepurchaseTerm_27);
      Instrument_27.insert(RepurchaseTerm_27.getString());
      FIX::RestructuringType RestructuringType_27("STRING_MM");
      noQuoteEntries_0_1_0.set(RestructuringType_27);
      Instrument_27.insert(RestructuringType_27.getString());
      FIX::SecurityDesc SecurityDesc_27("STRING_340237741");
      noQuoteEntries_0_1_0.set(SecurityDesc_27);
      Instrument_27.insert(SecurityDesc_27.getString());
      FIX::SecurityExchange SecurityExchange_27("EXCHANGE_91688811");
      noQuoteEntries_0_1_0.set(SecurityExchange_27);
      Instrument_27.insert(SecurityExchange_27.getString());
      FIX::SecurityGroup SecurityGroup_27("STRING_1191764679");
      noQuoteEntries_0_1_0.set(SecurityGroup_27);
      Instrument_27.insert(SecurityGroup_27.getString());
      FIX::SecurityID SecurityID_27("STRING_1116851487");
      noQuoteEntries_0_1_0.set(SecurityID_27);
      Instrument_27.insert(SecurityID_27.getString());
      FIX::SecurityIDSource SecurityIDSource_27("STRING_A");
      noQuoteEntries_0_1_0.set(SecurityIDSource_27);
      Instrument_27.insert(SecurityIDSource_27.getString());
      FIX::SecurityStatus SecurityStatus_27("STRING_1");
      noQuoteEntries_0_1_0.set(SecurityStatus_27);
      Instrument_27.insert(SecurityStatus_27.getString());
      FIX::SecuritySubType SecuritySubType_28("STRING_1152713095");
      noQuoteEntries_0_1_0.set(SecuritySubType_28);
      Instrument_27.insert(SecuritySubType_28.getString());
      FIX::SecurityType SecurityType_29("STRING_OOP");
      noQuoteEntries_0_1_0.set(SecurityType_29);
      Instrument_27.insert(SecurityType_29.getString());
      FIX::Seniority Seniority_27("STRING_SB");
      noQuoteEntries_0_1_0.set(Seniority_27);
      Instrument_27.insert(Seniority_27.getString());
      FIX::SettlMethod SettlMethod_27('C');
      noQuoteEntries_0_1_0.set(SettlMethod_27);
      Instrument_27.insert(SettlMethod_27.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_27("STRING_1053061495");
      noQuoteEntries_0_1_0.set(SettleOnOpenFlag_27);
      Instrument_27.insert(SettleOnOpenFlag_27.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_27("STRING_843442424");
      noQuoteEntries_0_1_0.set(StateOrProvinceOfIssue_27);
      Instrument_27.insert(StateOrProvinceOfIssue_27.getString());
      FIX::StrikeCurrency StrikeCurrency_27("JPY");
      noQuoteEntries_0_1_0.set(StrikeCurrency_27);
      Instrument_27.insert(StrikeCurrency_27.getString());
      FIX::StrikeMultiplier StrikeMultiplier_27;
      StrikeMultiplier_27.setString("18739733");
      noQuoteEntries_0_1_0.set(StrikeMultiplier_27);
      Instrument_27.insert(StrikeMultiplier_27.getString());
      FIX::StrikePrice StrikePrice_27;
      StrikePrice_27.setString("3377210");
      noQuoteEntries_0_1_0.set(StrikePrice_27);
      Instrument_27.insert(StrikePrice_27.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_27(1);
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryMethod_27);
      Instrument_27.insert(StrikePriceBoundaryMethod_27.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_27;
      StrikePriceBoundaryPrecision_27.setString("12.320000");
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryPrecision_27);
      Instrument_27.insert(StrikePriceBoundaryPrecision_27.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_27(2);
      noQuoteEntries_0_1_0.set(StrikePriceDeterminationMethod_27);
      Instrument_27.insert(StrikePriceDeterminationMethod_27.getString());
      FIX::StrikeValue StrikeValue_27;
      StrikeValue_27.setString("13110792");
      noQuoteEntries_0_1_0.set(StrikeValue_27);
      Instrument_27.insert(StrikeValue_27.getString());
      FIX::Symbol Symbol_27("STRING_915050031");
      noQuoteEntries_0_1_0.set(Symbol_27);
      Instrument_27.insert(Symbol_27.getString());
      FIX::SymbolSfx SymbolSfx_27("STRING_CD");
      noQuoteEntries_0_1_0.set(SymbolSfx_27);
      Instrument_27.insert(SymbolSfx_27.getString());
      FIX::TimeUnit TimeUnit_27("STRING_S");
      noQuoteEntries_0_1_0.set(TimeUnit_27);
      Instrument_27.insert(TimeUnit_27.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_27(1);
      noQuoteEntries_0_1_0.set(UnderlyingPriceDeterminationMethod_27);
      Instrument_27.insert(UnderlyingPriceDeterminationMethod_27.getString());
      FIX::UnitOfMeasure UnitOfMeasure_27("STRING_MWh");
      noQuoteEntries_0_1_0.set(UnitOfMeasure_27);
      Instrument_27.insert(UnitOfMeasure_27.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_27;
      UnitOfMeasureQty_27.setString("18580807");
      noQuoteEntries_0_1_0.set(UnitOfMeasureQty_27);
      Instrument_27.insert(UnitOfMeasureQty_27.getString());
      FIX::ValuationMethod ValuationMethod_27("STRING_CDSD");
      noQuoteEntries_0_1_0.set(ValuationMethod_27);
      Instrument_27.insert(ValuationMethod_27.getString());
      all_values.push_back(Instrument_27);
      all_compo_names.insert("..NoQuoteSets..NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_27;
        FIX::ComplexEventCondition ComplexEventCondition_27(2);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_27);
        ComplexEvents_NoComplexEvents_27.insert(ComplexEventCondition_27.getString());
        FIX::ComplexEventPrice ComplexEventPrice_27;
        ComplexEventPrice_27.setString("71146");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_27);
        ComplexEvents_NoComplexEvents_27.insert(ComplexEventPrice_27.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_27(5);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_27);
        ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceBoundaryMethod_27.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_27;
        ComplexEventPriceBoundaryPrecision_27.setString("75.950000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_27);
        ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceBoundaryPrecision_27.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_27(3);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_27);
        ComplexEvents_NoComplexEvents_27.insert(ComplexEventPriceTimeType_27.getString());
        FIX::ComplexEventType ComplexEventType_27(9);
        noComplexEvents_0_0_2_0.set(ComplexEventType_27);
        ComplexEvents_NoComplexEvents_27.insert(ComplexEventType_27.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_27;
        ComplexOptPayoutAmount_27.setString("9290254");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_27);
        ComplexEvents_NoComplexEvents_27.insert(ComplexOptPayoutAmount_27.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_27);
        all_compo_names.insert("..NoQuoteSets..NoQuoteEntries...NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_27;
          FIX::ComplexEventEndDate ComplexEventEndDate_27(FIX::UTCTIMESTAMP(9, 46, 21, 23, 6, 2003));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_27);
          ComplexEventDates_NoComplexEventDates_27.insert(ComplexEventEndDate_27.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_27(FIX::UTCTIMESTAMP(13, 13, 13, 3, 10, 2006));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_27);
          ComplexEventDates_NoComplexEventDates_27.insert(ComplexEventStartDate_27.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_27);
          all_compo_names.insert("..NoQuoteSets..NoQuoteEntries...NoComplexEvents..NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_27;
            FIX::ComplexEventEndTime ComplexEventEndTime_27(FIX::UTCTIMEONLY(3, 48, 40));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_27);
            ComplexEventTimes_NoComplexEventTimes_27.insert(ComplexEventEndTime_27.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_27(FIX::UTCTIMEONLY(10, 47, 54));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_27);
            ComplexEventTimes_NoComplexEventTimes_27.insert(ComplexEventStartTime_27.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_27);
            all_compo_names.insert("..NoQuoteSets..NoQuoteEntries...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_27;
        FIX::EventDate EventDate_27("LOCALMKTDATE_881473795");
        noEvents_0_0_2_0.set(EventDate_27);
        EvntGrp_NoEvents_27.insert(EventDate_27.getString());
        FIX::EventPx EventPx_27;
        EventPx_27.setString("16612380");
        noEvents_0_0_2_0.set(EventPx_27);
        EvntGrp_NoEvents_27.insert(EventPx_27.getString());
        FIX::EventText EventText_27("STRING_240951523");
        noEvents_0_0_2_0.set(EventText_27);
        EvntGrp_NoEvents_27.insert(EventText_27.getString());
        FIX::EventTime EventTime_27(FIX::UTCTIMESTAMP(12, 57, 30, 16, 11, 2015));
        noEvents_0_0_2_0.set(EventTime_27);
        EvntGrp_NoEvents_27.insert(EventTime_27.getString());
        FIX::EventType EventType_27(18);
        noEvents_0_0_2_0.set(EventType_27);
        EvntGrp_NoEvents_27.insert(EventType_27.getString());
        all_values.push_back(EvntGrp_NoEvents_27);
        all_compo_names.insert("..NoQuoteSets..NoQuoteEntries...NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_27;
        FIX::InstrumentPartyID InstrumentPartyID_27("STRING_1622734550");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_27);
        InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyID_27.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_27('1');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_27);
        InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyIDSource_27.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_27(1360376850);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_27);
        InstrumentParties_NoInstrumentParties_27.insert(InstrumentPartyRole_27.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_27);
        all_compo_names.insert("..NoQuoteSets..NoQuoteEntries...NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27;
          FIX::InstrumentPartySubID InstrumentPartySubID_27("STRING_1240156187");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_27);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27.insert(InstrumentPartySubID_27.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_27(1437411643);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_27);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27.insert(InstrumentPartySubIDType_27.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_27);
          all_compo_names.insert("..NoQuoteSets..NoQuoteEntries...NoInstrumentParties..NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_27;
        FIX::SecurityAltID SecurityAltID_27("STRING_1614733053");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_27);
        SecAltIDGrp_NoSecurityAltID_27.insert(SecurityAltID_27.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_27("STRING_446656494");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_27);
        SecAltIDGrp_NoSecurityAltID_27.insert(SecurityAltIDSource_27.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_27);
        all_compo_names.insert("..NoQuoteSets..NoQuoteEntries...NoSecurityAltID");

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_54;
      FIX::SecurityXML SecurityXML_55("XMLDATA_1871010323");
      noQuoteEntries_0_1_0.set(SecurityXML_55);
      FIX::SecurityXMLLen SecurityXMLLen_27(756876301);
      noQuoteEntries_0_1_0.set(SecurityXMLLen_27);
      FIX::SecurityXMLSchema SecurityXMLSchema_27("STRING_1488523185");
      noQuoteEntries_0_1_0.set(SecurityXMLSchema_27);
      SecurityXML_54.insert(SecurityXMLSchema_27.getString());
      all_values.push_back(SecurityXML_54);
      all_compo_names.insert("..NoQuoteSets..NoQuoteEntries..");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_27;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_27("DATA_969770944");
    noQuoteSets_0_0.set(EncodedUnderlyingIssuer_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingIssuer_27.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_27(1953542562);
    noQuoteSets_0_0.set(EncodedUnderlyingIssuerLen_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingIssuerLen_27.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_27("DATA_840347696");
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDesc_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingSecurityDesc_27.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_27(1926612314);
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDescLen_27);
    UnderlyingInstrument_27.insert(EncodedUnderlyingSecurityDescLen_27.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_27;
    UnderlyingAdjustedQuantity_27.setString("6804180");
    noQuoteSets_0_0.set(UnderlyingAdjustedQuantity_27);
    UnderlyingInstrument_27.insert(UnderlyingAdjustedQuantity_27.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_27;
    UnderlyingAllocationPercent_27.setString("90.430000");
    noQuoteSets_0_0.set(UnderlyingAllocationPercent_27);
    UnderlyingInstrument_27.insert(UnderlyingAllocationPercent_27.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_27;
    UnderlyingAttachmentPoint_27.setString("62.420000");
    noQuoteSets_0_0.set(UnderlyingAttachmentPoint_27);
    UnderlyingInstrument_27.insert(UnderlyingAttachmentPoint_27.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_27("STRING_1561891876");
    noQuoteSets_0_0.set(UnderlyingCFICode_27);
    UnderlyingInstrument_27.insert(UnderlyingCFICode_27.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_27("STRING_328083430");
    noQuoteSets_0_0.set(UnderlyingCPProgram_27);
    UnderlyingInstrument_27.insert(UnderlyingCPProgram_27.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_27("STRING_448857765");
    noQuoteSets_0_0.set(UnderlyingCPRegType_27);
    UnderlyingInstrument_27.insert(UnderlyingCPRegType_27.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_27;
    UnderlyingCapValue_27.setString("3946854");
    noQuoteSets_0_0.set(UnderlyingCapValue_27);
    UnderlyingInstrument_27.insert(UnderlyingCapValue_27.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_27;
    UnderlyingCashAmount_27.setString("5733755");
    noQuoteSets_0_0.set(UnderlyingCashAmount_27);
    UnderlyingInstrument_27.insert(UnderlyingCashAmount_27.getString());
    FIX::UnderlyingCashType UnderlyingCashType_27("STRING_FIXED");
    noQuoteSets_0_0.set(UnderlyingCashType_27);
    UnderlyingInstrument_27.insert(UnderlyingCashType_27.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_27;
    UnderlyingContractMultiplier_27.setString("3190585");
    noQuoteSets_0_0.set(UnderlyingContractMultiplier_27);
    UnderlyingInstrument_27.insert(UnderlyingContractMultiplier_27.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_27(1539096563);
    noQuoteSets_0_0.set(UnderlyingContractMultiplierUnit_27);
    UnderlyingInstrument_27.insert(UnderlyingContractMultiplierUnit_27.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_27("COUNTRY_575582912");
    noQuoteSets_0_0.set(UnderlyingCountryOfIssue_27);
    UnderlyingInstrument_27.insert(UnderlyingCountryOfIssue_27.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_27("LOCALMKTDATE_566081613");
    noQuoteSets_0_0.set(UnderlyingCouponPaymentDate_27);
    UnderlyingInstrument_27.insert(UnderlyingCouponPaymentDate_27.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_27;
    UnderlyingCouponRate_27.setString("11.400000");
    noQuoteSets_0_0.set(UnderlyingCouponRate_27);
    UnderlyingInstrument_27.insert(UnderlyingCouponRate_27.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_27("STRING_49162322");
    noQuoteSets_0_0.set(UnderlyingCreditRating_27);
    UnderlyingInstrument_27.insert(UnderlyingCreditRating_27.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_27("CHF");
    noQuoteSets_0_0.set(UnderlyingCurrency_27);
    UnderlyingInstrument_27.insert(UnderlyingCurrency_27.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_27;
    UnderlyingCurrentValue_27.setString("14095391");
    noQuoteSets_0_0.set(UnderlyingCurrentValue_27);
    UnderlyingInstrument_27.insert(UnderlyingCurrentValue_27.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_27;
    UnderlyingDetachmentPoint_27.setString("17.520000");
    noQuoteSets_0_0.set(UnderlyingDetachmentPoint_27);
    UnderlyingInstrument_27.insert(UnderlyingDetachmentPoint_27.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_27;
    UnderlyingDirtyPrice_27.setString("1202305");
    noQuoteSets_0_0.set(UnderlyingDirtyPrice_27);
    UnderlyingInstrument_27.insert(UnderlyingDirtyPrice_27.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_27;
    UnderlyingEndPrice_27.setString("6994671");
    noQuoteSets_0_0.set(UnderlyingEndPrice_27);
    UnderlyingInstrument_27.insert(UnderlyingEndPrice_27.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_27;
    UnderlyingEndValue_27.setString("143614");
    noQuoteSets_0_0.set(UnderlyingEndValue_27);
    UnderlyingInstrument_27.insert(UnderlyingEndValue_27.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_27(1734963639);
    noQuoteSets_0_0.set(UnderlyingExerciseStyle_27);
    UnderlyingInstrument_27.insert(UnderlyingExerciseStyle_27.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_27;
    UnderlyingFXRate_27.setString("11461236");
    noQuoteSets_0_0.set(UnderlyingFXRate_27);
    UnderlyingInstrument_27.insert(UnderlyingFXRate_27.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_27('D');
    noQuoteSets_0_0.set(UnderlyingFXRateCalc_27);
    UnderlyingInstrument_27.insert(UnderlyingFXRateCalc_27.getString());
    FIX::UnderlyingFactor UnderlyingFactor_27;
    UnderlyingFactor_27.setString("3443562");
    noQuoteSets_0_0.set(UnderlyingFactor_27);
    UnderlyingInstrument_27.insert(UnderlyingFactor_27.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_27(487163199);
    noQuoteSets_0_0.set(UnderlyingFlowScheduleType_27);
    UnderlyingInstrument_27.insert(UnderlyingFlowScheduleType_27.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_27("STRING_707659042");
    noQuoteSets_0_0.set(UnderlyingInstrRegistry_27);
    UnderlyingInstrument_27.insert(UnderlyingInstrRegistry_27.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_27("LOCALMKTDATE_150415207");
    noQuoteSets_0_0.set(UnderlyingIssueDate_27);
    UnderlyingInstrument_27.insert(UnderlyingIssueDate_27.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_27("STRING_1327510895");
    noQuoteSets_0_0.set(UnderlyingIssuer_27);
    UnderlyingInstrument_27.insert(UnderlyingIssuer_27.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_27("STRING_486787709");
    noQuoteSets_0_0.set(UnderlyingLocaleOfIssue_27);
    UnderlyingInstrument_27.insert(UnderlyingLocaleOfIssue_27.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_27("LOCALMKTDATE_830833288");
    noQuoteSets_0_0.set(UnderlyingMaturityDate_27);
    UnderlyingInstrument_27.insert(UnderlyingMaturityDate_27.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_27("MONTHYEAR_2141839938");
    noQuoteSets_0_0.set(UnderlyingMaturityMonthYear_27);
    UnderlyingInstrument_27.insert(UnderlyingMaturityMonthYear_27.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_27("TZTIMEONLY_694693951");
    noQuoteSets_0_0.set(UnderlyingMaturityTime_27);
    UnderlyingInstrument_27.insert(UnderlyingMaturityTime_27.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_27;
    UnderlyingNotionalPercentageOutstanding_27.setString("15.160000");
    noQuoteSets_0_0.set(UnderlyingNotionalPercentageOutstanding_27);
    UnderlyingInstrument_27.insert(UnderlyingNotionalPercentageOutstanding_27.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_27('3');
    noQuoteSets_0_0.set(UnderlyingOptAttribute_27);
    UnderlyingInstrument_27.insert(UnderlyingOptAttribute_27.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_27;
    UnderlyingOriginalNotionalPercentageOutstanding_27.setString("17.170000");
    noQuoteSets_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_27);
    UnderlyingInstrument_27.insert(UnderlyingOriginalNotionalPercentageOutstanding_27.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_27("STRING_639926978");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasure_27);
    UnderlyingInstrument_27.insert(UnderlyingPriceUnitOfMeasure_27.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_27;
    UnderlyingPriceUnitOfMeasureQty_27.setString("8958152");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasureQty_27);
    UnderlyingInstrument_27.insert(UnderlyingPriceUnitOfMeasureQty_27.getString());
    FIX::UnderlyingProduct UnderlyingProduct_27(614902791);
    noQuoteSets_0_0.set(UnderlyingProduct_27);
    UnderlyingInstrument_27.insert(UnderlyingProduct_27.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_27(958985522);
    noQuoteSets_0_0.set(UnderlyingPutOrCall_27);
    UnderlyingInstrument_27.insert(UnderlyingPutOrCall_27.getString());
    FIX::UnderlyingPx UnderlyingPx_27;
    UnderlyingPx_27.setString("2874281");
    noQuoteSets_0_0.set(UnderlyingPx_27);
    UnderlyingInstrument_27.insert(UnderlyingPx_27.getString());
    FIX::UnderlyingQty UnderlyingQty_27;
    UnderlyingQty_27.setString("11904857");
    noQuoteSets_0_0.set(UnderlyingQty_27);
    UnderlyingInstrument_27.insert(UnderlyingQty_27.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_27("LOCALMKTDATE_1525067136");
    noQuoteSets_0_0.set(UnderlyingRedemptionDate_27);
    UnderlyingInstrument_27.insert(UnderlyingRedemptionDate_27.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_27("STRING_265115667");
    noQuoteSets_0_0.set(UnderlyingRepoCollateralSecurityType_27);
    UnderlyingInstrument_27.insert(UnderlyingRepoCollateralSecurityType_27.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_27;
    UnderlyingRepurchaseRate_27.setString("80.260000");
    noQuoteSets_0_0.set(UnderlyingRepurchaseRate_27);
    UnderlyingInstrument_27.insert(UnderlyingRepurchaseRate_27.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_27(1566399652);
    noQuoteSets_0_0.set(UnderlyingRepurchaseTerm_27);
    UnderlyingInstrument_27.insert(UnderlyingRepurchaseTerm_27.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_27("STRING_1292673714");
    noQuoteSets_0_0.set(UnderlyingRestructuringType_27);
    UnderlyingInstrument_27.insert(UnderlyingRestructuringType_27.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_27("STRING_501703550");
    noQuoteSets_0_0.set(UnderlyingSecurityDesc_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityDesc_27.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_27("EXCHANGE_1403107756");
    noQuoteSets_0_0.set(UnderlyingSecurityExchange_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityExchange_27.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_27("STRING_1412904300");
    noQuoteSets_0_0.set(UnderlyingSecurityID_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityID_27.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_27("STRING_1201170718");
    noQuoteSets_0_0.set(UnderlyingSecurityIDSource_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityIDSource_27.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_27("STRING_1417469179");
    noQuoteSets_0_0.set(UnderlyingSecuritySubType_27);
    UnderlyingInstrument_27.insert(UnderlyingSecuritySubType_27.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_27("STRING_1000384292");
    noQuoteSets_0_0.set(UnderlyingSecurityType_27);
    UnderlyingInstrument_27.insert(UnderlyingSecurityType_27.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_27("STRING_199810732");
    noQuoteSets_0_0.set(UnderlyingSeniority_27);
    UnderlyingInstrument_27.insert(UnderlyingSeniority_27.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_27("STRING_1155357277");
    noQuoteSets_0_0.set(UnderlyingSettlMethod_27);
    UnderlyingInstrument_27.insert(UnderlyingSettlMethod_27.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_27(5);
    noQuoteSets_0_0.set(UnderlyingSettlementType_27);
    UnderlyingInstrument_27.insert(UnderlyingSettlementType_27.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_27;
    UnderlyingStartValue_27.setString("6869739");
    noQuoteSets_0_0.set(UnderlyingStartValue_27);
    UnderlyingInstrument_27.insert(UnderlyingStartValue_27.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_27("STRING_1863016320");
    noQuoteSets_0_0.set(UnderlyingStateOrProvinceOfIssue_27);
    UnderlyingInstrument_27.insert(UnderlyingStateOrProvinceOfIssue_27.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_27("EUR");
    noQuoteSets_0_0.set(UnderlyingStrikeCurrency_27);
    UnderlyingInstrument_27.insert(UnderlyingStrikeCurrency_27.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_27;
    UnderlyingStrikePrice_27.setString("2023203");
    noQuoteSets_0_0.set(UnderlyingStrikePrice_27);
    UnderlyingInstrument_27.insert(UnderlyingStrikePrice_27.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_27("STRING_178505432");
    noQuoteSets_0_0.set(UnderlyingSymbol_27);
    UnderlyingInstrument_27.insert(UnderlyingSymbol_27.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_27("STRING_2008841117");
    noQuoteSets_0_0.set(UnderlyingSymbolSfx_27);
    UnderlyingInstrument_27.insert(UnderlyingSymbolSfx_27.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_27("STRING_897014332");
    noQuoteSets_0_0.set(UnderlyingTimeUnit_27);
    UnderlyingInstrument_27.insert(UnderlyingTimeUnit_27.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_27("STRING_423746948");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasure_27);
    UnderlyingInstrument_27.insert(UnderlyingUnitOfMeasure_27.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_27;
    UnderlyingUnitOfMeasureQty_27.setString("1837971");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasureQty_27);
    UnderlyingInstrument_27.insert(UnderlyingUnitOfMeasureQty_27.getString());
    all_values.push_back(UnderlyingInstrument_27);
    all_compo_names.insert("..NoQuoteSets.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_27;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_27("STRING_1063673926");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_27);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_27.insert(UnderlyingSecurityAltID_27.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_27("STRING_1079612450");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_27);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_27.insert(UnderlyingSecurityAltIDSource_27.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_27);
      all_compo_names.insert("..NoQuoteSets...NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_27;
      FIX::UnderlyingStipType UnderlyingStipType_27("STRING_2022659448");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_27);
      UnderlyingStipulations_NoUnderlyingStips_27.insert(UnderlyingStipType_27.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_27("STRING_1367040624");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_27);
      UnderlyingStipulations_NoUnderlyingStips_27.insert(UnderlyingStipValue_27.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_27);
      all_compo_names.insert("..NoQuoteSets...NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_27;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_27("STRING_1400242936");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyID_27.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_27('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyIDSource_27.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_27(790635275);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_27);
      UndlyInstrumentParties_NoUndlyInstrumentParties_27.insert(UnderlyingInstrumentPartyRole_27.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_27);
      all_compo_names.insert("..NoQuoteSets...NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_27("STRING_777346357");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_27);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27.insert(UnderlyingInstrumentPartySubID_27.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_27(1292338825);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_27);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27.insert(UnderlyingInstrumentPartySubIDType_27.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_27);
        all_compo_names.insert("..NoQuoteSets...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noQuoteSets_0_0);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    cout << "########################" << endl;
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, "\n"));
    cout << "########################" << endl; 
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, "\n"));
  }  cout << "FIX components" << endl;
  for (const auto& l : all_values) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }
  cout << "XML components" << endl;
  for (const auto& l : elt_lists) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
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
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
