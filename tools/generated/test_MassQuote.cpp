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
  multiset<string> MassQuote_0;
  FIX::Account Account_10("STRING_1763260980");
  msg.set(Account_10);
  MassQuote_0.insert(Account_10.getString());
  FIX::AccountType AccountType_9(4);
  msg.set(AccountType_9);
  MassQuote_0.insert(AccountType_9.getString());
  FIX::AcctIDSource AcctIDSource_3(3);
  msg.set(AcctIDSource_3);
  MassQuote_0.insert(AcctIDSource_3.getString());
  FIX::DefBidSize DefBidSize_0;
  DefBidSize_0.setString("18685767");
  msg.set(DefBidSize_0);
  MassQuote_0.insert(DefBidSize_0.getString());
  FIX::DefOfferSize DefOfferSize_0;
  DefOfferSize_0.setString("9173109");
  msg.set(DefOfferSize_0);
  MassQuote_0.insert(DefOfferSize_0.getString());
  FIX::QuoteID QuoteID_1("STRING_68214773");
  msg.set(QuoteID_1);
  MassQuote_0.insert(QuoteID_1.getString());
  FIX::QuoteReqID QuoteReqID_0("STRING_1039215951");
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
    multiset<string> Parties_NoPartyIDs_54;
    FIX::PartyID PartyID_54("STRING_215646809");
    noPartyIDs_0_0.set(PartyID_54);
    Parties_NoPartyIDs_54.insert(PartyID_54.getString());
    FIX::PartyIDSource PartyIDSource_54('A');
    noPartyIDs_0_0.set(PartyIDSource_54);
    Parties_NoPartyIDs_54.insert(PartyIDSource_54.getString());
    FIX::PartyRole PartyRole_54(72);
    noPartyIDs_0_0.set(PartyRole_54);
    Parties_NoPartyIDs_54.insert(PartyRole_54.getString());
    all_values.push_back(Parties_NoPartyIDs_54);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_109;
      FIX::PartySubID PartySubID_109("STRING_694156705");
      noPartySubIDs_0_1_0.set(PartySubID_109);
      PtysSubGrp_NoPartySubIDs_109.insert(PartySubID_109.getString());
      FIX::PartySubIDType PartySubIDType_109(7);
      noPartySubIDs_0_1_0.set(PartySubIDType_109);
      PtysSubGrp_NoPartySubIDs_109.insert(PartySubIDType_109.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_109);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MassQuote::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_55;
    FIX::PartyID PartyID_55("STRING_297516589");
    noPartyIDs_0_1.set(PartyID_55);
    Parties_NoPartyIDs_55.insert(PartyID_55.getString());
    FIX::PartyIDSource PartyIDSource_55('9');
    noPartyIDs_0_1.set(PartyIDSource_55);
    Parties_NoPartyIDs_55.insert(PartyIDSource_55.getString());
    FIX::PartyRole PartyRole_55(76);
    noPartyIDs_0_1.set(PartyRole_55);
    Parties_NoPartyIDs_55.insert(PartyRole_55.getString());
    all_values.push_back(Parties_NoPartyIDs_55);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_110;
      FIX::PartySubID PartySubID_110("STRING_291983069");
      noPartySubIDs_1_1_0.set(PartySubID_110);
      PtysSubGrp_NoPartySubIDs_110.insert(PartySubID_110.getString());
      FIX::PartySubIDType PartySubIDType_110(12);
      noPartySubIDs_1_1_0.set(PartySubIDType_110);
      PtysSubGrp_NoPartySubIDs_110.insert(PartySubIDType_110.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_110);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_111;
      FIX::PartySubID PartySubID_111("STRING_1129993373");
      noPartySubIDs_1_1_1.set(PartySubID_111);
      PtysSubGrp_NoPartySubIDs_111.insert(PartySubID_111.getString());
      FIX::PartySubIDType PartySubIDType_111(8);
      noPartySubIDs_1_1_1.set(PartySubIDType_111);
      PtysSubGrp_NoPartySubIDs_111.insert(PartySubIDType_111.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_111);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
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
    FIX::QuoteSetID QuoteSetID_0("STRING_530409533");
    noQuoteSets_0_0.set(QuoteSetID_0);
    QuotSetGrp_NoQuoteSets_0.insert(QuoteSetID_0.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_0(FIX::UTCTIMESTAMP(10, 49, 14, 10, 3, 2003));
    noQuoteSets_0_0.set(QuoteSetValidUntilTime_0);
    QuotSetGrp_NoQuoteSets_0.insert(QuoteSetValidUntilTime_0.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_0(1073034122);
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
      BidForwardPoints_0.setString("2154193");
      noQuoteEntries_0_1_0.set(BidForwardPoints_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidForwardPoints_0.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_0;
      BidForwardPoints2_0.setString("21122500");
      noQuoteEntries_0_1_0.set(BidForwardPoints2_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidForwardPoints2_0.getString());
      FIX::BidPx BidPx_0;
      BidPx_0.setString("21224490");
      noQuoteEntries_0_1_0.set(BidPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidPx_0.getString());
      FIX::BidSize BidSize_0;
      BidSize_0.setString("9910695");
      noQuoteEntries_0_1_0.set(BidSize_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidSize_0.getString());
      FIX::BidSpotRate BidSpotRate_0;
      BidSpotRate_0.setString("14079622");
      noQuoteEntries_0_1_0.set(BidSpotRate_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidSpotRate_0.getString());
      FIX::BidYield BidYield_0;
      BidYield_0.setString("21.890000");
      noQuoteEntries_0_1_0.set(BidYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(BidYield_0.getString());
      FIX::BookingType BookingType_5(2);
      noQuoteEntries_0_1_0.set(BookingType_5);
      QuotEntryGrp_NoQuoteEntries_0.insert(BookingType_5.getString());
      FIX::Currency Currency_29("JPY");
      noQuoteEntries_0_1_0.set(Currency_29);
      QuotEntryGrp_NoQuoteEntries_0.insert(Currency_29.getString());
      FIX::MidPx MidPx_0;
      MidPx_0.setString("3069977");
      noQuoteEntries_0_1_0.set(MidPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(MidPx_0.getString());
      FIX::MidYield MidYield_0;
      MidYield_0.setString("90.350000");
      noQuoteEntries_0_1_0.set(MidYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(MidYield_0.getString());
      FIX::OfferForwardPoints OfferForwardPoints_0;
      OfferForwardPoints_0.setString("8712193");
      noQuoteEntries_0_1_0.set(OfferForwardPoints_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferForwardPoints_0.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_0;
      OfferForwardPoints2_0.setString("11574732");
      noQuoteEntries_0_1_0.set(OfferForwardPoints2_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferForwardPoints2_0.getString());
      FIX::OfferPx OfferPx_0;
      OfferPx_0.setString("2572416");
      noQuoteEntries_0_1_0.set(OfferPx_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferPx_0.getString());
      FIX::OfferSize OfferSize_0;
      OfferSize_0.setString("20940963");
      noQuoteEntries_0_1_0.set(OfferSize_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferSize_0.getString());
      FIX::OfferSpotRate OfferSpotRate_0;
      OfferSpotRate_0.setString("14494562");
      noQuoteEntries_0_1_0.set(OfferSpotRate_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferSpotRate_0.getString());
      FIX::OfferYield OfferYield_0;
      OfferYield_0.setString("60.860000");
      noQuoteEntries_0_1_0.set(OfferYield_0);
      QuotEntryGrp_NoQuoteEntries_0.insert(OfferYield_0.getString());
      FIX::OrdType OrdType_20('9');
      noQuoteEntries_0_1_0.set(OrdType_20);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrdType_20.getString());
      FIX::OrderCapacity OrderCapacity_7('R');
      noQuoteEntries_0_1_0.set(OrderCapacity_7);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderCapacity_7.getString());
      FIX::OrderQty2 OrderQty2_1;
      OrderQty2_1.setString("1460220");
      noQuoteEntries_0_1_0.set(OrderQty2_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderQty2_1.getString());
      FIX::OrderRestrictions OrderRestrictions_5("MULTIPLECHARVALUE_A");
      noQuoteEntries_0_1_0.set(OrderRestrictions_5);
      QuotEntryGrp_NoQuoteEntries_0.insert(OrderRestrictions_5.getString());
      FIX::QuoteEntryID QuoteEntryID_2("STRING_2043538336");
      noQuoteEntries_0_1_0.set(QuoteEntryID_2);
      QuotEntryGrp_NoQuoteEntries_0.insert(QuoteEntryID_2.getString());
      FIX::SettlDate SettlDate_18("LOCALMKTDATE_248258588");
      noQuoteEntries_0_1_0.set(SettlDate_18);
      QuotEntryGrp_NoQuoteEntries_0.insert(SettlDate_18.getString());
      FIX::SettlDate2 SettlDate2_1("LOCALMKTDATE_141560546");
      noQuoteEntries_0_1_0.set(SettlDate2_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(SettlDate2_1.getString());
      FIX::TradingSessionID TradingSessionID_23("STRING_4");
      noQuoteEntries_0_1_0.set(TradingSessionID_23);
      QuotEntryGrp_NoQuoteEntries_0.insert(TradingSessionID_23.getString());
      FIX::TradingSessionSubID TradingSessionSubID_23("STRING_1");
      noQuoteEntries_0_1_0.set(TradingSessionSubID_23);
      QuotEntryGrp_NoQuoteEntries_0.insert(TradingSessionSubID_23.getString());
      FIX::TransactTime TransactTime_26(FIX::UTCTIMESTAMP(23, 2, 23, 26, 11, 2009));
      noQuoteEntries_0_1_0.set(TransactTime_26);
      QuotEntryGrp_NoQuoteEntries_0.insert(TransactTime_26.getString());
      FIX::ValidUntilTime ValidUntilTime_1(FIX::UTCTIMESTAMP(6, 37, 19, 14, 1, 2015));
      noQuoteEntries_0_1_0.set(ValidUntilTime_1);
      QuotEntryGrp_NoQuoteEntries_0.insert(ValidUntilTime_1.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_0);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_61;
        FIX::EncodedLegIssuer EncodedLegIssuer_61("DATA_1495912968");
        noLegs_0_0_2_0.set(EncodedLegIssuer_61);
        InstrumentLeg_61.insert(EncodedLegIssuer_61.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_61(990213573);
        noLegs_0_0_2_0.set(EncodedLegIssuerLen_61);
        InstrumentLeg_61.insert(EncodedLegIssuerLen_61.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_61("DATA_1957662120");
        noLegs_0_0_2_0.set(EncodedLegSecurityDesc_61);
        InstrumentLeg_61.insert(EncodedLegSecurityDesc_61.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_61(1753154621);
        noLegs_0_0_2_0.set(EncodedLegSecurityDescLen_61);
        InstrumentLeg_61.insert(EncodedLegSecurityDescLen_61.getString());
        FIX::LegCFICode LegCFICode_61("STRING_936826248");
        noLegs_0_0_2_0.set(LegCFICode_61);
        InstrumentLeg_61.insert(LegCFICode_61.getString());
        FIX::LegContractMultiplier LegContractMultiplier_61;
        LegContractMultiplier_61.setString("12596347");
        noLegs_0_0_2_0.set(LegContractMultiplier_61);
        InstrumentLeg_61.insert(LegContractMultiplier_61.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_61(530507060);
        noLegs_0_0_2_0.set(LegContractMultiplierUnit_61);
        InstrumentLeg_61.insert(LegContractMultiplierUnit_61.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_61("MONTHYEAR_2013432296");
        noLegs_0_0_2_0.set(LegContractSettlMonth_61);
        InstrumentLeg_61.insert(LegContractSettlMonth_61.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_61("COUNTRY_625279912");
        noLegs_0_0_2_0.set(LegCountryOfIssue_61);
        InstrumentLeg_61.insert(LegCountryOfIssue_61.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_61("LOCALMKTDATE_676529128");
        noLegs_0_0_2_0.set(LegCouponPaymentDate_61);
        InstrumentLeg_61.insert(LegCouponPaymentDate_61.getString());
        FIX::LegCouponRate LegCouponRate_61;
        LegCouponRate_61.setString("91.120000");
        noLegs_0_0_2_0.set(LegCouponRate_61);
        InstrumentLeg_61.insert(LegCouponRate_61.getString());
        FIX::LegCreditRating LegCreditRating_61("STRING_521334600");
        noLegs_0_0_2_0.set(LegCreditRating_61);
        InstrumentLeg_61.insert(LegCreditRating_61.getString());
        FIX::LegCurrency LegCurrency_61("CHF");
        noLegs_0_0_2_0.set(LegCurrency_61);
        InstrumentLeg_61.insert(LegCurrency_61.getString());
        FIX::LegDatedDate LegDatedDate_61("LOCALMKTDATE_562785237");
        noLegs_0_0_2_0.set(LegDatedDate_61);
        InstrumentLeg_61.insert(LegDatedDate_61.getString());
        FIX::LegExerciseStyle LegExerciseStyle_61(451444431);
        noLegs_0_0_2_0.set(LegExerciseStyle_61);
        InstrumentLeg_61.insert(LegExerciseStyle_61.getString());
        FIX::LegFactor LegFactor_61;
        LegFactor_61.setString("20538912");
        noLegs_0_0_2_0.set(LegFactor_61);
        InstrumentLeg_61.insert(LegFactor_61.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_61(1962195669);
        noLegs_0_0_2_0.set(LegFlowScheduleType_61);
        InstrumentLeg_61.insert(LegFlowScheduleType_61.getString());
        FIX::LegInstrRegistry LegInstrRegistry_61("STRING_125305725");
        noLegs_0_0_2_0.set(LegInstrRegistry_61);
        InstrumentLeg_61.insert(LegInstrRegistry_61.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_61("LOCALMKTDATE_325459703");
        noLegs_0_0_2_0.set(LegInterestAccrualDate_61);
        InstrumentLeg_61.insert(LegInterestAccrualDate_61.getString());
        FIX::LegIssueDate LegIssueDate_61("LOCALMKTDATE_1341909551");
        noLegs_0_0_2_0.set(LegIssueDate_61);
        InstrumentLeg_61.insert(LegIssueDate_61.getString());
        FIX::LegIssuer LegIssuer_61("STRING_14586372");
        noLegs_0_0_2_0.set(LegIssuer_61);
        InstrumentLeg_61.insert(LegIssuer_61.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_61("STRING_709278212");
        noLegs_0_0_2_0.set(LegLocaleOfIssue_61);
        InstrumentLeg_61.insert(LegLocaleOfIssue_61.getString());
        FIX::LegMaturityDate LegMaturityDate_61("LOCALMKTDATE_696588813");
        noLegs_0_0_2_0.set(LegMaturityDate_61);
        InstrumentLeg_61.insert(LegMaturityDate_61.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_61("MONTHYEAR_894936522");
        noLegs_0_0_2_0.set(LegMaturityMonthYear_61);
        InstrumentLeg_61.insert(LegMaturityMonthYear_61.getString());
        FIX::LegMaturityTime LegMaturityTime_61("TZTIMEONLY_353575322");
        noLegs_0_0_2_0.set(LegMaturityTime_61);
        InstrumentLeg_61.insert(LegMaturityTime_61.getString());
        FIX::LegOptAttribute LegOptAttribute_61('2');
        noLegs_0_0_2_0.set(LegOptAttribute_61);
        InstrumentLeg_61.insert(LegOptAttribute_61.getString());
        FIX::LegOptionRatio LegOptionRatio_61;
        LegOptionRatio_61.setString("13881276");
        noLegs_0_0_2_0.set(LegOptionRatio_61);
        InstrumentLeg_61.insert(LegOptionRatio_61.getString());
        FIX::LegPool LegPool_61("STRING_1030749254");
        noLegs_0_0_2_0.set(LegPool_61);
        InstrumentLeg_61.insert(LegPool_61.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_61("STRING_360874482");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasure_61);
        InstrumentLeg_61.insert(LegPriceUnitOfMeasure_61.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_61;
        LegPriceUnitOfMeasureQty_61.setString("408329");
        noLegs_0_0_2_0.set(LegPriceUnitOfMeasureQty_61);
        InstrumentLeg_61.insert(LegPriceUnitOfMeasureQty_61.getString());
        FIX::LegProduct LegProduct_61(379178574);
        noLegs_0_0_2_0.set(LegProduct_61);
        InstrumentLeg_61.insert(LegProduct_61.getString());
        FIX::LegPutOrCall LegPutOrCall_61(1351088055);
        noLegs_0_0_2_0.set(LegPutOrCall_61);
        InstrumentLeg_61.insert(LegPutOrCall_61.getString());
        FIX::LegRatioQty LegRatioQty_61;
        LegRatioQty_61.setString("19984950");
        noLegs_0_0_2_0.set(LegRatioQty_61);
        InstrumentLeg_61.insert(LegRatioQty_61.getString());
        FIX::LegRedemptionDate LegRedemptionDate_61("LOCALMKTDATE_2132333196");
        noLegs_0_0_2_0.set(LegRedemptionDate_61);
        InstrumentLeg_61.insert(LegRedemptionDate_61.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_61("STRING_140430655");
        noLegs_0_0_2_0.set(LegRepoCollateralSecurityType_61);
        InstrumentLeg_61.insert(LegRepoCollateralSecurityType_61.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_61;
        LegRepurchaseRate_61.setString("61.830000");
        noLegs_0_0_2_0.set(LegRepurchaseRate_61);
        InstrumentLeg_61.insert(LegRepurchaseRate_61.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_61(515356608);
        noLegs_0_0_2_0.set(LegRepurchaseTerm_61);
        InstrumentLeg_61.insert(LegRepurchaseTerm_61.getString());
        FIX::LegSecurityDesc LegSecurityDesc_61("STRING_6379303");
        noLegs_0_0_2_0.set(LegSecurityDesc_61);
        InstrumentLeg_61.insert(LegSecurityDesc_61.getString());
        FIX::LegSecurityExchange LegSecurityExchange_61("EXCHANGE_1735926096");
        noLegs_0_0_2_0.set(LegSecurityExchange_61);
        InstrumentLeg_61.insert(LegSecurityExchange_61.getString());
        FIX::LegSecurityID LegSecurityID_61("STRING_1191885736");
        noLegs_0_0_2_0.set(LegSecurityID_61);
        InstrumentLeg_61.insert(LegSecurityID_61.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_61("STRING_425208416");
        noLegs_0_0_2_0.set(LegSecurityIDSource_61);
        InstrumentLeg_61.insert(LegSecurityIDSource_61.getString());
        FIX::LegSecuritySubType LegSecuritySubType_61("STRING_109777048");
        noLegs_0_0_2_0.set(LegSecuritySubType_61);
        InstrumentLeg_61.insert(LegSecuritySubType_61.getString());
        FIX::LegSecurityType LegSecurityType_61("STRING_2116673452");
        noLegs_0_0_2_0.set(LegSecurityType_61);
        InstrumentLeg_61.insert(LegSecurityType_61.getString());
        FIX::LegSide LegSide_61('9');
        noLegs_0_0_2_0.set(LegSide_61);
        InstrumentLeg_61.insert(LegSide_61.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_61("STRING_672562286");
        noLegs_0_0_2_0.set(LegStateOrProvinceOfIssue_61);
        InstrumentLeg_61.insert(LegStateOrProvinceOfIssue_61.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_61("CAN");
        noLegs_0_0_2_0.set(LegStrikeCurrency_61);
        InstrumentLeg_61.insert(LegStrikeCurrency_61.getString());
        FIX::LegStrikePrice LegStrikePrice_61;
        LegStrikePrice_61.setString("4872743");
        noLegs_0_0_2_0.set(LegStrikePrice_61);
        InstrumentLeg_61.insert(LegStrikePrice_61.getString());
        FIX::LegSymbol LegSymbol_61("STRING_545939961");
        noLegs_0_0_2_0.set(LegSymbol_61);
        InstrumentLeg_61.insert(LegSymbol_61.getString());
        FIX::LegSymbolSfx LegSymbolSfx_61("STRING_1217465398");
        noLegs_0_0_2_0.set(LegSymbolSfx_61);
        InstrumentLeg_61.insert(LegSymbolSfx_61.getString());
        FIX::LegTimeUnit LegTimeUnit_61("STRING_1829183858");
        noLegs_0_0_2_0.set(LegTimeUnit_61);
        InstrumentLeg_61.insert(LegTimeUnit_61.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_61("STRING_560526333");
        noLegs_0_0_2_0.set(LegUnitOfMeasure_61);
        InstrumentLeg_61.insert(LegUnitOfMeasure_61.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_61;
        LegUnitOfMeasureQty_61.setString("19267436");
        noLegs_0_0_2_0.set(LegUnitOfMeasureQty_61);
        InstrumentLeg_61.insert(LegUnitOfMeasureQty_61.getString());
        all_values.push_back(InstrumentLeg_61);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_117;
          FIX::LegSecurityAltID LegSecurityAltID_117("STRING_1455462856");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltID_117);
          LegSecAltIDGrp_NoLegSecurityAltID_117.insert(LegSecurityAltID_117.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_117("STRING_132835285");
          noLegSecurityAltID_0_0_0_3_0.set(LegSecurityAltIDSource_117);
          LegSecAltIDGrp_NoLegSecurityAltID_117.insert(LegSecurityAltIDSource_117.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_117);

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_118;
          FIX::LegSecurityAltID LegSecurityAltID_118("STRING_620169288");
          noLegSecurityAltID_0_0_0_3_1.set(LegSecurityAltID_118);
          LegSecAltIDGrp_NoLegSecurityAltID_118.insert(LegSecurityAltID_118.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_118("STRING_696106905");
          noLegSecurityAltID_0_0_0_3_1.set(LegSecurityAltIDSource_118);
          LegSecAltIDGrp_NoLegSecurityAltID_118.insert(LegSecurityAltIDSource_118.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_118);

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_62;
        FIX::EncodedLegIssuer EncodedLegIssuer_62("DATA_1163584539");
        noLegs_0_0_2_1.set(EncodedLegIssuer_62);
        InstrumentLeg_62.insert(EncodedLegIssuer_62.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_62(981043770);
        noLegs_0_0_2_1.set(EncodedLegIssuerLen_62);
        InstrumentLeg_62.insert(EncodedLegIssuerLen_62.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_62("DATA_736939858");
        noLegs_0_0_2_1.set(EncodedLegSecurityDesc_62);
        InstrumentLeg_62.insert(EncodedLegSecurityDesc_62.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_62(1542763114);
        noLegs_0_0_2_1.set(EncodedLegSecurityDescLen_62);
        InstrumentLeg_62.insert(EncodedLegSecurityDescLen_62.getString());
        FIX::LegCFICode LegCFICode_62("STRING_184648178");
        noLegs_0_0_2_1.set(LegCFICode_62);
        InstrumentLeg_62.insert(LegCFICode_62.getString());
        FIX::LegContractMultiplier LegContractMultiplier_62;
        LegContractMultiplier_62.setString("5879512");
        noLegs_0_0_2_1.set(LegContractMultiplier_62);
        InstrumentLeg_62.insert(LegContractMultiplier_62.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_62(1527612662);
        noLegs_0_0_2_1.set(LegContractMultiplierUnit_62);
        InstrumentLeg_62.insert(LegContractMultiplierUnit_62.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_62("MONTHYEAR_325078833");
        noLegs_0_0_2_1.set(LegContractSettlMonth_62);
        InstrumentLeg_62.insert(LegContractSettlMonth_62.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_62("COUNTRY_1698597467");
        noLegs_0_0_2_1.set(LegCountryOfIssue_62);
        InstrumentLeg_62.insert(LegCountryOfIssue_62.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_62("LOCALMKTDATE_2042969270");
        noLegs_0_0_2_1.set(LegCouponPaymentDate_62);
        InstrumentLeg_62.insert(LegCouponPaymentDate_62.getString());
        FIX::LegCouponRate LegCouponRate_62;
        LegCouponRate_62.setString("81.370000");
        noLegs_0_0_2_1.set(LegCouponRate_62);
        InstrumentLeg_62.insert(LegCouponRate_62.getString());
        FIX::LegCreditRating LegCreditRating_62("STRING_1287039915");
        noLegs_0_0_2_1.set(LegCreditRating_62);
        InstrumentLeg_62.insert(LegCreditRating_62.getString());
        FIX::LegCurrency LegCurrency_62("EUR");
        noLegs_0_0_2_1.set(LegCurrency_62);
        InstrumentLeg_62.insert(LegCurrency_62.getString());
        FIX::LegDatedDate LegDatedDate_62("LOCALMKTDATE_1396816963");
        noLegs_0_0_2_1.set(LegDatedDate_62);
        InstrumentLeg_62.insert(LegDatedDate_62.getString());
        FIX::LegExerciseStyle LegExerciseStyle_62(1056561162);
        noLegs_0_0_2_1.set(LegExerciseStyle_62);
        InstrumentLeg_62.insert(LegExerciseStyle_62.getString());
        FIX::LegFactor LegFactor_62;
        LegFactor_62.setString("17422646");
        noLegs_0_0_2_1.set(LegFactor_62);
        InstrumentLeg_62.insert(LegFactor_62.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_62(2069379249);
        noLegs_0_0_2_1.set(LegFlowScheduleType_62);
        InstrumentLeg_62.insert(LegFlowScheduleType_62.getString());
        FIX::LegInstrRegistry LegInstrRegistry_62("STRING_1477195398");
        noLegs_0_0_2_1.set(LegInstrRegistry_62);
        InstrumentLeg_62.insert(LegInstrRegistry_62.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_62("LOCALMKTDATE_486786675");
        noLegs_0_0_2_1.set(LegInterestAccrualDate_62);
        InstrumentLeg_62.insert(LegInterestAccrualDate_62.getString());
        FIX::LegIssueDate LegIssueDate_62("LOCALMKTDATE_409169908");
        noLegs_0_0_2_1.set(LegIssueDate_62);
        InstrumentLeg_62.insert(LegIssueDate_62.getString());
        FIX::LegIssuer LegIssuer_62("STRING_2023135360");
        noLegs_0_0_2_1.set(LegIssuer_62);
        InstrumentLeg_62.insert(LegIssuer_62.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_62("STRING_1704252073");
        noLegs_0_0_2_1.set(LegLocaleOfIssue_62);
        InstrumentLeg_62.insert(LegLocaleOfIssue_62.getString());
        FIX::LegMaturityDate LegMaturityDate_62("LOCALMKTDATE_90870119");
        noLegs_0_0_2_1.set(LegMaturityDate_62);
        InstrumentLeg_62.insert(LegMaturityDate_62.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_62("MONTHYEAR_436178045");
        noLegs_0_0_2_1.set(LegMaturityMonthYear_62);
        InstrumentLeg_62.insert(LegMaturityMonthYear_62.getString());
        FIX::LegMaturityTime LegMaturityTime_62("TZTIMEONLY_1483512036");
        noLegs_0_0_2_1.set(LegMaturityTime_62);
        InstrumentLeg_62.insert(LegMaturityTime_62.getString());
        FIX::LegOptAttribute LegOptAttribute_62('4');
        noLegs_0_0_2_1.set(LegOptAttribute_62);
        InstrumentLeg_62.insert(LegOptAttribute_62.getString());
        FIX::LegOptionRatio LegOptionRatio_62;
        LegOptionRatio_62.setString("18916409");
        noLegs_0_0_2_1.set(LegOptionRatio_62);
        InstrumentLeg_62.insert(LegOptionRatio_62.getString());
        FIX::LegPool LegPool_62("STRING_1616347321");
        noLegs_0_0_2_1.set(LegPool_62);
        InstrumentLeg_62.insert(LegPool_62.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_62("STRING_1089328431");
        noLegs_0_0_2_1.set(LegPriceUnitOfMeasure_62);
        InstrumentLeg_62.insert(LegPriceUnitOfMeasure_62.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_62;
        LegPriceUnitOfMeasureQty_62.setString("4402641");
        noLegs_0_0_2_1.set(LegPriceUnitOfMeasureQty_62);
        InstrumentLeg_62.insert(LegPriceUnitOfMeasureQty_62.getString());
        FIX::LegProduct LegProduct_62(632448213);
        noLegs_0_0_2_1.set(LegProduct_62);
        InstrumentLeg_62.insert(LegProduct_62.getString());
        FIX::LegPutOrCall LegPutOrCall_62(2070372202);
        noLegs_0_0_2_1.set(LegPutOrCall_62);
        InstrumentLeg_62.insert(LegPutOrCall_62.getString());
        FIX::LegRatioQty LegRatioQty_62;
        LegRatioQty_62.setString("11772040");
        noLegs_0_0_2_1.set(LegRatioQty_62);
        InstrumentLeg_62.insert(LegRatioQty_62.getString());
        FIX::LegRedemptionDate LegRedemptionDate_62("LOCALMKTDATE_27727679");
        noLegs_0_0_2_1.set(LegRedemptionDate_62);
        InstrumentLeg_62.insert(LegRedemptionDate_62.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_62("STRING_107536732");
        noLegs_0_0_2_1.set(LegRepoCollateralSecurityType_62);
        InstrumentLeg_62.insert(LegRepoCollateralSecurityType_62.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_62;
        LegRepurchaseRate_62.setString("53.000000");
        noLegs_0_0_2_1.set(LegRepurchaseRate_62);
        InstrumentLeg_62.insert(LegRepurchaseRate_62.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_62(1555340341);
        noLegs_0_0_2_1.set(LegRepurchaseTerm_62);
        InstrumentLeg_62.insert(LegRepurchaseTerm_62.getString());
        FIX::LegSecurityDesc LegSecurityDesc_62("STRING_432615565");
        noLegs_0_0_2_1.set(LegSecurityDesc_62);
        InstrumentLeg_62.insert(LegSecurityDesc_62.getString());
        FIX::LegSecurityExchange LegSecurityExchange_62("EXCHANGE_1316269119");
        noLegs_0_0_2_1.set(LegSecurityExchange_62);
        InstrumentLeg_62.insert(LegSecurityExchange_62.getString());
        FIX::LegSecurityID LegSecurityID_62("STRING_1450825963");
        noLegs_0_0_2_1.set(LegSecurityID_62);
        InstrumentLeg_62.insert(LegSecurityID_62.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_62("STRING_764073702");
        noLegs_0_0_2_1.set(LegSecurityIDSource_62);
        InstrumentLeg_62.insert(LegSecurityIDSource_62.getString());
        FIX::LegSecuritySubType LegSecuritySubType_62("STRING_455825386");
        noLegs_0_0_2_1.set(LegSecuritySubType_62);
        InstrumentLeg_62.insert(LegSecuritySubType_62.getString());
        FIX::LegSecurityType LegSecurityType_62("STRING_390713673");
        noLegs_0_0_2_1.set(LegSecurityType_62);
        InstrumentLeg_62.insert(LegSecurityType_62.getString());
        FIX::LegSide LegSide_62('1');
        noLegs_0_0_2_1.set(LegSide_62);
        InstrumentLeg_62.insert(LegSide_62.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_62("STRING_1852642349");
        noLegs_0_0_2_1.set(LegStateOrProvinceOfIssue_62);
        InstrumentLeg_62.insert(LegStateOrProvinceOfIssue_62.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_62("CAN");
        noLegs_0_0_2_1.set(LegStrikeCurrency_62);
        InstrumentLeg_62.insert(LegStrikeCurrency_62.getString());
        FIX::LegStrikePrice LegStrikePrice_62;
        LegStrikePrice_62.setString("17745379");
        noLegs_0_0_2_1.set(LegStrikePrice_62);
        InstrumentLeg_62.insert(LegStrikePrice_62.getString());
        FIX::LegSymbol LegSymbol_62("STRING_776986586");
        noLegs_0_0_2_1.set(LegSymbol_62);
        InstrumentLeg_62.insert(LegSymbol_62.getString());
        FIX::LegSymbolSfx LegSymbolSfx_62("STRING_1602307910");
        noLegs_0_0_2_1.set(LegSymbolSfx_62);
        InstrumentLeg_62.insert(LegSymbolSfx_62.getString());
        FIX::LegTimeUnit LegTimeUnit_62("STRING_36224211");
        noLegs_0_0_2_1.set(LegTimeUnit_62);
        InstrumentLeg_62.insert(LegTimeUnit_62.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_62("STRING_652638298");
        noLegs_0_0_2_1.set(LegUnitOfMeasure_62);
        InstrumentLeg_62.insert(LegUnitOfMeasure_62.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_62;
        LegUnitOfMeasureQty_62.setString("11590763");
        noLegs_0_0_2_1.set(LegUnitOfMeasureQty_62);
        InstrumentLeg_62.insert(LegUnitOfMeasureQty_62.getString());
        all_values.push_back(InstrumentLeg_62);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_119;
          FIX::LegSecurityAltID LegSecurityAltID_119("STRING_1088816343");
          noLegSecurityAltID_0_0_1_3_0.set(LegSecurityAltID_119);
          LegSecAltIDGrp_NoLegSecurityAltID_119.insert(LegSecurityAltID_119.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_119("STRING_495104724");
          noLegSecurityAltID_0_0_1_3_0.set(LegSecurityAltIDSource_119);
          LegSecAltIDGrp_NoLegSecurityAltID_119.insert(LegSecurityAltIDSource_119.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_119);

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_120;
          FIX::LegSecurityAltID LegSecurityAltID_120("STRING_596253473");
          noLegSecurityAltID_0_0_1_3_1.set(LegSecurityAltID_120);
          LegSecAltIDGrp_NoLegSecurityAltID_120.insert(LegSecurityAltID_120.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_120("STRING_832973597");
          noLegSecurityAltID_0_0_1_3_1.set(LegSecurityAltIDSource_120);
          LegSecAltIDGrp_NoLegSecurityAltID_120.insert(LegSecurityAltIDSource_120.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_120);

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_1_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_121;
          FIX::LegSecurityAltID LegSecurityAltID_121("STRING_2111452046");
          noLegSecurityAltID_0_0_1_3_2.set(LegSecurityAltID_121);
          LegSecAltIDGrp_NoLegSecurityAltID_121.insert(LegSecurityAltID_121.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_121("STRING_1685581905");
          noLegSecurityAltID_0_0_1_3_2.set(LegSecurityAltIDSource_121);
          LegSecAltIDGrp_NoLegSecurityAltID_121.insert(LegSecurityAltIDSource_121.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_121);

          noLegs_0_0_2_1.addGroup(noLegSecurityAltID_0_0_1_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_63;
        FIX::EncodedLegIssuer EncodedLegIssuer_63("DATA_1273237755");
        noLegs_0_0_2_2.set(EncodedLegIssuer_63);
        InstrumentLeg_63.insert(EncodedLegIssuer_63.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_63(596416611);
        noLegs_0_0_2_2.set(EncodedLegIssuerLen_63);
        InstrumentLeg_63.insert(EncodedLegIssuerLen_63.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_63("DATA_1608470459");
        noLegs_0_0_2_2.set(EncodedLegSecurityDesc_63);
        InstrumentLeg_63.insert(EncodedLegSecurityDesc_63.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_63(302958124);
        noLegs_0_0_2_2.set(EncodedLegSecurityDescLen_63);
        InstrumentLeg_63.insert(EncodedLegSecurityDescLen_63.getString());
        FIX::LegCFICode LegCFICode_63("STRING_624144290");
        noLegs_0_0_2_2.set(LegCFICode_63);
        InstrumentLeg_63.insert(LegCFICode_63.getString());
        FIX::LegContractMultiplier LegContractMultiplier_63;
        LegContractMultiplier_63.setString("17160071");
        noLegs_0_0_2_2.set(LegContractMultiplier_63);
        InstrumentLeg_63.insert(LegContractMultiplier_63.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_63(2068113424);
        noLegs_0_0_2_2.set(LegContractMultiplierUnit_63);
        InstrumentLeg_63.insert(LegContractMultiplierUnit_63.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_63("MONTHYEAR_32000983");
        noLegs_0_0_2_2.set(LegContractSettlMonth_63);
        InstrumentLeg_63.insert(LegContractSettlMonth_63.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_63("COUNTRY_1139108");
        noLegs_0_0_2_2.set(LegCountryOfIssue_63);
        InstrumentLeg_63.insert(LegCountryOfIssue_63.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_63("LOCALMKTDATE_1236898895");
        noLegs_0_0_2_2.set(LegCouponPaymentDate_63);
        InstrumentLeg_63.insert(LegCouponPaymentDate_63.getString());
        FIX::LegCouponRate LegCouponRate_63;
        LegCouponRate_63.setString("69.460000");
        noLegs_0_0_2_2.set(LegCouponRate_63);
        InstrumentLeg_63.insert(LegCouponRate_63.getString());
        FIX::LegCreditRating LegCreditRating_63("STRING_765212811");
        noLegs_0_0_2_2.set(LegCreditRating_63);
        InstrumentLeg_63.insert(LegCreditRating_63.getString());
        FIX::LegCurrency LegCurrency_63("CAN");
        noLegs_0_0_2_2.set(LegCurrency_63);
        InstrumentLeg_63.insert(LegCurrency_63.getString());
        FIX::LegDatedDate LegDatedDate_63("LOCALMKTDATE_138469418");
        noLegs_0_0_2_2.set(LegDatedDate_63);
        InstrumentLeg_63.insert(LegDatedDate_63.getString());
        FIX::LegExerciseStyle LegExerciseStyle_63(1397882982);
        noLegs_0_0_2_2.set(LegExerciseStyle_63);
        InstrumentLeg_63.insert(LegExerciseStyle_63.getString());
        FIX::LegFactor LegFactor_63;
        LegFactor_63.setString("11733318");
        noLegs_0_0_2_2.set(LegFactor_63);
        InstrumentLeg_63.insert(LegFactor_63.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_63(1253990654);
        noLegs_0_0_2_2.set(LegFlowScheduleType_63);
        InstrumentLeg_63.insert(LegFlowScheduleType_63.getString());
        FIX::LegInstrRegistry LegInstrRegistry_63("STRING_1024937285");
        noLegs_0_0_2_2.set(LegInstrRegistry_63);
        InstrumentLeg_63.insert(LegInstrRegistry_63.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_63("LOCALMKTDATE_1950318392");
        noLegs_0_0_2_2.set(LegInterestAccrualDate_63);
        InstrumentLeg_63.insert(LegInterestAccrualDate_63.getString());
        FIX::LegIssueDate LegIssueDate_63("LOCALMKTDATE_708814916");
        noLegs_0_0_2_2.set(LegIssueDate_63);
        InstrumentLeg_63.insert(LegIssueDate_63.getString());
        FIX::LegIssuer LegIssuer_63("STRING_1061161497");
        noLegs_0_0_2_2.set(LegIssuer_63);
        InstrumentLeg_63.insert(LegIssuer_63.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_63("STRING_455473042");
        noLegs_0_0_2_2.set(LegLocaleOfIssue_63);
        InstrumentLeg_63.insert(LegLocaleOfIssue_63.getString());
        FIX::LegMaturityDate LegMaturityDate_63("LOCALMKTDATE_1867891252");
        noLegs_0_0_2_2.set(LegMaturityDate_63);
        InstrumentLeg_63.insert(LegMaturityDate_63.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_63("MONTHYEAR_1188255827");
        noLegs_0_0_2_2.set(LegMaturityMonthYear_63);
        InstrumentLeg_63.insert(LegMaturityMonthYear_63.getString());
        FIX::LegMaturityTime LegMaturityTime_63("TZTIMEONLY_1544289386");
        noLegs_0_0_2_2.set(LegMaturityTime_63);
        InstrumentLeg_63.insert(LegMaturityTime_63.getString());
        FIX::LegOptAttribute LegOptAttribute_63('2');
        noLegs_0_0_2_2.set(LegOptAttribute_63);
        InstrumentLeg_63.insert(LegOptAttribute_63.getString());
        FIX::LegOptionRatio LegOptionRatio_63;
        LegOptionRatio_63.setString("17845093");
        noLegs_0_0_2_2.set(LegOptionRatio_63);
        InstrumentLeg_63.insert(LegOptionRatio_63.getString());
        FIX::LegPool LegPool_63("STRING_229779335");
        noLegs_0_0_2_2.set(LegPool_63);
        InstrumentLeg_63.insert(LegPool_63.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_63("STRING_179480727");
        noLegs_0_0_2_2.set(LegPriceUnitOfMeasure_63);
        InstrumentLeg_63.insert(LegPriceUnitOfMeasure_63.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_63;
        LegPriceUnitOfMeasureQty_63.setString("13226075");
        noLegs_0_0_2_2.set(LegPriceUnitOfMeasureQty_63);
        InstrumentLeg_63.insert(LegPriceUnitOfMeasureQty_63.getString());
        FIX::LegProduct LegProduct_63(1503017090);
        noLegs_0_0_2_2.set(LegProduct_63);
        InstrumentLeg_63.insert(LegProduct_63.getString());
        FIX::LegPutOrCall LegPutOrCall_63(775897338);
        noLegs_0_0_2_2.set(LegPutOrCall_63);
        InstrumentLeg_63.insert(LegPutOrCall_63.getString());
        FIX::LegRatioQty LegRatioQty_63;
        LegRatioQty_63.setString("7835943");
        noLegs_0_0_2_2.set(LegRatioQty_63);
        InstrumentLeg_63.insert(LegRatioQty_63.getString());
        FIX::LegRedemptionDate LegRedemptionDate_63("LOCALMKTDATE_1805975214");
        noLegs_0_0_2_2.set(LegRedemptionDate_63);
        InstrumentLeg_63.insert(LegRedemptionDate_63.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_63("STRING_1400041628");
        noLegs_0_0_2_2.set(LegRepoCollateralSecurityType_63);
        InstrumentLeg_63.insert(LegRepoCollateralSecurityType_63.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_63;
        LegRepurchaseRate_63.setString("79.120000");
        noLegs_0_0_2_2.set(LegRepurchaseRate_63);
        InstrumentLeg_63.insert(LegRepurchaseRate_63.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_63(1726604990);
        noLegs_0_0_2_2.set(LegRepurchaseTerm_63);
        InstrumentLeg_63.insert(LegRepurchaseTerm_63.getString());
        FIX::LegSecurityDesc LegSecurityDesc_63("STRING_1432042611");
        noLegs_0_0_2_2.set(LegSecurityDesc_63);
        InstrumentLeg_63.insert(LegSecurityDesc_63.getString());
        FIX::LegSecurityExchange LegSecurityExchange_63("EXCHANGE_353257020");
        noLegs_0_0_2_2.set(LegSecurityExchange_63);
        InstrumentLeg_63.insert(LegSecurityExchange_63.getString());
        FIX::LegSecurityID LegSecurityID_63("STRING_816020237");
        noLegs_0_0_2_2.set(LegSecurityID_63);
        InstrumentLeg_63.insert(LegSecurityID_63.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_63("STRING_767385909");
        noLegs_0_0_2_2.set(LegSecurityIDSource_63);
        InstrumentLeg_63.insert(LegSecurityIDSource_63.getString());
        FIX::LegSecuritySubType LegSecuritySubType_63("STRING_1118469831");
        noLegs_0_0_2_2.set(LegSecuritySubType_63);
        InstrumentLeg_63.insert(LegSecuritySubType_63.getString());
        FIX::LegSecurityType LegSecurityType_63("STRING_361260870");
        noLegs_0_0_2_2.set(LegSecurityType_63);
        InstrumentLeg_63.insert(LegSecurityType_63.getString());
        FIX::LegSide LegSide_63('4');
        noLegs_0_0_2_2.set(LegSide_63);
        InstrumentLeg_63.insert(LegSide_63.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_63("STRING_1256939250");
        noLegs_0_0_2_2.set(LegStateOrProvinceOfIssue_63);
        InstrumentLeg_63.insert(LegStateOrProvinceOfIssue_63.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_63("USD");
        noLegs_0_0_2_2.set(LegStrikeCurrency_63);
        InstrumentLeg_63.insert(LegStrikeCurrency_63.getString());
        FIX::LegStrikePrice LegStrikePrice_63;
        LegStrikePrice_63.setString("3634462");
        noLegs_0_0_2_2.set(LegStrikePrice_63);
        InstrumentLeg_63.insert(LegStrikePrice_63.getString());
        FIX::LegSymbol LegSymbol_63("STRING_636597490");
        noLegs_0_0_2_2.set(LegSymbol_63);
        InstrumentLeg_63.insert(LegSymbol_63.getString());
        FIX::LegSymbolSfx LegSymbolSfx_63("STRING_1469609431");
        noLegs_0_0_2_2.set(LegSymbolSfx_63);
        InstrumentLeg_63.insert(LegSymbolSfx_63.getString());
        FIX::LegTimeUnit LegTimeUnit_63("STRING_1072261172");
        noLegs_0_0_2_2.set(LegTimeUnit_63);
        InstrumentLeg_63.insert(LegTimeUnit_63.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_63("STRING_1697758987");
        noLegs_0_0_2_2.set(LegUnitOfMeasure_63);
        InstrumentLeg_63.insert(LegUnitOfMeasure_63.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_63;
        LegUnitOfMeasureQty_63.setString("19250824");
        noLegs_0_0_2_2.set(LegUnitOfMeasureQty_63);
        InstrumentLeg_63.insert(LegUnitOfMeasureQty_63.getString());
        all_values.push_back(InstrumentLeg_63);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_122;
          FIX::LegSecurityAltID LegSecurityAltID_122("STRING_738531167");
          noLegSecurityAltID_0_0_2_3_0.set(LegSecurityAltID_122);
          LegSecAltIDGrp_NoLegSecurityAltID_122.insert(LegSecurityAltID_122.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_122("STRING_1321888211");
          noLegSecurityAltID_0_0_2_3_0.set(LegSecurityAltIDSource_122);
          LegSecAltIDGrp_NoLegSecurityAltID_122.insert(LegSecurityAltIDSource_122.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_122);

          noLegs_0_0_2_2.addGroup(noLegSecurityAltID_0_0_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_123;
          FIX::LegSecurityAltID LegSecurityAltID_123("STRING_1008181106");
          noLegSecurityAltID_0_0_2_3_1.set(LegSecurityAltID_123);
          LegSecAltIDGrp_NoLegSecurityAltID_123.insert(LegSecurityAltID_123.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_123("STRING_375556820");
          noLegSecurityAltID_0_0_2_3_1.set(LegSecurityAltIDSource_123);
          LegSecAltIDGrp_NoLegSecurityAltID_123.insert(LegSecurityAltIDSource_123.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_123);

          noLegs_0_0_2_2.addGroup(noLegSecurityAltID_0_0_2_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_124;
          FIX::LegSecurityAltID LegSecurityAltID_124("STRING_1551667546");
          noLegSecurityAltID_0_0_2_3_2.set(LegSecurityAltID_124);
          LegSecAltIDGrp_NoLegSecurityAltID_124.insert(LegSecurityAltID_124.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_124("STRING_1187661833");
          noLegSecurityAltID_0_0_2_3_2.set(LegSecurityAltIDSource_124);
          LegSecAltIDGrp_NoLegSecurityAltID_124.insert(LegSecurityAltIDSource_124.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_124);

          noLegs_0_0_2_2.addGroup(noLegSecurityAltID_0_0_2_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_2);
      }
      // Instrument
      multiset<string> Instrument_34;
      FIX::AttachmentPoint AttachmentPoint_34;
      AttachmentPoint_34.setString("43.780000");
      noQuoteEntries_0_1_0.set(AttachmentPoint_34);
      Instrument_34.insert(AttachmentPoint_34.getString());
      FIX::CFICode CFICode_34("STRING_907200989");
      noQuoteEntries_0_1_0.set(CFICode_34);
      Instrument_34.insert(CFICode_34.getString());
      FIX::CPProgram CPProgram_34(99);
      noQuoteEntries_0_1_0.set(CPProgram_34);
      Instrument_34.insert(CPProgram_34.getString());
      FIX::CPRegType CPRegType_34("STRING_334275099");
      noQuoteEntries_0_1_0.set(CPRegType_34);
      Instrument_34.insert(CPRegType_34.getString());
      FIX::CapPrice CapPrice_34;
      CapPrice_34.setString("5656925");
      noQuoteEntries_0_1_0.set(CapPrice_34);
      Instrument_34.insert(CapPrice_34.getString());
      FIX::ContractMultiplier ContractMultiplier_34;
      ContractMultiplier_34.setString("12161171");
      noQuoteEntries_0_1_0.set(ContractMultiplier_34);
      Instrument_34.insert(ContractMultiplier_34.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_34(1);
      noQuoteEntries_0_1_0.set(ContractMultiplierUnit_34);
      Instrument_34.insert(ContractMultiplierUnit_34.getString());
      FIX::ContractSettlMonth ContractSettlMonth_34("MONTHYEAR_144813898");
      noQuoteEntries_0_1_0.set(ContractSettlMonth_34);
      Instrument_34.insert(ContractSettlMonth_34.getString());
      FIX::CountryOfIssue CountryOfIssue_34("COUNTRY_500676114");
      noQuoteEntries_0_1_0.set(CountryOfIssue_34);
      Instrument_34.insert(CountryOfIssue_34.getString());
      FIX::CouponPaymentDate CouponPaymentDate_34("LOCALMKTDATE_1039650031");
      noQuoteEntries_0_1_0.set(CouponPaymentDate_34);
      Instrument_34.insert(CouponPaymentDate_34.getString());
      FIX::CouponRate CouponRate_34;
      CouponRate_34.setString("41.350000");
      noQuoteEntries_0_1_0.set(CouponRate_34);
      Instrument_34.insert(CouponRate_34.getString());
      FIX::CreditRating CreditRating_34("STRING_1268062023");
      noQuoteEntries_0_1_0.set(CreditRating_34);
      Instrument_34.insert(CreditRating_34.getString());
      FIX::DatedDate DatedDate_34("LOCALMKTDATE_10636215");
      noQuoteEntries_0_1_0.set(DatedDate_34);
      Instrument_34.insert(DatedDate_34.getString());
      FIX::DetachmentPoint DetachmentPoint_34;
      DetachmentPoint_34.setString("50.060000");
      noQuoteEntries_0_1_0.set(DetachmentPoint_34);
      Instrument_34.insert(DetachmentPoint_34.getString());
      FIX::EncodedIssuer EncodedIssuer_34("DATA_1761504903");
      noQuoteEntries_0_1_0.set(EncodedIssuer_34);
      Instrument_34.insert(EncodedIssuer_34.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_34(1267575465);
      noQuoteEntries_0_1_0.set(EncodedIssuerLen_34);
      Instrument_34.insert(EncodedIssuerLen_34.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_34("DATA_933755211");
      noQuoteEntries_0_1_0.set(EncodedSecurityDesc_34);
      Instrument_34.insert(EncodedSecurityDesc_34.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_34(1280795941);
      noQuoteEntries_0_1_0.set(EncodedSecurityDescLen_34);
      Instrument_34.insert(EncodedSecurityDescLen_34.getString());
      FIX::ExerciseStyle ExerciseStyle_34(0);
      noQuoteEntries_0_1_0.set(ExerciseStyle_34);
      Instrument_34.insert(ExerciseStyle_34.getString());
      FIX::Factor Factor_34;
      Factor_34.setString("15703527");
      noQuoteEntries_0_1_0.set(Factor_34);
      Instrument_34.insert(Factor_34.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_34(true);
      noQuoteEntries_0_1_0.set(FlexProductEligibilityIndicator_34);
      Instrument_34.insert(FlexProductEligibilityIndicator_34.getString());
      FIX::FlexibleIndicator FlexibleIndicator_34(false);
      noQuoteEntries_0_1_0.set(FlexibleIndicator_34);
      Instrument_34.insert(FlexibleIndicator_34.getString());
      FIX::FloorPrice FloorPrice_34;
      FloorPrice_34.setString("11206280");
      noQuoteEntries_0_1_0.set(FloorPrice_34);
      Instrument_34.insert(FloorPrice_34.getString());
      FIX::FlowScheduleType FlowScheduleType_34(0);
      noQuoteEntries_0_1_0.set(FlowScheduleType_34);
      Instrument_34.insert(FlowScheduleType_34.getString());
      FIX::InstrRegistry InstrRegistry_34("STRING_1348468022");
      noQuoteEntries_0_1_0.set(InstrRegistry_34);
      Instrument_34.insert(InstrRegistry_34.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_34('1');
      noQuoteEntries_0_1_0.set(InstrmtAssignmentMethod_34);
      Instrument_34.insert(InstrmtAssignmentMethod_34.getString());
      FIX::InterestAccrualDate InterestAccrualDate_34("LOCALMKTDATE_1702408761");
      noQuoteEntries_0_1_0.set(InterestAccrualDate_34);
      Instrument_34.insert(InterestAccrualDate_34.getString());
      FIX::IssueDate IssueDate_34("LOCALMKTDATE_209165480");
      noQuoteEntries_0_1_0.set(IssueDate_34);
      Instrument_34.insert(IssueDate_34.getString());
      FIX::Issuer Issuer_34("STRING_87232380");
      noQuoteEntries_0_1_0.set(Issuer_34);
      Instrument_34.insert(Issuer_34.getString());
      FIX::ListMethod ListMethod_34(0);
      noQuoteEntries_0_1_0.set(ListMethod_34);
      Instrument_34.insert(ListMethod_34.getString());
      FIX::LocaleOfIssue LocaleOfIssue_34("STRING_1396827313");
      noQuoteEntries_0_1_0.set(LocaleOfIssue_34);
      Instrument_34.insert(LocaleOfIssue_34.getString());
      FIX::MaturityDate MaturityDate_34("LOCALMKTDATE_1785396758");
      noQuoteEntries_0_1_0.set(MaturityDate_34);
      Instrument_34.insert(MaturityDate_34.getString());
      FIX::MaturityMonthYear MaturityMonthYear_34("MONTHYEAR_2013793649");
      noQuoteEntries_0_1_0.set(MaturityMonthYear_34);
      Instrument_34.insert(MaturityMonthYear_34.getString());
      FIX::MaturityTime MaturityTime_34("TZTIMEONLY_1212902836");
      noQuoteEntries_0_1_0.set(MaturityTime_34);
      Instrument_34.insert(MaturityTime_34.getString());
      FIX::MinPriceIncrement MinPriceIncrement_34;
      MinPriceIncrement_34.setString("21196718");
      noQuoteEntries_0_1_0.set(MinPriceIncrement_34);
      Instrument_34.insert(MinPriceIncrement_34.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_34;
      MinPriceIncrementAmount_34.setString("4320025");
      noQuoteEntries_0_1_0.set(MinPriceIncrementAmount_34);
      Instrument_34.insert(MinPriceIncrementAmount_34.getString());
      FIX::NTPositionLimit NTPositionLimit_34(281536339);
      noQuoteEntries_0_1_0.set(NTPositionLimit_34);
      Instrument_34.insert(NTPositionLimit_34.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_34;
      NotionalPercentageOutstanding_34.setString("12.200000");
      noQuoteEntries_0_1_0.set(NotionalPercentageOutstanding_34);
      Instrument_34.insert(NotionalPercentageOutstanding_34.getString());
      FIX::OptAttribute OptAttribute_34('5');
      noQuoteEntries_0_1_0.set(OptAttribute_34);
      Instrument_34.insert(OptAttribute_34.getString());
      FIX::OptPayoutAmount OptPayoutAmount_34;
      OptPayoutAmount_34.setString("7822124");
      noQuoteEntries_0_1_0.set(OptPayoutAmount_34);
      Instrument_34.insert(OptPayoutAmount_34.getString());
      FIX::OptPayoutType OptPayoutType_34(3);
      noQuoteEntries_0_1_0.set(OptPayoutType_34);
      Instrument_34.insert(OptPayoutType_34.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_34;
      OriginalNotionalPercentageOutstanding_34.setString("5.900000");
      noQuoteEntries_0_1_0.set(OriginalNotionalPercentageOutstanding_34);
      Instrument_34.insert(OriginalNotionalPercentageOutstanding_34.getString());
      FIX::Pool Pool_34("STRING_2050274476");
      noQuoteEntries_0_1_0.set(Pool_34);
      Instrument_34.insert(Pool_34.getString());
      FIX::PositionLimit PositionLimit_34(1708867466);
      noQuoteEntries_0_1_0.set(PositionLimit_34);
      Instrument_34.insert(PositionLimit_34.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_34("STRING_STD");
      noQuoteEntries_0_1_0.set(PriceQuoteMethod_34);
      Instrument_34.insert(PriceQuoteMethod_34.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_34("STRING_1664295731");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasure_34);
      Instrument_34.insert(PriceUnitOfMeasure_34.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_34;
      PriceUnitOfMeasureQty_34.setString("8289592");
      noQuoteEntries_0_1_0.set(PriceUnitOfMeasureQty_34);
      Instrument_34.insert(PriceUnitOfMeasureQty_34.getString());
      FIX::Product Product_36(8);
      noQuoteEntries_0_1_0.set(Product_36);
      Instrument_34.insert(Product_36.getString());
      FIX::ProductComplex ProductComplex_34("STRING_797608025");
      noQuoteEntries_0_1_0.set(ProductComplex_34);
      Instrument_34.insert(ProductComplex_34.getString());
      FIX::PutOrCall PutOrCall_34(0);
      noQuoteEntries_0_1_0.set(PutOrCall_34);
      Instrument_34.insert(PutOrCall_34.getString());
      FIX::RedemptionDate RedemptionDate_34("LOCALMKTDATE_1068886212");
      noQuoteEntries_0_1_0.set(RedemptionDate_34);
      Instrument_34.insert(RedemptionDate_34.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_34("STRING_1400529749");
      noQuoteEntries_0_1_0.set(RepoCollateralSecurityType_34);
      Instrument_34.insert(RepoCollateralSecurityType_34.getString());
      FIX::RepurchaseRate RepurchaseRate_34;
      RepurchaseRate_34.setString("66.020000");
      noQuoteEntries_0_1_0.set(RepurchaseRate_34);
      Instrument_34.insert(RepurchaseRate_34.getString());
      FIX::RepurchaseTerm RepurchaseTerm_34(42030605);
      noQuoteEntries_0_1_0.set(RepurchaseTerm_34);
      Instrument_34.insert(RepurchaseTerm_34.getString());
      FIX::RestructuringType RestructuringType_34("STRING_XR");
      noQuoteEntries_0_1_0.set(RestructuringType_34);
      Instrument_34.insert(RestructuringType_34.getString());
      FIX::SecurityDesc SecurityDesc_34("STRING_69280976");
      noQuoteEntries_0_1_0.set(SecurityDesc_34);
      Instrument_34.insert(SecurityDesc_34.getString());
      FIX::SecurityExchange SecurityExchange_34("EXCHANGE_1901189813");
      noQuoteEntries_0_1_0.set(SecurityExchange_34);
      Instrument_34.insert(SecurityExchange_34.getString());
      FIX::SecurityGroup SecurityGroup_34("STRING_1335975413");
      noQuoteEntries_0_1_0.set(SecurityGroup_34);
      Instrument_34.insert(SecurityGroup_34.getString());
      FIX::SecurityID SecurityID_34("STRING_278446457");
      noQuoteEntries_0_1_0.set(SecurityID_34);
      Instrument_34.insert(SecurityID_34.getString());
      FIX::SecurityIDSource SecurityIDSource_34("STRING_M");
      noQuoteEntries_0_1_0.set(SecurityIDSource_34);
      Instrument_34.insert(SecurityIDSource_34.getString());
      FIX::SecurityStatus SecurityStatus_34("STRING_2");
      noQuoteEntries_0_1_0.set(SecurityStatus_34);
      Instrument_34.insert(SecurityStatus_34.getString());
      FIX::SecuritySubType SecuritySubType_35("STRING_1675273770");
      noQuoteEntries_0_1_0.set(SecuritySubType_35);
      Instrument_34.insert(SecuritySubType_35.getString());
      FIX::SecurityType SecurityType_36("STRING_EUCD");
      noQuoteEntries_0_1_0.set(SecurityType_36);
      Instrument_34.insert(SecurityType_36.getString());
      FIX::Seniority Seniority_34("STRING_SD");
      noQuoteEntries_0_1_0.set(Seniority_34);
      Instrument_34.insert(Seniority_34.getString());
      FIX::SettlMethod SettlMethod_34('P');
      noQuoteEntries_0_1_0.set(SettlMethod_34);
      Instrument_34.insert(SettlMethod_34.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_34("STRING_1598523512");
      noQuoteEntries_0_1_0.set(SettleOnOpenFlag_34);
      Instrument_34.insert(SettleOnOpenFlag_34.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_34("STRING_593396982");
      noQuoteEntries_0_1_0.set(StateOrProvinceOfIssue_34);
      Instrument_34.insert(StateOrProvinceOfIssue_34.getString());
      FIX::StrikeCurrency StrikeCurrency_34("JPY");
      noQuoteEntries_0_1_0.set(StrikeCurrency_34);
      Instrument_34.insert(StrikeCurrency_34.getString());
      FIX::StrikeMultiplier StrikeMultiplier_34;
      StrikeMultiplier_34.setString("11702134");
      noQuoteEntries_0_1_0.set(StrikeMultiplier_34);
      Instrument_34.insert(StrikeMultiplier_34.getString());
      FIX::StrikePrice StrikePrice_34;
      StrikePrice_34.setString("18044417");
      noQuoteEntries_0_1_0.set(StrikePrice_34);
      Instrument_34.insert(StrikePrice_34.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_34(2);
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryMethod_34);
      Instrument_34.insert(StrikePriceBoundaryMethod_34.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_34;
      StrikePriceBoundaryPrecision_34.setString("3.790000");
      noQuoteEntries_0_1_0.set(StrikePriceBoundaryPrecision_34);
      Instrument_34.insert(StrikePriceBoundaryPrecision_34.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_34(1);
      noQuoteEntries_0_1_0.set(StrikePriceDeterminationMethod_34);
      Instrument_34.insert(StrikePriceDeterminationMethod_34.getString());
      FIX::StrikeValue StrikeValue_34;
      StrikeValue_34.setString("13692361");
      noQuoteEntries_0_1_0.set(StrikeValue_34);
      Instrument_34.insert(StrikeValue_34.getString());
      FIX::Symbol Symbol_34("STRING_1272642327");
      noQuoteEntries_0_1_0.set(Symbol_34);
      Instrument_34.insert(Symbol_34.getString());
      FIX::SymbolSfx SymbolSfx_34("STRING_CD");
      noQuoteEntries_0_1_0.set(SymbolSfx_34);
      Instrument_34.insert(SymbolSfx_34.getString());
      FIX::TimeUnit TimeUnit_34("STRING_D");
      noQuoteEntries_0_1_0.set(TimeUnit_34);
      Instrument_34.insert(TimeUnit_34.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_34(3);
      noQuoteEntries_0_1_0.set(UnderlyingPriceDeterminationMethod_34);
      Instrument_34.insert(UnderlyingPriceDeterminationMethod_34.getString());
      FIX::UnitOfMeasure UnitOfMeasure_34("STRING_Bbl");
      noQuoteEntries_0_1_0.set(UnitOfMeasure_34);
      Instrument_34.insert(UnitOfMeasure_34.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_34;
      UnitOfMeasureQty_34.setString("3632091");
      noQuoteEntries_0_1_0.set(UnitOfMeasureQty_34);
      Instrument_34.insert(UnitOfMeasureQty_34.getString());
      FIX::ValuationMethod ValuationMethod_34("STRING_EQTY");
      noQuoteEntries_0_1_0.set(ValuationMethod_34);
      Instrument_34.insert(ValuationMethod_34.getString());
      all_values.push_back(Instrument_34);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_63;
        FIX::ComplexEventCondition ComplexEventCondition_63(1);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_63);
        ComplexEvents_NoComplexEvents_63.insert(ComplexEventCondition_63.getString());
        FIX::ComplexEventPrice ComplexEventPrice_63;
        ComplexEventPrice_63.setString("18820926");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_63);
        ComplexEvents_NoComplexEvents_63.insert(ComplexEventPrice_63.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_63(3);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_63);
        ComplexEvents_NoComplexEvents_63.insert(ComplexEventPriceBoundaryMethod_63.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_63;
        ComplexEventPriceBoundaryPrecision_63.setString("67.250000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_63);
        ComplexEvents_NoComplexEvents_63.insert(ComplexEventPriceBoundaryPrecision_63.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_63(3);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_63);
        ComplexEvents_NoComplexEvents_63.insert(ComplexEventPriceTimeType_63.getString());
        FIX::ComplexEventType ComplexEventType_63(8);
        noComplexEvents_0_0_2_0.set(ComplexEventType_63);
        ComplexEvents_NoComplexEvents_63.insert(ComplexEventType_63.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_63;
        ComplexOptPayoutAmount_63.setString("15792331");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_63);
        ComplexEvents_NoComplexEvents_63.insert(ComplexOptPayoutAmount_63.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_63);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_123;
          FIX::ComplexEventEndDate ComplexEventEndDate_123(FIX::UTCTIMESTAMP(0, 42, 58, 15, 8, 2010));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_123);
          ComplexEventDates_NoComplexEventDates_123.insert(ComplexEventEndDate_123.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_123(FIX::UTCTIMESTAMP(11, 49, 58, 7, 1, 2006));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_123);
          ComplexEventDates_NoComplexEventDates_123.insert(ComplexEventStartDate_123.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_123);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_250;
            FIX::ComplexEventEndTime ComplexEventEndTime_250(FIX::UTCTIMEONLY(22, 24, 45));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_250);
            ComplexEventTimes_NoComplexEventTimes_250.insert(ComplexEventEndTime_250.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_250(FIX::UTCTIMEONLY(22, 28, 38));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_250);
            ComplexEventTimes_NoComplexEventTimes_250.insert(ComplexEventStartTime_250.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_250);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_64;
        FIX::ComplexEventCondition ComplexEventCondition_64(2);
        noComplexEvents_0_0_2_1.set(ComplexEventCondition_64);
        ComplexEvents_NoComplexEvents_64.insert(ComplexEventCondition_64.getString());
        FIX::ComplexEventPrice ComplexEventPrice_64;
        ComplexEventPrice_64.setString("532651");
        noComplexEvents_0_0_2_1.set(ComplexEventPrice_64);
        ComplexEvents_NoComplexEvents_64.insert(ComplexEventPrice_64.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_64(1);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryMethod_64);
        ComplexEvents_NoComplexEvents_64.insert(ComplexEventPriceBoundaryMethod_64.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_64;
        ComplexEventPriceBoundaryPrecision_64.setString("9.280000");
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryPrecision_64);
        ComplexEvents_NoComplexEvents_64.insert(ComplexEventPriceBoundaryPrecision_64.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_64(1);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceTimeType_64);
        ComplexEvents_NoComplexEvents_64.insert(ComplexEventPriceTimeType_64.getString());
        FIX::ComplexEventType ComplexEventType_64(5);
        noComplexEvents_0_0_2_1.set(ComplexEventType_64);
        ComplexEvents_NoComplexEvents_64.insert(ComplexEventType_64.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_64;
        ComplexOptPayoutAmount_64.setString("17763341");
        noComplexEvents_0_0_2_1.set(ComplexOptPayoutAmount_64);
        ComplexEvents_NoComplexEvents_64.insert(ComplexOptPayoutAmount_64.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_64);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_124;
          FIX::ComplexEventEndDate ComplexEventEndDate_124(FIX::UTCTIMESTAMP(22, 59, 57, 26, 11, 2005));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventEndDate_124);
          ComplexEventDates_NoComplexEventDates_124.insert(ComplexEventEndDate_124.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_124(FIX::UTCTIMESTAMP(21, 19, 34, 21, 8, 2008));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventStartDate_124);
          ComplexEventDates_NoComplexEventDates_124.insert(ComplexEventStartDate_124.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_124);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_251;
            FIX::ComplexEventEndTime ComplexEventEndTime_251(FIX::UTCTIMEONLY(23, 39, 52));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventEndTime_251);
            ComplexEventTimes_NoComplexEventTimes_251.insert(ComplexEventEndTime_251.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_251(FIX::UTCTIMEONLY(17, 20, 44));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventStartTime_251);
            ComplexEventTimes_NoComplexEventTimes_251.insert(ComplexEventStartTime_251.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_251);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_125;
          FIX::ComplexEventEndDate ComplexEventEndDate_125(FIX::UTCTIMESTAMP(12, 36, 52, 2, 8, 2014));
          noComplexEventDates_0_0_1_3_1.set(ComplexEventEndDate_125);
          ComplexEventDates_NoComplexEventDates_125.insert(ComplexEventEndDate_125.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_125(FIX::UTCTIMESTAMP(10, 1, 33, 11, 8, 2007));
          noComplexEventDates_0_0_1_3_1.set(ComplexEventStartDate_125);
          ComplexEventDates_NoComplexEventDates_125.insert(ComplexEventStartDate_125.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_125);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_252;
            FIX::ComplexEventEndTime ComplexEventEndTime_252(FIX::UTCTIMEONLY(17, 4, 37));
            noComplexEventTimes_0_0_1_1_4_0.set(ComplexEventEndTime_252);
            ComplexEventTimes_NoComplexEventTimes_252.insert(ComplexEventEndTime_252.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_252(FIX::UTCTIMEONLY(3, 21, 17));
            noComplexEventTimes_0_0_1_1_4_0.set(ComplexEventStartTime_252);
            ComplexEventTimes_NoComplexEventTimes_252.insert(ComplexEventStartTime_252.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_252);

            noComplexEventDates_0_0_1_3_1.addGroup(noComplexEventTimes_0_0_1_1_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_65;
        FIX::ComplexEventCondition ComplexEventCondition_65(1);
        noComplexEvents_0_0_2_2.set(ComplexEventCondition_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexEventCondition_65.getString());
        FIX::ComplexEventPrice ComplexEventPrice_65;
        ComplexEventPrice_65.setString("19990299");
        noComplexEvents_0_0_2_2.set(ComplexEventPrice_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexEventPrice_65.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_65(4);
        noComplexEvents_0_0_2_2.set(ComplexEventPriceBoundaryMethod_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexEventPriceBoundaryMethod_65.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_65;
        ComplexEventPriceBoundaryPrecision_65.setString("61.430000");
        noComplexEvents_0_0_2_2.set(ComplexEventPriceBoundaryPrecision_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexEventPriceBoundaryPrecision_65.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_65(2);
        noComplexEvents_0_0_2_2.set(ComplexEventPriceTimeType_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexEventPriceTimeType_65.getString());
        FIX::ComplexEventType ComplexEventType_65(7);
        noComplexEvents_0_0_2_2.set(ComplexEventType_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexEventType_65.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_65;
        ComplexOptPayoutAmount_65.setString("20180318");
        noComplexEvents_0_0_2_2.set(ComplexOptPayoutAmount_65);
        ComplexEvents_NoComplexEvents_65.insert(ComplexOptPayoutAmount_65.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_65);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_126;
          FIX::ComplexEventEndDate ComplexEventEndDate_126(FIX::UTCTIMESTAMP(16, 44, 38, 22, 8, 2003));
          noComplexEventDates_0_0_2_3_0.set(ComplexEventEndDate_126);
          ComplexEventDates_NoComplexEventDates_126.insert(ComplexEventEndDate_126.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_126(FIX::UTCTIMESTAMP(22, 46, 26, 9, 10, 2013));
          noComplexEventDates_0_0_2_3_0.set(ComplexEventStartDate_126);
          ComplexEventDates_NoComplexEventDates_126.insert(ComplexEventStartDate_126.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_126);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_253;
            FIX::ComplexEventEndTime ComplexEventEndTime_253(FIX::UTCTIMEONLY(22, 50, 9));
            noComplexEventTimes_0_0_2_0_4_0.set(ComplexEventEndTime_253);
            ComplexEventTimes_NoComplexEventTimes_253.insert(ComplexEventEndTime_253.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_253(FIX::UTCTIMEONLY(6, 22, 33));
            noComplexEventTimes_0_0_2_0_4_0.set(ComplexEventStartTime_253);
            ComplexEventTimes_NoComplexEventTimes_253.insert(ComplexEventStartTime_253.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_253);

            noComplexEventDates_0_0_2_3_0.addGroup(noComplexEventTimes_0_0_2_0_4_0);
          }
          noComplexEvents_0_0_2_2.addGroup(noComplexEventDates_0_0_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_127;
          FIX::ComplexEventEndDate ComplexEventEndDate_127(FIX::UTCTIMESTAMP(11, 21, 51, 10, 8, 2007));
          noComplexEventDates_0_0_2_3_1.set(ComplexEventEndDate_127);
          ComplexEventDates_NoComplexEventDates_127.insert(ComplexEventEndDate_127.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_127(FIX::UTCTIMESTAMP(21, 59, 53, 7, 6, 2001));
          noComplexEventDates_0_0_2_3_1.set(ComplexEventStartDate_127);
          ComplexEventDates_NoComplexEventDates_127.insert(ComplexEventStartDate_127.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_127);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_254;
            FIX::ComplexEventEndTime ComplexEventEndTime_254(FIX::UTCTIMEONLY(23, 14, 27));
            noComplexEventTimes_0_0_2_1_4_0.set(ComplexEventEndTime_254);
            ComplexEventTimes_NoComplexEventTimes_254.insert(ComplexEventEndTime_254.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_254(FIX::UTCTIMEONLY(23, 17, 47));
            noComplexEventTimes_0_0_2_1_4_0.set(ComplexEventStartTime_254);
            ComplexEventTimes_NoComplexEventTimes_254.insert(ComplexEventStartTime_254.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_254);

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
        multiset<string> EvntGrp_NoEvents_66;
        FIX::EventDate EventDate_66("LOCALMKTDATE_894002859");
        noEvents_0_0_2_0.set(EventDate_66);
        EvntGrp_NoEvents_66.insert(EventDate_66.getString());
        FIX::EventPx EventPx_66;
        EventPx_66.setString("13779723");
        noEvents_0_0_2_0.set(EventPx_66);
        EvntGrp_NoEvents_66.insert(EventPx_66.getString());
        FIX::EventText EventText_66("STRING_154351680");
        noEvents_0_0_2_0.set(EventText_66);
        EvntGrp_NoEvents_66.insert(EventText_66.getString());
        FIX::EventTime EventTime_66(FIX::UTCTIMESTAMP(23, 23, 37, 12, 11, 2003));
        noEvents_0_0_2_0.set(EventTime_66);
        EvntGrp_NoEvents_66.insert(EventTime_66.getString());
        FIX::EventType EventType_66(4);
        noEvents_0_0_2_0.set(EventType_66);
        EvntGrp_NoEvents_66.insert(EventType_66.getString());
        all_values.push_back(EvntGrp_NoEvents_66);

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_67;
        FIX::EventDate EventDate_67("LOCALMKTDATE_2122095560");
        noEvents_0_0_2_1.set(EventDate_67);
        EvntGrp_NoEvents_67.insert(EventDate_67.getString());
        FIX::EventPx EventPx_67;
        EventPx_67.setString("5196286");
        noEvents_0_0_2_1.set(EventPx_67);
        EvntGrp_NoEvents_67.insert(EventPx_67.getString());
        FIX::EventText EventText_67("STRING_405158410");
        noEvents_0_0_2_1.set(EventText_67);
        EvntGrp_NoEvents_67.insert(EventText_67.getString());
        FIX::EventTime EventTime_67(FIX::UTCTIMESTAMP(11, 9, 23, 22, 7, 2004));
        noEvents_0_0_2_1.set(EventTime_67);
        EvntGrp_NoEvents_67.insert(EventTime_67.getString());
        FIX::EventType EventType_67(8);
        noEvents_0_0_2_1.set(EventType_67);
        EvntGrp_NoEvents_67.insert(EventType_67.getString());
        all_values.push_back(EvntGrp_NoEvents_67);

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_68;
        FIX::EventDate EventDate_68("LOCALMKTDATE_1854583768");
        noEvents_0_0_2_2.set(EventDate_68);
        EvntGrp_NoEvents_68.insert(EventDate_68.getString());
        FIX::EventPx EventPx_68;
        EventPx_68.setString("6181352");
        noEvents_0_0_2_2.set(EventPx_68);
        EvntGrp_NoEvents_68.insert(EventPx_68.getString());
        FIX::EventText EventText_68("STRING_585190161");
        noEvents_0_0_2_2.set(EventText_68);
        EvntGrp_NoEvents_68.insert(EventText_68.getString());
        FIX::EventTime EventTime_68(FIX::UTCTIMESTAMP(19, 57, 4, 10, 1, 2008));
        noEvents_0_0_2_2.set(EventTime_68);
        EvntGrp_NoEvents_68.insert(EventTime_68.getString());
        FIX::EventType EventType_68(17);
        noEvents_0_0_2_2.set(EventType_68);
        EvntGrp_NoEvents_68.insert(EventType_68.getString());
        all_values.push_back(EvntGrp_NoEvents_68);

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_73;
        FIX::InstrumentPartyID InstrumentPartyID_73("STRING_1512334180");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_73);
        InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyID_73.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_73('7');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_73);
        InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyIDSource_73.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_73(1582314612);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_73);
        InstrumentParties_NoInstrumentParties_73.insert(InstrumentPartyRole_73.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_73);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158;
          FIX::InstrumentPartySubID InstrumentPartySubID_158("STRING_908520963");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_158);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158.insert(InstrumentPartySubID_158.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_158(1460941394);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_158);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158.insert(InstrumentPartySubIDType_158.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_158);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_74;
        FIX::InstrumentPartyID InstrumentPartyID_74("STRING_346168972");
        noInstrumentParties_0_0_2_1.set(InstrumentPartyID_74);
        InstrumentParties_NoInstrumentParties_74.insert(InstrumentPartyID_74.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_74('1');
        noInstrumentParties_0_0_2_1.set(InstrumentPartyIDSource_74);
        InstrumentParties_NoInstrumentParties_74.insert(InstrumentPartyIDSource_74.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_74(1435553306);
        noInstrumentParties_0_0_2_1.set(InstrumentPartyRole_74);
        InstrumentParties_NoInstrumentParties_74.insert(InstrumentPartyRole_74.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_74);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159;
          FIX::InstrumentPartySubID InstrumentPartySubID_159("STRING_1667918837");
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubID_159);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159.insert(InstrumentPartySubID_159.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_159(287866967);
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubIDType_159);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159.insert(InstrumentPartySubIDType_159.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_159);

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_73;
        FIX::SecurityAltID SecurityAltID_73("STRING_565431499");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_73);
        SecAltIDGrp_NoSecurityAltID_73.insert(SecurityAltID_73.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_73("STRING_1714813570");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_73);
        SecAltIDGrp_NoSecurityAltID_73.insert(SecurityAltIDSource_73.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_73);

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_74;
        FIX::SecurityAltID SecurityAltID_74("STRING_1609046076");
        noSecurityAltID_0_0_2_1.set(SecurityAltID_74);
        SecAltIDGrp_NoSecurityAltID_74.insert(SecurityAltID_74.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_74("STRING_951652117");
        noSecurityAltID_0_0_2_1.set(SecurityAltIDSource_74);
        SecAltIDGrp_NoSecurityAltID_74.insert(SecurityAltIDSource_74.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_74);

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_75;
        FIX::SecurityAltID SecurityAltID_75("STRING_465773790");
        noSecurityAltID_0_0_2_2.set(SecurityAltID_75);
        SecAltIDGrp_NoSecurityAltID_75.insert(SecurityAltID_75.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_75("STRING_2002806703");
        noSecurityAltID_0_0_2_2.set(SecurityAltIDSource_75);
        SecAltIDGrp_NoSecurityAltID_75.insert(SecurityAltIDSource_75.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_75);

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_68;
      FIX::SecurityXML SecurityXML_69("XMLDATA_658752237");
      noQuoteEntries_0_1_0.set(SecurityXML_69);
      FIX::SecurityXMLLen SecurityXMLLen_34(1083909049);
      noQuoteEntries_0_1_0.set(SecurityXMLLen_34);
      FIX::SecurityXMLSchema SecurityXMLSchema_34("STRING_440513216");
      noQuoteEntries_0_1_0.set(SecurityXMLSchema_34);
      SecurityXML_68.insert(SecurityXMLSchema_34.getString());
      all_values.push_back(SecurityXML_68);

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_1;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_1;
      FIX::BidForwardPoints BidForwardPoints_1;
      BidForwardPoints_1.setString("7710788");
      noQuoteEntries_0_1_1.set(BidForwardPoints_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidForwardPoints_1.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_1;
      BidForwardPoints2_1.setString("6935068");
      noQuoteEntries_0_1_1.set(BidForwardPoints2_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidForwardPoints2_1.getString());
      FIX::BidPx BidPx_1;
      BidPx_1.setString("536300");
      noQuoteEntries_0_1_1.set(BidPx_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidPx_1.getString());
      FIX::BidSize BidSize_1;
      BidSize_1.setString("15632392");
      noQuoteEntries_0_1_1.set(BidSize_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidSize_1.getString());
      FIX::BidSpotRate BidSpotRate_1;
      BidSpotRate_1.setString("8512463");
      noQuoteEntries_0_1_1.set(BidSpotRate_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidSpotRate_1.getString());
      FIX::BidYield BidYield_1;
      BidYield_1.setString("50.740000");
      noQuoteEntries_0_1_1.set(BidYield_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(BidYield_1.getString());
      FIX::BookingType BookingType_6(1);
      noQuoteEntries_0_1_1.set(BookingType_6);
      QuotEntryGrp_NoQuoteEntries_1.insert(BookingType_6.getString());
      FIX::Currency Currency_30("CAN");
      noQuoteEntries_0_1_1.set(Currency_30);
      QuotEntryGrp_NoQuoteEntries_1.insert(Currency_30.getString());
      FIX::MidPx MidPx_1;
      MidPx_1.setString("4667692");
      noQuoteEntries_0_1_1.set(MidPx_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(MidPx_1.getString());
      FIX::MidYield MidYield_1;
      MidYield_1.setString("69.590000");
      noQuoteEntries_0_1_1.set(MidYield_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(MidYield_1.getString());
      FIX::OfferForwardPoints OfferForwardPoints_1;
      OfferForwardPoints_1.setString("1698227");
      noQuoteEntries_0_1_1.set(OfferForwardPoints_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferForwardPoints_1.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_1;
      OfferForwardPoints2_1.setString("19272169");
      noQuoteEntries_0_1_1.set(OfferForwardPoints2_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferForwardPoints2_1.getString());
      FIX::OfferPx OfferPx_1;
      OfferPx_1.setString("18826479");
      noQuoteEntries_0_1_1.set(OfferPx_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferPx_1.getString());
      FIX::OfferSize OfferSize_1;
      OfferSize_1.setString("16307641");
      noQuoteEntries_0_1_1.set(OfferSize_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferSize_1.getString());
      FIX::OfferSpotRate OfferSpotRate_1;
      OfferSpotRate_1.setString("1259022");
      noQuoteEntries_0_1_1.set(OfferSpotRate_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferSpotRate_1.getString());
      FIX::OfferYield OfferYield_1;
      OfferYield_1.setString("47.010000");
      noQuoteEntries_0_1_1.set(OfferYield_1);
      QuotEntryGrp_NoQuoteEntries_1.insert(OfferYield_1.getString());
      FIX::OrdType OrdType_21('C');
      noQuoteEntries_0_1_1.set(OrdType_21);
      QuotEntryGrp_NoQuoteEntries_1.insert(OrdType_21.getString());
      FIX::OrderCapacity OrderCapacity_8('R');
      noQuoteEntries_0_1_1.set(OrderCapacity_8);
      QuotEntryGrp_NoQuoteEntries_1.insert(OrderCapacity_8.getString());
      FIX::OrderQty2 OrderQty2_2;
      OrderQty2_2.setString("5183598");
      noQuoteEntries_0_1_1.set(OrderQty2_2);
      QuotEntryGrp_NoQuoteEntries_1.insert(OrderQty2_2.getString());
      FIX::OrderRestrictions OrderRestrictions_6("MULTIPLECHARVALUE_2");
      noQuoteEntries_0_1_1.set(OrderRestrictions_6);
      QuotEntryGrp_NoQuoteEntries_1.insert(OrderRestrictions_6.getString());
      FIX::QuoteEntryID QuoteEntryID_3("STRING_894346627");
      noQuoteEntries_0_1_1.set(QuoteEntryID_3);
      QuotEntryGrp_NoQuoteEntries_1.insert(QuoteEntryID_3.getString());
      FIX::SettlDate SettlDate_19("LOCALMKTDATE_1083791390");
      noQuoteEntries_0_1_1.set(SettlDate_19);
      QuotEntryGrp_NoQuoteEntries_1.insert(SettlDate_19.getString());
      FIX::SettlDate2 SettlDate2_2("LOCALMKTDATE_774030709");
      noQuoteEntries_0_1_1.set(SettlDate2_2);
      QuotEntryGrp_NoQuoteEntries_1.insert(SettlDate2_2.getString());
      FIX::TradingSessionID TradingSessionID_24("STRING_6");
      noQuoteEntries_0_1_1.set(TradingSessionID_24);
      QuotEntryGrp_NoQuoteEntries_1.insert(TradingSessionID_24.getString());
      FIX::TradingSessionSubID TradingSessionSubID_24("STRING_7");
      noQuoteEntries_0_1_1.set(TradingSessionSubID_24);
      QuotEntryGrp_NoQuoteEntries_1.insert(TradingSessionSubID_24.getString());
      FIX::TransactTime TransactTime_27(FIX::UTCTIMESTAMP(22, 17, 1, 23, 3, 2014));
      noQuoteEntries_0_1_1.set(TransactTime_27);
      QuotEntryGrp_NoQuoteEntries_1.insert(TransactTime_27.getString());
      FIX::ValidUntilTime ValidUntilTime_2(FIX::UTCTIMESTAMP(7, 1, 26, 21, 6, 2013));
      noQuoteEntries_0_1_1.set(ValidUntilTime_2);
      QuotEntryGrp_NoQuoteEntries_1.insert(ValidUntilTime_2.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_1);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_64;
        FIX::EncodedLegIssuer EncodedLegIssuer_64("DATA_787101100");
        noLegs_0_1_2_0.set(EncodedLegIssuer_64);
        InstrumentLeg_64.insert(EncodedLegIssuer_64.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_64(1927324996);
        noLegs_0_1_2_0.set(EncodedLegIssuerLen_64);
        InstrumentLeg_64.insert(EncodedLegIssuerLen_64.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_64("DATA_2081967845");
        noLegs_0_1_2_0.set(EncodedLegSecurityDesc_64);
        InstrumentLeg_64.insert(EncodedLegSecurityDesc_64.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_64(522265374);
        noLegs_0_1_2_0.set(EncodedLegSecurityDescLen_64);
        InstrumentLeg_64.insert(EncodedLegSecurityDescLen_64.getString());
        FIX::LegCFICode LegCFICode_64("STRING_1410605509");
        noLegs_0_1_2_0.set(LegCFICode_64);
        InstrumentLeg_64.insert(LegCFICode_64.getString());
        FIX::LegContractMultiplier LegContractMultiplier_64;
        LegContractMultiplier_64.setString("603864");
        noLegs_0_1_2_0.set(LegContractMultiplier_64);
        InstrumentLeg_64.insert(LegContractMultiplier_64.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_64(1520190076);
        noLegs_0_1_2_0.set(LegContractMultiplierUnit_64);
        InstrumentLeg_64.insert(LegContractMultiplierUnit_64.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_64("MONTHYEAR_181955680");
        noLegs_0_1_2_0.set(LegContractSettlMonth_64);
        InstrumentLeg_64.insert(LegContractSettlMonth_64.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_64("COUNTRY_1052086319");
        noLegs_0_1_2_0.set(LegCountryOfIssue_64);
        InstrumentLeg_64.insert(LegCountryOfIssue_64.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_64("LOCALMKTDATE_2038549967");
        noLegs_0_1_2_0.set(LegCouponPaymentDate_64);
        InstrumentLeg_64.insert(LegCouponPaymentDate_64.getString());
        FIX::LegCouponRate LegCouponRate_64;
        LegCouponRate_64.setString("64.670000");
        noLegs_0_1_2_0.set(LegCouponRate_64);
        InstrumentLeg_64.insert(LegCouponRate_64.getString());
        FIX::LegCreditRating LegCreditRating_64("STRING_1946432946");
        noLegs_0_1_2_0.set(LegCreditRating_64);
        InstrumentLeg_64.insert(LegCreditRating_64.getString());
        FIX::LegCurrency LegCurrency_64("GBP");
        noLegs_0_1_2_0.set(LegCurrency_64);
        InstrumentLeg_64.insert(LegCurrency_64.getString());
        FIX::LegDatedDate LegDatedDate_64("LOCALMKTDATE_154858354");
        noLegs_0_1_2_0.set(LegDatedDate_64);
        InstrumentLeg_64.insert(LegDatedDate_64.getString());
        FIX::LegExerciseStyle LegExerciseStyle_64(862817568);
        noLegs_0_1_2_0.set(LegExerciseStyle_64);
        InstrumentLeg_64.insert(LegExerciseStyle_64.getString());
        FIX::LegFactor LegFactor_64;
        LegFactor_64.setString("12550080");
        noLegs_0_1_2_0.set(LegFactor_64);
        InstrumentLeg_64.insert(LegFactor_64.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_64(366090464);
        noLegs_0_1_2_0.set(LegFlowScheduleType_64);
        InstrumentLeg_64.insert(LegFlowScheduleType_64.getString());
        FIX::LegInstrRegistry LegInstrRegistry_64("STRING_1409529665");
        noLegs_0_1_2_0.set(LegInstrRegistry_64);
        InstrumentLeg_64.insert(LegInstrRegistry_64.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_64("LOCALMKTDATE_1431237928");
        noLegs_0_1_2_0.set(LegInterestAccrualDate_64);
        InstrumentLeg_64.insert(LegInterestAccrualDate_64.getString());
        FIX::LegIssueDate LegIssueDate_64("LOCALMKTDATE_1017835791");
        noLegs_0_1_2_0.set(LegIssueDate_64);
        InstrumentLeg_64.insert(LegIssueDate_64.getString());
        FIX::LegIssuer LegIssuer_64("STRING_579836999");
        noLegs_0_1_2_0.set(LegIssuer_64);
        InstrumentLeg_64.insert(LegIssuer_64.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_64("STRING_153491002");
        noLegs_0_1_2_0.set(LegLocaleOfIssue_64);
        InstrumentLeg_64.insert(LegLocaleOfIssue_64.getString());
        FIX::LegMaturityDate LegMaturityDate_64("LOCALMKTDATE_1723211144");
        noLegs_0_1_2_0.set(LegMaturityDate_64);
        InstrumentLeg_64.insert(LegMaturityDate_64.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_64("MONTHYEAR_1313383543");
        noLegs_0_1_2_0.set(LegMaturityMonthYear_64);
        InstrumentLeg_64.insert(LegMaturityMonthYear_64.getString());
        FIX::LegMaturityTime LegMaturityTime_64("TZTIMEONLY_1874474124");
        noLegs_0_1_2_0.set(LegMaturityTime_64);
        InstrumentLeg_64.insert(LegMaturityTime_64.getString());
        FIX::LegOptAttribute LegOptAttribute_64('5');
        noLegs_0_1_2_0.set(LegOptAttribute_64);
        InstrumentLeg_64.insert(LegOptAttribute_64.getString());
        FIX::LegOptionRatio LegOptionRatio_64;
        LegOptionRatio_64.setString("10013651");
        noLegs_0_1_2_0.set(LegOptionRatio_64);
        InstrumentLeg_64.insert(LegOptionRatio_64.getString());
        FIX::LegPool LegPool_64("STRING_1687448265");
        noLegs_0_1_2_0.set(LegPool_64);
        InstrumentLeg_64.insert(LegPool_64.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_64("STRING_208256504");
        noLegs_0_1_2_0.set(LegPriceUnitOfMeasure_64);
        InstrumentLeg_64.insert(LegPriceUnitOfMeasure_64.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_64;
        LegPriceUnitOfMeasureQty_64.setString("11561161");
        noLegs_0_1_2_0.set(LegPriceUnitOfMeasureQty_64);
        InstrumentLeg_64.insert(LegPriceUnitOfMeasureQty_64.getString());
        FIX::LegProduct LegProduct_64(327065717);
        noLegs_0_1_2_0.set(LegProduct_64);
        InstrumentLeg_64.insert(LegProduct_64.getString());
        FIX::LegPutOrCall LegPutOrCall_64(2135581500);
        noLegs_0_1_2_0.set(LegPutOrCall_64);
        InstrumentLeg_64.insert(LegPutOrCall_64.getString());
        FIX::LegRatioQty LegRatioQty_64;
        LegRatioQty_64.setString("10906003");
        noLegs_0_1_2_0.set(LegRatioQty_64);
        InstrumentLeg_64.insert(LegRatioQty_64.getString());
        FIX::LegRedemptionDate LegRedemptionDate_64("LOCALMKTDATE_849331091");
        noLegs_0_1_2_0.set(LegRedemptionDate_64);
        InstrumentLeg_64.insert(LegRedemptionDate_64.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_64("STRING_1398703362");
        noLegs_0_1_2_0.set(LegRepoCollateralSecurityType_64);
        InstrumentLeg_64.insert(LegRepoCollateralSecurityType_64.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_64;
        LegRepurchaseRate_64.setString("67.490000");
        noLegs_0_1_2_0.set(LegRepurchaseRate_64);
        InstrumentLeg_64.insert(LegRepurchaseRate_64.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_64(222037519);
        noLegs_0_1_2_0.set(LegRepurchaseTerm_64);
        InstrumentLeg_64.insert(LegRepurchaseTerm_64.getString());
        FIX::LegSecurityDesc LegSecurityDesc_64("STRING_1580659042");
        noLegs_0_1_2_0.set(LegSecurityDesc_64);
        InstrumentLeg_64.insert(LegSecurityDesc_64.getString());
        FIX::LegSecurityExchange LegSecurityExchange_64("EXCHANGE_55589420");
        noLegs_0_1_2_0.set(LegSecurityExchange_64);
        InstrumentLeg_64.insert(LegSecurityExchange_64.getString());
        FIX::LegSecurityID LegSecurityID_64("STRING_113103838");
        noLegs_0_1_2_0.set(LegSecurityID_64);
        InstrumentLeg_64.insert(LegSecurityID_64.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_64("STRING_821831861");
        noLegs_0_1_2_0.set(LegSecurityIDSource_64);
        InstrumentLeg_64.insert(LegSecurityIDSource_64.getString());
        FIX::LegSecuritySubType LegSecuritySubType_64("STRING_2002022366");
        noLegs_0_1_2_0.set(LegSecuritySubType_64);
        InstrumentLeg_64.insert(LegSecuritySubType_64.getString());
        FIX::LegSecurityType LegSecurityType_64("STRING_1087961547");
        noLegs_0_1_2_0.set(LegSecurityType_64);
        InstrumentLeg_64.insert(LegSecurityType_64.getString());
        FIX::LegSide LegSide_64('8');
        noLegs_0_1_2_0.set(LegSide_64);
        InstrumentLeg_64.insert(LegSide_64.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_64("STRING_9397072");
        noLegs_0_1_2_0.set(LegStateOrProvinceOfIssue_64);
        InstrumentLeg_64.insert(LegStateOrProvinceOfIssue_64.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_64("CAN");
        noLegs_0_1_2_0.set(LegStrikeCurrency_64);
        InstrumentLeg_64.insert(LegStrikeCurrency_64.getString());
        FIX::LegStrikePrice LegStrikePrice_64;
        LegStrikePrice_64.setString("3754875");
        noLegs_0_1_2_0.set(LegStrikePrice_64);
        InstrumentLeg_64.insert(LegStrikePrice_64.getString());
        FIX::LegSymbol LegSymbol_64("STRING_1212825133");
        noLegs_0_1_2_0.set(LegSymbol_64);
        InstrumentLeg_64.insert(LegSymbol_64.getString());
        FIX::LegSymbolSfx LegSymbolSfx_64("STRING_1375797697");
        noLegs_0_1_2_0.set(LegSymbolSfx_64);
        InstrumentLeg_64.insert(LegSymbolSfx_64.getString());
        FIX::LegTimeUnit LegTimeUnit_64("STRING_1393323328");
        noLegs_0_1_2_0.set(LegTimeUnit_64);
        InstrumentLeg_64.insert(LegTimeUnit_64.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_64("STRING_1792662133");
        noLegs_0_1_2_0.set(LegUnitOfMeasure_64);
        InstrumentLeg_64.insert(LegUnitOfMeasure_64.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_64;
        LegUnitOfMeasureQty_64.setString("15292887");
        noLegs_0_1_2_0.set(LegUnitOfMeasureQty_64);
        InstrumentLeg_64.insert(LegUnitOfMeasureQty_64.getString());
        all_values.push_back(InstrumentLeg_64);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_125;
          FIX::LegSecurityAltID LegSecurityAltID_125("STRING_958562028");
          noLegSecurityAltID_0_1_0_3_0.set(LegSecurityAltID_125);
          LegSecAltIDGrp_NoLegSecurityAltID_125.insert(LegSecurityAltID_125.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_125("STRING_1256279176");
          noLegSecurityAltID_0_1_0_3_0.set(LegSecurityAltIDSource_125);
          LegSecAltIDGrp_NoLegSecurityAltID_125.insert(LegSecurityAltIDSource_125.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_125);

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_126;
          FIX::LegSecurityAltID LegSecurityAltID_126("STRING_1567288747");
          noLegSecurityAltID_0_1_0_3_1.set(LegSecurityAltID_126);
          LegSecAltIDGrp_NoLegSecurityAltID_126.insert(LegSecurityAltID_126.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_126("STRING_1959927212");
          noLegSecurityAltID_0_1_0_3_1.set(LegSecurityAltIDSource_126);
          LegSecAltIDGrp_NoLegSecurityAltID_126.insert(LegSecurityAltIDSource_126.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_126);

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_65;
        FIX::EncodedLegIssuer EncodedLegIssuer_65("DATA_796243793");
        noLegs_0_1_2_1.set(EncodedLegIssuer_65);
        InstrumentLeg_65.insert(EncodedLegIssuer_65.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_65(1775545251);
        noLegs_0_1_2_1.set(EncodedLegIssuerLen_65);
        InstrumentLeg_65.insert(EncodedLegIssuerLen_65.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_65("DATA_968559666");
        noLegs_0_1_2_1.set(EncodedLegSecurityDesc_65);
        InstrumentLeg_65.insert(EncodedLegSecurityDesc_65.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_65(1123309510);
        noLegs_0_1_2_1.set(EncodedLegSecurityDescLen_65);
        InstrumentLeg_65.insert(EncodedLegSecurityDescLen_65.getString());
        FIX::LegCFICode LegCFICode_65("STRING_1763643103");
        noLegs_0_1_2_1.set(LegCFICode_65);
        InstrumentLeg_65.insert(LegCFICode_65.getString());
        FIX::LegContractMultiplier LegContractMultiplier_65;
        LegContractMultiplier_65.setString("20591599");
        noLegs_0_1_2_1.set(LegContractMultiplier_65);
        InstrumentLeg_65.insert(LegContractMultiplier_65.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_65(1972640601);
        noLegs_0_1_2_1.set(LegContractMultiplierUnit_65);
        InstrumentLeg_65.insert(LegContractMultiplierUnit_65.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_65("MONTHYEAR_1014862817");
        noLegs_0_1_2_1.set(LegContractSettlMonth_65);
        InstrumentLeg_65.insert(LegContractSettlMonth_65.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_65("COUNTRY_1062663067");
        noLegs_0_1_2_1.set(LegCountryOfIssue_65);
        InstrumentLeg_65.insert(LegCountryOfIssue_65.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_65("LOCALMKTDATE_47194473");
        noLegs_0_1_2_1.set(LegCouponPaymentDate_65);
        InstrumentLeg_65.insert(LegCouponPaymentDate_65.getString());
        FIX::LegCouponRate LegCouponRate_65;
        LegCouponRate_65.setString("82.120000");
        noLegs_0_1_2_1.set(LegCouponRate_65);
        InstrumentLeg_65.insert(LegCouponRate_65.getString());
        FIX::LegCreditRating LegCreditRating_65("STRING_1118252487");
        noLegs_0_1_2_1.set(LegCreditRating_65);
        InstrumentLeg_65.insert(LegCreditRating_65.getString());
        FIX::LegCurrency LegCurrency_65("EUR");
        noLegs_0_1_2_1.set(LegCurrency_65);
        InstrumentLeg_65.insert(LegCurrency_65.getString());
        FIX::LegDatedDate LegDatedDate_65("LOCALMKTDATE_972791206");
        noLegs_0_1_2_1.set(LegDatedDate_65);
        InstrumentLeg_65.insert(LegDatedDate_65.getString());
        FIX::LegExerciseStyle LegExerciseStyle_65(1248259859);
        noLegs_0_1_2_1.set(LegExerciseStyle_65);
        InstrumentLeg_65.insert(LegExerciseStyle_65.getString());
        FIX::LegFactor LegFactor_65;
        LegFactor_65.setString("21069054");
        noLegs_0_1_2_1.set(LegFactor_65);
        InstrumentLeg_65.insert(LegFactor_65.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_65(982188278);
        noLegs_0_1_2_1.set(LegFlowScheduleType_65);
        InstrumentLeg_65.insert(LegFlowScheduleType_65.getString());
        FIX::LegInstrRegistry LegInstrRegistry_65("STRING_1051555327");
        noLegs_0_1_2_1.set(LegInstrRegistry_65);
        InstrumentLeg_65.insert(LegInstrRegistry_65.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_65("LOCALMKTDATE_2051465232");
        noLegs_0_1_2_1.set(LegInterestAccrualDate_65);
        InstrumentLeg_65.insert(LegInterestAccrualDate_65.getString());
        FIX::LegIssueDate LegIssueDate_65("LOCALMKTDATE_1357675815");
        noLegs_0_1_2_1.set(LegIssueDate_65);
        InstrumentLeg_65.insert(LegIssueDate_65.getString());
        FIX::LegIssuer LegIssuer_65("STRING_116896812");
        noLegs_0_1_2_1.set(LegIssuer_65);
        InstrumentLeg_65.insert(LegIssuer_65.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_65("STRING_1279779281");
        noLegs_0_1_2_1.set(LegLocaleOfIssue_65);
        InstrumentLeg_65.insert(LegLocaleOfIssue_65.getString());
        FIX::LegMaturityDate LegMaturityDate_65("LOCALMKTDATE_603515496");
        noLegs_0_1_2_1.set(LegMaturityDate_65);
        InstrumentLeg_65.insert(LegMaturityDate_65.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_65("MONTHYEAR_1909558945");
        noLegs_0_1_2_1.set(LegMaturityMonthYear_65);
        InstrumentLeg_65.insert(LegMaturityMonthYear_65.getString());
        FIX::LegMaturityTime LegMaturityTime_65("TZTIMEONLY_661584333");
        noLegs_0_1_2_1.set(LegMaturityTime_65);
        InstrumentLeg_65.insert(LegMaturityTime_65.getString());
        FIX::LegOptAttribute LegOptAttribute_65('1');
        noLegs_0_1_2_1.set(LegOptAttribute_65);
        InstrumentLeg_65.insert(LegOptAttribute_65.getString());
        FIX::LegOptionRatio LegOptionRatio_65;
        LegOptionRatio_65.setString("7206373");
        noLegs_0_1_2_1.set(LegOptionRatio_65);
        InstrumentLeg_65.insert(LegOptionRatio_65.getString());
        FIX::LegPool LegPool_65("STRING_1917863509");
        noLegs_0_1_2_1.set(LegPool_65);
        InstrumentLeg_65.insert(LegPool_65.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_65("STRING_992371419");
        noLegs_0_1_2_1.set(LegPriceUnitOfMeasure_65);
        InstrumentLeg_65.insert(LegPriceUnitOfMeasure_65.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_65;
        LegPriceUnitOfMeasureQty_65.setString("5330808");
        noLegs_0_1_2_1.set(LegPriceUnitOfMeasureQty_65);
        InstrumentLeg_65.insert(LegPriceUnitOfMeasureQty_65.getString());
        FIX::LegProduct LegProduct_65(566623654);
        noLegs_0_1_2_1.set(LegProduct_65);
        InstrumentLeg_65.insert(LegProduct_65.getString());
        FIX::LegPutOrCall LegPutOrCall_65(620433022);
        noLegs_0_1_2_1.set(LegPutOrCall_65);
        InstrumentLeg_65.insert(LegPutOrCall_65.getString());
        FIX::LegRatioQty LegRatioQty_65;
        LegRatioQty_65.setString("15016405");
        noLegs_0_1_2_1.set(LegRatioQty_65);
        InstrumentLeg_65.insert(LegRatioQty_65.getString());
        FIX::LegRedemptionDate LegRedemptionDate_65("LOCALMKTDATE_1689933164");
        noLegs_0_1_2_1.set(LegRedemptionDate_65);
        InstrumentLeg_65.insert(LegRedemptionDate_65.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_65("STRING_236592478");
        noLegs_0_1_2_1.set(LegRepoCollateralSecurityType_65);
        InstrumentLeg_65.insert(LegRepoCollateralSecurityType_65.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_65;
        LegRepurchaseRate_65.setString("68.740000");
        noLegs_0_1_2_1.set(LegRepurchaseRate_65);
        InstrumentLeg_65.insert(LegRepurchaseRate_65.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_65(1515090118);
        noLegs_0_1_2_1.set(LegRepurchaseTerm_65);
        InstrumentLeg_65.insert(LegRepurchaseTerm_65.getString());
        FIX::LegSecurityDesc LegSecurityDesc_65("STRING_1251455295");
        noLegs_0_1_2_1.set(LegSecurityDesc_65);
        InstrumentLeg_65.insert(LegSecurityDesc_65.getString());
        FIX::LegSecurityExchange LegSecurityExchange_65("EXCHANGE_328496294");
        noLegs_0_1_2_1.set(LegSecurityExchange_65);
        InstrumentLeg_65.insert(LegSecurityExchange_65.getString());
        FIX::LegSecurityID LegSecurityID_65("STRING_1562284591");
        noLegs_0_1_2_1.set(LegSecurityID_65);
        InstrumentLeg_65.insert(LegSecurityID_65.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_65("STRING_1699493507");
        noLegs_0_1_2_1.set(LegSecurityIDSource_65);
        InstrumentLeg_65.insert(LegSecurityIDSource_65.getString());
        FIX::LegSecuritySubType LegSecuritySubType_65("STRING_1446748781");
        noLegs_0_1_2_1.set(LegSecuritySubType_65);
        InstrumentLeg_65.insert(LegSecuritySubType_65.getString());
        FIX::LegSecurityType LegSecurityType_65("STRING_1722582902");
        noLegs_0_1_2_1.set(LegSecurityType_65);
        InstrumentLeg_65.insert(LegSecurityType_65.getString());
        FIX::LegSide LegSide_65('8');
        noLegs_0_1_2_1.set(LegSide_65);
        InstrumentLeg_65.insert(LegSide_65.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_65("STRING_272056339");
        noLegs_0_1_2_1.set(LegStateOrProvinceOfIssue_65);
        InstrumentLeg_65.insert(LegStateOrProvinceOfIssue_65.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_65("USD");
        noLegs_0_1_2_1.set(LegStrikeCurrency_65);
        InstrumentLeg_65.insert(LegStrikeCurrency_65.getString());
        FIX::LegStrikePrice LegStrikePrice_65;
        LegStrikePrice_65.setString("12542446");
        noLegs_0_1_2_1.set(LegStrikePrice_65);
        InstrumentLeg_65.insert(LegStrikePrice_65.getString());
        FIX::LegSymbol LegSymbol_65("STRING_1874914440");
        noLegs_0_1_2_1.set(LegSymbol_65);
        InstrumentLeg_65.insert(LegSymbol_65.getString());
        FIX::LegSymbolSfx LegSymbolSfx_65("STRING_685283332");
        noLegs_0_1_2_1.set(LegSymbolSfx_65);
        InstrumentLeg_65.insert(LegSymbolSfx_65.getString());
        FIX::LegTimeUnit LegTimeUnit_65("STRING_464436785");
        noLegs_0_1_2_1.set(LegTimeUnit_65);
        InstrumentLeg_65.insert(LegTimeUnit_65.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_65("STRING_1991811253");
        noLegs_0_1_2_1.set(LegUnitOfMeasure_65);
        InstrumentLeg_65.insert(LegUnitOfMeasure_65.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_65;
        LegUnitOfMeasureQty_65.setString("19650626");
        noLegs_0_1_2_1.set(LegUnitOfMeasureQty_65);
        InstrumentLeg_65.insert(LegUnitOfMeasureQty_65.getString());
        all_values.push_back(InstrumentLeg_65);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_127;
          FIX::LegSecurityAltID LegSecurityAltID_127("STRING_1753886550");
          noLegSecurityAltID_0_1_1_3_0.set(LegSecurityAltID_127);
          LegSecAltIDGrp_NoLegSecurityAltID_127.insert(LegSecurityAltID_127.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_127("STRING_479163299");
          noLegSecurityAltID_0_1_1_3_0.set(LegSecurityAltIDSource_127);
          LegSecAltIDGrp_NoLegSecurityAltID_127.insert(LegSecurityAltIDSource_127.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_127);

          noLegs_0_1_2_1.addGroup(noLegSecurityAltID_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_128;
          FIX::LegSecurityAltID LegSecurityAltID_128("STRING_493034954");
          noLegSecurityAltID_0_1_1_3_1.set(LegSecurityAltID_128);
          LegSecAltIDGrp_NoLegSecurityAltID_128.insert(LegSecurityAltID_128.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_128("STRING_327040228");
          noLegSecurityAltID_0_1_1_3_1.set(LegSecurityAltIDSource_128);
          LegSecAltIDGrp_NoLegSecurityAltID_128.insert(LegSecurityAltIDSource_128.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_128);

          noLegs_0_1_2_1.addGroup(noLegSecurityAltID_0_1_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_129;
          FIX::LegSecurityAltID LegSecurityAltID_129("STRING_249543160");
          noLegSecurityAltID_0_1_1_3_2.set(LegSecurityAltID_129);
          LegSecAltIDGrp_NoLegSecurityAltID_129.insert(LegSecurityAltID_129.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_129("STRING_1485406373");
          noLegSecurityAltID_0_1_1_3_2.set(LegSecurityAltIDSource_129);
          LegSecAltIDGrp_NoLegSecurityAltID_129.insert(LegSecurityAltIDSource_129.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_129);

          noLegs_0_1_2_1.addGroup(noLegSecurityAltID_0_1_1_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_1);
      }
      // Instrument
      multiset<string> Instrument_35;
      FIX::AttachmentPoint AttachmentPoint_35;
      AttachmentPoint_35.setString("11.170000");
      noQuoteEntries_0_1_1.set(AttachmentPoint_35);
      Instrument_35.insert(AttachmentPoint_35.getString());
      FIX::CFICode CFICode_35("STRING_816166815");
      noQuoteEntries_0_1_1.set(CFICode_35);
      Instrument_35.insert(CFICode_35.getString());
      FIX::CPProgram CPProgram_35(2);
      noQuoteEntries_0_1_1.set(CPProgram_35);
      Instrument_35.insert(CPProgram_35.getString());
      FIX::CPRegType CPRegType_35("STRING_214278025");
      noQuoteEntries_0_1_1.set(CPRegType_35);
      Instrument_35.insert(CPRegType_35.getString());
      FIX::CapPrice CapPrice_35;
      CapPrice_35.setString("3586163");
      noQuoteEntries_0_1_1.set(CapPrice_35);
      Instrument_35.insert(CapPrice_35.getString());
      FIX::ContractMultiplier ContractMultiplier_35;
      ContractMultiplier_35.setString("1949482");
      noQuoteEntries_0_1_1.set(ContractMultiplier_35);
      Instrument_35.insert(ContractMultiplier_35.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_35(1);
      noQuoteEntries_0_1_1.set(ContractMultiplierUnit_35);
      Instrument_35.insert(ContractMultiplierUnit_35.getString());
      FIX::ContractSettlMonth ContractSettlMonth_35("MONTHYEAR_1873706449");
      noQuoteEntries_0_1_1.set(ContractSettlMonth_35);
      Instrument_35.insert(ContractSettlMonth_35.getString());
      FIX::CountryOfIssue CountryOfIssue_35("COUNTRY_1446403521");
      noQuoteEntries_0_1_1.set(CountryOfIssue_35);
      Instrument_35.insert(CountryOfIssue_35.getString());
      FIX::CouponPaymentDate CouponPaymentDate_35("LOCALMKTDATE_1956091194");
      noQuoteEntries_0_1_1.set(CouponPaymentDate_35);
      Instrument_35.insert(CouponPaymentDate_35.getString());
      FIX::CouponRate CouponRate_35;
      CouponRate_35.setString("73.920000");
      noQuoteEntries_0_1_1.set(CouponRate_35);
      Instrument_35.insert(CouponRate_35.getString());
      FIX::CreditRating CreditRating_35("STRING_998413381");
      noQuoteEntries_0_1_1.set(CreditRating_35);
      Instrument_35.insert(CreditRating_35.getString());
      FIX::DatedDate DatedDate_35("LOCALMKTDATE_1255356327");
      noQuoteEntries_0_1_1.set(DatedDate_35);
      Instrument_35.insert(DatedDate_35.getString());
      FIX::DetachmentPoint DetachmentPoint_35;
      DetachmentPoint_35.setString("66.470000");
      noQuoteEntries_0_1_1.set(DetachmentPoint_35);
      Instrument_35.insert(DetachmentPoint_35.getString());
      FIX::EncodedIssuer EncodedIssuer_35("DATA_1820293314");
      noQuoteEntries_0_1_1.set(EncodedIssuer_35);
      Instrument_35.insert(EncodedIssuer_35.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_35(1527412667);
      noQuoteEntries_0_1_1.set(EncodedIssuerLen_35);
      Instrument_35.insert(EncodedIssuerLen_35.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_35("DATA_1686965760");
      noQuoteEntries_0_1_1.set(EncodedSecurityDesc_35);
      Instrument_35.insert(EncodedSecurityDesc_35.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_35(454111414);
      noQuoteEntries_0_1_1.set(EncodedSecurityDescLen_35);
      Instrument_35.insert(EncodedSecurityDescLen_35.getString());
      FIX::ExerciseStyle ExerciseStyle_35(1);
      noQuoteEntries_0_1_1.set(ExerciseStyle_35);
      Instrument_35.insert(ExerciseStyle_35.getString());
      FIX::Factor Factor_35;
      Factor_35.setString("14143965");
      noQuoteEntries_0_1_1.set(Factor_35);
      Instrument_35.insert(Factor_35.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_35(true);
      noQuoteEntries_0_1_1.set(FlexProductEligibilityIndicator_35);
      Instrument_35.insert(FlexProductEligibilityIndicator_35.getString());
      FIX::FlexibleIndicator FlexibleIndicator_35(true);
      noQuoteEntries_0_1_1.set(FlexibleIndicator_35);
      Instrument_35.insert(FlexibleIndicator_35.getString());
      FIX::FloorPrice FloorPrice_35;
      FloorPrice_35.setString("12587241");
      noQuoteEntries_0_1_1.set(FloorPrice_35);
      Instrument_35.insert(FloorPrice_35.getString());
      FIX::FlowScheduleType FlowScheduleType_35(1);
      noQuoteEntries_0_1_1.set(FlowScheduleType_35);
      Instrument_35.insert(FlowScheduleType_35.getString());
      FIX::InstrRegistry InstrRegistry_35("STRING_19079056");
      noQuoteEntries_0_1_1.set(InstrRegistry_35);
      Instrument_35.insert(InstrRegistry_35.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_35('8');
      noQuoteEntries_0_1_1.set(InstrmtAssignmentMethod_35);
      Instrument_35.insert(InstrmtAssignmentMethod_35.getString());
      FIX::InterestAccrualDate InterestAccrualDate_35("LOCALMKTDATE_1436137010");
      noQuoteEntries_0_1_1.set(InterestAccrualDate_35);
      Instrument_35.insert(InterestAccrualDate_35.getString());
      FIX::IssueDate IssueDate_35("LOCALMKTDATE_512114010");
      noQuoteEntries_0_1_1.set(IssueDate_35);
      Instrument_35.insert(IssueDate_35.getString());
      FIX::Issuer Issuer_35("STRING_1192167288");
      noQuoteEntries_0_1_1.set(Issuer_35);
      Instrument_35.insert(Issuer_35.getString());
      FIX::ListMethod ListMethod_35(1);
      noQuoteEntries_0_1_1.set(ListMethod_35);
      Instrument_35.insert(ListMethod_35.getString());
      FIX::LocaleOfIssue LocaleOfIssue_35("STRING_1997520383");
      noQuoteEntries_0_1_1.set(LocaleOfIssue_35);
      Instrument_35.insert(LocaleOfIssue_35.getString());
      FIX::MaturityDate MaturityDate_35("LOCALMKTDATE_2052288406");
      noQuoteEntries_0_1_1.set(MaturityDate_35);
      Instrument_35.insert(MaturityDate_35.getString());
      FIX::MaturityMonthYear MaturityMonthYear_35("MONTHYEAR_354363338");
      noQuoteEntries_0_1_1.set(MaturityMonthYear_35);
      Instrument_35.insert(MaturityMonthYear_35.getString());
      FIX::MaturityTime MaturityTime_35("TZTIMEONLY_1955876131");
      noQuoteEntries_0_1_1.set(MaturityTime_35);
      Instrument_35.insert(MaturityTime_35.getString());
      FIX::MinPriceIncrement MinPriceIncrement_35;
      MinPriceIncrement_35.setString("1190827");
      noQuoteEntries_0_1_1.set(MinPriceIncrement_35);
      Instrument_35.insert(MinPriceIncrement_35.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_35;
      MinPriceIncrementAmount_35.setString("7129796");
      noQuoteEntries_0_1_1.set(MinPriceIncrementAmount_35);
      Instrument_35.insert(MinPriceIncrementAmount_35.getString());
      FIX::NTPositionLimit NTPositionLimit_35(3340709);
      noQuoteEntries_0_1_1.set(NTPositionLimit_35);
      Instrument_35.insert(NTPositionLimit_35.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_35;
      NotionalPercentageOutstanding_35.setString("76.830000");
      noQuoteEntries_0_1_1.set(NotionalPercentageOutstanding_35);
      Instrument_35.insert(NotionalPercentageOutstanding_35.getString());
      FIX::OptAttribute OptAttribute_35('4');
      noQuoteEntries_0_1_1.set(OptAttribute_35);
      Instrument_35.insert(OptAttribute_35.getString());
      FIX::OptPayoutAmount OptPayoutAmount_35;
      OptPayoutAmount_35.setString("14497442");
      noQuoteEntries_0_1_1.set(OptPayoutAmount_35);
      Instrument_35.insert(OptPayoutAmount_35.getString());
      FIX::OptPayoutType OptPayoutType_35(3);
      noQuoteEntries_0_1_1.set(OptPayoutType_35);
      Instrument_35.insert(OptPayoutType_35.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_35;
      OriginalNotionalPercentageOutstanding_35.setString("98.630000");
      noQuoteEntries_0_1_1.set(OriginalNotionalPercentageOutstanding_35);
      Instrument_35.insert(OriginalNotionalPercentageOutstanding_35.getString());
      FIX::Pool Pool_35("STRING_300673964");
      noQuoteEntries_0_1_1.set(Pool_35);
      Instrument_35.insert(Pool_35.getString());
      FIX::PositionLimit PositionLimit_35(663157909);
      noQuoteEntries_0_1_1.set(PositionLimit_35);
      Instrument_35.insert(PositionLimit_35.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_35("STRING_INT");
      noQuoteEntries_0_1_1.set(PriceQuoteMethod_35);
      Instrument_35.insert(PriceQuoteMethod_35.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_35("STRING_2120967278");
      noQuoteEntries_0_1_1.set(PriceUnitOfMeasure_35);
      Instrument_35.insert(PriceUnitOfMeasure_35.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_35;
      PriceUnitOfMeasureQty_35.setString("430869");
      noQuoteEntries_0_1_1.set(PriceUnitOfMeasureQty_35);
      Instrument_35.insert(PriceUnitOfMeasureQty_35.getString());
      FIX::Product Product_37(6);
      noQuoteEntries_0_1_1.set(Product_37);
      Instrument_35.insert(Product_37.getString());
      FIX::ProductComplex ProductComplex_35("STRING_427595044");
      noQuoteEntries_0_1_1.set(ProductComplex_35);
      Instrument_35.insert(ProductComplex_35.getString());
      FIX::PutOrCall PutOrCall_35(1);
      noQuoteEntries_0_1_1.set(PutOrCall_35);
      Instrument_35.insert(PutOrCall_35.getString());
      FIX::RedemptionDate RedemptionDate_35("LOCALMKTDATE_1397711528");
      noQuoteEntries_0_1_1.set(RedemptionDate_35);
      Instrument_35.insert(RedemptionDate_35.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_35("STRING_1566989790");
      noQuoteEntries_0_1_1.set(RepoCollateralSecurityType_35);
      Instrument_35.insert(RepoCollateralSecurityType_35.getString());
      FIX::RepurchaseRate RepurchaseRate_35;
      RepurchaseRate_35.setString("9.870000");
      noQuoteEntries_0_1_1.set(RepurchaseRate_35);
      Instrument_35.insert(RepurchaseRate_35.getString());
      FIX::RepurchaseTerm RepurchaseTerm_35(508952038);
      noQuoteEntries_0_1_1.set(RepurchaseTerm_35);
      Instrument_35.insert(RepurchaseTerm_35.getString());
      FIX::RestructuringType RestructuringType_35("STRING_MR");
      noQuoteEntries_0_1_1.set(RestructuringType_35);
      Instrument_35.insert(RestructuringType_35.getString());
      FIX::SecurityDesc SecurityDesc_35("STRING_1794950043");
      noQuoteEntries_0_1_1.set(SecurityDesc_35);
      Instrument_35.insert(SecurityDesc_35.getString());
      FIX::SecurityExchange SecurityExchange_35("EXCHANGE_1374079098");
      noQuoteEntries_0_1_1.set(SecurityExchange_35);
      Instrument_35.insert(SecurityExchange_35.getString());
      FIX::SecurityGroup SecurityGroup_35("STRING_1812616864");
      noQuoteEntries_0_1_1.set(SecurityGroup_35);
      Instrument_35.insert(SecurityGroup_35.getString());
      FIX::SecurityID SecurityID_35("STRING_159580405");
      noQuoteEntries_0_1_1.set(SecurityID_35);
      Instrument_35.insert(SecurityID_35.getString());
      FIX::SecurityIDSource SecurityIDSource_35("STRING_M");
      noQuoteEntries_0_1_1.set(SecurityIDSource_35);
      Instrument_35.insert(SecurityIDSource_35.getString());
      FIX::SecurityStatus SecurityStatus_35("STRING_2");
      noQuoteEntries_0_1_1.set(SecurityStatus_35);
      Instrument_35.insert(SecurityStatus_35.getString());
      FIX::SecuritySubType SecuritySubType_36("STRING_9617141");
      noQuoteEntries_0_1_1.set(SecuritySubType_36);
      Instrument_35.insert(SecuritySubType_36.getString());
      FIX::SecurityType SecurityType_37("STRING_DINP");
      noQuoteEntries_0_1_1.set(SecurityType_37);
      Instrument_35.insert(SecurityType_37.getString());
      FIX::Seniority Seniority_35("STRING_SB");
      noQuoteEntries_0_1_1.set(Seniority_35);
      Instrument_35.insert(Seniority_35.getString());
      FIX::SettlMethod SettlMethod_35('C');
      noQuoteEntries_0_1_1.set(SettlMethod_35);
      Instrument_35.insert(SettlMethod_35.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_35("STRING_442650280");
      noQuoteEntries_0_1_1.set(SettleOnOpenFlag_35);
      Instrument_35.insert(SettleOnOpenFlag_35.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_35("STRING_270672746");
      noQuoteEntries_0_1_1.set(StateOrProvinceOfIssue_35);
      Instrument_35.insert(StateOrProvinceOfIssue_35.getString());
      FIX::StrikeCurrency StrikeCurrency_35("JPY");
      noQuoteEntries_0_1_1.set(StrikeCurrency_35);
      Instrument_35.insert(StrikeCurrency_35.getString());
      FIX::StrikeMultiplier StrikeMultiplier_35;
      StrikeMultiplier_35.setString("7098752");
      noQuoteEntries_0_1_1.set(StrikeMultiplier_35);
      Instrument_35.insert(StrikeMultiplier_35.getString());
      FIX::StrikePrice StrikePrice_35;
      StrikePrice_35.setString("12710945");
      noQuoteEntries_0_1_1.set(StrikePrice_35);
      Instrument_35.insert(StrikePrice_35.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_35(1);
      noQuoteEntries_0_1_1.set(StrikePriceBoundaryMethod_35);
      Instrument_35.insert(StrikePriceBoundaryMethod_35.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_35;
      StrikePriceBoundaryPrecision_35.setString("14.330000");
      noQuoteEntries_0_1_1.set(StrikePriceBoundaryPrecision_35);
      Instrument_35.insert(StrikePriceBoundaryPrecision_35.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_35(2);
      noQuoteEntries_0_1_1.set(StrikePriceDeterminationMethod_35);
      Instrument_35.insert(StrikePriceDeterminationMethod_35.getString());
      FIX::StrikeValue StrikeValue_35;
      StrikeValue_35.setString("1128038");
      noQuoteEntries_0_1_1.set(StrikeValue_35);
      Instrument_35.insert(StrikeValue_35.getString());
      FIX::Symbol Symbol_35("STRING_733934295");
      noQuoteEntries_0_1_1.set(Symbol_35);
      Instrument_35.insert(Symbol_35.getString());
      FIX::SymbolSfx SymbolSfx_35("STRING_WI");
      noQuoteEntries_0_1_1.set(SymbolSfx_35);
      Instrument_35.insert(SymbolSfx_35.getString());
      FIX::TimeUnit TimeUnit_35("STRING_Yr");
      noQuoteEntries_0_1_1.set(TimeUnit_35);
      Instrument_35.insert(TimeUnit_35.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_35(3);
      noQuoteEntries_0_1_1.set(UnderlyingPriceDeterminationMethod_35);
      Instrument_35.insert(UnderlyingPriceDeterminationMethod_35.getString());
      FIX::UnitOfMeasure UnitOfMeasure_35("STRING_MMBtu");
      noQuoteEntries_0_1_1.set(UnitOfMeasure_35);
      Instrument_35.insert(UnitOfMeasure_35.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_35;
      UnitOfMeasureQty_35.setString("8331512");
      noQuoteEntries_0_1_1.set(UnitOfMeasureQty_35);
      Instrument_35.insert(UnitOfMeasureQty_35.getString());
      FIX::ValuationMethod ValuationMethod_35("STRING_CDS");
      noQuoteEntries_0_1_1.set(ValuationMethod_35);
      Instrument_35.insert(ValuationMethod_35.getString());
      all_values.push_back(Instrument_35);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_66;
        FIX::ComplexEventCondition ComplexEventCondition_66(2);
        noComplexEvents_0_1_2_0.set(ComplexEventCondition_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventCondition_66.getString());
        FIX::ComplexEventPrice ComplexEventPrice_66;
        ComplexEventPrice_66.setString("4764291");
        noComplexEvents_0_1_2_0.set(ComplexEventPrice_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventPrice_66.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_66(4);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryMethod_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventPriceBoundaryMethod_66.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_66;
        ComplexEventPriceBoundaryPrecision_66.setString("50.340000");
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryPrecision_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventPriceBoundaryPrecision_66.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_66(3);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceTimeType_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventPriceTimeType_66.getString());
        FIX::ComplexEventType ComplexEventType_66(6);
        noComplexEvents_0_1_2_0.set(ComplexEventType_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexEventType_66.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_66;
        ComplexOptPayoutAmount_66.setString("2685854");
        noComplexEvents_0_1_2_0.set(ComplexOptPayoutAmount_66);
        ComplexEvents_NoComplexEvents_66.insert(ComplexOptPayoutAmount_66.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_66);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_128;
          FIX::ComplexEventEndDate ComplexEventEndDate_128(FIX::UTCTIMESTAMP(5, 15, 30, 5, 8, 2015));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventEndDate_128);
          ComplexEventDates_NoComplexEventDates_128.insert(ComplexEventEndDate_128.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_128(FIX::UTCTIMESTAMP(23, 34, 44, 1, 4, 2009));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventStartDate_128);
          ComplexEventDates_NoComplexEventDates_128.insert(ComplexEventStartDate_128.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_128);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_255;
            FIX::ComplexEventEndTime ComplexEventEndTime_255(FIX::UTCTIMEONLY(16, 10, 5));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventEndTime_255);
            ComplexEventTimes_NoComplexEventTimes_255.insert(ComplexEventEndTime_255.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_255(FIX::UTCTIMEONLY(9, 36, 56));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventStartTime_255);
            ComplexEventTimes_NoComplexEventTimes_255.insert(ComplexEventStartTime_255.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_255);

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_129;
          FIX::ComplexEventEndDate ComplexEventEndDate_129(FIX::UTCTIMESTAMP(4, 7, 23, 15, 2, 2015));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventEndDate_129);
          ComplexEventDates_NoComplexEventDates_129.insert(ComplexEventEndDate_129.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_129(FIX::UTCTIMESTAMP(11, 56, 36, 9, 6, 2000));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventStartDate_129);
          ComplexEventDates_NoComplexEventDates_129.insert(ComplexEventStartDate_129.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_129);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_256;
            FIX::ComplexEventEndTime ComplexEventEndTime_256(FIX::UTCTIMEONLY(11, 41, 45));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventEndTime_256);
            ComplexEventTimes_NoComplexEventTimes_256.insert(ComplexEventEndTime_256.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_256(FIX::UTCTIMEONLY(8, 23, 40));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventStartTime_256);
            ComplexEventTimes_NoComplexEventTimes_256.insert(ComplexEventStartTime_256.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_256);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_257;
            FIX::ComplexEventEndTime ComplexEventEndTime_257(FIX::UTCTIMEONLY(3, 42, 41));
            noComplexEventTimes_0_1_0_1_4_1.set(ComplexEventEndTime_257);
            ComplexEventTimes_NoComplexEventTimes_257.insert(ComplexEventEndTime_257.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_257(FIX::UTCTIMEONLY(3, 17, 27));
            noComplexEventTimes_0_1_0_1_4_1.set(ComplexEventStartTime_257);
            ComplexEventTimes_NoComplexEventTimes_257.insert(ComplexEventStartTime_257.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_257);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_258;
            FIX::ComplexEventEndTime ComplexEventEndTime_258(FIX::UTCTIMEONLY(1, 34, 47));
            noComplexEventTimes_0_1_0_1_4_2.set(ComplexEventEndTime_258);
            ComplexEventTimes_NoComplexEventTimes_258.insert(ComplexEventEndTime_258.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_258(FIX::UTCTIMEONLY(16, 2, 10));
            noComplexEventTimes_0_1_0_1_4_2.set(ComplexEventStartTime_258);
            ComplexEventTimes_NoComplexEventTimes_258.insert(ComplexEventStartTime_258.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_258);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_2);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_130;
          FIX::ComplexEventEndDate ComplexEventEndDate_130(FIX::UTCTIMESTAMP(2, 47, 44, 19, 12, 2009));
          noComplexEventDates_0_1_0_3_2.set(ComplexEventEndDate_130);
          ComplexEventDates_NoComplexEventDates_130.insert(ComplexEventEndDate_130.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_130(FIX::UTCTIMESTAMP(2, 32, 10, 27, 9, 2003));
          noComplexEventDates_0_1_0_3_2.set(ComplexEventStartDate_130);
          ComplexEventDates_NoComplexEventDates_130.insert(ComplexEventStartDate_130.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_130);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_259;
            FIX::ComplexEventEndTime ComplexEventEndTime_259(FIX::UTCTIMEONLY(0, 9, 49));
            noComplexEventTimes_0_1_0_2_4_0.set(ComplexEventEndTime_259);
            ComplexEventTimes_NoComplexEventTimes_259.insert(ComplexEventEndTime_259.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_259(FIX::UTCTIMEONLY(16, 58, 11));
            noComplexEventTimes_0_1_0_2_4_0.set(ComplexEventStartTime_259);
            ComplexEventTimes_NoComplexEventTimes_259.insert(ComplexEventStartTime_259.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_259);

            noComplexEventDates_0_1_0_3_2.addGroup(noComplexEventTimes_0_1_0_2_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_67;
        FIX::ComplexEventCondition ComplexEventCondition_67(1);
        noComplexEvents_0_1_2_1.set(ComplexEventCondition_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventCondition_67.getString());
        FIX::ComplexEventPrice ComplexEventPrice_67;
        ComplexEventPrice_67.setString("13342891");
        noComplexEvents_0_1_2_1.set(ComplexEventPrice_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventPrice_67.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_67(3);
        noComplexEvents_0_1_2_1.set(ComplexEventPriceBoundaryMethod_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventPriceBoundaryMethod_67.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_67;
        ComplexEventPriceBoundaryPrecision_67.setString("96.430000");
        noComplexEvents_0_1_2_1.set(ComplexEventPriceBoundaryPrecision_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventPriceBoundaryPrecision_67.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_67(1);
        noComplexEvents_0_1_2_1.set(ComplexEventPriceTimeType_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventPriceTimeType_67.getString());
        FIX::ComplexEventType ComplexEventType_67(3);
        noComplexEvents_0_1_2_1.set(ComplexEventType_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexEventType_67.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_67;
        ComplexOptPayoutAmount_67.setString("16711048");
        noComplexEvents_0_1_2_1.set(ComplexOptPayoutAmount_67);
        ComplexEvents_NoComplexEvents_67.insert(ComplexOptPayoutAmount_67.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_67);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_131;
          FIX::ComplexEventEndDate ComplexEventEndDate_131(FIX::UTCTIMESTAMP(23, 50, 13, 19, 6, 2010));
          noComplexEventDates_0_1_1_3_0.set(ComplexEventEndDate_131);
          ComplexEventDates_NoComplexEventDates_131.insert(ComplexEventEndDate_131.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_131(FIX::UTCTIMESTAMP(7, 28, 45, 10, 1, 2012));
          noComplexEventDates_0_1_1_3_0.set(ComplexEventStartDate_131);
          ComplexEventDates_NoComplexEventDates_131.insert(ComplexEventStartDate_131.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_131);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_260;
            FIX::ComplexEventEndTime ComplexEventEndTime_260(FIX::UTCTIMEONLY(7, 54, 41));
            noComplexEventTimes_0_1_1_0_4_0.set(ComplexEventEndTime_260);
            ComplexEventTimes_NoComplexEventTimes_260.insert(ComplexEventEndTime_260.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_260(FIX::UTCTIMEONLY(23, 39, 9));
            noComplexEventTimes_0_1_1_0_4_0.set(ComplexEventStartTime_260);
            ComplexEventTimes_NoComplexEventTimes_260.insert(ComplexEventStartTime_260.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_260);

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_261;
            FIX::ComplexEventEndTime ComplexEventEndTime_261(FIX::UTCTIMEONLY(19, 39, 59));
            noComplexEventTimes_0_1_1_0_4_1.set(ComplexEventEndTime_261);
            ComplexEventTimes_NoComplexEventTimes_261.insert(ComplexEventEndTime_261.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_261(FIX::UTCTIMEONLY(12, 48, 54));
            noComplexEventTimes_0_1_1_0_4_1.set(ComplexEventStartTime_261);
            ComplexEventTimes_NoComplexEventTimes_261.insert(ComplexEventStartTime_261.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_261);

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_262;
            FIX::ComplexEventEndTime ComplexEventEndTime_262(FIX::UTCTIMEONLY(12, 36, 38));
            noComplexEventTimes_0_1_1_0_4_2.set(ComplexEventEndTime_262);
            ComplexEventTimes_NoComplexEventTimes_262.insert(ComplexEventEndTime_262.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_262(FIX::UTCTIMEONLY(17, 34, 22));
            noComplexEventTimes_0_1_1_0_4_2.set(ComplexEventStartTime_262);
            ComplexEventTimes_NoComplexEventTimes_262.insert(ComplexEventStartTime_262.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_262);

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_2);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_132;
          FIX::ComplexEventEndDate ComplexEventEndDate_132(FIX::UTCTIMESTAMP(14, 8, 19, 14, 7, 2013));
          noComplexEventDates_0_1_1_3_1.set(ComplexEventEndDate_132);
          ComplexEventDates_NoComplexEventDates_132.insert(ComplexEventEndDate_132.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_132(FIX::UTCTIMESTAMP(17, 7, 28, 24, 11, 2012));
          noComplexEventDates_0_1_1_3_1.set(ComplexEventStartDate_132);
          ComplexEventDates_NoComplexEventDates_132.insert(ComplexEventStartDate_132.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_132);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_263;
            FIX::ComplexEventEndTime ComplexEventEndTime_263(FIX::UTCTIMEONLY(7, 28, 49));
            noComplexEventTimes_0_1_1_1_4_0.set(ComplexEventEndTime_263);
            ComplexEventTimes_NoComplexEventTimes_263.insert(ComplexEventEndTime_263.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_263(FIX::UTCTIMEONLY(17, 37, 5));
            noComplexEventTimes_0_1_1_1_4_0.set(ComplexEventStartTime_263);
            ComplexEventTimes_NoComplexEventTimes_263.insert(ComplexEventStartTime_263.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_263);

            noComplexEventDates_0_1_1_3_1.addGroup(noComplexEventTimes_0_1_1_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_264;
            FIX::ComplexEventEndTime ComplexEventEndTime_264(FIX::UTCTIMEONLY(17, 41, 12));
            noComplexEventTimes_0_1_1_1_4_1.set(ComplexEventEndTime_264);
            ComplexEventTimes_NoComplexEventTimes_264.insert(ComplexEventEndTime_264.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_264(FIX::UTCTIMEONLY(23, 38, 59));
            noComplexEventTimes_0_1_1_1_4_1.set(ComplexEventStartTime_264);
            ComplexEventTimes_NoComplexEventTimes_264.insert(ComplexEventStartTime_264.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_264);

            noComplexEventDates_0_1_1_3_1.addGroup(noComplexEventTimes_0_1_1_1_4_1);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_133;
          FIX::ComplexEventEndDate ComplexEventEndDate_133(FIX::UTCTIMESTAMP(4, 59, 31, 10, 10, 2000));
          noComplexEventDates_0_1_1_3_2.set(ComplexEventEndDate_133);
          ComplexEventDates_NoComplexEventDates_133.insert(ComplexEventEndDate_133.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_133(FIX::UTCTIMESTAMP(15, 36, 34, 27, 11, 2016));
          noComplexEventDates_0_1_1_3_2.set(ComplexEventStartDate_133);
          ComplexEventDates_NoComplexEventDates_133.insert(ComplexEventStartDate_133.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_133);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_265;
            FIX::ComplexEventEndTime ComplexEventEndTime_265(FIX::UTCTIMEONLY(17, 49, 53));
            noComplexEventTimes_0_1_1_2_4_0.set(ComplexEventEndTime_265);
            ComplexEventTimes_NoComplexEventTimes_265.insert(ComplexEventEndTime_265.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_265(FIX::UTCTIMEONLY(22, 23, 40));
            noComplexEventTimes_0_1_1_2_4_0.set(ComplexEventStartTime_265);
            ComplexEventTimes_NoComplexEventTimes_265.insert(ComplexEventStartTime_265.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_265);

            noComplexEventDates_0_1_1_3_2.addGroup(noComplexEventTimes_0_1_1_2_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_266;
            FIX::ComplexEventEndTime ComplexEventEndTime_266(FIX::UTCTIMEONLY(8, 14, 44));
            noComplexEventTimes_0_1_1_2_4_1.set(ComplexEventEndTime_266);
            ComplexEventTimes_NoComplexEventTimes_266.insert(ComplexEventEndTime_266.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_266(FIX::UTCTIMEONLY(1, 14, 48));
            noComplexEventTimes_0_1_1_2_4_1.set(ComplexEventStartTime_266);
            ComplexEventTimes_NoComplexEventTimes_266.insert(ComplexEventStartTime_266.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_266);

            noComplexEventDates_0_1_1_3_2.addGroup(noComplexEventTimes_0_1_1_2_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_2_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_267;
            FIX::ComplexEventEndTime ComplexEventEndTime_267(FIX::UTCTIMEONLY(6, 47, 0));
            noComplexEventTimes_0_1_1_2_4_2.set(ComplexEventEndTime_267);
            ComplexEventTimes_NoComplexEventTimes_267.insert(ComplexEventEndTime_267.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_267(FIX::UTCTIMEONLY(12, 29, 26));
            noComplexEventTimes_0_1_1_2_4_2.set(ComplexEventStartTime_267);
            ComplexEventTimes_NoComplexEventTimes_267.insert(ComplexEventStartTime_267.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_267);

            noComplexEventDates_0_1_1_3_2.addGroup(noComplexEventTimes_0_1_1_2_4_2);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_68;
        FIX::ComplexEventCondition ComplexEventCondition_68(2);
        noComplexEvents_0_1_2_2.set(ComplexEventCondition_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventCondition_68.getString());
        FIX::ComplexEventPrice ComplexEventPrice_68;
        ComplexEventPrice_68.setString("17482746");
        noComplexEvents_0_1_2_2.set(ComplexEventPrice_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventPrice_68.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_68(1);
        noComplexEvents_0_1_2_2.set(ComplexEventPriceBoundaryMethod_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventPriceBoundaryMethod_68.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_68;
        ComplexEventPriceBoundaryPrecision_68.setString("48.020000");
        noComplexEvents_0_1_2_2.set(ComplexEventPriceBoundaryPrecision_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventPriceBoundaryPrecision_68.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_68(2);
        noComplexEvents_0_1_2_2.set(ComplexEventPriceTimeType_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventPriceTimeType_68.getString());
        FIX::ComplexEventType ComplexEventType_68(3);
        noComplexEvents_0_1_2_2.set(ComplexEventType_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexEventType_68.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_68;
        ComplexOptPayoutAmount_68.setString("10025261");
        noComplexEvents_0_1_2_2.set(ComplexOptPayoutAmount_68);
        ComplexEvents_NoComplexEvents_68.insert(ComplexOptPayoutAmount_68.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_68);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_134;
          FIX::ComplexEventEndDate ComplexEventEndDate_134(FIX::UTCTIMESTAMP(16, 9, 10, 14, 9, 2001));
          noComplexEventDates_0_1_2_3_0.set(ComplexEventEndDate_134);
          ComplexEventDates_NoComplexEventDates_134.insert(ComplexEventEndDate_134.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_134(FIX::UTCTIMESTAMP(17, 57, 10, 26, 3, 2000));
          noComplexEventDates_0_1_2_3_0.set(ComplexEventStartDate_134);
          ComplexEventDates_NoComplexEventDates_134.insert(ComplexEventStartDate_134.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_134);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_268;
            FIX::ComplexEventEndTime ComplexEventEndTime_268(FIX::UTCTIMEONLY(10, 9, 43));
            noComplexEventTimes_0_1_2_0_4_0.set(ComplexEventEndTime_268);
            ComplexEventTimes_NoComplexEventTimes_268.insert(ComplexEventEndTime_268.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_268(FIX::UTCTIMEONLY(21, 4, 40));
            noComplexEventTimes_0_1_2_0_4_0.set(ComplexEventStartTime_268);
            ComplexEventTimes_NoComplexEventTimes_268.insert(ComplexEventStartTime_268.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_268);

            noComplexEventDates_0_1_2_3_0.addGroup(noComplexEventTimes_0_1_2_0_4_0);
          }
          noComplexEvents_0_1_2_2.addGroup(noComplexEventDates_0_1_2_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_69;
        FIX::EventDate EventDate_69("LOCALMKTDATE_86031361");
        noEvents_0_1_2_0.set(EventDate_69);
        EvntGrp_NoEvents_69.insert(EventDate_69.getString());
        FIX::EventPx EventPx_69;
        EventPx_69.setString("8952526");
        noEvents_0_1_2_0.set(EventPx_69);
        EvntGrp_NoEvents_69.insert(EventPx_69.getString());
        FIX::EventText EventText_69("STRING_2131166259");
        noEvents_0_1_2_0.set(EventText_69);
        EvntGrp_NoEvents_69.insert(EventText_69.getString());
        FIX::EventTime EventTime_69(FIX::UTCTIMESTAMP(22, 54, 45, 21, 11, 2000));
        noEvents_0_1_2_0.set(EventTime_69);
        EvntGrp_NoEvents_69.insert(EventTime_69.getString());
        FIX::EventType EventType_69(17);
        noEvents_0_1_2_0.set(EventType_69);
        EvntGrp_NoEvents_69.insert(EventType_69.getString());
        all_values.push_back(EvntGrp_NoEvents_69);

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_70;
        FIX::EventDate EventDate_70("LOCALMKTDATE_2090349300");
        noEvents_0_1_2_1.set(EventDate_70);
        EvntGrp_NoEvents_70.insert(EventDate_70.getString());
        FIX::EventPx EventPx_70;
        EventPx_70.setString("5083168");
        noEvents_0_1_2_1.set(EventPx_70);
        EvntGrp_NoEvents_70.insert(EventPx_70.getString());
        FIX::EventText EventText_70("STRING_1522072699");
        noEvents_0_1_2_1.set(EventText_70);
        EvntGrp_NoEvents_70.insert(EventText_70.getString());
        FIX::EventTime EventTime_70(FIX::UTCTIMESTAMP(4, 8, 28, 6, 11, 2004));
        noEvents_0_1_2_1.set(EventTime_70);
        EvntGrp_NoEvents_70.insert(EventTime_70.getString());
        FIX::EventType EventType_70(17);
        noEvents_0_1_2_1.set(EventType_70);
        EvntGrp_NoEvents_70.insert(EventType_70.getString());
        all_values.push_back(EvntGrp_NoEvents_70);

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_75;
        FIX::InstrumentPartyID InstrumentPartyID_75("STRING_708970434");
        noInstrumentParties_0_1_2_0.set(InstrumentPartyID_75);
        InstrumentParties_NoInstrumentParties_75.insert(InstrumentPartyID_75.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_75('1');
        noInstrumentParties_0_1_2_0.set(InstrumentPartyIDSource_75);
        InstrumentParties_NoInstrumentParties_75.insert(InstrumentPartyIDSource_75.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_75(803882980);
        noInstrumentParties_0_1_2_0.set(InstrumentPartyRole_75);
        InstrumentParties_NoInstrumentParties_75.insert(InstrumentPartyRole_75.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_75);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160;
          FIX::InstrumentPartySubID InstrumentPartySubID_160("STRING_1775021842");
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubID_160);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160.insert(InstrumentPartySubID_160.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_160(1289123325);
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubIDType_160);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160.insert(InstrumentPartySubIDType_160.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_160);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_76;
        FIX::InstrumentPartyID InstrumentPartyID_76("STRING_1373453689");
        noInstrumentParties_0_1_2_1.set(InstrumentPartyID_76);
        InstrumentParties_NoInstrumentParties_76.insert(InstrumentPartyID_76.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_76('1');
        noInstrumentParties_0_1_2_1.set(InstrumentPartyIDSource_76);
        InstrumentParties_NoInstrumentParties_76.insert(InstrumentPartyIDSource_76.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_76(1375154686);
        noInstrumentParties_0_1_2_1.set(InstrumentPartyRole_76);
        InstrumentParties_NoInstrumentParties_76.insert(InstrumentPartyRole_76.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_76);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161;
          FIX::InstrumentPartySubID InstrumentPartySubID_161("STRING_1572342263");
          noInstrumentPartySubIDs_0_1_1_3_0.set(InstrumentPartySubID_161);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161.insert(InstrumentPartySubID_161.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_161(2127586807);
          noInstrumentPartySubIDs_0_1_1_3_0.set(InstrumentPartySubIDType_161);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161.insert(InstrumentPartySubIDType_161.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_161);

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162;
          FIX::InstrumentPartySubID InstrumentPartySubID_162("STRING_1152095772");
          noInstrumentPartySubIDs_0_1_1_3_1.set(InstrumentPartySubID_162);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162.insert(InstrumentPartySubID_162.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_162(411067389);
          noInstrumentPartySubIDs_0_1_1_3_1.set(InstrumentPartySubIDType_162);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162.insert(InstrumentPartySubIDType_162.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_162);

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163;
          FIX::InstrumentPartySubID InstrumentPartySubID_163("STRING_1335612224");
          noInstrumentPartySubIDs_0_1_1_3_2.set(InstrumentPartySubID_163);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163.insert(InstrumentPartySubID_163.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_163(1801113646);
          noInstrumentPartySubIDs_0_1_1_3_2.set(InstrumentPartySubIDType_163);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163.insert(InstrumentPartySubIDType_163.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_163);

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_77;
        FIX::InstrumentPartyID InstrumentPartyID_77("STRING_1732722428");
        noInstrumentParties_0_1_2_2.set(InstrumentPartyID_77);
        InstrumentParties_NoInstrumentParties_77.insert(InstrumentPartyID_77.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_77('5');
        noInstrumentParties_0_1_2_2.set(InstrumentPartyIDSource_77);
        InstrumentParties_NoInstrumentParties_77.insert(InstrumentPartyIDSource_77.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_77(1849745422);
        noInstrumentParties_0_1_2_2.set(InstrumentPartyRole_77);
        InstrumentParties_NoInstrumentParties_77.insert(InstrumentPartyRole_77.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_77);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164;
          FIX::InstrumentPartySubID InstrumentPartySubID_164("STRING_1088521790");
          noInstrumentPartySubIDs_0_1_2_3_0.set(InstrumentPartySubID_164);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164.insert(InstrumentPartySubID_164.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_164(1224334473);
          noInstrumentPartySubIDs_0_1_2_3_0.set(InstrumentPartySubIDType_164);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164.insert(InstrumentPartySubIDType_164.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_164);

          noInstrumentParties_0_1_2_2.addGroup(noInstrumentPartySubIDs_0_1_2_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_76;
        FIX::SecurityAltID SecurityAltID_76("STRING_1443523914");
        noSecurityAltID_0_1_2_0.set(SecurityAltID_76);
        SecAltIDGrp_NoSecurityAltID_76.insert(SecurityAltID_76.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_76("STRING_107977713");
        noSecurityAltID_0_1_2_0.set(SecurityAltIDSource_76);
        SecAltIDGrp_NoSecurityAltID_76.insert(SecurityAltIDSource_76.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_76);

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_77;
        FIX::SecurityAltID SecurityAltID_77("STRING_1163974367");
        noSecurityAltID_0_1_2_1.set(SecurityAltID_77);
        SecAltIDGrp_NoSecurityAltID_77.insert(SecurityAltID_77.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_77("STRING_27816212");
        noSecurityAltID_0_1_2_1.set(SecurityAltIDSource_77);
        SecAltIDGrp_NoSecurityAltID_77.insert(SecurityAltIDSource_77.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_77);

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_70;
      FIX::SecurityXML SecurityXML_71("XMLDATA_1236962815");
      noQuoteEntries_0_1_1.set(SecurityXML_71);
      FIX::SecurityXMLLen SecurityXMLLen_35(820734872);
      noQuoteEntries_0_1_1.set(SecurityXMLLen_35);
      FIX::SecurityXMLSchema SecurityXMLSchema_35("STRING_1250702808");
      noQuoteEntries_0_1_1.set(SecurityXMLSchema_35);
      SecurityXML_70.insert(SecurityXMLSchema_35.getString());
      all_values.push_back(SecurityXML_70);

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_2;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_2;
      FIX::BidForwardPoints BidForwardPoints_2;
      BidForwardPoints_2.setString("2742851");
      noQuoteEntries_0_1_2.set(BidForwardPoints_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidForwardPoints_2.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_2;
      BidForwardPoints2_2.setString("15297053");
      noQuoteEntries_0_1_2.set(BidForwardPoints2_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidForwardPoints2_2.getString());
      FIX::BidPx BidPx_2;
      BidPx_2.setString("4912711");
      noQuoteEntries_0_1_2.set(BidPx_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidPx_2.getString());
      FIX::BidSize BidSize_2;
      BidSize_2.setString("10781681");
      noQuoteEntries_0_1_2.set(BidSize_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidSize_2.getString());
      FIX::BidSpotRate BidSpotRate_2;
      BidSpotRate_2.setString("16852924");
      noQuoteEntries_0_1_2.set(BidSpotRate_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidSpotRate_2.getString());
      FIX::BidYield BidYield_2;
      BidYield_2.setString("93.190000");
      noQuoteEntries_0_1_2.set(BidYield_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(BidYield_2.getString());
      FIX::BookingType BookingType_7(0);
      noQuoteEntries_0_1_2.set(BookingType_7);
      QuotEntryGrp_NoQuoteEntries_2.insert(BookingType_7.getString());
      FIX::Currency Currency_31("CAN");
      noQuoteEntries_0_1_2.set(Currency_31);
      QuotEntryGrp_NoQuoteEntries_2.insert(Currency_31.getString());
      FIX::MidPx MidPx_2;
      MidPx_2.setString("15949624");
      noQuoteEntries_0_1_2.set(MidPx_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(MidPx_2.getString());
      FIX::MidYield MidYield_2;
      MidYield_2.setString("51.910000");
      noQuoteEntries_0_1_2.set(MidYield_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(MidYield_2.getString());
      FIX::OfferForwardPoints OfferForwardPoints_2;
      OfferForwardPoints_2.setString("11323275");
      noQuoteEntries_0_1_2.set(OfferForwardPoints_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferForwardPoints_2.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_2;
      OfferForwardPoints2_2.setString("15750656");
      noQuoteEntries_0_1_2.set(OfferForwardPoints2_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferForwardPoints2_2.getString());
      FIX::OfferPx OfferPx_2;
      OfferPx_2.setString("370973");
      noQuoteEntries_0_1_2.set(OfferPx_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferPx_2.getString());
      FIX::OfferSize OfferSize_2;
      OfferSize_2.setString("15433949");
      noQuoteEntries_0_1_2.set(OfferSize_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferSize_2.getString());
      FIX::OfferSpotRate OfferSpotRate_2;
      OfferSpotRate_2.setString("7631942");
      noQuoteEntries_0_1_2.set(OfferSpotRate_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferSpotRate_2.getString());
      FIX::OfferYield OfferYield_2;
      OfferYield_2.setString("9.610000");
      noQuoteEntries_0_1_2.set(OfferYield_2);
      QuotEntryGrp_NoQuoteEntries_2.insert(OfferYield_2.getString());
      FIX::OrdType OrdType_22('C');
      noQuoteEntries_0_1_2.set(OrdType_22);
      QuotEntryGrp_NoQuoteEntries_2.insert(OrdType_22.getString());
      FIX::OrderCapacity OrderCapacity_9('P');
      noQuoteEntries_0_1_2.set(OrderCapacity_9);
      QuotEntryGrp_NoQuoteEntries_2.insert(OrderCapacity_9.getString());
      FIX::OrderQty2 OrderQty2_3;
      OrderQty2_3.setString("15404727");
      noQuoteEntries_0_1_2.set(OrderQty2_3);
      QuotEntryGrp_NoQuoteEntries_2.insert(OrderQty2_3.getString());
      FIX::OrderRestrictions OrderRestrictions_7("MULTIPLECHARVALUE_E");
      noQuoteEntries_0_1_2.set(OrderRestrictions_7);
      QuotEntryGrp_NoQuoteEntries_2.insert(OrderRestrictions_7.getString());
      FIX::QuoteEntryID QuoteEntryID_4("STRING_284437245");
      noQuoteEntries_0_1_2.set(QuoteEntryID_4);
      QuotEntryGrp_NoQuoteEntries_2.insert(QuoteEntryID_4.getString());
      FIX::SettlDate SettlDate_20("LOCALMKTDATE_617323560");
      noQuoteEntries_0_1_2.set(SettlDate_20);
      QuotEntryGrp_NoQuoteEntries_2.insert(SettlDate_20.getString());
      FIX::SettlDate2 SettlDate2_3("LOCALMKTDATE_1434888167");
      noQuoteEntries_0_1_2.set(SettlDate2_3);
      QuotEntryGrp_NoQuoteEntries_2.insert(SettlDate2_3.getString());
      FIX::TradingSessionID TradingSessionID_25("STRING_4");
      noQuoteEntries_0_1_2.set(TradingSessionID_25);
      QuotEntryGrp_NoQuoteEntries_2.insert(TradingSessionID_25.getString());
      FIX::TradingSessionSubID TradingSessionSubID_25("STRING_5");
      noQuoteEntries_0_1_2.set(TradingSessionSubID_25);
      QuotEntryGrp_NoQuoteEntries_2.insert(TradingSessionSubID_25.getString());
      FIX::TransactTime TransactTime_28(FIX::UTCTIMESTAMP(11, 28, 58, 15, 1, 2011));
      noQuoteEntries_0_1_2.set(TransactTime_28);
      QuotEntryGrp_NoQuoteEntries_2.insert(TransactTime_28.getString());
      FIX::ValidUntilTime ValidUntilTime_3(FIX::UTCTIMESTAMP(21, 44, 15, 14, 2, 2012));
      noQuoteEntries_0_1_2.set(ValidUntilTime_3);
      QuotEntryGrp_NoQuoteEntries_2.insert(ValidUntilTime_3.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_2);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_2_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_66;
        FIX::EncodedLegIssuer EncodedLegIssuer_66("DATA_2135891912");
        noLegs_0_2_2_0.set(EncodedLegIssuer_66);
        InstrumentLeg_66.insert(EncodedLegIssuer_66.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_66(13906236);
        noLegs_0_2_2_0.set(EncodedLegIssuerLen_66);
        InstrumentLeg_66.insert(EncodedLegIssuerLen_66.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_66("DATA_262102290");
        noLegs_0_2_2_0.set(EncodedLegSecurityDesc_66);
        InstrumentLeg_66.insert(EncodedLegSecurityDesc_66.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_66(25505580);
        noLegs_0_2_2_0.set(EncodedLegSecurityDescLen_66);
        InstrumentLeg_66.insert(EncodedLegSecurityDescLen_66.getString());
        FIX::LegCFICode LegCFICode_66("STRING_1557301212");
        noLegs_0_2_2_0.set(LegCFICode_66);
        InstrumentLeg_66.insert(LegCFICode_66.getString());
        FIX::LegContractMultiplier LegContractMultiplier_66;
        LegContractMultiplier_66.setString("10252965");
        noLegs_0_2_2_0.set(LegContractMultiplier_66);
        InstrumentLeg_66.insert(LegContractMultiplier_66.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_66(1863716541);
        noLegs_0_2_2_0.set(LegContractMultiplierUnit_66);
        InstrumentLeg_66.insert(LegContractMultiplierUnit_66.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_66("MONTHYEAR_538451319");
        noLegs_0_2_2_0.set(LegContractSettlMonth_66);
        InstrumentLeg_66.insert(LegContractSettlMonth_66.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_66("COUNTRY_221211957");
        noLegs_0_2_2_0.set(LegCountryOfIssue_66);
        InstrumentLeg_66.insert(LegCountryOfIssue_66.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_66("LOCALMKTDATE_1256705629");
        noLegs_0_2_2_0.set(LegCouponPaymentDate_66);
        InstrumentLeg_66.insert(LegCouponPaymentDate_66.getString());
        FIX::LegCouponRate LegCouponRate_66;
        LegCouponRate_66.setString("95.070000");
        noLegs_0_2_2_0.set(LegCouponRate_66);
        InstrumentLeg_66.insert(LegCouponRate_66.getString());
        FIX::LegCreditRating LegCreditRating_66("STRING_505649202");
        noLegs_0_2_2_0.set(LegCreditRating_66);
        InstrumentLeg_66.insert(LegCreditRating_66.getString());
        FIX::LegCurrency LegCurrency_66("JPY");
        noLegs_0_2_2_0.set(LegCurrency_66);
        InstrumentLeg_66.insert(LegCurrency_66.getString());
        FIX::LegDatedDate LegDatedDate_66("LOCALMKTDATE_86126713");
        noLegs_0_2_2_0.set(LegDatedDate_66);
        InstrumentLeg_66.insert(LegDatedDate_66.getString());
        FIX::LegExerciseStyle LegExerciseStyle_66(451846815);
        noLegs_0_2_2_0.set(LegExerciseStyle_66);
        InstrumentLeg_66.insert(LegExerciseStyle_66.getString());
        FIX::LegFactor LegFactor_66;
        LegFactor_66.setString("9339729");
        noLegs_0_2_2_0.set(LegFactor_66);
        InstrumentLeg_66.insert(LegFactor_66.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_66(1841904084);
        noLegs_0_2_2_0.set(LegFlowScheduleType_66);
        InstrumentLeg_66.insert(LegFlowScheduleType_66.getString());
        FIX::LegInstrRegistry LegInstrRegistry_66("STRING_266627255");
        noLegs_0_2_2_0.set(LegInstrRegistry_66);
        InstrumentLeg_66.insert(LegInstrRegistry_66.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_66("LOCALMKTDATE_58603023");
        noLegs_0_2_2_0.set(LegInterestAccrualDate_66);
        InstrumentLeg_66.insert(LegInterestAccrualDate_66.getString());
        FIX::LegIssueDate LegIssueDate_66("LOCALMKTDATE_553416967");
        noLegs_0_2_2_0.set(LegIssueDate_66);
        InstrumentLeg_66.insert(LegIssueDate_66.getString());
        FIX::LegIssuer LegIssuer_66("STRING_355692828");
        noLegs_0_2_2_0.set(LegIssuer_66);
        InstrumentLeg_66.insert(LegIssuer_66.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_66("STRING_712938440");
        noLegs_0_2_2_0.set(LegLocaleOfIssue_66);
        InstrumentLeg_66.insert(LegLocaleOfIssue_66.getString());
        FIX::LegMaturityDate LegMaturityDate_66("LOCALMKTDATE_1903684623");
        noLegs_0_2_2_0.set(LegMaturityDate_66);
        InstrumentLeg_66.insert(LegMaturityDate_66.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_66("MONTHYEAR_1522926513");
        noLegs_0_2_2_0.set(LegMaturityMonthYear_66);
        InstrumentLeg_66.insert(LegMaturityMonthYear_66.getString());
        FIX::LegMaturityTime LegMaturityTime_66("TZTIMEONLY_905082665");
        noLegs_0_2_2_0.set(LegMaturityTime_66);
        InstrumentLeg_66.insert(LegMaturityTime_66.getString());
        FIX::LegOptAttribute LegOptAttribute_66('1');
        noLegs_0_2_2_0.set(LegOptAttribute_66);
        InstrumentLeg_66.insert(LegOptAttribute_66.getString());
        FIX::LegOptionRatio LegOptionRatio_66;
        LegOptionRatio_66.setString("7624843");
        noLegs_0_2_2_0.set(LegOptionRatio_66);
        InstrumentLeg_66.insert(LegOptionRatio_66.getString());
        FIX::LegPool LegPool_66("STRING_2008489386");
        noLegs_0_2_2_0.set(LegPool_66);
        InstrumentLeg_66.insert(LegPool_66.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_66("STRING_106856601");
        noLegs_0_2_2_0.set(LegPriceUnitOfMeasure_66);
        InstrumentLeg_66.insert(LegPriceUnitOfMeasure_66.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_66;
        LegPriceUnitOfMeasureQty_66.setString("15970046");
        noLegs_0_2_2_0.set(LegPriceUnitOfMeasureQty_66);
        InstrumentLeg_66.insert(LegPriceUnitOfMeasureQty_66.getString());
        FIX::LegProduct LegProduct_66(1996897651);
        noLegs_0_2_2_0.set(LegProduct_66);
        InstrumentLeg_66.insert(LegProduct_66.getString());
        FIX::LegPutOrCall LegPutOrCall_66(120762837);
        noLegs_0_2_2_0.set(LegPutOrCall_66);
        InstrumentLeg_66.insert(LegPutOrCall_66.getString());
        FIX::LegRatioQty LegRatioQty_66;
        LegRatioQty_66.setString("18591069");
        noLegs_0_2_2_0.set(LegRatioQty_66);
        InstrumentLeg_66.insert(LegRatioQty_66.getString());
        FIX::LegRedemptionDate LegRedemptionDate_66("LOCALMKTDATE_2022403231");
        noLegs_0_2_2_0.set(LegRedemptionDate_66);
        InstrumentLeg_66.insert(LegRedemptionDate_66.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_66("STRING_1678064049");
        noLegs_0_2_2_0.set(LegRepoCollateralSecurityType_66);
        InstrumentLeg_66.insert(LegRepoCollateralSecurityType_66.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_66;
        LegRepurchaseRate_66.setString("97.860000");
        noLegs_0_2_2_0.set(LegRepurchaseRate_66);
        InstrumentLeg_66.insert(LegRepurchaseRate_66.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_66(1738636124);
        noLegs_0_2_2_0.set(LegRepurchaseTerm_66);
        InstrumentLeg_66.insert(LegRepurchaseTerm_66.getString());
        FIX::LegSecurityDesc LegSecurityDesc_66("STRING_69031721");
        noLegs_0_2_2_0.set(LegSecurityDesc_66);
        InstrumentLeg_66.insert(LegSecurityDesc_66.getString());
        FIX::LegSecurityExchange LegSecurityExchange_66("EXCHANGE_958131743");
        noLegs_0_2_2_0.set(LegSecurityExchange_66);
        InstrumentLeg_66.insert(LegSecurityExchange_66.getString());
        FIX::LegSecurityID LegSecurityID_66("STRING_847858105");
        noLegs_0_2_2_0.set(LegSecurityID_66);
        InstrumentLeg_66.insert(LegSecurityID_66.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_66("STRING_1264221228");
        noLegs_0_2_2_0.set(LegSecurityIDSource_66);
        InstrumentLeg_66.insert(LegSecurityIDSource_66.getString());
        FIX::LegSecuritySubType LegSecuritySubType_66("STRING_1463780945");
        noLegs_0_2_2_0.set(LegSecuritySubType_66);
        InstrumentLeg_66.insert(LegSecuritySubType_66.getString());
        FIX::LegSecurityType LegSecurityType_66("STRING_574403647");
        noLegs_0_2_2_0.set(LegSecurityType_66);
        InstrumentLeg_66.insert(LegSecurityType_66.getString());
        FIX::LegSide LegSide_66('1');
        noLegs_0_2_2_0.set(LegSide_66);
        InstrumentLeg_66.insert(LegSide_66.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_66("STRING_1549907658");
        noLegs_0_2_2_0.set(LegStateOrProvinceOfIssue_66);
        InstrumentLeg_66.insert(LegStateOrProvinceOfIssue_66.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_66("JPY");
        noLegs_0_2_2_0.set(LegStrikeCurrency_66);
        InstrumentLeg_66.insert(LegStrikeCurrency_66.getString());
        FIX::LegStrikePrice LegStrikePrice_66;
        LegStrikePrice_66.setString("12443280");
        noLegs_0_2_2_0.set(LegStrikePrice_66);
        InstrumentLeg_66.insert(LegStrikePrice_66.getString());
        FIX::LegSymbol LegSymbol_66("STRING_1292877717");
        noLegs_0_2_2_0.set(LegSymbol_66);
        InstrumentLeg_66.insert(LegSymbol_66.getString());
        FIX::LegSymbolSfx LegSymbolSfx_66("STRING_591907543");
        noLegs_0_2_2_0.set(LegSymbolSfx_66);
        InstrumentLeg_66.insert(LegSymbolSfx_66.getString());
        FIX::LegTimeUnit LegTimeUnit_66("STRING_1797745061");
        noLegs_0_2_2_0.set(LegTimeUnit_66);
        InstrumentLeg_66.insert(LegTimeUnit_66.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_66("STRING_1648570545");
        noLegs_0_2_2_0.set(LegUnitOfMeasure_66);
        InstrumentLeg_66.insert(LegUnitOfMeasure_66.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_66;
        LegUnitOfMeasureQty_66.setString("13048459");
        noLegs_0_2_2_0.set(LegUnitOfMeasureQty_66);
        InstrumentLeg_66.insert(LegUnitOfMeasureQty_66.getString());
        all_values.push_back(InstrumentLeg_66);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_130;
          FIX::LegSecurityAltID LegSecurityAltID_130("STRING_1024013410");
          noLegSecurityAltID_0_2_0_3_0.set(LegSecurityAltID_130);
          LegSecAltIDGrp_NoLegSecurityAltID_130.insert(LegSecurityAltID_130.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_130("STRING_62445001");
          noLegSecurityAltID_0_2_0_3_0.set(LegSecurityAltIDSource_130);
          LegSecAltIDGrp_NoLegSecurityAltID_130.insert(LegSecurityAltIDSource_130.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_130);

          noLegs_0_2_2_0.addGroup(noLegSecurityAltID_0_2_0_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noLegs_0_2_2_0);
      }
      // Instrument
      multiset<string> Instrument_36;
      FIX::AttachmentPoint AttachmentPoint_36;
      AttachmentPoint_36.setString("3.380000");
      noQuoteEntries_0_1_2.set(AttachmentPoint_36);
      Instrument_36.insert(AttachmentPoint_36.getString());
      FIX::CFICode CFICode_36("STRING_1786497750");
      noQuoteEntries_0_1_2.set(CFICode_36);
      Instrument_36.insert(CFICode_36.getString());
      FIX::CPProgram CPProgram_36(2);
      noQuoteEntries_0_1_2.set(CPProgram_36);
      Instrument_36.insert(CPProgram_36.getString());
      FIX::CPRegType CPRegType_36("STRING_738596939");
      noQuoteEntries_0_1_2.set(CPRegType_36);
      Instrument_36.insert(CPRegType_36.getString());
      FIX::CapPrice CapPrice_36;
      CapPrice_36.setString("12360187");
      noQuoteEntries_0_1_2.set(CapPrice_36);
      Instrument_36.insert(CapPrice_36.getString());
      FIX::ContractMultiplier ContractMultiplier_36;
      ContractMultiplier_36.setString("19203483");
      noQuoteEntries_0_1_2.set(ContractMultiplier_36);
      Instrument_36.insert(ContractMultiplier_36.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_36(0);
      noQuoteEntries_0_1_2.set(ContractMultiplierUnit_36);
      Instrument_36.insert(ContractMultiplierUnit_36.getString());
      FIX::ContractSettlMonth ContractSettlMonth_36("MONTHYEAR_947642028");
      noQuoteEntries_0_1_2.set(ContractSettlMonth_36);
      Instrument_36.insert(ContractSettlMonth_36.getString());
      FIX::CountryOfIssue CountryOfIssue_36("COUNTRY_1795267973");
      noQuoteEntries_0_1_2.set(CountryOfIssue_36);
      Instrument_36.insert(CountryOfIssue_36.getString());
      FIX::CouponPaymentDate CouponPaymentDate_36("LOCALMKTDATE_389940178");
      noQuoteEntries_0_1_2.set(CouponPaymentDate_36);
      Instrument_36.insert(CouponPaymentDate_36.getString());
      FIX::CouponRate CouponRate_36;
      CouponRate_36.setString("18.140000");
      noQuoteEntries_0_1_2.set(CouponRate_36);
      Instrument_36.insert(CouponRate_36.getString());
      FIX::CreditRating CreditRating_36("STRING_1386420450");
      noQuoteEntries_0_1_2.set(CreditRating_36);
      Instrument_36.insert(CreditRating_36.getString());
      FIX::DatedDate DatedDate_36("LOCALMKTDATE_458971899");
      noQuoteEntries_0_1_2.set(DatedDate_36);
      Instrument_36.insert(DatedDate_36.getString());
      FIX::DetachmentPoint DetachmentPoint_36;
      DetachmentPoint_36.setString("99.090000");
      noQuoteEntries_0_1_2.set(DetachmentPoint_36);
      Instrument_36.insert(DetachmentPoint_36.getString());
      FIX::EncodedIssuer EncodedIssuer_36("DATA_86794907");
      noQuoteEntries_0_1_2.set(EncodedIssuer_36);
      Instrument_36.insert(EncodedIssuer_36.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_36(1723193128);
      noQuoteEntries_0_1_2.set(EncodedIssuerLen_36);
      Instrument_36.insert(EncodedIssuerLen_36.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_36("DATA_1958990854");
      noQuoteEntries_0_1_2.set(EncodedSecurityDesc_36);
      Instrument_36.insert(EncodedSecurityDesc_36.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_36(661198554);
      noQuoteEntries_0_1_2.set(EncodedSecurityDescLen_36);
      Instrument_36.insert(EncodedSecurityDescLen_36.getString());
      FIX::ExerciseStyle ExerciseStyle_36(1);
      noQuoteEntries_0_1_2.set(ExerciseStyle_36);
      Instrument_36.insert(ExerciseStyle_36.getString());
      FIX::Factor Factor_36;
      Factor_36.setString("13614148");
      noQuoteEntries_0_1_2.set(Factor_36);
      Instrument_36.insert(Factor_36.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_36(true);
      noQuoteEntries_0_1_2.set(FlexProductEligibilityIndicator_36);
      Instrument_36.insert(FlexProductEligibilityIndicator_36.getString());
      FIX::FlexibleIndicator FlexibleIndicator_36(false);
      noQuoteEntries_0_1_2.set(FlexibleIndicator_36);
      Instrument_36.insert(FlexibleIndicator_36.getString());
      FIX::FloorPrice FloorPrice_36;
      FloorPrice_36.setString("4582593");
      noQuoteEntries_0_1_2.set(FloorPrice_36);
      Instrument_36.insert(FloorPrice_36.getString());
      FIX::FlowScheduleType FlowScheduleType_36(1);
      noQuoteEntries_0_1_2.set(FlowScheduleType_36);
      Instrument_36.insert(FlowScheduleType_36.getString());
      FIX::InstrRegistry InstrRegistry_36("STRING_300253150");
      noQuoteEntries_0_1_2.set(InstrRegistry_36);
      Instrument_36.insert(InstrRegistry_36.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_36('1');
      noQuoteEntries_0_1_2.set(InstrmtAssignmentMethod_36);
      Instrument_36.insert(InstrmtAssignmentMethod_36.getString());
      FIX::InterestAccrualDate InterestAccrualDate_36("LOCALMKTDATE_333929983");
      noQuoteEntries_0_1_2.set(InterestAccrualDate_36);
      Instrument_36.insert(InterestAccrualDate_36.getString());
      FIX::IssueDate IssueDate_36("LOCALMKTDATE_1605099134");
      noQuoteEntries_0_1_2.set(IssueDate_36);
      Instrument_36.insert(IssueDate_36.getString());
      FIX::Issuer Issuer_36("STRING_1662466759");
      noQuoteEntries_0_1_2.set(Issuer_36);
      Instrument_36.insert(Issuer_36.getString());
      FIX::ListMethod ListMethod_36(0);
      noQuoteEntries_0_1_2.set(ListMethod_36);
      Instrument_36.insert(ListMethod_36.getString());
      FIX::LocaleOfIssue LocaleOfIssue_36("STRING_1667544135");
      noQuoteEntries_0_1_2.set(LocaleOfIssue_36);
      Instrument_36.insert(LocaleOfIssue_36.getString());
      FIX::MaturityDate MaturityDate_36("LOCALMKTDATE_146723449");
      noQuoteEntries_0_1_2.set(MaturityDate_36);
      Instrument_36.insert(MaturityDate_36.getString());
      FIX::MaturityMonthYear MaturityMonthYear_36("MONTHYEAR_996957496");
      noQuoteEntries_0_1_2.set(MaturityMonthYear_36);
      Instrument_36.insert(MaturityMonthYear_36.getString());
      FIX::MaturityTime MaturityTime_36("TZTIMEONLY_1590994875");
      noQuoteEntries_0_1_2.set(MaturityTime_36);
      Instrument_36.insert(MaturityTime_36.getString());
      FIX::MinPriceIncrement MinPriceIncrement_36;
      MinPriceIncrement_36.setString("8853203");
      noQuoteEntries_0_1_2.set(MinPriceIncrement_36);
      Instrument_36.insert(MinPriceIncrement_36.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_36;
      MinPriceIncrementAmount_36.setString("854925");
      noQuoteEntries_0_1_2.set(MinPriceIncrementAmount_36);
      Instrument_36.insert(MinPriceIncrementAmount_36.getString());
      FIX::NTPositionLimit NTPositionLimit_36(1363859617);
      noQuoteEntries_0_1_2.set(NTPositionLimit_36);
      Instrument_36.insert(NTPositionLimit_36.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_36;
      NotionalPercentageOutstanding_36.setString("1.660000");
      noQuoteEntries_0_1_2.set(NotionalPercentageOutstanding_36);
      Instrument_36.insert(NotionalPercentageOutstanding_36.getString());
      FIX::OptAttribute OptAttribute_36('1');
      noQuoteEntries_0_1_2.set(OptAttribute_36);
      Instrument_36.insert(OptAttribute_36.getString());
      FIX::OptPayoutAmount OptPayoutAmount_36;
      OptPayoutAmount_36.setString("10116439");
      noQuoteEntries_0_1_2.set(OptPayoutAmount_36);
      Instrument_36.insert(OptPayoutAmount_36.getString());
      FIX::OptPayoutType OptPayoutType_36(3);
      noQuoteEntries_0_1_2.set(OptPayoutType_36);
      Instrument_36.insert(OptPayoutType_36.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_36;
      OriginalNotionalPercentageOutstanding_36.setString("27.860000");
      noQuoteEntries_0_1_2.set(OriginalNotionalPercentageOutstanding_36);
      Instrument_36.insert(OriginalNotionalPercentageOutstanding_36.getString());
      FIX::Pool Pool_36("STRING_250580745");
      noQuoteEntries_0_1_2.set(Pool_36);
      Instrument_36.insert(Pool_36.getString());
      FIX::PositionLimit PositionLimit_36(446108596);
      noQuoteEntries_0_1_2.set(PositionLimit_36);
      Instrument_36.insert(PositionLimit_36.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_36("STRING_PCTPAR");
      noQuoteEntries_0_1_2.set(PriceQuoteMethod_36);
      Instrument_36.insert(PriceQuoteMethod_36.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_36("STRING_337375652");
      noQuoteEntries_0_1_2.set(PriceUnitOfMeasure_36);
      Instrument_36.insert(PriceUnitOfMeasure_36.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_36;
      PriceUnitOfMeasureQty_36.setString("218180");
      noQuoteEntries_0_1_2.set(PriceUnitOfMeasureQty_36);
      Instrument_36.insert(PriceUnitOfMeasureQty_36.getString());
      FIX::Product Product_38(4);
      noQuoteEntries_0_1_2.set(Product_38);
      Instrument_36.insert(Product_38.getString());
      FIX::ProductComplex ProductComplex_36("STRING_998574207");
      noQuoteEntries_0_1_2.set(ProductComplex_36);
      Instrument_36.insert(ProductComplex_36.getString());
      FIX::PutOrCall PutOrCall_36(1);
      noQuoteEntries_0_1_2.set(PutOrCall_36);
      Instrument_36.insert(PutOrCall_36.getString());
      FIX::RedemptionDate RedemptionDate_36("LOCALMKTDATE_90861117");
      noQuoteEntries_0_1_2.set(RedemptionDate_36);
      Instrument_36.insert(RedemptionDate_36.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_36("STRING_538539575");
      noQuoteEntries_0_1_2.set(RepoCollateralSecurityType_36);
      Instrument_36.insert(RepoCollateralSecurityType_36.getString());
      FIX::RepurchaseRate RepurchaseRate_36;
      RepurchaseRate_36.setString("84.180000");
      noQuoteEntries_0_1_2.set(RepurchaseRate_36);
      Instrument_36.insert(RepurchaseRate_36.getString());
      FIX::RepurchaseTerm RepurchaseTerm_36(549120427);
      noQuoteEntries_0_1_2.set(RepurchaseTerm_36);
      Instrument_36.insert(RepurchaseTerm_36.getString());
      FIX::RestructuringType RestructuringType_36("STRING_MR");
      noQuoteEntries_0_1_2.set(RestructuringType_36);
      Instrument_36.insert(RestructuringType_36.getString());
      FIX::SecurityDesc SecurityDesc_36("STRING_1352941568");
      noQuoteEntries_0_1_2.set(SecurityDesc_36);
      Instrument_36.insert(SecurityDesc_36.getString());
      FIX::SecurityExchange SecurityExchange_36("EXCHANGE_657641150");
      noQuoteEntries_0_1_2.set(SecurityExchange_36);
      Instrument_36.insert(SecurityExchange_36.getString());
      FIX::SecurityGroup SecurityGroup_36("STRING_1705312645");
      noQuoteEntries_0_1_2.set(SecurityGroup_36);
      Instrument_36.insert(SecurityGroup_36.getString());
      FIX::SecurityID SecurityID_36("STRING_810557055");
      noQuoteEntries_0_1_2.set(SecurityID_36);
      Instrument_36.insert(SecurityID_36.getString());
      FIX::SecurityIDSource SecurityIDSource_36("STRING_8");
      noQuoteEntries_0_1_2.set(SecurityIDSource_36);
      Instrument_36.insert(SecurityIDSource_36.getString());
      FIX::SecurityStatus SecurityStatus_36("STRING_2");
      noQuoteEntries_0_1_2.set(SecurityStatus_36);
      Instrument_36.insert(SecurityStatus_36.getString());
      FIX::SecuritySubType SecuritySubType_37("STRING_330617542");
      noQuoteEntries_0_1_2.set(SecuritySubType_37);
      Instrument_36.insert(SecuritySubType_37.getString());
      FIX::SecurityType SecurityType_38("STRING_CAMM");
      noQuoteEntries_0_1_2.set(SecurityType_38);
      Instrument_36.insert(SecurityType_38.getString());
      FIX::Seniority Seniority_36("STRING_SD");
      noQuoteEntries_0_1_2.set(Seniority_36);
      Instrument_36.insert(Seniority_36.getString());
      FIX::SettlMethod SettlMethod_36('P');
      noQuoteEntries_0_1_2.set(SettlMethod_36);
      Instrument_36.insert(SettlMethod_36.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_36("STRING_1204668099");
      noQuoteEntries_0_1_2.set(SettleOnOpenFlag_36);
      Instrument_36.insert(SettleOnOpenFlag_36.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_36("STRING_1998222479");
      noQuoteEntries_0_1_2.set(StateOrProvinceOfIssue_36);
      Instrument_36.insert(StateOrProvinceOfIssue_36.getString());
      FIX::StrikeCurrency StrikeCurrency_36("CAN");
      noQuoteEntries_0_1_2.set(StrikeCurrency_36);
      Instrument_36.insert(StrikeCurrency_36.getString());
      FIX::StrikeMultiplier StrikeMultiplier_36;
      StrikeMultiplier_36.setString("8838734");
      noQuoteEntries_0_1_2.set(StrikeMultiplier_36);
      Instrument_36.insert(StrikeMultiplier_36.getString());
      FIX::StrikePrice StrikePrice_36;
      StrikePrice_36.setString("21486");
      noQuoteEntries_0_1_2.set(StrikePrice_36);
      Instrument_36.insert(StrikePrice_36.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_36(5);
      noQuoteEntries_0_1_2.set(StrikePriceBoundaryMethod_36);
      Instrument_36.insert(StrikePriceBoundaryMethod_36.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_36;
      StrikePriceBoundaryPrecision_36.setString("62.370000");
      noQuoteEntries_0_1_2.set(StrikePriceBoundaryPrecision_36);
      Instrument_36.insert(StrikePriceBoundaryPrecision_36.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_36(4);
      noQuoteEntries_0_1_2.set(StrikePriceDeterminationMethod_36);
      Instrument_36.insert(StrikePriceDeterminationMethod_36.getString());
      FIX::StrikeValue StrikeValue_36;
      StrikeValue_36.setString("12351099");
      noQuoteEntries_0_1_2.set(StrikeValue_36);
      Instrument_36.insert(StrikeValue_36.getString());
      FIX::Symbol Symbol_36("STRING_372025284");
      noQuoteEntries_0_1_2.set(Symbol_36);
      Instrument_36.insert(Symbol_36.getString());
      FIX::SymbolSfx SymbolSfx_36("STRING_WI");
      noQuoteEntries_0_1_2.set(SymbolSfx_36);
      Instrument_36.insert(SymbolSfx_36.getString());
      FIX::TimeUnit TimeUnit_36("STRING_Yr");
      noQuoteEntries_0_1_2.set(TimeUnit_36);
      Instrument_36.insert(TimeUnit_36.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_36(2);
      noQuoteEntries_0_1_2.set(UnderlyingPriceDeterminationMethod_36);
      Instrument_36.insert(UnderlyingPriceDeterminationMethod_36.getString());
      FIX::UnitOfMeasure UnitOfMeasure_36("STRING_Alw");
      noQuoteEntries_0_1_2.set(UnitOfMeasure_36);
      Instrument_36.insert(UnitOfMeasure_36.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_36;
      UnitOfMeasureQty_36.setString("4537871");
      noQuoteEntries_0_1_2.set(UnitOfMeasureQty_36);
      Instrument_36.insert(UnitOfMeasureQty_36.getString());
      FIX::ValuationMethod ValuationMethod_36("STRING_FUTDA");
      noQuoteEntries_0_1_2.set(ValuationMethod_36);
      Instrument_36.insert(ValuationMethod_36.getString());
      all_values.push_back(Instrument_36);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_69;
        FIX::ComplexEventCondition ComplexEventCondition_69(2);
        noComplexEvents_0_2_2_0.set(ComplexEventCondition_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventCondition_69.getString());
        FIX::ComplexEventPrice ComplexEventPrice_69;
        ComplexEventPrice_69.setString("18889367");
        noComplexEvents_0_2_2_0.set(ComplexEventPrice_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventPrice_69.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_69(1);
        noComplexEvents_0_2_2_0.set(ComplexEventPriceBoundaryMethod_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventPriceBoundaryMethod_69.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_69;
        ComplexEventPriceBoundaryPrecision_69.setString("34.870000");
        noComplexEvents_0_2_2_0.set(ComplexEventPriceBoundaryPrecision_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventPriceBoundaryPrecision_69.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_69(2);
        noComplexEvents_0_2_2_0.set(ComplexEventPriceTimeType_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventPriceTimeType_69.getString());
        FIX::ComplexEventType ComplexEventType_69(9);
        noComplexEvents_0_2_2_0.set(ComplexEventType_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexEventType_69.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_69;
        ComplexOptPayoutAmount_69.setString("15224905");
        noComplexEvents_0_2_2_0.set(ComplexOptPayoutAmount_69);
        ComplexEvents_NoComplexEvents_69.insert(ComplexOptPayoutAmount_69.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_69);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_135;
          FIX::ComplexEventEndDate ComplexEventEndDate_135(FIX::UTCTIMESTAMP(21, 22, 2, 26, 3, 2011));
          noComplexEventDates_0_2_0_3_0.set(ComplexEventEndDate_135);
          ComplexEventDates_NoComplexEventDates_135.insert(ComplexEventEndDate_135.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_135(FIX::UTCTIMESTAMP(23, 56, 35, 13, 10, 2006));
          noComplexEventDates_0_2_0_3_0.set(ComplexEventStartDate_135);
          ComplexEventDates_NoComplexEventDates_135.insert(ComplexEventStartDate_135.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_135);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_269;
            FIX::ComplexEventEndTime ComplexEventEndTime_269(FIX::UTCTIMEONLY(22, 53, 34));
            noComplexEventTimes_0_2_0_0_4_0.set(ComplexEventEndTime_269);
            ComplexEventTimes_NoComplexEventTimes_269.insert(ComplexEventEndTime_269.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_269(FIX::UTCTIMEONLY(6, 8, 54));
            noComplexEventTimes_0_2_0_0_4_0.set(ComplexEventStartTime_269);
            ComplexEventTimes_NoComplexEventTimes_269.insert(ComplexEventStartTime_269.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_269);

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_270;
            FIX::ComplexEventEndTime ComplexEventEndTime_270(FIX::UTCTIMEONLY(1, 2, 1));
            noComplexEventTimes_0_2_0_0_4_1.set(ComplexEventEndTime_270);
            ComplexEventTimes_NoComplexEventTimes_270.insert(ComplexEventEndTime_270.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_270(FIX::UTCTIMEONLY(22, 23, 52));
            noComplexEventTimes_0_2_0_0_4_1.set(ComplexEventStartTime_270);
            ComplexEventTimes_NoComplexEventTimes_270.insert(ComplexEventStartTime_270.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_270);

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_1);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_136;
          FIX::ComplexEventEndDate ComplexEventEndDate_136(FIX::UTCTIMESTAMP(0, 15, 4, 15, 10, 2016));
          noComplexEventDates_0_2_0_3_1.set(ComplexEventEndDate_136);
          ComplexEventDates_NoComplexEventDates_136.insert(ComplexEventEndDate_136.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_136(FIX::UTCTIMESTAMP(12, 54, 48, 2, 9, 2012));
          noComplexEventDates_0_2_0_3_1.set(ComplexEventStartDate_136);
          ComplexEventDates_NoComplexEventDates_136.insert(ComplexEventStartDate_136.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_136);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_271;
            FIX::ComplexEventEndTime ComplexEventEndTime_271(FIX::UTCTIMEONLY(8, 3, 36));
            noComplexEventTimes_0_2_0_1_4_0.set(ComplexEventEndTime_271);
            ComplexEventTimes_NoComplexEventTimes_271.insert(ComplexEventEndTime_271.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_271(FIX::UTCTIMEONLY(21, 44, 59));
            noComplexEventTimes_0_2_0_1_4_0.set(ComplexEventStartTime_271);
            ComplexEventTimes_NoComplexEventTimes_271.insert(ComplexEventStartTime_271.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_271);

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_272;
            FIX::ComplexEventEndTime ComplexEventEndTime_272(FIX::UTCTIMEONLY(22, 1, 52));
            noComplexEventTimes_0_2_0_1_4_1.set(ComplexEventEndTime_272);
            ComplexEventTimes_NoComplexEventTimes_272.insert(ComplexEventEndTime_272.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_272(FIX::UTCTIMEONLY(4, 15, 47));
            noComplexEventTimes_0_2_0_1_4_1.set(ComplexEventStartTime_272);
            ComplexEventTimes_NoComplexEventTimes_272.insert(ComplexEventStartTime_272.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_272);

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_273;
            FIX::ComplexEventEndTime ComplexEventEndTime_273(FIX::UTCTIMEONLY(20, 54, 42));
            noComplexEventTimes_0_2_0_1_4_2.set(ComplexEventEndTime_273);
            ComplexEventTimes_NoComplexEventTimes_273.insert(ComplexEventEndTime_273.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_273(FIX::UTCTIMEONLY(7, 32, 27));
            noComplexEventTimes_0_2_0_1_4_2.set(ComplexEventStartTime_273);
            ComplexEventTimes_NoComplexEventTimes_273.insert(ComplexEventStartTime_273.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_273);

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_2);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_137;
          FIX::ComplexEventEndDate ComplexEventEndDate_137(FIX::UTCTIMESTAMP(19, 15, 17, 23, 3, 2005));
          noComplexEventDates_0_2_0_3_2.set(ComplexEventEndDate_137);
          ComplexEventDates_NoComplexEventDates_137.insert(ComplexEventEndDate_137.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_137(FIX::UTCTIMESTAMP(10, 30, 16, 15, 4, 2007));
          noComplexEventDates_0_2_0_3_2.set(ComplexEventStartDate_137);
          ComplexEventDates_NoComplexEventDates_137.insert(ComplexEventStartDate_137.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_137);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_274;
            FIX::ComplexEventEndTime ComplexEventEndTime_274(FIX::UTCTIMEONLY(11, 12, 10));
            noComplexEventTimes_0_2_0_2_4_0.set(ComplexEventEndTime_274);
            ComplexEventTimes_NoComplexEventTimes_274.insert(ComplexEventEndTime_274.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_274(FIX::UTCTIMEONLY(8, 18, 8));
            noComplexEventTimes_0_2_0_2_4_0.set(ComplexEventStartTime_274);
            ComplexEventTimes_NoComplexEventTimes_274.insert(ComplexEventStartTime_274.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_274);

            noComplexEventDates_0_2_0_3_2.addGroup(noComplexEventTimes_0_2_0_2_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_275;
            FIX::ComplexEventEndTime ComplexEventEndTime_275(FIX::UTCTIMEONLY(14, 54, 45));
            noComplexEventTimes_0_2_0_2_4_1.set(ComplexEventEndTime_275);
            ComplexEventTimes_NoComplexEventTimes_275.insert(ComplexEventEndTime_275.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_275(FIX::UTCTIMEONLY(5, 9, 52));
            noComplexEventTimes_0_2_0_2_4_1.set(ComplexEventStartTime_275);
            ComplexEventTimes_NoComplexEventTimes_275.insert(ComplexEventStartTime_275.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_275);

            noComplexEventDates_0_2_0_3_2.addGroup(noComplexEventTimes_0_2_0_2_4_1);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_2);
        }
        noQuoteEntries_0_1_2.addGroup(noComplexEvents_0_2_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_71;
        FIX::EventDate EventDate_71("LOCALMKTDATE_1695713788");
        noEvents_0_2_2_0.set(EventDate_71);
        EvntGrp_NoEvents_71.insert(EventDate_71.getString());
        FIX::EventPx EventPx_71;
        EventPx_71.setString("11992887");
        noEvents_0_2_2_0.set(EventPx_71);
        EvntGrp_NoEvents_71.insert(EventPx_71.getString());
        FIX::EventText EventText_71("STRING_1758858898");
        noEvents_0_2_2_0.set(EventText_71);
        EvntGrp_NoEvents_71.insert(EventText_71.getString());
        FIX::EventTime EventTime_71(FIX::UTCTIMESTAMP(14, 25, 32, 8, 8, 2006));
        noEvents_0_2_2_0.set(EventTime_71);
        EvntGrp_NoEvents_71.insert(EventTime_71.getString());
        FIX::EventType EventType_71(13);
        noEvents_0_2_2_0.set(EventType_71);
        EvntGrp_NoEvents_71.insert(EventType_71.getString());
        all_values.push_back(EvntGrp_NoEvents_71);

        noQuoteEntries_0_1_2.addGroup(noEvents_0_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_2_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_72;
        FIX::EventDate EventDate_72("LOCALMKTDATE_67216155");
        noEvents_0_2_2_1.set(EventDate_72);
        EvntGrp_NoEvents_72.insert(EventDate_72.getString());
        FIX::EventPx EventPx_72;
        EventPx_72.setString("3092942");
        noEvents_0_2_2_1.set(EventPx_72);
        EvntGrp_NoEvents_72.insert(EventPx_72.getString());
        FIX::EventText EventText_72("STRING_10676663");
        noEvents_0_2_2_1.set(EventText_72);
        EvntGrp_NoEvents_72.insert(EventText_72.getString());
        FIX::EventTime EventTime_72(FIX::UTCTIMESTAMP(4, 35, 44, 26, 1, 2008));
        noEvents_0_2_2_1.set(EventTime_72);
        EvntGrp_NoEvents_72.insert(EventTime_72.getString());
        FIX::EventType EventType_72(11);
        noEvents_0_2_2_1.set(EventType_72);
        EvntGrp_NoEvents_72.insert(EventType_72.getString());
        all_values.push_back(EvntGrp_NoEvents_72);

        noQuoteEntries_0_1_2.addGroup(noEvents_0_2_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_2_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_73;
        FIX::EventDate EventDate_73("LOCALMKTDATE_524844302");
        noEvents_0_2_2_2.set(EventDate_73);
        EvntGrp_NoEvents_73.insert(EventDate_73.getString());
        FIX::EventPx EventPx_73;
        EventPx_73.setString("12666770");
        noEvents_0_2_2_2.set(EventPx_73);
        EvntGrp_NoEvents_73.insert(EventPx_73.getString());
        FIX::EventText EventText_73("STRING_1513371385");
        noEvents_0_2_2_2.set(EventText_73);
        EvntGrp_NoEvents_73.insert(EventText_73.getString());
        FIX::EventTime EventTime_73(FIX::UTCTIMESTAMP(9, 6, 49, 17, 4, 2003));
        noEvents_0_2_2_2.set(EventTime_73);
        EvntGrp_NoEvents_73.insert(EventTime_73.getString());
        FIX::EventType EventType_73(10);
        noEvents_0_2_2_2.set(EventType_73);
        EvntGrp_NoEvents_73.insert(EventType_73.getString());
        all_values.push_back(EvntGrp_NoEvents_73);

        noQuoteEntries_0_1_2.addGroup(noEvents_0_2_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_78;
        FIX::InstrumentPartyID InstrumentPartyID_78("STRING_158434021");
        noInstrumentParties_0_2_2_0.set(InstrumentPartyID_78);
        InstrumentParties_NoInstrumentParties_78.insert(InstrumentPartyID_78.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_78('1');
        noInstrumentParties_0_2_2_0.set(InstrumentPartyIDSource_78);
        InstrumentParties_NoInstrumentParties_78.insert(InstrumentPartyIDSource_78.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_78(1444859035);
        noInstrumentParties_0_2_2_0.set(InstrumentPartyRole_78);
        InstrumentParties_NoInstrumentParties_78.insert(InstrumentPartyRole_78.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_78);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165;
          FIX::InstrumentPartySubID InstrumentPartySubID_165("STRING_1773486592");
          noInstrumentPartySubIDs_0_2_0_3_0.set(InstrumentPartySubID_165);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165.insert(InstrumentPartySubID_165.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_165(1027691563);
          noInstrumentPartySubIDs_0_2_0_3_0.set(InstrumentPartySubIDType_165);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165.insert(InstrumentPartySubIDType_165.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_165);

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_2_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_79;
        FIX::InstrumentPartyID InstrumentPartyID_79("STRING_1630934541");
        noInstrumentParties_0_2_2_1.set(InstrumentPartyID_79);
        InstrumentParties_NoInstrumentParties_79.insert(InstrumentPartyID_79.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_79('2');
        noInstrumentParties_0_2_2_1.set(InstrumentPartyIDSource_79);
        InstrumentParties_NoInstrumentParties_79.insert(InstrumentPartyIDSource_79.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_79(1094907718);
        noInstrumentParties_0_2_2_1.set(InstrumentPartyRole_79);
        InstrumentParties_NoInstrumentParties_79.insert(InstrumentPartyRole_79.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_79);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166;
          FIX::InstrumentPartySubID InstrumentPartySubID_166("STRING_2076668847");
          noInstrumentPartySubIDs_0_2_1_3_0.set(InstrumentPartySubID_166);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166.insert(InstrumentPartySubID_166.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_166(1591235191);
          noInstrumentPartySubIDs_0_2_1_3_0.set(InstrumentPartySubIDType_166);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166.insert(InstrumentPartySubIDType_166.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_166);

          noInstrumentParties_0_2_2_1.addGroup(noInstrumentPartySubIDs_0_2_1_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noInstrumentParties_0_2_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_2_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_80;
        FIX::InstrumentPartyID InstrumentPartyID_80("STRING_1724020571");
        noInstrumentParties_0_2_2_2.set(InstrumentPartyID_80);
        InstrumentParties_NoInstrumentParties_80.insert(InstrumentPartyID_80.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_80('1');
        noInstrumentParties_0_2_2_2.set(InstrumentPartyIDSource_80);
        InstrumentParties_NoInstrumentParties_80.insert(InstrumentPartyIDSource_80.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_80(574817767);
        noInstrumentParties_0_2_2_2.set(InstrumentPartyRole_80);
        InstrumentParties_NoInstrumentParties_80.insert(InstrumentPartyRole_80.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_80);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167;
          FIX::InstrumentPartySubID InstrumentPartySubID_167("STRING_2145409134");
          noInstrumentPartySubIDs_0_2_2_3_0.set(InstrumentPartySubID_167);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167.insert(InstrumentPartySubID_167.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_167(34673161);
          noInstrumentPartySubIDs_0_2_2_3_0.set(InstrumentPartySubIDType_167);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167.insert(InstrumentPartySubIDType_167.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_167);

          noInstrumentParties_0_2_2_2.addGroup(noInstrumentPartySubIDs_0_2_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168;
          FIX::InstrumentPartySubID InstrumentPartySubID_168("STRING_1790468052");
          noInstrumentPartySubIDs_0_2_2_3_1.set(InstrumentPartySubID_168);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168.insert(InstrumentPartySubID_168.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_168(522769789);
          noInstrumentPartySubIDs_0_2_2_3_1.set(InstrumentPartySubIDType_168);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168.insert(InstrumentPartySubIDType_168.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_168);

          noInstrumentParties_0_2_2_2.addGroup(noInstrumentPartySubIDs_0_2_2_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169;
          FIX::InstrumentPartySubID InstrumentPartySubID_169("STRING_1301350161");
          noInstrumentPartySubIDs_0_2_2_3_2.set(InstrumentPartySubID_169);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169.insert(InstrumentPartySubID_169.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_169(1156355789);
          noInstrumentPartySubIDs_0_2_2_3_2.set(InstrumentPartySubIDType_169);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169.insert(InstrumentPartySubIDType_169.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_169);

          noInstrumentParties_0_2_2_2.addGroup(noInstrumentPartySubIDs_0_2_2_3_2);
        }
        noQuoteEntries_0_1_2.addGroup(noInstrumentParties_0_2_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_78;
        FIX::SecurityAltID SecurityAltID_78("STRING_231714538");
        noSecurityAltID_0_2_2_0.set(SecurityAltID_78);
        SecAltIDGrp_NoSecurityAltID_78.insert(SecurityAltID_78.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_78("STRING_1150005507");
        noSecurityAltID_0_2_2_0.set(SecurityAltIDSource_78);
        SecAltIDGrp_NoSecurityAltID_78.insert(SecurityAltIDSource_78.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_78);

        noQuoteEntries_0_1_2.addGroup(noSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_2_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_79;
        FIX::SecurityAltID SecurityAltID_79("STRING_2055805517");
        noSecurityAltID_0_2_2_1.set(SecurityAltID_79);
        SecAltIDGrp_NoSecurityAltID_79.insert(SecurityAltID_79.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_79("STRING_711592528");
        noSecurityAltID_0_2_2_1.set(SecurityAltIDSource_79);
        SecAltIDGrp_NoSecurityAltID_79.insert(SecurityAltIDSource_79.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_79);

        noQuoteEntries_0_1_2.addGroup(noSecurityAltID_0_2_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_72;
      FIX::SecurityXML SecurityXML_73("XMLDATA_1341795307");
      noQuoteEntries_0_1_2.set(SecurityXML_73);
      FIX::SecurityXMLLen SecurityXMLLen_36(693293539);
      noQuoteEntries_0_1_2.set(SecurityXMLLen_36);
      FIX::SecurityXMLSchema SecurityXMLSchema_36("STRING_243275569");
      noQuoteEntries_0_1_2.set(SecurityXMLSchema_36);
      SecurityXML_72.insert(SecurityXMLSchema_36.getString());
      all_values.push_back(SecurityXML_72);

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_2);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_51;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_51("DATA_1144960357");
    noQuoteSets_0_0.set(EncodedUnderlyingIssuer_51);
    UnderlyingInstrument_51.insert(EncodedUnderlyingIssuer_51.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_51(851727560);
    noQuoteSets_0_0.set(EncodedUnderlyingIssuerLen_51);
    UnderlyingInstrument_51.insert(EncodedUnderlyingIssuerLen_51.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_51("DATA_1555558249");
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDesc_51);
    UnderlyingInstrument_51.insert(EncodedUnderlyingSecurityDesc_51.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_51(442335744);
    noQuoteSets_0_0.set(EncodedUnderlyingSecurityDescLen_51);
    UnderlyingInstrument_51.insert(EncodedUnderlyingSecurityDescLen_51.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_51;
    UnderlyingAdjustedQuantity_51.setString("12820275");
    noQuoteSets_0_0.set(UnderlyingAdjustedQuantity_51);
    UnderlyingInstrument_51.insert(UnderlyingAdjustedQuantity_51.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_51;
    UnderlyingAllocationPercent_51.setString("11.930000");
    noQuoteSets_0_0.set(UnderlyingAllocationPercent_51);
    UnderlyingInstrument_51.insert(UnderlyingAllocationPercent_51.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_51;
    UnderlyingAttachmentPoint_51.setString("73.070000");
    noQuoteSets_0_0.set(UnderlyingAttachmentPoint_51);
    UnderlyingInstrument_51.insert(UnderlyingAttachmentPoint_51.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_51("STRING_765478446");
    noQuoteSets_0_0.set(UnderlyingCFICode_51);
    UnderlyingInstrument_51.insert(UnderlyingCFICode_51.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_51("STRING_1100069729");
    noQuoteSets_0_0.set(UnderlyingCPProgram_51);
    UnderlyingInstrument_51.insert(UnderlyingCPProgram_51.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_51("STRING_417451377");
    noQuoteSets_0_0.set(UnderlyingCPRegType_51);
    UnderlyingInstrument_51.insert(UnderlyingCPRegType_51.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_51;
    UnderlyingCapValue_51.setString("5582236");
    noQuoteSets_0_0.set(UnderlyingCapValue_51);
    UnderlyingInstrument_51.insert(UnderlyingCapValue_51.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_51;
    UnderlyingCashAmount_51.setString("10292549");
    noQuoteSets_0_0.set(UnderlyingCashAmount_51);
    UnderlyingInstrument_51.insert(UnderlyingCashAmount_51.getString());
    FIX::UnderlyingCashType UnderlyingCashType_51("STRING_DIFF");
    noQuoteSets_0_0.set(UnderlyingCashType_51);
    UnderlyingInstrument_51.insert(UnderlyingCashType_51.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_51;
    UnderlyingContractMultiplier_51.setString("1347605");
    noQuoteSets_0_0.set(UnderlyingContractMultiplier_51);
    UnderlyingInstrument_51.insert(UnderlyingContractMultiplier_51.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_51(661447114);
    noQuoteSets_0_0.set(UnderlyingContractMultiplierUnit_51);
    UnderlyingInstrument_51.insert(UnderlyingContractMultiplierUnit_51.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_51("COUNTRY_436020688");
    noQuoteSets_0_0.set(UnderlyingCountryOfIssue_51);
    UnderlyingInstrument_51.insert(UnderlyingCountryOfIssue_51.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_51("LOCALMKTDATE_1920465226");
    noQuoteSets_0_0.set(UnderlyingCouponPaymentDate_51);
    UnderlyingInstrument_51.insert(UnderlyingCouponPaymentDate_51.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_51;
    UnderlyingCouponRate_51.setString("26.010000");
    noQuoteSets_0_0.set(UnderlyingCouponRate_51);
    UnderlyingInstrument_51.insert(UnderlyingCouponRate_51.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_51("STRING_470693850");
    noQuoteSets_0_0.set(UnderlyingCreditRating_51);
    UnderlyingInstrument_51.insert(UnderlyingCreditRating_51.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_51("JPY");
    noQuoteSets_0_0.set(UnderlyingCurrency_51);
    UnderlyingInstrument_51.insert(UnderlyingCurrency_51.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_51;
    UnderlyingCurrentValue_51.setString("17720440");
    noQuoteSets_0_0.set(UnderlyingCurrentValue_51);
    UnderlyingInstrument_51.insert(UnderlyingCurrentValue_51.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_51;
    UnderlyingDetachmentPoint_51.setString("17.710000");
    noQuoteSets_0_0.set(UnderlyingDetachmentPoint_51);
    UnderlyingInstrument_51.insert(UnderlyingDetachmentPoint_51.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_51;
    UnderlyingDirtyPrice_51.setString("20012063");
    noQuoteSets_0_0.set(UnderlyingDirtyPrice_51);
    UnderlyingInstrument_51.insert(UnderlyingDirtyPrice_51.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_51;
    UnderlyingEndPrice_51.setString("20037585");
    noQuoteSets_0_0.set(UnderlyingEndPrice_51);
    UnderlyingInstrument_51.insert(UnderlyingEndPrice_51.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_51;
    UnderlyingEndValue_51.setString("17223272");
    noQuoteSets_0_0.set(UnderlyingEndValue_51);
    UnderlyingInstrument_51.insert(UnderlyingEndValue_51.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_51(1909528248);
    noQuoteSets_0_0.set(UnderlyingExerciseStyle_51);
    UnderlyingInstrument_51.insert(UnderlyingExerciseStyle_51.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_51;
    UnderlyingFXRate_51.setString("5678674");
    noQuoteSets_0_0.set(UnderlyingFXRate_51);
    UnderlyingInstrument_51.insert(UnderlyingFXRate_51.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_51('D');
    noQuoteSets_0_0.set(UnderlyingFXRateCalc_51);
    UnderlyingInstrument_51.insert(UnderlyingFXRateCalc_51.getString());
    FIX::UnderlyingFactor UnderlyingFactor_51;
    UnderlyingFactor_51.setString("4553381");
    noQuoteSets_0_0.set(UnderlyingFactor_51);
    UnderlyingInstrument_51.insert(UnderlyingFactor_51.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_51(811142999);
    noQuoteSets_0_0.set(UnderlyingFlowScheduleType_51);
    UnderlyingInstrument_51.insert(UnderlyingFlowScheduleType_51.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_51("STRING_2061599295");
    noQuoteSets_0_0.set(UnderlyingInstrRegistry_51);
    UnderlyingInstrument_51.insert(UnderlyingInstrRegistry_51.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_51("LOCALMKTDATE_1307065699");
    noQuoteSets_0_0.set(UnderlyingIssueDate_51);
    UnderlyingInstrument_51.insert(UnderlyingIssueDate_51.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_51("STRING_219217600");
    noQuoteSets_0_0.set(UnderlyingIssuer_51);
    UnderlyingInstrument_51.insert(UnderlyingIssuer_51.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_51("STRING_356451391");
    noQuoteSets_0_0.set(UnderlyingLocaleOfIssue_51);
    UnderlyingInstrument_51.insert(UnderlyingLocaleOfIssue_51.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_51("LOCALMKTDATE_441609604");
    noQuoteSets_0_0.set(UnderlyingMaturityDate_51);
    UnderlyingInstrument_51.insert(UnderlyingMaturityDate_51.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_51("MONTHYEAR_1400778793");
    noQuoteSets_0_0.set(UnderlyingMaturityMonthYear_51);
    UnderlyingInstrument_51.insert(UnderlyingMaturityMonthYear_51.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_51("TZTIMEONLY_1826478699");
    noQuoteSets_0_0.set(UnderlyingMaturityTime_51);
    UnderlyingInstrument_51.insert(UnderlyingMaturityTime_51.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_51;
    UnderlyingNotionalPercentageOutstanding_51.setString("80.500000");
    noQuoteSets_0_0.set(UnderlyingNotionalPercentageOutstanding_51);
    UnderlyingInstrument_51.insert(UnderlyingNotionalPercentageOutstanding_51.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_51('3');
    noQuoteSets_0_0.set(UnderlyingOptAttribute_51);
    UnderlyingInstrument_51.insert(UnderlyingOptAttribute_51.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_51;
    UnderlyingOriginalNotionalPercentageOutstanding_51.setString("64.280000");
    noQuoteSets_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_51);
    UnderlyingInstrument_51.insert(UnderlyingOriginalNotionalPercentageOutstanding_51.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_51("STRING_1765311672");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasure_51);
    UnderlyingInstrument_51.insert(UnderlyingPriceUnitOfMeasure_51.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_51;
    UnderlyingPriceUnitOfMeasureQty_51.setString("13826198");
    noQuoteSets_0_0.set(UnderlyingPriceUnitOfMeasureQty_51);
    UnderlyingInstrument_51.insert(UnderlyingPriceUnitOfMeasureQty_51.getString());
    FIX::UnderlyingProduct UnderlyingProduct_51(2105132997);
    noQuoteSets_0_0.set(UnderlyingProduct_51);
    UnderlyingInstrument_51.insert(UnderlyingProduct_51.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_51(1900072217);
    noQuoteSets_0_0.set(UnderlyingPutOrCall_51);
    UnderlyingInstrument_51.insert(UnderlyingPutOrCall_51.getString());
    FIX::UnderlyingPx UnderlyingPx_51;
    UnderlyingPx_51.setString("20440669");
    noQuoteSets_0_0.set(UnderlyingPx_51);
    UnderlyingInstrument_51.insert(UnderlyingPx_51.getString());
    FIX::UnderlyingQty UnderlyingQty_51;
    UnderlyingQty_51.setString("3936700");
    noQuoteSets_0_0.set(UnderlyingQty_51);
    UnderlyingInstrument_51.insert(UnderlyingQty_51.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_51("LOCALMKTDATE_1673053795");
    noQuoteSets_0_0.set(UnderlyingRedemptionDate_51);
    UnderlyingInstrument_51.insert(UnderlyingRedemptionDate_51.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_51("STRING_555955870");
    noQuoteSets_0_0.set(UnderlyingRepoCollateralSecurityType_51);
    UnderlyingInstrument_51.insert(UnderlyingRepoCollateralSecurityType_51.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_51;
    UnderlyingRepurchaseRate_51.setString("38.880000");
    noQuoteSets_0_0.set(UnderlyingRepurchaseRate_51);
    UnderlyingInstrument_51.insert(UnderlyingRepurchaseRate_51.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_51(1089019778);
    noQuoteSets_0_0.set(UnderlyingRepurchaseTerm_51);
    UnderlyingInstrument_51.insert(UnderlyingRepurchaseTerm_51.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_51("STRING_1738098260");
    noQuoteSets_0_0.set(UnderlyingRestructuringType_51);
    UnderlyingInstrument_51.insert(UnderlyingRestructuringType_51.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_51("STRING_488924251");
    noQuoteSets_0_0.set(UnderlyingSecurityDesc_51);
    UnderlyingInstrument_51.insert(UnderlyingSecurityDesc_51.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_51("EXCHANGE_1661341549");
    noQuoteSets_0_0.set(UnderlyingSecurityExchange_51);
    UnderlyingInstrument_51.insert(UnderlyingSecurityExchange_51.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_51("STRING_1591820990");
    noQuoteSets_0_0.set(UnderlyingSecurityID_51);
    UnderlyingInstrument_51.insert(UnderlyingSecurityID_51.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_51("STRING_345199153");
    noQuoteSets_0_0.set(UnderlyingSecurityIDSource_51);
    UnderlyingInstrument_51.insert(UnderlyingSecurityIDSource_51.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_51("STRING_1236185180");
    noQuoteSets_0_0.set(UnderlyingSecuritySubType_51);
    UnderlyingInstrument_51.insert(UnderlyingSecuritySubType_51.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_51("STRING_1353865590");
    noQuoteSets_0_0.set(UnderlyingSecurityType_51);
    UnderlyingInstrument_51.insert(UnderlyingSecurityType_51.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_51("STRING_913066583");
    noQuoteSets_0_0.set(UnderlyingSeniority_51);
    UnderlyingInstrument_51.insert(UnderlyingSeniority_51.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_51("STRING_5340470");
    noQuoteSets_0_0.set(UnderlyingSettlMethod_51);
    UnderlyingInstrument_51.insert(UnderlyingSettlMethod_51.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_51(5);
    noQuoteSets_0_0.set(UnderlyingSettlementType_51);
    UnderlyingInstrument_51.insert(UnderlyingSettlementType_51.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_51;
    UnderlyingStartValue_51.setString("17242095");
    noQuoteSets_0_0.set(UnderlyingStartValue_51);
    UnderlyingInstrument_51.insert(UnderlyingStartValue_51.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_51("STRING_2066939765");
    noQuoteSets_0_0.set(UnderlyingStateOrProvinceOfIssue_51);
    UnderlyingInstrument_51.insert(UnderlyingStateOrProvinceOfIssue_51.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_51("CHF");
    noQuoteSets_0_0.set(UnderlyingStrikeCurrency_51);
    UnderlyingInstrument_51.insert(UnderlyingStrikeCurrency_51.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_51;
    UnderlyingStrikePrice_51.setString("2759075");
    noQuoteSets_0_0.set(UnderlyingStrikePrice_51);
    UnderlyingInstrument_51.insert(UnderlyingStrikePrice_51.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_51("STRING_1410395384");
    noQuoteSets_0_0.set(UnderlyingSymbol_51);
    UnderlyingInstrument_51.insert(UnderlyingSymbol_51.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_51("STRING_1196722329");
    noQuoteSets_0_0.set(UnderlyingSymbolSfx_51);
    UnderlyingInstrument_51.insert(UnderlyingSymbolSfx_51.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_51("STRING_2102386208");
    noQuoteSets_0_0.set(UnderlyingTimeUnit_51);
    UnderlyingInstrument_51.insert(UnderlyingTimeUnit_51.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_51("STRING_469999787");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasure_51);
    UnderlyingInstrument_51.insert(UnderlyingUnitOfMeasure_51.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_51;
    UnderlyingUnitOfMeasureQty_51.setString("15500872");
    noQuoteSets_0_0.set(UnderlyingUnitOfMeasureQty_51);
    UnderlyingInstrument_51.insert(UnderlyingUnitOfMeasureQty_51.getString());
    all_values.push_back(UnderlyingInstrument_51);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_105;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_105("STRING_87827811");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_105);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_105.insert(UnderlyingSecurityAltID_105.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_105("STRING_785223358");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_105);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_105.insert(UnderlyingSecurityAltIDSource_105.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_105);

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_106;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_106("STRING_8998338");
      noUnderlyingSecurityAltID_0_1_1.set(UnderlyingSecurityAltID_106);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_106.insert(UnderlyingSecurityAltID_106.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_106("STRING_1987900028");
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
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_89;
      FIX::UnderlyingStipType UnderlyingStipType_89("STRING_402668376");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_89);
      UnderlyingStipulations_NoUnderlyingStips_89.insert(UnderlyingStipType_89.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_89("STRING_1513470175");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_89);
      UnderlyingStipulations_NoUnderlyingStips_89.insert(UnderlyingStipValue_89.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_89);

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_90;
      FIX::UnderlyingStipType UnderlyingStipType_90("STRING_1237762497");
      noUnderlyingStips_0_1_1.set(UnderlyingStipType_90);
      UnderlyingStipulations_NoUnderlyingStips_90.insert(UnderlyingStipType_90.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_90("STRING_1267032264");
      noUnderlyingStips_0_1_1.set(UnderlyingStipValue_90);
      UnderlyingStipulations_NoUnderlyingStips_90.insert(UnderlyingStipValue_90.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_90);

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_91;
      FIX::UnderlyingStipType UnderlyingStipType_91("STRING_455006305");
      noUnderlyingStips_0_1_2.set(UnderlyingStipType_91);
      UnderlyingStipulations_NoUnderlyingStips_91.insert(UnderlyingStipType_91.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_91("STRING_828377109");
      noUnderlyingStips_0_1_2.set(UnderlyingStipValue_91);
      UnderlyingStipulations_NoUnderlyingStips_91.insert(UnderlyingStipValue_91.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_91);

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_109;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_109("STRING_2116347855");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_109);
      UndlyInstrumentParties_NoUndlyInstrumentParties_109.insert(UnderlyingInstrumentPartyID_109.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_109('2');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_109);
      UndlyInstrumentParties_NoUndlyInstrumentParties_109.insert(UnderlyingInstrumentPartyIDSource_109.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_109(2101155669);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_109);
      UndlyInstrumentParties_NoUndlyInstrumentParties_109.insert(UnderlyingInstrumentPartyRole_109.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_109);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_215("STRING_1626580042");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_215);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215.insert(UnderlyingInstrumentPartySubID_215.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_215(866738604);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_215);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215.insert(UnderlyingInstrumentPartySubIDType_215.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215);

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_110;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_110("STRING_1210389858");
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyID_110);
      UndlyInstrumentParties_NoUndlyInstrumentParties_110.insert(UnderlyingInstrumentPartyID_110.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_110('1');
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyIDSource_110);
      UndlyInstrumentParties_NoUndlyInstrumentParties_110.insert(UnderlyingInstrumentPartyIDSource_110.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_110(443464539);
      noUndlyInstrumentParties_0_1_1.set(UnderlyingInstrumentPartyRole_110);
      UndlyInstrumentParties_NoUndlyInstrumentParties_110.insert(UnderlyingInstrumentPartyRole_110.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_110);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_216("STRING_109602256");
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubID_216);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216.insert(UnderlyingInstrumentPartySubID_216.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_216(239408075);
        noUndlyInstrumentPartySubIDs_0_1_2_0.set(UnderlyingInstrumentPartySubIDType_216);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216.insert(UnderlyingInstrumentPartySubIDType_216.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216);

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noQuoteSets_0_0);
  }
  {
    FIX50SP2::MassQuote::NoQuoteSets noQuoteSets_0_1;
    // QuotSetGrp.NoQuoteSets
    multiset<string> QuotSetGrp_NoQuoteSets_1;
    FIX::LastFragment LastFragment_9(true);
    noQuoteSets_0_1.set(LastFragment_9);
    QuotSetGrp_NoQuoteSets_1.insert(LastFragment_9.getString());
    FIX::QuoteSetID QuoteSetID_1("STRING_1519997640");
    noQuoteSets_0_1.set(QuoteSetID_1);
    QuotSetGrp_NoQuoteSets_1.insert(QuoteSetID_1.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_1(FIX::UTCTIMESTAMP(20, 47, 19, 5, 3, 2017));
    noQuoteSets_0_1.set(QuoteSetValidUntilTime_1);
    QuotSetGrp_NoQuoteSets_1.insert(QuoteSetValidUntilTime_1.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_1(1421003371);
    noQuoteSets_0_1.set(TotNoQuoteEntries_1);
    QuotSetGrp_NoQuoteSets_1.insert(TotNoQuoteEntries_1.getString());
    all_values.push_back(QuotSetGrp_NoQuoteSets_1);

    // QuotEntryGrp
    // Group QuotEntryGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_0;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_3;
      FIX::BidForwardPoints BidForwardPoints_3;
      BidForwardPoints_3.setString("1582802");
      noQuoteEntries_1_1_0.set(BidForwardPoints_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(BidForwardPoints_3.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_3;
      BidForwardPoints2_3.setString("18236717");
      noQuoteEntries_1_1_0.set(BidForwardPoints2_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(BidForwardPoints2_3.getString());
      FIX::BidPx BidPx_3;
      BidPx_3.setString("12842281");
      noQuoteEntries_1_1_0.set(BidPx_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(BidPx_3.getString());
      FIX::BidSize BidSize_3;
      BidSize_3.setString("13960427");
      noQuoteEntries_1_1_0.set(BidSize_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(BidSize_3.getString());
      FIX::BidSpotRate BidSpotRate_3;
      BidSpotRate_3.setString("9432203");
      noQuoteEntries_1_1_0.set(BidSpotRate_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(BidSpotRate_3.getString());
      FIX::BidYield BidYield_3;
      BidYield_3.setString("44.510000");
      noQuoteEntries_1_1_0.set(BidYield_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(BidYield_3.getString());
      FIX::BookingType BookingType_8(0);
      noQuoteEntries_1_1_0.set(BookingType_8);
      QuotEntryGrp_NoQuoteEntries_3.insert(BookingType_8.getString());
      FIX::Currency Currency_32("JPY");
      noQuoteEntries_1_1_0.set(Currency_32);
      QuotEntryGrp_NoQuoteEntries_3.insert(Currency_32.getString());
      FIX::MidPx MidPx_3;
      MidPx_3.setString("3496507");
      noQuoteEntries_1_1_0.set(MidPx_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(MidPx_3.getString());
      FIX::MidYield MidYield_3;
      MidYield_3.setString("52.510000");
      noQuoteEntries_1_1_0.set(MidYield_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(MidYield_3.getString());
      FIX::OfferForwardPoints OfferForwardPoints_3;
      OfferForwardPoints_3.setString("7656643");
      noQuoteEntries_1_1_0.set(OfferForwardPoints_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(OfferForwardPoints_3.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_3;
      OfferForwardPoints2_3.setString("19762307");
      noQuoteEntries_1_1_0.set(OfferForwardPoints2_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(OfferForwardPoints2_3.getString());
      FIX::OfferPx OfferPx_3;
      OfferPx_3.setString("13721038");
      noQuoteEntries_1_1_0.set(OfferPx_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(OfferPx_3.getString());
      FIX::OfferSize OfferSize_3;
      OfferSize_3.setString("19760542");
      noQuoteEntries_1_1_0.set(OfferSize_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(OfferSize_3.getString());
      FIX::OfferSpotRate OfferSpotRate_3;
      OfferSpotRate_3.setString("11170472");
      noQuoteEntries_1_1_0.set(OfferSpotRate_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(OfferSpotRate_3.getString());
      FIX::OfferYield OfferYield_3;
      OfferYield_3.setString("83.950000");
      noQuoteEntries_1_1_0.set(OfferYield_3);
      QuotEntryGrp_NoQuoteEntries_3.insert(OfferYield_3.getString());
      FIX::OrdType OrdType_23('8');
      noQuoteEntries_1_1_0.set(OrdType_23);
      QuotEntryGrp_NoQuoteEntries_3.insert(OrdType_23.getString());
      FIX::OrderCapacity OrderCapacity_10('W');
      noQuoteEntries_1_1_0.set(OrderCapacity_10);
      QuotEntryGrp_NoQuoteEntries_3.insert(OrderCapacity_10.getString());
      FIX::OrderQty2 OrderQty2_4;
      OrderQty2_4.setString("20549764");
      noQuoteEntries_1_1_0.set(OrderQty2_4);
      QuotEntryGrp_NoQuoteEntries_3.insert(OrderQty2_4.getString());
      FIX::OrderRestrictions OrderRestrictions_8("MULTIPLECHARVALUE_6");
      noQuoteEntries_1_1_0.set(OrderRestrictions_8);
      QuotEntryGrp_NoQuoteEntries_3.insert(OrderRestrictions_8.getString());
      FIX::QuoteEntryID QuoteEntryID_5("STRING_599163472");
      noQuoteEntries_1_1_0.set(QuoteEntryID_5);
      QuotEntryGrp_NoQuoteEntries_3.insert(QuoteEntryID_5.getString());
      FIX::SettlDate SettlDate_21("LOCALMKTDATE_1343623226");
      noQuoteEntries_1_1_0.set(SettlDate_21);
      QuotEntryGrp_NoQuoteEntries_3.insert(SettlDate_21.getString());
      FIX::SettlDate2 SettlDate2_4("LOCALMKTDATE_1577342464");
      noQuoteEntries_1_1_0.set(SettlDate2_4);
      QuotEntryGrp_NoQuoteEntries_3.insert(SettlDate2_4.getString());
      FIX::TradingSessionID TradingSessionID_26("STRING_2");
      noQuoteEntries_1_1_0.set(TradingSessionID_26);
      QuotEntryGrp_NoQuoteEntries_3.insert(TradingSessionID_26.getString());
      FIX::TradingSessionSubID TradingSessionSubID_26("STRING_1");
      noQuoteEntries_1_1_0.set(TradingSessionSubID_26);
      QuotEntryGrp_NoQuoteEntries_3.insert(TradingSessionSubID_26.getString());
      FIX::TransactTime TransactTime_29(FIX::UTCTIMESTAMP(2, 55, 32, 24, 5, 2009));
      noQuoteEntries_1_1_0.set(TransactTime_29);
      QuotEntryGrp_NoQuoteEntries_3.insert(TransactTime_29.getString());
      FIX::ValidUntilTime ValidUntilTime_4(FIX::UTCTIMESTAMP(1, 54, 42, 24, 6, 2002));
      noQuoteEntries_1_1_0.set(ValidUntilTime_4);
      QuotEntryGrp_NoQuoteEntries_3.insert(ValidUntilTime_4.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_3);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_67;
        FIX::EncodedLegIssuer EncodedLegIssuer_67("DATA_1791850516");
        noLegs_1_0_2_0.set(EncodedLegIssuer_67);
        InstrumentLeg_67.insert(EncodedLegIssuer_67.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_67(1345035170);
        noLegs_1_0_2_0.set(EncodedLegIssuerLen_67);
        InstrumentLeg_67.insert(EncodedLegIssuerLen_67.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_67("DATA_1321004358");
        noLegs_1_0_2_0.set(EncodedLegSecurityDesc_67);
        InstrumentLeg_67.insert(EncodedLegSecurityDesc_67.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_67(1016470724);
        noLegs_1_0_2_0.set(EncodedLegSecurityDescLen_67);
        InstrumentLeg_67.insert(EncodedLegSecurityDescLen_67.getString());
        FIX::LegCFICode LegCFICode_67("STRING_1173605778");
        noLegs_1_0_2_0.set(LegCFICode_67);
        InstrumentLeg_67.insert(LegCFICode_67.getString());
        FIX::LegContractMultiplier LegContractMultiplier_67;
        LegContractMultiplier_67.setString("2905679");
        noLegs_1_0_2_0.set(LegContractMultiplier_67);
        InstrumentLeg_67.insert(LegContractMultiplier_67.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_67(684555472);
        noLegs_1_0_2_0.set(LegContractMultiplierUnit_67);
        InstrumentLeg_67.insert(LegContractMultiplierUnit_67.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_67("MONTHYEAR_2132022362");
        noLegs_1_0_2_0.set(LegContractSettlMonth_67);
        InstrumentLeg_67.insert(LegContractSettlMonth_67.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_67("COUNTRY_1517217413");
        noLegs_1_0_2_0.set(LegCountryOfIssue_67);
        InstrumentLeg_67.insert(LegCountryOfIssue_67.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_67("LOCALMKTDATE_592048294");
        noLegs_1_0_2_0.set(LegCouponPaymentDate_67);
        InstrumentLeg_67.insert(LegCouponPaymentDate_67.getString());
        FIX::LegCouponRate LegCouponRate_67;
        LegCouponRate_67.setString("51.340000");
        noLegs_1_0_2_0.set(LegCouponRate_67);
        InstrumentLeg_67.insert(LegCouponRate_67.getString());
        FIX::LegCreditRating LegCreditRating_67("STRING_2116380885");
        noLegs_1_0_2_0.set(LegCreditRating_67);
        InstrumentLeg_67.insert(LegCreditRating_67.getString());
        FIX::LegCurrency LegCurrency_67("USD");
        noLegs_1_0_2_0.set(LegCurrency_67);
        InstrumentLeg_67.insert(LegCurrency_67.getString());
        FIX::LegDatedDate LegDatedDate_67("LOCALMKTDATE_410574488");
        noLegs_1_0_2_0.set(LegDatedDate_67);
        InstrumentLeg_67.insert(LegDatedDate_67.getString());
        FIX::LegExerciseStyle LegExerciseStyle_67(1970545059);
        noLegs_1_0_2_0.set(LegExerciseStyle_67);
        InstrumentLeg_67.insert(LegExerciseStyle_67.getString());
        FIX::LegFactor LegFactor_67;
        LegFactor_67.setString("4729478");
        noLegs_1_0_2_0.set(LegFactor_67);
        InstrumentLeg_67.insert(LegFactor_67.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_67(782593330);
        noLegs_1_0_2_0.set(LegFlowScheduleType_67);
        InstrumentLeg_67.insert(LegFlowScheduleType_67.getString());
        FIX::LegInstrRegistry LegInstrRegistry_67("STRING_1481892266");
        noLegs_1_0_2_0.set(LegInstrRegistry_67);
        InstrumentLeg_67.insert(LegInstrRegistry_67.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_67("LOCALMKTDATE_588331372");
        noLegs_1_0_2_0.set(LegInterestAccrualDate_67);
        InstrumentLeg_67.insert(LegInterestAccrualDate_67.getString());
        FIX::LegIssueDate LegIssueDate_67("LOCALMKTDATE_925370143");
        noLegs_1_0_2_0.set(LegIssueDate_67);
        InstrumentLeg_67.insert(LegIssueDate_67.getString());
        FIX::LegIssuer LegIssuer_67("STRING_1151519770");
        noLegs_1_0_2_0.set(LegIssuer_67);
        InstrumentLeg_67.insert(LegIssuer_67.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_67("STRING_379903044");
        noLegs_1_0_2_0.set(LegLocaleOfIssue_67);
        InstrumentLeg_67.insert(LegLocaleOfIssue_67.getString());
        FIX::LegMaturityDate LegMaturityDate_67("LOCALMKTDATE_204891453");
        noLegs_1_0_2_0.set(LegMaturityDate_67);
        InstrumentLeg_67.insert(LegMaturityDate_67.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_67("MONTHYEAR_69706420");
        noLegs_1_0_2_0.set(LegMaturityMonthYear_67);
        InstrumentLeg_67.insert(LegMaturityMonthYear_67.getString());
        FIX::LegMaturityTime LegMaturityTime_67("TZTIMEONLY_1114695078");
        noLegs_1_0_2_0.set(LegMaturityTime_67);
        InstrumentLeg_67.insert(LegMaturityTime_67.getString());
        FIX::LegOptAttribute LegOptAttribute_67('1');
        noLegs_1_0_2_0.set(LegOptAttribute_67);
        InstrumentLeg_67.insert(LegOptAttribute_67.getString());
        FIX::LegOptionRatio LegOptionRatio_67;
        LegOptionRatio_67.setString("12123129");
        noLegs_1_0_2_0.set(LegOptionRatio_67);
        InstrumentLeg_67.insert(LegOptionRatio_67.getString());
        FIX::LegPool LegPool_67("STRING_253696695");
        noLegs_1_0_2_0.set(LegPool_67);
        InstrumentLeg_67.insert(LegPool_67.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_67("STRING_1803017988");
        noLegs_1_0_2_0.set(LegPriceUnitOfMeasure_67);
        InstrumentLeg_67.insert(LegPriceUnitOfMeasure_67.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_67;
        LegPriceUnitOfMeasureQty_67.setString("5570865");
        noLegs_1_0_2_0.set(LegPriceUnitOfMeasureQty_67);
        InstrumentLeg_67.insert(LegPriceUnitOfMeasureQty_67.getString());
        FIX::LegProduct LegProduct_67(2045547212);
        noLegs_1_0_2_0.set(LegProduct_67);
        InstrumentLeg_67.insert(LegProduct_67.getString());
        FIX::LegPutOrCall LegPutOrCall_67(1000569510);
        noLegs_1_0_2_0.set(LegPutOrCall_67);
        InstrumentLeg_67.insert(LegPutOrCall_67.getString());
        FIX::LegRatioQty LegRatioQty_67;
        LegRatioQty_67.setString("18780909");
        noLegs_1_0_2_0.set(LegRatioQty_67);
        InstrumentLeg_67.insert(LegRatioQty_67.getString());
        FIX::LegRedemptionDate LegRedemptionDate_67("LOCALMKTDATE_914534288");
        noLegs_1_0_2_0.set(LegRedemptionDate_67);
        InstrumentLeg_67.insert(LegRedemptionDate_67.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_67("STRING_26691641");
        noLegs_1_0_2_0.set(LegRepoCollateralSecurityType_67);
        InstrumentLeg_67.insert(LegRepoCollateralSecurityType_67.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_67;
        LegRepurchaseRate_67.setString("52.250000");
        noLegs_1_0_2_0.set(LegRepurchaseRate_67);
        InstrumentLeg_67.insert(LegRepurchaseRate_67.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_67(1599089760);
        noLegs_1_0_2_0.set(LegRepurchaseTerm_67);
        InstrumentLeg_67.insert(LegRepurchaseTerm_67.getString());
        FIX::LegSecurityDesc LegSecurityDesc_67("STRING_11230355");
        noLegs_1_0_2_0.set(LegSecurityDesc_67);
        InstrumentLeg_67.insert(LegSecurityDesc_67.getString());
        FIX::LegSecurityExchange LegSecurityExchange_67("EXCHANGE_1538392638");
        noLegs_1_0_2_0.set(LegSecurityExchange_67);
        InstrumentLeg_67.insert(LegSecurityExchange_67.getString());
        FIX::LegSecurityID LegSecurityID_67("STRING_43654407");
        noLegs_1_0_2_0.set(LegSecurityID_67);
        InstrumentLeg_67.insert(LegSecurityID_67.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_67("STRING_212455489");
        noLegs_1_0_2_0.set(LegSecurityIDSource_67);
        InstrumentLeg_67.insert(LegSecurityIDSource_67.getString());
        FIX::LegSecuritySubType LegSecuritySubType_67("STRING_1507289875");
        noLegs_1_0_2_0.set(LegSecuritySubType_67);
        InstrumentLeg_67.insert(LegSecuritySubType_67.getString());
        FIX::LegSecurityType LegSecurityType_67("STRING_1979325928");
        noLegs_1_0_2_0.set(LegSecurityType_67);
        InstrumentLeg_67.insert(LegSecurityType_67.getString());
        FIX::LegSide LegSide_67('1');
        noLegs_1_0_2_0.set(LegSide_67);
        InstrumentLeg_67.insert(LegSide_67.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_67("STRING_1917864364");
        noLegs_1_0_2_0.set(LegStateOrProvinceOfIssue_67);
        InstrumentLeg_67.insert(LegStateOrProvinceOfIssue_67.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_67("EUR");
        noLegs_1_0_2_0.set(LegStrikeCurrency_67);
        InstrumentLeg_67.insert(LegStrikeCurrency_67.getString());
        FIX::LegStrikePrice LegStrikePrice_67;
        LegStrikePrice_67.setString("5529740");
        noLegs_1_0_2_0.set(LegStrikePrice_67);
        InstrumentLeg_67.insert(LegStrikePrice_67.getString());
        FIX::LegSymbol LegSymbol_67("STRING_1136795957");
        noLegs_1_0_2_0.set(LegSymbol_67);
        InstrumentLeg_67.insert(LegSymbol_67.getString());
        FIX::LegSymbolSfx LegSymbolSfx_67("STRING_904818612");
        noLegs_1_0_2_0.set(LegSymbolSfx_67);
        InstrumentLeg_67.insert(LegSymbolSfx_67.getString());
        FIX::LegTimeUnit LegTimeUnit_67("STRING_1478344189");
        noLegs_1_0_2_0.set(LegTimeUnit_67);
        InstrumentLeg_67.insert(LegTimeUnit_67.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_67("STRING_140832080");
        noLegs_1_0_2_0.set(LegUnitOfMeasure_67);
        InstrumentLeg_67.insert(LegUnitOfMeasure_67.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_67;
        LegUnitOfMeasureQty_67.setString("12847216");
        noLegs_1_0_2_0.set(LegUnitOfMeasureQty_67);
        InstrumentLeg_67.insert(LegUnitOfMeasureQty_67.getString());
        all_values.push_back(InstrumentLeg_67);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_131;
          FIX::LegSecurityAltID LegSecurityAltID_131("STRING_210538500");
          noLegSecurityAltID_1_0_0_3_0.set(LegSecurityAltID_131);
          LegSecAltIDGrp_NoLegSecurityAltID_131.insert(LegSecurityAltID_131.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_131("STRING_251933086");
          noLegSecurityAltID_1_0_0_3_0.set(LegSecurityAltIDSource_131);
          LegSecAltIDGrp_NoLegSecurityAltID_131.insert(LegSecurityAltIDSource_131.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_131);

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_132;
          FIX::LegSecurityAltID LegSecurityAltID_132("STRING_759399210");
          noLegSecurityAltID_1_0_0_3_1.set(LegSecurityAltID_132);
          LegSecAltIDGrp_NoLegSecurityAltID_132.insert(LegSecurityAltID_132.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_132("STRING_1422851472");
          noLegSecurityAltID_1_0_0_3_1.set(LegSecurityAltIDSource_132);
          LegSecAltIDGrp_NoLegSecurityAltID_132.insert(LegSecurityAltIDSource_132.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_132);

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_133;
          FIX::LegSecurityAltID LegSecurityAltID_133("STRING_505629782");
          noLegSecurityAltID_1_0_0_3_2.set(LegSecurityAltID_133);
          LegSecAltIDGrp_NoLegSecurityAltID_133.insert(LegSecurityAltID_133.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_133("STRING_414933550");
          noLegSecurityAltID_1_0_0_3_2.set(LegSecurityAltIDSource_133);
          LegSecAltIDGrp_NoLegSecurityAltID_133.insert(LegSecurityAltIDSource_133.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_133);

          noLegs_1_0_2_0.addGroup(noLegSecurityAltID_1_0_0_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noLegs_1_0_2_0);
      }
      // Instrument
      multiset<string> Instrument_37;
      FIX::AttachmentPoint AttachmentPoint_37;
      AttachmentPoint_37.setString("80.540000");
      noQuoteEntries_1_1_0.set(AttachmentPoint_37);
      Instrument_37.insert(AttachmentPoint_37.getString());
      FIX::CFICode CFICode_37("STRING_403693346");
      noQuoteEntries_1_1_0.set(CFICode_37);
      Instrument_37.insert(CFICode_37.getString());
      FIX::CPProgram CPProgram_37(99);
      noQuoteEntries_1_1_0.set(CPProgram_37);
      Instrument_37.insert(CPProgram_37.getString());
      FIX::CPRegType CPRegType_37("STRING_1710545346");
      noQuoteEntries_1_1_0.set(CPRegType_37);
      Instrument_37.insert(CPRegType_37.getString());
      FIX::CapPrice CapPrice_37;
      CapPrice_37.setString("13182276");
      noQuoteEntries_1_1_0.set(CapPrice_37);
      Instrument_37.insert(CapPrice_37.getString());
      FIX::ContractMultiplier ContractMultiplier_37;
      ContractMultiplier_37.setString("14421947");
      noQuoteEntries_1_1_0.set(ContractMultiplier_37);
      Instrument_37.insert(ContractMultiplier_37.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_37(1);
      noQuoteEntries_1_1_0.set(ContractMultiplierUnit_37);
      Instrument_37.insert(ContractMultiplierUnit_37.getString());
      FIX::ContractSettlMonth ContractSettlMonth_37("MONTHYEAR_769833747");
      noQuoteEntries_1_1_0.set(ContractSettlMonth_37);
      Instrument_37.insert(ContractSettlMonth_37.getString());
      FIX::CountryOfIssue CountryOfIssue_37("COUNTRY_1453425057");
      noQuoteEntries_1_1_0.set(CountryOfIssue_37);
      Instrument_37.insert(CountryOfIssue_37.getString());
      FIX::CouponPaymentDate CouponPaymentDate_37("LOCALMKTDATE_1122629562");
      noQuoteEntries_1_1_0.set(CouponPaymentDate_37);
      Instrument_37.insert(CouponPaymentDate_37.getString());
      FIX::CouponRate CouponRate_37;
      CouponRate_37.setString("81.540000");
      noQuoteEntries_1_1_0.set(CouponRate_37);
      Instrument_37.insert(CouponRate_37.getString());
      FIX::CreditRating CreditRating_37("STRING_1665880546");
      noQuoteEntries_1_1_0.set(CreditRating_37);
      Instrument_37.insert(CreditRating_37.getString());
      FIX::DatedDate DatedDate_37("LOCALMKTDATE_482435789");
      noQuoteEntries_1_1_0.set(DatedDate_37);
      Instrument_37.insert(DatedDate_37.getString());
      FIX::DetachmentPoint DetachmentPoint_37;
      DetachmentPoint_37.setString("4.340000");
      noQuoteEntries_1_1_0.set(DetachmentPoint_37);
      Instrument_37.insert(DetachmentPoint_37.getString());
      FIX::EncodedIssuer EncodedIssuer_37("DATA_1509419985");
      noQuoteEntries_1_1_0.set(EncodedIssuer_37);
      Instrument_37.insert(EncodedIssuer_37.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_37(252816505);
      noQuoteEntries_1_1_0.set(EncodedIssuerLen_37);
      Instrument_37.insert(EncodedIssuerLen_37.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_37("DATA_300234125");
      noQuoteEntries_1_1_0.set(EncodedSecurityDesc_37);
      Instrument_37.insert(EncodedSecurityDesc_37.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_37(1825907225);
      noQuoteEntries_1_1_0.set(EncodedSecurityDescLen_37);
      Instrument_37.insert(EncodedSecurityDescLen_37.getString());
      FIX::ExerciseStyle ExerciseStyle_37(2);
      noQuoteEntries_1_1_0.set(ExerciseStyle_37);
      Instrument_37.insert(ExerciseStyle_37.getString());
      FIX::Factor Factor_37;
      Factor_37.setString("14370300");
      noQuoteEntries_1_1_0.set(Factor_37);
      Instrument_37.insert(Factor_37.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_37(false);
      noQuoteEntries_1_1_0.set(FlexProductEligibilityIndicator_37);
      Instrument_37.insert(FlexProductEligibilityIndicator_37.getString());
      FIX::FlexibleIndicator FlexibleIndicator_37(false);
      noQuoteEntries_1_1_0.set(FlexibleIndicator_37);
      Instrument_37.insert(FlexibleIndicator_37.getString());
      FIX::FloorPrice FloorPrice_37;
      FloorPrice_37.setString("15778621");
      noQuoteEntries_1_1_0.set(FloorPrice_37);
      Instrument_37.insert(FloorPrice_37.getString());
      FIX::FlowScheduleType FlowScheduleType_37(0);
      noQuoteEntries_1_1_0.set(FlowScheduleType_37);
      Instrument_37.insert(FlowScheduleType_37.getString());
      FIX::InstrRegistry InstrRegistry_37("STRING_1819886736");
      noQuoteEntries_1_1_0.set(InstrRegistry_37);
      Instrument_37.insert(InstrRegistry_37.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_37('1');
      noQuoteEntries_1_1_0.set(InstrmtAssignmentMethod_37);
      Instrument_37.insert(InstrmtAssignmentMethod_37.getString());
      FIX::InterestAccrualDate InterestAccrualDate_37("LOCALMKTDATE_2119896931");
      noQuoteEntries_1_1_0.set(InterestAccrualDate_37);
      Instrument_37.insert(InterestAccrualDate_37.getString());
      FIX::IssueDate IssueDate_37("LOCALMKTDATE_431802299");
      noQuoteEntries_1_1_0.set(IssueDate_37);
      Instrument_37.insert(IssueDate_37.getString());
      FIX::Issuer Issuer_37("STRING_1063768486");
      noQuoteEntries_1_1_0.set(Issuer_37);
      Instrument_37.insert(Issuer_37.getString());
      FIX::ListMethod ListMethod_37(1);
      noQuoteEntries_1_1_0.set(ListMethod_37);
      Instrument_37.insert(ListMethod_37.getString());
      FIX::LocaleOfIssue LocaleOfIssue_37("STRING_846735849");
      noQuoteEntries_1_1_0.set(LocaleOfIssue_37);
      Instrument_37.insert(LocaleOfIssue_37.getString());
      FIX::MaturityDate MaturityDate_37("LOCALMKTDATE_896222892");
      noQuoteEntries_1_1_0.set(MaturityDate_37);
      Instrument_37.insert(MaturityDate_37.getString());
      FIX::MaturityMonthYear MaturityMonthYear_37("MONTHYEAR_881736411");
      noQuoteEntries_1_1_0.set(MaturityMonthYear_37);
      Instrument_37.insert(MaturityMonthYear_37.getString());
      FIX::MaturityTime MaturityTime_37("TZTIMEONLY_114755262");
      noQuoteEntries_1_1_0.set(MaturityTime_37);
      Instrument_37.insert(MaturityTime_37.getString());
      FIX::MinPriceIncrement MinPriceIncrement_37;
      MinPriceIncrement_37.setString("4592845");
      noQuoteEntries_1_1_0.set(MinPriceIncrement_37);
      Instrument_37.insert(MinPriceIncrement_37.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_37;
      MinPriceIncrementAmount_37.setString("524803");
      noQuoteEntries_1_1_0.set(MinPriceIncrementAmount_37);
      Instrument_37.insert(MinPriceIncrementAmount_37.getString());
      FIX::NTPositionLimit NTPositionLimit_37(1556949964);
      noQuoteEntries_1_1_0.set(NTPositionLimit_37);
      Instrument_37.insert(NTPositionLimit_37.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_37;
      NotionalPercentageOutstanding_37.setString("15.140000");
      noQuoteEntries_1_1_0.set(NotionalPercentageOutstanding_37);
      Instrument_37.insert(NotionalPercentageOutstanding_37.getString());
      FIX::OptAttribute OptAttribute_37('8');
      noQuoteEntries_1_1_0.set(OptAttribute_37);
      Instrument_37.insert(OptAttribute_37.getString());
      FIX::OptPayoutAmount OptPayoutAmount_37;
      OptPayoutAmount_37.setString("8628913");
      noQuoteEntries_1_1_0.set(OptPayoutAmount_37);
      Instrument_37.insert(OptPayoutAmount_37.getString());
      FIX::OptPayoutType OptPayoutType_37(2);
      noQuoteEntries_1_1_0.set(OptPayoutType_37);
      Instrument_37.insert(OptPayoutType_37.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_37;
      OriginalNotionalPercentageOutstanding_37.setString("22.990000");
      noQuoteEntries_1_1_0.set(OriginalNotionalPercentageOutstanding_37);
      Instrument_37.insert(OriginalNotionalPercentageOutstanding_37.getString());
      FIX::Pool Pool_37("STRING_381288271");
      noQuoteEntries_1_1_0.set(Pool_37);
      Instrument_37.insert(Pool_37.getString());
      FIX::PositionLimit PositionLimit_37(1648586865);
      noQuoteEntries_1_1_0.set(PositionLimit_37);
      Instrument_37.insert(PositionLimit_37.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_37("STRING_INX");
      noQuoteEntries_1_1_0.set(PriceQuoteMethod_37);
      Instrument_37.insert(PriceQuoteMethod_37.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_37("STRING_1890708257");
      noQuoteEntries_1_1_0.set(PriceUnitOfMeasure_37);
      Instrument_37.insert(PriceUnitOfMeasure_37.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_37;
      PriceUnitOfMeasureQty_37.setString("19014033");
      noQuoteEntries_1_1_0.set(PriceUnitOfMeasureQty_37);
      Instrument_37.insert(PriceUnitOfMeasureQty_37.getString());
      FIX::Product Product_39(8);
      noQuoteEntries_1_1_0.set(Product_39);
      Instrument_37.insert(Product_39.getString());
      FIX::ProductComplex ProductComplex_37("STRING_1569131834");
      noQuoteEntries_1_1_0.set(ProductComplex_37);
      Instrument_37.insert(ProductComplex_37.getString());
      FIX::PutOrCall PutOrCall_37(1);
      noQuoteEntries_1_1_0.set(PutOrCall_37);
      Instrument_37.insert(PutOrCall_37.getString());
      FIX::RedemptionDate RedemptionDate_37("LOCALMKTDATE_1870913292");
      noQuoteEntries_1_1_0.set(RedemptionDate_37);
      Instrument_37.insert(RedemptionDate_37.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_37("STRING_4890375");
      noQuoteEntries_1_1_0.set(RepoCollateralSecurityType_37);
      Instrument_37.insert(RepoCollateralSecurityType_37.getString());
      FIX::RepurchaseRate RepurchaseRate_37;
      RepurchaseRate_37.setString("13.680000");
      noQuoteEntries_1_1_0.set(RepurchaseRate_37);
      Instrument_37.insert(RepurchaseRate_37.getString());
      FIX::RepurchaseTerm RepurchaseTerm_37(1301291807);
      noQuoteEntries_1_1_0.set(RepurchaseTerm_37);
      Instrument_37.insert(RepurchaseTerm_37.getString());
      FIX::RestructuringType RestructuringType_37("STRING_FR");
      noQuoteEntries_1_1_0.set(RestructuringType_37);
      Instrument_37.insert(RestructuringType_37.getString());
      FIX::SecurityDesc SecurityDesc_37("STRING_368764457");
      noQuoteEntries_1_1_0.set(SecurityDesc_37);
      Instrument_37.insert(SecurityDesc_37.getString());
      FIX::SecurityExchange SecurityExchange_37("EXCHANGE_942208821");
      noQuoteEntries_1_1_0.set(SecurityExchange_37);
      Instrument_37.insert(SecurityExchange_37.getString());
      FIX::SecurityGroup SecurityGroup_37("STRING_1845267503");
      noQuoteEntries_1_1_0.set(SecurityGroup_37);
      Instrument_37.insert(SecurityGroup_37.getString());
      FIX::SecurityID SecurityID_37("STRING_800566756");
      noQuoteEntries_1_1_0.set(SecurityID_37);
      Instrument_37.insert(SecurityID_37.getString());
      FIX::SecurityIDSource SecurityIDSource_37("STRING_H");
      noQuoteEntries_1_1_0.set(SecurityIDSource_37);
      Instrument_37.insert(SecurityIDSource_37.getString());
      FIX::SecurityStatus SecurityStatus_37("STRING_2");
      noQuoteEntries_1_1_0.set(SecurityStatus_37);
      Instrument_37.insert(SecurityStatus_37.getString());
      FIX::SecuritySubType SecuritySubType_38("STRING_1647302605");
      noQuoteEntries_1_1_0.set(SecuritySubType_38);
      Instrument_37.insert(SecuritySubType_38.getString());
      FIX::SecurityType SecurityType_39("STRING_FXFWD");
      noQuoteEntries_1_1_0.set(SecurityType_39);
      Instrument_37.insert(SecurityType_39.getString());
      FIX::Seniority Seniority_37("STRING_SB");
      noQuoteEntries_1_1_0.set(Seniority_37);
      Instrument_37.insert(Seniority_37.getString());
      FIX::SettlMethod SettlMethod_37('C');
      noQuoteEntries_1_1_0.set(SettlMethod_37);
      Instrument_37.insert(SettlMethod_37.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_37("STRING_1214001143");
      noQuoteEntries_1_1_0.set(SettleOnOpenFlag_37);
      Instrument_37.insert(SettleOnOpenFlag_37.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_37("STRING_1110043730");
      noQuoteEntries_1_1_0.set(StateOrProvinceOfIssue_37);
      Instrument_37.insert(StateOrProvinceOfIssue_37.getString());
      FIX::StrikeCurrency StrikeCurrency_37("CHF");
      noQuoteEntries_1_1_0.set(StrikeCurrency_37);
      Instrument_37.insert(StrikeCurrency_37.getString());
      FIX::StrikeMultiplier StrikeMultiplier_37;
      StrikeMultiplier_37.setString("19323578");
      noQuoteEntries_1_1_0.set(StrikeMultiplier_37);
      Instrument_37.insert(StrikeMultiplier_37.getString());
      FIX::StrikePrice StrikePrice_37;
      StrikePrice_37.setString("20344155");
      noQuoteEntries_1_1_0.set(StrikePrice_37);
      Instrument_37.insert(StrikePrice_37.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_37(1);
      noQuoteEntries_1_1_0.set(StrikePriceBoundaryMethod_37);
      Instrument_37.insert(StrikePriceBoundaryMethod_37.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_37;
      StrikePriceBoundaryPrecision_37.setString("65.260000");
      noQuoteEntries_1_1_0.set(StrikePriceBoundaryPrecision_37);
      Instrument_37.insert(StrikePriceBoundaryPrecision_37.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_37(2);
      noQuoteEntries_1_1_0.set(StrikePriceDeterminationMethod_37);
      Instrument_37.insert(StrikePriceDeterminationMethod_37.getString());
      FIX::StrikeValue StrikeValue_37;
      StrikeValue_37.setString("19247769");
      noQuoteEntries_1_1_0.set(StrikeValue_37);
      Instrument_37.insert(StrikeValue_37.getString());
      FIX::Symbol Symbol_37("STRING_1554325611");
      noQuoteEntries_1_1_0.set(Symbol_37);
      Instrument_37.insert(Symbol_37.getString());
      FIX::SymbolSfx SymbolSfx_37("STRING_CD");
      noQuoteEntries_1_1_0.set(SymbolSfx_37);
      Instrument_37.insert(SymbolSfx_37.getString());
      FIX::TimeUnit TimeUnit_37("STRING_D");
      noQuoteEntries_1_1_0.set(TimeUnit_37);
      Instrument_37.insert(TimeUnit_37.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_37(2);
      noQuoteEntries_1_1_0.set(UnderlyingPriceDeterminationMethod_37);
      Instrument_37.insert(UnderlyingPriceDeterminationMethod_37.getString());
      FIX::UnitOfMeasure UnitOfMeasure_37("STRING_MWh");
      noQuoteEntries_1_1_0.set(UnitOfMeasure_37);
      Instrument_37.insert(UnitOfMeasure_37.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_37;
      UnitOfMeasureQty_37.setString("909233");
      noQuoteEntries_1_1_0.set(UnitOfMeasureQty_37);
      Instrument_37.insert(UnitOfMeasureQty_37.getString());
      FIX::ValuationMethod ValuationMethod_37("STRING_FUT");
      noQuoteEntries_1_1_0.set(ValuationMethod_37);
      Instrument_37.insert(ValuationMethod_37.getString());
      all_values.push_back(Instrument_37);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_70;
        FIX::ComplexEventCondition ComplexEventCondition_70(2);
        noComplexEvents_1_0_2_0.set(ComplexEventCondition_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventCondition_70.getString());
        FIX::ComplexEventPrice ComplexEventPrice_70;
        ComplexEventPrice_70.setString("8654466");
        noComplexEvents_1_0_2_0.set(ComplexEventPrice_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventPrice_70.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_70(2);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryMethod_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventPriceBoundaryMethod_70.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_70;
        ComplexEventPriceBoundaryPrecision_70.setString("91.260000");
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryPrecision_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventPriceBoundaryPrecision_70.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_70(2);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceTimeType_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventPriceTimeType_70.getString());
        FIX::ComplexEventType ComplexEventType_70(5);
        noComplexEvents_1_0_2_0.set(ComplexEventType_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexEventType_70.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_70;
        ComplexOptPayoutAmount_70.setString("19566158");
        noComplexEvents_1_0_2_0.set(ComplexOptPayoutAmount_70);
        ComplexEvents_NoComplexEvents_70.insert(ComplexOptPayoutAmount_70.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_70);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_138;
          FIX::ComplexEventEndDate ComplexEventEndDate_138(FIX::UTCTIMESTAMP(23, 51, 12, 15, 3, 2009));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventEndDate_138);
          ComplexEventDates_NoComplexEventDates_138.insert(ComplexEventEndDate_138.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_138(FIX::UTCTIMESTAMP(3, 30, 54, 12, 6, 2013));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventStartDate_138);
          ComplexEventDates_NoComplexEventDates_138.insert(ComplexEventStartDate_138.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_138);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_276;
            FIX::ComplexEventEndTime ComplexEventEndTime_276(FIX::UTCTIMEONLY(14, 36, 54));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventEndTime_276);
            ComplexEventTimes_NoComplexEventTimes_276.insert(ComplexEventEndTime_276.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_276(FIX::UTCTIMEONLY(20, 32, 14));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventStartTime_276);
            ComplexEventTimes_NoComplexEventTimes_276.insert(ComplexEventStartTime_276.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_276);

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_277;
            FIX::ComplexEventEndTime ComplexEventEndTime_277(FIX::UTCTIMEONLY(9, 57, 23));
            noComplexEventTimes_1_0_0_0_4_1.set(ComplexEventEndTime_277);
            ComplexEventTimes_NoComplexEventTimes_277.insert(ComplexEventEndTime_277.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_277(FIX::UTCTIMEONLY(4, 5, 14));
            noComplexEventTimes_1_0_0_0_4_1.set(ComplexEventStartTime_277);
            ComplexEventTimes_NoComplexEventTimes_277.insert(ComplexEventStartTime_277.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_277);

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_278;
            FIX::ComplexEventEndTime ComplexEventEndTime_278(FIX::UTCTIMEONLY(9, 5, 57));
            noComplexEventTimes_1_0_0_0_4_2.set(ComplexEventEndTime_278);
            ComplexEventTimes_NoComplexEventTimes_278.insert(ComplexEventEndTime_278.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_278(FIX::UTCTIMEONLY(23, 0, 44));
            noComplexEventTimes_1_0_0_0_4_2.set(ComplexEventStartTime_278);
            ComplexEventTimes_NoComplexEventTimes_278.insert(ComplexEventStartTime_278.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_278);

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_2);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_139;
          FIX::ComplexEventEndDate ComplexEventEndDate_139(FIX::UTCTIMESTAMP(10, 30, 14, 3, 3, 2004));
          noComplexEventDates_1_0_0_3_1.set(ComplexEventEndDate_139);
          ComplexEventDates_NoComplexEventDates_139.insert(ComplexEventEndDate_139.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_139(FIX::UTCTIMESTAMP(16, 40, 50, 14, 2, 2010));
          noComplexEventDates_1_0_0_3_1.set(ComplexEventStartDate_139);
          ComplexEventDates_NoComplexEventDates_139.insert(ComplexEventStartDate_139.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_139);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_279;
            FIX::ComplexEventEndTime ComplexEventEndTime_279(FIX::UTCTIMEONLY(23, 34, 58));
            noComplexEventTimes_1_0_0_1_4_0.set(ComplexEventEndTime_279);
            ComplexEventTimes_NoComplexEventTimes_279.insert(ComplexEventEndTime_279.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_279(FIX::UTCTIMEONLY(2, 55, 52));
            noComplexEventTimes_1_0_0_1_4_0.set(ComplexEventStartTime_279);
            ComplexEventTimes_NoComplexEventTimes_279.insert(ComplexEventStartTime_279.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_279);

            noComplexEventDates_1_0_0_3_1.addGroup(noComplexEventTimes_1_0_0_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_280;
            FIX::ComplexEventEndTime ComplexEventEndTime_280(FIX::UTCTIMEONLY(16, 49, 12));
            noComplexEventTimes_1_0_0_1_4_1.set(ComplexEventEndTime_280);
            ComplexEventTimes_NoComplexEventTimes_280.insert(ComplexEventEndTime_280.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_280(FIX::UTCTIMEONLY(4, 4, 25));
            noComplexEventTimes_1_0_0_1_4_1.set(ComplexEventStartTime_280);
            ComplexEventTimes_NoComplexEventTimes_280.insert(ComplexEventStartTime_280.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_280);

            noComplexEventDates_1_0_0_3_1.addGroup(noComplexEventTimes_1_0_0_1_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_281;
            FIX::ComplexEventEndTime ComplexEventEndTime_281(FIX::UTCTIMEONLY(2, 48, 20));
            noComplexEventTimes_1_0_0_1_4_2.set(ComplexEventEndTime_281);
            ComplexEventTimes_NoComplexEventTimes_281.insert(ComplexEventEndTime_281.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_281(FIX::UTCTIMEONLY(2, 17, 14));
            noComplexEventTimes_1_0_0_1_4_2.set(ComplexEventStartTime_281);
            ComplexEventTimes_NoComplexEventTimes_281.insert(ComplexEventStartTime_281.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_281);

            noComplexEventDates_1_0_0_3_1.addGroup(noComplexEventTimes_1_0_0_1_4_2);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noComplexEvents_1_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_71;
        FIX::ComplexEventCondition ComplexEventCondition_71(1);
        noComplexEvents_1_0_2_1.set(ComplexEventCondition_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventCondition_71.getString());
        FIX::ComplexEventPrice ComplexEventPrice_71;
        ComplexEventPrice_71.setString("16464067");
        noComplexEvents_1_0_2_1.set(ComplexEventPrice_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventPrice_71.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_71(5);
        noComplexEvents_1_0_2_1.set(ComplexEventPriceBoundaryMethod_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventPriceBoundaryMethod_71.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_71;
        ComplexEventPriceBoundaryPrecision_71.setString("61.440000");
        noComplexEvents_1_0_2_1.set(ComplexEventPriceBoundaryPrecision_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventPriceBoundaryPrecision_71.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_71(3);
        noComplexEvents_1_0_2_1.set(ComplexEventPriceTimeType_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventPriceTimeType_71.getString());
        FIX::ComplexEventType ComplexEventType_71(9);
        noComplexEvents_1_0_2_1.set(ComplexEventType_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexEventType_71.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_71;
        ComplexOptPayoutAmount_71.setString("19498058");
        noComplexEvents_1_0_2_1.set(ComplexOptPayoutAmount_71);
        ComplexEvents_NoComplexEvents_71.insert(ComplexOptPayoutAmount_71.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_71);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_140;
          FIX::ComplexEventEndDate ComplexEventEndDate_140(FIX::UTCTIMESTAMP(11, 59, 7, 25, 7, 2016));
          noComplexEventDates_1_0_1_3_0.set(ComplexEventEndDate_140);
          ComplexEventDates_NoComplexEventDates_140.insert(ComplexEventEndDate_140.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_140(FIX::UTCTIMESTAMP(3, 33, 20, 24, 3, 2012));
          noComplexEventDates_1_0_1_3_0.set(ComplexEventStartDate_140);
          ComplexEventDates_NoComplexEventDates_140.insert(ComplexEventStartDate_140.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_140);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_282;
            FIX::ComplexEventEndTime ComplexEventEndTime_282(FIX::UTCTIMEONLY(7, 17, 37));
            noComplexEventTimes_1_0_1_0_4_0.set(ComplexEventEndTime_282);
            ComplexEventTimes_NoComplexEventTimes_282.insert(ComplexEventEndTime_282.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_282(FIX::UTCTIMEONLY(7, 54, 7));
            noComplexEventTimes_1_0_1_0_4_0.set(ComplexEventStartTime_282);
            ComplexEventTimes_NoComplexEventTimes_282.insert(ComplexEventStartTime_282.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_282);

            noComplexEventDates_1_0_1_3_0.addGroup(noComplexEventTimes_1_0_1_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_283;
            FIX::ComplexEventEndTime ComplexEventEndTime_283(FIX::UTCTIMEONLY(7, 11, 22));
            noComplexEventTimes_1_0_1_0_4_1.set(ComplexEventEndTime_283);
            ComplexEventTimes_NoComplexEventTimes_283.insert(ComplexEventEndTime_283.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_283(FIX::UTCTIMEONLY(1, 3, 11));
            noComplexEventTimes_1_0_1_0_4_1.set(ComplexEventStartTime_283);
            ComplexEventTimes_NoComplexEventTimes_283.insert(ComplexEventStartTime_283.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_283);

            noComplexEventDates_1_0_1_3_0.addGroup(noComplexEventTimes_1_0_1_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_284;
            FIX::ComplexEventEndTime ComplexEventEndTime_284(FIX::UTCTIMEONLY(18, 2, 5));
            noComplexEventTimes_1_0_1_0_4_2.set(ComplexEventEndTime_284);
            ComplexEventTimes_NoComplexEventTimes_284.insert(ComplexEventEndTime_284.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_284(FIX::UTCTIMEONLY(0, 49, 12));
            noComplexEventTimes_1_0_1_0_4_2.set(ComplexEventStartTime_284);
            ComplexEventTimes_NoComplexEventTimes_284.insert(ComplexEventStartTime_284.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_284);

            noComplexEventDates_1_0_1_3_0.addGroup(noComplexEventTimes_1_0_1_0_4_2);
          }
          noComplexEvents_1_0_2_1.addGroup(noComplexEventDates_1_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_141;
          FIX::ComplexEventEndDate ComplexEventEndDate_141(FIX::UTCTIMESTAMP(23, 24, 39, 9, 6, 2007));
          noComplexEventDates_1_0_1_3_1.set(ComplexEventEndDate_141);
          ComplexEventDates_NoComplexEventDates_141.insert(ComplexEventEndDate_141.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_141(FIX::UTCTIMESTAMP(0, 18, 42, 13, 7, 2012));
          noComplexEventDates_1_0_1_3_1.set(ComplexEventStartDate_141);
          ComplexEventDates_NoComplexEventDates_141.insert(ComplexEventStartDate_141.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_141);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_285;
            FIX::ComplexEventEndTime ComplexEventEndTime_285(FIX::UTCTIMEONLY(20, 27, 25));
            noComplexEventTimes_1_0_1_1_4_0.set(ComplexEventEndTime_285);
            ComplexEventTimes_NoComplexEventTimes_285.insert(ComplexEventEndTime_285.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_285(FIX::UTCTIMEONLY(8, 28, 25));
            noComplexEventTimes_1_0_1_1_4_0.set(ComplexEventStartTime_285);
            ComplexEventTimes_NoComplexEventTimes_285.insert(ComplexEventStartTime_285.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_285);

            noComplexEventDates_1_0_1_3_1.addGroup(noComplexEventTimes_1_0_1_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_286;
            FIX::ComplexEventEndTime ComplexEventEndTime_286(FIX::UTCTIMEONLY(2, 27, 51));
            noComplexEventTimes_1_0_1_1_4_1.set(ComplexEventEndTime_286);
            ComplexEventTimes_NoComplexEventTimes_286.insert(ComplexEventEndTime_286.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_286(FIX::UTCTIMEONLY(19, 41, 46));
            noComplexEventTimes_1_0_1_1_4_1.set(ComplexEventStartTime_286);
            ComplexEventTimes_NoComplexEventTimes_286.insert(ComplexEventStartTime_286.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_286);

            noComplexEventDates_1_0_1_3_1.addGroup(noComplexEventTimes_1_0_1_1_4_1);
          }
          noComplexEvents_1_0_2_1.addGroup(noComplexEventDates_1_0_1_3_1);
        }
        noQuoteEntries_1_1_0.addGroup(noComplexEvents_1_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_0_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_72;
        FIX::ComplexEventCondition ComplexEventCondition_72(2);
        noComplexEvents_1_0_2_2.set(ComplexEventCondition_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexEventCondition_72.getString());
        FIX::ComplexEventPrice ComplexEventPrice_72;
        ComplexEventPrice_72.setString("117014");
        noComplexEvents_1_0_2_2.set(ComplexEventPrice_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexEventPrice_72.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_72(3);
        noComplexEvents_1_0_2_2.set(ComplexEventPriceBoundaryMethod_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexEventPriceBoundaryMethod_72.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_72;
        ComplexEventPriceBoundaryPrecision_72.setString("23.060000");
        noComplexEvents_1_0_2_2.set(ComplexEventPriceBoundaryPrecision_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexEventPriceBoundaryPrecision_72.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_72(2);
        noComplexEvents_1_0_2_2.set(ComplexEventPriceTimeType_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexEventPriceTimeType_72.getString());
        FIX::ComplexEventType ComplexEventType_72(8);
        noComplexEvents_1_0_2_2.set(ComplexEventType_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexEventType_72.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_72;
        ComplexOptPayoutAmount_72.setString("538001");
        noComplexEvents_1_0_2_2.set(ComplexOptPayoutAmount_72);
        ComplexEvents_NoComplexEvents_72.insert(ComplexOptPayoutAmount_72.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_72);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_142;
          FIX::ComplexEventEndDate ComplexEventEndDate_142(FIX::UTCTIMESTAMP(18, 25, 8, 0, 6, 2012));
          noComplexEventDates_1_0_2_3_0.set(ComplexEventEndDate_142);
          ComplexEventDates_NoComplexEventDates_142.insert(ComplexEventEndDate_142.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_142(FIX::UTCTIMESTAMP(17, 43, 41, 3, 4, 2007));
          noComplexEventDates_1_0_2_3_0.set(ComplexEventStartDate_142);
          ComplexEventDates_NoComplexEventDates_142.insert(ComplexEventStartDate_142.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_142);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_287;
            FIX::ComplexEventEndTime ComplexEventEndTime_287(FIX::UTCTIMEONLY(20, 3, 25));
            noComplexEventTimes_1_0_2_0_4_0.set(ComplexEventEndTime_287);
            ComplexEventTimes_NoComplexEventTimes_287.insert(ComplexEventEndTime_287.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_287(FIX::UTCTIMEONLY(23, 58, 52));
            noComplexEventTimes_1_0_2_0_4_0.set(ComplexEventStartTime_287);
            ComplexEventTimes_NoComplexEventTimes_287.insert(ComplexEventStartTime_287.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_287);

            noComplexEventDates_1_0_2_3_0.addGroup(noComplexEventTimes_1_0_2_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_288;
            FIX::ComplexEventEndTime ComplexEventEndTime_288(FIX::UTCTIMEONLY(18, 54, 36));
            noComplexEventTimes_1_0_2_0_4_1.set(ComplexEventEndTime_288);
            ComplexEventTimes_NoComplexEventTimes_288.insert(ComplexEventEndTime_288.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_288(FIX::UTCTIMEONLY(6, 36, 13));
            noComplexEventTimes_1_0_2_0_4_1.set(ComplexEventStartTime_288);
            ComplexEventTimes_NoComplexEventTimes_288.insert(ComplexEventStartTime_288.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_288);

            noComplexEventDates_1_0_2_3_0.addGroup(noComplexEventTimes_1_0_2_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_289;
            FIX::ComplexEventEndTime ComplexEventEndTime_289(FIX::UTCTIMEONLY(6, 30, 30));
            noComplexEventTimes_1_0_2_0_4_2.set(ComplexEventEndTime_289);
            ComplexEventTimes_NoComplexEventTimes_289.insert(ComplexEventEndTime_289.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_289(FIX::UTCTIMEONLY(12, 46, 13));
            noComplexEventTimes_1_0_2_0_4_2.set(ComplexEventStartTime_289);
            ComplexEventTimes_NoComplexEventTimes_289.insert(ComplexEventStartTime_289.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_289);

            noComplexEventDates_1_0_2_3_0.addGroup(noComplexEventTimes_1_0_2_0_4_2);
          }
          noComplexEvents_1_0_2_2.addGroup(noComplexEventDates_1_0_2_3_0);
        }
        noQuoteEntries_1_1_0.addGroup(noComplexEvents_1_0_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_74;
        FIX::EventDate EventDate_74("LOCALMKTDATE_2019485190");
        noEvents_1_0_2_0.set(EventDate_74);
        EvntGrp_NoEvents_74.insert(EventDate_74.getString());
        FIX::EventPx EventPx_74;
        EventPx_74.setString("15094454");
        noEvents_1_0_2_0.set(EventPx_74);
        EvntGrp_NoEvents_74.insert(EventPx_74.getString());
        FIX::EventText EventText_74("STRING_1333565329");
        noEvents_1_0_2_0.set(EventText_74);
        EvntGrp_NoEvents_74.insert(EventText_74.getString());
        FIX::EventTime EventTime_74(FIX::UTCTIMESTAMP(16, 33, 27, 12, 2, 2014));
        noEvents_1_0_2_0.set(EventTime_74);
        EvntGrp_NoEvents_74.insert(EventTime_74.getString());
        FIX::EventType EventType_74(19);
        noEvents_1_0_2_0.set(EventType_74);
        EvntGrp_NoEvents_74.insert(EventType_74.getString());
        all_values.push_back(EvntGrp_NoEvents_74);

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_75;
        FIX::EventDate EventDate_75("LOCALMKTDATE_202692220");
        noEvents_1_0_2_1.set(EventDate_75);
        EvntGrp_NoEvents_75.insert(EventDate_75.getString());
        FIX::EventPx EventPx_75;
        EventPx_75.setString("4082830");
        noEvents_1_0_2_1.set(EventPx_75);
        EvntGrp_NoEvents_75.insert(EventPx_75.getString());
        FIX::EventText EventText_75("STRING_760141090");
        noEvents_1_0_2_1.set(EventText_75);
        EvntGrp_NoEvents_75.insert(EventText_75.getString());
        FIX::EventTime EventTime_75(FIX::UTCTIMESTAMP(12, 4, 54, 11, 11, 2004));
        noEvents_1_0_2_1.set(EventTime_75);
        EvntGrp_NoEvents_75.insert(EventTime_75.getString());
        FIX::EventType EventType_75(13);
        noEvents_1_0_2_1.set(EventType_75);
        EvntGrp_NoEvents_75.insert(EventType_75.getString());
        all_values.push_back(EvntGrp_NoEvents_75);

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_0_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_76;
        FIX::EventDate EventDate_76("LOCALMKTDATE_1028827676");
        noEvents_1_0_2_2.set(EventDate_76);
        EvntGrp_NoEvents_76.insert(EventDate_76.getString());
        FIX::EventPx EventPx_76;
        EventPx_76.setString("17204724");
        noEvents_1_0_2_2.set(EventPx_76);
        EvntGrp_NoEvents_76.insert(EventPx_76.getString());
        FIX::EventText EventText_76("STRING_832750843");
        noEvents_1_0_2_2.set(EventText_76);
        EvntGrp_NoEvents_76.insert(EventText_76.getString());
        FIX::EventTime EventTime_76(FIX::UTCTIMESTAMP(18, 59, 4, 20, 5, 2008));
        noEvents_1_0_2_2.set(EventTime_76);
        EvntGrp_NoEvents_76.insert(EventTime_76.getString());
        FIX::EventType EventType_76(19);
        noEvents_1_0_2_2.set(EventType_76);
        EvntGrp_NoEvents_76.insert(EventType_76.getString());
        all_values.push_back(EvntGrp_NoEvents_76);

        noQuoteEntries_1_1_0.addGroup(noEvents_1_0_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_81;
        FIX::InstrumentPartyID InstrumentPartyID_81("STRING_286351340");
        noInstrumentParties_1_0_2_0.set(InstrumentPartyID_81);
        InstrumentParties_NoInstrumentParties_81.insert(InstrumentPartyID_81.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_81('5');
        noInstrumentParties_1_0_2_0.set(InstrumentPartyIDSource_81);
        InstrumentParties_NoInstrumentParties_81.insert(InstrumentPartyIDSource_81.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_81(637685135);
        noInstrumentParties_1_0_2_0.set(InstrumentPartyRole_81);
        InstrumentParties_NoInstrumentParties_81.insert(InstrumentPartyRole_81.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_81);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170;
          FIX::InstrumentPartySubID InstrumentPartySubID_170("STRING_1737958962");
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubID_170);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170.insert(InstrumentPartySubID_170.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_170(70673884);
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubIDType_170);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170.insert(InstrumentPartySubIDType_170.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_170);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171;
          FIX::InstrumentPartySubID InstrumentPartySubID_171("STRING_854563051");
          noInstrumentPartySubIDs_1_0_0_3_1.set(InstrumentPartySubID_171);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171.insert(InstrumentPartySubID_171.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_171(107618452);
          noInstrumentPartySubIDs_1_0_0_3_1.set(InstrumentPartySubIDType_171);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171.insert(InstrumentPartySubIDType_171.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_171);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172;
          FIX::InstrumentPartySubID InstrumentPartySubID_172("STRING_273366104");
          noInstrumentPartySubIDs_1_0_0_3_2.set(InstrumentPartySubID_172);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172.insert(InstrumentPartySubID_172.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_172(1262846053);
          noInstrumentPartySubIDs_1_0_0_3_2.set(InstrumentPartySubIDType_172);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172.insert(InstrumentPartySubIDType_172.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_172);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_2);
        }
        noQuoteEntries_1_1_0.addGroup(noInstrumentParties_1_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_80;
        FIX::SecurityAltID SecurityAltID_80("STRING_1248892562");
        noSecurityAltID_1_0_2_0.set(SecurityAltID_80);
        SecAltIDGrp_NoSecurityAltID_80.insert(SecurityAltID_80.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_80("STRING_2020477969");
        noSecurityAltID_1_0_2_0.set(SecurityAltIDSource_80);
        SecAltIDGrp_NoSecurityAltID_80.insert(SecurityAltIDSource_80.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_80);

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_81;
        FIX::SecurityAltID SecurityAltID_81("STRING_14799839");
        noSecurityAltID_1_0_2_1.set(SecurityAltID_81);
        SecAltIDGrp_NoSecurityAltID_81.insert(SecurityAltID_81.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_81("STRING_665408268");
        noSecurityAltID_1_0_2_1.set(SecurityAltIDSource_81);
        SecAltIDGrp_NoSecurityAltID_81.insert(SecurityAltIDSource_81.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_81);

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_0_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_82;
        FIX::SecurityAltID SecurityAltID_82("STRING_1122534288");
        noSecurityAltID_1_0_2_2.set(SecurityAltID_82);
        SecAltIDGrp_NoSecurityAltID_82.insert(SecurityAltID_82.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_82("STRING_1419818613");
        noSecurityAltID_1_0_2_2.set(SecurityAltIDSource_82);
        SecAltIDGrp_NoSecurityAltID_82.insert(SecurityAltIDSource_82.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_82);

        noQuoteEntries_1_1_0.addGroup(noSecurityAltID_1_0_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_74;
      FIX::SecurityXML SecurityXML_75("XMLDATA_724197011");
      noQuoteEntries_1_1_0.set(SecurityXML_75);
      FIX::SecurityXMLLen SecurityXMLLen_37(1427255100);
      noQuoteEntries_1_1_0.set(SecurityXMLLen_37);
      FIX::SecurityXMLSchema SecurityXMLSchema_37("STRING_301162641");
      noQuoteEntries_1_1_0.set(SecurityXMLSchema_37);
      SecurityXML_74.insert(SecurityXMLSchema_37.getString());
      all_values.push_back(SecurityXML_74);

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_1;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_4;
      FIX::BidForwardPoints BidForwardPoints_4;
      BidForwardPoints_4.setString("2971858");
      noQuoteEntries_1_1_1.set(BidForwardPoints_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(BidForwardPoints_4.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_4;
      BidForwardPoints2_4.setString("1125222");
      noQuoteEntries_1_1_1.set(BidForwardPoints2_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(BidForwardPoints2_4.getString());
      FIX::BidPx BidPx_4;
      BidPx_4.setString("5685311");
      noQuoteEntries_1_1_1.set(BidPx_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(BidPx_4.getString());
      FIX::BidSize BidSize_4;
      BidSize_4.setString("8363742");
      noQuoteEntries_1_1_1.set(BidSize_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(BidSize_4.getString());
      FIX::BidSpotRate BidSpotRate_4;
      BidSpotRate_4.setString("2175952");
      noQuoteEntries_1_1_1.set(BidSpotRate_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(BidSpotRate_4.getString());
      FIX::BidYield BidYield_4;
      BidYield_4.setString("53.360000");
      noQuoteEntries_1_1_1.set(BidYield_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(BidYield_4.getString());
      FIX::BookingType BookingType_9(2);
      noQuoteEntries_1_1_1.set(BookingType_9);
      QuotEntryGrp_NoQuoteEntries_4.insert(BookingType_9.getString());
      FIX::Currency Currency_33("GBP");
      noQuoteEntries_1_1_1.set(Currency_33);
      QuotEntryGrp_NoQuoteEntries_4.insert(Currency_33.getString());
      FIX::MidPx MidPx_4;
      MidPx_4.setString("7900634");
      noQuoteEntries_1_1_1.set(MidPx_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(MidPx_4.getString());
      FIX::MidYield MidYield_4;
      MidYield_4.setString("64.640000");
      noQuoteEntries_1_1_1.set(MidYield_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(MidYield_4.getString());
      FIX::OfferForwardPoints OfferForwardPoints_4;
      OfferForwardPoints_4.setString("17950560");
      noQuoteEntries_1_1_1.set(OfferForwardPoints_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(OfferForwardPoints_4.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_4;
      OfferForwardPoints2_4.setString("13611212");
      noQuoteEntries_1_1_1.set(OfferForwardPoints2_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(OfferForwardPoints2_4.getString());
      FIX::OfferPx OfferPx_4;
      OfferPx_4.setString("240379");
      noQuoteEntries_1_1_1.set(OfferPx_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(OfferPx_4.getString());
      FIX::OfferSize OfferSize_4;
      OfferSize_4.setString("4314999");
      noQuoteEntries_1_1_1.set(OfferSize_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(OfferSize_4.getString());
      FIX::OfferSpotRate OfferSpotRate_4;
      OfferSpotRate_4.setString("9515965");
      noQuoteEntries_1_1_1.set(OfferSpotRate_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(OfferSpotRate_4.getString());
      FIX::OfferYield OfferYield_4;
      OfferYield_4.setString("18.350000");
      noQuoteEntries_1_1_1.set(OfferYield_4);
      QuotEntryGrp_NoQuoteEntries_4.insert(OfferYield_4.getString());
      FIX::OrdType OrdType_24('9');
      noQuoteEntries_1_1_1.set(OrdType_24);
      QuotEntryGrp_NoQuoteEntries_4.insert(OrdType_24.getString());
      FIX::OrderCapacity OrderCapacity_11('I');
      noQuoteEntries_1_1_1.set(OrderCapacity_11);
      QuotEntryGrp_NoQuoteEntries_4.insert(OrderCapacity_11.getString());
      FIX::OrderQty2 OrderQty2_5;
      OrderQty2_5.setString("3680779");
      noQuoteEntries_1_1_1.set(OrderQty2_5);
      QuotEntryGrp_NoQuoteEntries_4.insert(OrderQty2_5.getString());
      FIX::OrderRestrictions OrderRestrictions_9("MULTIPLECHARVALUE_8");
      noQuoteEntries_1_1_1.set(OrderRestrictions_9);
      QuotEntryGrp_NoQuoteEntries_4.insert(OrderRestrictions_9.getString());
      FIX::QuoteEntryID QuoteEntryID_6("STRING_1926974548");
      noQuoteEntries_1_1_1.set(QuoteEntryID_6);
      QuotEntryGrp_NoQuoteEntries_4.insert(QuoteEntryID_6.getString());
      FIX::SettlDate SettlDate_22("LOCALMKTDATE_1616970501");
      noQuoteEntries_1_1_1.set(SettlDate_22);
      QuotEntryGrp_NoQuoteEntries_4.insert(SettlDate_22.getString());
      FIX::SettlDate2 SettlDate2_5("LOCALMKTDATE_274419678");
      noQuoteEntries_1_1_1.set(SettlDate2_5);
      QuotEntryGrp_NoQuoteEntries_4.insert(SettlDate2_5.getString());
      FIX::TradingSessionID TradingSessionID_27("STRING_4");
      noQuoteEntries_1_1_1.set(TradingSessionID_27);
      QuotEntryGrp_NoQuoteEntries_4.insert(TradingSessionID_27.getString());
      FIX::TradingSessionSubID TradingSessionSubID_27("STRING_6");
      noQuoteEntries_1_1_1.set(TradingSessionSubID_27);
      QuotEntryGrp_NoQuoteEntries_4.insert(TradingSessionSubID_27.getString());
      FIX::TransactTime TransactTime_30(FIX::UTCTIMESTAMP(17, 13, 59, 26, 9, 2004));
      noQuoteEntries_1_1_1.set(TransactTime_30);
      QuotEntryGrp_NoQuoteEntries_4.insert(TransactTime_30.getString());
      FIX::ValidUntilTime ValidUntilTime_5(FIX::UTCTIMESTAMP(22, 9, 30, 4, 5, 2000));
      noQuoteEntries_1_1_1.set(ValidUntilTime_5);
      QuotEntryGrp_NoQuoteEntries_4.insert(ValidUntilTime_5.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_4);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_68;
        FIX::EncodedLegIssuer EncodedLegIssuer_68("DATA_602128980");
        noLegs_1_1_2_0.set(EncodedLegIssuer_68);
        InstrumentLeg_68.insert(EncodedLegIssuer_68.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_68(1121471919);
        noLegs_1_1_2_0.set(EncodedLegIssuerLen_68);
        InstrumentLeg_68.insert(EncodedLegIssuerLen_68.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_68("DATA_981107448");
        noLegs_1_1_2_0.set(EncodedLegSecurityDesc_68);
        InstrumentLeg_68.insert(EncodedLegSecurityDesc_68.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_68(626166932);
        noLegs_1_1_2_0.set(EncodedLegSecurityDescLen_68);
        InstrumentLeg_68.insert(EncodedLegSecurityDescLen_68.getString());
        FIX::LegCFICode LegCFICode_68("STRING_1552971820");
        noLegs_1_1_2_0.set(LegCFICode_68);
        InstrumentLeg_68.insert(LegCFICode_68.getString());
        FIX::LegContractMultiplier LegContractMultiplier_68;
        LegContractMultiplier_68.setString("19327040");
        noLegs_1_1_2_0.set(LegContractMultiplier_68);
        InstrumentLeg_68.insert(LegContractMultiplier_68.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_68(720878767);
        noLegs_1_1_2_0.set(LegContractMultiplierUnit_68);
        InstrumentLeg_68.insert(LegContractMultiplierUnit_68.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_68("MONTHYEAR_691551125");
        noLegs_1_1_2_0.set(LegContractSettlMonth_68);
        InstrumentLeg_68.insert(LegContractSettlMonth_68.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_68("COUNTRY_844435359");
        noLegs_1_1_2_0.set(LegCountryOfIssue_68);
        InstrumentLeg_68.insert(LegCountryOfIssue_68.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_68("LOCALMKTDATE_1088956707");
        noLegs_1_1_2_0.set(LegCouponPaymentDate_68);
        InstrumentLeg_68.insert(LegCouponPaymentDate_68.getString());
        FIX::LegCouponRate LegCouponRate_68;
        LegCouponRate_68.setString("64.820000");
        noLegs_1_1_2_0.set(LegCouponRate_68);
        InstrumentLeg_68.insert(LegCouponRate_68.getString());
        FIX::LegCreditRating LegCreditRating_68("STRING_623926260");
        noLegs_1_1_2_0.set(LegCreditRating_68);
        InstrumentLeg_68.insert(LegCreditRating_68.getString());
        FIX::LegCurrency LegCurrency_68("EUR");
        noLegs_1_1_2_0.set(LegCurrency_68);
        InstrumentLeg_68.insert(LegCurrency_68.getString());
        FIX::LegDatedDate LegDatedDate_68("LOCALMKTDATE_418216999");
        noLegs_1_1_2_0.set(LegDatedDate_68);
        InstrumentLeg_68.insert(LegDatedDate_68.getString());
        FIX::LegExerciseStyle LegExerciseStyle_68(693338682);
        noLegs_1_1_2_0.set(LegExerciseStyle_68);
        InstrumentLeg_68.insert(LegExerciseStyle_68.getString());
        FIX::LegFactor LegFactor_68;
        LegFactor_68.setString("6168664");
        noLegs_1_1_2_0.set(LegFactor_68);
        InstrumentLeg_68.insert(LegFactor_68.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_68(1632326352);
        noLegs_1_1_2_0.set(LegFlowScheduleType_68);
        InstrumentLeg_68.insert(LegFlowScheduleType_68.getString());
        FIX::LegInstrRegistry LegInstrRegistry_68("STRING_1552430815");
        noLegs_1_1_2_0.set(LegInstrRegistry_68);
        InstrumentLeg_68.insert(LegInstrRegistry_68.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_68("LOCALMKTDATE_1293591898");
        noLegs_1_1_2_0.set(LegInterestAccrualDate_68);
        InstrumentLeg_68.insert(LegInterestAccrualDate_68.getString());
        FIX::LegIssueDate LegIssueDate_68("LOCALMKTDATE_1000114699");
        noLegs_1_1_2_0.set(LegIssueDate_68);
        InstrumentLeg_68.insert(LegIssueDate_68.getString());
        FIX::LegIssuer LegIssuer_68("STRING_561225140");
        noLegs_1_1_2_0.set(LegIssuer_68);
        InstrumentLeg_68.insert(LegIssuer_68.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_68("STRING_2082839613");
        noLegs_1_1_2_0.set(LegLocaleOfIssue_68);
        InstrumentLeg_68.insert(LegLocaleOfIssue_68.getString());
        FIX::LegMaturityDate LegMaturityDate_68("LOCALMKTDATE_936434225");
        noLegs_1_1_2_0.set(LegMaturityDate_68);
        InstrumentLeg_68.insert(LegMaturityDate_68.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_68("MONTHYEAR_406393690");
        noLegs_1_1_2_0.set(LegMaturityMonthYear_68);
        InstrumentLeg_68.insert(LegMaturityMonthYear_68.getString());
        FIX::LegMaturityTime LegMaturityTime_68("TZTIMEONLY_942198934");
        noLegs_1_1_2_0.set(LegMaturityTime_68);
        InstrumentLeg_68.insert(LegMaturityTime_68.getString());
        FIX::LegOptAttribute LegOptAttribute_68('9');
        noLegs_1_1_2_0.set(LegOptAttribute_68);
        InstrumentLeg_68.insert(LegOptAttribute_68.getString());
        FIX::LegOptionRatio LegOptionRatio_68;
        LegOptionRatio_68.setString("13838001");
        noLegs_1_1_2_0.set(LegOptionRatio_68);
        InstrumentLeg_68.insert(LegOptionRatio_68.getString());
        FIX::LegPool LegPool_68("STRING_10491450");
        noLegs_1_1_2_0.set(LegPool_68);
        InstrumentLeg_68.insert(LegPool_68.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_68("STRING_228044983");
        noLegs_1_1_2_0.set(LegPriceUnitOfMeasure_68);
        InstrumentLeg_68.insert(LegPriceUnitOfMeasure_68.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_68;
        LegPriceUnitOfMeasureQty_68.setString("10037863");
        noLegs_1_1_2_0.set(LegPriceUnitOfMeasureQty_68);
        InstrumentLeg_68.insert(LegPriceUnitOfMeasureQty_68.getString());
        FIX::LegProduct LegProduct_68(612620430);
        noLegs_1_1_2_0.set(LegProduct_68);
        InstrumentLeg_68.insert(LegProduct_68.getString());
        FIX::LegPutOrCall LegPutOrCall_68(1349516902);
        noLegs_1_1_2_0.set(LegPutOrCall_68);
        InstrumentLeg_68.insert(LegPutOrCall_68.getString());
        FIX::LegRatioQty LegRatioQty_68;
        LegRatioQty_68.setString("19848937");
        noLegs_1_1_2_0.set(LegRatioQty_68);
        InstrumentLeg_68.insert(LegRatioQty_68.getString());
        FIX::LegRedemptionDate LegRedemptionDate_68("LOCALMKTDATE_1238787362");
        noLegs_1_1_2_0.set(LegRedemptionDate_68);
        InstrumentLeg_68.insert(LegRedemptionDate_68.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_68("STRING_755005075");
        noLegs_1_1_2_0.set(LegRepoCollateralSecurityType_68);
        InstrumentLeg_68.insert(LegRepoCollateralSecurityType_68.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_68;
        LegRepurchaseRate_68.setString("41.490000");
        noLegs_1_1_2_0.set(LegRepurchaseRate_68);
        InstrumentLeg_68.insert(LegRepurchaseRate_68.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_68(1959666130);
        noLegs_1_1_2_0.set(LegRepurchaseTerm_68);
        InstrumentLeg_68.insert(LegRepurchaseTerm_68.getString());
        FIX::LegSecurityDesc LegSecurityDesc_68("STRING_1446556200");
        noLegs_1_1_2_0.set(LegSecurityDesc_68);
        InstrumentLeg_68.insert(LegSecurityDesc_68.getString());
        FIX::LegSecurityExchange LegSecurityExchange_68("EXCHANGE_467065861");
        noLegs_1_1_2_0.set(LegSecurityExchange_68);
        InstrumentLeg_68.insert(LegSecurityExchange_68.getString());
        FIX::LegSecurityID LegSecurityID_68("STRING_901139189");
        noLegs_1_1_2_0.set(LegSecurityID_68);
        InstrumentLeg_68.insert(LegSecurityID_68.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_68("STRING_392049034");
        noLegs_1_1_2_0.set(LegSecurityIDSource_68);
        InstrumentLeg_68.insert(LegSecurityIDSource_68.getString());
        FIX::LegSecuritySubType LegSecuritySubType_68("STRING_1090992121");
        noLegs_1_1_2_0.set(LegSecuritySubType_68);
        InstrumentLeg_68.insert(LegSecuritySubType_68.getString());
        FIX::LegSecurityType LegSecurityType_68("STRING_1459582749");
        noLegs_1_1_2_0.set(LegSecurityType_68);
        InstrumentLeg_68.insert(LegSecurityType_68.getString());
        FIX::LegSide LegSide_68('1');
        noLegs_1_1_2_0.set(LegSide_68);
        InstrumentLeg_68.insert(LegSide_68.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_68("STRING_1509209120");
        noLegs_1_1_2_0.set(LegStateOrProvinceOfIssue_68);
        InstrumentLeg_68.insert(LegStateOrProvinceOfIssue_68.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_68("CHF");
        noLegs_1_1_2_0.set(LegStrikeCurrency_68);
        InstrumentLeg_68.insert(LegStrikeCurrency_68.getString());
        FIX::LegStrikePrice LegStrikePrice_68;
        LegStrikePrice_68.setString("9940518");
        noLegs_1_1_2_0.set(LegStrikePrice_68);
        InstrumentLeg_68.insert(LegStrikePrice_68.getString());
        FIX::LegSymbol LegSymbol_68("STRING_1557868599");
        noLegs_1_1_2_0.set(LegSymbol_68);
        InstrumentLeg_68.insert(LegSymbol_68.getString());
        FIX::LegSymbolSfx LegSymbolSfx_68("STRING_1522419925");
        noLegs_1_1_2_0.set(LegSymbolSfx_68);
        InstrumentLeg_68.insert(LegSymbolSfx_68.getString());
        FIX::LegTimeUnit LegTimeUnit_68("STRING_1994166524");
        noLegs_1_1_2_0.set(LegTimeUnit_68);
        InstrumentLeg_68.insert(LegTimeUnit_68.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_68("STRING_2119093739");
        noLegs_1_1_2_0.set(LegUnitOfMeasure_68);
        InstrumentLeg_68.insert(LegUnitOfMeasure_68.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_68;
        LegUnitOfMeasureQty_68.setString("14577758");
        noLegs_1_1_2_0.set(LegUnitOfMeasureQty_68);
        InstrumentLeg_68.insert(LegUnitOfMeasureQty_68.getString());
        all_values.push_back(InstrumentLeg_68);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_134;
          FIX::LegSecurityAltID LegSecurityAltID_134("STRING_378003782");
          noLegSecurityAltID_1_1_0_3_0.set(LegSecurityAltID_134);
          LegSecAltIDGrp_NoLegSecurityAltID_134.insert(LegSecurityAltID_134.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_134("STRING_252491176");
          noLegSecurityAltID_1_1_0_3_0.set(LegSecurityAltIDSource_134);
          LegSecAltIDGrp_NoLegSecurityAltID_134.insert(LegSecurityAltIDSource_134.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_134);

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_135;
          FIX::LegSecurityAltID LegSecurityAltID_135("STRING_1684746188");
          noLegSecurityAltID_1_1_0_3_1.set(LegSecurityAltID_135);
          LegSecAltIDGrp_NoLegSecurityAltID_135.insert(LegSecurityAltID_135.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_135("STRING_1761803921");
          noLegSecurityAltID_1_1_0_3_1.set(LegSecurityAltIDSource_135);
          LegSecAltIDGrp_NoLegSecurityAltID_135.insert(LegSecurityAltIDSource_135.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_135);

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_136;
          FIX::LegSecurityAltID LegSecurityAltID_136("STRING_262982626");
          noLegSecurityAltID_1_1_0_3_2.set(LegSecurityAltID_136);
          LegSecAltIDGrp_NoLegSecurityAltID_136.insert(LegSecurityAltID_136.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_136("STRING_1912791171");
          noLegSecurityAltID_1_1_0_3_2.set(LegSecurityAltIDSource_136);
          LegSecAltIDGrp_NoLegSecurityAltID_136.insert(LegSecurityAltIDSource_136.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_136);

          noLegs_1_1_2_0.addGroup(noLegSecurityAltID_1_1_0_3_2);
        }
        noQuoteEntries_1_1_1.addGroup(noLegs_1_1_2_0);
      }
      // Instrument
      multiset<string> Instrument_38;
      FIX::AttachmentPoint AttachmentPoint_38;
      AttachmentPoint_38.setString("66.210000");
      noQuoteEntries_1_1_1.set(AttachmentPoint_38);
      Instrument_38.insert(AttachmentPoint_38.getString());
      FIX::CFICode CFICode_38("STRING_875603057");
      noQuoteEntries_1_1_1.set(CFICode_38);
      Instrument_38.insert(CFICode_38.getString());
      FIX::CPProgram CPProgram_38(1);
      noQuoteEntries_1_1_1.set(CPProgram_38);
      Instrument_38.insert(CPProgram_38.getString());
      FIX::CPRegType CPRegType_38("STRING_455516769");
      noQuoteEntries_1_1_1.set(CPRegType_38);
      Instrument_38.insert(CPRegType_38.getString());
      FIX::CapPrice CapPrice_38;
      CapPrice_38.setString("21143904");
      noQuoteEntries_1_1_1.set(CapPrice_38);
      Instrument_38.insert(CapPrice_38.getString());
      FIX::ContractMultiplier ContractMultiplier_38;
      ContractMultiplier_38.setString("18698295");
      noQuoteEntries_1_1_1.set(ContractMultiplier_38);
      Instrument_38.insert(ContractMultiplier_38.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_38(0);
      noQuoteEntries_1_1_1.set(ContractMultiplierUnit_38);
      Instrument_38.insert(ContractMultiplierUnit_38.getString());
      FIX::ContractSettlMonth ContractSettlMonth_38("MONTHYEAR_1926572901");
      noQuoteEntries_1_1_1.set(ContractSettlMonth_38);
      Instrument_38.insert(ContractSettlMonth_38.getString());
      FIX::CountryOfIssue CountryOfIssue_38("COUNTRY_1168902053");
      noQuoteEntries_1_1_1.set(CountryOfIssue_38);
      Instrument_38.insert(CountryOfIssue_38.getString());
      FIX::CouponPaymentDate CouponPaymentDate_38("LOCALMKTDATE_545213131");
      noQuoteEntries_1_1_1.set(CouponPaymentDate_38);
      Instrument_38.insert(CouponPaymentDate_38.getString());
      FIX::CouponRate CouponRate_38;
      CouponRate_38.setString("84.420000");
      noQuoteEntries_1_1_1.set(CouponRate_38);
      Instrument_38.insert(CouponRate_38.getString());
      FIX::CreditRating CreditRating_38("STRING_1560951087");
      noQuoteEntries_1_1_1.set(CreditRating_38);
      Instrument_38.insert(CreditRating_38.getString());
      FIX::DatedDate DatedDate_38("LOCALMKTDATE_1636205252");
      noQuoteEntries_1_1_1.set(DatedDate_38);
      Instrument_38.insert(DatedDate_38.getString());
      FIX::DetachmentPoint DetachmentPoint_38;
      DetachmentPoint_38.setString("11.920000");
      noQuoteEntries_1_1_1.set(DetachmentPoint_38);
      Instrument_38.insert(DetachmentPoint_38.getString());
      FIX::EncodedIssuer EncodedIssuer_38("DATA_1172912635");
      noQuoteEntries_1_1_1.set(EncodedIssuer_38);
      Instrument_38.insert(EncodedIssuer_38.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_38(997930725);
      noQuoteEntries_1_1_1.set(EncodedIssuerLen_38);
      Instrument_38.insert(EncodedIssuerLen_38.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_38("DATA_2145248976");
      noQuoteEntries_1_1_1.set(EncodedSecurityDesc_38);
      Instrument_38.insert(EncodedSecurityDesc_38.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_38(1401740662);
      noQuoteEntries_1_1_1.set(EncodedSecurityDescLen_38);
      Instrument_38.insert(EncodedSecurityDescLen_38.getString());
      FIX::ExerciseStyle ExerciseStyle_38(1);
      noQuoteEntries_1_1_1.set(ExerciseStyle_38);
      Instrument_38.insert(ExerciseStyle_38.getString());
      FIX::Factor Factor_38;
      Factor_38.setString("15556339");
      noQuoteEntries_1_1_1.set(Factor_38);
      Instrument_38.insert(Factor_38.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_38(false);
      noQuoteEntries_1_1_1.set(FlexProductEligibilityIndicator_38);
      Instrument_38.insert(FlexProductEligibilityIndicator_38.getString());
      FIX::FlexibleIndicator FlexibleIndicator_38(true);
      noQuoteEntries_1_1_1.set(FlexibleIndicator_38);
      Instrument_38.insert(FlexibleIndicator_38.getString());
      FIX::FloorPrice FloorPrice_38;
      FloorPrice_38.setString("15272440");
      noQuoteEntries_1_1_1.set(FloorPrice_38);
      Instrument_38.insert(FloorPrice_38.getString());
      FIX::FlowScheduleType FlowScheduleType_38(2);
      noQuoteEntries_1_1_1.set(FlowScheduleType_38);
      Instrument_38.insert(FlowScheduleType_38.getString());
      FIX::InstrRegistry InstrRegistry_38("STRING_474298879");
      noQuoteEntries_1_1_1.set(InstrRegistry_38);
      Instrument_38.insert(InstrRegistry_38.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_38('1');
      noQuoteEntries_1_1_1.set(InstrmtAssignmentMethod_38);
      Instrument_38.insert(InstrmtAssignmentMethod_38.getString());
      FIX::InterestAccrualDate InterestAccrualDate_38("LOCALMKTDATE_339460358");
      noQuoteEntries_1_1_1.set(InterestAccrualDate_38);
      Instrument_38.insert(InterestAccrualDate_38.getString());
      FIX::IssueDate IssueDate_38("LOCALMKTDATE_11561419");
      noQuoteEntries_1_1_1.set(IssueDate_38);
      Instrument_38.insert(IssueDate_38.getString());
      FIX::Issuer Issuer_38("STRING_1519568074");
      noQuoteEntries_1_1_1.set(Issuer_38);
      Instrument_38.insert(Issuer_38.getString());
      FIX::ListMethod ListMethod_38(1);
      noQuoteEntries_1_1_1.set(ListMethod_38);
      Instrument_38.insert(ListMethod_38.getString());
      FIX::LocaleOfIssue LocaleOfIssue_38("STRING_1924352590");
      noQuoteEntries_1_1_1.set(LocaleOfIssue_38);
      Instrument_38.insert(LocaleOfIssue_38.getString());
      FIX::MaturityDate MaturityDate_38("LOCALMKTDATE_2137674695");
      noQuoteEntries_1_1_1.set(MaturityDate_38);
      Instrument_38.insert(MaturityDate_38.getString());
      FIX::MaturityMonthYear MaturityMonthYear_38("MONTHYEAR_1478046042");
      noQuoteEntries_1_1_1.set(MaturityMonthYear_38);
      Instrument_38.insert(MaturityMonthYear_38.getString());
      FIX::MaturityTime MaturityTime_38("TZTIMEONLY_891693368");
      noQuoteEntries_1_1_1.set(MaturityTime_38);
      Instrument_38.insert(MaturityTime_38.getString());
      FIX::MinPriceIncrement MinPriceIncrement_38;
      MinPriceIncrement_38.setString("4457078");
      noQuoteEntries_1_1_1.set(MinPriceIncrement_38);
      Instrument_38.insert(MinPriceIncrement_38.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_38;
      MinPriceIncrementAmount_38.setString("14449528");
      noQuoteEntries_1_1_1.set(MinPriceIncrementAmount_38);
      Instrument_38.insert(MinPriceIncrementAmount_38.getString());
      FIX::NTPositionLimit NTPositionLimit_38(614039221);
      noQuoteEntries_1_1_1.set(NTPositionLimit_38);
      Instrument_38.insert(NTPositionLimit_38.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_38;
      NotionalPercentageOutstanding_38.setString("50.860000");
      noQuoteEntries_1_1_1.set(NotionalPercentageOutstanding_38);
      Instrument_38.insert(NotionalPercentageOutstanding_38.getString());
      FIX::OptAttribute OptAttribute_38('1');
      noQuoteEntries_1_1_1.set(OptAttribute_38);
      Instrument_38.insert(OptAttribute_38.getString());
      FIX::OptPayoutAmount OptPayoutAmount_38;
      OptPayoutAmount_38.setString("17829412");
      noQuoteEntries_1_1_1.set(OptPayoutAmount_38);
      Instrument_38.insert(OptPayoutAmount_38.getString());
      FIX::OptPayoutType OptPayoutType_38(3);
      noQuoteEntries_1_1_1.set(OptPayoutType_38);
      Instrument_38.insert(OptPayoutType_38.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_38;
      OriginalNotionalPercentageOutstanding_38.setString("5.090000");
      noQuoteEntries_1_1_1.set(OriginalNotionalPercentageOutstanding_38);
      Instrument_38.insert(OriginalNotionalPercentageOutstanding_38.getString());
      FIX::Pool Pool_38("STRING_1196408714");
      noQuoteEntries_1_1_1.set(Pool_38);
      Instrument_38.insert(Pool_38.getString());
      FIX::PositionLimit PositionLimit_38(557789822);
      noQuoteEntries_1_1_1.set(PositionLimit_38);
      Instrument_38.insert(PositionLimit_38.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_38("STRING_INX");
      noQuoteEntries_1_1_1.set(PriceQuoteMethod_38);
      Instrument_38.insert(PriceQuoteMethod_38.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_38("STRING_221837701");
      noQuoteEntries_1_1_1.set(PriceUnitOfMeasure_38);
      Instrument_38.insert(PriceUnitOfMeasure_38.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_38;
      PriceUnitOfMeasureQty_38.setString("15557205");
      noQuoteEntries_1_1_1.set(PriceUnitOfMeasureQty_38);
      Instrument_38.insert(PriceUnitOfMeasureQty_38.getString());
      FIX::Product Product_40(2);
      noQuoteEntries_1_1_1.set(Product_40);
      Instrument_38.insert(Product_40.getString());
      FIX::ProductComplex ProductComplex_38("STRING_1623578363");
      noQuoteEntries_1_1_1.set(ProductComplex_38);
      Instrument_38.insert(ProductComplex_38.getString());
      FIX::PutOrCall PutOrCall_38(1);
      noQuoteEntries_1_1_1.set(PutOrCall_38);
      Instrument_38.insert(PutOrCall_38.getString());
      FIX::RedemptionDate RedemptionDate_38("LOCALMKTDATE_1302513661");
      noQuoteEntries_1_1_1.set(RedemptionDate_38);
      Instrument_38.insert(RedemptionDate_38.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_38("STRING_252771654");
      noQuoteEntries_1_1_1.set(RepoCollateralSecurityType_38);
      Instrument_38.insert(RepoCollateralSecurityType_38.getString());
      FIX::RepurchaseRate RepurchaseRate_38;
      RepurchaseRate_38.setString("12.270000");
      noQuoteEntries_1_1_1.set(RepurchaseRate_38);
      Instrument_38.insert(RepurchaseRate_38.getString());
      FIX::RepurchaseTerm RepurchaseTerm_38(682274032);
      noQuoteEntries_1_1_1.set(RepurchaseTerm_38);
      Instrument_38.insert(RepurchaseTerm_38.getString());
      FIX::RestructuringType RestructuringType_38("STRING_FR");
      noQuoteEntries_1_1_1.set(RestructuringType_38);
      Instrument_38.insert(RestructuringType_38.getString());
      FIX::SecurityDesc SecurityDesc_38("STRING_1565700106");
      noQuoteEntries_1_1_1.set(SecurityDesc_38);
      Instrument_38.insert(SecurityDesc_38.getString());
      FIX::SecurityExchange SecurityExchange_38("EXCHANGE_440038185");
      noQuoteEntries_1_1_1.set(SecurityExchange_38);
      Instrument_38.insert(SecurityExchange_38.getString());
      FIX::SecurityGroup SecurityGroup_38("STRING_679201195");
      noQuoteEntries_1_1_1.set(SecurityGroup_38);
      Instrument_38.insert(SecurityGroup_38.getString());
      FIX::SecurityID SecurityID_38("STRING_1577261525");
      noQuoteEntries_1_1_1.set(SecurityID_38);
      Instrument_38.insert(SecurityID_38.getString());
      FIX::SecurityIDSource SecurityIDSource_38("STRING_I");
      noQuoteEntries_1_1_1.set(SecurityIDSource_38);
      Instrument_38.insert(SecurityIDSource_38.getString());
      FIX::SecurityStatus SecurityStatus_38("STRING_1");
      noQuoteEntries_1_1_1.set(SecurityStatus_38);
      Instrument_38.insert(SecurityStatus_38.getString());
      FIX::SecuritySubType SecuritySubType_39("STRING_1354130468");
      noQuoteEntries_1_1_1.set(SecuritySubType_39);
      Instrument_38.insert(SecuritySubType_39.getString());
      FIX::SecurityType SecurityType_40("STRING_FXFWD");
      noQuoteEntries_1_1_1.set(SecurityType_40);
      Instrument_38.insert(SecurityType_40.getString());
      FIX::Seniority Seniority_38("STRING_SD");
      noQuoteEntries_1_1_1.set(Seniority_38);
      Instrument_38.insert(Seniority_38.getString());
      FIX::SettlMethod SettlMethod_38('C');
      noQuoteEntries_1_1_1.set(SettlMethod_38);
      Instrument_38.insert(SettlMethod_38.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_38("STRING_248021474");
      noQuoteEntries_1_1_1.set(SettleOnOpenFlag_38);
      Instrument_38.insert(SettleOnOpenFlag_38.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_38("STRING_2057159387");
      noQuoteEntries_1_1_1.set(StateOrProvinceOfIssue_38);
      Instrument_38.insert(StateOrProvinceOfIssue_38.getString());
      FIX::StrikeCurrency StrikeCurrency_38("GBP");
      noQuoteEntries_1_1_1.set(StrikeCurrency_38);
      Instrument_38.insert(StrikeCurrency_38.getString());
      FIX::StrikeMultiplier StrikeMultiplier_38;
      StrikeMultiplier_38.setString("11337178");
      noQuoteEntries_1_1_1.set(StrikeMultiplier_38);
      Instrument_38.insert(StrikeMultiplier_38.getString());
      FIX::StrikePrice StrikePrice_38;
      StrikePrice_38.setString("3478370");
      noQuoteEntries_1_1_1.set(StrikePrice_38);
      Instrument_38.insert(StrikePrice_38.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_38(4);
      noQuoteEntries_1_1_1.set(StrikePriceBoundaryMethod_38);
      Instrument_38.insert(StrikePriceBoundaryMethod_38.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_38;
      StrikePriceBoundaryPrecision_38.setString("46.680000");
      noQuoteEntries_1_1_1.set(StrikePriceBoundaryPrecision_38);
      Instrument_38.insert(StrikePriceBoundaryPrecision_38.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_38(3);
      noQuoteEntries_1_1_1.set(StrikePriceDeterminationMethod_38);
      Instrument_38.insert(StrikePriceDeterminationMethod_38.getString());
      FIX::StrikeValue StrikeValue_38;
      StrikeValue_38.setString("2512509");
      noQuoteEntries_1_1_1.set(StrikeValue_38);
      Instrument_38.insert(StrikeValue_38.getString());
      FIX::Symbol Symbol_38("STRING_639619073");
      noQuoteEntries_1_1_1.set(Symbol_38);
      Instrument_38.insert(Symbol_38.getString());
      FIX::SymbolSfx SymbolSfx_38("STRING_WI");
      noQuoteEntries_1_1_1.set(SymbolSfx_38);
      Instrument_38.insert(SymbolSfx_38.getString());
      FIX::TimeUnit TimeUnit_38("STRING_Mo");
      noQuoteEntries_1_1_1.set(TimeUnit_38);
      Instrument_38.insert(TimeUnit_38.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_38(4);
      noQuoteEntries_1_1_1.set(UnderlyingPriceDeterminationMethod_38);
      Instrument_38.insert(UnderlyingPriceDeterminationMethod_38.getString());
      FIX::UnitOfMeasure UnitOfMeasure_38("STRING_oz_tr");
      noQuoteEntries_1_1_1.set(UnitOfMeasure_38);
      Instrument_38.insert(UnitOfMeasure_38.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_38;
      UnitOfMeasureQty_38.setString("10597073");
      noQuoteEntries_1_1_1.set(UnitOfMeasureQty_38);
      Instrument_38.insert(UnitOfMeasureQty_38.getString());
      FIX::ValuationMethod ValuationMethod_38("STRING_CDS");
      noQuoteEntries_1_1_1.set(ValuationMethod_38);
      Instrument_38.insert(ValuationMethod_38.getString());
      all_values.push_back(Instrument_38);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_73;
        FIX::ComplexEventCondition ComplexEventCondition_73(2);
        noComplexEvents_1_1_2_0.set(ComplexEventCondition_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventCondition_73.getString());
        FIX::ComplexEventPrice ComplexEventPrice_73;
        ComplexEventPrice_73.setString("2238028");
        noComplexEvents_1_1_2_0.set(ComplexEventPrice_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventPrice_73.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_73(3);
        noComplexEvents_1_1_2_0.set(ComplexEventPriceBoundaryMethod_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventPriceBoundaryMethod_73.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_73;
        ComplexEventPriceBoundaryPrecision_73.setString("49.880000");
        noComplexEvents_1_1_2_0.set(ComplexEventPriceBoundaryPrecision_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventPriceBoundaryPrecision_73.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_73(3);
        noComplexEvents_1_1_2_0.set(ComplexEventPriceTimeType_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventPriceTimeType_73.getString());
        FIX::ComplexEventType ComplexEventType_73(7);
        noComplexEvents_1_1_2_0.set(ComplexEventType_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexEventType_73.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_73;
        ComplexOptPayoutAmount_73.setString("9991028");
        noComplexEvents_1_1_2_0.set(ComplexOptPayoutAmount_73);
        ComplexEvents_NoComplexEvents_73.insert(ComplexOptPayoutAmount_73.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_73);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_143;
          FIX::ComplexEventEndDate ComplexEventEndDate_143(FIX::UTCTIMESTAMP(13, 6, 30, 18, 9, 2010));
          noComplexEventDates_1_1_0_3_0.set(ComplexEventEndDate_143);
          ComplexEventDates_NoComplexEventDates_143.insert(ComplexEventEndDate_143.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_143(FIX::UTCTIMESTAMP(4, 56, 40, 7, 1, 2001));
          noComplexEventDates_1_1_0_3_0.set(ComplexEventStartDate_143);
          ComplexEventDates_NoComplexEventDates_143.insert(ComplexEventStartDate_143.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_143);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_290;
            FIX::ComplexEventEndTime ComplexEventEndTime_290(FIX::UTCTIMEONLY(10, 56, 57));
            noComplexEventTimes_1_1_0_0_4_0.set(ComplexEventEndTime_290);
            ComplexEventTimes_NoComplexEventTimes_290.insert(ComplexEventEndTime_290.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_290(FIX::UTCTIMEONLY(18, 37, 26));
            noComplexEventTimes_1_1_0_0_4_0.set(ComplexEventStartTime_290);
            ComplexEventTimes_NoComplexEventTimes_290.insert(ComplexEventStartTime_290.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_290);

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_0);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_144;
          FIX::ComplexEventEndDate ComplexEventEndDate_144(FIX::UTCTIMESTAMP(21, 55, 20, 10, 9, 2001));
          noComplexEventDates_1_1_0_3_1.set(ComplexEventEndDate_144);
          ComplexEventDates_NoComplexEventDates_144.insert(ComplexEventEndDate_144.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_144(FIX::UTCTIMESTAMP(20, 3, 0, 23, 2, 2000));
          noComplexEventDates_1_1_0_3_1.set(ComplexEventStartDate_144);
          ComplexEventDates_NoComplexEventDates_144.insert(ComplexEventStartDate_144.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_144);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_291;
            FIX::ComplexEventEndTime ComplexEventEndTime_291(FIX::UTCTIMEONLY(4, 33, 53));
            noComplexEventTimes_1_1_0_1_4_0.set(ComplexEventEndTime_291);
            ComplexEventTimes_NoComplexEventTimes_291.insert(ComplexEventEndTime_291.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_291(FIX::UTCTIMEONLY(2, 36, 39));
            noComplexEventTimes_1_1_0_1_4_0.set(ComplexEventStartTime_291);
            ComplexEventTimes_NoComplexEventTimes_291.insert(ComplexEventStartTime_291.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_291);

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_292;
            FIX::ComplexEventEndTime ComplexEventEndTime_292(FIX::UTCTIMEONLY(23, 28, 49));
            noComplexEventTimes_1_1_0_1_4_1.set(ComplexEventEndTime_292);
            ComplexEventTimes_NoComplexEventTimes_292.insert(ComplexEventEndTime_292.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_292(FIX::UTCTIMEONLY(2, 26, 46));
            noComplexEventTimes_1_1_0_1_4_1.set(ComplexEventStartTime_292);
            ComplexEventTimes_NoComplexEventTimes_292.insert(ComplexEventStartTime_292.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_292);

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_1);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_1);
        }
        noQuoteEntries_1_1_1.addGroup(noComplexEvents_1_1_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_77;
        FIX::EventDate EventDate_77("LOCALMKTDATE_40707027");
        noEvents_1_1_2_0.set(EventDate_77);
        EvntGrp_NoEvents_77.insert(EventDate_77.getString());
        FIX::EventPx EventPx_77;
        EventPx_77.setString("10757474");
        noEvents_1_1_2_0.set(EventPx_77);
        EvntGrp_NoEvents_77.insert(EventPx_77.getString());
        FIX::EventText EventText_77("STRING_1648015310");
        noEvents_1_1_2_0.set(EventText_77);
        EvntGrp_NoEvents_77.insert(EventText_77.getString());
        FIX::EventTime EventTime_77(FIX::UTCTIMESTAMP(1, 28, 39, 10, 12, 2013));
        noEvents_1_1_2_0.set(EventTime_77);
        EvntGrp_NoEvents_77.insert(EventTime_77.getString());
        FIX::EventType EventType_77(18);
        noEvents_1_1_2_0.set(EventType_77);
        EvntGrp_NoEvents_77.insert(EventType_77.getString());
        all_values.push_back(EvntGrp_NoEvents_77);

        noQuoteEntries_1_1_1.addGroup(noEvents_1_1_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_82;
        FIX::InstrumentPartyID InstrumentPartyID_82("STRING_1526922283");
        noInstrumentParties_1_1_2_0.set(InstrumentPartyID_82);
        InstrumentParties_NoInstrumentParties_82.insert(InstrumentPartyID_82.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_82('1');
        noInstrumentParties_1_1_2_0.set(InstrumentPartyIDSource_82);
        InstrumentParties_NoInstrumentParties_82.insert(InstrumentPartyIDSource_82.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_82(551618173);
        noInstrumentParties_1_1_2_0.set(InstrumentPartyRole_82);
        InstrumentParties_NoInstrumentParties_82.insert(InstrumentPartyRole_82.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_82);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173;
          FIX::InstrumentPartySubID InstrumentPartySubID_173("STRING_1437090859");
          noInstrumentPartySubIDs_1_1_0_3_0.set(InstrumentPartySubID_173);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173.insert(InstrumentPartySubID_173.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_173(1533917706);
          noInstrumentPartySubIDs_1_1_0_3_0.set(InstrumentPartySubIDType_173);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173.insert(InstrumentPartySubIDType_173.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_173);

          noInstrumentParties_1_1_2_0.addGroup(noInstrumentPartySubIDs_1_1_0_3_0);
        }
        noQuoteEntries_1_1_1.addGroup(noInstrumentParties_1_1_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_83;
        FIX::SecurityAltID SecurityAltID_83("STRING_1003688821");
        noSecurityAltID_1_1_2_0.set(SecurityAltID_83);
        SecAltIDGrp_NoSecurityAltID_83.insert(SecurityAltID_83.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_83("STRING_1129802015");
        noSecurityAltID_1_1_2_0.set(SecurityAltIDSource_83);
        SecAltIDGrp_NoSecurityAltID_83.insert(SecurityAltIDSource_83.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_83);

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_84;
        FIX::SecurityAltID SecurityAltID_84("STRING_1520283734");
        noSecurityAltID_1_1_2_1.set(SecurityAltID_84);
        SecAltIDGrp_NoSecurityAltID_84.insert(SecurityAltID_84.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_84("STRING_1109095733");
        noSecurityAltID_1_1_2_1.set(SecurityAltIDSource_84);
        SecAltIDGrp_NoSecurityAltID_84.insert(SecurityAltIDSource_84.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_84);

        noQuoteEntries_1_1_1.addGroup(noSecurityAltID_1_1_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_76;
      FIX::SecurityXML SecurityXML_77("XMLDATA_1105354550");
      noQuoteEntries_1_1_1.set(SecurityXML_77);
      FIX::SecurityXMLLen SecurityXMLLen_38(443854);
      noQuoteEntries_1_1_1.set(SecurityXMLLen_38);
      FIX::SecurityXMLSchema SecurityXMLSchema_38("STRING_2139810402");
      noQuoteEntries_1_1_1.set(SecurityXMLSchema_38);
      SecurityXML_76.insert(SecurityXMLSchema_38.getString());
      all_values.push_back(SecurityXML_76);

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_1_1_2;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_5;
      FIX::BidForwardPoints BidForwardPoints_5;
      BidForwardPoints_5.setString("5552698");
      noQuoteEntries_1_1_2.set(BidForwardPoints_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(BidForwardPoints_5.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_5;
      BidForwardPoints2_5.setString("4426865");
      noQuoteEntries_1_1_2.set(BidForwardPoints2_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(BidForwardPoints2_5.getString());
      FIX::BidPx BidPx_5;
      BidPx_5.setString("14898780");
      noQuoteEntries_1_1_2.set(BidPx_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(BidPx_5.getString());
      FIX::BidSize BidSize_5;
      BidSize_5.setString("9744976");
      noQuoteEntries_1_1_2.set(BidSize_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(BidSize_5.getString());
      FIX::BidSpotRate BidSpotRate_5;
      BidSpotRate_5.setString("7031530");
      noQuoteEntries_1_1_2.set(BidSpotRate_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(BidSpotRate_5.getString());
      FIX::BidYield BidYield_5;
      BidYield_5.setString("50.270000");
      noQuoteEntries_1_1_2.set(BidYield_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(BidYield_5.getString());
      FIX::BookingType BookingType_10(1);
      noQuoteEntries_1_1_2.set(BookingType_10);
      QuotEntryGrp_NoQuoteEntries_5.insert(BookingType_10.getString());
      FIX::Currency Currency_34("USD");
      noQuoteEntries_1_1_2.set(Currency_34);
      QuotEntryGrp_NoQuoteEntries_5.insert(Currency_34.getString());
      FIX::MidPx MidPx_5;
      MidPx_5.setString("20014366");
      noQuoteEntries_1_1_2.set(MidPx_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(MidPx_5.getString());
      FIX::MidYield MidYield_5;
      MidYield_5.setString("80.540000");
      noQuoteEntries_1_1_2.set(MidYield_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(MidYield_5.getString());
      FIX::OfferForwardPoints OfferForwardPoints_5;
      OfferForwardPoints_5.setString("18564368");
      noQuoteEntries_1_1_2.set(OfferForwardPoints_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(OfferForwardPoints_5.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_5;
      OfferForwardPoints2_5.setString("3286410");
      noQuoteEntries_1_1_2.set(OfferForwardPoints2_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(OfferForwardPoints2_5.getString());
      FIX::OfferPx OfferPx_5;
      OfferPx_5.setString("1280017");
      noQuoteEntries_1_1_2.set(OfferPx_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(OfferPx_5.getString());
      FIX::OfferSize OfferSize_5;
      OfferSize_5.setString("7483389");
      noQuoteEntries_1_1_2.set(OfferSize_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(OfferSize_5.getString());
      FIX::OfferSpotRate OfferSpotRate_5;
      OfferSpotRate_5.setString("14396009");
      noQuoteEntries_1_1_2.set(OfferSpotRate_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(OfferSpotRate_5.getString());
      FIX::OfferYield OfferYield_5;
      OfferYield_5.setString("67.490000");
      noQuoteEntries_1_1_2.set(OfferYield_5);
      QuotEntryGrp_NoQuoteEntries_5.insert(OfferYield_5.getString());
      FIX::OrdType OrdType_25('E');
      noQuoteEntries_1_1_2.set(OrdType_25);
      QuotEntryGrp_NoQuoteEntries_5.insert(OrdType_25.getString());
      FIX::OrderCapacity OrderCapacity_12('R');
      noQuoteEntries_1_1_2.set(OrderCapacity_12);
      QuotEntryGrp_NoQuoteEntries_5.insert(OrderCapacity_12.getString());
      FIX::OrderQty2 OrderQty2_6;
      OrderQty2_6.setString("16132449");
      noQuoteEntries_1_1_2.set(OrderQty2_6);
      QuotEntryGrp_NoQuoteEntries_5.insert(OrderQty2_6.getString());
      FIX::OrderRestrictions OrderRestrictions_10("MULTIPLECHARVALUE_3");
      noQuoteEntries_1_1_2.set(OrderRestrictions_10);
      QuotEntryGrp_NoQuoteEntries_5.insert(OrderRestrictions_10.getString());
      FIX::QuoteEntryID QuoteEntryID_7("STRING_351407307");
      noQuoteEntries_1_1_2.set(QuoteEntryID_7);
      QuotEntryGrp_NoQuoteEntries_5.insert(QuoteEntryID_7.getString());
      FIX::SettlDate SettlDate_23("LOCALMKTDATE_999678980");
      noQuoteEntries_1_1_2.set(SettlDate_23);
      QuotEntryGrp_NoQuoteEntries_5.insert(SettlDate_23.getString());
      FIX::SettlDate2 SettlDate2_6("LOCALMKTDATE_940459672");
      noQuoteEntries_1_1_2.set(SettlDate2_6);
      QuotEntryGrp_NoQuoteEntries_5.insert(SettlDate2_6.getString());
      FIX::TradingSessionID TradingSessionID_28("STRING_6");
      noQuoteEntries_1_1_2.set(TradingSessionID_28);
      QuotEntryGrp_NoQuoteEntries_5.insert(TradingSessionID_28.getString());
      FIX::TradingSessionSubID TradingSessionSubID_28("STRING_6");
      noQuoteEntries_1_1_2.set(TradingSessionSubID_28);
      QuotEntryGrp_NoQuoteEntries_5.insert(TradingSessionSubID_28.getString());
      FIX::TransactTime TransactTime_31(FIX::UTCTIMESTAMP(14, 37, 33, 5, 12, 2016));
      noQuoteEntries_1_1_2.set(TransactTime_31);
      QuotEntryGrp_NoQuoteEntries_5.insert(TransactTime_31.getString());
      FIX::ValidUntilTime ValidUntilTime_6(FIX::UTCTIMESTAMP(11, 29, 9, 5, 8, 2009));
      noQuoteEntries_1_1_2.set(ValidUntilTime_6);
      QuotEntryGrp_NoQuoteEntries_5.insert(ValidUntilTime_6.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_5);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_2_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_69;
        FIX::EncodedLegIssuer EncodedLegIssuer_69("DATA_1606612361");
        noLegs_1_2_2_0.set(EncodedLegIssuer_69);
        InstrumentLeg_69.insert(EncodedLegIssuer_69.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_69(1669256405);
        noLegs_1_2_2_0.set(EncodedLegIssuerLen_69);
        InstrumentLeg_69.insert(EncodedLegIssuerLen_69.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_69("DATA_554991281");
        noLegs_1_2_2_0.set(EncodedLegSecurityDesc_69);
        InstrumentLeg_69.insert(EncodedLegSecurityDesc_69.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_69(1734614150);
        noLegs_1_2_2_0.set(EncodedLegSecurityDescLen_69);
        InstrumentLeg_69.insert(EncodedLegSecurityDescLen_69.getString());
        FIX::LegCFICode LegCFICode_69("STRING_270111671");
        noLegs_1_2_2_0.set(LegCFICode_69);
        InstrumentLeg_69.insert(LegCFICode_69.getString());
        FIX::LegContractMultiplier LegContractMultiplier_69;
        LegContractMultiplier_69.setString("19945922");
        noLegs_1_2_2_0.set(LegContractMultiplier_69);
        InstrumentLeg_69.insert(LegContractMultiplier_69.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_69(648757251);
        noLegs_1_2_2_0.set(LegContractMultiplierUnit_69);
        InstrumentLeg_69.insert(LegContractMultiplierUnit_69.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_69("MONTHYEAR_397889221");
        noLegs_1_2_2_0.set(LegContractSettlMonth_69);
        InstrumentLeg_69.insert(LegContractSettlMonth_69.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_69("COUNTRY_908908699");
        noLegs_1_2_2_0.set(LegCountryOfIssue_69);
        InstrumentLeg_69.insert(LegCountryOfIssue_69.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_69("LOCALMKTDATE_114518525");
        noLegs_1_2_2_0.set(LegCouponPaymentDate_69);
        InstrumentLeg_69.insert(LegCouponPaymentDate_69.getString());
        FIX::LegCouponRate LegCouponRate_69;
        LegCouponRate_69.setString("72.980000");
        noLegs_1_2_2_0.set(LegCouponRate_69);
        InstrumentLeg_69.insert(LegCouponRate_69.getString());
        FIX::LegCreditRating LegCreditRating_69("STRING_1260316006");
        noLegs_1_2_2_0.set(LegCreditRating_69);
        InstrumentLeg_69.insert(LegCreditRating_69.getString());
        FIX::LegCurrency LegCurrency_69("GBP");
        noLegs_1_2_2_0.set(LegCurrency_69);
        InstrumentLeg_69.insert(LegCurrency_69.getString());
        FIX::LegDatedDate LegDatedDate_69("LOCALMKTDATE_467928487");
        noLegs_1_2_2_0.set(LegDatedDate_69);
        InstrumentLeg_69.insert(LegDatedDate_69.getString());
        FIX::LegExerciseStyle LegExerciseStyle_69(1096194853);
        noLegs_1_2_2_0.set(LegExerciseStyle_69);
        InstrumentLeg_69.insert(LegExerciseStyle_69.getString());
        FIX::LegFactor LegFactor_69;
        LegFactor_69.setString("7970530");
        noLegs_1_2_2_0.set(LegFactor_69);
        InstrumentLeg_69.insert(LegFactor_69.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_69(784636702);
        noLegs_1_2_2_0.set(LegFlowScheduleType_69);
        InstrumentLeg_69.insert(LegFlowScheduleType_69.getString());
        FIX::LegInstrRegistry LegInstrRegistry_69("STRING_36063103");
        noLegs_1_2_2_0.set(LegInstrRegistry_69);
        InstrumentLeg_69.insert(LegInstrRegistry_69.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_69("LOCALMKTDATE_1110756693");
        noLegs_1_2_2_0.set(LegInterestAccrualDate_69);
        InstrumentLeg_69.insert(LegInterestAccrualDate_69.getString());
        FIX::LegIssueDate LegIssueDate_69("LOCALMKTDATE_1093671671");
        noLegs_1_2_2_0.set(LegIssueDate_69);
        InstrumentLeg_69.insert(LegIssueDate_69.getString());
        FIX::LegIssuer LegIssuer_69("STRING_1678684830");
        noLegs_1_2_2_0.set(LegIssuer_69);
        InstrumentLeg_69.insert(LegIssuer_69.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_69("STRING_1867146859");
        noLegs_1_2_2_0.set(LegLocaleOfIssue_69);
        InstrumentLeg_69.insert(LegLocaleOfIssue_69.getString());
        FIX::LegMaturityDate LegMaturityDate_69("LOCALMKTDATE_745100992");
        noLegs_1_2_2_0.set(LegMaturityDate_69);
        InstrumentLeg_69.insert(LegMaturityDate_69.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_69("MONTHYEAR_836938");
        noLegs_1_2_2_0.set(LegMaturityMonthYear_69);
        InstrumentLeg_69.insert(LegMaturityMonthYear_69.getString());
        FIX::LegMaturityTime LegMaturityTime_69("TZTIMEONLY_1179206441");
        noLegs_1_2_2_0.set(LegMaturityTime_69);
        InstrumentLeg_69.insert(LegMaturityTime_69.getString());
        FIX::LegOptAttribute LegOptAttribute_69('1');
        noLegs_1_2_2_0.set(LegOptAttribute_69);
        InstrumentLeg_69.insert(LegOptAttribute_69.getString());
        FIX::LegOptionRatio LegOptionRatio_69;
        LegOptionRatio_69.setString("3732341");
        noLegs_1_2_2_0.set(LegOptionRatio_69);
        InstrumentLeg_69.insert(LegOptionRatio_69.getString());
        FIX::LegPool LegPool_69("STRING_694950748");
        noLegs_1_2_2_0.set(LegPool_69);
        InstrumentLeg_69.insert(LegPool_69.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_69("STRING_1739934915");
        noLegs_1_2_2_0.set(LegPriceUnitOfMeasure_69);
        InstrumentLeg_69.insert(LegPriceUnitOfMeasure_69.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_69;
        LegPriceUnitOfMeasureQty_69.setString("5995843");
        noLegs_1_2_2_0.set(LegPriceUnitOfMeasureQty_69);
        InstrumentLeg_69.insert(LegPriceUnitOfMeasureQty_69.getString());
        FIX::LegProduct LegProduct_69(154079462);
        noLegs_1_2_2_0.set(LegProduct_69);
        InstrumentLeg_69.insert(LegProduct_69.getString());
        FIX::LegPutOrCall LegPutOrCall_69(1261707672);
        noLegs_1_2_2_0.set(LegPutOrCall_69);
        InstrumentLeg_69.insert(LegPutOrCall_69.getString());
        FIX::LegRatioQty LegRatioQty_69;
        LegRatioQty_69.setString("11545756");
        noLegs_1_2_2_0.set(LegRatioQty_69);
        InstrumentLeg_69.insert(LegRatioQty_69.getString());
        FIX::LegRedemptionDate LegRedemptionDate_69("LOCALMKTDATE_1888693612");
        noLegs_1_2_2_0.set(LegRedemptionDate_69);
        InstrumentLeg_69.insert(LegRedemptionDate_69.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_69("STRING_1531819343");
        noLegs_1_2_2_0.set(LegRepoCollateralSecurityType_69);
        InstrumentLeg_69.insert(LegRepoCollateralSecurityType_69.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_69;
        LegRepurchaseRate_69.setString("42.350000");
        noLegs_1_2_2_0.set(LegRepurchaseRate_69);
        InstrumentLeg_69.insert(LegRepurchaseRate_69.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_69(389967216);
        noLegs_1_2_2_0.set(LegRepurchaseTerm_69);
        InstrumentLeg_69.insert(LegRepurchaseTerm_69.getString());
        FIX::LegSecurityDesc LegSecurityDesc_69("STRING_1929708564");
        noLegs_1_2_2_0.set(LegSecurityDesc_69);
        InstrumentLeg_69.insert(LegSecurityDesc_69.getString());
        FIX::LegSecurityExchange LegSecurityExchange_69("EXCHANGE_1910592934");
        noLegs_1_2_2_0.set(LegSecurityExchange_69);
        InstrumentLeg_69.insert(LegSecurityExchange_69.getString());
        FIX::LegSecurityID LegSecurityID_69("STRING_504485741");
        noLegs_1_2_2_0.set(LegSecurityID_69);
        InstrumentLeg_69.insert(LegSecurityID_69.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_69("STRING_1473042214");
        noLegs_1_2_2_0.set(LegSecurityIDSource_69);
        InstrumentLeg_69.insert(LegSecurityIDSource_69.getString());
        FIX::LegSecuritySubType LegSecuritySubType_69("STRING_1023425292");
        noLegs_1_2_2_0.set(LegSecuritySubType_69);
        InstrumentLeg_69.insert(LegSecuritySubType_69.getString());
        FIX::LegSecurityType LegSecurityType_69("STRING_1618683247");
        noLegs_1_2_2_0.set(LegSecurityType_69);
        InstrumentLeg_69.insert(LegSecurityType_69.getString());
        FIX::LegSide LegSide_69('1');
        noLegs_1_2_2_0.set(LegSide_69);
        InstrumentLeg_69.insert(LegSide_69.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_69("STRING_1491353780");
        noLegs_1_2_2_0.set(LegStateOrProvinceOfIssue_69);
        InstrumentLeg_69.insert(LegStateOrProvinceOfIssue_69.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_69("CAN");
        noLegs_1_2_2_0.set(LegStrikeCurrency_69);
        InstrumentLeg_69.insert(LegStrikeCurrency_69.getString());
        FIX::LegStrikePrice LegStrikePrice_69;
        LegStrikePrice_69.setString("1285068");
        noLegs_1_2_2_0.set(LegStrikePrice_69);
        InstrumentLeg_69.insert(LegStrikePrice_69.getString());
        FIX::LegSymbol LegSymbol_69("STRING_603457556");
        noLegs_1_2_2_0.set(LegSymbol_69);
        InstrumentLeg_69.insert(LegSymbol_69.getString());
        FIX::LegSymbolSfx LegSymbolSfx_69("STRING_1717161662");
        noLegs_1_2_2_0.set(LegSymbolSfx_69);
        InstrumentLeg_69.insert(LegSymbolSfx_69.getString());
        FIX::LegTimeUnit LegTimeUnit_69("STRING_1222178505");
        noLegs_1_2_2_0.set(LegTimeUnit_69);
        InstrumentLeg_69.insert(LegTimeUnit_69.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_69("STRING_134658738");
        noLegs_1_2_2_0.set(LegUnitOfMeasure_69);
        InstrumentLeg_69.insert(LegUnitOfMeasure_69.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_69;
        LegUnitOfMeasureQty_69.setString("14368248");
        noLegs_1_2_2_0.set(LegUnitOfMeasureQty_69);
        InstrumentLeg_69.insert(LegUnitOfMeasureQty_69.getString());
        all_values.push_back(InstrumentLeg_69);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_137;
          FIX::LegSecurityAltID LegSecurityAltID_137("STRING_135495676");
          noLegSecurityAltID_1_2_0_3_0.set(LegSecurityAltID_137);
          LegSecAltIDGrp_NoLegSecurityAltID_137.insert(LegSecurityAltID_137.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_137("STRING_468547667");
          noLegSecurityAltID_1_2_0_3_0.set(LegSecurityAltIDSource_137);
          LegSecAltIDGrp_NoLegSecurityAltID_137.insert(LegSecurityAltIDSource_137.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_137);

          noLegs_1_2_2_0.addGroup(noLegSecurityAltID_1_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_138;
          FIX::LegSecurityAltID LegSecurityAltID_138("STRING_1746911191");
          noLegSecurityAltID_1_2_0_3_1.set(LegSecurityAltID_138);
          LegSecAltIDGrp_NoLegSecurityAltID_138.insert(LegSecurityAltID_138.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_138("STRING_508729819");
          noLegSecurityAltID_1_2_0_3_1.set(LegSecurityAltIDSource_138);
          LegSecAltIDGrp_NoLegSecurityAltID_138.insert(LegSecurityAltIDSource_138.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_138);

          noLegs_1_2_2_0.addGroup(noLegSecurityAltID_1_2_0_3_1);
        }
        noQuoteEntries_1_1_2.addGroup(noLegs_1_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_1_2_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_70;
        FIX::EncodedLegIssuer EncodedLegIssuer_70("DATA_1163498415");
        noLegs_1_2_2_1.set(EncodedLegIssuer_70);
        InstrumentLeg_70.insert(EncodedLegIssuer_70.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_70(1339362458);
        noLegs_1_2_2_1.set(EncodedLegIssuerLen_70);
        InstrumentLeg_70.insert(EncodedLegIssuerLen_70.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_70("DATA_1108314170");
        noLegs_1_2_2_1.set(EncodedLegSecurityDesc_70);
        InstrumentLeg_70.insert(EncodedLegSecurityDesc_70.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_70(1317577877);
        noLegs_1_2_2_1.set(EncodedLegSecurityDescLen_70);
        InstrumentLeg_70.insert(EncodedLegSecurityDescLen_70.getString());
        FIX::LegCFICode LegCFICode_70("STRING_453586482");
        noLegs_1_2_2_1.set(LegCFICode_70);
        InstrumentLeg_70.insert(LegCFICode_70.getString());
        FIX::LegContractMultiplier LegContractMultiplier_70;
        LegContractMultiplier_70.setString("1154061");
        noLegs_1_2_2_1.set(LegContractMultiplier_70);
        InstrumentLeg_70.insert(LegContractMultiplier_70.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_70(1058787842);
        noLegs_1_2_2_1.set(LegContractMultiplierUnit_70);
        InstrumentLeg_70.insert(LegContractMultiplierUnit_70.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_70("MONTHYEAR_1985405825");
        noLegs_1_2_2_1.set(LegContractSettlMonth_70);
        InstrumentLeg_70.insert(LegContractSettlMonth_70.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_70("COUNTRY_1117090389");
        noLegs_1_2_2_1.set(LegCountryOfIssue_70);
        InstrumentLeg_70.insert(LegCountryOfIssue_70.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_70("LOCALMKTDATE_1448755058");
        noLegs_1_2_2_1.set(LegCouponPaymentDate_70);
        InstrumentLeg_70.insert(LegCouponPaymentDate_70.getString());
        FIX::LegCouponRate LegCouponRate_70;
        LegCouponRate_70.setString("7.420000");
        noLegs_1_2_2_1.set(LegCouponRate_70);
        InstrumentLeg_70.insert(LegCouponRate_70.getString());
        FIX::LegCreditRating LegCreditRating_70("STRING_880199675");
        noLegs_1_2_2_1.set(LegCreditRating_70);
        InstrumentLeg_70.insert(LegCreditRating_70.getString());
        FIX::LegCurrency LegCurrency_70("USD");
        noLegs_1_2_2_1.set(LegCurrency_70);
        InstrumentLeg_70.insert(LegCurrency_70.getString());
        FIX::LegDatedDate LegDatedDate_70("LOCALMKTDATE_1903624968");
        noLegs_1_2_2_1.set(LegDatedDate_70);
        InstrumentLeg_70.insert(LegDatedDate_70.getString());
        FIX::LegExerciseStyle LegExerciseStyle_70(1424440399);
        noLegs_1_2_2_1.set(LegExerciseStyle_70);
        InstrumentLeg_70.insert(LegExerciseStyle_70.getString());
        FIX::LegFactor LegFactor_70;
        LegFactor_70.setString("9025411");
        noLegs_1_2_2_1.set(LegFactor_70);
        InstrumentLeg_70.insert(LegFactor_70.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_70(1247495100);
        noLegs_1_2_2_1.set(LegFlowScheduleType_70);
        InstrumentLeg_70.insert(LegFlowScheduleType_70.getString());
        FIX::LegInstrRegistry LegInstrRegistry_70("STRING_1991834852");
        noLegs_1_2_2_1.set(LegInstrRegistry_70);
        InstrumentLeg_70.insert(LegInstrRegistry_70.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_70("LOCALMKTDATE_1508946166");
        noLegs_1_2_2_1.set(LegInterestAccrualDate_70);
        InstrumentLeg_70.insert(LegInterestAccrualDate_70.getString());
        FIX::LegIssueDate LegIssueDate_70("LOCALMKTDATE_1376001934");
        noLegs_1_2_2_1.set(LegIssueDate_70);
        InstrumentLeg_70.insert(LegIssueDate_70.getString());
        FIX::LegIssuer LegIssuer_70("STRING_447808760");
        noLegs_1_2_2_1.set(LegIssuer_70);
        InstrumentLeg_70.insert(LegIssuer_70.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_70("STRING_1078624180");
        noLegs_1_2_2_1.set(LegLocaleOfIssue_70);
        InstrumentLeg_70.insert(LegLocaleOfIssue_70.getString());
        FIX::LegMaturityDate LegMaturityDate_70("LOCALMKTDATE_450696791");
        noLegs_1_2_2_1.set(LegMaturityDate_70);
        InstrumentLeg_70.insert(LegMaturityDate_70.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_70("MONTHYEAR_582467498");
        noLegs_1_2_2_1.set(LegMaturityMonthYear_70);
        InstrumentLeg_70.insert(LegMaturityMonthYear_70.getString());
        FIX::LegMaturityTime LegMaturityTime_70("TZTIMEONLY_367965406");
        noLegs_1_2_2_1.set(LegMaturityTime_70);
        InstrumentLeg_70.insert(LegMaturityTime_70.getString());
        FIX::LegOptAttribute LegOptAttribute_70('2');
        noLegs_1_2_2_1.set(LegOptAttribute_70);
        InstrumentLeg_70.insert(LegOptAttribute_70.getString());
        FIX::LegOptionRatio LegOptionRatio_70;
        LegOptionRatio_70.setString("7179631");
        noLegs_1_2_2_1.set(LegOptionRatio_70);
        InstrumentLeg_70.insert(LegOptionRatio_70.getString());
        FIX::LegPool LegPool_70("STRING_836513073");
        noLegs_1_2_2_1.set(LegPool_70);
        InstrumentLeg_70.insert(LegPool_70.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_70("STRING_2017403831");
        noLegs_1_2_2_1.set(LegPriceUnitOfMeasure_70);
        InstrumentLeg_70.insert(LegPriceUnitOfMeasure_70.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_70;
        LegPriceUnitOfMeasureQty_70.setString("12266929");
        noLegs_1_2_2_1.set(LegPriceUnitOfMeasureQty_70);
        InstrumentLeg_70.insert(LegPriceUnitOfMeasureQty_70.getString());
        FIX::LegProduct LegProduct_70(2000011489);
        noLegs_1_2_2_1.set(LegProduct_70);
        InstrumentLeg_70.insert(LegProduct_70.getString());
        FIX::LegPutOrCall LegPutOrCall_70(1209282641);
        noLegs_1_2_2_1.set(LegPutOrCall_70);
        InstrumentLeg_70.insert(LegPutOrCall_70.getString());
        FIX::LegRatioQty LegRatioQty_70;
        LegRatioQty_70.setString("1875235");
        noLegs_1_2_2_1.set(LegRatioQty_70);
        InstrumentLeg_70.insert(LegRatioQty_70.getString());
        FIX::LegRedemptionDate LegRedemptionDate_70("LOCALMKTDATE_1170105718");
        noLegs_1_2_2_1.set(LegRedemptionDate_70);
        InstrumentLeg_70.insert(LegRedemptionDate_70.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_70("STRING_1662869123");
        noLegs_1_2_2_1.set(LegRepoCollateralSecurityType_70);
        InstrumentLeg_70.insert(LegRepoCollateralSecurityType_70.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_70;
        LegRepurchaseRate_70.setString("96.710000");
        noLegs_1_2_2_1.set(LegRepurchaseRate_70);
        InstrumentLeg_70.insert(LegRepurchaseRate_70.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_70(81409912);
        noLegs_1_2_2_1.set(LegRepurchaseTerm_70);
        InstrumentLeg_70.insert(LegRepurchaseTerm_70.getString());
        FIX::LegSecurityDesc LegSecurityDesc_70("STRING_1500791301");
        noLegs_1_2_2_1.set(LegSecurityDesc_70);
        InstrumentLeg_70.insert(LegSecurityDesc_70.getString());
        FIX::LegSecurityExchange LegSecurityExchange_70("EXCHANGE_1420020061");
        noLegs_1_2_2_1.set(LegSecurityExchange_70);
        InstrumentLeg_70.insert(LegSecurityExchange_70.getString());
        FIX::LegSecurityID LegSecurityID_70("STRING_1530164970");
        noLegs_1_2_2_1.set(LegSecurityID_70);
        InstrumentLeg_70.insert(LegSecurityID_70.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_70("STRING_1120938395");
        noLegs_1_2_2_1.set(LegSecurityIDSource_70);
        InstrumentLeg_70.insert(LegSecurityIDSource_70.getString());
        FIX::LegSecuritySubType LegSecuritySubType_70("STRING_152736088");
        noLegs_1_2_2_1.set(LegSecuritySubType_70);
        InstrumentLeg_70.insert(LegSecuritySubType_70.getString());
        FIX::LegSecurityType LegSecurityType_70("STRING_1335922122");
        noLegs_1_2_2_1.set(LegSecurityType_70);
        InstrumentLeg_70.insert(LegSecurityType_70.getString());
        FIX::LegSide LegSide_70('6');
        noLegs_1_2_2_1.set(LegSide_70);
        InstrumentLeg_70.insert(LegSide_70.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_70("STRING_2056361056");
        noLegs_1_2_2_1.set(LegStateOrProvinceOfIssue_70);
        InstrumentLeg_70.insert(LegStateOrProvinceOfIssue_70.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_70("GBP");
        noLegs_1_2_2_1.set(LegStrikeCurrency_70);
        InstrumentLeg_70.insert(LegStrikeCurrency_70.getString());
        FIX::LegStrikePrice LegStrikePrice_70;
        LegStrikePrice_70.setString("11563725");
        noLegs_1_2_2_1.set(LegStrikePrice_70);
        InstrumentLeg_70.insert(LegStrikePrice_70.getString());
        FIX::LegSymbol LegSymbol_70("STRING_457230077");
        noLegs_1_2_2_1.set(LegSymbol_70);
        InstrumentLeg_70.insert(LegSymbol_70.getString());
        FIX::LegSymbolSfx LegSymbolSfx_70("STRING_330647770");
        noLegs_1_2_2_1.set(LegSymbolSfx_70);
        InstrumentLeg_70.insert(LegSymbolSfx_70.getString());
        FIX::LegTimeUnit LegTimeUnit_70("STRING_384890794");
        noLegs_1_2_2_1.set(LegTimeUnit_70);
        InstrumentLeg_70.insert(LegTimeUnit_70.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_70("STRING_905038837");
        noLegs_1_2_2_1.set(LegUnitOfMeasure_70);
        InstrumentLeg_70.insert(LegUnitOfMeasure_70.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_70;
        LegUnitOfMeasureQty_70.setString("14092719");
        noLegs_1_2_2_1.set(LegUnitOfMeasureQty_70);
        InstrumentLeg_70.insert(LegUnitOfMeasureQty_70.getString());
        all_values.push_back(InstrumentLeg_70);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_139;
          FIX::LegSecurityAltID LegSecurityAltID_139("STRING_1487506335");
          noLegSecurityAltID_1_2_1_3_0.set(LegSecurityAltID_139);
          LegSecAltIDGrp_NoLegSecurityAltID_139.insert(LegSecurityAltID_139.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_139("STRING_1777237357");
          noLegSecurityAltID_1_2_1_3_0.set(LegSecurityAltIDSource_139);
          LegSecAltIDGrp_NoLegSecurityAltID_139.insert(LegSecurityAltIDSource_139.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_139);

          noLegs_1_2_2_1.addGroup(noLegSecurityAltID_1_2_1_3_0);
        }
        noQuoteEntries_1_1_2.addGroup(noLegs_1_2_2_1);
      }
      // Instrument
      multiset<string> Instrument_39;
      FIX::AttachmentPoint AttachmentPoint_39;
      AttachmentPoint_39.setString("2.260000");
      noQuoteEntries_1_1_2.set(AttachmentPoint_39);
      Instrument_39.insert(AttachmentPoint_39.getString());
      FIX::CFICode CFICode_39("STRING_57985862");
      noQuoteEntries_1_1_2.set(CFICode_39);
      Instrument_39.insert(CFICode_39.getString());
      FIX::CPProgram CPProgram_39(1);
      noQuoteEntries_1_1_2.set(CPProgram_39);
      Instrument_39.insert(CPProgram_39.getString());
      FIX::CPRegType CPRegType_39("STRING_976000409");
      noQuoteEntries_1_1_2.set(CPRegType_39);
      Instrument_39.insert(CPRegType_39.getString());
      FIX::CapPrice CapPrice_39;
      CapPrice_39.setString("12846788");
      noQuoteEntries_1_1_2.set(CapPrice_39);
      Instrument_39.insert(CapPrice_39.getString());
      FIX::ContractMultiplier ContractMultiplier_39;
      ContractMultiplier_39.setString("3187946");
      noQuoteEntries_1_1_2.set(ContractMultiplier_39);
      Instrument_39.insert(ContractMultiplier_39.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_39(0);
      noQuoteEntries_1_1_2.set(ContractMultiplierUnit_39);
      Instrument_39.insert(ContractMultiplierUnit_39.getString());
      FIX::ContractSettlMonth ContractSettlMonth_39("MONTHYEAR_1472202374");
      noQuoteEntries_1_1_2.set(ContractSettlMonth_39);
      Instrument_39.insert(ContractSettlMonth_39.getString());
      FIX::CountryOfIssue CountryOfIssue_39("COUNTRY_1488900342");
      noQuoteEntries_1_1_2.set(CountryOfIssue_39);
      Instrument_39.insert(CountryOfIssue_39.getString());
      FIX::CouponPaymentDate CouponPaymentDate_39("LOCALMKTDATE_1700668526");
      noQuoteEntries_1_1_2.set(CouponPaymentDate_39);
      Instrument_39.insert(CouponPaymentDate_39.getString());
      FIX::CouponRate CouponRate_39;
      CouponRate_39.setString("20.450000");
      noQuoteEntries_1_1_2.set(CouponRate_39);
      Instrument_39.insert(CouponRate_39.getString());
      FIX::CreditRating CreditRating_39("STRING_1570310255");
      noQuoteEntries_1_1_2.set(CreditRating_39);
      Instrument_39.insert(CreditRating_39.getString());
      FIX::DatedDate DatedDate_39("LOCALMKTDATE_1053976179");
      noQuoteEntries_1_1_2.set(DatedDate_39);
      Instrument_39.insert(DatedDate_39.getString());
      FIX::DetachmentPoint DetachmentPoint_39;
      DetachmentPoint_39.setString("84.580000");
      noQuoteEntries_1_1_2.set(DetachmentPoint_39);
      Instrument_39.insert(DetachmentPoint_39.getString());
      FIX::EncodedIssuer EncodedIssuer_39("DATA_952991577");
      noQuoteEntries_1_1_2.set(EncodedIssuer_39);
      Instrument_39.insert(EncodedIssuer_39.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_39(27430926);
      noQuoteEntries_1_1_2.set(EncodedIssuerLen_39);
      Instrument_39.insert(EncodedIssuerLen_39.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_39("DATA_1200404547");
      noQuoteEntries_1_1_2.set(EncodedSecurityDesc_39);
      Instrument_39.insert(EncodedSecurityDesc_39.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_39(141430051);
      noQuoteEntries_1_1_2.set(EncodedSecurityDescLen_39);
      Instrument_39.insert(EncodedSecurityDescLen_39.getString());
      FIX::ExerciseStyle ExerciseStyle_39(1);
      noQuoteEntries_1_1_2.set(ExerciseStyle_39);
      Instrument_39.insert(ExerciseStyle_39.getString());
      FIX::Factor Factor_39;
      Factor_39.setString("11092819");
      noQuoteEntries_1_1_2.set(Factor_39);
      Instrument_39.insert(Factor_39.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_39(true);
      noQuoteEntries_1_1_2.set(FlexProductEligibilityIndicator_39);
      Instrument_39.insert(FlexProductEligibilityIndicator_39.getString());
      FIX::FlexibleIndicator FlexibleIndicator_39(true);
      noQuoteEntries_1_1_2.set(FlexibleIndicator_39);
      Instrument_39.insert(FlexibleIndicator_39.getString());
      FIX::FloorPrice FloorPrice_39;
      FloorPrice_39.setString("1181708");
      noQuoteEntries_1_1_2.set(FloorPrice_39);
      Instrument_39.insert(FloorPrice_39.getString());
      FIX::FlowScheduleType FlowScheduleType_39(1);
      noQuoteEntries_1_1_2.set(FlowScheduleType_39);
      Instrument_39.insert(FlowScheduleType_39.getString());
      FIX::InstrRegistry InstrRegistry_39("STRING_1393908005");
      noQuoteEntries_1_1_2.set(InstrRegistry_39);
      Instrument_39.insert(InstrRegistry_39.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_39('5');
      noQuoteEntries_1_1_2.set(InstrmtAssignmentMethod_39);
      Instrument_39.insert(InstrmtAssignmentMethod_39.getString());
      FIX::InterestAccrualDate InterestAccrualDate_39("LOCALMKTDATE_2116577838");
      noQuoteEntries_1_1_2.set(InterestAccrualDate_39);
      Instrument_39.insert(InterestAccrualDate_39.getString());
      FIX::IssueDate IssueDate_39("LOCALMKTDATE_655696308");
      noQuoteEntries_1_1_2.set(IssueDate_39);
      Instrument_39.insert(IssueDate_39.getString());
      FIX::Issuer Issuer_39("STRING_1338649196");
      noQuoteEntries_1_1_2.set(Issuer_39);
      Instrument_39.insert(Issuer_39.getString());
      FIX::ListMethod ListMethod_39(0);
      noQuoteEntries_1_1_2.set(ListMethod_39);
      Instrument_39.insert(ListMethod_39.getString());
      FIX::LocaleOfIssue LocaleOfIssue_39("STRING_285450017");
      noQuoteEntries_1_1_2.set(LocaleOfIssue_39);
      Instrument_39.insert(LocaleOfIssue_39.getString());
      FIX::MaturityDate MaturityDate_39("LOCALMKTDATE_297245774");
      noQuoteEntries_1_1_2.set(MaturityDate_39);
      Instrument_39.insert(MaturityDate_39.getString());
      FIX::MaturityMonthYear MaturityMonthYear_39("MONTHYEAR_1514586388");
      noQuoteEntries_1_1_2.set(MaturityMonthYear_39);
      Instrument_39.insert(MaturityMonthYear_39.getString());
      FIX::MaturityTime MaturityTime_39("TZTIMEONLY_751716800");
      noQuoteEntries_1_1_2.set(MaturityTime_39);
      Instrument_39.insert(MaturityTime_39.getString());
      FIX::MinPriceIncrement MinPriceIncrement_39;
      MinPriceIncrement_39.setString("12732461");
      noQuoteEntries_1_1_2.set(MinPriceIncrement_39);
      Instrument_39.insert(MinPriceIncrement_39.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_39;
      MinPriceIncrementAmount_39.setString("6517815");
      noQuoteEntries_1_1_2.set(MinPriceIncrementAmount_39);
      Instrument_39.insert(MinPriceIncrementAmount_39.getString());
      FIX::NTPositionLimit NTPositionLimit_39(1070511424);
      noQuoteEntries_1_1_2.set(NTPositionLimit_39);
      Instrument_39.insert(NTPositionLimit_39.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_39;
      NotionalPercentageOutstanding_39.setString("55.860000");
      noQuoteEntries_1_1_2.set(NotionalPercentageOutstanding_39);
      Instrument_39.insert(NotionalPercentageOutstanding_39.getString());
      FIX::OptAttribute OptAttribute_39('2');
      noQuoteEntries_1_1_2.set(OptAttribute_39);
      Instrument_39.insert(OptAttribute_39.getString());
      FIX::OptPayoutAmount OptPayoutAmount_39;
      OptPayoutAmount_39.setString("4119281");
      noQuoteEntries_1_1_2.set(OptPayoutAmount_39);
      Instrument_39.insert(OptPayoutAmount_39.getString());
      FIX::OptPayoutType OptPayoutType_39(3);
      noQuoteEntries_1_1_2.set(OptPayoutType_39);
      Instrument_39.insert(OptPayoutType_39.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_39;
      OriginalNotionalPercentageOutstanding_39.setString("23.690000");
      noQuoteEntries_1_1_2.set(OriginalNotionalPercentageOutstanding_39);
      Instrument_39.insert(OriginalNotionalPercentageOutstanding_39.getString());
      FIX::Pool Pool_39("STRING_1982238374");
      noQuoteEntries_1_1_2.set(Pool_39);
      Instrument_39.insert(Pool_39.getString());
      FIX::PositionLimit PositionLimit_39(1918206644);
      noQuoteEntries_1_1_2.set(PositionLimit_39);
      Instrument_39.insert(PositionLimit_39.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_39("STRING_PCTPAR");
      noQuoteEntries_1_1_2.set(PriceQuoteMethod_39);
      Instrument_39.insert(PriceQuoteMethod_39.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_39("STRING_787746303");
      noQuoteEntries_1_1_2.set(PriceUnitOfMeasure_39);
      Instrument_39.insert(PriceUnitOfMeasure_39.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_39;
      PriceUnitOfMeasureQty_39.setString("19456375");
      noQuoteEntries_1_1_2.set(PriceUnitOfMeasureQty_39);
      Instrument_39.insert(PriceUnitOfMeasureQty_39.getString());
      FIX::Product Product_41(5);
      noQuoteEntries_1_1_2.set(Product_41);
      Instrument_39.insert(Product_41.getString());
      FIX::ProductComplex ProductComplex_39("STRING_929176355");
      noQuoteEntries_1_1_2.set(ProductComplex_39);
      Instrument_39.insert(ProductComplex_39.getString());
      FIX::PutOrCall PutOrCall_39(1);
      noQuoteEntries_1_1_2.set(PutOrCall_39);
      Instrument_39.insert(PutOrCall_39.getString());
      FIX::RedemptionDate RedemptionDate_39("LOCALMKTDATE_814020034");
      noQuoteEntries_1_1_2.set(RedemptionDate_39);
      Instrument_39.insert(RedemptionDate_39.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_39("STRING_1683485279");
      noQuoteEntries_1_1_2.set(RepoCollateralSecurityType_39);
      Instrument_39.insert(RepoCollateralSecurityType_39.getString());
      FIX::RepurchaseRate RepurchaseRate_39;
      RepurchaseRate_39.setString("91.390000");
      noQuoteEntries_1_1_2.set(RepurchaseRate_39);
      Instrument_39.insert(RepurchaseRate_39.getString());
      FIX::RepurchaseTerm RepurchaseTerm_39(932190850);
      noQuoteEntries_1_1_2.set(RepurchaseTerm_39);
      Instrument_39.insert(RepurchaseTerm_39.getString());
      FIX::RestructuringType RestructuringType_39("STRING_MR");
      noQuoteEntries_1_1_2.set(RestructuringType_39);
      Instrument_39.insert(RestructuringType_39.getString());
      FIX::SecurityDesc SecurityDesc_39("STRING_201913496");
      noQuoteEntries_1_1_2.set(SecurityDesc_39);
      Instrument_39.insert(SecurityDesc_39.getString());
      FIX::SecurityExchange SecurityExchange_39("EXCHANGE_1435252460");
      noQuoteEntries_1_1_2.set(SecurityExchange_39);
      Instrument_39.insert(SecurityExchange_39.getString());
      FIX::SecurityGroup SecurityGroup_39("STRING_716634823");
      noQuoteEntries_1_1_2.set(SecurityGroup_39);
      Instrument_39.insert(SecurityGroup_39.getString());
      FIX::SecurityID SecurityID_39("STRING_857609804");
      noQuoteEntries_1_1_2.set(SecurityID_39);
      Instrument_39.insert(SecurityID_39.getString());
      FIX::SecurityIDSource SecurityIDSource_39("STRING_J");
      noQuoteEntries_1_1_2.set(SecurityIDSource_39);
      Instrument_39.insert(SecurityIDSource_39.getString());
      FIX::SecurityStatus SecurityStatus_39("STRING_2");
      noQuoteEntries_1_1_2.set(SecurityStatus_39);
      Instrument_39.insert(SecurityStatus_39.getString());
      FIX::SecuritySubType SecuritySubType_40("STRING_1143059822");
      noQuoteEntries_1_1_2.set(SecuritySubType_40);
      Instrument_39.insert(SecuritySubType_40.getString());
      FIX::SecurityType SecurityType_41("STRING_OPT");
      noQuoteEntries_1_1_2.set(SecurityType_41);
      Instrument_39.insert(SecurityType_41.getString());
      FIX::Seniority Seniority_39("STRING_SD");
      noQuoteEntries_1_1_2.set(Seniority_39);
      Instrument_39.insert(Seniority_39.getString());
      FIX::SettlMethod SettlMethod_39('C');
      noQuoteEntries_1_1_2.set(SettlMethod_39);
      Instrument_39.insert(SettlMethod_39.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_39("STRING_49426318");
      noQuoteEntries_1_1_2.set(SettleOnOpenFlag_39);
      Instrument_39.insert(SettleOnOpenFlag_39.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_39("STRING_44636039");
      noQuoteEntries_1_1_2.set(StateOrProvinceOfIssue_39);
      Instrument_39.insert(StateOrProvinceOfIssue_39.getString());
      FIX::StrikeCurrency StrikeCurrency_39("GBP");
      noQuoteEntries_1_1_2.set(StrikeCurrency_39);
      Instrument_39.insert(StrikeCurrency_39.getString());
      FIX::StrikeMultiplier StrikeMultiplier_39;
      StrikeMultiplier_39.setString("211363");
      noQuoteEntries_1_1_2.set(StrikeMultiplier_39);
      Instrument_39.insert(StrikeMultiplier_39.getString());
      FIX::StrikePrice StrikePrice_39;
      StrikePrice_39.setString("12297325");
      noQuoteEntries_1_1_2.set(StrikePrice_39);
      Instrument_39.insert(StrikePrice_39.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_39(2);
      noQuoteEntries_1_1_2.set(StrikePriceBoundaryMethod_39);
      Instrument_39.insert(StrikePriceBoundaryMethod_39.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_39;
      StrikePriceBoundaryPrecision_39.setString("87.320000");
      noQuoteEntries_1_1_2.set(StrikePriceBoundaryPrecision_39);
      Instrument_39.insert(StrikePriceBoundaryPrecision_39.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_39(1);
      noQuoteEntries_1_1_2.set(StrikePriceDeterminationMethod_39);
      Instrument_39.insert(StrikePriceDeterminationMethod_39.getString());
      FIX::StrikeValue StrikeValue_39;
      StrikeValue_39.setString("19954253");
      noQuoteEntries_1_1_2.set(StrikeValue_39);
      Instrument_39.insert(StrikeValue_39.getString());
      FIX::Symbol Symbol_39("STRING_277102263");
      noQuoteEntries_1_1_2.set(Symbol_39);
      Instrument_39.insert(Symbol_39.getString());
      FIX::SymbolSfx SymbolSfx_39("STRING_WI");
      noQuoteEntries_1_1_2.set(SymbolSfx_39);
      Instrument_39.insert(SymbolSfx_39.getString());
      FIX::TimeUnit TimeUnit_39("STRING_Mo");
      noQuoteEntries_1_1_2.set(TimeUnit_39);
      Instrument_39.insert(TimeUnit_39.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_39(3);
      noQuoteEntries_1_1_2.set(UnderlyingPriceDeterminationMethod_39);
      Instrument_39.insert(UnderlyingPriceDeterminationMethod_39.getString());
      FIX::UnitOfMeasure UnitOfMeasure_39("STRING_Bcf");
      noQuoteEntries_1_1_2.set(UnitOfMeasure_39);
      Instrument_39.insert(UnitOfMeasure_39.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_39;
      UnitOfMeasureQty_39.setString("16858081");
      noQuoteEntries_1_1_2.set(UnitOfMeasureQty_39);
      Instrument_39.insert(UnitOfMeasureQty_39.getString());
      FIX::ValuationMethod ValuationMethod_39("STRING_FUT");
      noQuoteEntries_1_1_2.set(ValuationMethod_39);
      Instrument_39.insert(ValuationMethod_39.getString());
      all_values.push_back(Instrument_39);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_74;
        FIX::ComplexEventCondition ComplexEventCondition_74(2);
        noComplexEvents_1_2_2_0.set(ComplexEventCondition_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventCondition_74.getString());
        FIX::ComplexEventPrice ComplexEventPrice_74;
        ComplexEventPrice_74.setString("17280512");
        noComplexEvents_1_2_2_0.set(ComplexEventPrice_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventPrice_74.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_74(5);
        noComplexEvents_1_2_2_0.set(ComplexEventPriceBoundaryMethod_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventPriceBoundaryMethod_74.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_74;
        ComplexEventPriceBoundaryPrecision_74.setString("71.820000");
        noComplexEvents_1_2_2_0.set(ComplexEventPriceBoundaryPrecision_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventPriceBoundaryPrecision_74.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_74(2);
        noComplexEvents_1_2_2_0.set(ComplexEventPriceTimeType_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventPriceTimeType_74.getString());
        FIX::ComplexEventType ComplexEventType_74(1);
        noComplexEvents_1_2_2_0.set(ComplexEventType_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexEventType_74.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_74;
        ComplexOptPayoutAmount_74.setString("15533369");
        noComplexEvents_1_2_2_0.set(ComplexOptPayoutAmount_74);
        ComplexEvents_NoComplexEvents_74.insert(ComplexOptPayoutAmount_74.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_74);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_145;
          FIX::ComplexEventEndDate ComplexEventEndDate_145(FIX::UTCTIMESTAMP(16, 21, 6, 15, 8, 2005));
          noComplexEventDates_1_2_0_3_0.set(ComplexEventEndDate_145);
          ComplexEventDates_NoComplexEventDates_145.insert(ComplexEventEndDate_145.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_145(FIX::UTCTIMESTAMP(4, 48, 4, 25, 1, 2008));
          noComplexEventDates_1_2_0_3_0.set(ComplexEventStartDate_145);
          ComplexEventDates_NoComplexEventDates_145.insert(ComplexEventStartDate_145.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_145);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_293;
            FIX::ComplexEventEndTime ComplexEventEndTime_293(FIX::UTCTIMEONLY(19, 4, 18));
            noComplexEventTimes_1_2_0_0_4_0.set(ComplexEventEndTime_293);
            ComplexEventTimes_NoComplexEventTimes_293.insert(ComplexEventEndTime_293.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_293(FIX::UTCTIMEONLY(22, 54, 8));
            noComplexEventTimes_1_2_0_0_4_0.set(ComplexEventStartTime_293);
            ComplexEventTimes_NoComplexEventTimes_293.insert(ComplexEventStartTime_293.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_293);

            noComplexEventDates_1_2_0_3_0.addGroup(noComplexEventTimes_1_2_0_0_4_0);
          }
          noComplexEvents_1_2_2_0.addGroup(noComplexEventDates_1_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_146;
          FIX::ComplexEventEndDate ComplexEventEndDate_146(FIX::UTCTIMESTAMP(20, 59, 18, 10, 10, 2008));
          noComplexEventDates_1_2_0_3_1.set(ComplexEventEndDate_146);
          ComplexEventDates_NoComplexEventDates_146.insert(ComplexEventEndDate_146.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_146(FIX::UTCTIMESTAMP(17, 37, 43, 11, 1, 2014));
          noComplexEventDates_1_2_0_3_1.set(ComplexEventStartDate_146);
          ComplexEventDates_NoComplexEventDates_146.insert(ComplexEventStartDate_146.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_146);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_294;
            FIX::ComplexEventEndTime ComplexEventEndTime_294(FIX::UTCTIMEONLY(22, 1, 42));
            noComplexEventTimes_1_2_0_1_4_0.set(ComplexEventEndTime_294);
            ComplexEventTimes_NoComplexEventTimes_294.insert(ComplexEventEndTime_294.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_294(FIX::UTCTIMEONLY(2, 42, 39));
            noComplexEventTimes_1_2_0_1_4_0.set(ComplexEventStartTime_294);
            ComplexEventTimes_NoComplexEventTimes_294.insert(ComplexEventStartTime_294.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_294);

            noComplexEventDates_1_2_0_3_1.addGroup(noComplexEventTimes_1_2_0_1_4_0);
          }
          noComplexEvents_1_2_2_0.addGroup(noComplexEventDates_1_2_0_3_1);
        }
        noQuoteEntries_1_1_2.addGroup(noComplexEvents_1_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_2_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_75;
        FIX::ComplexEventCondition ComplexEventCondition_75(1);
        noComplexEvents_1_2_2_1.set(ComplexEventCondition_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventCondition_75.getString());
        FIX::ComplexEventPrice ComplexEventPrice_75;
        ComplexEventPrice_75.setString("16199563");
        noComplexEvents_1_2_2_1.set(ComplexEventPrice_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventPrice_75.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_75(2);
        noComplexEvents_1_2_2_1.set(ComplexEventPriceBoundaryMethod_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventPriceBoundaryMethod_75.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_75;
        ComplexEventPriceBoundaryPrecision_75.setString("20.400000");
        noComplexEvents_1_2_2_1.set(ComplexEventPriceBoundaryPrecision_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventPriceBoundaryPrecision_75.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_75(3);
        noComplexEvents_1_2_2_1.set(ComplexEventPriceTimeType_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventPriceTimeType_75.getString());
        FIX::ComplexEventType ComplexEventType_75(5);
        noComplexEvents_1_2_2_1.set(ComplexEventType_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexEventType_75.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_75;
        ComplexOptPayoutAmount_75.setString("9303283");
        noComplexEvents_1_2_2_1.set(ComplexOptPayoutAmount_75);
        ComplexEvents_NoComplexEvents_75.insert(ComplexOptPayoutAmount_75.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_75);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_147;
          FIX::ComplexEventEndDate ComplexEventEndDate_147(FIX::UTCTIMESTAMP(14, 22, 4, 0, 9, 2017));
          noComplexEventDates_1_2_1_3_0.set(ComplexEventEndDate_147);
          ComplexEventDates_NoComplexEventDates_147.insert(ComplexEventEndDate_147.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_147(FIX::UTCTIMESTAMP(17, 22, 17, 13, 11, 2013));
          noComplexEventDates_1_2_1_3_0.set(ComplexEventStartDate_147);
          ComplexEventDates_NoComplexEventDates_147.insert(ComplexEventStartDate_147.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_147);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_295;
            FIX::ComplexEventEndTime ComplexEventEndTime_295(FIX::UTCTIMEONLY(18, 35, 58));
            noComplexEventTimes_1_2_1_0_4_0.set(ComplexEventEndTime_295);
            ComplexEventTimes_NoComplexEventTimes_295.insert(ComplexEventEndTime_295.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_295(FIX::UTCTIMEONLY(5, 32, 25));
            noComplexEventTimes_1_2_1_0_4_0.set(ComplexEventStartTime_295);
            ComplexEventTimes_NoComplexEventTimes_295.insert(ComplexEventStartTime_295.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_295);

            noComplexEventDates_1_2_1_3_0.addGroup(noComplexEventTimes_1_2_1_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_296;
            FIX::ComplexEventEndTime ComplexEventEndTime_296(FIX::UTCTIMEONLY(21, 1, 35));
            noComplexEventTimes_1_2_1_0_4_1.set(ComplexEventEndTime_296);
            ComplexEventTimes_NoComplexEventTimes_296.insert(ComplexEventEndTime_296.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_296(FIX::UTCTIMEONLY(4, 1, 0));
            noComplexEventTimes_1_2_1_0_4_1.set(ComplexEventStartTime_296);
            ComplexEventTimes_NoComplexEventTimes_296.insert(ComplexEventStartTime_296.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_296);

            noComplexEventDates_1_2_1_3_0.addGroup(noComplexEventTimes_1_2_1_0_4_1);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_148;
          FIX::ComplexEventEndDate ComplexEventEndDate_148(FIX::UTCTIMESTAMP(3, 15, 23, 12, 12, 2016));
          noComplexEventDates_1_2_1_3_1.set(ComplexEventEndDate_148);
          ComplexEventDates_NoComplexEventDates_148.insert(ComplexEventEndDate_148.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_148(FIX::UTCTIMESTAMP(8, 38, 47, 5, 5, 2006));
          noComplexEventDates_1_2_1_3_1.set(ComplexEventStartDate_148);
          ComplexEventDates_NoComplexEventDates_148.insert(ComplexEventStartDate_148.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_148);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_297;
            FIX::ComplexEventEndTime ComplexEventEndTime_297(FIX::UTCTIMEONLY(4, 31, 30));
            noComplexEventTimes_1_2_1_1_4_0.set(ComplexEventEndTime_297);
            ComplexEventTimes_NoComplexEventTimes_297.insert(ComplexEventEndTime_297.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_297(FIX::UTCTIMEONLY(16, 2, 28));
            noComplexEventTimes_1_2_1_1_4_0.set(ComplexEventStartTime_297);
            ComplexEventTimes_NoComplexEventTimes_297.insert(ComplexEventStartTime_297.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_297);

            noComplexEventDates_1_2_1_3_1.addGroup(noComplexEventTimes_1_2_1_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_298;
            FIX::ComplexEventEndTime ComplexEventEndTime_298(FIX::UTCTIMEONLY(15, 21, 43));
            noComplexEventTimes_1_2_1_1_4_1.set(ComplexEventEndTime_298);
            ComplexEventTimes_NoComplexEventTimes_298.insert(ComplexEventEndTime_298.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_298(FIX::UTCTIMEONLY(13, 37, 45));
            noComplexEventTimes_1_2_1_1_4_1.set(ComplexEventStartTime_298);
            ComplexEventTimes_NoComplexEventTimes_298.insert(ComplexEventStartTime_298.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_298);

            noComplexEventDates_1_2_1_3_1.addGroup(noComplexEventTimes_1_2_1_1_4_1);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_149;
          FIX::ComplexEventEndDate ComplexEventEndDate_149(FIX::UTCTIMESTAMP(8, 0, 43, 4, 4, 2011));
          noComplexEventDates_1_2_1_3_2.set(ComplexEventEndDate_149);
          ComplexEventDates_NoComplexEventDates_149.insert(ComplexEventEndDate_149.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_149(FIX::UTCTIMESTAMP(11, 29, 41, 21, 10, 2010));
          noComplexEventDates_1_2_1_3_2.set(ComplexEventStartDate_149);
          ComplexEventDates_NoComplexEventDates_149.insert(ComplexEventStartDate_149.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_149);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_299;
            FIX::ComplexEventEndTime ComplexEventEndTime_299(FIX::UTCTIMEONLY(8, 51, 39));
            noComplexEventTimes_1_2_1_2_4_0.set(ComplexEventEndTime_299);
            ComplexEventTimes_NoComplexEventTimes_299.insert(ComplexEventEndTime_299.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_299(FIX::UTCTIMEONLY(8, 33, 27));
            noComplexEventTimes_1_2_1_2_4_0.set(ComplexEventStartTime_299);
            ComplexEventTimes_NoComplexEventTimes_299.insert(ComplexEventStartTime_299.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_299);

            noComplexEventDates_1_2_1_3_2.addGroup(noComplexEventTimes_1_2_1_2_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_300;
            FIX::ComplexEventEndTime ComplexEventEndTime_300(FIX::UTCTIMEONLY(4, 48, 31));
            noComplexEventTimes_1_2_1_2_4_1.set(ComplexEventEndTime_300);
            ComplexEventTimes_NoComplexEventTimes_300.insert(ComplexEventEndTime_300.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_300(FIX::UTCTIMEONLY(18, 0, 10));
            noComplexEventTimes_1_2_1_2_4_1.set(ComplexEventStartTime_300);
            ComplexEventTimes_NoComplexEventTimes_300.insert(ComplexEventStartTime_300.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_300);

            noComplexEventDates_1_2_1_3_2.addGroup(noComplexEventTimes_1_2_1_2_4_1);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_2);
        }
        noQuoteEntries_1_1_2.addGroup(noComplexEvents_1_2_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_1_2_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_76;
        FIX::ComplexEventCondition ComplexEventCondition_76(1);
        noComplexEvents_1_2_2_2.set(ComplexEventCondition_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventCondition_76.getString());
        FIX::ComplexEventPrice ComplexEventPrice_76;
        ComplexEventPrice_76.setString("11382645");
        noComplexEvents_1_2_2_2.set(ComplexEventPrice_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventPrice_76.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_76(3);
        noComplexEvents_1_2_2_2.set(ComplexEventPriceBoundaryMethod_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceBoundaryMethod_76.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_76;
        ComplexEventPriceBoundaryPrecision_76.setString("46.770000");
        noComplexEvents_1_2_2_2.set(ComplexEventPriceBoundaryPrecision_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceBoundaryPrecision_76.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_76(2);
        noComplexEvents_1_2_2_2.set(ComplexEventPriceTimeType_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventPriceTimeType_76.getString());
        FIX::ComplexEventType ComplexEventType_76(6);
        noComplexEvents_1_2_2_2.set(ComplexEventType_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexEventType_76.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_76;
        ComplexOptPayoutAmount_76.setString("7640222");
        noComplexEvents_1_2_2_2.set(ComplexOptPayoutAmount_76);
        ComplexEvents_NoComplexEvents_76.insert(ComplexOptPayoutAmount_76.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_76);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_150;
          FIX::ComplexEventEndDate ComplexEventEndDate_150(FIX::UTCTIMESTAMP(13, 57, 41, 6, 2, 2014));
          noComplexEventDates_1_2_2_3_0.set(ComplexEventEndDate_150);
          ComplexEventDates_NoComplexEventDates_150.insert(ComplexEventEndDate_150.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_150(FIX::UTCTIMESTAMP(14, 53, 14, 17, 6, 2017));
          noComplexEventDates_1_2_2_3_0.set(ComplexEventStartDate_150);
          ComplexEventDates_NoComplexEventDates_150.insert(ComplexEventStartDate_150.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_150);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_301;
            FIX::ComplexEventEndTime ComplexEventEndTime_301(FIX::UTCTIMEONLY(3, 40, 53));
            noComplexEventTimes_1_2_2_0_4_0.set(ComplexEventEndTime_301);
            ComplexEventTimes_NoComplexEventTimes_301.insert(ComplexEventEndTime_301.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_301(FIX::UTCTIMEONLY(2, 53, 54));
            noComplexEventTimes_1_2_2_0_4_0.set(ComplexEventStartTime_301);
            ComplexEventTimes_NoComplexEventTimes_301.insert(ComplexEventStartTime_301.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_301);

            noComplexEventDates_1_2_2_3_0.addGroup(noComplexEventTimes_1_2_2_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_302;
            FIX::ComplexEventEndTime ComplexEventEndTime_302(FIX::UTCTIMEONLY(6, 56, 45));
            noComplexEventTimes_1_2_2_0_4_1.set(ComplexEventEndTime_302);
            ComplexEventTimes_NoComplexEventTimes_302.insert(ComplexEventEndTime_302.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_302(FIX::UTCTIMEONLY(17, 13, 0));
            noComplexEventTimes_1_2_2_0_4_1.set(ComplexEventStartTime_302);
            ComplexEventTimes_NoComplexEventTimes_302.insert(ComplexEventStartTime_302.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_302);

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
        multiset<string> EvntGrp_NoEvents_78;
        FIX::EventDate EventDate_78("LOCALMKTDATE_1291494902");
        noEvents_1_2_2_0.set(EventDate_78);
        EvntGrp_NoEvents_78.insert(EventDate_78.getString());
        FIX::EventPx EventPx_78;
        EventPx_78.setString("13291292");
        noEvents_1_2_2_0.set(EventPx_78);
        EvntGrp_NoEvents_78.insert(EventPx_78.getString());
        FIX::EventText EventText_78("STRING_169812335");
        noEvents_1_2_2_0.set(EventText_78);
        EvntGrp_NoEvents_78.insert(EventText_78.getString());
        FIX::EventTime EventTime_78(FIX::UTCTIMESTAMP(3, 37, 11, 9, 12, 2005));
        noEvents_1_2_2_0.set(EventTime_78);
        EvntGrp_NoEvents_78.insert(EventTime_78.getString());
        FIX::EventType EventType_78(19);
        noEvents_1_2_2_0.set(EventType_78);
        EvntGrp_NoEvents_78.insert(EventType_78.getString());
        all_values.push_back(EvntGrp_NoEvents_78);

        noQuoteEntries_1_1_2.addGroup(noEvents_1_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_2_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_79;
        FIX::EventDate EventDate_79("LOCALMKTDATE_522883736");
        noEvents_1_2_2_1.set(EventDate_79);
        EvntGrp_NoEvents_79.insert(EventDate_79.getString());
        FIX::EventPx EventPx_79;
        EventPx_79.setString("13796613");
        noEvents_1_2_2_1.set(EventPx_79);
        EvntGrp_NoEvents_79.insert(EventPx_79.getString());
        FIX::EventText EventText_79("STRING_155189942");
        noEvents_1_2_2_1.set(EventText_79);
        EvntGrp_NoEvents_79.insert(EventText_79.getString());
        FIX::EventTime EventTime_79(FIX::UTCTIMESTAMP(12, 42, 11, 8, 10, 2002));
        noEvents_1_2_2_1.set(EventTime_79);
        EvntGrp_NoEvents_79.insert(EventTime_79.getString());
        FIX::EventType EventType_79(4);
        noEvents_1_2_2_1.set(EventType_79);
        EvntGrp_NoEvents_79.insert(EventType_79.getString());
        all_values.push_back(EvntGrp_NoEvents_79);

        noQuoteEntries_1_1_2.addGroup(noEvents_1_2_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_1_2_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_80;
        FIX::EventDate EventDate_80("LOCALMKTDATE_1611772805");
        noEvents_1_2_2_2.set(EventDate_80);
        EvntGrp_NoEvents_80.insert(EventDate_80.getString());
        FIX::EventPx EventPx_80;
        EventPx_80.setString("15947263");
        noEvents_1_2_2_2.set(EventPx_80);
        EvntGrp_NoEvents_80.insert(EventPx_80.getString());
        FIX::EventText EventText_80("STRING_1011462479");
        noEvents_1_2_2_2.set(EventText_80);
        EvntGrp_NoEvents_80.insert(EventText_80.getString());
        FIX::EventTime EventTime_80(FIX::UTCTIMESTAMP(15, 53, 56, 15, 8, 2015));
        noEvents_1_2_2_2.set(EventTime_80);
        EvntGrp_NoEvents_80.insert(EventTime_80.getString());
        FIX::EventType EventType_80(9);
        noEvents_1_2_2_2.set(EventType_80);
        EvntGrp_NoEvents_80.insert(EventType_80.getString());
        all_values.push_back(EvntGrp_NoEvents_80);

        noQuoteEntries_1_1_2.addGroup(noEvents_1_2_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_83;
        FIX::InstrumentPartyID InstrumentPartyID_83("STRING_1092407599");
        noInstrumentParties_1_2_2_0.set(InstrumentPartyID_83);
        InstrumentParties_NoInstrumentParties_83.insert(InstrumentPartyID_83.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_83('1');
        noInstrumentParties_1_2_2_0.set(InstrumentPartyIDSource_83);
        InstrumentParties_NoInstrumentParties_83.insert(InstrumentPartyIDSource_83.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_83(838599300);
        noInstrumentParties_1_2_2_0.set(InstrumentPartyRole_83);
        InstrumentParties_NoInstrumentParties_83.insert(InstrumentPartyRole_83.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_83);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174;
          FIX::InstrumentPartySubID InstrumentPartySubID_174("STRING_682510660");
          noInstrumentPartySubIDs_1_2_0_3_0.set(InstrumentPartySubID_174);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174.insert(InstrumentPartySubID_174.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_174(1616504783);
          noInstrumentPartySubIDs_1_2_0_3_0.set(InstrumentPartySubIDType_174);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174.insert(InstrumentPartySubIDType_174.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_174);

          noInstrumentParties_1_2_2_0.addGroup(noInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175;
          FIX::InstrumentPartySubID InstrumentPartySubID_175("STRING_961950520");
          noInstrumentPartySubIDs_1_2_0_3_1.set(InstrumentPartySubID_175);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175.insert(InstrumentPartySubID_175.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_175(2034980518);
          noInstrumentPartySubIDs_1_2_0_3_1.set(InstrumentPartySubIDType_175);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175.insert(InstrumentPartySubIDType_175.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_175);

          noInstrumentParties_1_2_2_0.addGroup(noInstrumentPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176;
          FIX::InstrumentPartySubID InstrumentPartySubID_176("STRING_2139388519");
          noInstrumentPartySubIDs_1_2_0_3_2.set(InstrumentPartySubID_176);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176.insert(InstrumentPartySubID_176.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_176(194128177);
          noInstrumentPartySubIDs_1_2_0_3_2.set(InstrumentPartySubIDType_176);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176.insert(InstrumentPartySubIDType_176.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_176);

          noInstrumentParties_1_2_2_0.addGroup(noInstrumentPartySubIDs_1_2_0_3_2);
        }
        noQuoteEntries_1_1_2.addGroup(noInstrumentParties_1_2_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_85;
        FIX::SecurityAltID SecurityAltID_85("STRING_2022092017");
        noSecurityAltID_1_2_2_0.set(SecurityAltID_85);
        SecAltIDGrp_NoSecurityAltID_85.insert(SecurityAltID_85.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_85("STRING_855650941");
        noSecurityAltID_1_2_2_0.set(SecurityAltIDSource_85);
        SecAltIDGrp_NoSecurityAltID_85.insert(SecurityAltIDSource_85.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_85);

        noQuoteEntries_1_1_2.addGroup(noSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_2_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_86;
        FIX::SecurityAltID SecurityAltID_86("STRING_1829419835");
        noSecurityAltID_1_2_2_1.set(SecurityAltID_86);
        SecAltIDGrp_NoSecurityAltID_86.insert(SecurityAltID_86.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_86("STRING_866121760");
        noSecurityAltID_1_2_2_1.set(SecurityAltIDSource_86);
        SecAltIDGrp_NoSecurityAltID_86.insert(SecurityAltIDSource_86.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_86);

        noQuoteEntries_1_1_2.addGroup(noSecurityAltID_1_2_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_78;
      FIX::SecurityXML SecurityXML_79("XMLDATA_759958329");
      noQuoteEntries_1_1_2.set(SecurityXML_79);
      FIX::SecurityXMLLen SecurityXMLLen_39(1605473124);
      noQuoteEntries_1_1_2.set(SecurityXMLLen_39);
      FIX::SecurityXMLSchema SecurityXMLSchema_39("STRING_1590109357");
      noQuoteEntries_1_1_2.set(SecurityXMLSchema_39);
      SecurityXML_78.insert(SecurityXMLSchema_39.getString());
      all_values.push_back(SecurityXML_78);

      noQuoteSets_0_1.addGroup(noQuoteEntries_1_1_2);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_52;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_52("DATA_990586872");
    noQuoteSets_0_1.set(EncodedUnderlyingIssuer_52);
    UnderlyingInstrument_52.insert(EncodedUnderlyingIssuer_52.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_52(1069762281);
    noQuoteSets_0_1.set(EncodedUnderlyingIssuerLen_52);
    UnderlyingInstrument_52.insert(EncodedUnderlyingIssuerLen_52.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_52("DATA_1037352032");
    noQuoteSets_0_1.set(EncodedUnderlyingSecurityDesc_52);
    UnderlyingInstrument_52.insert(EncodedUnderlyingSecurityDesc_52.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_52(2002049352);
    noQuoteSets_0_1.set(EncodedUnderlyingSecurityDescLen_52);
    UnderlyingInstrument_52.insert(EncodedUnderlyingSecurityDescLen_52.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_52;
    UnderlyingAdjustedQuantity_52.setString("10221919");
    noQuoteSets_0_1.set(UnderlyingAdjustedQuantity_52);
    UnderlyingInstrument_52.insert(UnderlyingAdjustedQuantity_52.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_52;
    UnderlyingAllocationPercent_52.setString("21.030000");
    noQuoteSets_0_1.set(UnderlyingAllocationPercent_52);
    UnderlyingInstrument_52.insert(UnderlyingAllocationPercent_52.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_52;
    UnderlyingAttachmentPoint_52.setString("74.170000");
    noQuoteSets_0_1.set(UnderlyingAttachmentPoint_52);
    UnderlyingInstrument_52.insert(UnderlyingAttachmentPoint_52.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_52("STRING_79300793");
    noQuoteSets_0_1.set(UnderlyingCFICode_52);
    UnderlyingInstrument_52.insert(UnderlyingCFICode_52.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_52("STRING_283515394");
    noQuoteSets_0_1.set(UnderlyingCPProgram_52);
    UnderlyingInstrument_52.insert(UnderlyingCPProgram_52.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_52("STRING_734802464");
    noQuoteSets_0_1.set(UnderlyingCPRegType_52);
    UnderlyingInstrument_52.insert(UnderlyingCPRegType_52.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_52;
    UnderlyingCapValue_52.setString("4279045");
    noQuoteSets_0_1.set(UnderlyingCapValue_52);
    UnderlyingInstrument_52.insert(UnderlyingCapValue_52.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_52;
    UnderlyingCashAmount_52.setString("15759979");
    noQuoteSets_0_1.set(UnderlyingCashAmount_52);
    UnderlyingInstrument_52.insert(UnderlyingCashAmount_52.getString());
    FIX::UnderlyingCashType UnderlyingCashType_52("STRING_FIXED");
    noQuoteSets_0_1.set(UnderlyingCashType_52);
    UnderlyingInstrument_52.insert(UnderlyingCashType_52.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_52;
    UnderlyingContractMultiplier_52.setString("15203121");
    noQuoteSets_0_1.set(UnderlyingContractMultiplier_52);
    UnderlyingInstrument_52.insert(UnderlyingContractMultiplier_52.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_52(1366607270);
    noQuoteSets_0_1.set(UnderlyingContractMultiplierUnit_52);
    UnderlyingInstrument_52.insert(UnderlyingContractMultiplierUnit_52.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_52("COUNTRY_1498249146");
    noQuoteSets_0_1.set(UnderlyingCountryOfIssue_52);
    UnderlyingInstrument_52.insert(UnderlyingCountryOfIssue_52.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_52("LOCALMKTDATE_235920918");
    noQuoteSets_0_1.set(UnderlyingCouponPaymentDate_52);
    UnderlyingInstrument_52.insert(UnderlyingCouponPaymentDate_52.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_52;
    UnderlyingCouponRate_52.setString("79.300000");
    noQuoteSets_0_1.set(UnderlyingCouponRate_52);
    UnderlyingInstrument_52.insert(UnderlyingCouponRate_52.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_52("STRING_967270281");
    noQuoteSets_0_1.set(UnderlyingCreditRating_52);
    UnderlyingInstrument_52.insert(UnderlyingCreditRating_52.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_52("CHF");
    noQuoteSets_0_1.set(UnderlyingCurrency_52);
    UnderlyingInstrument_52.insert(UnderlyingCurrency_52.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_52;
    UnderlyingCurrentValue_52.setString("9591751");
    noQuoteSets_0_1.set(UnderlyingCurrentValue_52);
    UnderlyingInstrument_52.insert(UnderlyingCurrentValue_52.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_52;
    UnderlyingDetachmentPoint_52.setString("96.160000");
    noQuoteSets_0_1.set(UnderlyingDetachmentPoint_52);
    UnderlyingInstrument_52.insert(UnderlyingDetachmentPoint_52.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_52;
    UnderlyingDirtyPrice_52.setString("19793016");
    noQuoteSets_0_1.set(UnderlyingDirtyPrice_52);
    UnderlyingInstrument_52.insert(UnderlyingDirtyPrice_52.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_52;
    UnderlyingEndPrice_52.setString("8337835");
    noQuoteSets_0_1.set(UnderlyingEndPrice_52);
    UnderlyingInstrument_52.insert(UnderlyingEndPrice_52.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_52;
    UnderlyingEndValue_52.setString("1001669");
    noQuoteSets_0_1.set(UnderlyingEndValue_52);
    UnderlyingInstrument_52.insert(UnderlyingEndValue_52.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_52(1661237800);
    noQuoteSets_0_1.set(UnderlyingExerciseStyle_52);
    UnderlyingInstrument_52.insert(UnderlyingExerciseStyle_52.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_52;
    UnderlyingFXRate_52.setString("16999052");
    noQuoteSets_0_1.set(UnderlyingFXRate_52);
    UnderlyingInstrument_52.insert(UnderlyingFXRate_52.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_52('D');
    noQuoteSets_0_1.set(UnderlyingFXRateCalc_52);
    UnderlyingInstrument_52.insert(UnderlyingFXRateCalc_52.getString());
    FIX::UnderlyingFactor UnderlyingFactor_52;
    UnderlyingFactor_52.setString("11192272");
    noQuoteSets_0_1.set(UnderlyingFactor_52);
    UnderlyingInstrument_52.insert(UnderlyingFactor_52.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_52(1142530992);
    noQuoteSets_0_1.set(UnderlyingFlowScheduleType_52);
    UnderlyingInstrument_52.insert(UnderlyingFlowScheduleType_52.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_52("STRING_1850712111");
    noQuoteSets_0_1.set(UnderlyingInstrRegistry_52);
    UnderlyingInstrument_52.insert(UnderlyingInstrRegistry_52.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_52("LOCALMKTDATE_41505910");
    noQuoteSets_0_1.set(UnderlyingIssueDate_52);
    UnderlyingInstrument_52.insert(UnderlyingIssueDate_52.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_52("STRING_32399376");
    noQuoteSets_0_1.set(UnderlyingIssuer_52);
    UnderlyingInstrument_52.insert(UnderlyingIssuer_52.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_52("STRING_1705277815");
    noQuoteSets_0_1.set(UnderlyingLocaleOfIssue_52);
    UnderlyingInstrument_52.insert(UnderlyingLocaleOfIssue_52.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_52("LOCALMKTDATE_1063697894");
    noQuoteSets_0_1.set(UnderlyingMaturityDate_52);
    UnderlyingInstrument_52.insert(UnderlyingMaturityDate_52.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_52("MONTHYEAR_352561479");
    noQuoteSets_0_1.set(UnderlyingMaturityMonthYear_52);
    UnderlyingInstrument_52.insert(UnderlyingMaturityMonthYear_52.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_52("TZTIMEONLY_537561584");
    noQuoteSets_0_1.set(UnderlyingMaturityTime_52);
    UnderlyingInstrument_52.insert(UnderlyingMaturityTime_52.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_52;
    UnderlyingNotionalPercentageOutstanding_52.setString("86.870000");
    noQuoteSets_0_1.set(UnderlyingNotionalPercentageOutstanding_52);
    UnderlyingInstrument_52.insert(UnderlyingNotionalPercentageOutstanding_52.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_52('6');
    noQuoteSets_0_1.set(UnderlyingOptAttribute_52);
    UnderlyingInstrument_52.insert(UnderlyingOptAttribute_52.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_52;
    UnderlyingOriginalNotionalPercentageOutstanding_52.setString("40.480000");
    noQuoteSets_0_1.set(UnderlyingOriginalNotionalPercentageOutstanding_52);
    UnderlyingInstrument_52.insert(UnderlyingOriginalNotionalPercentageOutstanding_52.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_52("STRING_1570903191");
    noQuoteSets_0_1.set(UnderlyingPriceUnitOfMeasure_52);
    UnderlyingInstrument_52.insert(UnderlyingPriceUnitOfMeasure_52.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_52;
    UnderlyingPriceUnitOfMeasureQty_52.setString("645911");
    noQuoteSets_0_1.set(UnderlyingPriceUnitOfMeasureQty_52);
    UnderlyingInstrument_52.insert(UnderlyingPriceUnitOfMeasureQty_52.getString());
    FIX::UnderlyingProduct UnderlyingProduct_52(1932013894);
    noQuoteSets_0_1.set(UnderlyingProduct_52);
    UnderlyingInstrument_52.insert(UnderlyingProduct_52.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_52(943731647);
    noQuoteSets_0_1.set(UnderlyingPutOrCall_52);
    UnderlyingInstrument_52.insert(UnderlyingPutOrCall_52.getString());
    FIX::UnderlyingPx UnderlyingPx_52;
    UnderlyingPx_52.setString("14311984");
    noQuoteSets_0_1.set(UnderlyingPx_52);
    UnderlyingInstrument_52.insert(UnderlyingPx_52.getString());
    FIX::UnderlyingQty UnderlyingQty_52;
    UnderlyingQty_52.setString("12827793");
    noQuoteSets_0_1.set(UnderlyingQty_52);
    UnderlyingInstrument_52.insert(UnderlyingQty_52.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_52("LOCALMKTDATE_1179652565");
    noQuoteSets_0_1.set(UnderlyingRedemptionDate_52);
    UnderlyingInstrument_52.insert(UnderlyingRedemptionDate_52.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_52("STRING_1332832700");
    noQuoteSets_0_1.set(UnderlyingRepoCollateralSecurityType_52);
    UnderlyingInstrument_52.insert(UnderlyingRepoCollateralSecurityType_52.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_52;
    UnderlyingRepurchaseRate_52.setString("60.260000");
    noQuoteSets_0_1.set(UnderlyingRepurchaseRate_52);
    UnderlyingInstrument_52.insert(UnderlyingRepurchaseRate_52.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_52(230040356);
    noQuoteSets_0_1.set(UnderlyingRepurchaseTerm_52);
    UnderlyingInstrument_52.insert(UnderlyingRepurchaseTerm_52.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_52("STRING_1121963853");
    noQuoteSets_0_1.set(UnderlyingRestructuringType_52);
    UnderlyingInstrument_52.insert(UnderlyingRestructuringType_52.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_52("STRING_1061741179");
    noQuoteSets_0_1.set(UnderlyingSecurityDesc_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityDesc_52.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_52("EXCHANGE_1622039972");
    noQuoteSets_0_1.set(UnderlyingSecurityExchange_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityExchange_52.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_52("STRING_953781818");
    noQuoteSets_0_1.set(UnderlyingSecurityID_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityID_52.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_52("STRING_1895524702");
    noQuoteSets_0_1.set(UnderlyingSecurityIDSource_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityIDSource_52.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_52("STRING_1722206881");
    noQuoteSets_0_1.set(UnderlyingSecuritySubType_52);
    UnderlyingInstrument_52.insert(UnderlyingSecuritySubType_52.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_52("STRING_467535971");
    noQuoteSets_0_1.set(UnderlyingSecurityType_52);
    UnderlyingInstrument_52.insert(UnderlyingSecurityType_52.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_52("STRING_1447946337");
    noQuoteSets_0_1.set(UnderlyingSeniority_52);
    UnderlyingInstrument_52.insert(UnderlyingSeniority_52.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_52("STRING_434848472");
    noQuoteSets_0_1.set(UnderlyingSettlMethod_52);
    UnderlyingInstrument_52.insert(UnderlyingSettlMethod_52.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_52(4);
    noQuoteSets_0_1.set(UnderlyingSettlementType_52);
    UnderlyingInstrument_52.insert(UnderlyingSettlementType_52.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_52;
    UnderlyingStartValue_52.setString("4429936");
    noQuoteSets_0_1.set(UnderlyingStartValue_52);
    UnderlyingInstrument_52.insert(UnderlyingStartValue_52.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_52("STRING_138076935");
    noQuoteSets_0_1.set(UnderlyingStateOrProvinceOfIssue_52);
    UnderlyingInstrument_52.insert(UnderlyingStateOrProvinceOfIssue_52.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_52("EUR");
    noQuoteSets_0_1.set(UnderlyingStrikeCurrency_52);
    UnderlyingInstrument_52.insert(UnderlyingStrikeCurrency_52.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_52;
    UnderlyingStrikePrice_52.setString("18433547");
    noQuoteSets_0_1.set(UnderlyingStrikePrice_52);
    UnderlyingInstrument_52.insert(UnderlyingStrikePrice_52.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_52("STRING_544483404");
    noQuoteSets_0_1.set(UnderlyingSymbol_52);
    UnderlyingInstrument_52.insert(UnderlyingSymbol_52.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_52("STRING_827954536");
    noQuoteSets_0_1.set(UnderlyingSymbolSfx_52);
    UnderlyingInstrument_52.insert(UnderlyingSymbolSfx_52.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_52("STRING_233432686");
    noQuoteSets_0_1.set(UnderlyingTimeUnit_52);
    UnderlyingInstrument_52.insert(UnderlyingTimeUnit_52.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_52("STRING_1687482091");
    noQuoteSets_0_1.set(UnderlyingUnitOfMeasure_52);
    UnderlyingInstrument_52.insert(UnderlyingUnitOfMeasure_52.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_52;
    UnderlyingUnitOfMeasureQty_52.setString("14640314");
    noQuoteSets_0_1.set(UnderlyingUnitOfMeasureQty_52);
    UnderlyingInstrument_52.insert(UnderlyingUnitOfMeasureQty_52.getString());
    all_values.push_back(UnderlyingInstrument_52);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_107;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_107("STRING_1110901635");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltID_107);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_107.insert(UnderlyingSecurityAltID_107.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_107("STRING_1528622556");
      noUnderlyingSecurityAltID_1_1_0.set(UnderlyingSecurityAltIDSource_107);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_107.insert(UnderlyingSecurityAltIDSource_107.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_107);

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_108;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_108("STRING_1290326980");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltID_108);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_108.insert(UnderlyingSecurityAltID_108.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_108("STRING_2054633282");
      noUnderlyingSecurityAltID_1_1_1.set(UnderlyingSecurityAltIDSource_108);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_108.insert(UnderlyingSecurityAltIDSource_108.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_108);

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_109;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_109("STRING_812337326");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltID_109);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_109.insert(UnderlyingSecurityAltID_109.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_109("STRING_425622725");
      noUnderlyingSecurityAltID_1_1_2.set(UnderlyingSecurityAltIDSource_109);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_109.insert(UnderlyingSecurityAltIDSource_109.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_109);

      noQuoteSets_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_92;
      FIX::UnderlyingStipType UnderlyingStipType_92("STRING_2145170026");
      noUnderlyingStips_1_1_0.set(UnderlyingStipType_92);
      UnderlyingStipulations_NoUnderlyingStips_92.insert(UnderlyingStipType_92.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_92("STRING_528188752");
      noUnderlyingStips_1_1_0.set(UnderlyingStipValue_92);
      UnderlyingStipulations_NoUnderlyingStips_92.insert(UnderlyingStipValue_92.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_92);

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_93;
      FIX::UnderlyingStipType UnderlyingStipType_93("STRING_1316842556");
      noUnderlyingStips_1_1_1.set(UnderlyingStipType_93);
      UnderlyingStipulations_NoUnderlyingStips_93.insert(UnderlyingStipType_93.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_93("STRING_1119650231");
      noUnderlyingStips_1_1_1.set(UnderlyingStipValue_93);
      UnderlyingStipulations_NoUnderlyingStips_93.insert(UnderlyingStipValue_93.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_93);

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_94;
      FIX::UnderlyingStipType UnderlyingStipType_94("STRING_1589929931");
      noUnderlyingStips_1_1_2.set(UnderlyingStipType_94);
      UnderlyingStipulations_NoUnderlyingStips_94.insert(UnderlyingStipType_94.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_94("STRING_791398880");
      noUnderlyingStips_1_1_2.set(UnderlyingStipValue_94);
      UnderlyingStipulations_NoUnderlyingStips_94.insert(UnderlyingStipValue_94.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_94);

      noQuoteSets_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_111;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_111("STRING_1337970985");
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyID_111);
      UndlyInstrumentParties_NoUndlyInstrumentParties_111.insert(UnderlyingInstrumentPartyID_111.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_111('3');
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyIDSource_111);
      UndlyInstrumentParties_NoUndlyInstrumentParties_111.insert(UnderlyingInstrumentPartyIDSource_111.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_111(393484372);
      noUndlyInstrumentParties_1_1_0.set(UnderlyingInstrumentPartyRole_111);
      UndlyInstrumentParties_NoUndlyInstrumentParties_111.insert(UnderlyingInstrumentPartyRole_111.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_111);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_217("STRING_800970586");
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubID_217);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217.insert(UnderlyingInstrumentPartySubID_217.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_217(1980247620);
        noUndlyInstrumentPartySubIDs_1_0_2_0.set(UnderlyingInstrumentPartySubIDType_217);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217.insert(UnderlyingInstrumentPartySubIDType_217.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_218("STRING_1081427355");
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubID_218);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218.insert(UnderlyingInstrumentPartySubID_218.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_218(939047521);
        noUndlyInstrumentPartySubIDs_1_0_2_1.set(UnderlyingInstrumentPartySubIDType_218);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218.insert(UnderlyingInstrumentPartySubIDType_218.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_219("STRING_1461033129");
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubID_219);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219.insert(UnderlyingInstrumentPartySubID_219.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_219(1556820412);
        noUndlyInstrumentPartySubIDs_1_0_2_2.set(UnderlyingInstrumentPartySubIDType_219);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219.insert(UnderlyingInstrumentPartySubIDType_219.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219);

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_112;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_112("STRING_634918623");
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyID_112);
      UndlyInstrumentParties_NoUndlyInstrumentParties_112.insert(UnderlyingInstrumentPartyID_112.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_112('2');
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyIDSource_112);
      UndlyInstrumentParties_NoUndlyInstrumentParties_112.insert(UnderlyingInstrumentPartyIDSource_112.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_112(237291300);
      noUndlyInstrumentParties_1_1_1.set(UnderlyingInstrumentPartyRole_112);
      UndlyInstrumentParties_NoUndlyInstrumentParties_112.insert(UnderlyingInstrumentPartyRole_112.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_112);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_220("STRING_1545514977");
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubID_220);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220.insert(UnderlyingInstrumentPartySubID_220.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_220(1701322709);
        noUndlyInstrumentPartySubIDs_1_1_2_0.set(UnderlyingInstrumentPartySubIDType_220);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220.insert(UnderlyingInstrumentPartySubIDType_220.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_221("STRING_226664395");
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubID_221);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221.insert(UnderlyingInstrumentPartySubID_221.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_221(508932964);
        noUndlyInstrumentPartySubIDs_1_1_2_1.set(UnderlyingInstrumentPartySubIDType_221);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221.insert(UnderlyingInstrumentPartySubIDType_221.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221);

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noQuoteSets_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noQuoteSets_0_1);
  }
  {
    FIX50SP2::MassQuote::NoQuoteSets noQuoteSets_0_2;
    // QuotSetGrp.NoQuoteSets
    multiset<string> QuotSetGrp_NoQuoteSets_2;
    FIX::LastFragment LastFragment_10(true);
    noQuoteSets_0_2.set(LastFragment_10);
    QuotSetGrp_NoQuoteSets_2.insert(LastFragment_10.getString());
    FIX::QuoteSetID QuoteSetID_2("STRING_1516991375");
    noQuoteSets_0_2.set(QuoteSetID_2);
    QuotSetGrp_NoQuoteSets_2.insert(QuoteSetID_2.getString());
    FIX::QuoteSetValidUntilTime QuoteSetValidUntilTime_2(FIX::UTCTIMESTAMP(0, 41, 57, 14, 2, 2009));
    noQuoteSets_0_2.set(QuoteSetValidUntilTime_2);
    QuotSetGrp_NoQuoteSets_2.insert(QuoteSetValidUntilTime_2.getString());
    FIX::TotNoQuoteEntries TotNoQuoteEntries_2(864651905);
    noQuoteSets_0_2.set(TotNoQuoteEntries_2);
    QuotSetGrp_NoQuoteSets_2.insert(TotNoQuoteEntries_2.getString());
    all_values.push_back(QuotSetGrp_NoQuoteSets_2);

    // QuotEntryGrp
    // Group QuotEntryGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries noQuoteEntries_2_1_0;
      // QuotEntryGrp.NoQuoteEntries
      multiset<string> QuotEntryGrp_NoQuoteEntries_6;
      FIX::BidForwardPoints BidForwardPoints_6;
      BidForwardPoints_6.setString("14636425");
      noQuoteEntries_2_1_0.set(BidForwardPoints_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(BidForwardPoints_6.getString());
      FIX::BidForwardPoints2 BidForwardPoints2_6;
      BidForwardPoints2_6.setString("7906003");
      noQuoteEntries_2_1_0.set(BidForwardPoints2_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(BidForwardPoints2_6.getString());
      FIX::BidPx BidPx_6;
      BidPx_6.setString("11037364");
      noQuoteEntries_2_1_0.set(BidPx_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(BidPx_6.getString());
      FIX::BidSize BidSize_6;
      BidSize_6.setString("18297647");
      noQuoteEntries_2_1_0.set(BidSize_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(BidSize_6.getString());
      FIX::BidSpotRate BidSpotRate_6;
      BidSpotRate_6.setString("11840846");
      noQuoteEntries_2_1_0.set(BidSpotRate_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(BidSpotRate_6.getString());
      FIX::BidYield BidYield_6;
      BidYield_6.setString("1.480000");
      noQuoteEntries_2_1_0.set(BidYield_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(BidYield_6.getString());
      FIX::BookingType BookingType_11(1);
      noQuoteEntries_2_1_0.set(BookingType_11);
      QuotEntryGrp_NoQuoteEntries_6.insert(BookingType_11.getString());
      FIX::Currency Currency_35("JPY");
      noQuoteEntries_2_1_0.set(Currency_35);
      QuotEntryGrp_NoQuoteEntries_6.insert(Currency_35.getString());
      FIX::MidPx MidPx_6;
      MidPx_6.setString("14222991");
      noQuoteEntries_2_1_0.set(MidPx_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(MidPx_6.getString());
      FIX::MidYield MidYield_6;
      MidYield_6.setString("81.320000");
      noQuoteEntries_2_1_0.set(MidYield_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(MidYield_6.getString());
      FIX::OfferForwardPoints OfferForwardPoints_6;
      OfferForwardPoints_6.setString("854506");
      noQuoteEntries_2_1_0.set(OfferForwardPoints_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(OfferForwardPoints_6.getString());
      FIX::OfferForwardPoints2 OfferForwardPoints2_6;
      OfferForwardPoints2_6.setString("20572177");
      noQuoteEntries_2_1_0.set(OfferForwardPoints2_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(OfferForwardPoints2_6.getString());
      FIX::OfferPx OfferPx_6;
      OfferPx_6.setString("1884310");
      noQuoteEntries_2_1_0.set(OfferPx_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(OfferPx_6.getString());
      FIX::OfferSize OfferSize_6;
      OfferSize_6.setString("3227419");
      noQuoteEntries_2_1_0.set(OfferSize_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(OfferSize_6.getString());
      FIX::OfferSpotRate OfferSpotRate_6;
      OfferSpotRate_6.setString("7780854");
      noQuoteEntries_2_1_0.set(OfferSpotRate_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(OfferSpotRate_6.getString());
      FIX::OfferYield OfferYield_6;
      OfferYield_6.setString("59.950000");
      noQuoteEntries_2_1_0.set(OfferYield_6);
      QuotEntryGrp_NoQuoteEntries_6.insert(OfferYield_6.getString());
      FIX::OrdType OrdType_26('7');
      noQuoteEntries_2_1_0.set(OrdType_26);
      QuotEntryGrp_NoQuoteEntries_6.insert(OrdType_26.getString());
      FIX::OrderCapacity OrderCapacity_13('I');
      noQuoteEntries_2_1_0.set(OrderCapacity_13);
      QuotEntryGrp_NoQuoteEntries_6.insert(OrderCapacity_13.getString());
      FIX::OrderQty2 OrderQty2_7;
      OrderQty2_7.setString("953953");
      noQuoteEntries_2_1_0.set(OrderQty2_7);
      QuotEntryGrp_NoQuoteEntries_6.insert(OrderQty2_7.getString());
      FIX::OrderRestrictions OrderRestrictions_11("MULTIPLECHARVALUE_6");
      noQuoteEntries_2_1_0.set(OrderRestrictions_11);
      QuotEntryGrp_NoQuoteEntries_6.insert(OrderRestrictions_11.getString());
      FIX::QuoteEntryID QuoteEntryID_8("STRING_374257565");
      noQuoteEntries_2_1_0.set(QuoteEntryID_8);
      QuotEntryGrp_NoQuoteEntries_6.insert(QuoteEntryID_8.getString());
      FIX::SettlDate SettlDate_24("LOCALMKTDATE_511477909");
      noQuoteEntries_2_1_0.set(SettlDate_24);
      QuotEntryGrp_NoQuoteEntries_6.insert(SettlDate_24.getString());
      FIX::SettlDate2 SettlDate2_7("LOCALMKTDATE_706357896");
      noQuoteEntries_2_1_0.set(SettlDate2_7);
      QuotEntryGrp_NoQuoteEntries_6.insert(SettlDate2_7.getString());
      FIX::TradingSessionID TradingSessionID_29("STRING_3");
      noQuoteEntries_2_1_0.set(TradingSessionID_29);
      QuotEntryGrp_NoQuoteEntries_6.insert(TradingSessionID_29.getString());
      FIX::TradingSessionSubID TradingSessionSubID_29("STRING_7");
      noQuoteEntries_2_1_0.set(TradingSessionSubID_29);
      QuotEntryGrp_NoQuoteEntries_6.insert(TradingSessionSubID_29.getString());
      FIX::TransactTime TransactTime_32(FIX::UTCTIMESTAMP(15, 24, 35, 8, 7, 2016));
      noQuoteEntries_2_1_0.set(TransactTime_32);
      QuotEntryGrp_NoQuoteEntries_6.insert(TransactTime_32.getString());
      FIX::ValidUntilTime ValidUntilTime_7(FIX::UTCTIMESTAMP(18, 53, 26, 4, 5, 2006));
      noQuoteEntries_2_1_0.set(ValidUntilTime_7);
      QuotEntryGrp_NoQuoteEntries_6.insert(ValidUntilTime_7.getString());
      all_values.push_back(QuotEntryGrp_NoQuoteEntries_6);

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_2_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_71;
        FIX::EncodedLegIssuer EncodedLegIssuer_71("DATA_342975948");
        noLegs_2_0_2_0.set(EncodedLegIssuer_71);
        InstrumentLeg_71.insert(EncodedLegIssuer_71.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_71(1718460163);
        noLegs_2_0_2_0.set(EncodedLegIssuerLen_71);
        InstrumentLeg_71.insert(EncodedLegIssuerLen_71.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_71("DATA_1352847685");
        noLegs_2_0_2_0.set(EncodedLegSecurityDesc_71);
        InstrumentLeg_71.insert(EncodedLegSecurityDesc_71.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_71(531406966);
        noLegs_2_0_2_0.set(EncodedLegSecurityDescLen_71);
        InstrumentLeg_71.insert(EncodedLegSecurityDescLen_71.getString());
        FIX::LegCFICode LegCFICode_71("STRING_2041202084");
        noLegs_2_0_2_0.set(LegCFICode_71);
        InstrumentLeg_71.insert(LegCFICode_71.getString());
        FIX::LegContractMultiplier LegContractMultiplier_71;
        LegContractMultiplier_71.setString("21309331");
        noLegs_2_0_2_0.set(LegContractMultiplier_71);
        InstrumentLeg_71.insert(LegContractMultiplier_71.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_71(117869313);
        noLegs_2_0_2_0.set(LegContractMultiplierUnit_71);
        InstrumentLeg_71.insert(LegContractMultiplierUnit_71.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_71("MONTHYEAR_1917783066");
        noLegs_2_0_2_0.set(LegContractSettlMonth_71);
        InstrumentLeg_71.insert(LegContractSettlMonth_71.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_71("COUNTRY_988199318");
        noLegs_2_0_2_0.set(LegCountryOfIssue_71);
        InstrumentLeg_71.insert(LegCountryOfIssue_71.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_71("LOCALMKTDATE_213264624");
        noLegs_2_0_2_0.set(LegCouponPaymentDate_71);
        InstrumentLeg_71.insert(LegCouponPaymentDate_71.getString());
        FIX::LegCouponRate LegCouponRate_71;
        LegCouponRate_71.setString("20.190000");
        noLegs_2_0_2_0.set(LegCouponRate_71);
        InstrumentLeg_71.insert(LegCouponRate_71.getString());
        FIX::LegCreditRating LegCreditRating_71("STRING_1362456883");
        noLegs_2_0_2_0.set(LegCreditRating_71);
        InstrumentLeg_71.insert(LegCreditRating_71.getString());
        FIX::LegCurrency LegCurrency_71("EUR");
        noLegs_2_0_2_0.set(LegCurrency_71);
        InstrumentLeg_71.insert(LegCurrency_71.getString());
        FIX::LegDatedDate LegDatedDate_71("LOCALMKTDATE_1531844902");
        noLegs_2_0_2_0.set(LegDatedDate_71);
        InstrumentLeg_71.insert(LegDatedDate_71.getString());
        FIX::LegExerciseStyle LegExerciseStyle_71(591621592);
        noLegs_2_0_2_0.set(LegExerciseStyle_71);
        InstrumentLeg_71.insert(LegExerciseStyle_71.getString());
        FIX::LegFactor LegFactor_71;
        LegFactor_71.setString("18870594");
        noLegs_2_0_2_0.set(LegFactor_71);
        InstrumentLeg_71.insert(LegFactor_71.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_71(2024552125);
        noLegs_2_0_2_0.set(LegFlowScheduleType_71);
        InstrumentLeg_71.insert(LegFlowScheduleType_71.getString());
        FIX::LegInstrRegistry LegInstrRegistry_71("STRING_1130744356");
        noLegs_2_0_2_0.set(LegInstrRegistry_71);
        InstrumentLeg_71.insert(LegInstrRegistry_71.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_71("LOCALMKTDATE_1055587313");
        noLegs_2_0_2_0.set(LegInterestAccrualDate_71);
        InstrumentLeg_71.insert(LegInterestAccrualDate_71.getString());
        FIX::LegIssueDate LegIssueDate_71("LOCALMKTDATE_135541189");
        noLegs_2_0_2_0.set(LegIssueDate_71);
        InstrumentLeg_71.insert(LegIssueDate_71.getString());
        FIX::LegIssuer LegIssuer_71("STRING_986026058");
        noLegs_2_0_2_0.set(LegIssuer_71);
        InstrumentLeg_71.insert(LegIssuer_71.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_71("STRING_1014715447");
        noLegs_2_0_2_0.set(LegLocaleOfIssue_71);
        InstrumentLeg_71.insert(LegLocaleOfIssue_71.getString());
        FIX::LegMaturityDate LegMaturityDate_71("LOCALMKTDATE_1497750375");
        noLegs_2_0_2_0.set(LegMaturityDate_71);
        InstrumentLeg_71.insert(LegMaturityDate_71.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_71("MONTHYEAR_523588812");
        noLegs_2_0_2_0.set(LegMaturityMonthYear_71);
        InstrumentLeg_71.insert(LegMaturityMonthYear_71.getString());
        FIX::LegMaturityTime LegMaturityTime_71("TZTIMEONLY_10444612");
        noLegs_2_0_2_0.set(LegMaturityTime_71);
        InstrumentLeg_71.insert(LegMaturityTime_71.getString());
        FIX::LegOptAttribute LegOptAttribute_71('3');
        noLegs_2_0_2_0.set(LegOptAttribute_71);
        InstrumentLeg_71.insert(LegOptAttribute_71.getString());
        FIX::LegOptionRatio LegOptionRatio_71;
        LegOptionRatio_71.setString("5444032");
        noLegs_2_0_2_0.set(LegOptionRatio_71);
        InstrumentLeg_71.insert(LegOptionRatio_71.getString());
        FIX::LegPool LegPool_71("STRING_23022428");
        noLegs_2_0_2_0.set(LegPool_71);
        InstrumentLeg_71.insert(LegPool_71.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_71("STRING_1940171956");
        noLegs_2_0_2_0.set(LegPriceUnitOfMeasure_71);
        InstrumentLeg_71.insert(LegPriceUnitOfMeasure_71.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_71;
        LegPriceUnitOfMeasureQty_71.setString("19875167");
        noLegs_2_0_2_0.set(LegPriceUnitOfMeasureQty_71);
        InstrumentLeg_71.insert(LegPriceUnitOfMeasureQty_71.getString());
        FIX::LegProduct LegProduct_71(365998377);
        noLegs_2_0_2_0.set(LegProduct_71);
        InstrumentLeg_71.insert(LegProduct_71.getString());
        FIX::LegPutOrCall LegPutOrCall_71(1511148471);
        noLegs_2_0_2_0.set(LegPutOrCall_71);
        InstrumentLeg_71.insert(LegPutOrCall_71.getString());
        FIX::LegRatioQty LegRatioQty_71;
        LegRatioQty_71.setString("11928807");
        noLegs_2_0_2_0.set(LegRatioQty_71);
        InstrumentLeg_71.insert(LegRatioQty_71.getString());
        FIX::LegRedemptionDate LegRedemptionDate_71("LOCALMKTDATE_897405343");
        noLegs_2_0_2_0.set(LegRedemptionDate_71);
        InstrumentLeg_71.insert(LegRedemptionDate_71.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_71("STRING_1404866907");
        noLegs_2_0_2_0.set(LegRepoCollateralSecurityType_71);
        InstrumentLeg_71.insert(LegRepoCollateralSecurityType_71.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_71;
        LegRepurchaseRate_71.setString("2.720000");
        noLegs_2_0_2_0.set(LegRepurchaseRate_71);
        InstrumentLeg_71.insert(LegRepurchaseRate_71.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_71(1015274657);
        noLegs_2_0_2_0.set(LegRepurchaseTerm_71);
        InstrumentLeg_71.insert(LegRepurchaseTerm_71.getString());
        FIX::LegSecurityDesc LegSecurityDesc_71("STRING_1175166326");
        noLegs_2_0_2_0.set(LegSecurityDesc_71);
        InstrumentLeg_71.insert(LegSecurityDesc_71.getString());
        FIX::LegSecurityExchange LegSecurityExchange_71("EXCHANGE_17045942");
        noLegs_2_0_2_0.set(LegSecurityExchange_71);
        InstrumentLeg_71.insert(LegSecurityExchange_71.getString());
        FIX::LegSecurityID LegSecurityID_71("STRING_1228539281");
        noLegs_2_0_2_0.set(LegSecurityID_71);
        InstrumentLeg_71.insert(LegSecurityID_71.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_71("STRING_1904508345");
        noLegs_2_0_2_0.set(LegSecurityIDSource_71);
        InstrumentLeg_71.insert(LegSecurityIDSource_71.getString());
        FIX::LegSecuritySubType LegSecuritySubType_71("STRING_1379502825");
        noLegs_2_0_2_0.set(LegSecuritySubType_71);
        InstrumentLeg_71.insert(LegSecuritySubType_71.getString());
        FIX::LegSecurityType LegSecurityType_71("STRING_1953281815");
        noLegs_2_0_2_0.set(LegSecurityType_71);
        InstrumentLeg_71.insert(LegSecurityType_71.getString());
        FIX::LegSide LegSide_71('1');
        noLegs_2_0_2_0.set(LegSide_71);
        InstrumentLeg_71.insert(LegSide_71.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_71("STRING_763864079");
        noLegs_2_0_2_0.set(LegStateOrProvinceOfIssue_71);
        InstrumentLeg_71.insert(LegStateOrProvinceOfIssue_71.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_71("GBP");
        noLegs_2_0_2_0.set(LegStrikeCurrency_71);
        InstrumentLeg_71.insert(LegStrikeCurrency_71.getString());
        FIX::LegStrikePrice LegStrikePrice_71;
        LegStrikePrice_71.setString("6409325");
        noLegs_2_0_2_0.set(LegStrikePrice_71);
        InstrumentLeg_71.insert(LegStrikePrice_71.getString());
        FIX::LegSymbol LegSymbol_71("STRING_1528164115");
        noLegs_2_0_2_0.set(LegSymbol_71);
        InstrumentLeg_71.insert(LegSymbol_71.getString());
        FIX::LegSymbolSfx LegSymbolSfx_71("STRING_1987887764");
        noLegs_2_0_2_0.set(LegSymbolSfx_71);
        InstrumentLeg_71.insert(LegSymbolSfx_71.getString());
        FIX::LegTimeUnit LegTimeUnit_71("STRING_776473746");
        noLegs_2_0_2_0.set(LegTimeUnit_71);
        InstrumentLeg_71.insert(LegTimeUnit_71.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_71("STRING_366706525");
        noLegs_2_0_2_0.set(LegUnitOfMeasure_71);
        InstrumentLeg_71.insert(LegUnitOfMeasure_71.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_71;
        LegUnitOfMeasureQty_71.setString("8551195");
        noLegs_2_0_2_0.set(LegUnitOfMeasureQty_71);
        InstrumentLeg_71.insert(LegUnitOfMeasureQty_71.getString());
        all_values.push_back(InstrumentLeg_71);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_140;
          FIX::LegSecurityAltID LegSecurityAltID_140("STRING_890295337");
          noLegSecurityAltID_2_0_0_3_0.set(LegSecurityAltID_140);
          LegSecAltIDGrp_NoLegSecurityAltID_140.insert(LegSecurityAltID_140.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_140("STRING_865564176");
          noLegSecurityAltID_2_0_0_3_0.set(LegSecurityAltIDSource_140);
          LegSecAltIDGrp_NoLegSecurityAltID_140.insert(LegSecurityAltIDSource_140.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_140);

          noLegs_2_0_2_0.addGroup(noLegSecurityAltID_2_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_141;
          FIX::LegSecurityAltID LegSecurityAltID_141("STRING_433902888");
          noLegSecurityAltID_2_0_0_3_1.set(LegSecurityAltID_141);
          LegSecAltIDGrp_NoLegSecurityAltID_141.insert(LegSecurityAltID_141.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_141("STRING_1434698541");
          noLegSecurityAltID_2_0_0_3_1.set(LegSecurityAltIDSource_141);
          LegSecAltIDGrp_NoLegSecurityAltID_141.insert(LegSecurityAltIDSource_141.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_141);

          noLegs_2_0_2_0.addGroup(noLegSecurityAltID_2_0_0_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_0_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_142;
          FIX::LegSecurityAltID LegSecurityAltID_142("STRING_888586604");
          noLegSecurityAltID_2_0_0_3_2.set(LegSecurityAltID_142);
          LegSecAltIDGrp_NoLegSecurityAltID_142.insert(LegSecurityAltID_142.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_142("STRING_226591196");
          noLegSecurityAltID_2_0_0_3_2.set(LegSecurityAltIDSource_142);
          LegSecAltIDGrp_NoLegSecurityAltID_142.insert(LegSecurityAltIDSource_142.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_142);

          noLegs_2_0_2_0.addGroup(noLegSecurityAltID_2_0_0_3_2);
        }
        noQuoteEntries_2_1_0.addGroup(noLegs_2_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_2_0_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_72;
        FIX::EncodedLegIssuer EncodedLegIssuer_72("DATA_1274731648");
        noLegs_2_0_2_1.set(EncodedLegIssuer_72);
        InstrumentLeg_72.insert(EncodedLegIssuer_72.getString());
        FIX::EncodedLegIssuerLen EncodedLegIssuerLen_72(1254584981);
        noLegs_2_0_2_1.set(EncodedLegIssuerLen_72);
        InstrumentLeg_72.insert(EncodedLegIssuerLen_72.getString());
        FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_72("DATA_1737739668");
        noLegs_2_0_2_1.set(EncodedLegSecurityDesc_72);
        InstrumentLeg_72.insert(EncodedLegSecurityDesc_72.getString());
        FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_72(320128792);
        noLegs_2_0_2_1.set(EncodedLegSecurityDescLen_72);
        InstrumentLeg_72.insert(EncodedLegSecurityDescLen_72.getString());
        FIX::LegCFICode LegCFICode_72("STRING_4506677");
        noLegs_2_0_2_1.set(LegCFICode_72);
        InstrumentLeg_72.insert(LegCFICode_72.getString());
        FIX::LegContractMultiplier LegContractMultiplier_72;
        LegContractMultiplier_72.setString("9951229");
        noLegs_2_0_2_1.set(LegContractMultiplier_72);
        InstrumentLeg_72.insert(LegContractMultiplier_72.getString());
        FIX::LegContractMultiplierUnit LegContractMultiplierUnit_72(1496459064);
        noLegs_2_0_2_1.set(LegContractMultiplierUnit_72);
        InstrumentLeg_72.insert(LegContractMultiplierUnit_72.getString());
        FIX::LegContractSettlMonth LegContractSettlMonth_72("MONTHYEAR_1019781334");
        noLegs_2_0_2_1.set(LegContractSettlMonth_72);
        InstrumentLeg_72.insert(LegContractSettlMonth_72.getString());
        FIX::LegCountryOfIssue LegCountryOfIssue_72("COUNTRY_22805605");
        noLegs_2_0_2_1.set(LegCountryOfIssue_72);
        InstrumentLeg_72.insert(LegCountryOfIssue_72.getString());
        FIX::LegCouponPaymentDate LegCouponPaymentDate_72("LOCALMKTDATE_1513505006");
        noLegs_2_0_2_1.set(LegCouponPaymentDate_72);
        InstrumentLeg_72.insert(LegCouponPaymentDate_72.getString());
        FIX::LegCouponRate LegCouponRate_72;
        LegCouponRate_72.setString("69.670000");
        noLegs_2_0_2_1.set(LegCouponRate_72);
        InstrumentLeg_72.insert(LegCouponRate_72.getString());
        FIX::LegCreditRating LegCreditRating_72("STRING_1927313950");
        noLegs_2_0_2_1.set(LegCreditRating_72);
        InstrumentLeg_72.insert(LegCreditRating_72.getString());
        FIX::LegCurrency LegCurrency_72("GBP");
        noLegs_2_0_2_1.set(LegCurrency_72);
        InstrumentLeg_72.insert(LegCurrency_72.getString());
        FIX::LegDatedDate LegDatedDate_72("LOCALMKTDATE_972554915");
        noLegs_2_0_2_1.set(LegDatedDate_72);
        InstrumentLeg_72.insert(LegDatedDate_72.getString());
        FIX::LegExerciseStyle LegExerciseStyle_72(1509388263);
        noLegs_2_0_2_1.set(LegExerciseStyle_72);
        InstrumentLeg_72.insert(LegExerciseStyle_72.getString());
        FIX::LegFactor LegFactor_72;
        LegFactor_72.setString("3040548");
        noLegs_2_0_2_1.set(LegFactor_72);
        InstrumentLeg_72.insert(LegFactor_72.getString());
        FIX::LegFlowScheduleType LegFlowScheduleType_72(1904855365);
        noLegs_2_0_2_1.set(LegFlowScheduleType_72);
        InstrumentLeg_72.insert(LegFlowScheduleType_72.getString());
        FIX::LegInstrRegistry LegInstrRegistry_72("STRING_2837172");
        noLegs_2_0_2_1.set(LegInstrRegistry_72);
        InstrumentLeg_72.insert(LegInstrRegistry_72.getString());
        FIX::LegInterestAccrualDate LegInterestAccrualDate_72("LOCALMKTDATE_1832219008");
        noLegs_2_0_2_1.set(LegInterestAccrualDate_72);
        InstrumentLeg_72.insert(LegInterestAccrualDate_72.getString());
        FIX::LegIssueDate LegIssueDate_72("LOCALMKTDATE_1745259481");
        noLegs_2_0_2_1.set(LegIssueDate_72);
        InstrumentLeg_72.insert(LegIssueDate_72.getString());
        FIX::LegIssuer LegIssuer_72("STRING_779310918");
        noLegs_2_0_2_1.set(LegIssuer_72);
        InstrumentLeg_72.insert(LegIssuer_72.getString());
        FIX::LegLocaleOfIssue LegLocaleOfIssue_72("STRING_51441885");
        noLegs_2_0_2_1.set(LegLocaleOfIssue_72);
        InstrumentLeg_72.insert(LegLocaleOfIssue_72.getString());
        FIX::LegMaturityDate LegMaturityDate_72("LOCALMKTDATE_452895397");
        noLegs_2_0_2_1.set(LegMaturityDate_72);
        InstrumentLeg_72.insert(LegMaturityDate_72.getString());
        FIX::LegMaturityMonthYear LegMaturityMonthYear_72("MONTHYEAR_906051392");
        noLegs_2_0_2_1.set(LegMaturityMonthYear_72);
        InstrumentLeg_72.insert(LegMaturityMonthYear_72.getString());
        FIX::LegMaturityTime LegMaturityTime_72("TZTIMEONLY_941737222");
        noLegs_2_0_2_1.set(LegMaturityTime_72);
        InstrumentLeg_72.insert(LegMaturityTime_72.getString());
        FIX::LegOptAttribute LegOptAttribute_72('1');
        noLegs_2_0_2_1.set(LegOptAttribute_72);
        InstrumentLeg_72.insert(LegOptAttribute_72.getString());
        FIX::LegOptionRatio LegOptionRatio_72;
        LegOptionRatio_72.setString("13399542");
        noLegs_2_0_2_1.set(LegOptionRatio_72);
        InstrumentLeg_72.insert(LegOptionRatio_72.getString());
        FIX::LegPool LegPool_72("STRING_228952115");
        noLegs_2_0_2_1.set(LegPool_72);
        InstrumentLeg_72.insert(LegPool_72.getString());
        FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_72("STRING_59562529");
        noLegs_2_0_2_1.set(LegPriceUnitOfMeasure_72);
        InstrumentLeg_72.insert(LegPriceUnitOfMeasure_72.getString());
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_72;
        LegPriceUnitOfMeasureQty_72.setString("15665454");
        noLegs_2_0_2_1.set(LegPriceUnitOfMeasureQty_72);
        InstrumentLeg_72.insert(LegPriceUnitOfMeasureQty_72.getString());
        FIX::LegProduct LegProduct_72(1503683763);
        noLegs_2_0_2_1.set(LegProduct_72);
        InstrumentLeg_72.insert(LegProduct_72.getString());
        FIX::LegPutOrCall LegPutOrCall_72(1314147511);
        noLegs_2_0_2_1.set(LegPutOrCall_72);
        InstrumentLeg_72.insert(LegPutOrCall_72.getString());
        FIX::LegRatioQty LegRatioQty_72;
        LegRatioQty_72.setString("11568014");
        noLegs_2_0_2_1.set(LegRatioQty_72);
        InstrumentLeg_72.insert(LegRatioQty_72.getString());
        FIX::LegRedemptionDate LegRedemptionDate_72("LOCALMKTDATE_1823812555");
        noLegs_2_0_2_1.set(LegRedemptionDate_72);
        InstrumentLeg_72.insert(LegRedemptionDate_72.getString());
        FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_72("STRING_1318654188");
        noLegs_2_0_2_1.set(LegRepoCollateralSecurityType_72);
        InstrumentLeg_72.insert(LegRepoCollateralSecurityType_72.getString());
        FIX::LegRepurchaseRate LegRepurchaseRate_72;
        LegRepurchaseRate_72.setString("7.760000");
        noLegs_2_0_2_1.set(LegRepurchaseRate_72);
        InstrumentLeg_72.insert(LegRepurchaseRate_72.getString());
        FIX::LegRepurchaseTerm LegRepurchaseTerm_72(1172787971);
        noLegs_2_0_2_1.set(LegRepurchaseTerm_72);
        InstrumentLeg_72.insert(LegRepurchaseTerm_72.getString());
        FIX::LegSecurityDesc LegSecurityDesc_72("STRING_190951874");
        noLegs_2_0_2_1.set(LegSecurityDesc_72);
        InstrumentLeg_72.insert(LegSecurityDesc_72.getString());
        FIX::LegSecurityExchange LegSecurityExchange_72("EXCHANGE_27246382");
        noLegs_2_0_2_1.set(LegSecurityExchange_72);
        InstrumentLeg_72.insert(LegSecurityExchange_72.getString());
        FIX::LegSecurityID LegSecurityID_72("STRING_538809329");
        noLegs_2_0_2_1.set(LegSecurityID_72);
        InstrumentLeg_72.insert(LegSecurityID_72.getString());
        FIX::LegSecurityIDSource LegSecurityIDSource_72("STRING_291788841");
        noLegs_2_0_2_1.set(LegSecurityIDSource_72);
        InstrumentLeg_72.insert(LegSecurityIDSource_72.getString());
        FIX::LegSecuritySubType LegSecuritySubType_72("STRING_1954560332");
        noLegs_2_0_2_1.set(LegSecuritySubType_72);
        InstrumentLeg_72.insert(LegSecuritySubType_72.getString());
        FIX::LegSecurityType LegSecurityType_72("STRING_1284333513");
        noLegs_2_0_2_1.set(LegSecurityType_72);
        InstrumentLeg_72.insert(LegSecurityType_72.getString());
        FIX::LegSide LegSide_72('1');
        noLegs_2_0_2_1.set(LegSide_72);
        InstrumentLeg_72.insert(LegSide_72.getString());
        FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_72("STRING_779631599");
        noLegs_2_0_2_1.set(LegStateOrProvinceOfIssue_72);
        InstrumentLeg_72.insert(LegStateOrProvinceOfIssue_72.getString());
        FIX::LegStrikeCurrency LegStrikeCurrency_72("EUR");
        noLegs_2_0_2_1.set(LegStrikeCurrency_72);
        InstrumentLeg_72.insert(LegStrikeCurrency_72.getString());
        FIX::LegStrikePrice LegStrikePrice_72;
        LegStrikePrice_72.setString("5370033");
        noLegs_2_0_2_1.set(LegStrikePrice_72);
        InstrumentLeg_72.insert(LegStrikePrice_72.getString());
        FIX::LegSymbol LegSymbol_72("STRING_649075300");
        noLegs_2_0_2_1.set(LegSymbol_72);
        InstrumentLeg_72.insert(LegSymbol_72.getString());
        FIX::LegSymbolSfx LegSymbolSfx_72("STRING_187214230");
        noLegs_2_0_2_1.set(LegSymbolSfx_72);
        InstrumentLeg_72.insert(LegSymbolSfx_72.getString());
        FIX::LegTimeUnit LegTimeUnit_72("STRING_134779150");
        noLegs_2_0_2_1.set(LegTimeUnit_72);
        InstrumentLeg_72.insert(LegTimeUnit_72.getString());
        FIX::LegUnitOfMeasure LegUnitOfMeasure_72("STRING_1428386218");
        noLegs_2_0_2_1.set(LegUnitOfMeasure_72);
        InstrumentLeg_72.insert(LegUnitOfMeasure_72.getString());
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_72;
        LegUnitOfMeasureQty_72.setString("2386561");
        noLegs_2_0_2_1.set(LegUnitOfMeasureQty_72);
        InstrumentLeg_72.insert(LegUnitOfMeasureQty_72.getString());
        all_values.push_back(InstrumentLeg_72);

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_143;
          FIX::LegSecurityAltID LegSecurityAltID_143("STRING_186953963");
          noLegSecurityAltID_2_0_1_3_0.set(LegSecurityAltID_143);
          LegSecAltIDGrp_NoLegSecurityAltID_143.insert(LegSecurityAltID_143.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_143("STRING_1180393338");
          noLegSecurityAltID_2_0_1_3_0.set(LegSecurityAltIDSource_143);
          LegSecAltIDGrp_NoLegSecurityAltID_143.insert(LegSecurityAltIDSource_143.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_143);

          noLegs_2_0_2_1.addGroup(noLegSecurityAltID_2_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_144;
          FIX::LegSecurityAltID LegSecurityAltID_144("STRING_1906134120");
          noLegSecurityAltID_2_0_1_3_1.set(LegSecurityAltID_144);
          LegSecAltIDGrp_NoLegSecurityAltID_144.insert(LegSecurityAltID_144.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_144("STRING_1526908243");
          noLegSecurityAltID_2_0_1_3_1.set(LegSecurityAltIDSource_144);
          LegSecAltIDGrp_NoLegSecurityAltID_144.insert(LegSecurityAltIDSource_144.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_144);

          noLegs_2_0_2_1.addGroup(noLegSecurityAltID_2_0_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_1_3_2;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_145;
          FIX::LegSecurityAltID LegSecurityAltID_145("STRING_1409345453");
          noLegSecurityAltID_2_0_1_3_2.set(LegSecurityAltID_145);
          LegSecAltIDGrp_NoLegSecurityAltID_145.insert(LegSecurityAltID_145.getString());
          FIX::LegSecurityAltIDSource LegSecurityAltIDSource_145("STRING_1965696650");
          noLegSecurityAltID_2_0_1_3_2.set(LegSecurityAltIDSource_145);
          LegSecAltIDGrp_NoLegSecurityAltID_145.insert(LegSecurityAltIDSource_145.getString());
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_145);

          noLegs_2_0_2_1.addGroup(noLegSecurityAltID_2_0_1_3_2);
        }
        noQuoteEntries_2_1_0.addGroup(noLegs_2_0_2_1);
      }
      // Instrument
      multiset<string> Instrument_40;
      FIX::AttachmentPoint AttachmentPoint_40;
      AttachmentPoint_40.setString("0.720000");
      noQuoteEntries_2_1_0.set(AttachmentPoint_40);
      Instrument_40.insert(AttachmentPoint_40.getString());
      FIX::CFICode CFICode_40("STRING_765545569");
      noQuoteEntries_2_1_0.set(CFICode_40);
      Instrument_40.insert(CFICode_40.getString());
      FIX::CPProgram CPProgram_40(2);
      noQuoteEntries_2_1_0.set(CPProgram_40);
      Instrument_40.insert(CPProgram_40.getString());
      FIX::CPRegType CPRegType_40("STRING_2102771569");
      noQuoteEntries_2_1_0.set(CPRegType_40);
      Instrument_40.insert(CPRegType_40.getString());
      FIX::CapPrice CapPrice_40;
      CapPrice_40.setString("4418744");
      noQuoteEntries_2_1_0.set(CapPrice_40);
      Instrument_40.insert(CapPrice_40.getString());
      FIX::ContractMultiplier ContractMultiplier_40;
      ContractMultiplier_40.setString("3035310");
      noQuoteEntries_2_1_0.set(ContractMultiplier_40);
      Instrument_40.insert(ContractMultiplier_40.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_40(1);
      noQuoteEntries_2_1_0.set(ContractMultiplierUnit_40);
      Instrument_40.insert(ContractMultiplierUnit_40.getString());
      FIX::ContractSettlMonth ContractSettlMonth_40("MONTHYEAR_1614662448");
      noQuoteEntries_2_1_0.set(ContractSettlMonth_40);
      Instrument_40.insert(ContractSettlMonth_40.getString());
      FIX::CountryOfIssue CountryOfIssue_40("COUNTRY_494482927");
      noQuoteEntries_2_1_0.set(CountryOfIssue_40);
      Instrument_40.insert(CountryOfIssue_40.getString());
      FIX::CouponPaymentDate CouponPaymentDate_40("LOCALMKTDATE_2134458728");
      noQuoteEntries_2_1_0.set(CouponPaymentDate_40);
      Instrument_40.insert(CouponPaymentDate_40.getString());
      FIX::CouponRate CouponRate_40;
      CouponRate_40.setString("81.290000");
      noQuoteEntries_2_1_0.set(CouponRate_40);
      Instrument_40.insert(CouponRate_40.getString());
      FIX::CreditRating CreditRating_40("STRING_786271768");
      noQuoteEntries_2_1_0.set(CreditRating_40);
      Instrument_40.insert(CreditRating_40.getString());
      FIX::DatedDate DatedDate_40("LOCALMKTDATE_1941535412");
      noQuoteEntries_2_1_0.set(DatedDate_40);
      Instrument_40.insert(DatedDate_40.getString());
      FIX::DetachmentPoint DetachmentPoint_40;
      DetachmentPoint_40.setString("16.420000");
      noQuoteEntries_2_1_0.set(DetachmentPoint_40);
      Instrument_40.insert(DetachmentPoint_40.getString());
      FIX::EncodedIssuer EncodedIssuer_40("DATA_984695744");
      noQuoteEntries_2_1_0.set(EncodedIssuer_40);
      Instrument_40.insert(EncodedIssuer_40.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_40(573683364);
      noQuoteEntries_2_1_0.set(EncodedIssuerLen_40);
      Instrument_40.insert(EncodedIssuerLen_40.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_40("DATA_1936559770");
      noQuoteEntries_2_1_0.set(EncodedSecurityDesc_40);
      Instrument_40.insert(EncodedSecurityDesc_40.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_40(1487174614);
      noQuoteEntries_2_1_0.set(EncodedSecurityDescLen_40);
      Instrument_40.insert(EncodedSecurityDescLen_40.getString());
      FIX::ExerciseStyle ExerciseStyle_40(2);
      noQuoteEntries_2_1_0.set(ExerciseStyle_40);
      Instrument_40.insert(ExerciseStyle_40.getString());
      FIX::Factor Factor_40;
      Factor_40.setString("4381514");
      noQuoteEntries_2_1_0.set(Factor_40);
      Instrument_40.insert(Factor_40.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_40(true);
      noQuoteEntries_2_1_0.set(FlexProductEligibilityIndicator_40);
      Instrument_40.insert(FlexProductEligibilityIndicator_40.getString());
      FIX::FlexibleIndicator FlexibleIndicator_40(false);
      noQuoteEntries_2_1_0.set(FlexibleIndicator_40);
      Instrument_40.insert(FlexibleIndicator_40.getString());
      FIX::FloorPrice FloorPrice_40;
      FloorPrice_40.setString("18665376");
      noQuoteEntries_2_1_0.set(FloorPrice_40);
      Instrument_40.insert(FloorPrice_40.getString());
      FIX::FlowScheduleType FlowScheduleType_40(4);
      noQuoteEntries_2_1_0.set(FlowScheduleType_40);
      Instrument_40.insert(FlowScheduleType_40.getString());
      FIX::InstrRegistry InstrRegistry_40("STRING_1833140379");
      noQuoteEntries_2_1_0.set(InstrRegistry_40);
      Instrument_40.insert(InstrRegistry_40.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_40('2');
      noQuoteEntries_2_1_0.set(InstrmtAssignmentMethod_40);
      Instrument_40.insert(InstrmtAssignmentMethod_40.getString());
      FIX::InterestAccrualDate InterestAccrualDate_40("LOCALMKTDATE_945954649");
      noQuoteEntries_2_1_0.set(InterestAccrualDate_40);
      Instrument_40.insert(InterestAccrualDate_40.getString());
      FIX::IssueDate IssueDate_40("LOCALMKTDATE_1591790851");
      noQuoteEntries_2_1_0.set(IssueDate_40);
      Instrument_40.insert(IssueDate_40.getString());
      FIX::Issuer Issuer_40("STRING_1432916199");
      noQuoteEntries_2_1_0.set(Issuer_40);
      Instrument_40.insert(Issuer_40.getString());
      FIX::ListMethod ListMethod_40(1);
      noQuoteEntries_2_1_0.set(ListMethod_40);
      Instrument_40.insert(ListMethod_40.getString());
      FIX::LocaleOfIssue LocaleOfIssue_40("STRING_1410003853");
      noQuoteEntries_2_1_0.set(LocaleOfIssue_40);
      Instrument_40.insert(LocaleOfIssue_40.getString());
      FIX::MaturityDate MaturityDate_40("LOCALMKTDATE_231402624");
      noQuoteEntries_2_1_0.set(MaturityDate_40);
      Instrument_40.insert(MaturityDate_40.getString());
      FIX::MaturityMonthYear MaturityMonthYear_40("MONTHYEAR_973362024");
      noQuoteEntries_2_1_0.set(MaturityMonthYear_40);
      Instrument_40.insert(MaturityMonthYear_40.getString());
      FIX::MaturityTime MaturityTime_40("TZTIMEONLY_394880718");
      noQuoteEntries_2_1_0.set(MaturityTime_40);
      Instrument_40.insert(MaturityTime_40.getString());
      FIX::MinPriceIncrement MinPriceIncrement_40;
      MinPriceIncrement_40.setString("1866905");
      noQuoteEntries_2_1_0.set(MinPriceIncrement_40);
      Instrument_40.insert(MinPriceIncrement_40.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_40;
      MinPriceIncrementAmount_40.setString("14152365");
      noQuoteEntries_2_1_0.set(MinPriceIncrementAmount_40);
      Instrument_40.insert(MinPriceIncrementAmount_40.getString());
      FIX::NTPositionLimit NTPositionLimit_40(698411771);
      noQuoteEntries_2_1_0.set(NTPositionLimit_40);
      Instrument_40.insert(NTPositionLimit_40.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_40;
      NotionalPercentageOutstanding_40.setString("92.430000");
      noQuoteEntries_2_1_0.set(NotionalPercentageOutstanding_40);
      Instrument_40.insert(NotionalPercentageOutstanding_40.getString());
      FIX::OptAttribute OptAttribute_40('8');
      noQuoteEntries_2_1_0.set(OptAttribute_40);
      Instrument_40.insert(OptAttribute_40.getString());
      FIX::OptPayoutAmount OptPayoutAmount_40;
      OptPayoutAmount_40.setString("11928946");
      noQuoteEntries_2_1_0.set(OptPayoutAmount_40);
      Instrument_40.insert(OptPayoutAmount_40.getString());
      FIX::OptPayoutType OptPayoutType_40(2);
      noQuoteEntries_2_1_0.set(OptPayoutType_40);
      Instrument_40.insert(OptPayoutType_40.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_40;
      OriginalNotionalPercentageOutstanding_40.setString("34.300000");
      noQuoteEntries_2_1_0.set(OriginalNotionalPercentageOutstanding_40);
      Instrument_40.insert(OriginalNotionalPercentageOutstanding_40.getString());
      FIX::Pool Pool_40("STRING_1979166467");
      noQuoteEntries_2_1_0.set(Pool_40);
      Instrument_40.insert(Pool_40.getString());
      FIX::PositionLimit PositionLimit_40(2074929736);
      noQuoteEntries_2_1_0.set(PositionLimit_40);
      Instrument_40.insert(PositionLimit_40.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_40("STRING_STD");
      noQuoteEntries_2_1_0.set(PriceQuoteMethod_40);
      Instrument_40.insert(PriceQuoteMethod_40.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_40("STRING_816378563");
      noQuoteEntries_2_1_0.set(PriceUnitOfMeasure_40);
      Instrument_40.insert(PriceUnitOfMeasure_40.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_40;
      PriceUnitOfMeasureQty_40.setString("5011294");
      noQuoteEntries_2_1_0.set(PriceUnitOfMeasureQty_40);
      Instrument_40.insert(PriceUnitOfMeasureQty_40.getString());
      FIX::Product Product_42(10);
      noQuoteEntries_2_1_0.set(Product_42);
      Instrument_40.insert(Product_42.getString());
      FIX::ProductComplex ProductComplex_40("STRING_156069529");
      noQuoteEntries_2_1_0.set(ProductComplex_40);
      Instrument_40.insert(ProductComplex_40.getString());
      FIX::PutOrCall PutOrCall_40(1);
      noQuoteEntries_2_1_0.set(PutOrCall_40);
      Instrument_40.insert(PutOrCall_40.getString());
      FIX::RedemptionDate RedemptionDate_40("LOCALMKTDATE_258468969");
      noQuoteEntries_2_1_0.set(RedemptionDate_40);
      Instrument_40.insert(RedemptionDate_40.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_40("STRING_1830458373");
      noQuoteEntries_2_1_0.set(RepoCollateralSecurityType_40);
      Instrument_40.insert(RepoCollateralSecurityType_40.getString());
      FIX::RepurchaseRate RepurchaseRate_40;
      RepurchaseRate_40.setString("83.160000");
      noQuoteEntries_2_1_0.set(RepurchaseRate_40);
      Instrument_40.insert(RepurchaseRate_40.getString());
      FIX::RepurchaseTerm RepurchaseTerm_40(2125006610);
      noQuoteEntries_2_1_0.set(RepurchaseTerm_40);
      Instrument_40.insert(RepurchaseTerm_40.getString());
      FIX::RestructuringType RestructuringType_40("STRING_MR");
      noQuoteEntries_2_1_0.set(RestructuringType_40);
      Instrument_40.insert(RestructuringType_40.getString());
      FIX::SecurityDesc SecurityDesc_40("STRING_395455047");
      noQuoteEntries_2_1_0.set(SecurityDesc_40);
      Instrument_40.insert(SecurityDesc_40.getString());
      FIX::SecurityExchange SecurityExchange_40("EXCHANGE_2031014566");
      noQuoteEntries_2_1_0.set(SecurityExchange_40);
      Instrument_40.insert(SecurityExchange_40.getString());
      FIX::SecurityGroup SecurityGroup_40("STRING_394490686");
      noQuoteEntries_2_1_0.set(SecurityGroup_40);
      Instrument_40.insert(SecurityGroup_40.getString());
      FIX::SecurityID SecurityID_40("STRING_1987245899");
      noQuoteEntries_2_1_0.set(SecurityID_40);
      Instrument_40.insert(SecurityID_40.getString());
      FIX::SecurityIDSource SecurityIDSource_40("STRING_9");
      noQuoteEntries_2_1_0.set(SecurityIDSource_40);
      Instrument_40.insert(SecurityIDSource_40.getString());
      FIX::SecurityStatus SecurityStatus_40("STRING_2");
      noQuoteEntries_2_1_0.set(SecurityStatus_40);
      Instrument_40.insert(SecurityStatus_40.getString());
      FIX::SecuritySubType SecuritySubType_41("STRING_1249766104");
      noQuoteEntries_2_1_0.set(SecuritySubType_41);
      Instrument_40.insert(SecuritySubType_41.getString());
      FIX::SecurityType SecurityType_42("STRING_CMBS");
      noQuoteEntries_2_1_0.set(SecurityType_42);
      Instrument_40.insert(SecurityType_42.getString());
      FIX::Seniority Seniority_40("STRING_SD");
      noQuoteEntries_2_1_0.set(Seniority_40);
      Instrument_40.insert(Seniority_40.getString());
      FIX::SettlMethod SettlMethod_40('P');
      noQuoteEntries_2_1_0.set(SettlMethod_40);
      Instrument_40.insert(SettlMethod_40.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_40("STRING_1734540287");
      noQuoteEntries_2_1_0.set(SettleOnOpenFlag_40);
      Instrument_40.insert(SettleOnOpenFlag_40.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_40("STRING_843422018");
      noQuoteEntries_2_1_0.set(StateOrProvinceOfIssue_40);
      Instrument_40.insert(StateOrProvinceOfIssue_40.getString());
      FIX::StrikeCurrency StrikeCurrency_40("EUR");
      noQuoteEntries_2_1_0.set(StrikeCurrency_40);
      Instrument_40.insert(StrikeCurrency_40.getString());
      FIX::StrikeMultiplier StrikeMultiplier_40;
      StrikeMultiplier_40.setString("17258373");
      noQuoteEntries_2_1_0.set(StrikeMultiplier_40);
      Instrument_40.insert(StrikeMultiplier_40.getString());
      FIX::StrikePrice StrikePrice_40;
      StrikePrice_40.setString("13884696");
      noQuoteEntries_2_1_0.set(StrikePrice_40);
      Instrument_40.insert(StrikePrice_40.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_40(5);
      noQuoteEntries_2_1_0.set(StrikePriceBoundaryMethod_40);
      Instrument_40.insert(StrikePriceBoundaryMethod_40.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_40;
      StrikePriceBoundaryPrecision_40.setString("71.000000");
      noQuoteEntries_2_1_0.set(StrikePriceBoundaryPrecision_40);
      Instrument_40.insert(StrikePriceBoundaryPrecision_40.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_40(1);
      noQuoteEntries_2_1_0.set(StrikePriceDeterminationMethod_40);
      Instrument_40.insert(StrikePriceDeterminationMethod_40.getString());
      FIX::StrikeValue StrikeValue_40;
      StrikeValue_40.setString("19417999");
      noQuoteEntries_2_1_0.set(StrikeValue_40);
      Instrument_40.insert(StrikeValue_40.getString());
      FIX::Symbol Symbol_40("STRING_497998525");
      noQuoteEntries_2_1_0.set(Symbol_40);
      Instrument_40.insert(Symbol_40.getString());
      FIX::SymbolSfx SymbolSfx_40("STRING_WI");
      noQuoteEntries_2_1_0.set(SymbolSfx_40);
      Instrument_40.insert(SymbolSfx_40.getString());
      FIX::TimeUnit TimeUnit_40("STRING_Min");
      noQuoteEntries_2_1_0.set(TimeUnit_40);
      Instrument_40.insert(TimeUnit_40.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_40(1);
      noQuoteEntries_2_1_0.set(UnderlyingPriceDeterminationMethod_40);
      Instrument_40.insert(UnderlyingPriceDeterminationMethod_40.getString());
      FIX::UnitOfMeasure UnitOfMeasure_40("STRING_lbs");
      noQuoteEntries_2_1_0.set(UnitOfMeasure_40);
      Instrument_40.insert(UnitOfMeasure_40.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_40;
      UnitOfMeasureQty_40.setString("19072618");
      noQuoteEntries_2_1_0.set(UnitOfMeasureQty_40);
      Instrument_40.insert(UnitOfMeasureQty_40.getString());
      FIX::ValuationMethod ValuationMethod_40("STRING_FUT");
      noQuoteEntries_2_1_0.set(ValuationMethod_40);
      Instrument_40.insert(ValuationMethod_40.getString());
      all_values.push_back(Instrument_40);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_77;
        FIX::ComplexEventCondition ComplexEventCondition_77(1);
        noComplexEvents_2_0_2_0.set(ComplexEventCondition_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventCondition_77.getString());
        FIX::ComplexEventPrice ComplexEventPrice_77;
        ComplexEventPrice_77.setString("5543080");
        noComplexEvents_2_0_2_0.set(ComplexEventPrice_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventPrice_77.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_77(5);
        noComplexEvents_2_0_2_0.set(ComplexEventPriceBoundaryMethod_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceBoundaryMethod_77.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_77;
        ComplexEventPriceBoundaryPrecision_77.setString("15.950000");
        noComplexEvents_2_0_2_0.set(ComplexEventPriceBoundaryPrecision_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceBoundaryPrecision_77.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_77(2);
        noComplexEvents_2_0_2_0.set(ComplexEventPriceTimeType_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventPriceTimeType_77.getString());
        FIX::ComplexEventType ComplexEventType_77(5);
        noComplexEvents_2_0_2_0.set(ComplexEventType_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexEventType_77.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_77;
        ComplexOptPayoutAmount_77.setString("7047938");
        noComplexEvents_2_0_2_0.set(ComplexOptPayoutAmount_77);
        ComplexEvents_NoComplexEvents_77.insert(ComplexOptPayoutAmount_77.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_77);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_151;
          FIX::ComplexEventEndDate ComplexEventEndDate_151(FIX::UTCTIMESTAMP(23, 14, 45, 14, 7, 2009));
          noComplexEventDates_2_0_0_3_0.set(ComplexEventEndDate_151);
          ComplexEventDates_NoComplexEventDates_151.insert(ComplexEventEndDate_151.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_151(FIX::UTCTIMESTAMP(17, 25, 29, 3, 3, 2017));
          noComplexEventDates_2_0_0_3_0.set(ComplexEventStartDate_151);
          ComplexEventDates_NoComplexEventDates_151.insert(ComplexEventStartDate_151.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_151);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_303;
            FIX::ComplexEventEndTime ComplexEventEndTime_303(FIX::UTCTIMEONLY(9, 24, 43));
            noComplexEventTimes_2_0_0_0_4_0.set(ComplexEventEndTime_303);
            ComplexEventTimes_NoComplexEventTimes_303.insert(ComplexEventEndTime_303.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_303(FIX::UTCTIMEONLY(16, 44, 56));
            noComplexEventTimes_2_0_0_0_4_0.set(ComplexEventStartTime_303);
            ComplexEventTimes_NoComplexEventTimes_303.insert(ComplexEventStartTime_303.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_303);

            noComplexEventDates_2_0_0_3_0.addGroup(noComplexEventTimes_2_0_0_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_304;
            FIX::ComplexEventEndTime ComplexEventEndTime_304(FIX::UTCTIMEONLY(8, 48, 19));
            noComplexEventTimes_2_0_0_0_4_1.set(ComplexEventEndTime_304);
            ComplexEventTimes_NoComplexEventTimes_304.insert(ComplexEventEndTime_304.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_304(FIX::UTCTIMEONLY(14, 18, 15));
            noComplexEventTimes_2_0_0_0_4_1.set(ComplexEventStartTime_304);
            ComplexEventTimes_NoComplexEventTimes_304.insert(ComplexEventStartTime_304.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_304);

            noComplexEventDates_2_0_0_3_0.addGroup(noComplexEventTimes_2_0_0_0_4_1);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_305;
            FIX::ComplexEventEndTime ComplexEventEndTime_305(FIX::UTCTIMEONLY(5, 30, 2));
            noComplexEventTimes_2_0_0_0_4_2.set(ComplexEventEndTime_305);
            ComplexEventTimes_NoComplexEventTimes_305.insert(ComplexEventEndTime_305.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_305(FIX::UTCTIMEONLY(16, 17, 31));
            noComplexEventTimes_2_0_0_0_4_2.set(ComplexEventStartTime_305);
            ComplexEventTimes_NoComplexEventTimes_305.insert(ComplexEventStartTime_305.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_305);

            noComplexEventDates_2_0_0_3_0.addGroup(noComplexEventTimes_2_0_0_0_4_2);
          }
          noComplexEvents_2_0_2_0.addGroup(noComplexEventDates_2_0_0_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_152;
          FIX::ComplexEventEndDate ComplexEventEndDate_152(FIX::UTCTIMESTAMP(7, 1, 56, 13, 11, 2010));
          noComplexEventDates_2_0_0_3_1.set(ComplexEventEndDate_152);
          ComplexEventDates_NoComplexEventDates_152.insert(ComplexEventEndDate_152.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_152(FIX::UTCTIMESTAMP(23, 59, 35, 21, 4, 2005));
          noComplexEventDates_2_0_0_3_1.set(ComplexEventStartDate_152);
          ComplexEventDates_NoComplexEventDates_152.insert(ComplexEventStartDate_152.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_152);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_306;
            FIX::ComplexEventEndTime ComplexEventEndTime_306(FIX::UTCTIMEONLY(8, 42, 30));
            noComplexEventTimes_2_0_0_1_4_0.set(ComplexEventEndTime_306);
            ComplexEventTimes_NoComplexEventTimes_306.insert(ComplexEventEndTime_306.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_306(FIX::UTCTIMEONLY(12, 48, 22));
            noComplexEventTimes_2_0_0_1_4_0.set(ComplexEventStartTime_306);
            ComplexEventTimes_NoComplexEventTimes_306.insert(ComplexEventStartTime_306.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_306);

            noComplexEventDates_2_0_0_3_1.addGroup(noComplexEventTimes_2_0_0_1_4_0);
          }
          noComplexEvents_2_0_2_0.addGroup(noComplexEventDates_2_0_0_3_1);
        }
        noQuoteEntries_2_1_0.addGroup(noComplexEvents_2_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_78;
        FIX::ComplexEventCondition ComplexEventCondition_78(2);
        noComplexEvents_2_0_2_1.set(ComplexEventCondition_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventCondition_78.getString());
        FIX::ComplexEventPrice ComplexEventPrice_78;
        ComplexEventPrice_78.setString("16746036");
        noComplexEvents_2_0_2_1.set(ComplexEventPrice_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventPrice_78.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_78(3);
        noComplexEvents_2_0_2_1.set(ComplexEventPriceBoundaryMethod_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceBoundaryMethod_78.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_78;
        ComplexEventPriceBoundaryPrecision_78.setString("44.880000");
        noComplexEvents_2_0_2_1.set(ComplexEventPriceBoundaryPrecision_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceBoundaryPrecision_78.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_78(1);
        noComplexEvents_2_0_2_1.set(ComplexEventPriceTimeType_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventPriceTimeType_78.getString());
        FIX::ComplexEventType ComplexEventType_78(9);
        noComplexEvents_2_0_2_1.set(ComplexEventType_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexEventType_78.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_78;
        ComplexOptPayoutAmount_78.setString("21018125");
        noComplexEvents_2_0_2_1.set(ComplexOptPayoutAmount_78);
        ComplexEvents_NoComplexEvents_78.insert(ComplexOptPayoutAmount_78.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_78);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_153;
          FIX::ComplexEventEndDate ComplexEventEndDate_153(FIX::UTCTIMESTAMP(20, 13, 30, 13, 4, 2002));
          noComplexEventDates_2_0_1_3_0.set(ComplexEventEndDate_153);
          ComplexEventDates_NoComplexEventDates_153.insert(ComplexEventEndDate_153.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_153(FIX::UTCTIMESTAMP(19, 55, 48, 20, 3, 2004));
          noComplexEventDates_2_0_1_3_0.set(ComplexEventStartDate_153);
          ComplexEventDates_NoComplexEventDates_153.insert(ComplexEventStartDate_153.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_153);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_307;
            FIX::ComplexEventEndTime ComplexEventEndTime_307(FIX::UTCTIMEONLY(12, 20, 36));
            noComplexEventTimes_2_0_1_0_4_0.set(ComplexEventEndTime_307);
            ComplexEventTimes_NoComplexEventTimes_307.insert(ComplexEventEndTime_307.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_307(FIX::UTCTIMEONLY(8, 16, 53));
            noComplexEventTimes_2_0_1_0_4_0.set(ComplexEventStartTime_307);
            ComplexEventTimes_NoComplexEventTimes_307.insert(ComplexEventStartTime_307.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_307);

            noComplexEventDates_2_0_1_3_0.addGroup(noComplexEventTimes_2_0_1_0_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_308;
            FIX::ComplexEventEndTime ComplexEventEndTime_308(FIX::UTCTIMEONLY(2, 38, 6));
            noComplexEventTimes_2_0_1_0_4_1.set(ComplexEventEndTime_308);
            ComplexEventTimes_NoComplexEventTimes_308.insert(ComplexEventEndTime_308.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_308(FIX::UTCTIMEONLY(14, 43, 18));
            noComplexEventTimes_2_0_1_0_4_1.set(ComplexEventStartTime_308);
            ComplexEventTimes_NoComplexEventTimes_308.insert(ComplexEventStartTime_308.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_308);

            noComplexEventDates_2_0_1_3_0.addGroup(noComplexEventTimes_2_0_1_0_4_1);
          }
          noComplexEvents_2_0_2_1.addGroup(noComplexEventDates_2_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_154;
          FIX::ComplexEventEndDate ComplexEventEndDate_154(FIX::UTCTIMESTAMP(16, 31, 34, 25, 4, 2006));
          noComplexEventDates_2_0_1_3_1.set(ComplexEventEndDate_154);
          ComplexEventDates_NoComplexEventDates_154.insert(ComplexEventEndDate_154.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_154(FIX::UTCTIMESTAMP(10, 18, 19, 18, 9, 2017));
          noComplexEventDates_2_0_1_3_1.set(ComplexEventStartDate_154);
          ComplexEventDates_NoComplexEventDates_154.insert(ComplexEventStartDate_154.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_154);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_309;
            FIX::ComplexEventEndTime ComplexEventEndTime_309(FIX::UTCTIMEONLY(15, 9, 2));
            noComplexEventTimes_2_0_1_1_4_0.set(ComplexEventEndTime_309);
            ComplexEventTimes_NoComplexEventTimes_309.insert(ComplexEventEndTime_309.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_309(FIX::UTCTIMEONLY(6, 18, 36));
            noComplexEventTimes_2_0_1_1_4_0.set(ComplexEventStartTime_309);
            ComplexEventTimes_NoComplexEventTimes_309.insert(ComplexEventStartTime_309.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_309);

            noComplexEventDates_2_0_1_3_1.addGroup(noComplexEventTimes_2_0_1_1_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_310;
            FIX::ComplexEventEndTime ComplexEventEndTime_310(FIX::UTCTIMEONLY(12, 14, 6));
            noComplexEventTimes_2_0_1_1_4_1.set(ComplexEventEndTime_310);
            ComplexEventTimes_NoComplexEventTimes_310.insert(ComplexEventEndTime_310.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_310(FIX::UTCTIMEONLY(8, 49, 53));
            noComplexEventTimes_2_0_1_1_4_1.set(ComplexEventStartTime_310);
            ComplexEventTimes_NoComplexEventTimes_310.insert(ComplexEventStartTime_310.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_310);

            noComplexEventDates_2_0_1_3_1.addGroup(noComplexEventTimes_2_0_1_1_4_1);
          }
          noComplexEvents_2_0_2_1.addGroup(noComplexEventDates_2_0_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_155;
          FIX::ComplexEventEndDate ComplexEventEndDate_155(FIX::UTCTIMESTAMP(21, 17, 22, 27, 9, 2009));
          noComplexEventDates_2_0_1_3_2.set(ComplexEventEndDate_155);
          ComplexEventDates_NoComplexEventDates_155.insert(ComplexEventEndDate_155.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_155(FIX::UTCTIMESTAMP(18, 3, 53, 12, 4, 2017));
          noComplexEventDates_2_0_1_3_2.set(ComplexEventStartDate_155);
          ComplexEventDates_NoComplexEventDates_155.insert(ComplexEventStartDate_155.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_155);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_311;
            FIX::ComplexEventEndTime ComplexEventEndTime_311(FIX::UTCTIMEONLY(12, 35, 35));
            noComplexEventTimes_2_0_1_2_4_0.set(ComplexEventEndTime_311);
            ComplexEventTimes_NoComplexEventTimes_311.insert(ComplexEventEndTime_311.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_311(FIX::UTCTIMEONLY(9, 46, 51));
            noComplexEventTimes_2_0_1_2_4_0.set(ComplexEventStartTime_311);
            ComplexEventTimes_NoComplexEventTimes_311.insert(ComplexEventStartTime_311.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_311);

            noComplexEventDates_2_0_1_3_2.addGroup(noComplexEventTimes_2_0_1_2_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_312;
            FIX::ComplexEventEndTime ComplexEventEndTime_312(FIX::UTCTIMEONLY(14, 57, 3));
            noComplexEventTimes_2_0_1_2_4_1.set(ComplexEventEndTime_312);
            ComplexEventTimes_NoComplexEventTimes_312.insert(ComplexEventEndTime_312.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_312(FIX::UTCTIMEONLY(17, 44, 43));
            noComplexEventTimes_2_0_1_2_4_1.set(ComplexEventStartTime_312);
            ComplexEventTimes_NoComplexEventTimes_312.insert(ComplexEventStartTime_312.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_312);

            noComplexEventDates_2_0_1_3_2.addGroup(noComplexEventTimes_2_0_1_2_4_1);
          }
          noComplexEvents_2_0_2_1.addGroup(noComplexEventDates_2_0_1_3_2);
        }
        noQuoteEntries_2_1_0.addGroup(noComplexEvents_2_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_2_0_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_79;
        FIX::ComplexEventCondition ComplexEventCondition_79(1);
        noComplexEvents_2_0_2_2.set(ComplexEventCondition_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventCondition_79.getString());
        FIX::ComplexEventPrice ComplexEventPrice_79;
        ComplexEventPrice_79.setString("6354742");
        noComplexEvents_2_0_2_2.set(ComplexEventPrice_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventPrice_79.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_79(3);
        noComplexEvents_2_0_2_2.set(ComplexEventPriceBoundaryMethod_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventPriceBoundaryMethod_79.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_79;
        ComplexEventPriceBoundaryPrecision_79.setString("71.240000");
        noComplexEvents_2_0_2_2.set(ComplexEventPriceBoundaryPrecision_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventPriceBoundaryPrecision_79.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_79(2);
        noComplexEvents_2_0_2_2.set(ComplexEventPriceTimeType_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventPriceTimeType_79.getString());
        FIX::ComplexEventType ComplexEventType_79(4);
        noComplexEvents_2_0_2_2.set(ComplexEventType_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexEventType_79.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_79;
        ComplexOptPayoutAmount_79.setString("3416673");
        noComplexEvents_2_0_2_2.set(ComplexOptPayoutAmount_79);
        ComplexEvents_NoComplexEvents_79.insert(ComplexOptPayoutAmount_79.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_79);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_156;
          FIX::ComplexEventEndDate ComplexEventEndDate_156(FIX::UTCTIMESTAMP(0, 44, 34, 12, 6, 2006));
          noComplexEventDates_2_0_2_3_0.set(ComplexEventEndDate_156);
          ComplexEventDates_NoComplexEventDates_156.insert(ComplexEventEndDate_156.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_156(FIX::UTCTIMESTAMP(6, 27, 49, 17, 5, 2015));
          noComplexEventDates_2_0_2_3_0.set(ComplexEventStartDate_156);
          ComplexEventDates_NoComplexEventDates_156.insert(ComplexEventStartDate_156.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_156);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_313;
            FIX::ComplexEventEndTime ComplexEventEndTime_313(FIX::UTCTIMEONLY(17, 9, 8));
            noComplexEventTimes_2_0_2_0_4_0.set(ComplexEventEndTime_313);
            ComplexEventTimes_NoComplexEventTimes_313.insert(ComplexEventEndTime_313.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_313(FIX::UTCTIMEONLY(18, 44, 6));
            noComplexEventTimes_2_0_2_0_4_0.set(ComplexEventStartTime_313);
            ComplexEventTimes_NoComplexEventTimes_313.insert(ComplexEventStartTime_313.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_313);

            noComplexEventDates_2_0_2_3_0.addGroup(noComplexEventTimes_2_0_2_0_4_0);
          }
          noComplexEvents_2_0_2_2.addGroup(noComplexEventDates_2_0_2_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_157;
          FIX::ComplexEventEndDate ComplexEventEndDate_157(FIX::UTCTIMESTAMP(6, 58, 41, 23, 3, 2014));
          noComplexEventDates_2_0_2_3_1.set(ComplexEventEndDate_157);
          ComplexEventDates_NoComplexEventDates_157.insert(ComplexEventEndDate_157.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_157(FIX::UTCTIMESTAMP(16, 27, 59, 6, 12, 2010));
          noComplexEventDates_2_0_2_3_1.set(ComplexEventStartDate_157);
          ComplexEventDates_NoComplexEventDates_157.insert(ComplexEventStartDate_157.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_157);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_314;
            FIX::ComplexEventEndTime ComplexEventEndTime_314(FIX::UTCTIMEONLY(22, 57, 45));
            noComplexEventTimes_2_0_2_1_4_0.set(ComplexEventEndTime_314);
            ComplexEventTimes_NoComplexEventTimes_314.insert(ComplexEventEndTime_314.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_314(FIX::UTCTIMEONLY(1, 12, 11));
            noComplexEventTimes_2_0_2_1_4_0.set(ComplexEventStartTime_314);
            ComplexEventTimes_NoComplexEventTimes_314.insert(ComplexEventStartTime_314.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_314);

            noComplexEventDates_2_0_2_3_1.addGroup(noComplexEventTimes_2_0_2_1_4_0);
          }
          noComplexEvents_2_0_2_2.addGroup(noComplexEventDates_2_0_2_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_158;
          FIX::ComplexEventEndDate ComplexEventEndDate_158(FIX::UTCTIMESTAMP(18, 20, 26, 13, 4, 2009));
          noComplexEventDates_2_0_2_3_2.set(ComplexEventEndDate_158);
          ComplexEventDates_NoComplexEventDates_158.insert(ComplexEventEndDate_158.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_158(FIX::UTCTIMESTAMP(7, 9, 13, 4, 10, 2007));
          noComplexEventDates_2_0_2_3_2.set(ComplexEventStartDate_158);
          ComplexEventDates_NoComplexEventDates_158.insert(ComplexEventStartDate_158.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_158);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_315;
            FIX::ComplexEventEndTime ComplexEventEndTime_315(FIX::UTCTIMEONLY(11, 2, 46));
            noComplexEventTimes_2_0_2_2_4_0.set(ComplexEventEndTime_315);
            ComplexEventTimes_NoComplexEventTimes_315.insert(ComplexEventEndTime_315.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_315(FIX::UTCTIMEONLY(1, 27, 24));
            noComplexEventTimes_2_0_2_2_4_0.set(ComplexEventStartTime_315);
            ComplexEventTimes_NoComplexEventTimes_315.insert(ComplexEventStartTime_315.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_315);

            noComplexEventDates_2_0_2_3_2.addGroup(noComplexEventTimes_2_0_2_2_4_0);
          }
          {
            FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_316;
            FIX::ComplexEventEndTime ComplexEventEndTime_316(FIX::UTCTIMEONLY(13, 13, 43));
            noComplexEventTimes_2_0_2_2_4_1.set(ComplexEventEndTime_316);
            ComplexEventTimes_NoComplexEventTimes_316.insert(ComplexEventEndTime_316.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_316(FIX::UTCTIMEONLY(7, 55, 24));
            noComplexEventTimes_2_0_2_2_4_1.set(ComplexEventStartTime_316);
            ComplexEventTimes_NoComplexEventTimes_316.insert(ComplexEventStartTime_316.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_316);

            noComplexEventDates_2_0_2_3_2.addGroup(noComplexEventTimes_2_0_2_2_4_1);
          }
          noComplexEvents_2_0_2_2.addGroup(noComplexEventDates_2_0_2_3_2);
        }
        noQuoteEntries_2_1_0.addGroup(noComplexEvents_2_0_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_2_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_81;
        FIX::EventDate EventDate_81("LOCALMKTDATE_790921061");
        noEvents_2_0_2_0.set(EventDate_81);
        EvntGrp_NoEvents_81.insert(EventDate_81.getString());
        FIX::EventPx EventPx_81;
        EventPx_81.setString("480524");
        noEvents_2_0_2_0.set(EventPx_81);
        EvntGrp_NoEvents_81.insert(EventPx_81.getString());
        FIX::EventText EventText_81("STRING_942106556");
        noEvents_2_0_2_0.set(EventText_81);
        EvntGrp_NoEvents_81.insert(EventText_81.getString());
        FIX::EventTime EventTime_81(FIX::UTCTIMESTAMP(16, 59, 13, 11, 9, 2008));
        noEvents_2_0_2_0.set(EventTime_81);
        EvntGrp_NoEvents_81.insert(EventTime_81.getString());
        FIX::EventType EventType_81(1);
        noEvents_2_0_2_0.set(EventType_81);
        EvntGrp_NoEvents_81.insert(EventType_81.getString());
        all_values.push_back(EvntGrp_NoEvents_81);

        noQuoteEntries_2_1_0.addGroup(noEvents_2_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_2_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_82;
        FIX::EventDate EventDate_82("LOCALMKTDATE_1061850573");
        noEvents_2_0_2_1.set(EventDate_82);
        EvntGrp_NoEvents_82.insert(EventDate_82.getString());
        FIX::EventPx EventPx_82;
        EventPx_82.setString("6412195");
        noEvents_2_0_2_1.set(EventPx_82);
        EvntGrp_NoEvents_82.insert(EventPx_82.getString());
        FIX::EventText EventText_82("STRING_46983595");
        noEvents_2_0_2_1.set(EventText_82);
        EvntGrp_NoEvents_82.insert(EventText_82.getString());
        FIX::EventTime EventTime_82(FIX::UTCTIMESTAMP(0, 57, 59, 26, 11, 2002));
        noEvents_2_0_2_1.set(EventTime_82);
        EvntGrp_NoEvents_82.insert(EventTime_82.getString());
        FIX::EventType EventType_82(11);
        noEvents_2_0_2_1.set(EventType_82);
        EvntGrp_NoEvents_82.insert(EventType_82.getString());
        all_values.push_back(EvntGrp_NoEvents_82);

        noQuoteEntries_2_1_0.addGroup(noEvents_2_0_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_84;
        FIX::InstrumentPartyID InstrumentPartyID_84("STRING_1416299552");
        noInstrumentParties_2_0_2_0.set(InstrumentPartyID_84);
        InstrumentParties_NoInstrumentParties_84.insert(InstrumentPartyID_84.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_84('1');
        noInstrumentParties_2_0_2_0.set(InstrumentPartyIDSource_84);
        InstrumentParties_NoInstrumentParties_84.insert(InstrumentPartyIDSource_84.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_84(1673666010);
        noInstrumentParties_2_0_2_0.set(InstrumentPartyRole_84);
        InstrumentParties_NoInstrumentParties_84.insert(InstrumentPartyRole_84.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_84);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177;
          FIX::InstrumentPartySubID InstrumentPartySubID_177("STRING_1487526042");
          noInstrumentPartySubIDs_2_0_0_3_0.set(InstrumentPartySubID_177);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177.insert(InstrumentPartySubID_177.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_177(1344886878);
          noInstrumentPartySubIDs_2_0_0_3_0.set(InstrumentPartySubIDType_177);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177.insert(InstrumentPartySubIDType_177.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_177);

          noInstrumentParties_2_0_2_0.addGroup(noInstrumentPartySubIDs_2_0_0_3_0);
        }
        noQuoteEntries_2_1_0.addGroup(noInstrumentParties_2_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_85;
        FIX::InstrumentPartyID InstrumentPartyID_85("STRING_722659561");
        noInstrumentParties_2_0_2_1.set(InstrumentPartyID_85);
        InstrumentParties_NoInstrumentParties_85.insert(InstrumentPartyID_85.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_85('4');
        noInstrumentParties_2_0_2_1.set(InstrumentPartyIDSource_85);
        InstrumentParties_NoInstrumentParties_85.insert(InstrumentPartyIDSource_85.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_85(2135807939);
        noInstrumentParties_2_0_2_1.set(InstrumentPartyRole_85);
        InstrumentParties_NoInstrumentParties_85.insert(InstrumentPartyRole_85.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_85);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178;
          FIX::InstrumentPartySubID InstrumentPartySubID_178("STRING_1368725168");
          noInstrumentPartySubIDs_2_0_1_3_0.set(InstrumentPartySubID_178);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178.insert(InstrumentPartySubID_178.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_178(1151564810);
          noInstrumentPartySubIDs_2_0_1_3_0.set(InstrumentPartySubIDType_178);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178.insert(InstrumentPartySubIDType_178.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_178);

          noInstrumentParties_2_0_2_1.addGroup(noInstrumentPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179;
          FIX::InstrumentPartySubID InstrumentPartySubID_179("STRING_426956590");
          noInstrumentPartySubIDs_2_0_1_3_1.set(InstrumentPartySubID_179);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179.insert(InstrumentPartySubID_179.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_179(264737459);
          noInstrumentPartySubIDs_2_0_1_3_1.set(InstrumentPartySubIDType_179);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179.insert(InstrumentPartySubIDType_179.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_179);

          noInstrumentParties_2_0_2_1.addGroup(noInstrumentPartySubIDs_2_0_1_3_1);
        }
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180;
          FIX::InstrumentPartySubID InstrumentPartySubID_180("STRING_1850823243");
          noInstrumentPartySubIDs_2_0_1_3_2.set(InstrumentPartySubID_180);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180.insert(InstrumentPartySubID_180.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_180(66499062);
          noInstrumentPartySubIDs_2_0_1_3_2.set(InstrumentPartySubIDType_180);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180.insert(InstrumentPartySubIDType_180.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_180);

          noInstrumentParties_2_0_2_1.addGroup(noInstrumentPartySubIDs_2_0_1_3_2);
        }
        noQuoteEntries_2_1_0.addGroup(noInstrumentParties_2_0_2_1);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_2_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_86;
        FIX::InstrumentPartyID InstrumentPartyID_86("STRING_143472419");
        noInstrumentParties_2_0_2_2.set(InstrumentPartyID_86);
        InstrumentParties_NoInstrumentParties_86.insert(InstrumentPartyID_86.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_86('1');
        noInstrumentParties_2_0_2_2.set(InstrumentPartyIDSource_86);
        InstrumentParties_NoInstrumentParties_86.insert(InstrumentPartyIDSource_86.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_86(1869882422);
        noInstrumentParties_2_0_2_2.set(InstrumentPartyRole_86);
        InstrumentParties_NoInstrumentParties_86.insert(InstrumentPartyRole_86.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_86);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181;
          FIX::InstrumentPartySubID InstrumentPartySubID_181("STRING_320140611");
          noInstrumentPartySubIDs_2_0_2_3_0.set(InstrumentPartySubID_181);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181.insert(InstrumentPartySubID_181.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_181(1916866017);
          noInstrumentPartySubIDs_2_0_2_3_0.set(InstrumentPartySubIDType_181);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181.insert(InstrumentPartySubIDType_181.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_181);

          noInstrumentParties_2_0_2_2.addGroup(noInstrumentPartySubIDs_2_0_2_3_0);
        }
        noQuoteEntries_2_1_0.addGroup(noInstrumentParties_2_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_87;
        FIX::SecurityAltID SecurityAltID_87("STRING_2081884732");
        noSecurityAltID_2_0_2_0.set(SecurityAltID_87);
        SecAltIDGrp_NoSecurityAltID_87.insert(SecurityAltID_87.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_87("STRING_2079051114");
        noSecurityAltID_2_0_2_0.set(SecurityAltIDSource_87);
        SecAltIDGrp_NoSecurityAltID_87.insert(SecurityAltIDSource_87.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_87);

        noQuoteEntries_2_1_0.addGroup(noSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_2_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_88;
        FIX::SecurityAltID SecurityAltID_88("STRING_1809148425");
        noSecurityAltID_2_0_2_1.set(SecurityAltID_88);
        SecAltIDGrp_NoSecurityAltID_88.insert(SecurityAltID_88.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_88("STRING_2061545738");
        noSecurityAltID_2_0_2_1.set(SecurityAltIDSource_88);
        SecAltIDGrp_NoSecurityAltID_88.insert(SecurityAltIDSource_88.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_88);

        noQuoteEntries_2_1_0.addGroup(noSecurityAltID_2_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_80;
      FIX::SecurityXML SecurityXML_81("XMLDATA_2006192564");
      noQuoteEntries_2_1_0.set(SecurityXML_81);
      FIX::SecurityXMLLen SecurityXMLLen_40(1602223324);
      noQuoteEntries_2_1_0.set(SecurityXMLLen_40);
      FIX::SecurityXMLSchema SecurityXMLSchema_40("STRING_907202080");
      noQuoteEntries_2_1_0.set(SecurityXMLSchema_40);
      SecurityXML_80.insert(SecurityXMLSchema_40.getString());
      all_values.push_back(SecurityXML_80);

      noQuoteSets_0_2.addGroup(noQuoteEntries_2_1_0);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_53;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_53("DATA_394810283");
    noQuoteSets_0_2.set(EncodedUnderlyingIssuer_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingIssuer_53.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_53(871039228);
    noQuoteSets_0_2.set(EncodedUnderlyingIssuerLen_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingIssuerLen_53.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_53("DATA_170156755");
    noQuoteSets_0_2.set(EncodedUnderlyingSecurityDesc_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingSecurityDesc_53.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_53(2068476294);
    noQuoteSets_0_2.set(EncodedUnderlyingSecurityDescLen_53);
    UnderlyingInstrument_53.insert(EncodedUnderlyingSecurityDescLen_53.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_53;
    UnderlyingAdjustedQuantity_53.setString("7880455");
    noQuoteSets_0_2.set(UnderlyingAdjustedQuantity_53);
    UnderlyingInstrument_53.insert(UnderlyingAdjustedQuantity_53.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_53;
    UnderlyingAllocationPercent_53.setString("27.980000");
    noQuoteSets_0_2.set(UnderlyingAllocationPercent_53);
    UnderlyingInstrument_53.insert(UnderlyingAllocationPercent_53.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_53;
    UnderlyingAttachmentPoint_53.setString("95.240000");
    noQuoteSets_0_2.set(UnderlyingAttachmentPoint_53);
    UnderlyingInstrument_53.insert(UnderlyingAttachmentPoint_53.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_53("STRING_1510705146");
    noQuoteSets_0_2.set(UnderlyingCFICode_53);
    UnderlyingInstrument_53.insert(UnderlyingCFICode_53.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_53("STRING_2084301410");
    noQuoteSets_0_2.set(UnderlyingCPProgram_53);
    UnderlyingInstrument_53.insert(UnderlyingCPProgram_53.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_53("STRING_1254203815");
    noQuoteSets_0_2.set(UnderlyingCPRegType_53);
    UnderlyingInstrument_53.insert(UnderlyingCPRegType_53.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_53;
    UnderlyingCapValue_53.setString("1339335");
    noQuoteSets_0_2.set(UnderlyingCapValue_53);
    UnderlyingInstrument_53.insert(UnderlyingCapValue_53.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_53;
    UnderlyingCashAmount_53.setString("13055429");
    noQuoteSets_0_2.set(UnderlyingCashAmount_53);
    UnderlyingInstrument_53.insert(UnderlyingCashAmount_53.getString());
    FIX::UnderlyingCashType UnderlyingCashType_53("STRING_DIFF");
    noQuoteSets_0_2.set(UnderlyingCashType_53);
    UnderlyingInstrument_53.insert(UnderlyingCashType_53.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_53;
    UnderlyingContractMultiplier_53.setString("5608901");
    noQuoteSets_0_2.set(UnderlyingContractMultiplier_53);
    UnderlyingInstrument_53.insert(UnderlyingContractMultiplier_53.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_53(1570280389);
    noQuoteSets_0_2.set(UnderlyingContractMultiplierUnit_53);
    UnderlyingInstrument_53.insert(UnderlyingContractMultiplierUnit_53.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_53("COUNTRY_2109108221");
    noQuoteSets_0_2.set(UnderlyingCountryOfIssue_53);
    UnderlyingInstrument_53.insert(UnderlyingCountryOfIssue_53.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_53("LOCALMKTDATE_627389189");
    noQuoteSets_0_2.set(UnderlyingCouponPaymentDate_53);
    UnderlyingInstrument_53.insert(UnderlyingCouponPaymentDate_53.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_53;
    UnderlyingCouponRate_53.setString("28.080000");
    noQuoteSets_0_2.set(UnderlyingCouponRate_53);
    UnderlyingInstrument_53.insert(UnderlyingCouponRate_53.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_53("STRING_1788029275");
    noQuoteSets_0_2.set(UnderlyingCreditRating_53);
    UnderlyingInstrument_53.insert(UnderlyingCreditRating_53.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_53("EUR");
    noQuoteSets_0_2.set(UnderlyingCurrency_53);
    UnderlyingInstrument_53.insert(UnderlyingCurrency_53.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_53;
    UnderlyingCurrentValue_53.setString("21081698");
    noQuoteSets_0_2.set(UnderlyingCurrentValue_53);
    UnderlyingInstrument_53.insert(UnderlyingCurrentValue_53.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_53;
    UnderlyingDetachmentPoint_53.setString("3.320000");
    noQuoteSets_0_2.set(UnderlyingDetachmentPoint_53);
    UnderlyingInstrument_53.insert(UnderlyingDetachmentPoint_53.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_53;
    UnderlyingDirtyPrice_53.setString("17863234");
    noQuoteSets_0_2.set(UnderlyingDirtyPrice_53);
    UnderlyingInstrument_53.insert(UnderlyingDirtyPrice_53.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_53;
    UnderlyingEndPrice_53.setString("20425709");
    noQuoteSets_0_2.set(UnderlyingEndPrice_53);
    UnderlyingInstrument_53.insert(UnderlyingEndPrice_53.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_53;
    UnderlyingEndValue_53.setString("507377");
    noQuoteSets_0_2.set(UnderlyingEndValue_53);
    UnderlyingInstrument_53.insert(UnderlyingEndValue_53.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_53(1447988257);
    noQuoteSets_0_2.set(UnderlyingExerciseStyle_53);
    UnderlyingInstrument_53.insert(UnderlyingExerciseStyle_53.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_53;
    UnderlyingFXRate_53.setString("19566330");
    noQuoteSets_0_2.set(UnderlyingFXRate_53);
    UnderlyingInstrument_53.insert(UnderlyingFXRate_53.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_53('D');
    noQuoteSets_0_2.set(UnderlyingFXRateCalc_53);
    UnderlyingInstrument_53.insert(UnderlyingFXRateCalc_53.getString());
    FIX::UnderlyingFactor UnderlyingFactor_53;
    UnderlyingFactor_53.setString("9027279");
    noQuoteSets_0_2.set(UnderlyingFactor_53);
    UnderlyingInstrument_53.insert(UnderlyingFactor_53.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_53(716351492);
    noQuoteSets_0_2.set(UnderlyingFlowScheduleType_53);
    UnderlyingInstrument_53.insert(UnderlyingFlowScheduleType_53.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_53("STRING_304256998");
    noQuoteSets_0_2.set(UnderlyingInstrRegistry_53);
    UnderlyingInstrument_53.insert(UnderlyingInstrRegistry_53.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_53("LOCALMKTDATE_1773767161");
    noQuoteSets_0_2.set(UnderlyingIssueDate_53);
    UnderlyingInstrument_53.insert(UnderlyingIssueDate_53.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_53("STRING_886508248");
    noQuoteSets_0_2.set(UnderlyingIssuer_53);
    UnderlyingInstrument_53.insert(UnderlyingIssuer_53.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_53("STRING_225249644");
    noQuoteSets_0_2.set(UnderlyingLocaleOfIssue_53);
    UnderlyingInstrument_53.insert(UnderlyingLocaleOfIssue_53.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_53("LOCALMKTDATE_414329098");
    noQuoteSets_0_2.set(UnderlyingMaturityDate_53);
    UnderlyingInstrument_53.insert(UnderlyingMaturityDate_53.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_53("MONTHYEAR_396707398");
    noQuoteSets_0_2.set(UnderlyingMaturityMonthYear_53);
    UnderlyingInstrument_53.insert(UnderlyingMaturityMonthYear_53.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_53("TZTIMEONLY_1491129168");
    noQuoteSets_0_2.set(UnderlyingMaturityTime_53);
    UnderlyingInstrument_53.insert(UnderlyingMaturityTime_53.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_53;
    UnderlyingNotionalPercentageOutstanding_53.setString("42.440000");
    noQuoteSets_0_2.set(UnderlyingNotionalPercentageOutstanding_53);
    UnderlyingInstrument_53.insert(UnderlyingNotionalPercentageOutstanding_53.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_53('3');
    noQuoteSets_0_2.set(UnderlyingOptAttribute_53);
    UnderlyingInstrument_53.insert(UnderlyingOptAttribute_53.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_53;
    UnderlyingOriginalNotionalPercentageOutstanding_53.setString("93.350000");
    noQuoteSets_0_2.set(UnderlyingOriginalNotionalPercentageOutstanding_53);
    UnderlyingInstrument_53.insert(UnderlyingOriginalNotionalPercentageOutstanding_53.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_53("STRING_2058967781");
    noQuoteSets_0_2.set(UnderlyingPriceUnitOfMeasure_53);
    UnderlyingInstrument_53.insert(UnderlyingPriceUnitOfMeasure_53.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_53;
    UnderlyingPriceUnitOfMeasureQty_53.setString("16390680");
    noQuoteSets_0_2.set(UnderlyingPriceUnitOfMeasureQty_53);
    UnderlyingInstrument_53.insert(UnderlyingPriceUnitOfMeasureQty_53.getString());
    FIX::UnderlyingProduct UnderlyingProduct_53(856134313);
    noQuoteSets_0_2.set(UnderlyingProduct_53);
    UnderlyingInstrument_53.insert(UnderlyingProduct_53.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_53(472374261);
    noQuoteSets_0_2.set(UnderlyingPutOrCall_53);
    UnderlyingInstrument_53.insert(UnderlyingPutOrCall_53.getString());
    FIX::UnderlyingPx UnderlyingPx_53;
    UnderlyingPx_53.setString("10618648");
    noQuoteSets_0_2.set(UnderlyingPx_53);
    UnderlyingInstrument_53.insert(UnderlyingPx_53.getString());
    FIX::UnderlyingQty UnderlyingQty_53;
    UnderlyingQty_53.setString("8177588");
    noQuoteSets_0_2.set(UnderlyingQty_53);
    UnderlyingInstrument_53.insert(UnderlyingQty_53.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_53("LOCALMKTDATE_1099763450");
    noQuoteSets_0_2.set(UnderlyingRedemptionDate_53);
    UnderlyingInstrument_53.insert(UnderlyingRedemptionDate_53.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_53("STRING_628133991");
    noQuoteSets_0_2.set(UnderlyingRepoCollateralSecurityType_53);
    UnderlyingInstrument_53.insert(UnderlyingRepoCollateralSecurityType_53.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_53;
    UnderlyingRepurchaseRate_53.setString("45.130000");
    noQuoteSets_0_2.set(UnderlyingRepurchaseRate_53);
    UnderlyingInstrument_53.insert(UnderlyingRepurchaseRate_53.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_53(1449551414);
    noQuoteSets_0_2.set(UnderlyingRepurchaseTerm_53);
    UnderlyingInstrument_53.insert(UnderlyingRepurchaseTerm_53.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_53("STRING_1399726145");
    noQuoteSets_0_2.set(UnderlyingRestructuringType_53);
    UnderlyingInstrument_53.insert(UnderlyingRestructuringType_53.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_53("STRING_418990751");
    noQuoteSets_0_2.set(UnderlyingSecurityDesc_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityDesc_53.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_53("EXCHANGE_1568721746");
    noQuoteSets_0_2.set(UnderlyingSecurityExchange_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityExchange_53.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_53("STRING_1038565976");
    noQuoteSets_0_2.set(UnderlyingSecurityID_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityID_53.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_53("STRING_314078074");
    noQuoteSets_0_2.set(UnderlyingSecurityIDSource_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityIDSource_53.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_53("STRING_1619459545");
    noQuoteSets_0_2.set(UnderlyingSecuritySubType_53);
    UnderlyingInstrument_53.insert(UnderlyingSecuritySubType_53.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_53("STRING_339070585");
    noQuoteSets_0_2.set(UnderlyingSecurityType_53);
    UnderlyingInstrument_53.insert(UnderlyingSecurityType_53.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_53("STRING_123227486");
    noQuoteSets_0_2.set(UnderlyingSeniority_53);
    UnderlyingInstrument_53.insert(UnderlyingSeniority_53.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_53("STRING_1528906259");
    noQuoteSets_0_2.set(UnderlyingSettlMethod_53);
    UnderlyingInstrument_53.insert(UnderlyingSettlMethod_53.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_53(4);
    noQuoteSets_0_2.set(UnderlyingSettlementType_53);
    UnderlyingInstrument_53.insert(UnderlyingSettlementType_53.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_53;
    UnderlyingStartValue_53.setString("8395789");
    noQuoteSets_0_2.set(UnderlyingStartValue_53);
    UnderlyingInstrument_53.insert(UnderlyingStartValue_53.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_53("STRING_1833163257");
    noQuoteSets_0_2.set(UnderlyingStateOrProvinceOfIssue_53);
    UnderlyingInstrument_53.insert(UnderlyingStateOrProvinceOfIssue_53.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_53("CHF");
    noQuoteSets_0_2.set(UnderlyingStrikeCurrency_53);
    UnderlyingInstrument_53.insert(UnderlyingStrikeCurrency_53.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_53;
    UnderlyingStrikePrice_53.setString("20584129");
    noQuoteSets_0_2.set(UnderlyingStrikePrice_53);
    UnderlyingInstrument_53.insert(UnderlyingStrikePrice_53.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_53("STRING_1282411129");
    noQuoteSets_0_2.set(UnderlyingSymbol_53);
    UnderlyingInstrument_53.insert(UnderlyingSymbol_53.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_53("STRING_2122794625");
    noQuoteSets_0_2.set(UnderlyingSymbolSfx_53);
    UnderlyingInstrument_53.insert(UnderlyingSymbolSfx_53.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_53("STRING_1402058421");
    noQuoteSets_0_2.set(UnderlyingTimeUnit_53);
    UnderlyingInstrument_53.insert(UnderlyingTimeUnit_53.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_53("STRING_1059961726");
    noQuoteSets_0_2.set(UnderlyingUnitOfMeasure_53);
    UnderlyingInstrument_53.insert(UnderlyingUnitOfMeasure_53.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_53;
    UnderlyingUnitOfMeasureQty_53.setString("3088361");
    noQuoteSets_0_2.set(UnderlyingUnitOfMeasureQty_53);
    UnderlyingInstrument_53.insert(UnderlyingUnitOfMeasureQty_53.getString());
    all_values.push_back(UnderlyingInstrument_53);

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_110;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_110("STRING_971445859");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltID_110);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_110.insert(UnderlyingSecurityAltID_110.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_110("STRING_1947904227");
      noUnderlyingSecurityAltID_2_1_0.set(UnderlyingSecurityAltIDSource_110);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_110.insert(UnderlyingSecurityAltIDSource_110.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_110);

      noQuoteSets_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_95;
      FIX::UnderlyingStipType UnderlyingStipType_95("STRING_1443820120");
      noUnderlyingStips_2_1_0.set(UnderlyingStipType_95);
      UnderlyingStipulations_NoUnderlyingStips_95.insert(UnderlyingStipType_95.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_95("STRING_862285410");
      noUnderlyingStips_2_1_0.set(UnderlyingStipValue_95);
      UnderlyingStipulations_NoUnderlyingStips_95.insert(UnderlyingStipValue_95.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_95);

      noQuoteSets_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_96;
      FIX::UnderlyingStipType UnderlyingStipType_96("STRING_1526317308");
      noUnderlyingStips_2_1_1.set(UnderlyingStipType_96);
      UnderlyingStipulations_NoUnderlyingStips_96.insert(UnderlyingStipType_96.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_96("STRING_396099923");
      noUnderlyingStips_2_1_1.set(UnderlyingStipValue_96);
      UnderlyingStipulations_NoUnderlyingStips_96.insert(UnderlyingStipValue_96.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_96);

      noQuoteSets_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_97;
      FIX::UnderlyingStipType UnderlyingStipType_97("STRING_1490419401");
      noUnderlyingStips_2_1_2.set(UnderlyingStipType_97);
      UnderlyingStipulations_NoUnderlyingStips_97.insert(UnderlyingStipType_97.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_97("STRING_1984621821");
      noUnderlyingStips_2_1_2.set(UnderlyingStipValue_97);
      UnderlyingStipulations_NoUnderlyingStips_97.insert(UnderlyingStipValue_97.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_97);

      noQuoteSets_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_113;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_113("STRING_742661898");
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyID_113);
      UndlyInstrumentParties_NoUndlyInstrumentParties_113.insert(UnderlyingInstrumentPartyID_113.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_113('2');
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyIDSource_113);
      UndlyInstrumentParties_NoUndlyInstrumentParties_113.insert(UnderlyingInstrumentPartyIDSource_113.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_113(1266889435);
      noUndlyInstrumentParties_2_1_0.set(UnderlyingInstrumentPartyRole_113);
      UndlyInstrumentParties_NoUndlyInstrumentParties_113.insert(UnderlyingInstrumentPartyRole_113.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_113);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_222("STRING_570206998");
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubID_222);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222.insert(UnderlyingInstrumentPartySubID_222.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_222(738865332);
        noUndlyInstrumentPartySubIDs_2_0_2_0.set(UnderlyingInstrumentPartySubIDType_222);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222.insert(UnderlyingInstrumentPartySubIDType_222.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222);

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noQuoteSets_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_114;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_114("STRING_2120298460");
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyID_114);
      UndlyInstrumentParties_NoUndlyInstrumentParties_114.insert(UnderlyingInstrumentPartyID_114.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_114('6');
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyIDSource_114);
      UndlyInstrumentParties_NoUndlyInstrumentParties_114.insert(UnderlyingInstrumentPartyIDSource_114.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_114(120287944);
      noUndlyInstrumentParties_2_1_1.set(UnderlyingInstrumentPartyRole_114);
      UndlyInstrumentParties_NoUndlyInstrumentParties_114.insert(UnderlyingInstrumentPartyRole_114.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_114);

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_223("STRING_1533013464");
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubID_223);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223.insert(UnderlyingInstrumentPartySubID_223.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_223(1953451201);
        noUndlyInstrumentPartySubIDs_2_1_2_0.set(UnderlyingInstrumentPartySubIDType_223);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223.insert(UnderlyingInstrumentPartySubIDType_223.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::MassQuote::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_224("STRING_2082695362");
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubID_224);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224.insert(UnderlyingInstrumentPartySubID_224.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_224(1111617043);
        noUndlyInstrumentPartySubIDs_2_1_2_1.set(UnderlyingInstrumentPartySubIDType_224);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224.insert(UnderlyingInstrumentPartySubIDType_224.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224);

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      noQuoteSets_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    msg.addGroup(noQuoteSets_0_2);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
