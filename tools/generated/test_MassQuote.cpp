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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MassQuote msg;

  list<multiset<string>> all_values;
  multiset<string> MassQuote_0;
  FIX::Account Account_13("STRING_1257117367");
  msg.set(Account_13);
  MassQuote_0.insert(Account_13.getString());
  FIX::AccountType AccountType_11(1);
  msg.set(AccountType_11);
  MassQuote_0.insert(AccountType_11.getString());
  FIX::AcctIDSource AcctIDSource_6(2);
  msg.set(AcctIDSource_6);
  MassQuote_0.insert(AcctIDSource_6.getString());
  FIX::DefBidSize DefBidSize_0;
  DefBidSize_0.setString("15179144");
  msg.set(DefBidSize_0);
  MassQuote_0.insert(DefBidSize_0.getString());
  FIX::DefOfferSize DefOfferSize_0;
  DefOfferSize_0.setString("1190304");
  msg.set(DefOfferSize_0);
  MassQuote_0.insert(DefOfferSize_0.getString());
  FIX::QuoteID QuoteID_1("STRING_1088480506");
  msg.set(QuoteID_1);
  MassQuote_0.insert(QuoteID_1.getString());
  FIX::QuoteReqID QuoteReqID_0("STRING_204171608");
  msg.set(QuoteReqID_0);
  MassQuote_0.insert(QuoteReqID_0.getString());
  FIX::QuoteResponseLevel QuoteResponseLevel_0(0);
  msg.set(QuoteResponseLevel_0);
  MassQuote_0.insert(QuoteResponseLevel_0.getString());
  FIX::QuoteType QuoteType_2(3);
  msg.set(QuoteType_2);
  MassQuote_0.insert(QuoteType_2.getString());
  all_values.push_back(MassQuote_0);

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MassQuote::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_64;
    FIX::PartyID PartyID_64("STRING_29425780");
    noPartyIDs_0_0.set(PartyID_64);
    Parties_NoPartyIDs_64.insert(PartyID_64.getString());
    FIX::PartyIDSource PartyIDSource_64('9');
    noPartyIDs_0_0.set(PartyIDSource_64);
    Parties_NoPartyIDs_64.insert(PartyIDSource_64.getString());
    FIX::PartyRole PartyRole_64(8);
    noPartyIDs_0_0.set(PartyRole_64);
    Parties_NoPartyIDs_64.insert(PartyRole_64.getString());
    all_values.push_back(Parties_NoPartyIDs_64);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_130;
      FIX::PartySubID PartySubID_130("STRING_167613212");
      noPartySubIDs_0_1_0.set(PartySubID_130);
      PtysSubGrp_NoPartySubIDs_130.insert(PartySubID_130.getString());
      FIX::PartySubIDType PartySubIDType_130(25);
      noPartySubIDs_0_1_0.set(PartySubIDType_130);
      PtysSubGrp_NoPartySubIDs_130.insert(PartySubIDType_130.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_130);

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
    FIX::LastFragment LastFragment_8(false);
    noQuoteSets_0_0.set(LastFragment_8);
    QuotSetGrp_NoQuoteSets_0.insert(LastFragment_8.getString());
    FIX::QuoteSetID QuoteSetID_0("STRING_1861415167");
    noQuoteSets_0_0.set(QuoteSetID_0);
    QuotSetGrp_NoQuoteSets_0.insert(QuoteSetID_0.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_0(FIX::UTCTIMESTAMP(8, 59, 21, 14, 62006));
    noQuoteSets_0_0.set(QuoteSetValidUntilTime_0);
    QuotSetGrp_NoQuoteSets_0.insert(QuoteSetValidUntilTime_0.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_0(687264388);
    noQuoteSets_0_0.set(TotNoQuoteEntries_0);
    QuotSetGrp_NoQuoteSets_0.insert(TotNoQuoteEntries_0.getString());
    all_values.push_back(QuotSetGrp_NoQuoteSets_0);

    // QuotEntryGrp
    // Group QuotEntryGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_0;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_0;
      FIX::BidForwardPoints BidForwardPoints_0;
      BidForwardPoints_0.setString("4991729");
      noQuoteEntries_0_1_0.set(BidForwardPoints_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidForwardPoints_0.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_0;
      BidForwardPoints2_0.setString("14137006");
      noQuoteEntries_0_1_0.set(BidForwardPoints2_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidForwardPoints2_0.getString());
      FIX::BidPx BidPx_0;
      BidPx_0.setString("1905570");
      noQuoteEntries_0_1_0.set(BidPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidPx_0.getString());
      FIX::BidSize BidSize_0;
      BidSize_0.setString("17562903");
      noQuoteEntries_0_1_0.set(BidSize_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidSize_0.getString());
      FIX::BidSpotRate BidSpotRate_0;
      BidSpotRate_0.setString("10208037");
      noQuoteEntries_0_1_0.set(BidSpotRate_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidSpotRate_0.getString());
      FIX::BidYield BidYield_0;
      BidYield_0.setString("99.410000");
      noQuoteEntries_0_1_0.set(BidYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidYield_0.getString());
      FIX::BookingType BookingType_7(0);
      noQuoteEntries_0_1_0.set(BookingType_7);
      QuotEntryGrp_NoQuoteEntries_0.insert(BookingType_7.getString());
      FIX::Currency Currency_30("CHF");
      noQuoteEntries_0_1_0.set(Currency_30);
      QuotEntryGrp_NoQuoteEntries_0.insert(Currency_30.getString());
      FIX::MidPx MidPx_0;
      MidPx_0.setString("13308927");
      noQuoteEntries_0_1_0.set(MidPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(MidPx_0.getString());
      FIX::MidYield MidYield_0;
      MidYield_0.setString("18.040000");
      noQuoteEntries_0_1_0.set(MidYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(MidYield_0.getString());
      FIX::OfferForwardPoints OfferForwardPoints_0;
      OfferForwardPoints_0.setString("15439369");
      noQuoteEntries_0_1_0.set(OfferForwardPoints_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferForwardPoints_0.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_0;
      OfferForwardPoints2_0.setString("10676438");
      noQuoteEntries_0_1_0.set(OfferForwardPoints2_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferForwardPoints2_0.getString());
      FIX::OfferPx OfferPx_0;
      OfferPx_0.setString("11881875");
      noQuoteEntries_0_1_0.set(OfferPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferPx_0.getString());
      FIX::OfferSize OfferSize_0;
      OfferSize_0.setString("4383566");
      noQuoteEntries_0_1_0.set(OfferSize_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferSize_0.getString());
      FIX::OfferSpotRate OfferSpotRate_0;
      OfferSpotRate_0.setString("21211502");
      noQuoteEntries_0_1_0.set(OfferSpotRate_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferSpotRate_0.getString());
      FIX::OfferYield OfferYield_0;
      OfferYield_0.setString("28.830000");
      noQuoteEntries_0_1_0.set(OfferYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferYield_0.getString());
      FIX::OrdType OrdType_35('9');
      noQuoteEntries_0_1_0.set(OrdType_35);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrdType_35.getString());
      FIX::OrderCapacity OrderCapacity_10('P');
      noQuoteEntries_0_1_0.set(OrderCapacity_10);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderCapacity_10.getString());
      FIX::OrderQty2 OrderQty2_1;
      OrderQty2_1.setString("1070542");
      noQuoteEntries_0_1_0.set(OrderQty2_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderQty2_1.getString());
      FIX::OrderRestrictions OrderRestrictions_7("MULTIPLECHARVALUE_F");
      noQuoteEntries_0_1_0.set(OrderRestrictions_7);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderRestrictions_7.getString());
      FIX::QuoteEntryID QuoteEntryID_3("STRING_1111636766");
      noQuoteEntries_0_1_0.set(QuoteEntryID_3);
      QuotEntryGrp_NoQuoteEntries_0.insert(QuoteEntryID_3.getString());
      FIX::SettlDate SettlDate_20("LOCALMKTDATE_1752959266");
      noQuoteEntries_0_1_0.set(SettlDate_20);
      QuotEntryGrp_NoQuoteEntries_0.insert(SettlDate_20.getString());
      FIX::SettlDate2 SettlDate2_1("LOCALMKTDATE_830942255");
      noQuoteEntries_0_1_0.set(SettlDate2_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(SettlDate2_1.getString());
      FIX::TradingSessionID TradingSessionID_31("STRING_6");
      noQuoteEntries_0_1_0.set(TradingSessionID_31);
      QuotEntryGrp_NoQuoteEntries_0.insert(TradingSessionID_31.getString());
      FIX::TradingSessionSubID TradingSessionSubID_31("STRING_4");
      noQuoteEntries_0_1_0.set(TradingSessionSubID_31);
      QuotEntryGrp_NoQuoteEntries_0.insert(TradingSessionSubID_31.getString());
      FIX::TransactTime TransactTime_26(FIX::UTCTIMESTAMP(10, 18, 50, 2, 102012));
      noQuoteEntries_0_1_0.set(TransactTime_26);
      QuotEntryGrp_NoQuoteEntries_0.insert(TransactTime_26.getString());
      FIX::ValidUntilTime ValidUntilTime_1(FIX::UTCTIMESTAMP(15, 31, 17, 21, 82002));
      noQuoteEntries_0_1_0.set(ValidUntilTime_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(ValidUntilTime_1.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_0);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_54;
        FIX::EncodedLegIssuer EncodedLegIssuer_54("DATA_1241362611");
        noLegs_0_0_2_0.set(EncodedLegIssuer_54);
        InstrumentLeg_54.insert(EncodedLegIssuer_54.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_54(617418731);
        noLegs_0_0_2_0.set(EncodedLegIssuerLen_54);
        InstrumentLeg_54.insert(EncodedLegIssuerLen_54.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_54("DATA_1094530824");
        noLegs_0_0_2_0.set(EncodedLegSecurityDesc_54);
        InstrumentLeg_54.insert(EncodedLegSecurityDesc_54.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_54(282066548);
        noLegs_0_0_2_0.set(EncodedLegSecurityDescLen_54);
        InstrumentLeg_54.insert(EncodedLegSecurityDescLen_54.getString());
        FIX::LegCFICode LegCFICode_54("STRING_1055775335");
        noLegs_0_0_2_0.set(LegCFICode_54);
        InstrumentLeg_54.insert(LegCFICode_54.getString());
        FIX::LegContractMultiplier LegContractMultiplier_54;
        LegContractMultiplier_54.setString("10681974");
        noLegs_0_0_2_0.set(LegContractMultiplier_54);
        InstrumentLeg_54.insert(LegContractMultiplier_54.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_54(1962969431);
        noLegs_0_0_2_0.set(LegContractMultiplierUnit_54);
        InstrumentLeg_54.insert(LegContractMultiplierUnit_54.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_54("MONTHYEAR_1661745152");
        noLegs_0_0_2_0.set(LegContractSettlMonth_54);
        InstrumentLeg_54.insert(LegContractSettlMonth_54.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_54("COUNTRY_318419009");
        noLegs_0_0_2_0.set(LegCountryOfIssue_54);
        InstrumentLeg_54.insert(LegCountryOfIssue_54.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_54("LOCALMKTDATE_2070023719");
        noLegs_0_0_2_0.set(LegCouponPaymentDate_54);
        InstrumentLeg_54.insert(LegCouponPaymentDate_54.getString());
        FIX::LegCouponRate LegCouponRate_54;
        LegCouponRate_54.setString("21.830000");
        noLegs_0_0_2_0.set(LegCouponRate_54);
        InstrumentLeg_54.insert(LegCouponRate_54.getString());
        FIX::LegCreditRating LegCreditRating_54("STRING_1430055776");
        noLegs_0_0_2_0.set(LegCreditRating_54);
        InstrumentLeg_54.insert(LegCreditRating_54.getString());
        FIX::LegCurrency LegCurrency_54("CHF");
        noLegs_0_0_2_0.set(LegCurrency_54);
        InstrumentLeg_54.insert(LegCurrency_54.getString());
        FIX::LegDatedDate LegDatedDate_54("LOCALMKTDATE_2026016593");
        noLegs_0_0_2_0.set(LegDatedDate_54);
        InstrumentLeg_54.insert(LegDatedDate_54.getString());
        FIX::LegExerciseStyle LegExerciseStyle_54(964740829);
        noLegs_0_0_2_0.set(LegExerciseStyle_54);
        InstrumentLeg_54.insert(LegExerciseStyle_54.getString());
        FIX::LegFactor LegFactor_54;
        LegFactor_54.setString("4519158");
        noLegs_0_0_2_0.set(LegFactor_54);
        InstrumentLeg_54.insert(LegFactor_54.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_54(1882179052);
        noLegs_0_0_2_0.set(LegFlowScheduleType_54);
        InstrumentLeg_54.insert(LegFlowScheduleType_54.getString());
        FIX::LegInstrRegistry LegInstrRegistry_54("STRING_573518039");
        noLegs_0_0_2_0.set(LegInstrRegistry_54);
        InstrumentLeg_54.insert(LegInstrRegistry_54.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_54("LOCALMKTDATE_1255145343");
        noLegs_0_0_2_0.set(LegInterestAccrualDate_54);
        InstrumentLeg_54.insert(LegInterestAccrualDate_54.getString());
        FIX::LegIssueDate LegIssueDate_54("LOCALMKTDATE_1149790682");
        noLegs_0_0_2_0.set(LegIssueDate_54);
        InstrumentLeg_54.insert(LegIssueDate_54.getString());
        FIX::LegIssuer LegIssuer_54("STRING_681468188");
        noLegs_0_0_2_0.set(LegIssuer_54);
        InstrumentLeg_54.insert(LegIssuer_54.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_54("STRING_1324591839");
        noLegs_0_0_2_0.set(LegLocaleOfIssue_54);
        InstrumentLeg_54.insert(LegLocaleOfIssue_54.getString());
        FIX::LegMaturityDate LegMaturityDate_54("LOCALMKTDATE_607959378");
        noLegs_0_0_2_0.set(LegMaturityDate_54);
        InstrumentLeg_54.insert(LegMaturityDate_54.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_54("MONTHYEAR_398224996");
        noLegs_0_0_2_0.set(LegMaturityMonthYear_54);
        InstrumentLeg_54.insert(LegMaturityMonthYear_54.getString());
        FIX::LegMaturityTime LegMaturityTime_54("TZTIMEONLY_267358442");
        noLegs_0_0_2_0.set(LegMaturityTime_54);
        InstrumentLeg_54.insert(LegMaturityTime_54.getString());
        FIX::LegOptAttribute LegOptAttribute_54('1');
        noLegs_0_0_2_0.set(LegOptAttribute_54);
        InstrumentLeg_54.insert(LegOptAttribute_54.getString());
        FIX::LegOptionRatio LegOptionRatio_54;
        LegOptionRatio_54.setString("12417029");
        noLegs_0_0_2_0.set(LegOptionRatio_54);
        InstrumentLeg_54.insert(LegOptionRatio_54.getString());
        FIX::LegPool LegPool_54("STRING_349959249");
        noLegs_0_0_2_0.set(LegPool_54);
        InstrumentLeg_54.insert(LegPool_54.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_54("STRING_550509803");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasure_54);
        InstrumentLeg_54.insert(LegPriceUnitOfMeasure_54.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_54;
        LegPriceUnitOfMeasureQty_54.setString("12685899");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasureQty_54);
        InstrumentLeg_54.insert(LegPriceUnitOfMeasureQty_54.getString());
        FIX::LegProduct LegProduct_54(1591321861);
        noLegs_0_0_2_0.set(LegProduct_54);
        InstrumentLeg_54.insert(LegProduct_54.getString());
        FIX::LegPutOrCall LegPutOrCall_54(1167928535);
        noLegs_0_0_2_0.set(LegPutOrCall_54);
        InstrumentLeg_54.insert(LegPutOrCall_54.getString());
        FIX::LegRatioQty LegRatioQty_54;
        LegRatioQty_54.setString("2156371");
        noLegs_0_0_2_0.set(LegRatioQty_54);
        InstrumentLeg_54.insert(LegRatioQty_54.getString());
        FIX::LegRedemptionDate LegRedemptionDate_54("LOCALMKTDATE_1873388409");
        noLegs_0_0_2_0.set(LegRedemptionDate_54);
        InstrumentLeg_54.insert(LegRedemptionDate_54.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_54("STRING_76220222");
        noLegs_0_0_2_0.set(LegRepoCollateralSecurityType_54);
        InstrumentLeg_54.insert(LegRepoCollateralSecurityType_54.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_54;
        LegRepurchaseRate_54.setString("45.220000");
        noLegs_0_0_2_0.set(LegRepurchaseRate_54);
        InstrumentLeg_54.insert(LegRepurchaseRate_54.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_54(1688874192);
        noLegs_0_0_2_0.set(LegRepurchaseTerm_54);
        InstrumentLeg_54.insert(LegRepurchaseTerm_54.getString());
        FIX::LegSecurityDesc LegSecurityDesc_54("STRING_1737965374");
        noLegs_0_0_2_0.set(LegSecurityDesc_54);
        InstrumentLeg_54.insert(LegSecurityDesc_54.getString());
        FIX::LegSecurityExchange LegSecurityExchange_54("EXCHANGE_1602253531");
        noLegs_0_0_2_0.set(LegSecurityExchange_54);
        InstrumentLeg_54.insert(LegSecurityExchange_54.getString());
        FIX::LegSecurityID LegSecurityID_54("STRING_1611414264");
        noLegs_0_0_2_0.set(LegSecurityID_54);
        InstrumentLeg_54.insert(LegSecurityID_54.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_54("STRING_1242973910");
        noLegs_0_0_2_0.set(LegSecurityIDSource_54);
        InstrumentLeg_54.insert(LegSecurityIDSource_54.getString());
        FIX::LegSecuritySubType LegSecuritySubType_54("STRING_884825659");
        noLegs_0_0_2_0.set(LegSecuritySubType_54);
        InstrumentLeg_54.insert(LegSecuritySubType_54.getString());
        FIX::LegSecurityType LegSecurityType_54("STRING_1139429954");
        noLegs_0_0_2_0.set(LegSecurityType_54);
        InstrumentLeg_54.insert(LegSecurityType_54.getString());
        FIX::LegSide LegSide_54('1');
        noLegs_0_0_2_0.set(LegSide_54);
        InstrumentLeg_54.insert(LegSide_54.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_54("STRING_763358605");
        noLegs_0_0_2_0.set(LegStateOrProvinceOfIssue_54);
        InstrumentLeg_54.insert(LegStateOrProvinceOfIssue_54.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_54("USD");
        noLegs_0_0_2_0.set(LegStrikeCurrency_54);
        InstrumentLeg_54.insert(LegStrikeCurrency_54.getString());
        FIX::LegStrikePrice LegStrikePrice_54;
        LegStrikePrice_54.setString("4980540");
        noLegs_0_0_2_0.set(LegStrikePrice_54);
        InstrumentLeg_54.insert(LegStrikePrice_54.getString());
        FIX::LegSymbol LegSymbol_54("STRING_530205175");
        noLegs_0_0_2_0.set(LegSymbol_54);
        InstrumentLeg_54.insert(LegSymbol_54.getString());
        FIX::LegSymbolSfx LegSymbolSfx_54("STRING_1138502269");
        noLegs_0_0_2_0.set(LegSymbolSfx_54);
        InstrumentLeg_54.insert(LegSymbolSfx_54.getString());
        FIX::LegTimeUnit LegTimeUnit_54("STRING_1647844691");
        noLegs_0_0_2_0.set(LegTimeUnit_54);
        InstrumentLeg_54.insert(LegTimeUnit_54.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_54("STRING_1211673363");
        noLegs_0_0_2_0.set(LegUnitOfMeasure_54);
        InstrumentLeg_54.insert(LegUnitOfMeasure_54.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_54;
        LegUnitOfMeasureQty_54.setString("3156104");
        noLegs_0_0_2_0.set(LegUnitOfMeasureQty_54);
        InstrumentLeg_54.insert(LegUnitOfMeasureQty_54.getString());
        all_values.push_back(InstrumentLeg_54);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_99;
          FIX::LegSecurityAltID LegSecurityAltID_99("STRING_1609898359");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltID_99);
          LegSecAltIDGrp_NoLegSecurityAltID_99.insert(LegSecurityAltID_99.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_99("STRING_582968903");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltIDSource_99);
          LegSecAltIDGrp_NoLegSecurityAltID_99.insert(LegSecurityAltIDSource_99.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_99);

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_55;
        FIX::EncodedLegIssuer EncodedLegIssuer_55("DATA_1585348436");
        noLegs_0_0_2_1.set(EncodedLegIssuer_55);
        InstrumentLeg_55.insert(EncodedLegIssuer_55.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_55(704117636);
        noLegs_0_0_2_1.set(EncodedLegIssuerLen_55);
        InstrumentLeg_55.insert(EncodedLegIssuerLen_55.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_55("DATA_932928153");
        noLegs_0_0_2_1.set(EncodedLegSecurityDesc_55);
        InstrumentLeg_55.insert(EncodedLegSecurityDesc_55.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_55(2135858239);
        noLegs_0_0_2_1.set(EncodedLegSecurityDescLen_55);
        InstrumentLeg_55.insert(EncodedLegSecurityDescLen_55.getString());
        FIX::LegCFICode LegCFICode_55("STRING_1972707572");
        noLegs_0_0_2_1.set(LegCFICode_55);
        InstrumentLeg_55.insert(LegCFICode_55.getString());
        FIX::LegContractMultiplier LegContractMultiplier_55;
        LegContractMultiplier_55.setString("3767663");
        noLegs_0_0_2_1.set(LegContractMultiplier_55);
        InstrumentLeg_55.insert(LegContractMultiplier_55.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_55(1156303126);
        noLegs_0_0_2_1.set(LegContractMultiplierUnit_55);
        InstrumentLeg_55.insert(LegContractMultiplierUnit_55.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_55("MONTHYEAR_40861036");
        noLegs_0_0_2_1.set(LegContractSettlMonth_55);
        InstrumentLeg_55.insert(LegContractSettlMonth_55.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_55("COUNTRY_102671127");
        noLegs_0_0_2_1.set(LegCountryOfIssue_55);
        InstrumentLeg_55.insert(LegCountryOfIssue_55.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_55("LOCALMKTDATE_1232523349");
        noLegs_0_0_2_1.set(LegCouponPaymentDate_55);
        InstrumentLeg_55.insert(LegCouponPaymentDate_55.getString());
        FIX::LegCouponRate LegCouponRate_55;
        LegCouponRate_55.setString("55.580000");
        noLegs_0_0_2_1.set(LegCouponRate_55);
        InstrumentLeg_55.insert(LegCouponRate_55.getString());
        FIX::LegCreditRating LegCreditRating_55("STRING_1791545319");
        noLegs_0_0_2_1.set(LegCreditRating_55);
        InstrumentLeg_55.insert(LegCreditRating_55.getString());
        FIX::LegCurrency LegCurrency_55("CAN");
        noLegs_0_0_2_1.set(LegCurrency_55);
        InstrumentLeg_55.insert(LegCurrency_55.getString());
        FIX::LegDatedDate LegDatedDate_55("LOCALMKTDATE_1255475935");
        noLegs_0_0_2_1.set(LegDatedDate_55);
        InstrumentLeg_55.insert(LegDatedDate_55.getString());
        FIX::LegExerciseStyle LegExerciseStyle_55(2065978985);
        noLegs_0_0_2_1.set(LegExerciseStyle_55);
        InstrumentLeg_55.insert(LegExerciseStyle_55.getString());
        FIX::LegFactor LegFactor_55;
        LegFactor_55.setString("16642911");
        noLegs_0_0_2_1.set(LegFactor_55);
        InstrumentLeg_55.insert(LegFactor_55.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_55(247422241);
        noLegs_0_0_2_1.set(LegFlowScheduleType_55);
        InstrumentLeg_55.insert(LegFlowScheduleType_55.getString());
        FIX::LegInstrRegistry LegInstrRegistry_55("STRING_1497420038");
        noLegs_0_0_2_1.set(LegInstrRegistry_55);
        InstrumentLeg_55.insert(LegInstrRegistry_55.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_55("LOCALMKTDATE_280166058");
        noLegs_0_0_2_1.set(LegInterestAccrualDate_55);
        InstrumentLeg_55.insert(LegInterestAccrualDate_55.getString());
        FIX::LegIssueDate LegIssueDate_55("LOCALMKTDATE_204109377");
        noLegs_0_0_2_1.set(LegIssueDate_55);
        InstrumentLeg_55.insert(LegIssueDate_55.getString());
        FIX::LegIssuer LegIssuer_55("STRING_1380776964");
        noLegs_0_0_2_1.set(LegIssuer_55);
        InstrumentLeg_55.insert(LegIssuer_55.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_55("STRING_778220067");
        noLegs_0_0_2_1.set(LegLocaleOfIssue_55);
        InstrumentLeg_55.insert(LegLocaleOfIssue_55.getString());
        FIX::LegMaturityDate LegMaturityDate_55("LOCALMKTDATE_734314552");
        noLegs_0_0_2_1.set(LegMaturityDate_55);
        InstrumentLeg_55.insert(LegMaturityDate_55.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_55("MONTHYEAR_371795586");
        noLegs_0_0_2_1.set(LegMaturityMonthYear_55);
        InstrumentLeg_55.insert(LegMaturityMonthYear_55.getString());
        FIX::LegMaturityTime LegMaturityTime_55("TZTIMEONLY_278581110");
        noLegs_0_0_2_1.set(LegMaturityTime_55);
        InstrumentLeg_55.insert(LegMaturityTime_55.getString());
        FIX::LegOptAttribute LegOptAttribute_55('1');
        noLegs_0_0_2_1.set(LegOptAttribute_55);
        InstrumentLeg_55.insert(LegOptAttribute_55.getString());
        FIX::LegOptionRatio LegOptionRatio_55;
        LegOptionRatio_55.setString("6874060");
        noLegs_0_0_2_1.set(LegOptionRatio_55);
        InstrumentLeg_55.insert(LegOptionRatio_55.getString());
        FIX::LegPool LegPool_55("STRING_386901531");
        noLegs_0_0_2_1.set(LegPool_55);
        InstrumentLeg_55.insert(LegPool_55.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_55("STRING_1408402627");
        noLegs_0_0_2_1.set(LegPriceUnitOfMeasure_55);
        InstrumentLeg_55.insert(LegPriceUnitOfMeasure_55.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_55;
        LegPriceUnitOfMeasureQty_55.setString("12703749");
        noLegs_0_0_2_1.set(LegPriceUnitOfMeasureQty_55);
        InstrumentLeg_55.insert(LegPriceUnitOfMeasureQty_55.getString());
        FIX::LegProduct LegProduct_55(1972249967);
        noLegs_0_0_2_1.set(LegProduct_55);
        InstrumentLeg_55.insert(LegProduct_55.getString());
        FIX::LegPutOrCall LegPutOrCall_55(2112520263);
        noLegs_0_0_2_1.set(LegPutOrCall_55);
        InstrumentLeg_55.insert(LegPutOrCall_55.getString());
        FIX::LegRatioQty LegRatioQty_55;
        LegRatioQty_55.setString("558194");
        noLegs_0_0_2_1.set(LegRatioQty_55);
        InstrumentLeg_55.insert(LegRatioQty_55.getString());
        FIX::LegRedemptionDate LegRedemptionDate_55("LOCALMKTDATE_1960624558");
        noLegs_0_0_2_1.set(LegRedemptionDate_55);
        InstrumentLeg_55.insert(LegRedemptionDate_55.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_55("STRING_1937744187");
        noLegs_0_0_2_1.set(LegRepoCollateralSecurityType_55);
        InstrumentLeg_55.insert(LegRepoCollateralSecurityType_55.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_55;
        LegRepurchaseRate_55.setString("58.210000");
        noLegs_0_0_2_1.set(LegRepurchaseRate_55);
        InstrumentLeg_55.insert(LegRepurchaseRate_55.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_55(969444037);
        noLegs_0_0_2_1.set(LegRepurchaseTerm_55);
        InstrumentLeg_55.insert(LegRepurchaseTerm_55.getString());
        FIX::LegSecurityDesc LegSecurityDesc_55("STRING_1978605223");
        noLegs_0_0_2_1.set(LegSecurityDesc_55);
        InstrumentLeg_55.insert(LegSecurityDesc_55.getString());
        FIX::LegSecurityExchange LegSecurityExchange_55("EXCHANGE_535256948");
        noLegs_0_0_2_1.set(LegSecurityExchange_55);
        InstrumentLeg_55.insert(LegSecurityExchange_55.getString());
        FIX::LegSecurityID LegSecurityID_55("STRING_54483738");
        noLegs_0_0_2_1.set(LegSecurityID_55);
        InstrumentLeg_55.insert(LegSecurityID_55.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_55("STRING_1155817133");
        noLegs_0_0_2_1.set(LegSecurityIDSource_55);
        InstrumentLeg_55.insert(LegSecurityIDSource_55.getString());
        FIX::LegSecuritySubType LegSecuritySubType_55("STRING_179318620");
        noLegs_0_0_2_1.set(LegSecuritySubType_55);
        InstrumentLeg_55.insert(LegSecuritySubType_55.getString());
        FIX::LegSecurityType LegSecurityType_55("STRING_877488813");
        noLegs_0_0_2_1.set(LegSecurityType_55);
        InstrumentLeg_55.insert(LegSecurityType_55.getString());
        FIX::LegSide LegSide_55('1');
        noLegs_0_0_2_1.set(LegSide_55);
        InstrumentLeg_55.insert(LegSide_55.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_55("STRING_1434794555");
        noLegs_0_0_2_1.set(LegStateOrProvinceOfIssue_55);
        InstrumentLeg_55.insert(LegStateOrProvinceOfIssue_55.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_55("JPY");
        noLegs_0_0_2_1.set(LegStrikeCurrency_55);
        InstrumentLeg_55.insert(LegStrikeCurrency_55.getString());
        FIX::LegStrikePrice LegStrikePrice_55;
        LegStrikePrice_55.setString("16822167");
        noLegs_0_0_2_1.set(LegStrikePrice_55);
        InstrumentLeg_55.insert(LegStrikePrice_55.getString());
        FIX::LegSymbol LegSymbol_55("STRING_145920541");
        noLegs_0_0_2_1.set(LegSymbol_55);
        InstrumentLeg_55.insert(LegSymbol_55.getString());
        FIX::LegSymbolSfx LegSymbolSfx_55("STRING_1732256086");
        noLegs_0_0_2_1.set(LegSymbolSfx_55);
        InstrumentLeg_55.insert(LegSymbolSfx_55.getString());
        FIX::LegTimeUnit LegTimeUnit_55("STRING_1886326174");
        noLegs_0_0_2_1.set(LegTimeUnit_55);
        InstrumentLeg_55.insert(LegTimeUnit_55.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_55("STRING_1526697506");
        noLegs_0_0_2_1.set(LegUnitOfMeasure_55);
        InstrumentLeg_55.insert(LegUnitOfMeasure_55.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_55;
        LegUnitOfMeasureQty_55.setString("3629925");
        noLegs_0_0_2_1.set(LegUnitOfMeasureQty_55);
        InstrumentLeg_55.insert(LegUnitOfMeasureQty_55.getString());
        all_values.push_back(InstrumentLeg_55);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_100;
          FIX::LegSecurityAltID LegSecurityAltID_100("STRING_1898493092");
          noLegSecurityAltID_0_0_1_3_0.set(LegSecurityAltID_100);
          LegSecAltIDGrp_NoLegSecurityAltID_100.insert(LegSecurityAltID_100.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_100("STRING_641573615");
          noLegSecurityAltID_0_0_1_3_0.set(LegSecurityAltIDSource_100);
          LegSecAltIDGrp_NoLegSecurityAltID_100.insert(LegSecurityAltIDSource_100.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_100);

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_56;
        FIX::EncodedLegIssuer EncodedLegIssuer_56("DATA_271661345");
        noLegs_0_0_2_2.set(EncodedLegIssuer_56);
        InstrumentLeg_56.insert(EncodedLegIssuer_56.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_56(438415491);
        noLegs_0_0_2_2.set(EncodedLegIssuerLen_56);
        InstrumentLeg_56.insert(EncodedLegIssuerLen_56.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_56("DATA_1028475146");
        noLegs_0_0_2_2.set(EncodedLegSecurityDesc_56);
        InstrumentLeg_56.insert(EncodedLegSecurityDesc_56.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_56(1680063972);
        noLegs_0_0_2_2.set(EncodedLegSecurityDescLen_56);
        InstrumentLeg_56.insert(EncodedLegSecurityDescLen_56.getString());
        FIX::LegCFICode LegCFICode_56("STRING_1708790441");
        noLegs_0_0_2_2.set(LegCFICode_56);
        InstrumentLeg_56.insert(LegCFICode_56.getString());
        FIX::LegContractMultiplier LegContractMultiplier_56;
        LegContractMultiplier_56.setString("8532414");
        noLegs_0_0_2_2.set(LegContractMultiplier_56);
        InstrumentLeg_56.insert(LegContractMultiplier_56.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_56(1645100588);
        noLegs_0_0_2_2.set(LegContractMultiplierUnit_56);
        InstrumentLeg_56.insert(LegContractMultiplierUnit_56.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_56("MONTHYEAR_1764609897");
        noLegs_0_0_2_2.set(LegContractSettlMonth_56);
        InstrumentLeg_56.insert(LegContractSettlMonth_56.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_56("COUNTRY_666382375");
        noLegs_0_0_2_2.set(LegCountryOfIssue_56);
        InstrumentLeg_56.insert(LegCountryOfIssue_56.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_56("LOCALMKTDATE_1435361127");
        noLegs_0_0_2_2.set(LegCouponPaymentDate_56);
        InstrumentLeg_56.insert(LegCouponPaymentDate_56.getString());
        FIX::LegCouponRate LegCouponRate_56;
        LegCouponRate_56.setString("20.700000");
        noLegs_0_0_2_2.set(LegCouponRate_56);
        InstrumentLeg_56.insert(LegCouponRate_56.getString());
        FIX::LegCreditRating LegCreditRating_56("STRING_1635826412");
        noLegs_0_0_2_2.set(LegCreditRating_56);
        InstrumentLeg_56.insert(LegCreditRating_56.getString());
        FIX::LegCurrency LegCurrency_56("CHF");
        noLegs_0_0_2_2.set(LegCurrency_56);
        InstrumentLeg_56.insert(LegCurrency_56.getString());
        FIX::LegDatedDate LegDatedDate_56("LOCALMKTDATE_1690310150");
        noLegs_0_0_2_2.set(LegDatedDate_56);
        InstrumentLeg_56.insert(LegDatedDate_56.getString());
        FIX::LegExerciseStyle LegExerciseStyle_56(274816188);
        noLegs_0_0_2_2.set(LegExerciseStyle_56);
        InstrumentLeg_56.insert(LegExerciseStyle_56.getString());
        FIX::LegFactor LegFactor_56;
        LegFactor_56.setString("7642876");
        noLegs_0_0_2_2.set(LegFactor_56);
        InstrumentLeg_56.insert(LegFactor_56.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_56(420315316);
        noLegs_0_0_2_2.set(LegFlowScheduleType_56);
        InstrumentLeg_56.insert(LegFlowScheduleType_56.getString());
        FIX::LegInstrRegistry LegInstrRegistry_56("STRING_62615115");
        noLegs_0_0_2_2.set(LegInstrRegistry_56);
        InstrumentLeg_56.insert(LegInstrRegistry_56.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_56("LOCALMKTDATE_51598546");
        noLegs_0_0_2_2.set(LegInterestAccrualDate_56);
        InstrumentLeg_56.insert(LegInterestAccrualDate_56.getString());
        FIX::LegIssueDate LegIssueDate_56("LOCALMKTDATE_1216299467");
        noLegs_0_0_2_2.set(LegIssueDate_56);
        InstrumentLeg_56.insert(LegIssueDate_56.getString());
        FIX::LegIssuer LegIssuer_56("STRING_1514705143");
        noLegs_0_0_2_2.set(LegIssuer_56);
        InstrumentLeg_56.insert(LegIssuer_56.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_56("STRING_1733815343");
        noLegs_0_0_2_2.set(LegLocaleOfIssue_56);
        InstrumentLeg_56.insert(LegLocaleOfIssue_56.getString());
        FIX::LegMaturityDate LegMaturityDate_56("LOCALMKTDATE_1362220008");
        noLegs_0_0_2_2.set(LegMaturityDate_56);
        InstrumentLeg_56.insert(LegMaturityDate_56.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_56("MONTHYEAR_1099477581");
        noLegs_0_0_2_2.set(LegMaturityMonthYear_56);
        InstrumentLeg_56.insert(LegMaturityMonthYear_56.getString());
        FIX::LegMaturityTime LegMaturityTime_56("TZTIMEONLY_1472657869");
        noLegs_0_0_2_2.set(LegMaturityTime_56);
        InstrumentLeg_56.insert(LegMaturityTime_56.getString());
        FIX::LegOptAttribute LegOptAttribute_56('7');
        noLegs_0_0_2_2.set(LegOptAttribute_56);
        InstrumentLeg_56.insert(LegOptAttribute_56.getString());
        FIX::LegOptionRatio LegOptionRatio_56;
        LegOptionRatio_56.setString("14624700");
        noLegs_0_0_2_2.set(LegOptionRatio_56);
        InstrumentLeg_56.insert(LegOptionRatio_56.getString());
        FIX::LegPool LegPool_56("STRING_1945814947");
        noLegs_0_0_2_2.set(LegPool_56);
        InstrumentLeg_56.insert(LegPool_56.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_56("STRING_492443310");
        noLegs_0_0_2_2.set(LegPriceUnitOfMeasure_56);
        InstrumentLeg_56.insert(LegPriceUnitOfMeasure_56.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_56;
        LegPriceUnitOfMeasureQty_56.setString("21040437");
        noLegs_0_0_2_2.set(LegPriceUnitOfMeasureQty_56);
        InstrumentLeg_56.insert(LegPriceUnitOfMeasureQty_56.getString());
        FIX::LegProduct LegProduct_56(69992645);
        noLegs_0_0_2_2.set(LegProduct_56);
        InstrumentLeg_56.insert(LegProduct_56.getString());
        FIX::LegPutOrCall LegPutOrCall_56(930858801);
        noLegs_0_0_2_2.set(LegPutOrCall_56);
        InstrumentLeg_56.insert(LegPutOrCall_56.getString());
        FIX::LegRatioQty LegRatioQty_56;
        LegRatioQty_56.setString("9850351");
        noLegs_0_0_2_2.set(LegRatioQty_56);
        InstrumentLeg_56.insert(LegRatioQty_56.getString());
        FIX::LegRedemptionDate LegRedemptionDate_56("LOCALMKTDATE_1750056617");
        noLegs_0_0_2_2.set(LegRedemptionDate_56);
        InstrumentLeg_56.insert(LegRedemptionDate_56.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_56("STRING_492165595");
        noLegs_0_0_2_2.set(LegRepoCollateralSecurityType_56);
        InstrumentLeg_56.insert(LegRepoCollateralSecurityType_56.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_56;
        LegRepurchaseRate_56.setString("66.640000");
        noLegs_0_0_2_2.set(LegRepurchaseRate_56);
        InstrumentLeg_56.insert(LegRepurchaseRate_56.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_56(1247673557);
        noLegs_0_0_2_2.set(LegRepurchaseTerm_56);
        InstrumentLeg_56.insert(LegRepurchaseTerm_56.getString());
        FIX::LegSecurityDesc LegSecurityDesc_56("STRING_109291844");
        noLegs_0_0_2_2.set(LegSecurityDesc_56);
        InstrumentLeg_56.insert(LegSecurityDesc_56.getString());
        FIX::LegSecurityExchange LegSecurityExchange_56("EXCHANGE_357175392");
        noLegs_0_0_2_2.set(LegSecurityExchange_56);
        InstrumentLeg_56.insert(LegSecurityExchange_56.getString());
        FIX::LegSecurityID LegSecurityID_56("STRING_535551037");
        noLegs_0_0_2_2.set(LegSecurityID_56);
        InstrumentLeg_56.insert(LegSecurityID_56.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_56("STRING_159003914");
        noLegs_0_0_2_2.set(LegSecurityIDSource_56);
        InstrumentLeg_56.insert(LegSecurityIDSource_56.getString());
        FIX::LegSecuritySubType LegSecuritySubType_56("STRING_1993001804");
        noLegs_0_0_2_2.set(LegSecuritySubType_56);
        InstrumentLeg_56.insert(LegSecuritySubType_56.getString());
        FIX::LegSecurityType LegSecurityType_56("STRING_1802033740");
        noLegs_0_0_2_2.set(LegSecurityType_56);
        InstrumentLeg_56.insert(LegSecurityType_56.getString());
        FIX::LegSide LegSide_56('7');
        noLegs_0_0_2_2.set(LegSide_56);
        InstrumentLeg_56.insert(LegSide_56.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_56("STRING_1535828307");
        noLegs_0_0_2_2.set(LegStateOrProvinceOfIssue_56);
        InstrumentLeg_56.insert(LegStateOrProvinceOfIssue_56.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_56("USD");
        noLegs_0_0_2_2.set(LegStrikeCurrency_56);
        InstrumentLeg_56.insert(LegStrikeCurrency_56.getString());
        FIX::LegStrikePrice LegStrikePrice_56;
        LegStrikePrice_56.setString("19561436");
        noLegs_0_0_2_2.set(LegStrikePrice_56);
        InstrumentLeg_56.insert(LegStrikePrice_56.getString());
        FIX::LegSymbol LegSymbol_56("STRING_2139465044");
        noLegs_0_0_2_2.set(LegSymbol_56);
        InstrumentLeg_56.insert(LegSymbol_56.getString());
        FIX::LegSymbolSfx LegSymbolSfx_56("STRING_1559859119");
        noLegs_0_0_2_2.set(LegSymbolSfx_56);
        InstrumentLeg_56.insert(LegSymbolSfx_56.getString());
        FIX::LegTimeUnit LegTimeUnit_56("STRING_1024959442");
        noLegs_0_0_2_2.set(LegTimeUnit_56);
        InstrumentLeg_56.insert(LegTimeUnit_56.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_56("STRING_1506686539");
        noLegs_0_0_2_2.set(LegUnitOfMeasure_56);
        InstrumentLeg_56.insert(LegUnitOfMeasure_56.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_56;
        LegUnitOfMeasureQty_56.setString("11461908");
        noLegs_0_0_2_2.set(LegUnitOfMeasureQty_56);
        InstrumentLeg_56.insert(LegUnitOfMeasureQty_56.getString());
        all_values.push_back(InstrumentLeg_56);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_101;
          FIX::LegSecurityAltID LegSecurityAltID_101("STRING_458680473");
          noLegSecurityAltID_0_0_2_3_0.set(LegSecurityAltID_101);
          LegSecAltIDGrp_NoLegSecurityAltID_101.insert(LegSecurityAltID_101.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_101("STRING_471365036");
          noLegSecurityAltID_0_0_2_3_0.set(LegSecurityAltIDSource_101);
          LegSecAltIDGrp_NoLegSecurityAltID_101.insert(LegSecurityAltIDSource_101.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_101);

          noLegs_0_0_2_2.addGroup(noLegSecurityAltID_0_0_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_102;
          FIX::LegSecurityAltID LegSecurityAltID_102("STRING_981129669");
          noLegSecurityAltID_0_0_2_3_1.set(LegSecurityAltID_102);
          LegSecAltIDGrp_NoLegSecurityAltID_102.insert(LegSecurityAltID_102.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_102("STRING_1921150559");
          noLegSecurityAltID_0_0_2_3_1.set(LegSecurityAltIDSource_102);
          LegSecAltIDGrp_NoLegSecurityAltID_102.insert(LegSecurityAltIDSource_102.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_102);

          noLegs_0_0_2_2.addGroup(noLegSecurityAltID_0_0_2_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_103;
          FIX::LegSecurityAltID LegSecurityAltID_103("STRING_269696335");
          noLegSecurityAltID_0_0_2_3_2.set(LegSecurityAltID_103);
          LegSecAltIDGrp_NoLegSecurityAltID_103.insert(LegSecurityAltID_103.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_103("STRING_1473572979");
          noLegSecurityAltID_0_0_2_3_2.set(LegSecurityAltIDSource_103);
          LegSecAltIDGrp_NoLegSecurityAltID_103.insert(LegSecurityAltIDSource_103.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_103);

          noLegs_0_0_2_2.addGroup(noLegSecurityAltID_0_0_2_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_2);
      }
      // Instrument
      multiset<string> Instrument_32;
      FIX::AttachmentPoint AttachmentPoint_32;
      AttachmentPoint_32.setString("6.130000");
      noQuoteEntries_0_1_0.set(AttachmentPoint_32);
      Instrument_32.insert(AttachmentPoint_32.getString());
      FIX::CFICode CFICode_32("STRING_339688980");
      noQuoteEntries_0_1_0.set(CFICode_32);
      Instrument_32.insert(CFICode_32.getString());
      FIX::CPProgram CPProgram_32(99);
      noQuoteEntries_0_1_0.set(CPProgram_32);
      Instrument_32.insert(CPProgram_32.getString());
      FIX::CPRegType CPRegType_32("STRING_715262164");
      noQuoteEntries_0_1_0.set(CPRegType_32);
      Instrument_32.insert(CPRegType_32.getString());
      FIX::CapPrice CapPrice_32;
      CapPrice_32.setString("20897455");
      noQuoteEntries_0_1_0.set(CapPrice_32);
      Instrument_32.insert(CapPrice_32.getString());
      FIX::ContractMultiplier ContractMultiplier_32;
      ContractMultiplier_32.setString("7491137");
      noQuoteEntries_0_1_0.set(ContractMultiplier_32);
      Instrument_32.insert(ContractMultiplier_32.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_32(0);
      noQuoteEntries_0_1_0.set(ContractMultiplierUnit_32);
      Instrument_32.insert(ContractMultiplierUnit_32.getString());
      FIX::ContractSettlMonth ContractSettlMonth_32("MONTHYEAR_1189935507");
      noQuoteEntries_0_1_0.set(ContractSettlMonth_32);
      Instrument_32.insert(ContractSettlMonth_32.getString());
      FIX::CountryOfIssue CountryOfIssue_32("COUNTRY_858405572");
      noQuoteEntries_0_1_0.set(CountryOfIssue_32);
      Instrument_32.insert(CountryOfIssue_32.getString());
      FIX::CouponPaymentDate CouponPaymentDate_32("LOCALMKTDATE_763230573");
      noQuoteEntries_0_1_0.set(CouponPaymentDate_32);
      Instrument_32.insert(CouponPaymentDate_32.getString());
      FIX::CouponRate CouponRate_32;
      CouponRate_32.setString("65.440000");
      noQuoteEntries_0_1_0.set(CouponRate_32);
      Instrument_32.insert(CouponRate_32.getString());
      FIX::CreditRating CreditRating_32("STRING_1017409486");
      noQuoteEntries_0_1_0.set(CreditRating_32);
      Instrument_32.insert(CreditRating_32.getString());
      FIX::DatedDate DatedDate_32("LOCALMKTDATE_608748729");
      noQuoteEntries_0_1_0.set(DatedDate_32);
      Instrument_32.insert(DatedDate_32.getString());
      FIX::DetachmentPoint DetachmentPoint_32;
      DetachmentPoint_32.setString("66.360000");
      noQuoteEntries_0_1_0.set(DetachmentPoint_32);
      Instrument_32.insert(DetachmentPoint_32.getString());
      FIX::EncodedIssuer EncodedIssuer_32("DATA_1761382420");
      noQuoteEntries_0_1_0.set(EncodedIssuer_32);
      Instrument_32.insert(EncodedIssuer_32.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_32(2144577036);
      noQuoteEntries_0_1_0.set(EncodedIssuerLen_32);
      Instrument_32.insert(EncodedIssuerLen_32.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_32("DATA_1309402917");
      noQuoteEntries_0_1_0.set(EncodedSecurityDesc_32);
      Instrument_32.insert(EncodedSecurityDesc_32.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_32(1122159344);
      noQuoteEntries_0_1_0.set(EncodedSecurityDescLen_32);
      Instrument_32.insert(EncodedSecurityDescLen_32.getString());
      FIX::ExerciseStyle ExerciseStyle_32(2);
      noQuoteEntries_0_1_0.set(ExerciseStyle_32);
      Instrument_32.insert(ExerciseStyle_32.getString());
      FIX::Factor Factor_32;
      Factor_32.setString("13013843");
      noQuoteEntries_0_1_0.set(Factor_32);
      Instrument_32.insert(Factor_32.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_32(false);
      noQuoteEntries_0_1_0.set(FlexProductEligibilityIndicator_32);
      Instrument_32.insert(FlexProductEligibilityIndicator_32.getString());
      FIX::FlexibleIndicator FlexibleIndicator_32(false);
      noQuoteEntries_0_1_0.set(FlexibleIndicator_32);
      Instrument_32.insert(FlexibleIndicator_32.getString());
      FIX::FloorPrice FloorPrice_32;
      FloorPrice_32.setString("6605872");
      noQuoteEntries_0_1_0.set(FloorPrice_32);
      Instrument_32.insert(FloorPrice_32.getString());
      FIX::FlowScheduleType FlowScheduleType_32(0);
      noQuoteEntries_0_1_0.set(FlowScheduleType_32);
      Instrument_32.insert(FlowScheduleType_32.getString());
      FIX::InstrRegistry InstrRegistry_32("STRING_1070408608");
      noQuoteEntries_0_1_0.set(InstrRegistry_32);
      Instrument_32.insert(InstrRegistry_32.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_32('1');
      noQuoteEntries_0_1_0.set(InstrmtAssignmentMethod_32);
      Instrument_32.insert(InstrmtAssignmentMethod_32.getString());
      FIX::InterestAccrualDate InterestAccrualDate_32("LOCALMKTDATE_4607018");
      noQuoteEntries_0_1_0.set(InterestAccrualDate_32);
      Instrument_32.insert(InterestAccrualDate_32.getString());
      FIX::IssueDate IssueDate_32("LOCALMKTDATE_2051538277");
      noQuoteEntries_0_1_0.set(IssueDate_32);
      Instrument_32.insert(IssueDate_32.getString());
      FIX::Issuer Issuer_32("STRING_892934589");
      noQuoteEntries_0_1_0.set(Issuer_32);
      Instrument_32.insert(Issuer_32.getString());
      FIX::ListMethod ListMethod_32(1);
      noQuoteEntries_0_1_0.set(ListMethod_32);
      Instrument_32.insert(ListMethod_32.getString());
      FIX::LocaleOfIssue LocaleOfIssue_32("STRING_1377627608");
      noQuoteEntries_0_1_0.set(LocaleOfIssue_32);
      Instrument_32.insert(LocaleOfIssue_32.getString());
      FIX::MaturityDate MaturityDate_32("LOCALMKTDATE_623161554");
      noQuoteEntries_0_1_0.set(MaturityDate_32);
      Instrument_32.insert(MaturityDate_32.getString());
      FIX::MaturityMonthYear MaturityMonthYear_32("MONTHYEAR_613992334");
      noQuoteEntries_0_1_0.set(MaturityMonthYear_32);
      Instrument_32.insert(MaturityMonthYear_32.getString());
      FIX::MaturityTime MaturityTime_32("TZTIMEONLY_1634575741");
      noQuoteEntries_0_1_0.set(MaturityTime_32);
      Instrument_32.insert(MaturityTime_32.getString());
      FIX::MinPriceIncrement MinPriceIncrement_32;
      MinPriceIncrement_32.setString("13384237");
      noQuoteEntries_0_1_0.set(MinPriceIncrement_32);
      Instrument_32.insert(MinPriceIncrement_32.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_32;
      MinPriceIncrementAmount_32.setString("5562542");
      noQuoteEntries_0_1_0.set(MinPriceIncrementAmount_32);
      Instrument_32.insert(MinPriceIncrementAmount_32.getString());
      FIX::NTPositionLimit NTPositionLimit_32(236205821);
      noQuoteEntries_0_1_0.set(NTPositionLimit_32);
      Instrument_32.insert(NTPositionLimit_32.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_32;
      NotionalPercentageOutstanding_32.setString("88.990000");
      noQuoteEntries_0_1_0.set(NotionalPercentageOutstanding_32);
      Instrument_32.insert(NotionalPercentageOutstanding_32.getString());
      FIX::OptAttribute OptAttribute_32('1');
      noQuoteEntries_0_1_0.set(OptAttribute_32);
      Instrument_32.insert(OptAttribute_32.getString());
      FIX::OptPayoutAmount OptPayoutAmount_32;
      OptPayoutAmount_32.setString("10946113");
      noQuoteEntries_0_1_0.set(OptPayoutAmount_32);
      Instrument_32.insert(OptPayoutAmount_32.getString());
      FIX::OptPayoutType OptPayoutType_32(3);
      noQuoteEntries_0_1_0.set(OptPayoutType_32);
      Instrument_32.insert(OptPayoutType_32.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_32;
      OriginalNotionalPercentageOutstanding_32.setString("26.880000");
      noQuoteEntries_0_1_0.set(OriginalNotionalPercentageOutstanding_32);
      Instrument_32.insert(OriginalNotionalPercentageOutstanding_32.getString());
      FIX::Pool Pool_32("STRING_2112020880");
      noQuoteEntries_0_1_0.set(Pool_32);
      Instrument_32.insert(Pool_32.getString());
      FIX::PositionLimit PositionLimit_32(968974554);
      noQuoteEntries_0_1_0.set(PositionLimit_32);
      Instrument_32.insert(PositionLimit_32.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_32("STRING_STD");
      noQuoteEntries_0_1_0.set(PriceQuoteMethod_32);
      Instrument_32.insert(PriceQuoteMethod_32.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_32("STRING_1725919652");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasure_32);
      Instrument_32.insert(PriceUnitOfMeasure_32.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_32;
      PriceUnitOfMeasureQty_32.setString("9660679");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasureQty_32);
      Instrument_32.insert(PriceUnitOfMeasureQty_32.getString());
      FIX::Product Product_34(11);
      noQuoteEntries_0_1_0.set(Product_34);
      Instrument_32.insert(Product_34.getString());
      FIX::ProductComplex ProductComplex_32("STRING_700595348");
      noQuoteEntries_0_1_0.set(ProductComplex_32);
      Instrument_32.insert(ProductComplex_32.getString());
      FIX::PutOrCall PutOrCall_32(0);
      noQuoteEntries_0_1_0.set(PutOrCall_32);
      Instrument_32.insert(PutOrCall_32.getString());
      FIX::RedemptionDate RedemptionDate_32("LOCALMKTDATE_1020049258");
      noQuoteEntries_0_1_0.set(RedemptionDate_32);
      Instrument_32.insert(RedemptionDate_32.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_32("STRING_1235130164");
      noQuoteEntries_0_1_0.set(RepoCollateralSecurityType_32);
      Instrument_32.insert(RepoCollateralSecurityType_32.getString());
      FIX::RepurchaseRate RepurchaseRate_32;
      RepurchaseRate_32.setString("41.110000");
      noQuoteEntries_0_1_0.set(RepurchaseRate_32);
      Instrument_32.insert(RepurchaseRate_32.getString());
      FIX::RepurchaseTerm RepurchaseTerm_32(1680636463);
      noQuoteEntries_0_1_0.set(RepurchaseTerm_32);
      Instrument_32.insert(RepurchaseTerm_32.getString());
      FIX::RestructuringType RestructuringType_32("STRING_MM");
      noQuoteEntries_0_1_0.set(RestructuringType_32);
      Instrument_32.insert(RestructuringType_32.getString());
      FIX::SecurityDesc SecurityDesc_32("STRING_525459071");
      noQuoteEntries_0_1_0.set(SecurityDesc_32);
      Instrument_32.insert(SecurityDesc_32.getString());
      FIX::SecurityExchange SecurityExchange_32("EXCHANGE_652420492");
      noQuoteEntries_0_1_0.set(SecurityExchange_32);
      Instrument_32.insert(SecurityExchange_32.getString());
      FIX::SecurityGroup SecurityGroup_32("STRING_772979164");
      noQuoteEntries_0_1_0.set(SecurityGroup_32);
      Instrument_32.insert(SecurityGroup_32.getString());
      FIX::SecurityID SecurityID_32("STRING_429513700");
      noQuoteEntries_0_1_0.set(SecurityID_32);
      Instrument_32.insert(SecurityID_32.getString());
      FIX::SecurityIDSource SecurityIDSource_32("STRING_I");
      noQuoteEntries_0_1_0.set(SecurityIDSource_32);
      Instrument_32.insert(SecurityIDSource_32.getString());
      FIX::SecurityStatus SecurityStatus_32("STRING_2");
      noQuoteEntries_0_1_0.set(SecurityStatus_32);
      Instrument_32.insert(SecurityStatus_32.getString());
      FIX::SecuritySubType SecuritySubType_33("STRING_1807141309");
      noQuoteEntries_0_1_0.set(SecuritySubType_33);
      Instrument_32.insert(SecuritySubType_33.getString());
      FIX::SecurityType SecurityType_34("STRING_TLQN");
      noQuoteEntries_0_1_0.set(SecurityType_34);
      Instrument_32.insert(SecurityType_34.getString());
      FIX::Seniority Seniority_32("STRING_SB");
      noQuoteEntries_0_1_0.set(Seniority_32);
      Instrument_32.insert(Seniority_32.getString());
      FIX::SettlMethod SettlMethod_32('C');
      noQuoteEntries_0_1_0.set(SettlMethod_32);
      Instrument_32.insert(SettlMethod_32.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_32("STRING_1359456706");
      noQuoteEntries_0_1_0.set(SettleOnOpenFlag_32);
      Instrument_32.insert(SettleOnOpenFlag_32.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_32("STRING_70045487");
      noQuoteEntries_0_1_0.set(StateOrProvinceOfIssue_32);
      Instrument_32.insert(StateOrProvinceOfIssue_32.getString());
      FIX::StrikeCurrency StrikeCurrency_32("CHF");
      noQuoteEntries_0_1_0.set(StrikeCurrency_32);
      Instrument_32.insert(StrikeCurrency_32.getString());
      FIX::StrikeMultiplier StrikeMultiplier_32;
      StrikeMultiplier_32.setString("18162352");
      noQuoteEntries_0_1_0.set(StrikeMultiplier_32);
      Instrument_32.insert(StrikeMultiplier_32.getString());
      FIX::StrikePrice StrikePrice_32;
      StrikePrice_32.setString("4775669");
      noQuoteEntries_0_1_0.set(StrikePrice_32);
      Instrument_32.insert(StrikePrice_32.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_32(3);
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryMethod_32);
      Instrument_32.insert(StrikePriceBoundaryMethod_32.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_32;
      StrikePriceBoundaryPrecision_32.setString("43.190000");
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryPrecision_32);
      Instrument_32.insert(StrikePriceBoundaryPrecision_32.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_32(2);
      noQuoteEntries_0_1_0.set(StrikePriceDeterminationMethod_32);
      Instrument_32.insert(StrikePriceDeterminationMethod_32.getString());
      FIX::StrikeValue StrikeValue_32;
      StrikeValue_32.setString("1381686");
      noQuoteEntries_0_1_0.set(StrikeValue_32);
      Instrument_32.insert(StrikeValue_32.getString());
      FIX::Symbol Symbol_32("STRING_1549689995");
      noQuoteEntries_0_1_0.set(Symbol_32);
      Instrument_32.insert(Symbol_32.getString());
      FIX::SymbolSfx SymbolSfx_32("STRING_WI");
      noQuoteEntries_0_1_0.set(SymbolSfx_32);
      Instrument_32.insert(SymbolSfx_32.getString());
      FIX::TimeUnit TimeUnit_32("STRING_H");
      noQuoteEntries_0_1_0.set(TimeUnit_32);
      Instrument_32.insert(TimeUnit_32.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_32(2);
      noQuoteEntries_0_1_0.set(UnderlyingPriceDeterminationMethod_32);
      Instrument_32.insert(UnderlyingPriceDeterminationMethod_32.getString());
      FIX::UnitOfMeasure UnitOfMeasure_32("STRING_t");
      noQuoteEntries_0_1_0.set(UnitOfMeasure_32);
      Instrument_32.insert(UnitOfMeasure_32.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_32;
      UnitOfMeasureQty_32.setString("18760579");
      noQuoteEntries_0_1_0.set(UnitOfMeasureQty_32);
      Instrument_32.insert(UnitOfMeasureQty_32.getString());
      FIX::ValuationMethod ValuationMethod_32("STRING_FUT");
      noQuoteEntries_0_1_0.set(ValuationMethod_32);
      Instrument_32.insert(ValuationMethod_32.getString());
      all_values.push_back(Instrument_32);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_66;
        FIX::ComplexEventCondition ComplexEventCondition_66(1);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventCondition_66.getString());
        FIX::ComplexEventPrice ComplexEventPrice_66;
        ComplexEventPrice_66.setString("18215570");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventPrice_66.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_66(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventPriceBoundaryMethod_66.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_66;
        ComplexEventPriceBoundaryPrecision_66.setString("74.710000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventPriceBoundaryPrecision_66.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_66(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventPriceTimeType_66.getString());
        FIX::ComplexEventType ComplexEventType_66(1);
        noComplexEvents_0_0_2_0.set(ComplexEventType_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventType_66.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_66;
        ComplexOptPayoutAmount_66.setString("1385975");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexOptPayoutAmount_66.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_66);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_142;
          FIX::ComplexEventEndDate ComplexEventEndDate_142(FIX::UTCTIMESTAMP(9, 8, 41, 15, 112004));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_142);
          ComplexEventDates_NoComplexEventDates_142.insert(ComplexEventEndDate_142.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_142(FIX::UTCTIMESTAMP(7, 19, 53, 1, 112008));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_142);
          ComplexEventDates_NoComplexEventDates_142.insert(ComplexEventStartDate_142.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_142);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_290;
            FIX::ComplexEventEndTime ComplexEventEndTime_290(FIX::UTCTIMEONLY(12, 28, 39));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_290);
            ComplexEventTimes_NoComplexEventTimes_290.insert(ComplexEventEndTime_290.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_290(FIX::UTCTIMEONLY(12, 30, 24));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_290);
            ComplexEventTimes_NoComplexEventTimes_290.insert(ComplexEventStartTime_290.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_290);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_143;
          FIX::ComplexEventEndDate ComplexEventEndDate_143(FIX::UTCTIMESTAMP(9, 12, 40, 0, 12012));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventEndDate_143);
          ComplexEventDates_NoComplexEventDates_143.insert(ComplexEventEndDate_143.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_143(FIX::UTCTIMESTAMP(17, 49, 28, 22, 92008));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventStartDate_143);
          ComplexEventDates_NoComplexEventDates_143.insert(ComplexEventStartDate_143.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_143);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_291;
            FIX::ComplexEventEndTime ComplexEventEndTime_291(FIX::UTCTIMEONLY(2, 46, 5));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventEndTime_291);
            ComplexEventTimes_NoComplexEventTimes_291.insert(ComplexEventEndTime_291.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_291(FIX::UTCTIMEONLY(9, 11, 37));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventStartTime_291);
            ComplexEventTimes_NoComplexEventTimes_291.insert(ComplexEventStartTime_291.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_291);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_292;
            FIX::ComplexEventEndTime ComplexEventEndTime_292(FIX::UTCTIMEONLY(23, 5, 6));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventEndTime_292);
            ComplexEventTimes_NoComplexEventTimes_292.insert(ComplexEventEndTime_292.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_292(FIX::UTCTIMEONLY(5, 36, 13));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventStartTime_292);
            ComplexEventTimes_NoComplexEventTimes_292.insert(ComplexEventStartTime_292.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_292);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_293;
            FIX::ComplexEventEndTime ComplexEventEndTime_293(FIX::UTCTIMEONLY(13, 17, 50));
            noComplexEventTimes_0_0_0_1_4_2.set(ComplexEventEndTime_293);
            ComplexEventTimes_NoComplexEventTimes_293.insert(ComplexEventEndTime_293.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_293(FIX::UTCTIMEONLY(5, 14, 2));
            noComplexEventTimes_0_0_0_1_4_2.set(ComplexEventStartTime_293);
            ComplexEventTimes_NoComplexEventTimes_293.insert(ComplexEventStartTime_293.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_293);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_144;
          FIX::ComplexEventEndDate ComplexEventEndDate_144(FIX::UTCTIMESTAMP(7, 30, 9, 23, 22012));
          noComplexEventDates_0_0_0_3_2.set(ComplexEventEndDate_144);
          ComplexEventDates_NoComplexEventDates_144.insert(ComplexEventEndDate_144.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_144(FIX::UTCTIMESTAMP(7, 23, 52, 22, 12010));
          noComplexEventDates_0_0_0_3_2.set(ComplexEventStartDate_144);
          ComplexEventDates_NoComplexEventDates_144.insert(ComplexEventStartDate_144.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_144);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_294;
            FIX::ComplexEventEndTime ComplexEventEndTime_294(FIX::UTCTIMEONLY(19, 52, 45));
            noComplexEventTimes_0_0_0_2_4_0.set(ComplexEventEndTime_294);
            ComplexEventTimes_NoComplexEventTimes_294.insert(ComplexEventEndTime_294.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_294(FIX::UTCTIMEONLY(10, 13, 2));
            noComplexEventTimes_0_0_0_2_4_0.set(ComplexEventStartTime_294);
            ComplexEventTimes_NoComplexEventTimes_294.insert(ComplexEventStartTime_294.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_294);

            noComplexEventDates_0_0_0_3_2.addGroup(noComplexEventTimes_0_0_0_2_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_295;
            FIX::ComplexEventEndTime ComplexEventEndTime_295(FIX::UTCTIMEONLY(3, 20, 34));
            noComplexEventTimes_0_0_0_2_4_1.set(ComplexEventEndTime_295);
            ComplexEventTimes_NoComplexEventTimes_295.insert(ComplexEventEndTime_295.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_295(FIX::UTCTIMEONLY(5, 40, 14));
            noComplexEventTimes_0_0_0_2_4_1.set(ComplexEventStartTime_295);
            ComplexEventTimes_NoComplexEventTimes_295.insert(ComplexEventStartTime_295.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_295);

            noComplexEventDates_0_0_0_3_2.addGroup(noComplexEventTimes_0_0_0_2_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_67;
        FIX::ComplexEventCondition ComplexEventCondition_67(1);
        noComplexEvents_0_0_2_1.set(ComplexEventCondition_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventCondition_67.getString());
        FIX::ComplexEventPrice ComplexEventPrice_67;
        ComplexEventPrice_67.setString("20696222");
        noComplexEvents_0_0_2_1.set(ComplexEventPrice_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventPrice_67.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_67(3);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryMethod_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventPriceBoundaryMethod_67.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_67;
        ComplexEventPriceBoundaryPrecision_67.setString("80.260000");
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryPrecision_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventPriceBoundaryPrecision_67.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_67(2);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceTimeType_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventPriceTimeType_67.getString());
        FIX::ComplexEventType ComplexEventType_67(1);
        noComplexEvents_0_0_2_1.set(ComplexEventType_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventType_67.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_67;
        ComplexOptPayoutAmount_67.setString("19152146");
        noComplexEvents_0_0_2_1.set(ComplexOptPayoutAmount_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexOptPayoutAmount_67.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_67);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_145;
          FIX::ComplexEventEndDate ComplexEventEndDate_145(FIX::UTCTIMESTAMP(1, 50, 35, 1, 72017));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventEndDate_145);
          ComplexEventDates_NoComplexEventDates_145.insert(ComplexEventEndDate_145.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_145(FIX::UTCTIMESTAMP(6, 15, 5, 11, 22005));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventStartDate_145);
          ComplexEventDates_NoComplexEventDates_145.insert(ComplexEventStartDate_145.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_145);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_296;
            FIX::ComplexEventEndTime ComplexEventEndTime_296(FIX::UTCTIMEONLY(2, 5, 59));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventEndTime_296);
            ComplexEventTimes_NoComplexEventTimes_296.insert(ComplexEventEndTime_296.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_296(FIX::UTCTIMEONLY(23, 31, 1));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventStartTime_296);
            ComplexEventTimes_NoComplexEventTimes_296.insert(ComplexEventStartTime_296.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_296);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_146;
          FIX::ComplexEventEndDate ComplexEventEndDate_146(FIX::UTCTIMESTAMP(10, 38, 1, 13, 92016));
          noComplexEventDates_0_0_1_3_1.set(ComplexEventEndDate_146);
          ComplexEventDates_NoComplexEventDates_146.insert(ComplexEventEndDate_146.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_146(FIX::UTCTIMESTAMP(1, 45, 57, 20, 42008));
          noComplexEventDates_0_0_1_3_1.set(ComplexEventStartDate_146);
          ComplexEventDates_NoComplexEventDates_146.insert(ComplexEventStartDate_146.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_146);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_297;
            FIX::ComplexEventEndTime ComplexEventEndTime_297(FIX::UTCTIMEONLY(18, 59, 45));
            noComplexEventTimes_0_0_1_1_4_0.set(ComplexEventEndTime_297);
            ComplexEventTimes_NoComplexEventTimes_297.insert(ComplexEventEndTime_297.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_297(FIX::UTCTIMEONLY(4, 56, 58));
            noComplexEventTimes_0_0_1_1_4_0.set(ComplexEventStartTime_297);
            ComplexEventTimes_NoComplexEventTimes_297.insert(ComplexEventStartTime_297.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_297);

            noComplexEventDates_0_0_1_3_1.addGroup(noComplexEventTimes_0_0_1_1_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_68;
        FIX::ComplexEventCondition ComplexEventCondition_68(1);
        noComplexEvents_0_0_2_2.set(ComplexEventCondition_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventCondition_68.getString());
        FIX::ComplexEventPrice ComplexEventPrice_68;
        ComplexEventPrice_68.setString("15192072");
        noComplexEvents_0_0_2_2.set(ComplexEventPrice_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventPrice_68.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_68(2);
        noComplexEvents_0_0_2_2.set(ComplexEventPriceBoundaryMethod_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventPriceBoundaryMethod_68.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_68;
        ComplexEventPriceBoundaryPrecision_68.setString("27.850000");
        noComplexEvents_0_0_2_2.set(ComplexEventPriceBoundaryPrecision_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventPriceBoundaryPrecision_68.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_68(3);
        noComplexEvents_0_0_2_2.set(ComplexEventPriceTimeType_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventPriceTimeType_68.getString());
        FIX::ComplexEventType ComplexEventType_68(9);
        noComplexEvents_0_0_2_2.set(ComplexEventType_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventType_68.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_68;
        ComplexOptPayoutAmount_68.setString("861857");
        noComplexEvents_0_0_2_2.set(ComplexOptPayoutAmount_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexOptPayoutAmount_68.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_68);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_147;
          FIX::ComplexEventEndDate ComplexEventEndDate_147(FIX::UTCTIMESTAMP(15, 3, 52, 16, 42012));
          noComplexEventDates_0_0_2_3_0.set(ComplexEventEndDate_147);
          ComplexEventDates_NoComplexEventDates_147.insert(ComplexEventEndDate_147.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_147(FIX::UTCTIMESTAMP(20, 45, 25, 25, 12009));
          noComplexEventDates_0_0_2_3_0.set(ComplexEventStartDate_147);
          ComplexEventDates_NoComplexEventDates_147.insert(ComplexEventStartDate_147.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_147);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_298;
            FIX::ComplexEventEndTime ComplexEventEndTime_298(FIX::UTCTIMEONLY(7, 43, 29));
            noComplexEventTimes_0_0_2_0_4_0.set(ComplexEventEndTime_298);
            ComplexEventTimes_NoComplexEventTimes_298.insert(ComplexEventEndTime_298.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_298(FIX::UTCTIMEONLY(0, 17, 42));
            noComplexEventTimes_0_0_2_0_4_0.set(ComplexEventStartTime_298);
            ComplexEventTimes_NoComplexEventTimes_298.insert(ComplexEventStartTime_298.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_298);

            noComplexEventDates_0_0_2_3_0.addGroup(noComplexEventTimes_0_0_2_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_299;
            FIX::ComplexEventEndTime ComplexEventEndTime_299(FIX::UTCTIMEONLY(11, 30, 27));
            noComplexEventTimes_0_0_2_0_4_1.set(ComplexEventEndTime_299);
            ComplexEventTimes_NoComplexEventTimes_299.insert(ComplexEventEndTime_299.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_299(FIX::UTCTIMEONLY(17, 56, 37));
            noComplexEventTimes_0_0_2_0_4_1.set(ComplexEventStartTime_299);
            ComplexEventTimes_NoComplexEventTimes_299.insert(ComplexEventStartTime_299.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_299);

            noComplexEventDates_0_0_2_3_0.addGroup(noComplexEventTimes_0_0_2_0_4_1);
          }
          noComplexEvents_0_0_2_2.addGroup(noComplexEventDates_0_0_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_148;
          FIX::ComplexEventEndDate ComplexEventEndDate_148(FIX::UTCTIMESTAMP(12, 40, 40, 12, 12004));
          noComplexEventDates_0_0_2_3_1.set(ComplexEventEndDate_148);
          ComplexEventDates_NoComplexEventDates_148.insert(ComplexEventEndDate_148.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_148(FIX::UTCTIMESTAMP(8, 17, 53, 17, 72012));
          noComplexEventDates_0_0_2_3_1.set(ComplexEventStartDate_148);
          ComplexEventDates_NoComplexEventDates_148.insert(ComplexEventStartDate_148.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_148);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_300;
            FIX::ComplexEventEndTime ComplexEventEndTime_300(FIX::UTCTIMEONLY(13, 5, 35));
            noComplexEventTimes_0_0_2_1_4_0.set(ComplexEventEndTime_300);
            ComplexEventTimes_NoComplexEventTimes_300.insert(ComplexEventEndTime_300.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_300(FIX::UTCTIMEONLY(17, 52, 35));
            noComplexEventTimes_0_0_2_1_4_0.set(ComplexEventStartTime_300);
            ComplexEventTimes_NoComplexEventTimes_300.insert(ComplexEventStartTime_300.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_300);

            noComplexEventDates_0_0_2_3_1.addGroup(noComplexEventTimes_0_0_2_1_4_0);
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
        multiset<string> EvntGrp_NoEvents_70;
        FIX::EventDate EventDate_70("LOCALMKTDATE_2057444259");
        noEvents_0_0_2_0.set(EventDate_70);
        EvntGrp_NoEvents_70.insert(EventDate_70.getString());
        FIX::EventPx EventPx_70;
        EventPx_70.setString("4058986");
        noEvents_0_0_2_0.set(EventPx_70);
        EvntGrp_NoEvents_70.insert(EventPx_70.getString());
        FIX::EventText EventText_70("STRING_1208272407");
        noEvents_0_0_2_0.set(EventText_70);
        EvntGrp_NoEvents_70.insert(EventText_70.getString());
        FIX::EventTime EventTime_70(FIX::UTCTIMESTAMP(23, 23, 19, 23, 42004));
        noEvents_0_0_2_0.set(EventTime_70);
        EvntGrp_NoEvents_70.insert(EventTime_70.getString());
        FIX::EventType EventType_70(99);
        noEvents_0_0_2_0.set(EventType_70);
        EvntGrp_NoEvents_70.insert(EventType_70.getString());
        all_values.push_back(EvntGrp_NoEvents_70);

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_71;
        FIX::EventDate EventDate_71("LOCALMKTDATE_403598792");
        noEvents_0_0_2_1.set(EventDate_71);
        EvntGrp_NoEvents_71.insert(EventDate_71.getString());
        FIX::EventPx EventPx_71;
        EventPx_71.setString("13673525");
        noEvents_0_0_2_1.set(EventPx_71);
        EvntGrp_NoEvents_71.insert(EventPx_71.getString());
        FIX::EventText EventText_71("STRING_1857760939");
        noEvents_0_0_2_1.set(EventText_71);
        EvntGrp_NoEvents_71.insert(EventText_71.getString());
        FIX::EventTime EventTime_71(FIX::UTCTIMESTAMP(16, 37, 45, 22, 122001));
        noEvents_0_0_2_1.set(EventTime_71);
        EvntGrp_NoEvents_71.insert(EventTime_71.getString());
        FIX::EventType EventType_71(1);
        noEvents_0_0_2_1.set(EventType_71);
        EvntGrp_NoEvents_71.insert(EventType_71.getString());
        all_values.push_back(EvntGrp_NoEvents_71);

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_72;
        FIX::EventDate EventDate_72("LOCALMKTDATE_1446561425");
        noEvents_0_0_2_2.set(EventDate_72);
        EvntGrp_NoEvents_72.insert(EventDate_72.getString());
        FIX::EventPx EventPx_72;
        EventPx_72.setString("214000");
        noEvents_0_0_2_2.set(EventPx_72);
        EvntGrp_NoEvents_72.insert(EventPx_72.getString());
        FIX::EventText EventText_72("STRING_1048311465");
        noEvents_0_0_2_2.set(EventText_72);
        EvntGrp_NoEvents_72.insert(EventText_72.getString());
        FIX::EventTime EventTime_72(FIX::UTCTIMESTAMP(1, 15, 24, 24, 72001));
        noEvents_0_0_2_2.set(EventTime_72);
        EvntGrp_NoEvents_72.insert(EventTime_72.getString());
        FIX::EventType EventType_72(11);
        noEvents_0_0_2_2.set(EventType_72);
        EvntGrp_NoEvents_72.insert(EventType_72.getString());
        all_values.push_back(EvntGrp_NoEvents_72);

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_61;
        FIX::InstrumentPartyID InstrumentPartyID_61("STRING_1647554497");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_61);
        InstrumentParties_NoInstrumentParties_61.insert(InstrumentPartyID_61.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_61('1');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_61);
        InstrumentParties_NoInstrumentParties_61.insert(InstrumentPartyIDSource_61.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_61(878929909);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_61);
        InstrumentParties_NoInstrumentParties_61.insert(InstrumentPartyRole_61.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_61);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121;
          FIX::InstrumentPartySubID InstrumentPartySubID_121("STRING_48473733");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_121);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121.insert(InstrumentPartySubID_121.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_121(1000289668);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_121);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121.insert(InstrumentPartySubIDType_121.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_121);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122;
          FIX::InstrumentPartySubID InstrumentPartySubID_122("STRING_317829881");
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubID_122);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122.insert(InstrumentPartySubID_122.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_122(612645553);
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubIDType_122);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122.insert(InstrumentPartySubIDType_122.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_122);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_66;
        FIX::SecurityAltID SecurityAltID_66("STRING_1685182425");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_66);
        SecAltIDGrp_NoSecurityAltID_66.insert(SecurityAltID_66.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_66("STRING_322922844");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_66);
        SecAltIDGrp_NoSecurityAltID_66.insert(SecurityAltIDSource_66.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_66);

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_64;
      FIX::SecurityXML SecurityXML_65("XMLDATA_699582052");
      noQuoteEntries_0_1_0.set(SecurityXML_65);
      FIX::SecurityXMLLen SecurityXMLLen_32(307843457);
      noQuoteEntries_0_1_0.set(SecurityXMLLen_32);
      FIX::SecurityXMLSchema SecurityXMLSchema_32("STRING_211786373");
      noQuoteEntries_0_1_0.set(SecurityXMLSchema_32);
      SecurityXML_64.insert(SecurityXMLSchema_32.getString());
      all_values.push_back(SecurityXML_64);

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_53;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_53("DATA_1528038397");
    noQuoteSets_0_0.set(EncodedUnderlyingIssuer_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingIssuer_53.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_53(1219701755);
    noQuoteSets_0_0.set(EncodedUnderlyingIssuerLen_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingIssuerLen_53.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_53("DATA_57405284");
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDesc_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingSecurityDesc_53.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_53(1733747348);
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDescLen_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingSecurityDescLen_53.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_53;
    UnderlyingAdjustedQuantity_53.setString("21180011");
    noQuoteSets_0_0.set(UnderlyingAdjustedQuantity_53);
    UnderlyingInstrument_53.insert(UnderlyingAdjustedQuantity_53.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_53;
    UnderlyingAllocationPercent_53.setString("67.090000");
    noQuoteSets_0_0.set(UnderlyingAllocationPercent_53);
    UnderlyingInstrument_53.insert(UnderlyingAllocationPercent_53.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_53;
    UnderlyingAttachmentPoint_53.setString("74.160000");
    noQuoteSets_0_0.set(UnderlyingAttachmentPoint_53);
    UnderlyingInstrument_53.insert(UnderlyingAttachmentPoint_53.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_53("STRING_1018828973");
    noQuoteSets_0_0.set(UnderlyingCFICode_53);
    UnderlyingInstrument_53.insert(UnderlyingCFICode_53.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_53("STRING_1404205401");
    noQuoteSets_0_0.set(UnderlyingCPProgram_53);
    UnderlyingInstrument_53.insert(UnderlyingCPProgram_53.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_53("STRING_224195377");
    noQuoteSets_0_0.set(UnderlyingCPRegType_53);
    UnderlyingInstrument_53.insert(UnderlyingCPRegType_53.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_53;
    UnderlyingCapValue_53.setString("3342396");
    noQuoteSets_0_0.set(UnderlyingCapValue_53);
    UnderlyingInstrument_53.insert(UnderlyingCapValue_53.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_53;
    UnderlyingCashAmount_53.setString("8004012");
    noQuoteSets_0_0.set(UnderlyingCashAmount_53);
    UnderlyingInstrument_53.insert(UnderlyingCashAmount_53.getString());
    FIX::UnderlyingCashType UnderlyingCashType_53("STRING_FIXED");
    noQuoteSets_0_0.set(UnderlyingCashType_53);
    UnderlyingInstrument_53.insert(UnderlyingCashType_53.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_53;
    UnderlyingContractMultiplier_53.setString("6457632");
    noQuoteSets_0_0.set(UnderlyingContractMultiplier_53);
    UnderlyingInstrument_53.insert(UnderlyingContractMultiplier_53.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_53(106557684);
    noQuoteSets_0_0.set(UnderlyingContractMultiplierUnit_53);
    UnderlyingInstrument_53.insert(UnderlyingContractMultiplierUnit_53.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_53("COUNTRY_245022864");
    noQuoteSets_0_0.set(UnderlyingCountryOfIssue_53);
    UnderlyingInstrument_53.insert(UnderlyingCountryOfIssue_53.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_53("LOCALMKTDATE_18075692");
    noQuoteSets_0_0.set(UnderlyingCouponPaymentDate_53);
    UnderlyingInstrument_53.insert(UnderlyingCouponPaymentDate_53.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_53;
    UnderlyingCouponRate_53.setString("21.820000");
    noQuoteSets_0_0.set(UnderlyingCouponRate_53);
    UnderlyingInstrument_53.insert(UnderlyingCouponRate_53.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_53("STRING_383376478");
    noQuoteSets_0_0.set(UnderlyingCreditRating_53);
    UnderlyingInstrument_53.insert(UnderlyingCreditRating_53.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_53("CHF");
    noQuoteSets_0_0.set(UnderlyingCurrency_53);
    UnderlyingInstrument_53.insert(UnderlyingCurrency_53.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_53;
    UnderlyingCurrentValue_53.setString("4318502");
    noQuoteSets_0_0.set(UnderlyingCurrentValue_53);
    UnderlyingInstrument_53.insert(UnderlyingCurrentValue_53.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_53;
    UnderlyingDetachmentPoint_53.setString("52.690000");
    noQuoteSets_0_0.set(UnderlyingDetachmentPoint_53);
    UnderlyingInstrument_53.insert(UnderlyingDetachmentPoint_53.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_53;
    UnderlyingDirtyPrice_53.setString("21110492");
    noQuoteSets_0_0.set(UnderlyingDirtyPrice_53);
    UnderlyingInstrument_53.insert(UnderlyingDirtyPrice_53.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_53;
    UnderlyingEndPrice_53.setString("10444957");
    noQuoteSets_0_0.set(UnderlyingEndPrice_53);
    UnderlyingInstrument_53.insert(UnderlyingEndPrice_53.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_53;
    UnderlyingEndValue_53.setString("11537000");
    noQuoteSets_0_0.set(UnderlyingEndValue_53);
    UnderlyingInstrument_53.insert(UnderlyingEndValue_53.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_53(1648747989);
    noQuoteSets_0_0.set(UnderlyingExerciseStyle_53);
    UnderlyingInstrument_53.insert(UnderlyingExerciseStyle_53.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_53;
    UnderlyingFXRate_53.setString("13674186");
    noQuoteSets_0_0.set(UnderlyingFXRate_53);
    UnderlyingInstrument_53.insert(UnderlyingFXRate_53.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_53('D');
    noQuoteSets_0_0.set(UnderlyingFXRateCalc_53);
    UnderlyingInstrument_53.insert(UnderlyingFXRateCalc_53.getString());
    FIX::UnderlyingFactor UnderlyingFactor_53;
    UnderlyingFactor_53.setString("19565914");
    noQuoteSets_0_0.set(UnderlyingFactor_53);
    UnderlyingInstrument_53.insert(UnderlyingFactor_53.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_53(1579204983);
    noQuoteSets_0_0.set(UnderlyingFlowScheduleType_53);
    UnderlyingInstrument_53.insert(UnderlyingFlowScheduleType_53.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_53("STRING_1233836884");
    noQuoteSets_0_0.set(UnderlyingInstrRegistry_53);
    UnderlyingInstrument_53.insert(UnderlyingInstrRegistry_53.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_53("LOCALMKTDATE_1028809554");
    noQuoteSets_0_0.set(UnderlyingIssueDate_53);
    UnderlyingInstrument_53.insert(UnderlyingIssueDate_53.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_53("STRING_1636610267");
    noQuoteSets_0_0.set(UnderlyingIssuer_53);
    UnderlyingInstrument_53.insert(UnderlyingIssuer_53.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_53("STRING_820100584");
    noQuoteSets_0_0.set(UnderlyingLocaleOfIssue_53);
    UnderlyingInstrument_53.insert(UnderlyingLocaleOfIssue_53.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_53("LOCALMKTDATE_999327061");
    noQuoteSets_0_0.set(UnderlyingMaturityDate_53);
    UnderlyingInstrument_53.insert(UnderlyingMaturityDate_53.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_53("MONTHYEAR_993093329");
    noQuoteSets_0_0.set(UnderlyingMaturityMonthYear_53);
    UnderlyingInstrument_53.insert(UnderlyingMaturityMonthYear_53.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_53("TZTIMEONLY_427764353");
    noQuoteSets_0_0.set(UnderlyingMaturityTime_53);
    UnderlyingInstrument_53.insert(UnderlyingMaturityTime_53.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_53;
    UnderlyingNotionalPercentageOutstanding_53.setString("60.340000");
    noQuoteSets_0_0.set(UnderlyingNotionalPercentageOutstanding_53);
    UnderlyingInstrument_53.insert(UnderlyingNotionalPercentageOutstanding_53.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_53('2');
    noQuoteSets_0_0.set(UnderlyingOptAttribute_53);
    UnderlyingInstrument_53.insert(UnderlyingOptAttribute_53.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_53;
    UnderlyingOriginalNotionalPercentageOutstanding_53.setString("97.300000");
    noQuoteSets_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_53);
    UnderlyingInstrument_53.insert(UnderlyingOriginalNotionalPercentageOutstanding_53.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_53("STRING_204911986");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasure_53);
    UnderlyingInstrument_53.insert(UnderlyingPriceUnitOfMeasure_53.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_53;
    UnderlyingPriceUnitOfMeasureQty_53.setString("10502163");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasureQty_53);
    UnderlyingInstrument_53.insert(UnderlyingPriceUnitOfMeasureQty_53.getString());
    FIX::UnderlyingProduct UnderlyingProduct_53(1757361332);
    noQuoteSets_0_0.set(UnderlyingProduct_53);
    UnderlyingInstrument_53.insert(UnderlyingProduct_53.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_53(850675253);
    noQuoteSets_0_0.set(UnderlyingPutOrCall_53);
    UnderlyingInstrument_53.insert(UnderlyingPutOrCall_53.getString());
    FIX::UnderlyingPx UnderlyingPx_53;
    UnderlyingPx_53.setString("11567740");
    noQuoteSets_0_0.set(UnderlyingPx_53);
    UnderlyingInstrument_53.insert(UnderlyingPx_53.getString());
    FIX::UnderlyingQty UnderlyingQty_53;
    UnderlyingQty_53.setString("20023841");
    noQuoteSets_0_0.set(UnderlyingQty_53);
    UnderlyingInstrument_53.insert(UnderlyingQty_53.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_53("LOCALMKTDATE_868750945");
    noQuoteSets_0_0.set(UnderlyingRedemptionDate_53);
    UnderlyingInstrument_53.insert(UnderlyingRedemptionDate_53.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_53("STRING_763402538");
    noQuoteSets_0_0.set(UnderlyingRepoCollateralSecurityType_53);
    UnderlyingInstrument_53.insert(UnderlyingRepoCollateralSecurityType_53.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_53;
    UnderlyingRepurchaseRate_53.setString("70.270000");
    noQuoteSets_0_0.set(UnderlyingRepurchaseRate_53);
    UnderlyingInstrument_53.insert(UnderlyingRepurchaseRate_53.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_53(1765756546);
    noQuoteSets_0_0.set(UnderlyingRepurchaseTerm_53);
    UnderlyingInstrument_53.insert(UnderlyingRepurchaseTerm_53.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_53("STRING_409138221");
    noQuoteSets_0_0.set(UnderlyingRestructuringType_53);
    UnderlyingInstrument_53.insert(UnderlyingRestructuringType_53.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_53("STRING_670127239");
    noQuoteSets_0_0.set(UnderlyingSecurityDesc_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityDesc_53.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_53("EXCHANGE_1515568167");
    noQuoteSets_0_0.set(UnderlyingSecurityExchange_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityExchange_53.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_53("STRING_372703785");
    noQuoteSets_0_0.set(UnderlyingSecurityID_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityID_53.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_53("STRING_1714623004");
    noQuoteSets_0_0.set(UnderlyingSecurityIDSource_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityIDSource_53.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_53("STRING_521784601");
    noQuoteSets_0_0.set(UnderlyingSecuritySubType_53);
    UnderlyingInstrument_53.insert(UnderlyingSecuritySubType_53.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_53("STRING_2021451774");
    noQuoteSets_0_0.set(UnderlyingSecurityType_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityType_53.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_53("STRING_934557966");
    noQuoteSets_0_0.set(UnderlyingSeniority_53);
    UnderlyingInstrument_53.insert(UnderlyingSeniority_53.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_53("STRING_227583088");
    noQuoteSets_0_0.set(UnderlyingSettlMethod_53);
    UnderlyingInstrument_53.insert(UnderlyingSettlMethod_53.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_53(4);
    noQuoteSets_0_0.set(UnderlyingSettlementType_53);
    UnderlyingInstrument_53.insert(UnderlyingSettlementType_53.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_53;
    UnderlyingStartValue_53.setString("3662793");
    noQuoteSets_0_0.set(UnderlyingStartValue_53);
    UnderlyingInstrument_53.insert(UnderlyingStartValue_53.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_53("STRING_1461419972");
    noQuoteSets_0_0.set(UnderlyingStateOrProvinceOfIssue_53);
    UnderlyingInstrument_53.insert(UnderlyingStateOrProvinceOfIssue_53.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_53("USD");
    noQuoteSets_0_0.set(UnderlyingStrikeCurrency_53);
    UnderlyingInstrument_53.insert(UnderlyingStrikeCurrency_53.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_53;
    UnderlyingStrikePrice_53.setString("1340369");
    noQuoteSets_0_0.set(UnderlyingStrikePrice_53);
    UnderlyingInstrument_53.insert(UnderlyingStrikePrice_53.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_53("STRING_1711212540");
    noQuoteSets_0_0.set(UnderlyingSymbol_53);
    UnderlyingInstrument_53.insert(UnderlyingSymbol_53.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_53("STRING_848499249");
    noQuoteSets_0_0.set(UnderlyingSymbolSfx_53);
    UnderlyingInstrument_53.insert(UnderlyingSymbolSfx_53.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_53("STRING_561801261");
    noQuoteSets_0_0.set(UnderlyingTimeUnit_53);
    UnderlyingInstrument_53.insert(UnderlyingTimeUnit_53.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_53("STRING_1581884927");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasure_53);
    UnderlyingInstrument_53.insert(UnderlyingUnitOfMeasure_53.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_53;
    UnderlyingUnitOfMeasureQty_53.setString("10983143");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasureQty_53);
    UnderlyingInstrument_53.insert(UnderlyingUnitOfMeasureQty_53.getString());
    all_values.push_back(UnderlyingInstrument_53);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_105;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_105("STRING_1786796913");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_105);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_105.insert(UnderlyingSecurityAltID_105.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_105("STRING_1047004");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_105);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_105.insert(UnderlyingSecurityAltIDSource_105.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_105);

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_106;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_106("STRING_823638676");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_106);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_106.insert(UnderlyingSecurityAltID_106.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_106("STRING_489988518");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltIDSource_106);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_106.insert(UnderlyingSecurityAltIDSource_106.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_106);

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_105;
      FIX::UnderlyingStipType UnderlyingStipType_105("STRING_678539225");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_105);
      UnderlyingStipulations_NoUnderlyingStips_105.insert(UnderlyingStipType_105.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_105("STRING_1358739463");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_105);
      UnderlyingStipulations_NoUnderlyingStips_105.insert(UnderlyingStipValue_105.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_105);

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_105;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_105("STRING_916816253");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_105);
      UndlyInstrumentParties_NoUndlyInstrumentParties_105.insert(UnderlyingInstrumentPartyID_105.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_105('9');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_105);
      UndlyInstrumentParties_NoUndlyInstrumentParties_105.insert(UnderlyingInstrumentPartyIDSource_105.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_105(182878120);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_105);
      UndlyInstrumentParties_NoUndlyInstrumentParties_105.insert(UnderlyingInstrumentPartyRole_105.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_105);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_202("STRING_345096881");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_202);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202.insert(UnderlyingInstrumentPartySubID_202.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_202(555581906);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_202);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202.insert(UnderlyingInstrumentPartySubIDType_202.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_202);

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

  cout << "FIX components" << endl;
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
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
  fix2xml::fix_env::terminate_xerces();
}
